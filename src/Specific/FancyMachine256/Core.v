(** * A Fancy Machine with 256-bit registers *)
Require Import Coq.Classes.RelationClasses Coq.Classes.Morphisms.
Require Import Coq.PArith.BinPos Coq.micromega.Psatz.
Require Export Coq.ZArith.ZArith Coq.Lists.List.
Require Import Crypto.Util.Decidable.
Require Export Crypto.BoundedArithmetic.Interface.
Require Export Crypto.BoundedArithmetic.ArchitectureToZLike.
Require Export Crypto.BoundedArithmetic.ArchitectureToZLikeProofs.
Require Export Crypto.Util.Tuple.
Require Import Crypto.Util.Option Crypto.Util.Sigma Crypto.Util.Prod.
Require Export Crypto.Reflection.Named.Syntax.
Require Import Crypto.Reflection.Named.DeadCodeElimination.
Require Import Crypto.Reflection.CountLets.
Require Import Crypto.Reflection.Named.ContextOn.
Require Export Crypto.Reflection.Syntax.
Require Import Crypto.Reflection.Linearize.
Require Import Crypto.Reflection.Inline.
Require Import Crypto.Reflection.CommonSubexpressionElimination.
Require Export Crypto.Reflection.Reify.
Require Export Crypto.Util.ZUtil.
Require Export Crypto.Util.Notations.
Require Import Crypto.Util.ListUtil.
Export ListNotations.

Open Scope Z_scope.
Local Notation eta x := (fst x, snd x).
Local Notation eta3 x := (eta (fst x), snd x).
Local Notation eta3' x := (fst x, eta (snd x)).

