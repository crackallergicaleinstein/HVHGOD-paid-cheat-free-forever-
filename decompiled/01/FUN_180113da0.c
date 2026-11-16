// FUN_180113da0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180113da0 */

longlong FUN_180113da0(longlong param_1)

{
  undefined8 uVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  
  if (*(longlong *)(param_1 + 0x80) == 0) {
    lVar5 = 0;
  }
  else {
    if (**(longlong **)(param_1 + 0x18) == param_1 + 0x70) {
      uVar1 = *(undefined8 *)(param_1 + 0x90);
      lVar5 = *(longlong *)(param_1 + 0x88);
      **(longlong **)(param_1 + 0x18) = lVar5;
      **(longlong **)(param_1 + 0x38) = lVar5;
      **(int **)(param_1 + 0x50) = (int)uVar1 - (int)lVar5;
    }
    cVar2 = FUN_180113ba0(param_1);
    lVar4 = 0;
    if (cVar2 != '\0') {
      lVar4 = param_1;
    }
    iVar3 = FUN_1806116f4(*(undefined8 *)(param_1 + 0x80));
    lVar5 = 0;
    if (iVar3 == 0) {
      lVar5 = lVar4;
    }
  }
  *(undefined1 *)(param_1 + 0x7c) = 0;
  *(undefined4 **)(param_1 + 0x58) = (undefined4 *)(param_1 + 0x4c);
  *(longlong *)(param_1 + 0x18) = param_1 + 8;
  *(undefined1 *)(param_1 + 0x71) = 0;
  *(longlong *)(param_1 + 0x38) = param_1 + 0x28;
  *(undefined8 **)(param_1 + 0x20) = (undefined8 *)(param_1 + 0x10);
  *(longlong *)(param_1 + 0x50) = param_1 + 0x48;
  *(undefined8 **)(param_1 + 0x40) = (undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  **(undefined8 **)(param_1 + 0x18) = 0;
  **(undefined8 **)(param_1 + 0x38) = 0;
  **(undefined4 **)(param_1 + 0x50) = 0;
  uVar1 = DAT_180bb26d8;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x74) = uVar1;
  return lVar5;
}



