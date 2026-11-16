// FUN_180601c50 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180601c50 */

void FUN_180601c50(void)

{
  code *pcVar1;
  
  FUN_180601640();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



