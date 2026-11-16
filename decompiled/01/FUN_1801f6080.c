// FUN_1801f6080 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801f6080 */

void FUN_1801f6080(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = param_1[1];
  for (lVar2 = *param_1; lVar2 != lVar1; lVar2 = lVar2 + 0x20) {
    FUN_18015b930(lVar2);
  }
  return;
}



