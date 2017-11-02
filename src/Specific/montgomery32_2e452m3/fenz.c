#include <stdint.h>
#include <stdbool.h>
#include <x86intrin.h>
#include "liblow.h"

#include "fenz.h"

typedef unsigned int uint128_t __attribute__((mode(TI)));

#if (defined(__GNUC__) || defined(__GNUG__)) && !(defined(__clang__)||defined(__INTEL_COMPILER))
// https://gcc.gnu.org/bugzilla/show_bug.cgi?id=81294
#define _subborrow_u32 __builtin_ia32_sbb_u32
#define _subborrow_u64 __builtin_ia32_sbb_u64
#endif

#undef force_inline
#define force_inline __attribute__((always_inline))

void force_inline fenz(uint64_t* out, uint64_t x27, uint64_t x28, uint64_t x26, uint64_t x24, uint64_t x22, uint64_t x20, uint64_t x18, uint64_t x16, uint64_t x14, uint64_t x12, uint64_t x10, uint64_t x8, uint64_t x6, uint64_t x4, uint64_t x2)
{  uint32_t x29 = (x28 | x27);
{  uint32_t x30 = (x26 | x29);
{  uint32_t x31 = (x24 | x30);
{  uint32_t x32 = (x22 | x31);
{  uint32_t x33 = (x20 | x32);
{  uint32_t x34 = (x18 | x33);
{  uint32_t x35 = (x16 | x34);
{  uint32_t x36 = (x14 | x35);
{  uint32_t x37 = (x12 | x36);
{  uint32_t x38 = (x10 | x37);
{  uint32_t x39 = (x8 | x38);
{  uint32_t x40 = (x6 | x39);
{  uint32_t x41 = (x4 | x40);
{  uint32_t x42 = (x2 | x41);
out[0] = x42;
}}}}}}}}}}}}}}
// caller: uint64_t out[1];