static void fesquare(uint32_t out[12], const uint32_t in1[12]) {
  { const uint32_t x21 = in1[11];
  { const uint32_t x22 = in1[10];
  { const uint32_t x20 = in1[9];
  { const uint32_t x18 = in1[8];
  { const uint32_t x16 = in1[7];
  { const uint32_t x14 = in1[6];
  { const uint32_t x12 = in1[5];
  { const uint32_t x10 = in1[4];
  { const uint32_t x8 = in1[3];
  { const uint32_t x6 = in1[2];
  { const uint32_t x4 = in1[1];
  { const uint32_t x2 = in1[0];
  { uint64_t x23 = ((0x2 * ((uint64_t)(x12 + x21) * (x12 + x21))) - (0x2 * ((uint64_t)x12 * x12)));
  { uint64_t x24 = (((0x2 * ((uint64_t)(x10 + x22) * (x12 + x21))) + (0x2 * ((uint64_t)(x12 + x21) * (x10 + x22)))) - ((0x2 * ((uint64_t)x10 * x12)) + (0x2 * ((uint64_t)x12 * x10))));
  { uint64_t x25 = (((0x2 * ((uint64_t)(x8 + x20) * (x12 + x21))) + ((0x2 * ((uint64_t)(x10 + x22) * (x10 + x22))) + (0x2 * ((uint64_t)(x12 + x21) * (x8 + x20))))) - ((0x2 * ((uint64_t)x8 * x12)) + ((0x2 * ((uint64_t)x10 * x10)) + (0x2 * ((uint64_t)x12 * x8)))));
  { uint64_t x26 = (((0x2 * ((uint64_t)(x6 + x18) * (x12 + x21))) + ((0x2 * ((uint64_t)(x8 + x20) * (x10 + x22))) + ((0x2 * ((uint64_t)(x10 + x22) * (x8 + x20))) + (0x2 * ((uint64_t)(x12 + x21) * (x6 + x18)))))) - ((0x2 * ((uint64_t)x6 * x12)) + ((0x2 * ((uint64_t)x8 * x10)) + ((0x2 * ((uint64_t)x10 * x8)) + (0x2 * ((uint64_t)x12 * x6))))));
  { uint64_t x27 = (((0x2 * ((uint64_t)(x4 + x16) * (x12 + x21))) + ((0x2 * ((uint64_t)(x6 + x18) * (x10 + x22))) + ((0x2 * ((uint64_t)(x8 + x20) * (x8 + x20))) + ((0x2 * ((uint64_t)(x10 + x22) * (x6 + x18))) + (0x2 * ((uint64_t)(x12 + x21) * (x4 + x16))))))) - ((0x2 * ((uint64_t)x4 * x12)) + ((0x2 * ((uint64_t)x6 * x10)) + ((0x2 * ((uint64_t)x8 * x8)) + ((0x2 * ((uint64_t)x10 * x6)) + (0x2 * ((uint64_t)x12 * x4)))))));
  { uint64_t x28 = ((((uint64_t)(x2 + x14) * (x12 + x21)) + (((uint64_t)(x4 + x16) * (x10 + x22)) + (((uint64_t)(x6 + x18) * (x8 + x20)) + (((uint64_t)(x8 + x20) * (x6 + x18)) + (((uint64_t)(x10 + x22) * (x4 + x16)) + ((uint64_t)(x12 + x21) * (x2 + x14))))))) - (((uint64_t)x2 * x12) + (((uint64_t)x4 * x10) + (((uint64_t)x6 * x8) + (((uint64_t)x8 * x6) + (((uint64_t)x10 * x4) + ((uint64_t)x12 * x2)))))));
  { uint64_t x29 = ((((uint64_t)(x2 + x14) * (x10 + x22)) + (((uint64_t)(x4 + x16) * (x8 + x20)) + (((uint64_t)(x6 + x18) * (x6 + x18)) + (((uint64_t)(x8 + x20) * (x4 + x16)) + ((uint64_t)(x10 + x22) * (x2 + x14)))))) - (((uint64_t)x2 * x10) + (((uint64_t)x4 * x8) + (((uint64_t)x6 * x6) + (((uint64_t)x8 * x4) + ((uint64_t)x10 * x2))))));
  { uint64_t x30 = ((((uint64_t)(x2 + x14) * (x8 + x20)) + (((uint64_t)(x4 + x16) * (x6 + x18)) + (((uint64_t)(x6 + x18) * (x4 + x16)) + ((uint64_t)(x8 + x20) * (x2 + x14))))) - (((uint64_t)x2 * x8) + (((uint64_t)x4 * x6) + (((uint64_t)x6 * x4) + ((uint64_t)x8 * x2)))));
  { uint64_t x31 = ((((uint64_t)(x2 + x14) * (x6 + x18)) + (((uint64_t)(x4 + x16) * (x4 + x16)) + ((uint64_t)(x6 + x18) * (x2 + x14)))) - (((uint64_t)x2 * x6) + (((uint64_t)x4 * x4) + ((uint64_t)x6 * x2))));
  { uint64_t x32 = ((((uint64_t)(x2 + x14) * (x4 + x16)) + ((uint64_t)(x4 + x16) * (x2 + x14))) - (((uint64_t)x2 * x4) + ((uint64_t)x4 * x2)));
  { uint64_t x33 = (((uint64_t)(x2 + x14) * (x2 + x14)) - ((uint64_t)x2 * x2));
  { uint64_t x34 = ((((0x2 * ((uint64_t)x12 * x12)) + (0x2 * ((uint64_t)x21 * x21))) + x29) + x23);
  { uint64_t x35 = (((((0x2 * ((uint64_t)x10 * x12)) + (0x2 * ((uint64_t)x12 * x10))) + ((0x2 * ((uint64_t)x22 * x21)) + (0x2 * ((uint64_t)x21 * x22)))) + x30) + x24);
  { uint64_t x36 = (((((0x2 * ((uint64_t)x8 * x12)) + ((0x2 * ((uint64_t)x10 * x10)) + (0x2 * ((uint64_t)x12 * x8)))) + ((0x2 * ((uint64_t)x20 * x21)) + ((0x2 * ((uint64_t)x22 * x22)) + (0x2 * ((uint64_t)x21 * x20))))) + x31) + x25);
  { uint64_t x37 = (((((0x2 * ((uint64_t)x6 * x12)) + ((0x2 * ((uint64_t)x8 * x10)) + ((0x2 * ((uint64_t)x10 * x8)) + (0x2 * ((uint64_t)x12 * x6))))) + ((0x2 * ((uint64_t)x18 * x21)) + ((0x2 * ((uint64_t)x20 * x22)) + ((0x2 * ((uint64_t)x22 * x20)) + (0x2 * ((uint64_t)x21 * x18)))))) + x32) + x26);
  { uint64_t x38 = (((((0x2 * ((uint64_t)x4 * x12)) + ((0x2 * ((uint64_t)x6 * x10)) + ((0x2 * ((uint64_t)x8 * x8)) + ((0x2 * ((uint64_t)x10 * x6)) + (0x2 * ((uint64_t)x12 * x4)))))) + ((0x2 * ((uint64_t)x16 * x21)) + ((0x2 * ((uint64_t)x18 * x22)) + ((0x2 * ((uint64_t)x20 * x20)) + ((0x2 * ((uint64_t)x22 * x18)) + (0x2 * ((uint64_t)x21 * x16))))))) + x33) + x27);
  { uint64_t x39 = ((((uint64_t)x2 * x12) + (((uint64_t)x4 * x10) + (((uint64_t)x6 * x8) + (((uint64_t)x8 * x6) + (((uint64_t)x10 * x4) + ((uint64_t)x12 * x2)))))) + (((uint64_t)x14 * x21) + (((uint64_t)x16 * x22) + (((uint64_t)x18 * x20) + (((uint64_t)x20 * x18) + (((uint64_t)x22 * x16) + ((uint64_t)x21 * x14)))))));
  { uint64_t x40 = (((((uint64_t)x2 * x10) + (((uint64_t)x4 * x8) + (((uint64_t)x6 * x6) + (((uint64_t)x8 * x4) + ((uint64_t)x10 * x2))))) + (((uint64_t)x14 * x22) + (((uint64_t)x16 * x20) + (((uint64_t)x18 * x18) + (((uint64_t)x20 * x16) + ((uint64_t)x22 * x14)))))) + x23);
  { uint64_t x41 = (((((uint64_t)x2 * x8) + (((uint64_t)x4 * x6) + (((uint64_t)x6 * x4) + ((uint64_t)x8 * x2)))) + (((uint64_t)x14 * x20) + (((uint64_t)x16 * x18) + (((uint64_t)x18 * x16) + ((uint64_t)x20 * x14))))) + x24);
  { uint64_t x42 = (((((uint64_t)x2 * x6) + (((uint64_t)x4 * x4) + ((uint64_t)x6 * x2))) + (((uint64_t)x14 * x18) + (((uint64_t)x16 * x16) + ((uint64_t)x18 * x14)))) + x25);
  { uint64_t x43 = (((((uint64_t)x2 * x4) + ((uint64_t)x4 * x2)) + (((uint64_t)x14 * x16) + ((uint64_t)x16 * x14))) + x26);
  { uint64_t x44 = ((((uint64_t)x2 * x2) + ((uint64_t)x14 * x14)) + x27);
  { uint64_t x45 = (x39 >> 0x1a);
  { uint32_t x46 = ((uint32_t)x39 & 0x3ffffff);
  { uint64_t x47 = (x28 >> 0x1a);
  { uint32_t x48 = ((uint32_t)x28 & 0x3ffffff);
  { uint64_t x49 = ((0x4000000 * x47) + x48);
  { uint64_t x50 = (x49 >> 0x1a);
  { uint32_t x51 = ((uint32_t)x49 & 0x3ffffff);
  { uint64_t x52 = ((x45 + x38) + x50);
  { uint64_t x53 = (x52 >> 0x1b);
  { uint32_t x54 = ((uint32_t)x52 & 0x7ffffff);
  { uint64_t x55 = (x44 + x50);
  { uint64_t x56 = (x55 >> 0x1b);
  { uint32_t x57 = ((uint32_t)x55 & 0x7ffffff);
  { uint64_t x58 = (x53 + x37);
  { uint64_t x59 = (x58 >> 0x1b);
  { uint32_t x60 = ((uint32_t)x58 & 0x7ffffff);
  { uint64_t x61 = (x56 + x43);
  { uint64_t x62 = (x61 >> 0x1b);
  { uint32_t x63 = ((uint32_t)x61 & 0x7ffffff);
  { uint64_t x64 = (x59 + x36);
  { uint64_t x65 = (x64 >> 0x1b);
  { uint32_t x66 = ((uint32_t)x64 & 0x7ffffff);
  { uint64_t x67 = (x62 + x42);
  { uint64_t x68 = (x67 >> 0x1b);
  { uint32_t x69 = ((uint32_t)x67 & 0x7ffffff);
  { uint64_t x70 = (x65 + x35);
  { uint64_t x71 = (x70 >> 0x1b);
  { uint32_t x72 = ((uint32_t)x70 & 0x7ffffff);
  { uint64_t x73 = (x68 + x41);
  { uint64_t x74 = (x73 >> 0x1b);
  { uint32_t x75 = ((uint32_t)x73 & 0x7ffffff);
  { uint64_t x76 = (x71 + x34);
  { uint64_t x77 = (x76 >> 0x1b);
  { uint32_t x78 = ((uint32_t)x76 & 0x7ffffff);
  { uint64_t x79 = (x74 + x40);
  { uint64_t x80 = (x79 >> 0x1b);
  { uint32_t x81 = ((uint32_t)x79 & 0x7ffffff);
  { uint64_t x82 = (x77 + x51);
  { uint32_t x83 = (uint32_t) (x82 >> 0x1a);
  { uint32_t x84 = ((uint32_t)x82 & 0x3ffffff);
  { uint64_t x85 = (x80 + x46);
  { uint32_t x86 = (uint32_t) (x85 >> 0x1a);
  { uint32_t x87 = ((uint32_t)x85 & 0x3ffffff);
  { uint64_t x88 = (((uint64_t)0x4000000 * x83) + x84);
  { uint32_t x89 = (uint32_t) (x88 >> 0x1a);
  { uint32_t x90 = ((uint32_t)x88 & 0x3ffffff);
  { uint32_t x91 = ((x86 + x54) + x89);
  { uint32_t x92 = (x91 >> 0x1b);
  { uint32_t x93 = (x91 & 0x7ffffff);
  { uint32_t x94 = (x57 + x89);
  { uint32_t x95 = (x94 >> 0x1b);
  { uint32_t x96 = (x94 & 0x7ffffff);
  out[0] = x96;
  out[1] = (x95 + x63);
  out[2] = x69;
  out[3] = x75;
  out[4] = x81;
  out[5] = x87;
  out[6] = x93;
  out[7] = (x92 + x60);
  out[8] = x66;
  out[9] = x72;
  out[10] = x78;
  out[11] = x90;
  }}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}
}
