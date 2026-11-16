// FUN_1805aba40 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805aba40 */

void FUN_1805aba40(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *(longlong *)(param_1 + 0xd8);
  uVar2 = *(undefined8 *)(param_1 + 0x98);
  if (lVar1 != 0) {
    if (*(longlong *)(lVar1 + 0xa0) != 0) {
      FUN_180578860(*(undefined8 *)(param_1 + 0xa0));
    }
    FUN_18057abd0(uVar2,*(undefined8 *)(lVar1 + 0xb0));
    *(undefined8 *)(lVar1 + 0xb0) = 0;
    FUN_18057abd0(uVar2,lVar1);
    *(undefined8 *)(param_1 + 0xd8) = 0;
  }
  return;
}



