// FUN_18029a4c0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18029a4c0 */

void FUN_18029a4c0(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 != 0) {
    FUN_1801bd470(lVar1 + 0x20);
    uVar2 = *(undefined8 *)(lVar1 + 0x20);
    *(undefined8 *)(lVar1 + 0x20) = 0;
    FUN_1804547d0(uVar2,0x10);
  }
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_1804547d0(*(longlong *)(param_1 + 8),0x48);
  }
  return;
}



