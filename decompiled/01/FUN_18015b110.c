// FUN_18015b110 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18015b110 */

longlong * FUN_18015b110(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  
  *param_1 = param_2;
  lVar1 = -1;
  do {
    lVar1 = lVar1 + 1;
  } while (*(char *)(param_2 + lVar1) != '\0');
  param_1[1] = lVar1;
  return param_1;
}



