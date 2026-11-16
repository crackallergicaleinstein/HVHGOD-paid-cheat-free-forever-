// FUN_18058a130 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18058a130 */

longlong FUN_18058a130(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = FUN_18058a170();
  lVar2 = (ulonglong)*(ushort *)(param_1 + 0x188) * (longlong)iVar1;
  return (lVar2 >> 0x3f) + 0x8000 + lVar2 >> 0x10;
}



