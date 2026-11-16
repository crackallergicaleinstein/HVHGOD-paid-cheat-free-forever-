// FUN_1803cdc10 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1803cdc10 */

ulonglong FUN_1803cdc10(ulonglong *param_1,ulonglong param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar1 = param_2 + 0x150;
  if (param_2 != uVar1) {
    uVar2 = param_2;
    do {
      if (*param_1 == uVar2) goto LAB_1803cdcd6;
      uVar2 = uVar2 + 0x70;
    } while (uVar2 != uVar1);
  }
  if (uVar1 != param_2 + 0x2a0) {
    do {
      if (*param_1 == uVar1) goto LAB_1803cdcd6;
      uVar1 = uVar1 + 0x70;
    } while (uVar1 != param_2 + 0x2a0);
  }
  uVar2 = *param_1;
  uVar1 = param_2 + 0x530;
  if ((((((uVar2 != uVar1) && (uVar1 = param_2 + 0x5a0, uVar2 != uVar1)) &&
        (uVar1 = param_2 + 0x4b8, uVar2 != uVar1)) &&
       ((uVar1 = param_2 + 0x450, uVar2 != uVar1 && (uVar1 = param_2 + 1000, uVar2 != uVar1)))) &&
      ((uVar1 = param_2 + 0x2b0, uVar2 != uVar1 &&
       ((uVar1 = param_2 + 0x318, uVar2 != uVar1 && (uVar1 = param_2 + 0x380, uVar2 != uVar1))))))
     && ((uVar1 = param_2 + 0x610, uVar2 != uVar1 && (uVar1 = param_2 + 0x678, uVar2 != uVar1)))) {
    return uVar1 & 0xffffffffffffff00;
  }
LAB_1803cdcd6:
  return CONCAT71((int7)(uVar1 >> 8),1);
}



