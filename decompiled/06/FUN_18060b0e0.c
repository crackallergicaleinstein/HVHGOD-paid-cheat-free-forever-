// FUN_18060b0e0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18060b0e0 */

void FUN_18060b0e0(uint param_1)

{
  code *pcVar1;
  
  common_end_thread(param_1);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



