// FUN_1801bdbe0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801bdbe0 */

undefined8 * FUN_1801bdbe0(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  char *pcVar1;
  longlong lVar2;
  undefined8 local_18;
  undefined8 uStack_10;
  
  local_18 = *param_3;
  uStack_10 = param_3[1];
  FUN_18015b430(local_18,&local_18);
  *param_1 = std::filesystem::filesystem_error::vftable;
  *(undefined1 (*) [16])(param_1 + 5) = (undefined1  [16])0x0;
  param_1[7] = 0;
  param_1[8] = 7;
  *(undefined2 *)(param_1 + 5) = 0;
  *(undefined1 (*) [16])(param_1 + 9) = (undefined1  [16])0x0;
  param_1[0xb] = 0;
  param_1[0xc] = 7;
  *(undefined2 *)(param_1 + 9) = 0;
  pcVar1 = "Unknown exception";
  if ((char *)param_1[1] != (char *)0x0) {
    pcVar1 = (char *)param_1[1];
  }
  *(undefined1 (*) [16])(param_1 + 0xd) = (undefined1  [16])0x0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  lVar2 = -1;
  do {
    lVar2 = lVar2 + 1;
  } while (pcVar1[lVar2] != '\0');
  FUN_18015ba30();
  return param_1;
}



