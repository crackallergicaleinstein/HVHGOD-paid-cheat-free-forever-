// FUN_180335b70 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180335b70 */

undefined8 *
FUN_180335b70(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
             undefined8 *param_5,undefined4 *param_6,undefined4 *param_7)

{
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *param_1 = 0;
  param_1[6] = *param_2;
  *param_1 = 0x8000000000000000;
  param_1[1] = 8;
  param_1[7] = *param_3;
  param_1[1] = param_1[1] & 0xfffffffffffffff;
  param_1[1] = param_1[1] | 0x8000000000000000;
  param_1[2] = 0x10;
  param_1[8] = *param_4;
  param_1[2] = param_1[2] & 0xfffffffffffffff;
  param_1[2] = param_1[2] | 0x8000000000000000;
  param_1[3] = 0x18;
  param_1[9] = *param_5;
  param_1[3] = param_1[3] & 0xfffffffffffffff;
  param_1[3] = param_1[3] | 0x8000000000000000;
  param_1[4] = 0x20;
  *(undefined4 *)(param_1 + 10) = *param_6;
  param_1[4] = param_1[4] & 0xfffffffffffffff | 0x1000000000000000;
  param_1[5] = 0x24;
  *(undefined4 *)((longlong)param_1 + 0x54) = *param_7;
  param_1[5] = param_1[5] & 0xfffffffffffffff | 0x1000000000000000;
  return param_1;
}



