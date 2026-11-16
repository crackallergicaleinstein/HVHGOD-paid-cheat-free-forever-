// FUN_18017b7e0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18017b7e0 */

void FUN_18017b7e0(longlong param_1)

{
  code *pcVar1;
  
  FUN_18017b8c0(param_1 + 8);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



