// FUN_1803361c0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1803361c0 */

undefined8 *
FUN_1803361c0(undefined8 *param_1,undefined8 *param_2,undefined4 *param_3,undefined4 *param_4,
             undefined4 *param_5,undefined8 *param_6,undefined8 *param_7,undefined8 *param_8,
             undefined4 *param_9,undefined4 *param_10)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = *param_2;
  *param_1 = 0x3000000000000000;
  param_1[1] = 8;
  *(undefined4 *)(param_1 + 10) = *param_3;
  param_1[1] = param_1[1] & 0xfffffffffffffff | 0x1000000000000000;
  param_1[2] = 0xc;
  *(undefined4 *)((longlong)param_1 + 0x54) = *param_4;
  param_1[2] = param_1[2] & 0xfffffffffffffff | 0x1000000000000000;
  param_1[3] = 0x10;
  *(undefined4 *)(param_1 + 0xb) = *param_5;
  param_1[3] = param_1[3] & 0xfffffffffffffff | 0x1000000000000000;
  param_1[4] = 0x14;
  *(undefined8 *)((longlong)param_1 + 0x5c) = *param_6;
  param_1[4] = param_1[4] & 0xfffffffffffffff;
  param_1[4] = param_1[4] | 0x8000000000000000;
  param_1[5] = 0x1c;
  *(undefined8 *)((longlong)param_1 + 100) = *param_7;
  param_1[5] = param_1[5] & 0xfffffffffffffff;
  param_1[5] = param_1[5] | 0x8000000000000000;
  param_1[6] = 0x24;
  *(undefined8 *)((longlong)param_1 + 0x6c) = *param_8;
  param_1[6] = param_1[6] & 0xfffffffffffffff;
  param_1[6] = param_1[6] | 0x8000000000000000;
  param_1[7] = 0x2c;
  *(undefined4 *)((longlong)param_1 + 0x74) = *param_9;
  param_1[7] = param_1[7] & 0xfffffffffffffff | 0x1000000000000000;
  param_1[8] = 0x30;
  *(undefined4 *)(param_1 + 0xf) = *param_10;
  param_1[8] = param_1[8] & 0xfffffffffffffff | 0x1000000000000000;
  return param_1;
}



