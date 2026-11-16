// FUN_1802796e0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802796e0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_1802796e0(undefined8 param_1,float param_2)

{
  undefined1 auVar1 [16];
  uint uVar2;
  bool bVar3;
  int iVar4;
  ULONGLONG UVar5;
  uint uVar6;
  int iVar7;
  ulonglong uVar8;
  float fVar9;
  float fVar10;
  
  uVar2 = _DAT_180b8e114 & 1;
  uVar6 = _DAT_180b8e114 & 4;
  fVar9 = (float)DAT_180b8e118 * (float)DAT_180b8e118 + DAT_180b8e118._4_4_ * DAT_180b8e118._4_4_;
  fVar10 = 0.0;
  if (fVar9 != 0.0) {
    if (fVar9 < 0.0) {
      fVar10 = (float)FUN_18061e150(fVar9);
    }
    else {
      fVar10 = SQRT(fVar9);
    }
  }
  iVar4 = DAT_180c64b38;
  if (uVar2 == 0) {
    uVar8 = 0xffffffffffffffff;
    if ((DAT_180c64b38 == 0) && (UVar5 = GetTickCount64(), DAT_180c64b30 <= UVar5)) {
      iVar4 = FUN_1805f68d0(&DAT_1808efab0);
      if (iVar4 != 0) goto LAB_180279994;
      if (DAT_1808efafc == 0x7fffffff) {
        DAT_1808efafc = 0x7ffffffe;
        goto LAB_180279989;
      }
      if ((DAT_180c64b38 == 0) && (DAT_180c64b30 <= UVar5)) {
        DAT_180c64b38 = FUN_1804174b0("CCSWeaponBaseVData",0x7f1cc92d);
        if (DAT_180c64b38 == 0) {
          DAT_180c64b30 = UVar5 + 1000;
        }
        else {
          DAT_180c64b30 = 0xffffffffffffffff;
        }
      }
      iVar4 = DAT_180c64b38;
      FUN_1805f68fc(&DAT_1808efab0);
    }
    iVar7 = DAT_180c64b20;
    fVar9 = *(float *)(iVar4 + DAT_180cc9340);
    if ((DAT_180c64b20 == 0) && (UVar5 = GetTickCount64(), DAT_180c64b28 <= UVar5)) {
      iVar4 = FUN_1805f68d0(&DAT_1808efb00);
      if (iVar4 != 0) {
LAB_180279994:
                    /* WARNING: Subroutine does not return */
        FUN_1805f6d44(5);
      }
      if (DAT_1808efb4c == 0x7fffffff) {
        DAT_1808efb4c = 0x7ffffffe;
LAB_180279989:
                    /* WARNING: Subroutine does not return */
        FUN_1805f6d44(6);
      }
      if ((DAT_180c64b20 == 0) && (DAT_180c64b28 <= UVar5)) {
        DAT_180c64b20 = FUN_1804174b0("C_CSWeaponBase",0x7fb6de25);
        if (DAT_180c64b20 == 0) {
          uVar8 = UVar5 + 1000;
        }
        DAT_180c64b28 = uVar8;
      }
      iVar7 = DAT_180c64b20;
      FUN_1805f68fc(&DAT_1808efb00);
    }
    return param_2 <= fVar9 + *(float *)(iVar7 + DAT_180cc9330) + 0.001;
  }
  if (DAT_180cc9348 != 5) {
    return fVar10 <= DAT_180cc9368 * 0.34;
  }
  if (DAT_180cc9371 == '\0') {
LAB_1802797e9:
    bVar3 = false;
  }
  else {
    if (uVar6 == 0) {
      if (0.1 < fVar10) goto LAB_1802797e9;
      auVar1 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(param_2 * 170.0)),1);
      fVar9 = auVar1._0_4_ / 170.0;
    }
    else {
      auVar1 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(param_2 * 300.0)),1);
      fVar9 = auVar1._0_4_ / 300.0;
    }
    bVar3 = fVar9 < param_2;
  }
  return bVar3;
}