(** ** Reflective Assembly Syntax *)
Section reflection.
  Context (ops : fancy_machine.instructions (2 * 128)).
  Local Set Boolean Equality Schemes.
  Local Set Decidable Equality Schemes.
  Inductive base_type := TZ | Tbool | TW.
  Global Instance dec_base_type : DecidableRel (@eq base_type)
    := base_type_eq_dec.
  Definition interp_base_type (v : base_type) : Type :=
    match v with
    | TZ => Z
    | Tbool => bool
    | TW => fancy_machine.W
    end.
  Local Notation tZ := (Tbase TZ).
  Local Notation tbool := (Tbase Tbool).
  Local Notation tW := (Tbase TW).
  Local Open Scope ctype_scope.
  Inductive op : flat_type base_type -> flat_type base_type -> Type :=
  | OPldi     : op tZ tW
  | OPshrd    : op (tW * tW * tZ) tW
  | OPshl     : op (tW * tZ) tW
  | OPshr     : op (tW * tZ) tW
  | OPmkl     : op (tW * tZ) tW
  | OPadc     : op (tW * tW * tbool) (tbool * tW)
  | OPsubc    : op (tW * tW * tbool) (tbool * tW)
  | OPmulhwll : op (tW * tW) tW
  | OPmulhwhl : op (tW * tW) tW
  | OPmulhwhh : op (tW * tW) tW
  | OPselc    : op (tbool * tW * tW) tW
  | OPaddm    : op (tW * tW * tW) tW.

  Definition interp_op src dst (f : op src dst)
    : interp_flat_type_gen interp_base_type src -> interp_flat_type_gen interp_base_type dst
    := match f in op s d return interp_flat_type_gen _ s -> interp_flat_type_gen _ d with
       | OPldi     => ldi
       | OPshrd    => fun xyz => let '(x, y, z) := eta3 xyz in shrd x y z
       | OPshl     => fun xy => let '(x, y) := eta xy in shl x y
       | OPshr     => fun xy => let '(x, y) := eta xy in shr x y
       | OPmkl     => fun xy => let '(x, y) := eta xy in mkl x y
       | OPadc     => fun xyz => let '(x, y, z) := eta3 xyz in adc x y z
       | OPsubc    => fun xyz => let '(x, y, z) := eta3 xyz in subc x y z
       | OPmulhwll => fun xy => let '(x, y) := eta xy in mulhwll x y
       | OPmulhwhl => fun xy => let '(x, y) := eta xy in mulhwhl x y
       | OPmulhwhh => fun xy => let '(x, y) := eta xy in mulhwhh x y
       | OPselc    => fun xyz => let '(x, y, z) := eta3 xyz in selc x y z
       | OPaddm    => fun xyz => let '(x, y, z) := eta3 xyz in addm x y z
       end.

  Inductive SConstT := ZConst (_ : Z) | BoolConst (_ : bool) | INVALID_CONST.
  Inductive op_code : Set :=
  | SOPldi | SOPshrd | SOPshl | SOPshr | SOPmkl | SOPadc | SOPsubc
  | SOPmulhwll | SOPmulhwhl | SOPmulhwhh | SOPselc | SOPaddm.

  Definition symbolicify_const (t : base_type) : interp_base_type t -> SConstT
    := match t with
       | TZ => fun x => ZConst x
       | Tbool => fun x => BoolConst x
       | TW => fun x => INVALID_CONST
       end.
  Definition symbolicify_op s d (v : op s d) : op_code
    := match v with
       | OPldi => SOPldi
       | OPshrd => SOPshrd
       | OPshl => SOPshl
       | OPshr => SOPshr
       | OPmkl => SOPmkl
       | OPadc => SOPadc
       | OPsubc => SOPsubc
       | OPmulhwll => SOPmulhwll
       | OPmulhwhl => SOPmulhwhl
       | OPmulhwhh => SOPmulhwhh
       | OPselc => SOPselc
       | OPaddm => SOPaddm
       end.

  Definition CSE {t} e := @CSE base_type SConstT op_code base_type_beq SConstT_beq op_code_beq internal_base_type_dec_bl interp_base_type op symbolicify_const symbolicify_op t e (fun _ => nil).

  Inductive inline_option := opt_inline | opt_default | opt_noinline.

  Definition postprocess var t (e : @exprf base_type interp_base_type op var t)
    : @inline_directive base_type interp_base_type op var t
    := let opt : inline_option
           := match e with
              | Op _ _ OPshl _ => opt_inline
              | Op _ _ OPshr _ => opt_inline
              | _ => opt_default
              end in
       match opt with
       | opt_noinline => no_inline e
       | opt_default => default_inline e
       | opt_inline => match t as t' return exprf _ _ _ t' -> inline_directive t' with
                       | Tbase _ => fun e => inline e
                       | _ => fun e => default_inline e
                       end e
       end.

  Definition Inline {t} e := @InlineConstGen base_type interp_base_type op postprocess t e.
End reflection.

Ltac base_reify_op op op_head ::=
     lazymatch op_head with
     | @Interface.ldi => constr:(reify_op op op_head 1 OPldi)
     | @Interface.shrd => constr:(reify_op op op_head 3 OPshrd)
     | @Interface.shl => constr:(reify_op op op_head 2 OPshl)
     | @Interface.shr => constr:(reify_op op op_head 2 OPshr)
     | @Interface.mkl => constr:(reify_op op op_head 2 OPmkl)
     | @Interface.adc => constr:(reify_op op op_head 3 OPadc)
     | @Interface.subc => constr:(reify_op op op_head 3 OPsubc)
     | @Interface.mulhwll => constr:(reify_op op op_head 2 OPmulhwll)
     | @Interface.mulhwhl => constr:(reify_op op op_head 2 OPmulhwhl)
     | @Interface.mulhwhh => constr:(reify_op op op_head 2 OPmulhwhh)
     | @Interface.selc => constr:(reify_op op op_head 3 OPselc)
     | @Interface.addm => constr:(reify_op op op_head 3 OPaddm)
     end.
Ltac base_reify_type T ::=
     match T with
     | Z => TZ
     | bool => Tbool
     | fancy_machine.W => TW
     end.

Ltac Reify' e := Reify.Reify' base_type (interp_base_type _) op e.
Ltac Reify e :=
  let v := Reify.Reify base_type (interp_base_type _) op e in
  constr:(Inline _ (CSE _ (InlineConst (Linearize v)))).
