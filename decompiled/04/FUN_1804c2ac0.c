// FUN_1804c2ac0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804c2ac0 */

longlong FUN_1804c2ac0(uint param_1)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar5;
  longlong lVar4;
  uint uVar6;
  
  lVar2 = DAT_180bb8ae8;
  uVar6 = param_1 & 0xffff0fff;
  if (uVar6 - 0x20f < 8) {
    if ((uVar6 - 0x20f & 0xfffffffb) == 0) {
      uVar3 = 0xffffefff;
    }
    else if ((uVar6 - 0x210 & 0xfffffffb) == 0) {
      uVar3 = 0xffffdfff;
    }
    else if ((uVar6 - 0x211 & 0xfffffffb) == 0) {
      uVar3 = 0xffffbfff;
    }
    else {
      uVar3 = 0xffff7fff;
      if ((uVar6 - 0x212 & 0xfffffffb) != 0) {
        uVar3 = 0xffffffff;
      }
    }
    param_1 = param_1 & uVar3;
  }
  if ((uVar6 != 0) || (param_1 == 0)) {
    FUN_1804c2a40(uVar6);
  }
  lVar1 = lVar2 + 0x2ae0;
  FUN_1804b08d0(lVar1,0x40,"%s%s%s%s%s");
  if ((uVar6 == 0) && (lVar4 = -1, param_1 != 0)) {
    do {
      lVar5 = lVar4;
      lVar4 = lVar5 + 1;
    } while (*(char *)(lVar1 + lVar4) != '\0');
    if (lVar4 != 0) {
      *(undefined1 *)(lVar5 + 0x2ae0 + lVar2) = 0;
    }
  }
  return lVar1;
}



