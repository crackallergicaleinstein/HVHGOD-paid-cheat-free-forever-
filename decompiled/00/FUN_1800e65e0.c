// FUN_1800e65e0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1800e65e0 */

void FUN_1800e65e0(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 local_28 [16];
  undefined8 local_18;
  undefined8 local_10;
  
  local_28 = (undefined1  [16])0x0;
  local_18 = 0;
  lVar1 = -1;
  local_10 = 0;
  do {
    lVar1 = lVar1 + 1;
  } while (*(char *)(param_2 + lVar1) != '\0');
  FUN_18015ba30(local_28);
  FUN_1800f43d0(param_1,local_28);
  return;
}



