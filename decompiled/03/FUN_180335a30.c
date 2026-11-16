// FUN_180335a30 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180335a30 */

undefined8 *
FUN_180335a30(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined1 *param_4,
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
  *param_1 = 0xb000000000000000;
  param_1[1] = 8;
  param_1[8] = *param_3;
  param_1[1] = param_1[1] & 0xfffffffffffffff | 0x3000000000000000;
  param_1[2] = 0x10;
  *(undefined1 *)(param_1 + 9) = *param_4;
  param_1[2] = param_1[2] & 0xfffffffffffffff | 0x5000000000000000;
  param_1[3] = 0x11;
  *(undefined8 *)((longlong)param_1 + 0x49) = *param_5;
  param_1[3] = param_1[3] & 0xfffffffffffffff;
  param_1[3] = param_1[3] | 0x8000000000000000;
  param_1[4] = 0x19;
  *(undefined8 *)((longlong)param_1 + 0x51) = *param_6;
  param_1[4] = param_1[4] & 0xfffffffffffffff;
  param_1[4] = param_1[4] | 0x8000000000000000;
  param_1[5] = 0x21;
  *(undefined8 *)((longlong)param_1 + 0x59) = *param_7;
  param_1[5] = param_1[5] & 0xfffffffffffffff;
  param_1[5] = param_1[5] | 0x8000000000000000;
  param_1[6] = 0x29;
  *(undefined8 *)((longlong)param_1 + 0x61) = *param_8;
  param_1[6] = param_1[6] & 0xfffffffffffffff;
  param_1[6] = param_1[6] | 0x8000000000000000;
  return param_1;
}



