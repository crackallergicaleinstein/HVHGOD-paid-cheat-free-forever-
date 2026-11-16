// FUN_180154360 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180154360 */

void FUN_180154360(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = param_1[1];
  for (lVar2 = *param_1; lVar2 != lVar1; lVar2 = lVar2 + 0x20) {
    FUN_18015c010(lVar2);
  }
  return;
}



