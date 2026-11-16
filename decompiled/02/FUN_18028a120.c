// FUN_18028a120 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18028a120 */

void FUN_18028a120(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = param_1[1];
  for (lVar2 = *param_1; lVar2 != lVar1; lVar2 = lVar2 + 0x28) {
    FUN_18015c010(lVar2);
  }
  return;
}



