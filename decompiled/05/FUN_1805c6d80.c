// FUN_1805c6d80 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805c6d80 */

void FUN_1805c6d80(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x4e8);
  uVar2 = *(undefined8 *)(param_1 + 0x98);
  if (lVar1 != 0) {
    FUN_180578860(*(undefined8 *)(param_1 + 0xa0),lVar1 + 0x10);
    FUN_18057abd0(uVar2,lVar1);
  }
  return;
}



