// FUN_180336330 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180336330 */

undefined8 *
FUN_180336330(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4,
             undefined8 *param_5,undefined8 *param_6,undefined8 *param_7,undefined8 *param_8,
             undefined4 *param_9,undefined8 *param_10,undefined4 *param_11,undefined4 *param_12,
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
  *(undefined4 *)(param_1 + 0xe) = 0x30;
  param_1[1] = param_1[1] & 0xfffffffffffffff;
  param_1[1] = param_1[1] | 0x1000000000000000;
  param_1[2] = 0xc;
  *(undefined8 *)((longlong)param_1 + 0x74) = *param_4;
  param_1[2] = param_1[2] & 0xfffffffffffffff;
  param_1[2] = param_1[2] | 0x8000000000000000;
  param_1[3] = 0x14;
  *(undefined8 *)((longlong)param_1 + 0x7c) = *param_5;
  param_1[3] = param_1[3] & 0xfffffffffffffff;
  param_1[3] = param_1[3] | 0x8000000000000000;
  param_1[4] = 0x1c;
  *(undefined8 *)((longlong)param_1 + 0x84) = *param_6;
  param_1[4] = param_1[4] & 0xfffffffffffffff;
  param_1[4] = param_1[4] | 0x8000000000000000;
  param_1[5] = 0x24;
  *(undefined8 *)((longlong)param_1 + 0x8c) = *param_7;
  param_1[5] = param_1[5] & 0xfffffffffffffff;
  param_1[5] = param_1[5] | 0x8000000000000000;
  param_1[6] = 0x2c;
  *(undefined8 *)((longlong)param_1 + 0x94) = *param_8;
  param_1[6] = param_1[6] & 0xfffffffffffffff | 0x4000000000000000;
  param_1[7] = 0x34;
  *(undefined4 *)((longlong)param_1 + 0x9c) = *param_9;
  param_1[7] = param_1[7] & 0xfffffffffffffff | 0x1000000000000000;
  param_1[8] = 0x38;
  param_1[0x14] = *param_10;
  param_1[8] = param_1[8] & 0xfffffffffffffff;
  param_1[8] = param_1[8] | 0x8000000000000000;
  param_1[9] = 0x40;
  *(undefined4 *)(param_1 + 0x15) = *param_11;
  param_1[9] = param_1[9] & 0xfffffffffffffff | 0x1000000000000000;
  param_1[10] = 0x44;
  *(undefined4 *)((longlong)param_1 + 0xac) = *param_12;
  param_1[10] = param_1[10] & 0xfffffffffffffff | 0x1000000000000000;
  param_1[0xb] = 0x48;
  param_1[0x16] = *param_13;
  param_1[0xb] = param_1[0xb] & 0xfffffffffffffff;
  param_1[0xb] = param_1[0xb] | 0x8000000000000000;
  param_1[0xc] = 0x50;
  *(undefined4 *)(param_1 + 0x17) = *param_14;
  param_1[0xc] = param_1[0xc] & 0xfffffffffffffff | 0x1000000000000000;
  return param_1;
}



