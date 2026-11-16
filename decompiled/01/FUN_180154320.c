// FUN_180154320 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180154320 */

void FUN_180154320(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = param_1[1];
  for (lVar2 = *param_1; lVar2 != lVar1; lVar2 = lVar2 + 0x10) {
    FUN_1800aab30(lVar2);
  }
  return;
}



