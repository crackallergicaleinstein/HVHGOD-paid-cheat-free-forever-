// FUN_18015bae0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18015bae0 */

undefined1 (*) [16] FUN_18015bae0(undefined1 (*param_1) [16],longlong param_2)

{
  longlong lVar1;
  
  *param_1 = (undefined1  [16])0x0;
  *(undefined8 *)param_1[1] = 0;
  lVar1 = -1;
  *(undefined8 *)(param_1[1] + 8) = 0;
  do {
    lVar1 = lVar1 + 1;
  } while (*(char *)(param_2 + lVar1) != '\0');
  FUN_18015ba30();
  return param_1;
}



