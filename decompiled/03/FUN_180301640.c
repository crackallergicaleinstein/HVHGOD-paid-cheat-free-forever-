// FUN_180301640 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180301640 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180301640(undefined8 param_1,ulonglong param_2,ulonglong param_3)

{
  uint7 uVar1;
  
  uVar1 = (uint7)(param_3 >> 8);
  if ((param_3 & param_2) == 0) {
    DAT_180b8fbf0 = ~param_3 & DAT_180b8fbf0;
    return;
  }
  if ((_DAT_180b8fbe8 & param_3) != 0) {
    if (((uVar1 >> 1 & 1) != 0) && ((DAT_180b8fbf0 >> 10 & 1) == 0)) goto LAB_180301690;
    if ((((uVar1 >> 2 & 1) == 0) || ((DAT_180b8fbf0 >> 9 & 1) != 0)) &&
       (((param_3 & 8) == 0 || ((DAT_180b8fbf0 & 0x10) != 0)))) {
      if ((param_3 & 0x10) == 0) {
        return;
      }
      if ((DAT_180b8fbf0 & 8) != 0) {
        return;
      }
    }
  }
  if ((uVar1 >> 1 & 1) == 0) {
    if ((uVar1 >> 2 & 1) != 0) {
      DAT_180b8fbf0 = DAT_180b8fbf0 & 0xfffffffffffffdff | param_3;
      return;
    }
    if ((param_3 & 8) != 0) {
      DAT_180b8fbf0 = DAT_180b8fbf0 & 0xffffffffffffffef | param_3;
      return;
    }
    if ((param_3 & 0x10) != 0) {
      DAT_180b8fbf0 = DAT_180b8fbf0 & 0xfffffffffffffff7;
    }
    DAT_180b8fbf0 = DAT_180b8fbf0 | param_3;
    return;
  }
LAB_180301690:
  DAT_180b8fbf0 = DAT_180b8fbf0 & 0xfffffffffffffbff | param_3;
  return;
}



