// FUN_180637ac0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180637ac0 */

ulonglong FUN_180637ac0(ulonglong param_1)

{
  uint uVar1;
  float fVar2;
  ulonglong uVar3;
  double dVar4;
  
  fVar2 = (float)param_1;
  if (((byte)DAT_180bb2128 & 3) == 3) {
    if (fVar2 == 1.0) {
      return 0;
    }
    if (0x7effffff < (int)fVar2 - 0x800000U) {
      if ((int)fVar2 * 2 == 0) {
        uVar3 = FUN_1806283d0(1);
        return uVar3;
      }
      if (fVar2 == INFINITY) {
        return param_1;
      }
      if (((int)fVar2 < 0) || (0xfeffffff < (uint)((int)fVar2 * 2))) {
        uVar3 = FUN_180628430();
        return uVar3;
      }
      fVar2 = (float)((int)(fVar2 * 8388608.0) + -0xb800000);
    }
    uVar1 = (int)fVar2 + 0xc0cd0000;
    uVar3 = (ulonglong)(uVar1 >> 0x13 & 0xf);
    dVar4 = *(double *)(&DAT_180870e30 + uVar3 * 0x10) *
            (double)(float)((int)fVar2 - (uVar1 & 0xff800000)) - 1.0;
    dVar4 = dVar4 * dVar4 *
            (dVar4 * dVar4 * -0.36051725506874704 + dVar4 * 0.4811247078767291 + -0.7213476299867769
            ) + dVar4 * 1.4426950186867042 +
                (double)((int)uVar1 >> 0x17) + *(double *)(&DAT_180870e38 + uVar3 * 0x10);
    return CONCAT44((int)((ulonglong)dVar4 >> 0x20),(float)dVar4);
  }
  if (fVar2 == 1.0) {
    return 0;
  }
  if (0x7effffff < (int)fVar2 - 0x800000U) {
    if ((int)fVar2 * 2 == 0) {
      uVar3 = FUN_1806283d0(1);
      return uVar3;
    }
    if (fVar2 == INFINITY) {
      return param_1;
    }
    if (((int)fVar2 < 0) || (0xfeffffff < (uint)((int)fVar2 * 2))) {
      uVar3 = FUN_180628430();
      return uVar3;
    }
    fVar2 = (float)((int)(fVar2 * 8388608.0) + -0xb800000);
  }
  uVar1 = (int)fVar2 + 0xc0cd0000;
  uVar3 = (ulonglong)(uVar1 >> 0x13 & 0xf);
  dVar4 = (double)(float)((int)fVar2 - (uVar1 & 0xff800000)) *
          *(double *)(&DAT_180870e30 + uVar3 * 0x10) - 1.0;
  return (ulonglong)
         (uint)(float)((double)((int)uVar1 >> 0x17) + *(double *)(&DAT_180870e38 + uVar3 * 0x10) +
                       dVar4 * 1.4426950186867042 +
                      (dVar4 * 0.4811247078767291 + -0.7213476299867769 +
                      dVar4 * dVar4 * -0.36051725506874704) * dVar4 * dVar4);
}



