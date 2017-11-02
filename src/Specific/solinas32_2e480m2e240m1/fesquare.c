#include <stdint.h>
#include <stdbool.h>
#include <x86intrin.h>
#include "liblow.h"

#include "fesquare.h"

typedef unsigned int uint128_t __attribute__((mode(TI)));

#if (defined(__GNUC__) || defined(__GNUG__)) && !(defined(__clang__)||defined(__INTEL_COMPILER))
// https://gcc.gnu.org/bugzilla/show_bug.cgi?id=81294
#define _subborrow_u32 __builtin_ia32_sbb_u32
#define _subborrow_u64 __builtin_ia32_sbb_u64
#endif

#undef force_inline
#define force_inline __attribute__((always_inline))

void force_inline fesquare(uint64_t* out, uint64_t x29, uint64_t x30, uint64_t x28, uint64_t x26, uint64_t x24, uint64_t x22, uint64_t x20, uint64_t x18, uint64_t x16, uint64_t x14, uint64_t x12, uint64_t x10, uint64_t x8, uint64_t x6, uint64_t x4, uint64_t x2)
{  ℤ x31 = Op (Syntax.IdWithAlt Syntax.TZ Syntax.TZ Syntax.TZ) (((((uint64_t)x16 + x29) *ℤ ((uint64_t)x16 + x29)) -ℤ ((uint64_t)x16 * x16)), ((((uint64_t)x16 * x29) +ℤ ((uint64_t)x29 * x16)) +ℤ ((uint64_t)x29 * x29)));
{  ℤ x32 = Op (Syntax.IdWithAlt Syntax.TZ Syntax.TZ Syntax.TZ) ((((((uint64_t)x14 + x30) *ℤ ((uint64_t)x16 + x29)) +ℤ (((uint64_t)x16 + x29) *ℤ ((uint64_t)x14 + x30))) -ℤ (((uint64_t)x14 * x16) +ℤ ((uint64_t)x16 * x14))), (((((uint64_t)x14 * x29) +ℤ ((uint64_t)x16 * x30)) +ℤ (((uint64_t)x30 * x16) +ℤ ((uint64_t)x29 * x14))) +ℤ (((uint64_t)x30 * x29) +ℤ ((uint64_t)x29 * x30))));
{  ℤ x33 = Op (Syntax.IdWithAlt Syntax.TZ Syntax.TZ Syntax.TZ) ((((((uint64_t)x12 + x28) *ℤ ((uint64_t)x16 + x29)) +ℤ ((((uint64_t)x14 + x30) *ℤ ((uint64_t)x14 + x30)) +ℤ (((uint64_t)x16 + x29) *ℤ ((uint64_t)x12 + x28)))) -ℤ (((uint64_t)x12 * x16) +ℤ (((uint64_t)x14 * x14) +ℤ ((uint64_t)x16 * x12)))), (((((uint64_t)x12 * x29) +ℤ (((uint64_t)x14 * x30) +ℤ ((uint64_t)x16 * x28))) +ℤ (((uint64_t)x28 * x16) +ℤ (((uint64_t)x30 * x14) +ℤ ((uint64_t)x29 * x12)))) +ℤ (((uint64_t)x28 * x29) +ℤ (((uint64_t)x30 * x30) +ℤ ((uint64_t)x29 * x28)))));
{  ℤ x34 = Op (Syntax.IdWithAlt Syntax.TZ Syntax.TZ Syntax.TZ) ((((((uint64_t)x10 + x26) *ℤ ((uint64_t)x16 + x29)) +ℤ ((((uint64_t)x12 + x28) *ℤ ((uint64_t)x14 + x30)) +ℤ ((((uint64_t)x14 + x30) *ℤ ((uint64_t)x12 + x28)) +ℤ (((uint64_t)x16 + x29) *ℤ ((uint64_t)x10 + x26))))) -ℤ (((uint64_t)x10 * x16) +ℤ (((uint64_t)x12 * x14) +ℤ (((uint64_t)x14 * x12) +ℤ ((uint64_t)x16 * x10))))), (((((uint64_t)x10 * x29) +ℤ (((uint64_t)x12 * x30) +ℤ (((uint64_t)x14 * x28) +ℤ ((uint64_t)x16 * x26)))) +ℤ (((uint64_t)x26 * x16) +ℤ (((uint64_t)x28 * x14) +ℤ (((uint64_t)x30 * x12) +ℤ ((uint64_t)x29 * x10))))) +ℤ (((uint64_t)x26 * x29) +ℤ (((uint64_t)x28 * x30) +ℤ (((uint64_t)x30 * x28) +ℤ ((uint64_t)x29 * x26))))));
{  ℤ x35 = Op (Syntax.IdWithAlt Syntax.TZ Syntax.TZ Syntax.TZ) ((((((uint64_t)x8 + x24) *ℤ ((uint64_t)x16 + x29)) +ℤ ((((uint64_t)x10 + x26) *ℤ ((uint64_t)x14 + x30)) +ℤ ((((uint64_t)x12 + x28) *ℤ ((uint64_t)x12 + x28)) +ℤ ((((uint64_t)x14 + x30) *ℤ ((uint64_t)x10 + x26)) +ℤ (((uint64_t)x16 + x29) *ℤ ((uint64_t)x8 + x24)))))) -ℤ (((uint64_t)x8 * x16) +ℤ (((uint64_t)x10 * x14) +ℤ (((uint64_t)x12 * x12) +ℤ (((uint64_t)x14 * x10) +ℤ ((uint64_t)x16 * x8)))))), (((((uint64_t)x8 * x29) +ℤ (((uint64_t)x10 * x30) +ℤ (((uint64_t)x12 * x28) +ℤ (((uint64_t)x14 * x26) +ℤ ((uint64_t)x16 * x24))))) +ℤ (((uint64_t)x24 * x16) +ℤ (((uint64_t)x26 * x14) +ℤ (((uint64_t)x28 * x12) +ℤ (((uint64_t)x30 * x10) +ℤ ((uint64_t)x29 * x8)))))) +ℤ (((uint64_t)x24 * x29) +ℤ (((uint64_t)x26 * x30) +ℤ (((uint64_t)x28 * x28) +ℤ (((uint64_t)x30 * x26) +ℤ ((uint64_t)x29 * x24)))))));
{  ℤ x36 = Op (Syntax.IdWithAlt Syntax.TZ Syntax.TZ Syntax.TZ) ((((((uint64_t)x6 + x22) *ℤ ((uint64_t)x16 + x29)) +ℤ ((((uint64_t)x8 + x24) *ℤ ((uint64_t)x14 + x30)) +ℤ ((((uint64_t)x10 + x26) *ℤ ((uint64_t)x12 + x28)) +ℤ ((((uint64_t)x12 + x28) *ℤ ((uint64_t)x10 + x26)) +ℤ ((((uint64_t)x14 + x30) *ℤ ((uint64_t)x8 + x24)) +ℤ (((uint64_t)x16 + x29) *ℤ ((uint64_t)x6 + x22))))))) -ℤ (((uint64_t)x6 * x16) +ℤ (((uint64_t)x8 * x14) +ℤ (((uint64_t)x10 * x12) +ℤ (((uint64_t)x12 * x10) +ℤ (((uint64_t)x14 * x8) +ℤ ((uint64_t)x16 * x6))))))), (((((uint64_t)x6 * x29) +ℤ (((uint64_t)x8 * x30) +ℤ (((uint64_t)x10 * x28) +ℤ (((uint64_t)x12 * x26) +ℤ (((uint64_t)x14 * x24) +ℤ ((uint64_t)x16 * x22)))))) +ℤ (((uint64_t)x22 * x16) +ℤ (((uint64_t)x24 * x14) +ℤ (((uint64_t)x26 * x12) +ℤ (((uint64_t)x28 * x10) +ℤ (((uint64_t)x30 * x8) +ℤ ((uint64_t)x29 * x6))))))) +ℤ (((uint64_t)x22 * x29) +ℤ (((uint64_t)x24 * x30) +ℤ (((uint64_t)x26 * x28) +ℤ (((uint64_t)x28 * x26) +ℤ (((uint64_t)x30 * x24) +ℤ ((uint64_t)x29 * x22))))))));
{  ℤ x37 = Op (Syntax.IdWithAlt Syntax.TZ Syntax.TZ Syntax.TZ) ((((((uint64_t)x4 + x20) *ℤ ((uint64_t)x16 + x29)) +ℤ ((((uint64_t)x6 + x22) *ℤ ((uint64_t)x14 + x30)) +ℤ ((((uint64_t)x8 + x24) *ℤ ((uint64_t)x12 + x28)) +ℤ ((((uint64_t)x10 + x26) *ℤ ((uint64_t)x10 + x26)) +ℤ ((((uint64_t)x12 + x28) *ℤ ((uint64_t)x8 + x24)) +ℤ ((((uint64_t)x14 + x30) *ℤ ((uint64_t)x6 + x22)) +ℤ (((uint64_t)x16 + x29) *ℤ ((uint64_t)x4 + x20)))))))) -ℤ (((uint64_t)x4 * x16) +ℤ (((uint64_t)x6 * x14) +ℤ (((uint64_t)x8 * x12) +ℤ (((uint64_t)x10 * x10) +ℤ (((uint64_t)x12 * x8) +ℤ (((uint64_t)x14 * x6) +ℤ ((uint64_t)x16 * x4)))))))), (((((uint64_t)x4 * x29) +ℤ (((uint64_t)x6 * x30) +ℤ (((uint64_t)x8 * x28) +ℤ (((uint64_t)x10 * x26) +ℤ (((uint64_t)x12 * x24) +ℤ (((uint64_t)x14 * x22) +ℤ ((uint64_t)x16 * x20))))))) +ℤ (((uint64_t)x20 * x16) +ℤ (((uint64_t)x22 * x14) +ℤ (((uint64_t)x24 * x12) +ℤ (((uint64_t)x26 * x10) +ℤ (((uint64_t)x28 * x8) +ℤ (((uint64_t)x30 * x6) +ℤ ((uint64_t)x29 * x4)))))))) +ℤ (((uint64_t)x20 * x29) +ℤ (((uint64_t)x22 * x30) +ℤ (((uint64_t)x24 * x28) +ℤ (((uint64_t)x26 * x26) +ℤ (((uint64_t)x28 * x24) +ℤ (((uint64_t)x30 * x22) +ℤ ((uint64_t)x29 * x20)))))))));
{  ℤ x38 = Op (Syntax.IdWithAlt Syntax.TZ Syntax.TZ Syntax.TZ) ((((((uint64_t)x2 + x18) *ℤ ((uint64_t)x16 + x29)) +ℤ ((((uint64_t)x4 + x20) *ℤ ((uint64_t)x14 + x30)) +ℤ ((((uint64_t)x6 + x22) *ℤ ((uint64_t)x12 + x28)) +ℤ ((((uint64_t)x8 + x24) *ℤ ((uint64_t)x10 + x26)) +ℤ ((((uint64_t)x10 + x26) *ℤ ((uint64_t)x8 + x24)) +ℤ ((((uint64_t)x12 + x28) *ℤ ((uint64_t)x6 + x22)) +ℤ ((((uint64_t)x14 + x30) *ℤ ((uint64_t)x4 + x20)) +ℤ (((uint64_t)x16 + x29) *ℤ ((uint64_t)x2 + x18))))))))) -ℤ (((uint64_t)x2 * x16) +ℤ (((uint64_t)x4 * x14) +ℤ (((uint64_t)x6 * x12) +ℤ (((uint64_t)x8 * x10) +ℤ (((uint64_t)x10 * x8) +ℤ (((uint64_t)x12 * x6) +ℤ (((uint64_t)x14 * x4) +ℤ ((uint64_t)x16 * x2))))))))), (((((uint64_t)x2 * x29) +ℤ (((uint64_t)x4 * x30) +ℤ (((uint64_t)x6 * x28) +ℤ (((uint64_t)x8 * x26) +ℤ (((uint64_t)x10 * x24) +ℤ (((uint64_t)x12 * x22) +ℤ (((uint64_t)x14 * x20) +ℤ ((uint64_t)x16 * x18)))))))) +ℤ (((uint64_t)x18 * x16) +ℤ (((uint64_t)x20 * x14) +ℤ (((uint64_t)x22 * x12) +ℤ (((uint64_t)x24 * x10) +ℤ (((uint64_t)x26 * x8) +ℤ (((uint64_t)x28 * x6) +ℤ (((uint64_t)x30 * x4) +ℤ ((uint64_t)x29 * x2))))))))) +ℤ (((uint64_t)x18 * x29) +ℤ (((uint64_t)x20 * x30) +ℤ (((uint64_t)x22 * x28) +ℤ (((uint64_t)x24 * x26) +ℤ (((uint64_t)x26 * x24) +ℤ (((uint64_t)x28 * x22) +ℤ (((uint64_t)x30 * x20) +ℤ ((uint64_t)x29 * x18))))))))));
{  ℤ x39 = Op (Syntax.IdWithAlt Syntax.TZ Syntax.TZ Syntax.TZ) ((((((uint64_t)x2 + x18) *ℤ ((uint64_t)x14 + x30)) +ℤ ((((uint64_t)x4 + x20) *ℤ ((uint64_t)x12 + x28)) +ℤ ((((uint64_t)x6 + x22) *ℤ ((uint64_t)x10 + x26)) +ℤ ((((uint64_t)x8 + x24) *ℤ ((uint64_t)x8 + x24)) +ℤ ((((uint64_t)x10 + x26) *ℤ ((uint64_t)x6 + x22)) +ℤ ((((uint64_t)x12 + x28) *ℤ ((uint64_t)x4 + x20)) +ℤ (((uint64_t)x14 + x30) *ℤ ((uint64_t)x2 + x18)))))))) -ℤ (((uint64_t)x2 * x14) +ℤ (((uint64_t)x4 * x12) +ℤ (((uint64_t)x6 * x10) +ℤ (((uint64_t)x8 * x8) +ℤ (((uint64_t)x10 * x6) +ℤ (((uint64_t)x12 * x4) +ℤ ((uint64_t)x14 * x2)))))))), (((((uint64_t)x2 * x30) +ℤ (((uint64_t)x4 * x28) +ℤ (((uint64_t)x6 * x26) +ℤ (((uint64_t)x8 * x24) +ℤ (((uint64_t)x10 * x22) +ℤ (((uint64_t)x12 * x20) +ℤ ((uint64_t)x14 * x18))))))) +ℤ (((uint64_t)x18 * x14) +ℤ (((uint64_t)x20 * x12) +ℤ (((uint64_t)x22 * x10) +ℤ (((uint64_t)x24 * x8) +ℤ (((uint64_t)x26 * x6) +ℤ (((uint64_t)x28 * x4) +ℤ ((uint64_t)x30 * x2)))))))) +ℤ (((uint64_t)x18 * x30) +ℤ (((uint64_t)x20 * x28) +ℤ (((uint64_t)x22 * x26) +ℤ (((uint64_t)x24 * x24) +ℤ (((uint64_t)x26 * x22) +ℤ (((uint64_t)x28 * x20) +ℤ ((uint64_t)x30 * x18)))))))));
{  ℤ x40 = Op (Syntax.IdWithAlt Syntax.TZ Syntax.TZ Syntax.TZ) ((((((uint64_t)x2 + x18) *ℤ ((uint64_t)x12 + x28)) +ℤ ((((uint64_t)x4 + x20) *ℤ ((uint64_t)x10 + x26)) +ℤ ((((uint64_t)x6 + x22) *ℤ ((uint64_t)x8 + x24)) +ℤ ((((uint64_t)x8 + x24) *ℤ ((uint64_t)x6 + x22)) +ℤ ((((uint64_t)x10 + x26) *ℤ ((uint64_t)x4 + x20)) +ℤ (((uint64_t)x12 + x28) *ℤ ((uint64_t)x2 + x18))))))) -ℤ (((uint64_t)x2 * x12) +ℤ (((uint64_t)x4 * x10) +ℤ (((uint64_t)x6 * x8) +ℤ (((uint64_t)x8 * x6) +ℤ (((uint64_t)x10 * x4) +ℤ ((uint64_t)x12 * x2))))))), (((((uint64_t)x2 * x28) +ℤ (((uint64_t)x4 * x26) +ℤ (((uint64_t)x6 * x24) +ℤ (((uint64_t)x8 * x22) +ℤ (((uint64_t)x10 * x20) +ℤ ((uint64_t)x12 * x18)))))) +ℤ (((uint64_t)x18 * x12) +ℤ (((uint64_t)x20 * x10) +ℤ (((uint64_t)x22 * x8) +ℤ (((uint64_t)x24 * x6) +ℤ (((uint64_t)x26 * x4) +ℤ ((uint64_t)x28 * x2))))))) +ℤ (((uint64_t)x18 * x28) +ℤ (((uint64_t)x20 * x26) +ℤ (((uint64_t)x22 * x24) +ℤ (((uint64_t)x24 * x22) +ℤ (((uint64_t)x26 * x20) +ℤ ((uint64_t)x28 * x18))))))));
{  ℤ x41 = Op (Syntax.IdWithAlt Syntax.TZ Syntax.TZ Syntax.TZ) ((((((uint64_t)x2 + x18) *ℤ ((uint64_t)x10 + x26)) +ℤ ((((uint64_t)x4 + x20) *ℤ ((uint64_t)x8 + x24)) +ℤ ((((uint64_t)x6 + x22) *ℤ ((uint64_t)x6 + x22)) +ℤ ((((uint64_t)x8 + x24) *ℤ ((uint64_t)x4 + x20)) +ℤ (((uint64_t)x10 + x26) *ℤ ((uint64_t)x2 + x18)))))) -ℤ (((uint64_t)x2 * x10) +ℤ (((uint64_t)x4 * x8) +ℤ (((uint64_t)x6 * x6) +ℤ (((uint64_t)x8 * x4) +ℤ ((uint64_t)x10 * x2)))))), (((((uint64_t)x2 * x26) +ℤ (((uint64_t)x4 * x24) +ℤ (((uint64_t)x6 * x22) +ℤ (((uint64_t)x8 * x20) +ℤ ((uint64_t)x10 * x18))))) +ℤ (((uint64_t)x18 * x10) +ℤ (((uint64_t)x20 * x8) +ℤ (((uint64_t)x22 * x6) +ℤ (((uint64_t)x24 * x4) +ℤ ((uint64_t)x26 * x2)))))) +ℤ (((uint64_t)x18 * x26) +ℤ (((uint64_t)x20 * x24) +ℤ (((uint64_t)x22 * x22) +ℤ (((uint64_t)x24 * x20) +ℤ ((uint64_t)x26 * x18)))))));
{  ℤ x42 = Op (Syntax.IdWithAlt Syntax.TZ Syntax.TZ Syntax.TZ) ((((((uint64_t)x2 + x18) *ℤ ((uint64_t)x8 + x24)) +ℤ ((((uint64_t)x4 + x20) *ℤ ((uint64_t)x6 + x22)) +ℤ ((((uint64_t)x6 + x22) *ℤ ((uint64_t)x4 + x20)) +ℤ (((uint64_t)x8 + x24) *ℤ ((uint64_t)x2 + x18))))) -ℤ (((uint64_t)x2 * x8) +ℤ (((uint64_t)x4 * x6) +ℤ (((uint64_t)x6 * x4) +ℤ ((uint64_t)x8 * x2))))), (((((uint64_t)x2 * x24) +ℤ (((uint64_t)x4 * x22) +ℤ (((uint64_t)x6 * x20) +ℤ ((uint64_t)x8 * x18)))) +ℤ (((uint64_t)x18 * x8) +ℤ (((uint64_t)x20 * x6) +ℤ (((uint64_t)x22 * x4) +ℤ ((uint64_t)x24 * x2))))) +ℤ (((uint64_t)x18 * x24) +ℤ (((uint64_t)x20 * x22) +ℤ (((uint64_t)x22 * x20) +ℤ ((uint64_t)x24 * x18))))));
{  ℤ x43 = Op (Syntax.IdWithAlt Syntax.TZ Syntax.TZ Syntax.TZ) ((((((uint64_t)x2 + x18) *ℤ ((uint64_t)x6 + x22)) +ℤ ((((uint64_t)x4 + x20) *ℤ ((uint64_t)x4 + x20)) +ℤ (((uint64_t)x6 + x22) *ℤ ((uint64_t)x2 + x18)))) -ℤ (((uint64_t)x2 * x6) +ℤ (((uint64_t)x4 * x4) +ℤ ((uint64_t)x6 * x2)))), (((((uint64_t)x2 * x22) +ℤ (((uint64_t)x4 * x20) +ℤ ((uint64_t)x6 * x18))) +ℤ (((uint64_t)x18 * x6) +ℤ (((uint64_t)x20 * x4) +ℤ ((uint64_t)x22 * x2)))) +ℤ (((uint64_t)x18 * x22) +ℤ (((uint64_t)x20 * x20) +ℤ ((uint64_t)x22 * x18)))));
{  ℤ x44 = Op (Syntax.IdWithAlt Syntax.TZ Syntax.TZ Syntax.TZ) ((((((uint64_t)x2 + x18) *ℤ ((uint64_t)x4 + x20)) +ℤ (((uint64_t)x4 + x20) *ℤ ((uint64_t)x2 + x18))) -ℤ (((uint64_t)x2 * x4) +ℤ ((uint64_t)x4 * x2))), (((((uint64_t)x2 * x20) +ℤ ((uint64_t)x4 * x18)) +ℤ (((uint64_t)x18 * x4) +ℤ ((uint64_t)x20 * x2))) +ℤ (((uint64_t)x18 * x20) +ℤ ((uint64_t)x20 * x18))));
{  ℤ x45 = Op (Syntax.IdWithAlt Syntax.TZ Syntax.TZ Syntax.TZ) (((((uint64_t)x2 + x18) *ℤ ((uint64_t)x2 + x18)) -ℤ ((uint64_t)x2 * x2)), ((((uint64_t)x2 * x18) +ℤ ((uint64_t)x18 * x2)) +ℤ ((uint64_t)x18 * x18)));
{  ℤ x46 = (((((uint64_t)x16 * x16) +ℤ ((uint64_t)x29 * x29)) +ℤ x39) +ℤ x31);
{  ℤ x47 = ((((((uint64_t)x14 * x16) +ℤ ((uint64_t)x16 * x14)) +ℤ (((uint64_t)x30 * x29) +ℤ ((uint64_t)x29 * x30))) +ℤ x40) +ℤ x32);
{  ℤ x48 = ((((((uint64_t)x12 * x16) +ℤ (((uint64_t)x14 * x14) +ℤ ((uint64_t)x16 * x12))) +ℤ (((uint64_t)x28 * x29) +ℤ (((uint64_t)x30 * x30) +ℤ ((uint64_t)x29 * x28)))) +ℤ x41) +ℤ x33);
{  ℤ x49 = ((((((uint64_t)x10 * x16) +ℤ (((uint64_t)x12 * x14) +ℤ (((uint64_t)x14 * x12) +ℤ ((uint64_t)x16 * x10)))) +ℤ (((uint64_t)x26 * x29) +ℤ (((uint64_t)x28 * x30) +ℤ (((uint64_t)x30 * x28) +ℤ ((uint64_t)x29 * x26))))) +ℤ x42) +ℤ x34);
{  ℤ x50 = ((((((uint64_t)x8 * x16) +ℤ (((uint64_t)x10 * x14) +ℤ (((uint64_t)x12 * x12) +ℤ (((uint64_t)x14 * x10) +ℤ ((uint64_t)x16 * x8))))) +ℤ (((uint64_t)x24 * x29) +ℤ (((uint64_t)x26 * x30) +ℤ (((uint64_t)x28 * x28) +ℤ (((uint64_t)x30 * x26) +ℤ ((uint64_t)x29 * x24)))))) +ℤ x43) +ℤ x35);
{  ℤ x51 = ((((((uint64_t)x6 * x16) +ℤ (((uint64_t)x8 * x14) +ℤ (((uint64_t)x10 * x12) +ℤ (((uint64_t)x12 * x10) +ℤ (((uint64_t)x14 * x8) +ℤ ((uint64_t)x16 * x6)))))) +ℤ (((uint64_t)x22 * x29) +ℤ (((uint64_t)x24 * x30) +ℤ (((uint64_t)x26 * x28) +ℤ (((uint64_t)x28 * x26) +ℤ (((uint64_t)x30 * x24) +ℤ ((uint64_t)x29 * x22))))))) +ℤ x44) +ℤ x36);
{  ℤ x52 = ((((((uint64_t)x4 * x16) +ℤ (((uint64_t)x6 * x14) +ℤ (((uint64_t)x8 * x12) +ℤ (((uint64_t)x10 * x10) +ℤ (((uint64_t)x12 * x8) +ℤ (((uint64_t)x14 * x6) +ℤ ((uint64_t)x16 * x4))))))) +ℤ (((uint64_t)x20 * x29) +ℤ (((uint64_t)x22 * x30) +ℤ (((uint64_t)x24 * x28) +ℤ (((uint64_t)x26 * x26) +ℤ (((uint64_t)x28 * x24) +ℤ (((uint64_t)x30 * x22) +ℤ ((uint64_t)x29 * x20)))))))) +ℤ x45) +ℤ x37);
{  ℤ x53 = ((((uint64_t)x2 * x16) +ℤ (((uint64_t)x4 * x14) +ℤ (((uint64_t)x6 * x12) +ℤ (((uint64_t)x8 * x10) +ℤ (((uint64_t)x10 * x8) +ℤ (((uint64_t)x12 * x6) +ℤ (((uint64_t)x14 * x4) +ℤ ((uint64_t)x16 * x2)))))))) +ℤ (((uint64_t)x18 * x29) +ℤ (((uint64_t)x20 * x30) +ℤ (((uint64_t)x22 * x28) +ℤ (((uint64_t)x24 * x26) +ℤ (((uint64_t)x26 * x24) +ℤ (((uint64_t)x28 * x22) +ℤ (((uint64_t)x30 * x20) +ℤ ((uint64_t)x29 * x18)))))))));
{  ℤ x54 = (((((uint64_t)x2 * x14) +ℤ (((uint64_t)x4 * x12) +ℤ (((uint64_t)x6 * x10) +ℤ (((uint64_t)x8 * x8) +ℤ (((uint64_t)x10 * x6) +ℤ (((uint64_t)x12 * x4) +ℤ ((uint64_t)x14 * x2))))))) +ℤ (((uint64_t)x18 * x30) +ℤ (((uint64_t)x20 * x28) +ℤ (((uint64_t)x22 * x26) +ℤ (((uint64_t)x24 * x24) +ℤ (((uint64_t)x26 * x22) +ℤ (((uint64_t)x28 * x20) +ℤ ((uint64_t)x30 * x18)))))))) +ℤ x31);
{  ℤ x55 = (((((uint64_t)x2 * x12) +ℤ (((uint64_t)x4 * x10) +ℤ (((uint64_t)x6 * x8) +ℤ (((uint64_t)x8 * x6) +ℤ (((uint64_t)x10 * x4) +ℤ ((uint64_t)x12 * x2)))))) +ℤ (((uint64_t)x18 * x28) +ℤ (((uint64_t)x20 * x26) +ℤ (((uint64_t)x22 * x24) +ℤ (((uint64_t)x24 * x22) +ℤ (((uint64_t)x26 * x20) +ℤ ((uint64_t)x28 * x18))))))) +ℤ x32);
{  ℤ x56 = (((((uint64_t)x2 * x10) +ℤ (((uint64_t)x4 * x8) +ℤ (((uint64_t)x6 * x6) +ℤ (((uint64_t)x8 * x4) +ℤ ((uint64_t)x10 * x2))))) +ℤ (((uint64_t)x18 * x26) +ℤ (((uint64_t)x20 * x24) +ℤ (((uint64_t)x22 * x22) +ℤ (((uint64_t)x24 * x20) +ℤ ((uint64_t)x26 * x18)))))) +ℤ x33);
{  ℤ x57 = (((((uint64_t)x2 * x8) +ℤ (((uint64_t)x4 * x6) +ℤ (((uint64_t)x6 * x4) +ℤ ((uint64_t)x8 * x2)))) +ℤ (((uint64_t)x18 * x24) +ℤ (((uint64_t)x20 * x22) +ℤ (((uint64_t)x22 * x20) +ℤ ((uint64_t)x24 * x18))))) +ℤ x34);
{  ℤ x58 = (((((uint64_t)x2 * x6) +ℤ (((uint64_t)x4 * x4) +ℤ ((uint64_t)x6 * x2))) +ℤ (((uint64_t)x18 * x22) +ℤ (((uint64_t)x20 * x20) +ℤ ((uint64_t)x22 * x18)))) +ℤ x35);
{  ℤ x59 = (((((uint64_t)x2 * x4) +ℤ ((uint64_t)x4 * x2)) +ℤ (((uint64_t)x18 * x20) +ℤ ((uint64_t)x20 * x18))) +ℤ x36);
{  ℤ x60 = ((((uint64_t)x2 * x2) +ℤ ((uint64_t)x18 * x18)) +ℤ x37);
{  uint64_t x61 = (x53 >> 0x1e);
{  uint32_t x62 = (x53 & 0x3fffffff);
{  uint64_t x63 = (x38 >> 0x1e);
{  uint32_t x64 = (x38 & 0x3fffffff);
{  ℤ x65 = ((0x40000000 *ℤ x63) +ℤ x64);
{  uint64_t x66 = (x65 >> 0x1e);
{  uint32_t x67 = (x65 & 0x3fffffff);
{  ℤ x68 = ((x61 +ℤ x52) +ℤ x66);
{  uint64_t x69 = (x68 >> 0x1e);
{  uint32_t x70 = (x68 & 0x3fffffff);
{  ℤ x71 = (x60 +ℤ x66);
{  uint64_t x72 = (x71 >> 0x1e);
{  uint32_t x73 = (x71 & 0x3fffffff);
{  ℤ x74 = (x69 +ℤ x51);
{  uint64_t x75 = (x74 >> 0x1e);
{  uint32_t x76 = (x74 & 0x3fffffff);
{  ℤ x77 = (x72 +ℤ x59);
{  uint64_t x78 = (x77 >> 0x1e);
{  uint32_t x79 = (x77 & 0x3fffffff);
{  ℤ x80 = (x75 +ℤ x50);
{  uint64_t x81 = (x80 >> 0x1e);
{  uint32_t x82 = (x80 & 0x3fffffff);
{  ℤ x83 = (x78 +ℤ x58);
{  uint64_t x84 = (x83 >> 0x1e);
{  uint32_t x85 = (x83 & 0x3fffffff);
{  ℤ x86 = (x81 +ℤ x49);
{  uint64_t x87 = (x86 >> 0x1e);
{  uint32_t x88 = (x86 & 0x3fffffff);
{  ℤ x89 = (x84 +ℤ x57);
{  uint64_t x90 = (x89 >> 0x1e);
{  uint32_t x91 = (x89 & 0x3fffffff);
{  ℤ x92 = (x87 +ℤ x48);
{  uint64_t x93 = (x92 >> 0x1e);
{  uint32_t x94 = (x92 & 0x3fffffff);
{  ℤ x95 = (x90 +ℤ x56);
{  uint64_t x96 = (x95 >> 0x1e);
{  uint32_t x97 = (x95 & 0x3fffffff);
{  ℤ x98 = (x93 +ℤ x47);
{  uint64_t x99 = (x98 >> 0x1e);
{  uint32_t x100 = (x98 & 0x3fffffff);
{  ℤ x101 = (x96 +ℤ x55);
{  uint64_t x102 = (x101 >> 0x1e);
{  uint32_t x103 = (x101 & 0x3fffffff);
{  ℤ x104 = (x99 +ℤ x46);
{  uint64_t x105 = (x104 >> 0x1e);
{  uint32_t x106 = (x104 & 0x3fffffff);
{  ℤ x107 = (x102 +ℤ x54);
{  uint64_t x108 = (x107 >> 0x1e);
{  uint32_t x109 = (x107 & 0x3fffffff);
{  uint64_t x110 = (x105 + x67);
{  uint32_t x111 = (uint32_t) (x110 >> 0x1e);
{  uint32_t x112 = ((uint32_t)x110 & 0x3fffffff);
{  uint64_t x113 = (x108 + x62);
{  uint32_t x114 = (uint32_t) (x113 >> 0x1e);
{  uint32_t x115 = ((uint32_t)x113 & 0x3fffffff);
{  uint64_t x116 = (((uint64_t)0x40000000 * x111) + x112);
{  uint32_t x117 = (uint32_t) (x116 >> 0x1e);
{  uint32_t x118 = ((uint32_t)x116 & 0x3fffffff);
{  uint32_t x119 = ((x114 + x70) + x117);
{  uint32_t x120 = (x119 >> 0x1e);
{  uint32_t x121 = (x119 & 0x3fffffff);
{  uint32_t x122 = (x73 + x117);
{  uint32_t x123 = (x122 >> 0x1e);
{  uint32_t x124 = (x122 & 0x3fffffff);
out[0] = x118;
out[1] = x106;
out[2] = x100;
out[3] = x94;
out[4] = x88;
out[5] = x82;
out[6] = x120 + x76;
out[7] = x121;
out[8] = x115;
out[9] = x109;
out[10] = x103;
out[11] = x97;
out[12] = x91;
out[13] = x85;
out[14] = x123 + x79;
out[15] = x124;
}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}
// caller: uint64_t out[16];