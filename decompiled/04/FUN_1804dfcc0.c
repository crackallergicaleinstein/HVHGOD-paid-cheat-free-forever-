// FUN_1804dfcc0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804dfcc0 */

void FUN_1804dfcc0(longlong param_1,undefined8 *param_2,undefined8 *param_3,uint param_4,
                  uint param_5,uint param_6,uint param_7)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  if (((param_4 | param_5 | param_6 | param_7) & 0xff000000) != 0) {
    uVar4 = **(undefined4 **)(param_1 + 0x38);
    uVar5 = (*(undefined4 **)(param_1 + 0x38))[1];
    FUN_1804d9590(param_1,6,4);
    **(undefined2 **)(param_1 + 0x48) = *(undefined2 *)(param_1 + 0x34);
    *(longlong *)(param_1 + 0x48) = *(longlong *)(param_1 + 0x48) + 2;
    **(short **)(param_1 + 0x48) = *(short *)(param_1 + 0x34) + 1;
    *(longlong *)(param_1 + 0x48) = *(longlong *)(param_1 + 0x48) + 2;
    **(short **)(param_1 + 0x48) = *(short *)(param_1 + 0x34) + 2;
    *(longlong *)(param_1 + 0x48) = *(longlong *)(param_1 + 0x48) + 2;
    **(undefined2 **)(param_1 + 0x48) = *(undefined2 *)(param_1 + 0x34);
    *(longlong *)(param_1 + 0x48) = *(longlong *)(param_1 + 0x48) + 2;
    **(short **)(param_1 + 0x48) = *(short *)(param_1 + 0x34) + 2;
    *(longlong *)(param_1 + 0x48) = *(longlong *)(param_1 + 0x48) + 2;
    **(short **)(param_1 + 0x48) = *(short *)(param_1 + 0x34) + 3;
    *(longlong *)(param_1 + 0x48) = *(longlong *)(param_1 + 0x48) + 2;
    **(undefined8 **)(param_1 + 0x40) = *param_2;
    lVar2 = *(longlong *)(param_1 + 0x40);
    *(undefined4 *)(lVar2 + 8) = uVar4;
    *(undefined4 *)(lVar2 + 0xc) = uVar5;
    *(uint *)(*(longlong *)(param_1 + 0x40) + 0x10) = param_4;
    *(longlong *)(param_1 + 0x40) = *(longlong *)(param_1 + 0x40) + 0x14;
    *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + 1;
    uVar1 = *(undefined4 *)((longlong)param_2 + 4);
    puVar3 = *(undefined4 **)(param_1 + 0x40);
    *puVar3 = *(undefined4 *)param_3;
    puVar3[1] = uVar1;
    lVar2 = *(longlong *)(param_1 + 0x40);
    *(undefined4 *)(lVar2 + 8) = uVar4;
    *(undefined4 *)(lVar2 + 0xc) = uVar5;
    *(uint *)(*(longlong *)(param_1 + 0x40) + 0x10) = param_5;
    *(longlong *)(param_1 + 0x40) = *(longlong *)(param_1 + 0x40) + 0x14;
    *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + 1;
    **(undefined8 **)(param_1 + 0x40) = *param_3;
    lVar2 = *(longlong *)(param_1 + 0x40);
    *(undefined4 *)(lVar2 + 8) = uVar4;
    *(undefined4 *)(lVar2 + 0xc) = uVar5;
    *(uint *)(*(longlong *)(param_1 + 0x40) + 0x10) = param_6;
    *(longlong *)(param_1 + 0x40) = *(longlong *)(param_1 + 0x40) + 0x14;
    *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + 1;
    uVar1 = *(undefined4 *)((longlong)param_3 + 4);
    puVar3 = *(undefined4 **)(param_1 + 0x40);
    *puVar3 = *(undefined4 *)param_2;
    puVar3[1] = uVar1;
    lVar2 = *(longlong *)(param_1 + 0x40);
    *(undefined4 *)(lVar2 + 8) = uVar4;
    *(undefined4 *)(lVar2 + 0xc) = uVar5;
    *(uint *)(*(longlong *)(param_1 + 0x40) + 0x10) = param_7;
    *(longlong *)(param_1 + 0x40) = *(longlong *)(param_1 + 0x40) + 0x14;
    *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + 1;
  }
  return;
}



