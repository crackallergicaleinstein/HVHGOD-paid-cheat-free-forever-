// FUN_1804d97d0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804d97d0 */

void FUN_1804d97d0(longlong param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 *param_5,undefined4 param_6)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  short sVar9;
  longlong lVar10;
  
  uVar1 = *(undefined4 *)((longlong)param_4 + 4);
  uVar2 = *(undefined4 *)param_3;
  uVar3 = *(undefined4 *)((longlong)param_2 + 4);
  uVar4 = *(undefined4 *)param_4;
  sVar9 = *(short *)(param_1 + 0x34);
  uVar5 = *(undefined4 *)param_5;
  uVar6 = *(undefined4 *)((longlong)param_5 + 4);
  uVar7 = *(undefined4 *)param_2;
  uVar8 = *(undefined4 *)((longlong)param_3 + 4);
  **(short **)(param_1 + 0x48) = sVar9;
  *(short *)(*(longlong *)(param_1 + 0x48) + 2) = sVar9 + 1;
  *(short *)(*(longlong *)(param_1 + 0x48) + 4) = sVar9 + 2;
  *(short *)(*(longlong *)(param_1 + 0x48) + 6) = sVar9;
  *(short *)(*(longlong *)(param_1 + 0x48) + 8) = sVar9 + 2;
  *(short *)(*(longlong *)(param_1 + 0x48) + 10) = sVar9 + 3;
  **(undefined8 **)(param_1 + 0x40) = *param_2;
  *(undefined8 *)(*(longlong *)(param_1 + 0x40) + 8) = *param_4;
  *(undefined4 *)(*(longlong *)(param_1 + 0x40) + 0x10) = param_6;
  lVar10 = *(longlong *)(param_1 + 0x40);
  *(undefined4 *)(lVar10 + 0x14) = uVar2;
  *(undefined4 *)(lVar10 + 0x18) = uVar3;
  lVar10 = *(longlong *)(param_1 + 0x40);
  *(undefined4 *)(lVar10 + 0x1c) = uVar5;
  *(undefined4 *)(lVar10 + 0x20) = uVar1;
  *(undefined4 *)(*(longlong *)(param_1 + 0x40) + 0x24) = param_6;
  *(undefined8 *)(*(longlong *)(param_1 + 0x40) + 0x28) = *param_3;
  *(undefined8 *)(*(longlong *)(param_1 + 0x40) + 0x30) = *param_5;
  *(undefined4 *)(*(longlong *)(param_1 + 0x40) + 0x38) = param_6;
  lVar10 = *(longlong *)(param_1 + 0x40);
  *(undefined4 *)(lVar10 + 0x3c) = uVar7;
  *(undefined4 *)(lVar10 + 0x40) = uVar8;
  lVar10 = *(longlong *)(param_1 + 0x40);
  *(undefined4 *)(lVar10 + 0x44) = uVar4;
  *(undefined4 *)(lVar10 + 0x48) = uVar6;
  *(undefined4 *)(*(longlong *)(param_1 + 0x40) + 0x4c) = param_6;
  *(longlong *)(param_1 + 0x40) = *(longlong *)(param_1 + 0x40) + 0x50;
  *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + 4;
  *(longlong *)(param_1 + 0x48) = *(longlong *)(param_1 + 0x48) + 0xc;
  return;
}



