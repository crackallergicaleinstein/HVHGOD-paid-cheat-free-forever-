// FUN_180606e20 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180606e20 */

int FUN_180606e20(longlong param_1,longlong param_2)

{
  int iVar1;
  
  if (param_1 == param_2) {
    return 0;
  }
  iVar1 = strcmp((char *)(param_1 + 9),(char *)(param_2 + 9));
  return iVar1;
}



