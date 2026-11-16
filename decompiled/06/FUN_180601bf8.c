// FUN_180601bf8 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180601bf8 */

void FUN_180601bf8(void)

{
  code *pcVar1;
  
  FUN_180601838();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



