// FUN_18027bd10 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18027bd10 */

void FUN_18027bd10(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 != 0) {
    FUN_1801bd550(lVar1 + 0x18);
    uVar2 = *(undefined8 *)(lVar1 + 0x18);
    *(undefined8 *)(lVar1 + 0x18) = 0;
    FUN_1804547d0(uVar2,0x10);
  }
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_1804547d0(*(longlong *)(param_1 + 8),0x40);
  }
  return;
}



