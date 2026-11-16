// FUN_1801596c0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801596c0 */

undefined8 * FUN_1801596c0(undefined8 *param_1,longlong param_2,undefined8 *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined1 local_38 [16];
  undefined1 local_28 [16];
  
  uVar2 = *param_3;
  uVar3 = param_3[1];
  local_38 = (undefined1  [16])0x0;
  local_28 = (undefined1  [16])0x0;
  lVar1 = -1;
  do {
    lVar1 = lVar1 + 1;
  } while (*(char *)(param_2 + lVar1) != '\0');
  FUN_18015ba30(local_38);
  local_48 = uVar2;
  uStack_40 = uVar3;
  FUN_18015b430(param_1,&local_48,local_38);
  FUN_18015c010(local_38);
  *param_1 = std::ios_base::failure::vftable;
  return param_1;
}



