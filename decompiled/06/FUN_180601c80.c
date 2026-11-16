// FUN_180601c80 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180601c80 */

void FUN_180601c80(void)

{
  code *pcVar1;
  
  FUN_18060164c();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



