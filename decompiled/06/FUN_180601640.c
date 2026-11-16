// FUN_180601640 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180601640 */

void FUN_180601640(void)

{
  code *pcVar1;
  
  FUN_180601658();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



