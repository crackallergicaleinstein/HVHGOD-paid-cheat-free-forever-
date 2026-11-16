// FUN_1804f7af0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804f7af0 */

int FUN_1804f7af0(int *param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = (int)((float)param_2[1] - (float)param_1[1]);
  if (iVar1 == 0) {
    iVar1 = *param_2 - *param_1;
  }
  return iVar1;
}



