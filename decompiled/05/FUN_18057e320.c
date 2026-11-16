// FUN_18057e320 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18057e320 */

void FUN_18057e320(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x38);
  uVar2 = *(undefined8 *)(**(longlong **)(param_1 + 0x30) + 0x98);
  if (lVar1 != 0) {
    FUN_18057a400(lVar1,uVar2);
  }
  FUN_18057abd0(uVar2,lVar1);
  return;
}



