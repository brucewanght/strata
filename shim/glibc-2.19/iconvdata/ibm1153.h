/* Mapping table for IBM1153.
   Copyright (C) 2005-2014 Free Software Foundation, Inc.
   This file is part of the GNU C Library.
   Contributed by Jiro SEKIBA <sekiba@jp.ibm.com>, 2005.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <http://www.gnu.org/licenses/>.  */

#include <stdint.h>

static const uint32_t to_ucs4[256] =
{
  [0x00] = 0x0000, [0x01] = 0x0001, [0x02] = 0x0002, [0x03] = 0x0003,
  [0x04] = 0x009c, [0x05] = 0x0009, [0x06] = 0x0086, [0x07] = 0x007f,
  [0x08] = 0x0097, [0x09] = 0x008d, [0x0a] = 0x008e, [0x0b] = 0x000b,
  [0x0c] = 0x000c, [0x0d] = 0x000d, [0x0e] = 0x000e, [0x0f] = 0x000f,
  [0x10] = 0x0010, [0x11] = 0x0011, [0x12] = 0x0012, [0x13] = 0x0013,
  [0x14] = 0x009d, [0x15] = 0x0085, [0x16] = 0x0008, [0x17] = 0x0087,
  [0x18] = 0x0018, [0x19] = 0x0019, [0x1a] = 0x0092, [0x1b] = 0x008f,
  [0x1c] = 0x001c, [0x1d] = 0x001d, [0x1e] = 0x001e, [0x1f] = 0x001f,
  [0x20] = 0x0080, [0x21] = 0x0081, [0x22] = 0x0082, [0x23] = 0x0083,
  [0x24] = 0x0084, [0x25] = 0x000a, [0x26] = 0x0017, [0x27] = 0x001b,
  [0x28] = 0x0088, [0x29] = 0x0089, [0x2a] = 0x008a, [0x2b] = 0x008b,
  [0x2c] = 0x008c, [0x2d] = 0x0005, [0x2e] = 0x0006, [0x2f] = 0x0007,
  [0x30] = 0x0090, [0x31] = 0x0091, [0x32] = 0x0016, [0x33] = 0x0093,
  [0x34] = 0x0094, [0x35] = 0x0095, [0x36] = 0x0096, [0x37] = 0x0004,
  [0x38] = 0x0098, [0x39] = 0x0099, [0x3a] = 0x009a, [0x3b] = 0x009b,
  [0x3c] = 0x0014, [0x3d] = 0x0015, [0x3e] = 0x009e, [0x3f] = 0x001a,
  [0x40] = 0x0020, [0x41] = 0x00a0, [0x42] = 0x00e2, [0x43] = 0x00e4,
  [0x44] = 0x0163, [0x45] = 0x00e1, [0x46] = 0x0103, [0x47] = 0x010d,
  [0x48] = 0x00e7, [0x49] = 0x0107, [0x4a] = 0x005b, [0x4b] = 0x002e,
  [0x4c] = 0x003c, [0x4d] = 0x0028, [0x4e] = 0x002b, [0x4f] = 0x0021,
  [0x50] = 0x0026, [0x51] = 0x00e9, [0x52] = 0x0119, [0x53] = 0x00eb,
  [0x54] = 0x016f, [0x55] = 0x00ed, [0x56] = 0x00ee, [0x57] = 0x013e,
  [0x58] = 0x013a, [0x59] = 0x00df, [0x5a] = 0x005d, [0x5b] = 0x0024,
  [0x5c] = 0x002a, [0x5d] = 0x0029, [0x5e] = 0x003b, [0x5f] = 0x005e,
  [0x60] = 0x002d, [0x61] = 0x002f, [0x62] = 0x00c2, [0x63] = 0x00c4,
  [0x64] = 0x02dd, [0x65] = 0x00c1, [0x66] = 0x0102, [0x67] = 0x010c,
  [0x68] = 0x00c7, [0x69] = 0x0106, [0x6a] = 0x007c, [0x6b] = 0x002c,
  [0x6c] = 0x0025, [0x6d] = 0x005f, [0x6e] = 0x003e, [0x6f] = 0x003f,
  [0x70] = 0x02c7, [0x71] = 0x00c9, [0x72] = 0x0118, [0x73] = 0x00cb,
  [0x74] = 0x016e, [0x75] = 0x00cd, [0x76] = 0x00ce, [0x77] = 0x013d,
  [0x78] = 0x0139, [0x79] = 0x0060, [0x7a] = 0x003a, [0x7b] = 0x0023,
  [0x7c] = 0x0040, [0x7d] = 0x0027, [0x7e] = 0x003d, [0x7f] = 0x0022,
  [0x80] = 0x02d8, [0x81] = 0x0061, [0x82] = 0x0062, [0x83] = 0x0063,
  [0x84] = 0x0064, [0x85] = 0x0065, [0x86] = 0x0066, [0x87] = 0x0067,
  [0x88] = 0x0068, [0x89] = 0x0069, [0x8a] = 0x015b, [0x8b] = 0x0148,
  [0x8c] = 0x0111, [0x8d] = 0x00fd, [0x8e] = 0x0159, [0x8f] = 0x015f,
  [0x90] = 0x00b0, [0x91] = 0x006a, [0x92] = 0x006b, [0x93] = 0x006c,
  [0x94] = 0x006d, [0x95] = 0x006e, [0x96] = 0x006f, [0x97] = 0x0070,
  [0x98] = 0x0071, [0x99] = 0x0072, [0x9a] = 0x0142, [0x9b] = 0x0144,
  [0x9c] = 0x0161, [0x9d] = 0x00b8, [0x9e] = 0x02db, [0x9f] = 0x20ac,
  [0xa0] = 0x0105, [0xa1] = 0x007e, [0xa2] = 0x0073, [0xa3] = 0x0074,
  [0xa4] = 0x0075, [0xa5] = 0x0076, [0xa6] = 0x0077, [0xa7] = 0x0078,
  [0xa8] = 0x0079, [0xa9] = 0x007a, [0xaa] = 0x015a, [0xab] = 0x0147,
  [0xac] = 0x0110, [0xad] = 0x00dd, [0xae] = 0x0158, [0xaf] = 0x015e,
  [0xb0] = 0x02d9, [0xb1] = 0x0104, [0xb2] = 0x017c, [0xb3] = 0x0162,
  [0xb4] = 0x017b, [0xb5] = 0x00a7, [0xb6] = 0x017e, [0xb7] = 0x017a,
  [0xb8] = 0x017d, [0xb9] = 0x0179, [0xba] = 0x0141, [0xbb] = 0x0143,
  [0xbc] = 0x0160, [0xbd] = 0x00a8, [0xbe] = 0x00b4, [0xbf] = 0x00d7,
  [0xc0] = 0x007b, [0xc1] = 0x0041, [0xc2] = 0x0042, [0xc3] = 0x0043,
  [0xc4] = 0x0044, [0xc5] = 0x0045, [0xc6] = 0x0046, [0xc7] = 0x0047,
  [0xc8] = 0x0048, [0xc9] = 0x0049, [0xca] = 0x00ad, [0xcb] = 0x00f4,
  [0xcc] = 0x00f6, [0xcd] = 0x0155, [0xce] = 0x00f3, [0xcf] = 0x0151,
  [0xd0] = 0x007d, [0xd1] = 0x004a, [0xd2] = 0x004b, [0xd3] = 0x004c,
  [0xd4] = 0x004d, [0xd5] = 0x004e, [0xd6] = 0x004f, [0xd7] = 0x0050,
  [0xd8] = 0x0051, [0xd9] = 0x0052, [0xda] = 0x011a, [0xdb] = 0x0171,
  [0xdc] = 0x00fc, [0xdd] = 0x0165, [0xde] = 0x00fa, [0xdf] = 0x011b,
  [0xe0] = 0x005c, [0xe1] = 0x00f7, [0xe2] = 0x0053, [0xe3] = 0x0054,
  [0xe4] = 0x0055, [0xe5] = 0x0056, [0xe6] = 0x0057, [0xe7] = 0x0058,
  [0xe8] = 0x0059, [0xe9] = 0x005a, [0xea] = 0x010f, [0xeb] = 0x00d4,
  [0xec] = 0x00d6, [0xed] = 0x0154, [0xee] = 0x00d3, [0xef] = 0x0150,
  [0xf0] = 0x0030, [0xf1] = 0x0031, [0xf2] = 0x0032, [0xf3] = 0x0033,
  [0xf4] = 0x0034, [0xf5] = 0x0035, [0xf6] = 0x0036, [0xf7] = 0x0037,
  [0xf8] = 0x0038, [0xf9] = 0x0039, [0xfa] = 0x010e, [0xfb] = 0x0170,
  [0xfc] = 0x00dc, [0xfd] = 0x0164, [0xfe] = 0x00da, [0xff] = 0x009f
};

