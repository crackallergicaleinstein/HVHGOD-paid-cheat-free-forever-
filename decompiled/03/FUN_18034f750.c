// FUN_18034f750 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18034f750 */

undefined8 *
FUN_18034f750(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
             undefined8 *param_5,undefined4 *param_6,undefined4 *param_7,undefined8 *param_8,
             undefined1 *param_9,undefined8 param_10,undefined8 param_11,undefined8 *param_12,
             undefined8 *param_13,undefined4 *param_14)

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
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = *param_2;
  *param_1 = 0x3000000000000000;
  param_1[1] = 8;
  param_1[0xe] = *param_3;
  param_1[1] = param_1[1] & 0xfffffffffffffff | 0xb000000000000000;
  param_1[2] = 0x10;
  param_1[0xf] = *param_4;
  param_1[2] = param_1[2] & 0xfffffffffffffff;
  param_1[2] = param_1[2] | 0x8000000000000000;
  param_1[3] = 0x18;
  param_1[0x10] = *param_5;
  param_1[3] = param_1[3] & 0xfffffffffffffff;
  param_1[3] = param_1[3] | 0x8000000000000000;
  param_1[4] = 0x20;
  *(undefined4 *)(param_1 + 0x11) = *param_6;
  param_1[4] = param_1[4] & 0xfffffffffffffff;
  param_1[4] = param_1[4] | 0x1000000000000000;
  param_1[5] = 0x24;
  *(undefined4 *)((longlong)param_1 + 0x8c) = *param_7;
  param_1[5] = param_1[5] & 0xfffffffffffffff;
  param_1[5] = param_1[5] | 0x1000000000000000;
  param_1[6] = 0x28;
  param_1[0x12] = *param_8;
  param_1[6] = param_1[6] & 0xfffffffffffffff;
  param_1[6] = param_1[6] | 0x8000000000000000;
  param_1[7] = 0x30;
  *(undefined1 *)(param_1 + 0x13) = *param_9;
  param_1[7] = param_1[7] & 0xfffffffffffffff;
  param_1[7] = param_1[7] | 0x5000000000000000;
  param_1[8] = 0x31;
  *(undefined4 *)((longlong)param_1 + 0x99) = DAT_180bda1d8;
  param_1[8] = param_1[8] & 0xfffffffffffffff | 0x1000000000000000;
  param_1[9] = 0x35;
  *(undefined1 *)((longlong)param_1 + 0x9d) = DAT_180bbec89;
  param_1[9] = param_1[9] & 0xfffffffffffffff | 0x5000000000000000;
  param_1[10] = 0x36;
  *(undefined8 *)((longlong)param_1 + 0x9e) = *param_12;
  param_1[10] = param_1[10] & 0xfffffffffffffff;
  param_1[10] = param_1[10] | 0x8000000000000000;
  param_1[0xb] = 0x3e;
  *(undefined8 *)((longlong)param_1 + 0xa6) = *param_13;
  param_1[0xb] = param_1[0xb] & 0xfffffffffffffff;
  param_1[0xb] = param_1[0xb] | 0x8000000000000000;
  param_1[0xc] = 0x46;
  *(undefined4 *)((longlong)param_1 + 0xae) = *param_14;
  param_1[0xc] = param_1[0xc] & 0xfffffffffffffff;
  param_1[0xc] = param_1[0xc] | 0x2000000000000000;
  return param_1;
}



