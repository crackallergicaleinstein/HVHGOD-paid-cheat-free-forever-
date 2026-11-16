// FUN_180195c60 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180195c60 */

undefined1 * FUN_180195c60(undefined1 *param_1,undefined1 *param_2)

{
  undefined1 *puVar1;
  
  *param_1 = *param_2;
  if (param_2[0xe0] == '\0') {
    FUN_1801b8590(param_1 + 8);
  }
  else if (param_1[0xe0] == '\0') {
    FUN_1801b90e0(param_1 + 8);
    param_1[0xe0] = 1;
  }
  else {
    FUN_180195b10(param_1 + 8);
  }
  puVar1 = param_1 + 0xe8;
  if (param_2[0x1c0] == '\0') {
    FUN_1801b8590(puVar1,param_2 + 0xe8);
  }
  else if (param_1[0x1c0] == '\0') {
    FUN_1801b90e0();
    puVar1[0xd8] = 1;
  }
  else {
    FUN_180195b10();
  }
  FUN_1801787e0(param_1 + 0x1c8,param_2 + 0x1c8);
  FUN_1801787e0(param_1 + 0x1d8,param_2 + 0x1d8);
  return param_1;
}



