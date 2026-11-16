// FUN_1802f4900 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802f4900 */

undefined8 * FUN_1802f4900(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
  *(undefined1 *)((longlong)param_1 + 0x14) = *(undefined1 *)((longlong)param_2 + 0x14);
  param_1[3] = param_2[3];
  uVar1 = param_2[6];
  uVar2 = param_2[5];
  uVar3 = param_2[4];
  param_2[6] = 0;
  param_2[5] = 0;
  param_2[4] = 0;
  param_1[4] = uVar3;
  param_1[5] = uVar2;
  param_1[6] = uVar1;
  uVar1 = param_2[7];
  uVar2 = param_2[9];
  uVar3 = param_2[8];
  param_2[9] = 0;
  param_2[8] = 0;
  param_2[7] = 0;
  param_1[7] = uVar1;
  param_1[8] = uVar3;
  param_1[9] = uVar2;
  param_1[10] = param_2[10];
  *(undefined4 *)(param_1 + 0xb) = *(undefined4 *)(param_2 + 0xb);
  *(undefined4 *)((longlong)param_1 + 0x5c) = *(undefined4 *)((longlong)param_2 + 0x5c);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  *(undefined1 *)((longlong)param_1 + 100) = *(undefined1 *)((longlong)param_2 + 100);
  param_1[0xd] = param_2[0xd];
  param_1[0xe] = param_2[0xe];
  param_1[0xf] = param_2[0xf];
  *(undefined1 *)(param_1 + 0x10) = *(undefined1 *)(param_2 + 0x10);
  *(undefined1 *)((longlong)param_1 + 0x81) = *(undefined1 *)((longlong)param_2 + 0x81);
  return param_1;
}



