static void femul(uint32_t out[5], const uint32_t in1[5], const uint32_t in2[5]) {
  { const uint32_t x10 = in1[4];
  { const uint32_t x11 = in1[3];
  { const uint32_t x9 = in1[2];
  { const uint32_t x7 = in1[1];
  { const uint32_t x5 = in1[0];
  { const uint32_t x18 = in2[4];
  { const uint32_t x19 = in2[3];
  { const uint32_t x17 = in2[2];
  { const uint32_t x15 = in2[1];
  { const uint32_t x13 = in2[0];
  { uint32_t x22;  uint32_t x21 = _mulx_u32(x5, x13, &x22);
  { uint32_t x25;  uint32_t x24 = _mulx_u32(x5, x15, &x25);
  { uint32_t x28;  uint32_t x27 = _mulx_u32(x5, x17, &x28);
  { uint32_t x31;  uint32_t x30 = _mulx_u32(x5, x19, &x31);
  { uint32_t x34;  uint32_t x33 = _mulx_u32(x5, x18, &x34);
  { uint32_t x36; uint8_t x37 = _addcarryx_u32(0x0, x22, x24, &x36);
  { uint32_t x39; uint8_t x40 = _addcarryx_u32(x37, x25, x27, &x39);
  { uint32_t x42; uint8_t x43 = _addcarryx_u32(x40, x28, x30, &x42);
  { uint32_t x45; uint8_t x46 = _addcarryx_u32(x43, x31, x33, &x45);
  { uint32_t x48; uint8_t _ = _addcarryx_u32(0x0, x46, x34, &x48);
  { uint32_t _;  uint32_t x51 = _mulx_u32(x21, 0xc28f5c29, &_);
  { uint32_t x55;  uint32_t x54 = _mulx_u32(x51, 0xffffffe7, &x55);
  { uint32_t x58;  uint32_t x57 = _mulx_u32(x51, 0xffffffff, &x58);
  { uint32_t x61;  uint32_t x60 = _mulx_u32(x51, 0xffffffff, &x61);
  { uint32_t x64;  uint32_t x63 = _mulx_u32(x51, 0xffffffff, &x64);
  { uint32_t x66; uint8_t x67 = _addcarryx_u32(0x0, x55, x57, &x66);
  { uint32_t x69; uint8_t x70 = _addcarryx_u32(x67, x58, x60, &x69);
  { uint32_t x72; uint8_t x73 = _addcarryx_u32(x70, x61, x63, &x72);
  { uint32_t x75; uint8_t x76 = _addcarryx_u32(x73, x64, x51, &x75);
  { uint32_t _; uint8_t x79 = _addcarryx_u32(0x0, x21, x54, &_);
  { uint32_t x81; uint8_t x82 = _addcarryx_u32(x79, x36, x66, &x81);
  { uint32_t x84; uint8_t x85 = _addcarryx_u32(x82, x39, x69, &x84);
  { uint32_t x87; uint8_t x88 = _addcarryx_u32(x85, x42, x72, &x87);
  { uint32_t x90; uint8_t x91 = _addcarryx_u32(x88, x45, x75, &x90);
  { uint32_t x93; uint8_t x94 = _addcarryx_u32(x91, x48, x76, &x93);
  { uint32_t x97;  uint32_t x96 = _mulx_u32(x7, x13, &x97);
  { uint32_t x100;  uint32_t x99 = _mulx_u32(x7, x15, &x100);
  { uint32_t x103;  uint32_t x102 = _mulx_u32(x7, x17, &x103);
  { uint32_t x106;  uint32_t x105 = _mulx_u32(x7, x19, &x106);
  { uint32_t x109;  uint32_t x108 = _mulx_u32(x7, x18, &x109);
  { uint32_t x111; uint8_t x112 = _addcarryx_u32(0x0, x97, x99, &x111);
  { uint32_t x114; uint8_t x115 = _addcarryx_u32(x112, x100, x102, &x114);
  { uint32_t x117; uint8_t x118 = _addcarryx_u32(x115, x103, x105, &x117);
  { uint32_t x120; uint8_t x121 = _addcarryx_u32(x118, x106, x108, &x120);
  { uint32_t x123; uint8_t _ = _addcarryx_u32(0x0, x121, x109, &x123);
  { uint32_t x126; uint8_t x127 = _addcarryx_u32(0x0, x81, x96, &x126);
  { uint32_t x129; uint8_t x130 = _addcarryx_u32(x127, x84, x111, &x129);
  { uint32_t x132; uint8_t x133 = _addcarryx_u32(x130, x87, x114, &x132);
  { uint32_t x135; uint8_t x136 = _addcarryx_u32(x133, x90, x117, &x135);
  { uint32_t x138; uint8_t x139 = _addcarryx_u32(x136, x93, x120, &x138);
  { uint32_t x141; uint8_t x142 = _addcarryx_u32(x139, x94, x123, &x141);
  { uint32_t _;  uint32_t x144 = _mulx_u32(x126, 0xc28f5c29, &_);
  { uint32_t x148;  uint32_t x147 = _mulx_u32(x144, 0xffffffe7, &x148);
  { uint32_t x151;  uint32_t x150 = _mulx_u32(x144, 0xffffffff, &x151);
  { uint32_t x154;  uint32_t x153 = _mulx_u32(x144, 0xffffffff, &x154);
  { uint32_t x157;  uint32_t x156 = _mulx_u32(x144, 0xffffffff, &x157);
  { uint32_t x159; uint8_t x160 = _addcarryx_u32(0x0, x148, x150, &x159);
  { uint32_t x162; uint8_t x163 = _addcarryx_u32(x160, x151, x153, &x162);
  { uint32_t x165; uint8_t x166 = _addcarryx_u32(x163, x154, x156, &x165);
  { uint32_t x168; uint8_t x169 = _addcarryx_u32(x166, x157, x144, &x168);
  { uint32_t _; uint8_t x172 = _addcarryx_u32(0x0, x126, x147, &_);
  { uint32_t x174; uint8_t x175 = _addcarryx_u32(x172, x129, x159, &x174);
  { uint32_t x177; uint8_t x178 = _addcarryx_u32(x175, x132, x162, &x177);
  { uint32_t x180; uint8_t x181 = _addcarryx_u32(x178, x135, x165, &x180);
  { uint32_t x183; uint8_t x184 = _addcarryx_u32(x181, x138, x168, &x183);
  { uint32_t x186; uint8_t x187 = _addcarryx_u32(x184, x141, x169, &x186);
  { uint8_t x188 = (x187 + x142);
  { uint32_t x191;  uint32_t x190 = _mulx_u32(x9, x13, &x191);
  { uint32_t x194;  uint32_t x193 = _mulx_u32(x9, x15, &x194);
  { uint32_t x197;  uint32_t x196 = _mulx_u32(x9, x17, &x197);
  { uint32_t x200;  uint32_t x199 = _mulx_u32(x9, x19, &x200);
  { uint32_t x203;  uint32_t x202 = _mulx_u32(x9, x18, &x203);
  { uint32_t x205; uint8_t x206 = _addcarryx_u32(0x0, x191, x193, &x205);
  { uint32_t x208; uint8_t x209 = _addcarryx_u32(x206, x194, x196, &x208);
  { uint32_t x211; uint8_t x212 = _addcarryx_u32(x209, x197, x199, &x211);
  { uint32_t x214; uint8_t x215 = _addcarryx_u32(x212, x200, x202, &x214);
  { uint32_t x217; uint8_t _ = _addcarryx_u32(0x0, x215, x203, &x217);
  { uint32_t x220; uint8_t x221 = _addcarryx_u32(0x0, x174, x190, &x220);
  { uint32_t x223; uint8_t x224 = _addcarryx_u32(x221, x177, x205, &x223);
  { uint32_t x226; uint8_t x227 = _addcarryx_u32(x224, x180, x208, &x226);
  { uint32_t x229; uint8_t x230 = _addcarryx_u32(x227, x183, x211, &x229);
  { uint32_t x232; uint8_t x233 = _addcarryx_u32(x230, x186, x214, &x232);
  { uint32_t x235; uint8_t x236 = _addcarryx_u32(x233, x188, x217, &x235);
  { uint32_t _;  uint32_t x238 = _mulx_u32(x220, 0xc28f5c29, &_);
  { uint32_t x242;  uint32_t x241 = _mulx_u32(x238, 0xffffffe7, &x242);
  { uint32_t x245;  uint32_t x244 = _mulx_u32(x238, 0xffffffff, &x245);
  { uint32_t x248;  uint32_t x247 = _mulx_u32(x238, 0xffffffff, &x248);
  { uint32_t x251;  uint32_t x250 = _mulx_u32(x238, 0xffffffff, &x251);
  { uint32_t x253; uint8_t x254 = _addcarryx_u32(0x0, x242, x244, &x253);
  { uint32_t x256; uint8_t x257 = _addcarryx_u32(x254, x245, x247, &x256);
  { uint32_t x259; uint8_t x260 = _addcarryx_u32(x257, x248, x250, &x259);
  { uint32_t x262; uint8_t x263 = _addcarryx_u32(x260, x251, x238, &x262);
  { uint32_t _; uint8_t x266 = _addcarryx_u32(0x0, x220, x241, &_);
  { uint32_t x268; uint8_t x269 = _addcarryx_u32(x266, x223, x253, &x268);
  { uint32_t x271; uint8_t x272 = _addcarryx_u32(x269, x226, x256, &x271);
  { uint32_t x274; uint8_t x275 = _addcarryx_u32(x272, x229, x259, &x274);
  { uint32_t x277; uint8_t x278 = _addcarryx_u32(x275, x232, x262, &x277);
  { uint32_t x280; uint8_t x281 = _addcarryx_u32(x278, x235, x263, &x280);
  { uint8_t x282 = (x281 + x236);
  { uint32_t x285;  uint32_t x284 = _mulx_u32(x11, x13, &x285);
  { uint32_t x288;  uint32_t x287 = _mulx_u32(x11, x15, &x288);
  { uint32_t x291;  uint32_t x290 = _mulx_u32(x11, x17, &x291);
  { uint32_t x294;  uint32_t x293 = _mulx_u32(x11, x19, &x294);
  { uint32_t x297;  uint32_t x296 = _mulx_u32(x11, x18, &x297);
  { uint32_t x299; uint8_t x300 = _addcarryx_u32(0x0, x285, x287, &x299);
  { uint32_t x302; uint8_t x303 = _addcarryx_u32(x300, x288, x290, &x302);
  { uint32_t x305; uint8_t x306 = _addcarryx_u32(x303, x291, x293, &x305);
  { uint32_t x308; uint8_t x309 = _addcarryx_u32(x306, x294, x296, &x308);
  { uint32_t x311; uint8_t _ = _addcarryx_u32(0x0, x309, x297, &x311);
  { uint32_t x314; uint8_t x315 = _addcarryx_u32(0x0, x268, x284, &x314);
  { uint32_t x317; uint8_t x318 = _addcarryx_u32(x315, x271, x299, &x317);
  { uint32_t x320; uint8_t x321 = _addcarryx_u32(x318, x274, x302, &x320);
  { uint32_t x323; uint8_t x324 = _addcarryx_u32(x321, x277, x305, &x323);
  { uint32_t x326; uint8_t x327 = _addcarryx_u32(x324, x280, x308, &x326);
  { uint32_t x329; uint8_t x330 = _addcarryx_u32(x327, x282, x311, &x329);
  { uint32_t _;  uint32_t x332 = _mulx_u32(x314, 0xc28f5c29, &_);
  { uint32_t x336;  uint32_t x335 = _mulx_u32(x332, 0xffffffe7, &x336);
  { uint32_t x339;  uint32_t x338 = _mulx_u32(x332, 0xffffffff, &x339);
  { uint32_t x342;  uint32_t x341 = _mulx_u32(x332, 0xffffffff, &x342);
  { uint32_t x345;  uint32_t x344 = _mulx_u32(x332, 0xffffffff, &x345);
  { uint32_t x347; uint8_t x348 = _addcarryx_u32(0x0, x336, x338, &x347);
  { uint32_t x350; uint8_t x351 = _addcarryx_u32(x348, x339, x341, &x350);
  { uint32_t x353; uint8_t x354 = _addcarryx_u32(x351, x342, x344, &x353);
  { uint32_t x356; uint8_t x357 = _addcarryx_u32(x354, x345, x332, &x356);
  { uint32_t _; uint8_t x360 = _addcarryx_u32(0x0, x314, x335, &_);
  { uint32_t x362; uint8_t x363 = _addcarryx_u32(x360, x317, x347, &x362);
  { uint32_t x365; uint8_t x366 = _addcarryx_u32(x363, x320, x350, &x365);
  { uint32_t x368; uint8_t x369 = _addcarryx_u32(x366, x323, x353, &x368);
  { uint32_t x371; uint8_t x372 = _addcarryx_u32(x369, x326, x356, &x371);
  { uint32_t x374; uint8_t x375 = _addcarryx_u32(x372, x329, x357, &x374);
  { uint8_t x376 = (x375 + x330);
  { uint32_t x379;  uint32_t x378 = _mulx_u32(x10, x13, &x379);
  { uint32_t x382;  uint32_t x381 = _mulx_u32(x10, x15, &x382);
  { uint32_t x385;  uint32_t x384 = _mulx_u32(x10, x17, &x385);
  { uint32_t x388;  uint32_t x387 = _mulx_u32(x10, x19, &x388);
  { uint32_t x391;  uint32_t x390 = _mulx_u32(x10, x18, &x391);
  { uint32_t x393; uint8_t x394 = _addcarryx_u32(0x0, x379, x381, &x393);
  { uint32_t x396; uint8_t x397 = _addcarryx_u32(x394, x382, x384, &x396);
  { uint32_t x399; uint8_t x400 = _addcarryx_u32(x397, x385, x387, &x399);
  { uint32_t x402; uint8_t x403 = _addcarryx_u32(x400, x388, x390, &x402);
  { uint32_t x405; uint8_t _ = _addcarryx_u32(0x0, x403, x391, &x405);
  { uint32_t x408; uint8_t x409 = _addcarryx_u32(0x0, x362, x378, &x408);
  { uint32_t x411; uint8_t x412 = _addcarryx_u32(x409, x365, x393, &x411);
  { uint32_t x414; uint8_t x415 = _addcarryx_u32(x412, x368, x396, &x414);
  { uint32_t x417; uint8_t x418 = _addcarryx_u32(x415, x371, x399, &x417);
  { uint32_t x420; uint8_t x421 = _addcarryx_u32(x418, x374, x402, &x420);
  { uint32_t x423; uint8_t x424 = _addcarryx_u32(x421, x376, x405, &x423);
  { uint32_t _;  uint32_t x426 = _mulx_u32(x408, 0xc28f5c29, &_);
  { uint32_t x430;  uint32_t x429 = _mulx_u32(x426, 0xffffffe7, &x430);
  { uint32_t x433;  uint32_t x432 = _mulx_u32(x426, 0xffffffff, &x433);
  { uint32_t x436;  uint32_t x435 = _mulx_u32(x426, 0xffffffff, &x436);
  { uint32_t x439;  uint32_t x438 = _mulx_u32(x426, 0xffffffff, &x439);
  { uint32_t x441; uint8_t x442 = _addcarryx_u32(0x0, x430, x432, &x441);
  { uint32_t x444; uint8_t x445 = _addcarryx_u32(x442, x433, x435, &x444);
  { uint32_t x447; uint8_t x448 = _addcarryx_u32(x445, x436, x438, &x447);
  { uint32_t x450; uint8_t x451 = _addcarryx_u32(x448, x439, x426, &x450);
  { uint32_t _; uint8_t x454 = _addcarryx_u32(0x0, x408, x429, &_);
  { uint32_t x456; uint8_t x457 = _addcarryx_u32(x454, x411, x441, &x456);
  { uint32_t x459; uint8_t x460 = _addcarryx_u32(x457, x414, x444, &x459);
  { uint32_t x462; uint8_t x463 = _addcarryx_u32(x460, x417, x447, &x462);
  { uint32_t x465; uint8_t x466 = _addcarryx_u32(x463, x420, x450, &x465);
  { uint32_t x468; uint8_t x469 = _addcarryx_u32(x466, x423, x451, &x468);
  { uint8_t x470 = (x469 + x424);
  { uint32_t x472; uint8_t x473 = _subborrow_u32(0x0, x456, 0xffffffe7, &x472);
  { uint32_t x475; uint8_t x476 = _subborrow_u32(x473, x459, 0xffffffff, &x475);
  { uint32_t x478; uint8_t x479 = _subborrow_u32(x476, x462, 0xffffffff, &x478);
  { uint32_t x481; uint8_t x482 = _subborrow_u32(x479, x465, 0xffffffff, &x481);
  { uint32_t x484; uint8_t x485 = _subborrow_u32(x482, x468, 0x1, &x484);
  { uint32_t _; uint8_t x488 = _subborrow_u32(x485, x470, 0x0, &_);
  { uint32_t x489 = cmovznz32(x488, x484, x468);
  { uint32_t x490 = cmovznz32(x488, x481, x465);
  { uint32_t x491 = cmovznz32(x488, x478, x462);
  { uint32_t x492 = cmovznz32(x488, x475, x459);
  { uint32_t x493 = cmovznz32(x488, x472, x456);
  out[0] = x493;
  out[1] = x492;
  out[2] = x491;
  out[3] = x490;
  out[4] = x489;
  }}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}
}
