// FUN_1805fac08 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805fac08 */

int FUN_1805fac08(int param_1)

{
  int *piVar1;
  
  piVar1 = &DAT_18068c1f0;
  do {
    if (*piVar1 == param_1) {
      return piVar1[1];
    }
    piVar1 = piVar1 + 2;
  } while (piVar1 != &DAT_18068c490);
  return 0;
}



