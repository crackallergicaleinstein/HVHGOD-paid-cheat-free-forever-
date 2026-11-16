// FUN_180337e20 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180337e20 */

undefined8 *
FUN_180337e20(undefined8 *param_1,undefined8 *param_2,undefined1 *param_3,undefined1 *param_4,
             undefined8 param_5,undefined8 *param_6,undefined1 *param_7,undefined8 *param_8,
             undefined4 *param_9)

{
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *param_1 = 0;
  param_1[8] = *param_2;
  *param_1 = 0x3000000000000000;
  param_1[1] = 8;
  *(undefined1 *)(param_1 + 9) = *param_3;
  param_1[1] = param_1[1] & 0xfffffffffffffff | 0x5000000000000000;
  param_1[2] = 9;
  *(undefined1 *)((longlong)param_1 + 0x49) = *param_4;
  param_1[2] = param_1[2] & 0xfffffffffffffff | 0x5000000000000000;
  param_1[3] = 10;
  *(undefined8 *)((longlong)param_1 + 0x4a) = param_5;
  param_1[3] = param_1[3] & 0xfffffffffffffff;
  param_1[3] = param_1[3] | 0xb000000000000000;
  param_1[4] = 0x12;
  *(undefined8 *)((longlong)param_1 + 0x52) = *param_6;
  param_1[4] = param_1[4] & 0xfffffffffffffff;
  param_1[4] = param_1[4] | 0x8000000000000000;
  param_1[5] = 0x1a;
  *(undefined1 *)((longlong)param_1 + 0x5a) = *param_7;
  param_1[5] = param_1[5] & 0xfffffffffffffff | 0x5000000000000000;
  param_1[6] = 0x1b;
  *(undefined8 *)((longlong)param_1 + 0x5b) = *param_8;
  param_1[6] = param_1[6] & 0xfffffffffffffff;
  param_1[6] = param_1[6] | 0x8000000000000000;
  param_1[7] = 0x23;
  *(undefined4 *)((longlong)param_1 + 99) = *param_9;
  param_1[7] = param_1[7] & 0xfffffffffffffff | 0x2000000000000000;
  return param_1;
}



