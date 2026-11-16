// FUN_1804d96b0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804d96b0 */

void FUN_1804d96b0(longlong param_1,undefined8 *param_2,undefined8 *param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  short sVar7;
  longlong lVar8;
  
  sVar7 = *(short *)(param_1 + 0x34);
  uVar1 = *(undefined4 *)((longlong)param_2 + 4);
  uVar2 = *(undefined4 *)param_2;
  uVar3 = **(undefined4 **)(param_1 + 0x38);
  uVar4 = *(undefined4 *)param_3;
  uVar5 = *(undefined4 *)((longlong)param_3 + 4);
  uVar6 = (*(undefined4 **)(param_1 + 0x38))[1];
  **(short **)(param_1 + 0x48) = sVar7;
  *(short *)(*(longlong *)(param_1 + 0x48) + 2) = sVar7 + 1;
  *(short *)(*(longlong *)(param_1 + 0x48) + 4) = sVar7 + 2;
  *(short *)(*(longlong *)(param_1 + 0x48) + 6) = sVar7;
  *(short *)(*(longlong *)(param_1 + 0x48) + 8) = sVar7 + 2;
  *(short *)(*(longlong *)(param_1 + 0x48) + 10) = sVar7 + 3;
  **(undefined8 **)(param_1 + 0x40) = *param_2;
  lVar8 = *(longlong *)(param_1 + 0x40);
  *(undefined4 *)(lVar8 + 8) = uVar3;
  *(undefined4 *)(lVar8 + 0xc) = uVar6;
  *(undefined4 *)(*(longlong *)(param_1 + 0x40) + 0x10) = param_4;
  lVar8 = *(longlong *)(param_1 + 0x40);
  *(undefined4 *)(lVar8 + 0x14) = uVar4;
  *(undefined4 *)(lVar8 + 0x18) = uVar1;
  lVar8 = *(longlong *)(param_1 + 0x40);
  *(undefined4 *)(lVar8 + 0x1c) = uVar3;
  *(undefined4 *)(lVar8 + 0x20) = uVar6;
  *(undefined4 *)(*(longlong *)(param_1 + 0x40) + 0x24) = param_4;
  *(undefined8 *)(*(longlong *)(param_1 + 0x40) + 0x28) = *param_3;
  lVar8 = *(longlong *)(param_1 + 0x40);
  *(undefined4 *)(lVar8 + 0x30) = uVar3;
  *(undefined4 *)(lVar8 + 0x34) = uVar6;
  *(undefined4 *)(*(longlong *)(param_1 + 0x40) + 0x38) = param_4;
  lVar8 = *(longlong *)(param_1 + 0x40);
  *(undefined4 *)(lVar8 + 0x3c) = uVar2;
  *(undefined4 *)(lVar8 + 0x40) = uVar5;
  lVar8 = *(longlong *)(param_1 + 0x40);
  *(undefined4 *)(lVar8 + 0x44) = uVar3;
  *(undefined4 *)(lVar8 + 0x48) = uVar6;
  *(undefined4 *)(*(longlong *)(param_1 + 0x40) + 0x4c) = param_4;
  *(longlong *)(param_1 + 0x40) = *(longlong *)(param_1 + 0x40) + 0x50;
  *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + 4;
  *(longlong *)(param_1 + 0x48) = *(longlong *)(param_1 + 0x48) + 0xc;
  return;
}



