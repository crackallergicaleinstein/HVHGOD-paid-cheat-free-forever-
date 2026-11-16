// FUN_180336560 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180336560 */

undefined8 *
FUN_180336560(undefined8 *param_1,undefined8 *param_2,undefined4 *param_3,undefined4 *param_4,
             undefined8 *param_5,undefined8 *param_6,undefined8 *param_7,undefined8 *param_8)

{
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *param_1 = 0;
  param_1[7] = *param_2;
  *param_1 = 0x3000000000000000;
  param_1[1] = 8;
  *(undefined4 *)(param_1 + 8) = *param_3;
  param_1[1] = param_1[1] & 0xfffffffffffffff | 0x1000000000000000;
  param_1[2] = 0xc;
  *(undefined4 *)((longlong)param_1 + 0x44) = *param_4;
  param_1[2] = param_1[2] & 0xfffffffffffffff | 0x1000000000000000;
  param_1[3] = 0x10;
  param_1[9] = *param_5;
  param_1[3] = param_1[3] & 0xfffffffffffffff;
  param_1[3] = param_1[3] | 0x8000000000000000;
  param_1[4] = 0x18;
  param_1[10] = *param_6;
  param_1[4] = param_1[4] & 0xfffffffffffffff;
  param_1[4] = param_1[4] | 0x8000000000000000;
  param_1[5] = 0x20;
  param_1[0xb] = *param_7;
  param_1[5] = param_1[5] & 0xfffffffffffffff;
  param_1[5] = param_1[5] | 0x8000000000000000;
  param_1[6] = 0x28;
  param_1[0xc] = *param_8;
  param_1[6] = param_1[6] & 0xfffffffffffffff;
  param_1[6] = param_1[6] | 0x8000000000000000;
  return param_1;
}



