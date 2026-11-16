// FUN_1801dfd30 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801dfd30 */

undefined1 (*) [16] FUN_1801dfd30(longlong param_1,undefined1 (*param_2) [16])

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x20);
  lVar2 = -1;
  *param_2 = (undefined1  [16])0x0;
  *(undefined8 *)param_2[1] = 0;
  *(undefined8 *)(param_2[1] + 8) = 0;
  do {
    lVar2 = lVar2 + 1;
  } while (*(char *)(lVar1 + lVar2) != '\0');
  FUN_18015ba30(param_2);
  return param_2;
}



