// FUN_180307590 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180307590 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180307590(undefined8 param_1,float *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  short sVar5;
  int iVar6;
  float *pfVar7;
  ULONGLONG UVar8;
  undefined8 *puVar9;
  float *pfVar10;
  float fVar11;
  float fVar12;
  undefined1 auVar13 [16];
  undefined1 extraout_var [56];
  float fVar14;
  undefined1 in_ZMM2 [64];
  undefined1 auVar15 [16];
  float fVar16;
  undefined1 auVar17 [64];
  float fVar18;
  float fVar19;
  float fVar20;
  undefined1 auVar21 [64];
  undefined1 auVar22 [64];
  undefined1 auVar23 [64];
  undefined1 auStack_198 [32];
  undefined4 **local_178;
  undefined8 local_170;
  float local_168;
  float local_164 [3];
  undefined8 local_158;
  longlong lStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined4 *local_108;
  longlong local_100;
  undefined4 local_f8 [2];
  longlong local_f0;
  undefined4 local_e8 [2];
  longlong local_e0;
  ulonglong local_d8;
  
  local_d8 = DAT_1808d5f00 ^ (ulonglong)auStack_198;
  auVar22 = ZEXT1664(in_ZMM2._0_16_);
  AcquireSRWLockShared((PSRWLOCK)&DAT_180bb88c0);
  local_158 = _DAT_180bb8890;
  lStack_150 = lRam0000000180bb8898;
  uStack_148 = uRam0000000180bb88a0;
  uStack_140 = uRam0000000180bb88a8;
  auVar22 = ZEXT1664(auVar22._0_16_);
  ReleaseSRWLockShared((PSRWLOCK)&DAT_180bb88c0);
  if ((DAT_180cd3fb0 & 1) == 0) {
    DAT_180cd3fb0 = DAT_180cd3fb0 | 1;
    local_f8[0] = 0xad8af3df;
    local_f0 = 0;
    local_108 = local_f8;
    local_100 = 1;
    FUN_18044c9c0(DAT_180c64058,&local_108);
    DAT_180cd3fb8 = local_f0;
  }
  lVar1 = DAT_180cd3fb8;
  if ((DAT_180cd3fc0 & 1) == 0) {
    DAT_180cd3fc0 = DAT_180cd3fc0 | 1;
    local_e8[0] = 0xa84213b4;
    local_e0 = 0;
    local_108 = local_e8;
    local_100 = 1;
    FUN_18044c9c0(DAT_180c64058,&local_108);
    DAT_180cd3fc8 = local_e0;
  }
  lVar2 = DAT_180cd3fc8;
  auVar13 = auVar22._0_16_;
  if ((DAT_180cd3fd0 & 1) == 0) {
    DAT_180cd3fd0 = DAT_180cd3fd0 | 1;
    local_108 = (undefined4 *)CONCAT44(local_108._4_4_,0x16cc57ac);
    local_100 = 0;
    local_178 = &local_108;
    local_170 = 1;
    FUN_18044c9c0(DAT_180c64058,&local_178);
    auVar13 = auVar22._0_16_;
    DAT_180cd3fd8 = local_100;
  }
  lVar4 = lStack_150;
  lVar3 = DAT_180cd3fd8;
  fVar16 = 1.0;
  if ((((lStack_150 != 0) && (lVar1 != 0)) && (lVar2 != 0)) && (DAT_180cd3fd8 != 0)) {
    fVar12 = (float)DAT_180b8e124 * (float)DAT_180b8e124 + DAT_180b8e124._4_4_ * DAT_180b8e124._4_4_
    ;
    auVar15._12_4_ = 0;
    auVar15._0_12_ = ZEXT812(0);
    auVar15 = auVar15 << 0x20;
    if ((fVar12 != 0.0) && (fVar12 < 0.0)) {
      auVar22 = ZEXT1264(ZEXT812(0)) << 0x20;
      fVar16 = 1.0;
      auVar23 = ZEXT1664(auVar13);
      FUN_18061e150();
      auVar13 = auVar23._0_16_;
      auVar15 = auVar22._0_16_;
    }
    auVar22 = ZEXT1664(auVar15);
    auVar23 = ZEXT1664(auVar13);
    sVar5 = thunk_FUN_180624430();
    puVar9 = &DAT_180b8e124;
    if (0 < sVar5) {
      puVar9 = &DAT_180b8e174;
    }
    local_178 = (undefined4 **)*puVar9;
    auVar13._8_8_ = 0;
    auVar13._0_8_ = local_178;
    local_170 = CONCAT44(local_170._4_4_,*(undefined4 *)(puVar9 + 1));
    auVar13 = vshufps_avx(auVar13,auVar13,0x55);
    auVar21 = ZEXT1664(auVar13);
    fVar12 = auVar13._0_4_ * auVar13._0_4_ + local_178._0_4_ * local_178._0_4_;
    fVar20 = local_178._0_4_;
    if (fVar12 == auVar22._0_4_) {
      auVar17 = ZEXT864(0);
    }
    else if (fVar12 < 0.0) {
      auVar17._0_8_ = FUN_18061e150(fVar12);
      auVar17._8_56_ = extraout_var;
      auVar17 = ZEXT1664(auVar17._0_16_);
    }
    else {
      auVar17 = ZEXT464((uint)SQRT(fVar12));
    }
    iVar6 = DAT_180c6f348;
    fVar12 = auVar21._0_4_;
    auVar13 = auVar17._0_16_;
    local_164[0] = fVar16;
    local_168 = auVar22._0_4_;
    pfVar10 = &local_168;
    if (auVar22._0_4_ <= DAT_180b8e154) {
      pfVar10 = &DAT_180b8e154;
    }
    pfVar7 = local_164;
    if (DAT_180b8e154 <= fVar16) {
      pfVar7 = pfVar10;
    }
    fVar16 = *pfVar7;
    if (DAT_180c6f348 == 0) {
      UVar8 = GetTickCount64();
      fVar12 = auVar21._0_4_;
      auVar13 = auVar17._0_16_;
      if (DAT_180c6f340 <= UVar8) {
        local_178 = (undefined4 **)&DAT_1808ff790;
        iVar6 = FUN_1805f68d0(&DAT_1808ff790);
        if (iVar6 != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_1805f6d44(5);
        }
        if (DAT_1808ff7dc == 0x7fffffff) {
          DAT_1808ff7dc = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
          FUN_1805f6d44(6);
        }
        if ((DAT_180c6f348 == 0) && (DAT_180c6f340 <= UVar8)) {
          DAT_180c6f348 = FUN_1804174b0("C_BaseEntity",0x6f5feba1);
          if (DAT_180c6f348 == 0) {
            DAT_180c6f340 = UVar8 + 1000;
          }
          else {
            DAT_180c6f340 = 0xffffffffffffffff;
          }
        }
        iVar6 = DAT_180c6f348;
        FUN_1805f68fc(&DAT_1808ff790);
        fVar12 = auVar21._0_4_;
        auVar13 = auVar17._0_16_;
      }
    }
    fVar18 = 0.015625;
    fVar19 = 0.001;
    fVar14 = auVar13._0_4_;
    if (fVar14 <= 0.001) {
      fVar14 = 0.0;
    }
    else {
      auVar13 = vmaxss_avx(ZEXT416(*(uint *)(lVar2 + 0x58)),auVar13);
      auVar15 = vmaxss_avx(auVar22._0_16_,ZEXT416(*(uint *)(iVar6 + lVar4)));
      auVar13 = vmaxss_avx(auVar22._0_16_,
                           ZEXT416((uint)(fVar14 - auVar13._0_4_ * *(float *)(lVar1 + 0x58) * fVar16
                                                   * auVar15._0_4_ * 0.015625)));
      fVar14 = auVar13._0_4_ / fVar14;
    }
    fVar20 = fVar20 * fVar14;
    fVar12 = fVar12 * fVar14;
    fVar14 = fVar14 * auVar22._0_4_;
    fVar11 = (float)FUN_180306ed0();
    fVar18 = (auVar23._0_4_ / fVar11) * *(float *)(lVar3 + 0x58) * fVar16 * fVar18;
    sVar5 = thunk_FUN_180624430(fVar18);
    if ((sVar5 < 1) && (fVar19 < fVar18)) {
      fVar16 = fVar12 * param_2[1] + fVar20 * *param_2 + fVar14 * param_2[2];
      fVar12 = (fVar16 * fVar16 - (fVar20 * fVar20 + fVar12 * fVar12 + fVar14 * fVar14)) +
               auVar23._0_4_ * auVar23._0_4_;
      if (auVar22._0_4_ <= fVar12) {
        if (fVar12 < 0.0) {
          fVar12 = (float)FUN_18061e150(fVar12);
          vmaxss_avx(auVar22._0_16_,ZEXT416((uint)(fVar12 - fVar16)));
        }
        else {
          vmaxss_avx(auVar22._0_16_,ZEXT416((uint)(SQRT(fVar12) - fVar16)));
        }
      }
    }
  }
}



