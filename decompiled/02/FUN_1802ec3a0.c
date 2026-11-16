// FUN_1802ec3a0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802ec3a0 */

undefined8 * FUN_1802ec3a0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *param_1 = *param_2;
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  uVar1 = param_2[4];
  param_2[4] = 0;
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  param_2[3] = 0;
  param_2[2] = 0;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar1;
  *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_2 + 5);
  *(undefined4 *)((longlong)param_1 + 0x2c) = *(undefined4 *)((longlong)param_2 + 0x2c);
  *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
  uVar1 = *(undefined8 *)((longlong)param_2 + 0x3c);
  uVar2 = *(undefined8 *)((longlong)param_2 + 0x44);
  uVar3 = *(undefined8 *)((longlong)param_2 + 0x4c);
  *(undefined8 *)((longlong)param_1 + 0x34) = *(undefined8 *)((longlong)param_2 + 0x34);
  *(undefined8 *)((longlong)param_1 + 0x3c) = uVar1;
  *(undefined8 *)((longlong)param_1 + 0x44) = uVar2;
  *(undefined8 *)((longlong)param_1 + 0x4c) = uVar3;
  uVar1 = *(undefined8 *)((longlong)param_2 + 0x5c);
  *(undefined8 *)((longlong)param_1 + 0x54) = *(undefined8 *)((longlong)param_2 + 0x54);
  *(undefined8 *)((longlong)param_1 + 0x5c) = uVar1;
  *(undefined8 *)((longlong)param_1 + 100) = *(undefined8 *)((longlong)param_2 + 100);
  *(undefined1 *)((longlong)param_1 + 0x6c) = *(undefined1 *)((longlong)param_2 + 0x6c);
  param_1[0xe] = param_2[0xe];
  *(undefined4 *)(param_1 + 0xf) = *(undefined4 *)(param_2 + 0xf);
  uVar1 = *(undefined8 *)((longlong)param_2 + 0x84);
  uVar2 = *(undefined8 *)((longlong)param_2 + 0x8c);
  uVar3 = *(undefined8 *)((longlong)param_2 + 0x94);
  *(undefined8 *)((longlong)param_1 + 0x7c) = *(undefined8 *)((longlong)param_2 + 0x7c);
  *(undefined8 *)((longlong)param_1 + 0x84) = uVar1;
  *(undefined8 *)((longlong)param_1 + 0x8c) = uVar2;
  *(undefined8 *)((longlong)param_1 + 0x94) = uVar3;
  uVar1 = *(undefined8 *)((longlong)param_2 + 0xa4);
  *(undefined8 *)((longlong)param_1 + 0x9c) = *(undefined8 *)((longlong)param_2 + 0x9c);
  *(undefined8 *)((longlong)param_1 + 0xa4) = uVar1;
  *(undefined8 *)((longlong)param_1 + 0xac) = *(undefined8 *)((longlong)param_2 + 0xac);
  *(undefined4 *)((longlong)param_1 + 0xb4) = *(undefined4 *)((longlong)param_2 + 0xb4);
  return param_1;
}



