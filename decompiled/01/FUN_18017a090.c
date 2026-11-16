// FUN_18017a090 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18017a090 */

void FUN_18017a090(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(param_1 + 8);
  lVar2 = *(longlong *)(lVar1 + 0x70);
  *(undefined8 *)(lVar1 + 0x70) = 0;
  while (lVar2 != 0) {
    lVar2 = *(longlong *)(lVar2 + 8);
    FUN_1801640d0(lVar1);
  }
  return;
}



