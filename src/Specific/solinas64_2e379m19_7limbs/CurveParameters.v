Require Import Crypto.Specific.Framework.RawCurveParameters.
Require Import Crypto.Util.LetIn.

(***
Modulus : 2^379 - 19
Base: 54 + 1/7
***)

Definition curve : CurveParameters :=
  {|
    sz := 7%nat;
    base := 54 + 1/7;
    bitwidth := 64;
    s := 2^379;
    c := [(1, 19)];
    carry_chains := Some [seq 0 (pred 7); [0; 1]]%nat;

    a24 := None;
    coef_div_modulus := Some 2%nat;

    goldilocks := None;
    karatsuba := None;
    montgomery := false;
    freeze := Some true;
    ladderstep := false;

    mul_code := None;

    square_code := None;

    upper_bound_of_exponent_loose := None;
    upper_bound_of_exponent_tight := None;
    allowable_bit_widths := None;
    freeze_extra_allowable_bit_widths := None;
    modinv_fuel := None
  |}.

Ltac extra_prove_mul_eq _ := idtac.
Ltac extra_prove_square_eq _ := idtac.
