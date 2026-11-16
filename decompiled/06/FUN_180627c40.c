// FUN_180627c40 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180627c40 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_180627c40(undefined8 param_1,undefined8 param_2)

{
  float fVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  ulonglong uVar5;
  undefined1 in_XMM0 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  float fVar8;
  float fVar9;
  
  uVar5 = in_XMM0._0_8_;
  fVar1 = in_XMM0._0_4_;
  if (0x7f7fffff < (uint)ABS(fVar1)) {
    if (fVar1 != INFINITY) {
      if (fVar1 == -INFINITY) goto LAB_180627dca;
      uVar5 = (ulonglong)((uint)fVar1 | 0x400000);
    }
    return uVar5;
  }
  if (0.0 < fVar1) {
    uVar2 = (uint)fVar1 & 0x7fffff;
    uVar3 = (uint)ABS(fVar1) >> 0x17;
    if (uVar3 == 0) {
      fVar8 = (float)(uVar2 | 0x3f800000) - 1.0;
      uVar2 = (uint)fVar8 & 0x7fffff;
      iVar4 = ((uint)fVar8 >> 0x17) - 0xfd;
    }
    else {
      iVar4 = uVar3 - 0x7f;
    }
    auVar7._4_12_ = in_XMM0._4_12_;
    if (0.0625 <= ABS(fVar1 - 1.0)) {
      uVar3 = (uVar2 >> 0x10) + (uint)((uVar2 >> 0xf & 1) != 0);
      uVar5 = (ulonglong)uVar3;
      fVar1 = ((float)(uVar3 * 0x10000 | 0x3f000000) - (float)(uVar2 | 0x3f000000)) *
              *(float *)(&DAT_1806ba430 + uVar5 * 4);
      auVar6._4_12_ = DAT_1806b1700._4_12_;
      auVar6._0_4_ = (float)DAT_1806b1700 * (float)iVar4 + *(float *)(&DAT_1806ba010 + uVar5 * 4) +
                     ((float)iVar4 * 3.1946183e-05 -
                     (fVar1 + (fVar1 * 0.33333334 + 0.5) * fVar1 * fVar1)) +
                     *(float *)(&DAT_1806ba220 + uVar5 * 4);
      return auVar6._0_8_;
    }
    fVar1 = fVar1 - 1.0;
    fVar8 = fVar1 / (fVar1 + 2.0);
    fVar9 = fVar8 + fVar8;
    auVar7._0_4_ = fVar1 + ((fVar9 * fVar9 * 0.0125 + 0.083333336) * fVar9 * fVar9 * fVar9 -
                           fVar1 * fVar8);
    return auVar7._0_8_;
  }
  if (fVar1 == 0.0) {
    uVar5 = FUN_18062dbf0(param_1,param_2,1);
    return uVar5;
  }
LAB_180627dca:
  uVar5 = FUN_18062dbf0(param_1,param_2,2);
  return uVar5;
}



