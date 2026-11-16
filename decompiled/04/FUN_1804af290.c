// FUN_1804af290 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804af290 */

undefined4 * FUN_1804af290(undefined4 *param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  puVar1 = (undefined8 *)(param_1 + 0x54);
  lVar2 = 0x3d;
  do {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1 = puVar1 + 2;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  *param_1 = 0;
  param_1[1] = 0x3f800000;
  param_1[2] = 0x3f800000;
  param_1[3] = 0x3f800000;
  param_1[4] = 0x3f19999a;
  param_1[5] = 0x41000000;
  *(undefined8 *)(param_1 + 6) = 0x41000000;
  param_1[8] = 0x3f800000;
  param_1[9] = 0x40800000;
  param_1[10] = 0x42000000;
  *(undefined8 *)(param_1 + 0xb) = 0x42000000;
  *(undefined8 *)(param_1 + 0xd) = 0x3f000000;
  param_1[0xf] = 0;
  *(undefined8 *)(param_1 + 0x10) = 0x3f800000;
  param_1[0x12] = 0x3f800000;
  param_1[0x13] = 0x40800000;
  *(undefined8 *)(param_1 + 0x14) = 0x40400000;
  param_1[0x16] = 0;
  param_1[0x17] = 0x41000000;
  param_1[0x18] = 0x40800000;
  param_1[0x19] = 0x40800000;
  param_1[0x1a] = 0x40800000;
  param_1[0x1b] = 0x40800000;
  *(undefined8 *)(param_1 + 0x1c) = 0x40000000;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0x41a80000;
  param_1[0x20] = 0x40c00000;
  param_1[0x21] = 0x41600000;
  param_1[0x22] = 0x41100000;
  param_1[0x23] = 0x40000000;
  *(undefined8 *)(param_1 + 0x24) = 0x41400000;
  *(undefined8 *)(param_1 + 0x26) = 0x40800000;
  param_1[0x28] = 0;
  *(undefined8 *)(param_1 + 0x29) = 0x40a00000;
  param_1[0x2b] = 0x3f800000;
  param_1[0x2c] = 0x42a00000;
  param_1[0x2d] = 0xbf800000;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0x3f800000;
  param_1[0x30] = 0x3f800000;
  param_1[0x31] = 0x3f1c61aa;
  *(undefined8 *)(param_1 + 0x32) = 0x3f000000;
  param_1[0x34] = 0x40000;
  *(undefined8 *)(param_1 + 0x35) = 0x3f800000;
  *(undefined8 *)(param_1 + 0x37) = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0x40000000;
  param_1[0x3b] = 0x40400000;
  param_1[0x3c] = 0x40400000;
  param_1[0x3d] = 1;
  param_1[0x3e] = 0x3f000000;
  *(undefined8 *)(param_1 + 0x3f) = 0x3f000000;
  param_1[0x41] = 0;
  param_1[0x42] = 0x3f800000;
  param_1[0x43] = 0x3f800000;
  *(undefined8 *)(param_1 + 0x44) = 0x40400000;
  param_1[0x46] = 0x3f000000;
  param_1[0x47] = 0x41a00000;
  param_1[0x48] = 0x40400000;
  param_1[0x49] = 0x41980000;
  param_1[0x4a] = 0x41980000;
  param_1[0x4b] = 0x40400000;
  param_1[0x4c] = 0x40400000;
  param_1[0x4d] = 0x3f800000;
  param_1[0x4e] = 0x3f3851ec;
  param_1[0x4f] = 0x3ecccccd;
  param_1[0x50] = 0x3e99999a;
  *(undefined2 *)(param_1 + 0x51) = 1;
  *(undefined1 *)((longlong)param_1 + 0x146) = 1;
  param_1[0x52] = 0x3f8f5c29;
  param_1[0x53] = 0x3e99999a;
  param_1[0x148] = 0x3e19999a;
  param_1[0x149] = 0x3e19999a;
  param_1[0x14a] = 0x3ecccccd;
  param_1[0x14b] = 0xa400;
  param_1[0x14c] = 0x30400;
  *(undefined8 *)(param_1 + 0x14d) = 0x3f800000;
  param_1[0x150] = 0;
  *(undefined1 *)(param_1 + 0x14f) = 1;
  FUN_1804d80b0(param_1);
  return param_1;
}



