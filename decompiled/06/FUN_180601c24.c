// FUN_180601c24 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180601c24 */

void FUN_180601c24(void)

{
  code *pcVar1;
  
  FUN_180601928();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



