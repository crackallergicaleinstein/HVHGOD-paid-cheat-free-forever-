// FUN_180262bb0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180262bb0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180262bb0(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  int iVar2;
  ULONGLONG UVar3;
  float *pfVar4;
  float *pfVar5;
  int iVar6;
  ulonglong uVar7;
  float fVar8;
  float fVar9;
  undefined1 extraout_var [56];
  float fVar10;
  undefined1 auVar11 [64];
  undefined4 uVar12;
  float fVar13;
  float fVar14;
  undefined1 auVar15 [64];
  float fVar16;
  uint uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined1 auStack_178 [32];
  float local_158 [3];
  float local_14c [3];
  uint local_140;
  undefined *local_138;
  undefined8 local_130;
  undefined ***local_118;
  undefined8 local_110;
  undefined **local_108;
  longlong local_100;
  undefined *local_f8;
  longlong local_f0;
  undefined4 local_e8 [2];
  longlong local_e0;
  ulonglong local_d8;
  
  local_d8 = DAT_1808d5f00 ^ (ulonglong)auStack_178;
  local_130 = DAT_180b8e118;
  uVar1 = local_130;
  if ((DAT_180cc9348 == 5) && (*(char *)(param_2 + 0x29) == '\0')) {
  }
  if (*(char *)(param_2 + 0x28) == '\0') {
    if (DAT_180cc9348 != 5) {
    }
    uVar12 = 0;
    if (140.0 < DAT_180b8e120) {
    }
    iVar2 = 1;
    fVar10 = DAT_180b8e120;
    if ((DAT_180cd3c50 & 1) == 0) {
      DAT_180cd3c50 = DAT_180cd3c50 | 1;
      local_f8 = (undefined *)CONCAT44(local_f8._4_4_,0x58e37709);
      local_f0 = 0;
      local_108 = &local_f8;
      local_100 = 1;
      FUN_18044c9c0(DAT_180c64058,&local_108);
      DAT_180cd3c58 = local_f0;
    }
    fVar14 = *(float *)(DAT_180cd3c58 + 0x58);
    if ((DAT_180cd3c60 & 1) == 0) {
      DAT_180cd3c60 = DAT_180cd3c60 | 1;
      local_e8[0] = 0xad8af3df;
      local_e0 = 0;
      local_108 = (undefined **)local_e8;
      local_100 = 1;
      FUN_18044c9c0(DAT_180c64058,&local_108);
      DAT_180cd3c68 = local_e0;
    }
    local_138 = (undefined *)CONCAT44(local_138._4_4_,*(undefined4 *)(DAT_180cd3c68 + 0x58));
    if ((DAT_180cd3c70 & 1) == 0) {
      DAT_180cd3c70 = DAT_180cd3c70 | 1;
      local_108 = (undefined **)CONCAT44(local_108._4_4_,0xa84213b4);
      local_100 = 0;
      local_118 = &local_108;
      local_110 = 1;
      FUN_18044c9c0(DAT_180c64058,&local_118);
      DAT_180cd3c78 = local_100;
    }
    local_140 = *(uint *)(DAT_180cd3c78 + 0x58);
    uVar7 = 0xffffffffffffffff;
    iVar6 = DAT_180c64740;
    if (DAT_180c64740 == 0) {
      UVar3 = GetTickCount64();
      if (UVar3 < DAT_180c64748) {
        iVar6 = 0;
      }
      else {
        local_f8 = &DAT_1808eef50;
        iVar6 = FUN_1805f68d0(&DAT_1808eef50);
        if (iVar6 != 0) goto LAB_180263410;
        if (DAT_1808eef9c == 0x7fffffff) {
          DAT_1808eef9c = 0x7ffffffe;
          goto LAB_180263405;
        }
        if ((DAT_180c64740 == 0) && (DAT_180c64748 <= UVar3)) {
          DAT_180c64740 = FUN_1804174b0("CCSWeaponBaseVData",0xca4877b7);
          if (DAT_180c64740 == 0) {
            DAT_180c64748 = UVar3 + 1000;
          }
          else {
            DAT_180c64748 = 0xffffffffffffffff;
          }
        }
        iVar6 = DAT_180c64740;
        FUN_1805f68fc(&DAT_1808eef50);
      }
    }
    fVar9 = *(float *)(iVar6 + DAT_180cc9340);
    iVar6 = DAT_180c64738;
    if (DAT_180c64738 == 0) {
      UVar3 = GetTickCount64();
      if (UVar3 < DAT_180c64730) {
        iVar6 = 0;
      }
      else {
        local_f8 = &DAT_1808eef00;
        iVar6 = FUN_1805f68d0(&DAT_1808eef00);
        if (iVar6 != 0) goto LAB_180263410;
        if (DAT_1808eef4c == 0x7fffffff) {
          DAT_1808eef4c = 0x7ffffffe;
          goto LAB_180263405;
        }
        if ((DAT_180c64738 == 0) && (DAT_180c64730 <= UVar3)) {
          DAT_180c64738 = FUN_1804174b0("CCSWeaponBaseVData",0x7f1cc92d);
          if (DAT_180c64738 == 0) {
            DAT_180c64730 = UVar3 + 1000;
          }
          else {
            DAT_180c64730 = 0xffffffffffffffff;
          }
        }
        iVar6 = DAT_180c64738;
        FUN_1805f68fc(&DAT_1808eef00);
      }
    }
    fVar16 = *(float *)(iVar6 + DAT_180cc9340);
    fVar18 = fVar16 + 0.001;
    fVar13 = fVar16 * 0.45 + fVar9 * 0.55;
    fVar19 = fVar9 - fVar16;
    uVar17 = 0x7fffffff;
    if (ABS(fVar10) < 0.0) {
      fVar8 = (float)FUN_18061e150(CONCAT44(uVar12,fVar10) & 0x7fffffff7fffffff);
    }
    else {
      fVar8 = SQRT(ABS(fVar10));
    }
    fVar20 = 4.344489;
    local_158[1] = ((fVar8 - 4.344489) * fVar19) / 13.033467 + fVar16;
    fVar9 = fVar9 + fVar9;
    local_158[2] = fVar9;
    auVar11 = ZEXT864(0);
    local_158[0] = 0.0;
    pfVar5 = local_158;
    if (0.0 <= local_158[1]) {
      pfVar5 = local_158 + 1;
    }
    pfVar4 = local_158 + 2;
    if (local_158[1] <= fVar9) {
      pfVar4 = pfVar5;
    }
    if (*pfVar4 <= fVar18) {
    }
    if (*pfVar4 <= fVar13) {
    }
    iVar6 = 1;
    fVar13 = 0.015625;
    fVar14 = fVar14 * 0.015625;
    local_14c[0] = 0.0;
    while( true ) {
      fVar10 = fVar10 - fVar14;
      fVar8 = (float)((uint)fVar10 & uVar17);
      if (fVar8 < 0.0) {
        fVar8 = (float)FUN_18061e150(fVar8);
      }
      else {
        fVar8 = SQRT(fVar8);
      }
      local_14c[1] = ((fVar8 - fVar20) * fVar19) / 13.033467 + fVar16;
      local_14c[2] = fVar9;
      pfVar5 = local_14c;
      if (auVar11._0_4_ <= local_14c[1]) {
        pfVar5 = local_14c + 1;
      }
      pfVar4 = local_14c + 2;
      if (local_14c[1] <= fVar9) {
        pfVar4 = pfVar5;
      }
      if (*pfVar4 <= fVar18) break;
      iVar6 = iVar6 + 1;
      if (0x20 < iVar6) {
      }
    }
    fVar10 = local_130._4_4_ * local_130._4_4_ + (float)local_130 * (float)local_130;
    if (fVar10 != auVar11._0_4_) {
      if (fVar10 < 0.0) {
        auVar11._0_8_ = FUN_18061e150(fVar10);
        auVar11._8_56_ = extraout_var;
        auVar11 = ZEXT1664(auVar11._0_16_);
      }
      else {
        auVar11 = ZEXT464((uint)SQRT(fVar10));
      }
    }
    iVar6 = DAT_180c6473c;
    if (DAT_180c6473c == 0) {
      UVar3 = GetTickCount64();
      if (UVar3 < DAT_180c64728) {
        iVar6 = 0;
      }
      else {
        local_f8 = &DAT_1808eeeb0;
        iVar6 = FUN_1805f68d0(&DAT_1808eeeb0);
        if (iVar6 != 0) goto LAB_180263410;
        if (DAT_1808eeefc == 0x7fffffff) {
          DAT_1808eeefc = 0x7ffffffe;
          goto LAB_180263405;
        }
        if ((DAT_180c6473c == 0) && (DAT_180c64728 <= UVar3)) {
          DAT_180c6473c = FUN_1804174b0("CCSWeaponBaseVData",0xec4c9592);
          if (DAT_180c6473c == 0) {
            uVar7 = UVar3 + 1000;
          }
          DAT_180c64728 = uVar7;
        }
        iVar6 = DAT_180c6473c;
        FUN_1805f68fc(&DAT_1808eeeb0);
      }
    }
    fVar10 = *(float *)(iVar6 + DAT_180cc9340) * 0.34;
    if (auVar11._0_4_ <= fVar10) {
    }
    auVar15 = ZEXT464(local_140);
    fVar14 = local_138._0_4_;
    do {
      fVar9 = (float)FUN_180615630(auVar11._0_8_,auVar15._0_8_);
      fVar9 = auVar11._0_4_ - fVar9 * fVar14 * fVar13;
      auVar11 = ZEXT464((uint)fVar9);
      if (fVar9 <= fVar10) {
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < 0x21);
  }
  local_130._4_4_ = (float)((ulonglong)DAT_180b8e118 >> 0x20);
  local_130._0_4_ = (float)DAT_180b8e118;
  fVar10 = local_130._4_4_ * local_130._4_4_ + (float)local_130 * (float)local_130;
  if (fVar10 == 0.0) {
  }
  local_130 = uVar1;
  if (fVar10 < 0.0) {
    fVar10 = (float)FUN_18061e150(fVar10);
  }
  else {
    fVar10 = SQRT(fVar10);
  }
  if (fVar10 <= 0.1) {
  }
  uVar7 = 0xffffffffffffffff;
  if ((DAT_180c6475c == 0) && (UVar3 = GetTickCount64(), DAT_180c64760 <= UVar3)) {
    local_138 = &DAT_1808eeff0;
    iVar2 = FUN_1805f68d0(&DAT_1808eeff0);
    if (iVar2 != 0) goto LAB_180263410;
    if (DAT_1808ef03c == 0x7fffffff) {
      DAT_1808ef03c = 0x7ffffffe;
      goto LAB_180263405;
    }
    if ((DAT_180c6475c == 0) && (DAT_180c64760 <= UVar3)) {
      DAT_180c6475c = FUN_1804174b0("CCSWeaponBaseVData",0x724cfcb0);
      if (DAT_180c6475c == 0) {
        DAT_180c64760 = UVar3 + 1000;
      }
      else {
        DAT_180c64760 = 0xffffffffffffffff;
      }
    }
    FUN_1805f68fc(&DAT_1808eeff0);
  }
  if (DAT_180c64758 != 0) {
  }
  UVar3 = GetTickCount64();
  if (UVar3 < DAT_180c64750) {
  }
  local_138 = &DAT_1808eefa0;
  iVar2 = FUN_1805f68d0(&DAT_1808eefa0);
  if (iVar2 == 0) {
    if (DAT_1808eefec != 0x7fffffff) {
      if ((DAT_180c64758 == 0) && (DAT_180c64750 <= UVar3)) {
        DAT_180c64758 = FUN_1804174b0("CCSWeaponBaseVData",0x4f7b5fdf);
        if (DAT_180c64758 == 0) {
          uVar7 = UVar3 + 1000;
        }
        DAT_180c64750 = uVar7;
      }
      FUN_1805f68fc(&DAT_1808eefa0);
    }
    DAT_1808eefec = 0x7ffffffe;
LAB_180263405:
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(6);
  }
LAB_180263410:
                    /* WARNING: Subroutine does not return */
  FUN_1805f6d44(5);
}



