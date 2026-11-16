// FUN_180419cd0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180419cd0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_180419cd0(undefined8 param_1,undefined4 *param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  undefined8 uStack_10;
  
  if (DAT_180b8e2b0 == '\0') {
    *param_2 = 0x475ead00;
    param_2[1] = 0x475ead00;
    return param_2;
  }
  iVar1 = FUN_1805f68d0(&DAT_180b8e260);
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(5);
  }
  if (DAT_180b8e2ac == 0x7fffffff) {
    DAT_180b8e2ac = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(6);
  }
  local_48 = _DAT_180b8e220;
  uStack_40 = uRam0000000180b8e228;
  uStack_38 = uRam0000000180b8e230;
  uStack_30 = uRam0000000180b8e238;
  local_28 = _DAT_180b8e240;
  uStack_20 = uRam0000000180b8e248;
  uStack_18 = uRam0000000180b8e250;
  uStack_10 = uRam0000000180b8e258;
  uVar2 = FUN_1805f68fc(&DAT_180b8e260);
  FUN_180419d90(uVar2,param_2,param_3,&local_48);
  return param_2;
}



