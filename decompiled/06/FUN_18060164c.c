// FUN_18060164c - decompiled reference (Ghidra). Not original source, does not compile.

/* 18060164c */

void FUN_18060164c(void)

{
  code *pcVar1;
  
  FUN_180601748();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



