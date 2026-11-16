// FUN_180163a70 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180163a70 */

void FUN_180163a70(int *param_1)

{
  code *pcVar1;
  
  if (*param_1 == 0) {
    FUN_180159a00();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  FUN_1800f0160(param_1 + 8);
  FUN_1805fd358(param_1 + 2);
  return;
}



