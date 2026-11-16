// FUN_1801da890 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801da890 */

void FUN_1801da890(undefined8 param_1,undefined1 (*param_2) [16],undefined8 *param_3)

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
  uVar1 = param_3[5];
  *(undefined8 *)param_2[2] = param_3[4];
  *(undefined8 *)(param_2[2] + 8) = uVar1;
  *(undefined4 *)param_2[3] = *(undefined4 *)(param_3 + 6);
  *(undefined4 *)(param_2[3] + 4) = *(undefined4 *)((longlong)param_3 + 0x34);
  *(undefined4 *)(param_2[3] + 8) = *(undefined4 *)(param_3 + 7);
  uVar1 = *(undefined8 *)((longlong)param_3 + 0x44);
  *(undefined8 *)(param_2[3] + 0xc) = *(undefined8 *)((longlong)param_3 + 0x3c);
  *(undefined8 *)(param_2[4] + 4) = uVar1;
  *(undefined2 *)(param_2[4] + 0xc) = *(undefined2 *)((longlong)param_3 + 0x4c);
  param_2[4][0xe] = *(undefined1 *)((longlong)param_3 + 0x4e);
  *(undefined4 *)param_2[5] = *(undefined4 *)(param_3 + 10);
  *(undefined8 *)(param_2[5] + 8) = param_3[0xb];
  *(undefined8 *)param_2[6] = param_3[0xc];
  param_2[6][8] = *(undefined1 *)(param_3 + 0xd);
  param_2[6][9] = *(undefined1 *)((longlong)param_3 + 0x69);
  *(undefined4 *)(param_2[6] + 0xc) = *(undefined4 *)((longlong)param_3 + 0x6c);
  *(undefined4 *)param_2[7] = *(undefined4 *)(param_3 + 0xe);
  *(undefined4 *)(param_2[7] + 4) = *(undefined4 *)((longlong)param_3 + 0x74);
  return;
}



