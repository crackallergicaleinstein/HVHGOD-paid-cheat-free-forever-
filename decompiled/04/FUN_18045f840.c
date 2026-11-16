// FUN_18045f840 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18045f840 */

void FUN_18045f840(undefined8 param_1,undefined1 (*param_2) [16],undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *param_2 = (undefined1  [16])0x0;
  *(undefined8 *)param_2[1] = 0;
  *(undefined8 *)(param_2[1] + 8) = 0;
  uVar1 = param_3[1];
  uVar2 = param_3[2];
  uVar3 = param_3[3];
  *(undefined8 *)*param_2 = *param_3;
  *(undefined8 *)(*param_2 + 8) = uVar1;
  *(undefined8 *)param_2[1] = uVar2;
  *(undefined8 *)(param_2[1] + 8) = uVar3;
  *(undefined1 *)param_3 = 0;
  param_3[2] = 0;
  param_3[3] = 0xf;
  *(undefined8 *)param_2[2] = param_3[4];
  *(undefined4 *)(param_2[2] + 8) = *(undefined4 *)(param_3 + 5);
  *(undefined4 *)(param_2[2] + 0xc) = *(undefined4 *)((longlong)param_3 + 0x2c);
  *(undefined4 *)param_2[3] = *(undefined4 *)(param_3 + 6);
  *(undefined4 *)(param_2[3] + 4) = *(undefined4 *)((longlong)param_3 + 0x34);
  *(undefined8 *)(param_2[3] + 8) = param_3[7];
  uVar1 = param_3[9];
  *(undefined8 *)param_2[4] = param_3[8];
  *(undefined8 *)(param_2[4] + 8) = uVar1;
  *(undefined4 *)param_2[5] = *(undefined4 *)(param_3 + 10);
  *(undefined4 *)(param_2[5] + 4) = *(undefined4 *)((longlong)param_3 + 0x54);
  *(undefined4 *)(param_2[5] + 8) = *(undefined4 *)(param_3 + 0xb);
  param_2[5][0xc] = *(undefined1 *)((longlong)param_3 + 0x5c);
  param_2[5][0xd] = *(undefined1 *)((longlong)param_3 + 0x5d);
  param_2[5][0xe] = *(undefined1 *)((longlong)param_3 + 0x5e);
  *(undefined4 *)param_2[6] = *(undefined4 *)(param_3 + 0xc);
  *(undefined4 *)(param_2[6] + 4) = *(undefined4 *)((longlong)param_3 + 100);
  return;
}



