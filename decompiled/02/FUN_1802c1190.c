// FUN_1802c1190 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802c1190 */

void FUN_1802c1190(void)

{
  undefined8 uVar1;
  undefined1 local_28 [16];
  undefined1 local_18 [16];
  
  if (DAT_180b8fb30 == '\0') {
    return;
  }
  local_28 = (undefined1  [16])0x0;
  local_18 = (undefined1  [16])0x0;
  uVar1 = FUN_18015ba30(local_28,
                        "if(typeof(SWeaponManager)!==\'undefined\'){SWeaponManager.clear();}",0x41);
  FUN_1802bef30(uVar1,local_28);
  FUN_18015c010(local_28);
  FUN_1802c1400(&DAT_180b8fb38);
  return;
}



