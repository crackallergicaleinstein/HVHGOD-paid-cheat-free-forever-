// FUN_1801bb8d0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801bb8d0 */

void FUN_1801bb8d0(longlong *param_1,longlong *param_2)

{
  undefined1 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  
  if (param_1 != param_2) {
    FUN_180113da0(param_1 + 3);
    lVar5 = (longlong)*(int *)(*param_1 + 4) + (longlong)param_1;
    lVar4 = (longlong)*(int *)(*param_2 + 4) + (longlong)param_2;
    if (lVar5 != lVar4) {
      uVar2 = *(undefined4 *)(lVar5 + 0x10);
      *(undefined4 *)(lVar5 + 0x10) = *(undefined4 *)(lVar4 + 0x10);
      *(undefined4 *)(lVar4 + 0x10) = uVar2;
      uVar2 = *(undefined4 *)(lVar5 + 0x14);
      *(undefined4 *)(lVar5 + 0x14) = *(undefined4 *)(lVar4 + 0x14);
      *(undefined4 *)(lVar4 + 0x14) = uVar2;
      uVar2 = *(undefined4 *)(lVar5 + 0x18);
      *(undefined4 *)(lVar5 + 0x18) = *(undefined4 *)(lVar4 + 0x18);
      *(undefined4 *)(lVar4 + 0x18) = uVar2;
      uVar3 = *(undefined8 *)(lVar5 + 0x20);
      *(undefined8 *)(lVar5 + 0x20) = *(undefined8 *)(lVar4 + 0x20);
      *(undefined8 *)(lVar4 + 0x20) = uVar3;
      uVar3 = *(undefined8 *)(lVar5 + 0x28);
      *(undefined8 *)(lVar5 + 0x28) = *(undefined8 *)(lVar4 + 0x28);
      *(undefined8 *)(lVar4 + 0x28) = uVar3;
      uVar3 = *(undefined8 *)(lVar5 + 0x30);
      *(undefined8 *)(lVar5 + 0x30) = *(undefined8 *)(lVar4 + 0x30);
      *(undefined8 *)(lVar4 + 0x30) = uVar3;
      uVar3 = *(undefined8 *)(lVar5 + 0x38);
      *(undefined8 *)(lVar5 + 0x38) = *(undefined8 *)(lVar4 + 0x38);
      *(undefined8 *)(lVar4 + 0x38) = uVar3;
      uVar3 = *(undefined8 *)(lVar5 + 0x40);
      *(undefined8 *)(lVar5 + 0x40) = *(undefined8 *)(lVar4 + 0x40);
      *(undefined8 *)(lVar4 + 0x40) = uVar3;
    }
    uVar1 = *(undefined1 *)(lVar5 + 0x58);
    *(undefined1 *)(lVar5 + 0x58) = *(undefined1 *)(lVar4 + 0x58);
    *(undefined1 *)(lVar4 + 0x58) = uVar1;
    uVar3 = *(undefined8 *)(lVar5 + 0x50);
    *(undefined8 *)(lVar5 + 0x50) = *(undefined8 *)(lVar4 + 0x50);
    *(undefined8 *)(lVar4 + 0x50) = uVar3;
    FUN_1801bcf30(param_1 + 3,param_2 + 3);
  }
  return;
}



