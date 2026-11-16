// FUN_18058c6c0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18058c6c0 */

int FUN_18058c6c0(undefined8 param_1,int param_2,int param_3)

{
  int iVar1;
  
  if (param_2 < 0) {
    param_2 = param_2 - param_3;
    if (0 < param_2) {
      param_2 = 0;
    }
    return param_2;
  }
  iVar1 = 0;
  if (-1 < param_2 + param_3) {
    iVar1 = param_2 + param_3;
  }
  return iVar1;
}



