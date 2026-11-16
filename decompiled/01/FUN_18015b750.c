// FUN_18015b750 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18015b750 */

undefined1 (*) [16] FUN_18015b750(undefined8 param_1,undefined1 (*param_2) [16],undefined4 param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FUN_1805fabe0(param_3);
  *param_2 = (undefined1  [16])0x0;
  *(undefined8 *)param_2[1] = 0;
  lVar2 = -1;
  *(undefined8 *)(param_2[1] + 8) = 0;
  do {
    lVar2 = lVar2 + 1;
  } while (*(char *)(lVar1 + lVar2) != '\0');
  FUN_18015ba30(param_2,lVar1);
  return param_2;
}



