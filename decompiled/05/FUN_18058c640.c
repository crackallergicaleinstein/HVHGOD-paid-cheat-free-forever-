// FUN_18058c640 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18058c640 */

longlong FUN_18058c640(longlong param_1,uint param_2)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = FUN_18058a170();
  lVar2 = (longlong)*(int *)(*(longlong *)(param_1 + 0x200) + (ulonglong)param_2 * 4) *
          (longlong)iVar1;
  return (lVar2 >> 0x3f) + 0x8000 + lVar2 >> 0x10;
}