(*Ltac Reify_rhs := Reify.Reify_rhs base_type (interp_base_type _) op (interp_op _).*)

(** ** Raw Syntax Trees *)
(** These are used solely for pretty-printing the expression tree in a
    form that can be basically copy-pasted into other languages which
    can be compiled for the Fancy Machine.  Hypothetically, we could
    add support for custom named identifiers, by carrying around
    [string] identifiers and using them for pretty-printing...  It
    might also be possible to verify this layer, too, by adding a
    partial interpretation function... *)

Local Set Decidable Equality Schemes.
Local Set Boolean Equality Schemes.

Inductive Register :=
| RegPInv | RegMod | RegMuLow | RegZero
| y | t1 | t2 | lo | hi | out | src1 | src2 | tmp | q | qHigh | x | xHigh
| SpecialCarryBit
| scratch | scratchplus (n : nat).

Notation "'scratch+' n" := (scratchplus n) (format "'scratch+' n", at level 10).

Definition pos_of_Register (r : Register) :=
  match r with
  | RegPInv => 1
  | RegMod => 2
  | RegMuLow => 3
  | RegZero => 4
  | y => 5
  | t1 => 6
  | t2 => 7
  | lo => 8
  | hi => 9
  | out => 10
  | src1 => 11
  | src2 => 12
  | tmp => 13
  | q => 14
  | qHigh => 15
  | x => 16
  | xHigh => 17
  | SpecialCarryBit => 18
  | scratch => 19
  | scratchplus n => 19 + Pos.of_nat (S n)
  end%positive.

Lemma pos_of_Register_inj x y : pos_of_Register x = pos_of_Register y -> x = y.
Proof.
  unfold pos_of_Register; repeat break_match; subst;
    try rewrite Pos.add_cancel_l; try rewrite Nat2Pos.inj_iff;
      try solve [ simpl; congruence | intros; exfalso; lia ].
Qed.

Global Instance RegisterContext {var : base_type -> Type} : Context Register var
  := ContextOn pos_of_Register (RegisterAssign.pos_context var).

Definition syntax {ops : fancy_machine.instructions (2 * 128)}
  := Named.expr base_type (interp_base_type ops) op Register.

Class wf_empty {ops} {var} {t} (e : Named.expr base_type (interp_base_type ops) op Register t)
  := mk_wf_empty : @Named.wf base_type (interp_base_type ops) op Register var _ empty t e.
Global Hint Extern 0 (wf_empty _) => vm_compute; intros; constructor : typeclass_instances.

(** Assemble a well-typed easily interpretable expression into a
    syntax tree we can use for pretty-printing. *)
