// FUN_180601cb0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180601cb0 */

void FUN_180601cb0(void)

{
  code *pcVar1;
  
  FUN_180601a18();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



