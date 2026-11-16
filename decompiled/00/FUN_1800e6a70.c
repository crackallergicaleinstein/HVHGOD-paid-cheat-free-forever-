// FUN_1800e6a70 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1800e6a70 */

undefined8 FUN_1800e6a70(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 local_28 [16];
  undefined1 local_18 [16];
  
  local_28 = (undefined1  [16])0x0;
  local_18 = (undefined1  [16])0x0;
  lVar2 = -1;
  do {
    lVar2 = lVar2 + 1;
  } while (*(char *)(param_2 + lVar2) != '\0');
  FUN_18015ba30(local_28);
  uVar1 = FUN_180113610(param_1,local_28);
  FUN_18015c010(local_28);
  return uVar1;
}