Section assemble.
  Context {ops : fancy_machine.instructions (2 * 128)}.

  Definition AssembleSyntax' {t} (e : Expr base_type (interp_base_type _) op t) (ls : list Register)
    : option (syntax t)
    := CompileAndEliminateDeadCode e ls.
  Definition AssembleSyntax {t} e ls (res := @AssembleSyntax' t e ls)
    := match res return match res with None => _ | _ => _ end with
       | Some v => v
       | None => I
       end.

  Definition dummy_registers (n : nat) : list Register
    := List.map scratchplus (seq 0 n).
  Definition DefaultRegisters {t} (e : Expr base_type (interp_base_type _) op t) : list Register
    := dummy_registers (CountBinders e).

  Definition DefaultAssembleSyntax {t} e := @AssembleSyntax t e (DefaultRegisters e).

  Definition Interp {t} e {wf : wf_empty e}
    := @Named.interp base_type (interp_base_type _) op Register _ (interp_op _) empty t e wf.
End assemble.

Export Reflection.Named.Syntax.
Open Scope nexpr_scope.
Open Scope ctype_scope.
Open Scope type_scope.
Open Scope core_scope.

Notation Return x := (Var x).
Notation ldi z := (Op OPldi (Const z%Z)).
Notation "'slet' x := A 'in' b" := (LetIn _ x (Op OPldi (Var A%nexpr)) b%nexpr) : nexpr_scope.
Notation "'c.Rshi' ( x , A , B , C ) , b" :=
  (LetIn _ x (Op OPshrd (Pair (Pair (Var A) (Var B)) (Const C%Z))) b)
    (at level 200, b at level 200, format "'c.Rshi' ( x ,  A ,  B ,  C ) , '//' b").
Notation "'c.Mul128' ( x , 'c.UpperHalf' ( A ) , 'c.UpperHalf' ( B ) ) , b" :=
  (LetIn _ x (Op OPmulhwhh (Pair (Var A) (Var B))) b)
    (at level 200, b at level 200, format "'c.Mul128' ( x ,  'c.UpperHalf' ( A ) ,  'c.UpperHalf' ( B ) ) , '//' b").
Notation "'c.Mul128' ( x , 'c.UpperHalf' ( A ) , 'c.LowerHalf' ( B ) ) , b" :=
  (LetIn _ x (Op OPmulhwhl (Pair (Var A) (Var B))) b)
    (at level 200, b at level 200, format "'c.Mul128' ( x ,  'c.UpperHalf' ( A ) ,  'c.LowerHalf' ( B ) ) , '//' b").
Notation "'c.Mul128' ( x , 'c.LowerHalf' ( A ) , 'c.LowerHalf' ( B ) ) , b" :=
  (LetIn _ x (Op OPmulhwll (Pair (Var A) (Var B))) b)
    (at level 200, b at level 200, format "'c.Mul128' ( x ,  'c.LowerHalf' ( A ) ,  'c.LowerHalf' ( B ) ) , '//' b").
Notation "'c.LeftShifted' { x , v }" :=
  (Op OPshl (Pair (Var x) (Const v%Z)))
    (at level 200, format "'c.LeftShifted' { x ,  v }").
Notation "'c.RightShifted' { x , v }" :=
  (Op OPshr (Pair (Var x) (Const v%Z)))
    (at level 200, format "'c.RightShifted' { x ,  v }").

Notation "'c.Add' ( x , A , B ) , b" :=
  (LetIn _ (pair SpecialCarryBit x) (Op OPadc (Pair (Pair A B) (Const false))) b)
    (at level 200, b at level 200, format "'c.Add' ( x ,  A ,  B ) , '//' b").
Notation "'c.Add' ( x , A , B ) , b" :=
  (LetIn _ (pair SpecialCarryBit x) (Op OPadc (Pair (Pair (Var A) B) (Const false))) b)
    (at level 200, b at level 200, format "'c.Add' ( x ,  A ,  B ) , '//' b").
Notation "'c.Add' ( x , A , B ) , b" :=
  (LetIn _ (pair SpecialCarryBit x) (Op OPadc (Pair (Pair A (Var B)) (Const false))) b)
    (at level 200, b at level 200, format "'c.Add' ( x ,  A ,  B ) , '//' b").
Notation "'c.Add' ( x , A , B ) , b" :=
  (LetIn _ (pair SpecialCarryBit x) (Op OPadc (Pair (Pair (Var A) (Var B)) (Const false))) b)
    (at level 200, b at level 200, format "'c.Add' ( x ,  A ,  B ) , '//' b").
Notation "'c.Addc' ( x , A , B ) , b" :=
  (LetIn _ (pair SpecialCarryBit x) (Op OPadc (Pair (Pair A B) (Var SpecialCarryBit))) b)
    (at level 200, b at level 200, format "'c.Addc' ( x ,  A ,  B ) , '//' b").
Notation "'c.Addc' ( x , A , B ) , b" :=
  (LetIn _ (pair SpecialCarryBit x) (Op OPadc (Pair (Pair (Var A) B) (Var SpecialCarryBit))) b)
    (at level 200, b at level 200, format "'c.Addc' ( x ,  A ,  B ) , '//' b").
Notation "'c.Addc' ( x , A , B ) , b" :=
  (LetIn _ (pair SpecialCarryBit x) (Op OPadc (Pair (Pair A (Var B)) (Var SpecialCarryBit))) b)
    (at level 200, b at level 200, format "'c.Addc' ( x ,  A ,  B ) , '//' b").
Notation "'c.Addc' ( x , A , B ) , b" :=
  (LetIn _ (pair SpecialCarryBit x) (Op OPadc (Pair (Pair (Var A) (Var B)) (Var SpecialCarryBit))) b)
    (at level 200, b at level 200, format "'c.Addc' ( x ,  A ,  B ) , '//' b").

Notation "'c.Sub' ( x , A , B ) , b" :=
  (LetIn _ (pair SpecialCarryBit x) (Op OPsubc (Pair (Pair A B) (Const false))) b)
    (at level 200, b at level 200, format "'c.Sub' ( x ,  A ,  B ) , '//' b").
Notation "'c.Sub' ( x , A , B ) , b" :=
  (LetIn _ (pair SpecialCarryBit x) (Op OPsubc (Pair (Pair (Var A) B) (Const false))) b)
    (at level 200, b at level 200, format "'c.Sub' ( x ,  A ,  B ) , '//' b").
Notation "'c.Sub' ( x , A , B ) , b" :=
  (LetIn _ (pair SpecialCarryBit x) (Op OPsubc (Pair (Pair A (Var B)) (Const false))) b)
    (at level 200, b at level 200, format "'c.Sub' ( x ,  A ,  B ) , '//' b").
Notation "'c.Sub' ( x , A , B ) , b" :=
  (LetIn _ (pair SpecialCarryBit x) (Op OPsubc (Pair (Pair (Var A) (Var B)) (Const false))) b)
    (at level 200, b at level 200, format "'c.Sub' ( x ,  A ,  B ) , '//' b").

Notation "'c.Addm' ( x , A , B ) , b" :=
  (LetIn _ x (Op OPaddm (Pair (Pair A B) (Var RegMod))) b)
    (at level 200, b at level 200, format "'c.Addm' ( x ,  A ,  B ) , '//' b").
Notation "'c.Addm' ( x , A , B ) , b" :=
  (LetIn _ x (Op OPaddm (Pair (Pair (Var A) B) (Var RegMod))) b)
    (at level 200, b at level 200, format "'c.Addm' ( x ,  A ,  B ) , '//' b").
Notation "'c.Addm' ( x , A , B ) , b" :=
  (LetIn _ x (Op OPaddm (Pair (Pair A (Var B)) (Var RegMod))) b)
    (at level 200, b at level 200, format "'c.Addm' ( x ,  A ,  B ) , '//' b").
Notation "'c.Addm' ( x , A , B ) , b" :=
  (LetIn _ x (Op OPaddm (Pair (Pair (Var A) (Var B)) (Var RegMod))) b)
    (at level 200, b at level 200, format "'c.Addm' ( x ,  A ,  B ) , '//' b").

Notation "'c.Selc' ( x , A , B ) , b" :=
  (LetIn _ x (Op OPselc (Pair (Pair (Var SpecialCarryBit) A) B)) b)
    (at level 200, b at level 200, format "'c.Selc' ( x ,  A ,  B ) , '//' b").
Notation "'c.Selc' ( x , A , B ) , b" :=
  (LetIn _ x (Op OPselc (Pair (Pair (Var SpecialCarryBit) (Var A)) B)) b)
    (at level 200, b at level 200, format "'c.Selc' ( x ,  A ,  B ) , '//' b").
Notation "'c.Selc' ( x , A , B ) , b" :=
  (LetIn _ x (Op OPselc (Pair (Pair (Var SpecialCarryBit) A) (Var B))) b)
    (at level 200, b at level 200, format "'c.Selc' ( x ,  A ,  B ) , '//' b").
Notation "'c.Selc' ( x , A , B ) , b" :=
  (LetIn _ x (Op OPselc (Pair (Pair (Var SpecialCarryBit) (Var A)) (Var B))) b)
    (at level 200, b at level 200, format "'c.Selc' ( x ,  A ,  B ) , '//' b").
