#ifndef characters_h
#define characters_h

#include <avr/pgmspace.h>

const int bytesPerChar = 5;
#define REVERSED_CHARACTERS

const PROGMEM unsigned char matrixChars[256][5] = {
  {0xFF,0x0,0xff,0x0,0xff,},
  {0x0,0x0,0x0,0x0,0x0,},
  {0x0,0x0,0x0,0x0,0x0,},
  {0x0,0x0,0x0,0x0,0x0,},
  {0x0,0x0,0x0,0x0,0x0,},
  {0x0,0x0,0x0,0x0,0x0,},
  {0x0,0x0,0x0,0x0,0x0,},
  {0x0,0x0,0x0,0x0,0x0,},
  {0x0,0x0,0x0,0x0,0x0,},
  {0x0,0x0,0x0,0x0,0x0,},
  {0x0,0x0,0x0,0x0,0x0,},
  {0x0,0x0,0x0,0x0,0x0,},
  {0x0,0x0,0x0,0x0,0x0,},
  {0x0,0x0,0x0,0x0,0x0,},
  {0x0,0x0,0x0,0x0,0x0,},
  {0x0,0x0,0x0,0x0,0x0,},
  {0x0,0x0,0x0,0x0,0xfe,},
  {0x0,0x0,0x0,0xfe,0xfe,},
  {0x0,0x0,0xfe,0xfe,0xfe,},
  {0x0,0xfe,0xfe,0xfe,0xfe,},
  {0xfe,0xfe,0xfe,0xfe,0xfe,},
  {0xfe,0xfe,0xfe,0xfe,0x0,},
  {0xfe,0xfe,0xfe,0x0,0x0,},
  {0xfe,0xfe,0x0,0x0,0x0,},
  {0xfe,0x0,0x0,0x0,0x0,},
  {0x3c,0x40,0xfc,0xe,0x6,},
  {0x12,0x12,0xc,0xc0,0xc0,},
  {0x10,0x14,0x14,0xde,0xc0,},
  {0x20,0x30,0x38,0x30,0x20,},
  {0x0,0x10,0x38,0x7c,0x0,},
  {0x0,0x7c,0x38,0x10,0x0,},
  {0x8,0x18,0x38,0x18,0x8,},
  {0x0,0x0,0x0,0x0,0x0,},
  {0x0,0x0,0xfa,0x0,0x0,},
  {0x0,0xe0,0x0,0xe0,0x0,},
  {0x28,0xfe,0x28,0xfe,0x28,},
  {0x48,0x54,0xfe,0x54,0x24,},
  {0x46,0x26,0x10,0xc8,0xc4,},
  {0xa,0x44,0xaa,0x92,0x6c,},
  {0x0,0x0,0xc0,0xa0,0x0,},
  {0x0,0x82,0x44,0x38,0x0,},
  {0x0,0x38,0x44,0x82,0x0,},
  {0x10,0x54,0x38,0x54,0x10,},
  {0x10,0x10,0x7c,0x10,0x10,},
  {0x0,0x0,0xc,0xa,0x0,},
  {0x10,0x10,0x10,0x10,0x10,},
  {0x0,0x0,0x6,0x6,0x0,},
  {0x40,0x20,0x10,0x8,0x4,},
  {0x7c,0xa2,0x92,0x8a,0x7c,},
  {0x0,0x2,0xfe,0x42,0x0,},
  {0x62,0x92,0x8a,0x86,0x42,},
  {0x8c,0xd2,0xa2,0x82,0x84,},
  {0x8,0xfe,0x48,0x28,0x18,},
  {0x9c,0xa2,0xa2,0xa2,0xe4,},
  {0xc,0x92,0x92,0x52,0x3c,},
  {0xc0,0xa0,0x90,0x8e,0x80,},
  {0x6c,0x92,0x92,0x92,0x6c,},
  {0x78,0x94,0x92,0x92,0x60,},
  {0x0,0x0,0x6c,0x6c,0x0,},
  {0x0,0x0,0x6c,0x6a,0x0,},
  {0x82,0x44,0x28,0x10,0x0,},
  {0x28,0x28,0x28,0x28,0x28,},
  {0x0,0x10,0x28,0x44,0x82,},
  {0x60,0x90,0x8a,0x80,0x40,},
  {0x7c,0x82,0x9e,0x92,0x4c,},
  {0x7e,0x88,0x88,0x88,0x7e,},
  {0x6c,0x92,0x92,0x92,0xfe,},
  {0x44,0x82,0x82,0x82,0x7c,},
  {0x38,0x44,0x82,0x82,0xfe,},
  {0x82,0x92,0x92,0x92,0xfe,},
  {0x80,0x80,0x90,0x90,0xfe,},
  {0x4c,0x8a,0x82,0x82,0x7c,},
  {0xfe,0x10,0x10,0x10,0xfe,},
  {0x0,0x82,0xfe,0x82,0x0,},
  {0x80,0xfc,0x82,0x2,0x4,},
  {0x82,0x44,0x28,0x10,0xfe,},
  {0x2,0x2,0x2,0x2,0xfe,},
  {0xfe,0x40,0x20,0x40,0xfe,},
  {0xfe,0x8,0x10,0x20,0xfe,},
  {0x7c,0x82,0x82,0x82,0x7c,},
  {0x60,0x90,0x90,0x90,0xfe,},
  {0x7a,0x84,0x8a,0x82,0x7c,},
  {0x62,0x94,0x98,0x90,0xfe,},
  {0x8c,0x92,0x92,0x92,0x62,},
  {0x80,0x80,0xfe,0x80,0x80,},
  {0xfc,0x2,0x2,0x2,0xfc,},
  {0xf8,0x4,0x2,0x4,0xf8,},
  {0xfe,0x4,0x18,0x4,0xfe,},
  {0xc6,0x28,0x10,0x28,0xc6,},
  {0xc0,0x20,0x1e,0x20,0xc0,},
  {0xc2,0xa2,0x92,0x8a,0x86,},
  {0x82,0x82,0xfe,0x0,0x0,},
  {0x4,0x8,0x10,0x20,0x40,},
  {0x0,0x0,0xfe,0x82,0x82,},
  {0x20,0x40,0x80,0x40,0x20,},
  {0x2,0x2,0x2,0x2,0x2,},
  {0x0,0x20,0x40,0x80,0x0,},
  {0x1e,0x2a,0x2a,0x2a,0x4,},
  {0x1c,0x22,0x22,0x12,0xfe,},
  {0x4,0x22,0x22,0x22,0x1c,},
  {0xfe,0x12,0x22,0x22,0x1c,},
  {0x18,0x2a,0x2a,0x2a,0x1c,},
  {0x40,0x80,0x90,0x7e,0x10,},
  {0x3c,0x2a,0x2a,0x28,0x10,},
  {0x1e,0x20,0x20,0x10,0xfe,},
  {0x0,0x2,0xbe,0x22,0x0,},
  {0x0,0xbc,0x22,0x2,0x4,},
  {0x22,0x14,0x8,0xfe,0x0,},
  {0x0,0x2,0xfe,0x82,0x0,},
  {0x1e,0x20,0x18,0x20,0x3e,},
  {0x1e,0x20,0x20,0x10,0x3e,},
  {0x1c,0x22,0x22,0x22,0x1c,},
  {0x10,0x28,0x28,0x28,0x3e,},
  {0x3e,0x18,0x28,0x28,0x10,},
  {0x10,0x20,0x20,0x10,0x3e,},
  {0x4,0x2a,0x2a,0x2a,0x12,},
  {0x4,0x2,0x22,0xfc,0x20,},
  {0x3e,0x4,0x2,0x2,0x3c,},
  {0x38,0x4,0x2,0x4,0x38,},
  {0x3c,0x2,0xc,0x2,0x3c,},
  {0x22,0x14,0x8,0x14,0x22,},
  {0x3c,0xa,0xa,0xa,0x30,},
  {0x22,0x32,0x2a,0x26,0x22,},
  {0x0,0x82,0x6c,0x10,0x0,},
  {0x0,0x0,0xfe,0x0,0x0,},
  {0x0,0x10,0x6c,0x82,0x0,},
  {0x10,0x38,0x54,0x10,0x10,},
  {0x10,0x10,0x54,0x38,0x10,},
  {0xe,0x94,0x24,0x94,0xe,},
  {0xe,0x14,0xa4,0x14,0xe,},
  {0xe,0x54,0xa4,0x54,0xe,},
  {0x1e,0xaa,0x6a,0x2a,0x4,},
  {0x1e,0x2a,0xaa,0x2a,0x4,},
  {0x92,0x92,0x92,0xfe,0xfe,},
  {0xbc,0x42,0x42,0x42,0xbc,},
  {0xc,0x52,0x12,0x52,0xc,},
  {0xb8,0x64,0x54,0x4c,0x3a,},
  {0x18,0x64,0x3c,0x26,0x18,},
  {0xbc,0x2,0x2,0x2,0xbc,},
  {0x1e,0x44,0x2,0x42,0x1c,},
  {0xa8,0x68,0x3e,0x68,0xa8,},
  {0xa8,0x68,0x38,0x2c,0x2a,},
  {0x18,0x4,0x18,0x20,0x18,},
  {0x94,0xaa,0xaa,0xaa,0x52,},
  {0x90,0x90,0xfe,0x90,0x7e,},
  {0x1a,0x2a,0x1c,0x2a,0x2c,},
  {0x42,0x92,0x92,0x7e,0x12,},
  {0xa,0x5e,0xa8,0xa0,0xfe,},
  {0x38,0x7c,0x7c,0x7c,0x38,},
  {0x38,0x44,0x44,0x44,0x38,},
  {0x10,0x38,0x7c,0x38,0x10,},
  {0x10,0x28,0x44,0x28,0x10,},
  {0x0,0x0,0xee,0x0,0x0,},
  {0x88,0x88,0x8c,0x8a,0x70,},
  {0x7e,0x22,0x12,0xa,0x6,},
  {0x2,0x8a,0x52,0x22,0x2,},
  {0x2,0x22,0x52,0x8a,0x2,},
  {0xf8,0x8,0x2a,0x1c,0x8,},
  {0x20,0x40,0xfe,0x40,0x20,},
  {0x8,0x4,0xfe,0x4,0x8,},
  {0x0,0x0,0x0,0x0,0x0,},
  {0x0,0x0,0xe,0xa,0xe,},
  {0x80,0x80,0xf0,0x0,0x0,},
  {0x0,0x0,0x1e,0x2,0x2,},
  {0x0,0x0,0x2,0x4,0x8,},
  {0x0,0x0,0xc,0xc,0x0,},
  {0xf8,0xa4,0xa2,0xa0,0xa0,},
  {0x0,0x0,0x0,0x0,0x0,},
  {0x30,0x28,0x2c,0x22,0x20,},
  {0x0,0x20,0x1e,0x8,0x4,},
  {0x0,0x1c,0x32,0x10,0x18,},
  {0x10,0x3e,0x18,0x14,0x12,},
  {0x18,0x14,0x10,0x3e,0x10,},
  {0x2,0x1e,0x12,0x12,0x2,},
  {0x0,0x3e,0x2a,0x2a,0x2a,},
  {0x1c,0x2,0x1a,0x0,0x18,},
  {0x10,0x10,0x10,0x10,0x10,},
  {0xe0,0x90,0xbc,0x82,0x80,},
  {0x40,0x20,0x1f,0x8,0x4,},
  {0x78,0x44,0xc2,0x40,0x70,},
  {0x42,0x42,0x7e,0x42,0x42,},
  {0x40,0xfe,0x50,0x48,0x44,},
  {0x7c,0x42,0x40,0xfc,0x42,},
  {0x50,0x50,0xfe,0x50,0x50,},
  {0xf8,0x84,0x82,0xc2,0x20,},
  {0x40,0x7c,0x42,0xc0,0x20,},
  {0xfe,0x82,0x82,0x82,0x82,},
  {0x40,0xf8,0x44,0xf2,0x40,},
  {0x38,0x4,0x2,0x52,0x52,},
  {0x62,0x54,0x48,0x44,0x42,},
  {0x62,0x52,0x42,0xfc,0x40,},
  {0x78,0x4,0x2,0x22,0xc0,},
  {0x78,0x4c,0x52,0x62,0x10,},
  {0x10,0x90,0x7c,0x52,0x50,},
  {0x78,0x4,0x72,0x0,0x70,},
  {0x20,0xa0,0xbc,0xa2,0x20,},
  {0x0,0x8,0x10,0xfe,0x0,},
  {0x20,0x20,0xf8,0x24,0x22,},
  {0x2,0x42,0x42,0x42,0x2,},
  {0x60,0x54,0x48,0x54,0x42,},
  {0x44,0x68,0xde,0x48,0x44,},
  {0x0,0xf8,0x4,0x2,0x0,},
  {0x1e,0x20,0x40,0x0,0x1e,},
  {0x22,0x22,0x22,0x22,0xfc,},
  {0x78,0x44,0x42,0x42,0x40,},
  {0xc,0x10,0x20,0x40,0x20,},
  {0x4c,0x40,0xfe,0x40,0x4c,},
  {0x70,0x4a,0x44,0x48,0x40,},
  {0x2,0x54,0x54,0x54,0x0,},
  {0xe,0x4,0x44,0x24,0x1c,},
  {0x60,0x14,0x8,0x14,0x2,},
  {0x52,0x52,0x52,0x7c,0x40,},
  {0x30,0x28,0x20,0xfe,0x20,},
  {0x2,0x7e,0x42,0x42,0x2,},
  {0x7e,0x52,0x52,0x52,0x52,},
  {0x38,0xa4,0xa2,0xa0,0x20,},
  {0x0,0xf8,0x4,0x2,0xf0,},
  {0xc,0x2,0x7e,0x0,0x3e,},
  {0x10,0x8,0x4,0x2,0x7e,},
  {0x7e,0x42,0x42,0x42,0x7e,},
  {0x78,0x44,0x42,0x40,0x70,},
  {0x18,0x4,0x2,0x42,0x42,},
  {0x0,0x40,0x80,0x20,0x40,},
  {0x0,0x0,0xe0,0xa0,0xe0,},
  {0x2,0xc,0x12,0x22,0x1c,},
  {0x1e,0xaa,0x2a,0xaa,0x4,},
  {0x28,0x54,0x54,0x54,0x3e,},
  {0x4,0x22,0x2a,0x2a,0x14,},
  {0x78,0x10,0x8,0x8,0x7e,},
  {0x24,0x2a,0x32,0x22,0x1c,},
  {0x30,0x48,0x48,0x28,0x1e,},
  {0x3c,0x2a,0x2a,0x2a,0x10,},
  {0x20,0x20,0x3c,0x2,0x4,},
  {0x0,0xe0,0x0,0x40,0x40,},
  {0x0,0xbc,0x22,0x2,0x4,},
  {0x0,0x0,0xa0,0x40,0xa0,},
  {0x8,0x24,0x7e,0x24,0x18,},
  {0x2,0x2,0x2a,0xfe,0x28,},
  {0x1e,0xa0,0xa0,0x90,0x3e,},
  {0x1c,0xa2,0x22,0xa2,0x1c,},
  {0x30,0x48,0x48,0x28,0x7e,},
  {0x7e,0x28,0x48,0x48,0x30,},
  {0x3c,0x52,0x52,0x52,0x3c,},
  {0x18,0x14,0x8,0x14,0xc,},
  {0x1a,0x26,0x20,0x26,0x1a,},
  {0x3e,0x84,0x2,0x82,0x3c,},
  {0x82,0x82,0x92,0xaa,0xc6,},
  {0x22,0x3e,0x20,0x3c,0x22,},
  {0xa2,0x94,0x88,0x94,0xa2,},
  {0x3c,0xa,0xa,0xa,0x30,},
  {0x90,0x50,0x7e,0x50,0x50,},
  {0x2e,0x28,0x28,0x3c,0x22,},
  {0x3e,0x28,0x38,0x28,0x3e,},
  {0x10,0x10,0x54,0x10,0x10,},
  {0x0,0x0,0x0,0x0,0x0,},
  {0xfe,0xfe,0xfe,0xfe,0xfe,},
};

#endif
