// FUN_180601ce4 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180601ce4 */

void FUN_180601ce4(void)

{
  code *pcVar1;
  
  FUN_180601b08();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



