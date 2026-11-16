// FUN_180337be0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180337be0 */

undefined8 *
FUN_180337be0(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
             undefined8 *param_5)

{
  undefined4 *in_stack_00000050;
  undefined8 *in_stack_00000070;
  
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
  *(undefined1 (*) [16])(param_1 + 0xc) = (undefined1  [16])0x0;
  param_1[0xe] = *param_2;
  *param_1 = 0x3000000000000000;
  param_1[1] = 8;
  param_1[0xf] = DAT_180bda188;
  param_1[1] = param_1[1] & 0xfffffffffffffff | 0x4000000000000000;
  param_1[2] = 0x10;
  param_1[0x10] = DAT_180bda180;
  param_1[2] = param_1[2] & 0xfffffffffffffff | 0x4000000000000000;
  param_1[3] = 0x18;
  param_1[0x11] = *param_5;
  param_1[3] = param_1[3] & 0xfffffffffffffff | 0xb000000000000000;
  param_1[4] = 0x20;
  param_1[0x12] = DAT_180bda190;
  param_1[4] = param_1[4] & 0xfffffffffffffff | 0x4000000000000000;
  param_1[5] = 0x28;
  param_1[0x13] = DAT_180bda198;
  param_1[5] = param_1[5] & 0xfffffffffffffff | 0x4000000000000000;
  param_1[6] = 0x30;
  param_1[0x14] = DAT_180bda1a0;
  param_1[6] = param_1[6] & 0xfffffffffffffff | 0x4000000000000000;
  param_1[7] = 0x38;
  param_1[0x15] = DAT_180bda1a8;
  param_1[7] = param_1[7] & 0xfffffffffffffff | 0x4000000000000000;
  param_1[8] = 0x40;
  *(undefined4 *)(param_1 + 0x16) = *in_stack_00000050;
  param_1[8] = param_1[8] & 0xfffffffffffffff | 0x1000000000000000;
  param_1[9] = 0x44;
  *(undefined4 *)((longlong)param_1 + 0xb4) = DAT_180bda170;
  param_1[9] = param_1[9] & 0xfffffffffffffff | 0x2000000000000000;
  param_1[10] = 0x48;
  *(undefined4 *)(param_1 + 0x17) = DAT_180bda174;
  param_1[10] = param_1[10] & 0xfffffffffffffff | 0x2000000000000000;
  param_1[0xb] = 0x4c;
  *(undefined4 *)((longlong)param_1 + 0xbc) = DAT_180bda178;
  param_1[0xb] = param_1[0xb] & 0xfffffffffffffff | 0x2000000000000000;
  param_1[0xc] = 0x50;
  param_1[0x18] = *in_stack_00000070;
  param_1[0xc] = param_1[0xc] & 0xfffffffffffffff | 0xb000000000000000;
  param_1[0xd] = 0x58;
  *(undefined4 *)(param_1 + 0x19) = DAT_180bda164;
  param_1[0xd] = param_1[0xd] & 0xfffffffffffffff | 0x1000000000000000;
  return param_1;
}



