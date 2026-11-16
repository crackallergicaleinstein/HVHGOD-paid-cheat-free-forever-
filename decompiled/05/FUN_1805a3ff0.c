// FUN_1805a3ff0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805a3ff0 */

char * FUN_1805a3ff0(longlong param_1)

{
  char *pcVar1;
  
  pcVar1 = *(char **)(param_1 + 0xe8);
  if ((pcVar1 != (char *)0x0) && (*pcVar1 == '/')) {
    pcVar1 = pcVar1 + 1;
  }
  return pcVar1;
}