static const struct gap from_idx[] =
{
  { start: 0x0000, end: 0x00a0, idx:     0 },
  { start: 0x00a7, end: 0x00b8, idx:    -6 },
  { start: 0x00c1, end: 0x0111, idx:   -14 },
  { start: 0x0118, end: 0x011b, idx:   -20 },
  { start: 0x0139, end: 0x0148, idx:   -49 },
  { start: 0x0150, end: 0x0165, idx:   -56 },
  { start: 0x016e, end: 0x0171, idx:   -64 },
  { start: 0x0179, end: 0x017e, idx:   -71 },
  { start: 0x02c7, end: 0x02c7, idx:  -399 },
  { start: 0x02d8, end: 0x02dd, idx:  -415 },
  { start: 0x20ac, end: 0x20ac, idx: -8045 },
  { start: 0xffff, end: 0xffff, idx:     0 }
};

static const char from_ucs4[] =
{
  '\x00', '\x01', '\x02', '\x03', '\x37', '\x2d', '\x2e', '\x2f',
  '\x16', '\x05', '\x25', '\x0b', '\x0c', '\x0d', '\x0e', '\x0f',
  '\x10', '\x11', '\x12', '\x13', '\x3c', '\x3d', '\x32', '\x26',
  '\x18', '\x19', '\x3f', '\x27', '\x1c', '\x1d', '\x1e', '\x1f',
  '\x40', '\x4f', '\x7f', '\x7b', '\x5b', '\x6c', '\x50', '\x7d',
  '\x4d', '\x5d', '\x5c', '\x4e', '\x6b', '\x60', '\x4b', '\x61',
  '\xf0', '\xf1', '\xf2', '\xf3', '\xf4', '\xf5', '\xf6', '\xf7',
  '\xf8', '\xf9', '\x7a', '\x5e', '\x4c', '\x7e', '\x6e', '\x6f',
  '\x7c', '\xc1', '\xc2', '\xc3', '\xc4', '\xc5', '\xc6', '\xc7',
  '\xc8', '\xc9', '\xd1', '\xd2', '\xd3', '\xd4', '\xd5', '\xd6',
  '\xd7', '\xd8', '\xd9', '\xe2', '\xe3', '\xe4', '\xe5', '\xe6',
  '\xe7', '\xe8', '\xe9', '\x4a', '\xe0', '\x5a', '\x5f', '\x6d',
  '\x79', '\x81', '\x82', '\x83', '\x84', '\x85', '\x86', '\x87',
  '\x88', '\x89', '\x91', '\x92', '\x93', '\x94', '\x95', '\x96',
  '\x97', '\x98', '\x99', '\xa2', '\xa3', '\xa4', '\xa5', '\xa6',
  '\xa7', '\xa8', '\xa9', '\xc0', '\x6a', '\xd0', '\xa1', '\x07',
  '\x20', '\x21', '\x22', '\x23', '\x24', '\x15', '\x06', '\x17',
  '\x28', '\x29', '\x2a', '\x2b', '\x2c', '\x09', '\x0a', '\x1b',
  '\x30', '\x31', '\x1a', '\x33', '\x34', '\x35', '\x36', '\x08',
  '\x38', '\x39', '\x3a', '\x3b', '\x04', '\x14', '\x3e', '\xff',
  '\x41', '\xb5', '\xbd', '\x00', '\x00', '\x00', '\x00', '\xca',
  '\x00', '\x00', '\x90', '\x00', '\x00', '\x00', '\xbe', '\x00',
  '\x00', '\x00', '\x9d', '\x65', '\x62', '\x00', '\x63', '\x00',
  '\x00', '\x68', '\x00', '\x71', '\x00', '\x73', '\x00', '\x75',
  '\x76', '\x00', '\xac', '\x00', '\x00', '\xee', '\xeb', '\x00',
  '\xec', '\xbf', '\x00', '\x00', '\xfe', '\x00', '\xfc', '\xad',
  '\x00', '\x59', '\x00', '\x45', '\x42', '\x00', '\x43', '\x00',
  '\x00', '\x48', '\x00', '\x51', '\x00', '\x53', '\x00', '\x55',
  '\x56', '\x00', '\x00', '\x00', '\x00', '\xce', '\xcb', '\x00',
  '\xcc', '\xe1', '\x00', '\x00', '\xde', '\x00', '\xdc', '\x8d',
  '\x00', '\x00', '\x00', '\x00', '\x66', '\x46', '\xb1', '\xa0',
  '\x69', '\x49', '\x00', '\x00', '\x00', '\x00', '\x67', '\x47',
  '\xfa', '\xea', '\xac', '\x8c', '\x72', '\x52', '\xda', '\xdf',
  '\x78', '\x58', '\x00', '\x00', '\x77', '\x57', '\x00', '\x00',
  '\xba', '\x9a', '\xbb', '\x9b', '\x00', '\x00', '\xab', '\x8b',
  '\xef', '\xcf', '\x00', '\x00', '\xed', '\xcd', '\x00', '\x00',
  '\xae', '\x8e', '\xaa', '\x8a', '\x00', '\x00', '\xaf', '\x8f',
  '\xbc', '\x9c', '\xb3', '\x44', '\xfd', '\xdd', '\x74', '\x54',
  '\xfb', '\xdb', '\xb9', '\xb7', '\xb4', '\xb2', '\xb8', '\xb6',
  '\x70', '\x80', '\xb0', '\x00', '\x9e', '\x00', '\x64', '\x9f'
};
