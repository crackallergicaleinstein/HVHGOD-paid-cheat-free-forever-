// FUN_18034f490 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18034f490 */

undefined8 *
FUN_18034f490(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4,
             undefined8 *param_5,undefined4 *param_6,undefined8 *param_7,undefined4 *param_8)

{
  undefined8 *in_stack_00000060;
  undefined8 *in_stack_00000068;
  undefined4 *in_stack_00000070;
  undefined4 *in_stack_00000078;
  undefined4 *in_stack_00000080;
  undefined4 *in_stack_00000088;
  undefined4 *in_stack_00000090;
  
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
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = *param_2;
  *param_1 = 0x3000000000000000;
  param_1[1] = 8;
  param_1[0x12] = param_3;
  param_1[1] = param_1[1] & 0xfffffffffffffff;
  param_1[1] = param_1[1] | 0xb000000000000000;
  param_1[2] = 0x10;
  param_1[0x13] = *param_4;
  param_1[2] = param_1[2] & 0xfffffffffffffff;
  param_1[2] = param_1[2] | 0x8000000000000000;
  param_1[3] = 0x18;
  param_1[0x14] = *param_5;
  param_1[3] = param_1[3] & 0xfffffffffffffff;
  param_1[3] = param_1[3] | 0x8000000000000000;
  param_1[4] = 0x20;
  *(undefined4 *)(param_1 + 0x15) = *param_6;
  param_1[4] = param_1[4] & 0xfffffffffffffff;
  param_1[4] = param_1[4] | 0x1000000000000000;
  param_1[5] = 0x24;
  *(undefined8 *)((longlong)param_1 + 0xac) = *param_7;
  param_1[5] = param_1[5] & 0xfffffffffffffff;
  param_1[5] = param_1[5] | 0x4000000000000000;
  param_1[6] = 0x2c;
  *(undefined4 *)((longlong)param_1 + 0xb4) = *param_8;
  param_1[6] = param_1[6] & 0xfffffffffffffff;
  param_1[6] = param_1[6] | 0x1000000000000000;
  param_1[7] = 0x30;
  *(undefined4 *)(param_1 + 0x17) = DAT_180bda1d8;
  param_1[7] = param_1[7] & 0xfffffffffffffff | 0x1000000000000000;
  param_1[8] = 0x34;
  *(undefined1 *)((longlong)param_1 + 0xbc) = DAT_180bbec89;
  param_1[8] = param_1[8] & 0xfffffffffffffff | 0x5000000000000000;
  param_1[9] = 0x35;
  *(undefined4 *)((longlong)param_1 + 0xbd) = DAT_180c6f678;
  param_1[9] = param_1[9] & 0xfffffffffffffff | 0x1000000000000000;
  param_1[10] = 0x39;
  *(undefined8 *)((longlong)param_1 + 0xc1) = *in_stack_00000060;
  param_1[10] = param_1[10] & 0xfffffffffffffff;
  param_1[10] = param_1[10] | 0x8000000000000000;
  param_1[0xb] = 0x41;
  *(undefined8 *)((longlong)param_1 + 0xc9) = *in_stack_00000068;
  param_1[0xb] = param_1[0xb] & 0xfffffffffffffff;
  param_1[0xb] = param_1[0xb] | 0x8000000000000000;
  param_1[0xc] = 0x49;
  *(undefined4 *)((longlong)param_1 + 0xd1) = *in_stack_00000070;
  param_1[0xc] = param_1[0xc] & 0xfffffffffffffff;
  param_1[0xc] = param_1[0xc] | 0x2000000000000000;
  param_1[0xd] = 0x4d;
  *(undefined4 *)((longlong)param_1 + 0xd5) = *in_stack_00000078;
  param_1[0xd] = param_1[0xd] & 0xfffffffffffffff;
  param_1[0xd] = param_1[0xd] | 0x1000000000000000;
  param_1[0xe] = 0x51;
  *(undefined4 *)((longlong)param_1 + 0xd9) = *in_stack_00000080;
  param_1[0xe] = param_1[0xe] & 0xfffffffffffffff;
  param_1[0xe] = param_1[0xe] | 0x1000000000000000;
  param_1[0xf] = 0x55;
  *(undefined4 *)((longlong)param_1 + 0xdd) = *in_stack_00000088;
  param_1[0xf] = param_1[0xf] & 0xfffffffffffffff;
  param_1[0xf] = param_1[0xf] | 0x1000000000000000;
  param_1[0x10] = 0x59;
  *(undefined4 *)((longlong)param_1 + 0xe1) = *in_stack_00000090;
  param_1[0x10] = param_1[0x10] & 0xfffffffffffffff;
  param_1[0x10] = param_1[0x10] | 0x1000000000000000;
  return param_1;
}



