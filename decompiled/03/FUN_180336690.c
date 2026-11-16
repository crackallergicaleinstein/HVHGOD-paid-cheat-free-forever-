// FUN_180336690 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180336690 */

undefined8 *
FUN_180336690(undefined8 *param_1,undefined8 *param_2,undefined4 *param_3,undefined8 *param_4,
             undefined8 *param_5,undefined4 *param_6,undefined4 *param_7,undefined8 *param_8,
             undefined8 *param_9,undefined8 *param_10,undefined8 *param_11,undefined8 *param_12)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  param_1[10] = 0;
  param_1[0xb] = *param_2;
  *param_1 = 0x3000000000000000;
  param_1[1] = 8;
  *(undefined4 *)(param_1 + 0xc) = *param_3;
  param_1[1] = param_1[1] & 0xfffffffffffffff | 0x1000000000000000;
  param_1[2] = 0xc;
  *(undefined8 *)((longlong)param_1 + 100) = *param_4;
  param_1[2] = param_1[2] & 0xfffffffffffffff;
  param_1[2] = param_1[2] | 0x8000000000000000;
  param_1[3] = 0x14;
  *(undefined8 *)((longlong)param_1 + 0x6c) = *param_5;
  param_1[3] = param_1[3] & 0xfffffffffffffff | 0xb000000000000000;
  param_1[4] = 0x1c;
  *(undefined4 *)((longlong)param_1 + 0x74) = *param_6;
  param_1[4] = param_1[4] & 0xfffffffffffffff | 0x1000000000000000;
  param_1[5] = 0x20;
  *(undefined4 *)(param_1 + 0xf) = *param_7;
  param_1[5] = param_1[5] & 0xfffffffffffffff | 0x1000000000000000;
  param_1[6] = 0x24;
  *(undefined8 *)((longlong)param_1 + 0x7c) = *param_8;
  param_1[6] = param_1[6] & 0xfffffffffffffff;
  param_1[6] = param_1[6] | 0x8000000000000000;
  param_1[7] = 0x2c;
  *(undefined8 *)((longlong)param_1 + 0x84) = *param_9;
  param_1[7] = param_1[7] & 0xfffffffffffffff;
  param_1[7] = param_1[7] | 0x8000000000000000;
  param_1[8] = 0x34;
  *(undefined8 *)((longlong)param_1 + 0x8c) = *param_10;
  param_1[8] = param_1[8] & 0xfffffffffffffff;
  param_1[8] = param_1[8] | 0x8000000000000000;
  param_1[9] = 0x3c;
  *(undefined8 *)((longlong)param_1 + 0x94) = *param_11;
  param_1[9] = param_1[9] & 0xfffffffffffffff;
  param_1[9] = param_1[9] | 0x8000000000000000;
  param_1[10] = 0x44;
  *(undefined8 *)((longlong)param_1 + 0x9c) = *param_12;
  param_1[10] = param_1[10] & 0xfffffffffffffff;
  param_1[10] = param_1[10] | 0x8000000000000000;
  return param_1;
}



