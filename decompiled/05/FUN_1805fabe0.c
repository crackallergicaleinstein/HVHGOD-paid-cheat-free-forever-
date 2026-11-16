// FUN_1805fabe0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805fabe0 */

char * FUN_1805fabe0(int param_1)

{
  int *piVar1;
  
  piVar1 = &DAT_18068c490;
  do {
    if (*piVar1 == param_1) {
      return *(char **)(piVar1 + 2);
    }
    piVar1 = piVar1 + 4;
  } while (piVar1 != (int *)"success");
  return "unknown error";
}



