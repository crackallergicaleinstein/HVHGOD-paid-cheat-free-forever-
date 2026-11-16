// FUN_18015c100 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18015c100 */

char * FUN_18015c100(longlong param_1)

{
  char *pcVar1;
  
  pcVar1 = "Unknown exception";
  if (*(char **)(param_1 + 8) != (char *)0x0) {
    pcVar1 = *(char **)(param_1 + 8);
  }
  return pcVar1;
}



