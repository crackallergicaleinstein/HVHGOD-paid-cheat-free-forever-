// FUN_180243c80 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180243c80 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180243c80(undefined1 *param_1,longlong param_2)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  char cVar4;
  short sVar5;
  int iVar6;
  ULONGLONG UVar7;
  longlong lVar8;
  longlong lVar9;
  undefined **ppuVar10;
  float *pfVar11;
  uint *puVar12;
  undefined **ppuVar13;
  float *pfVar14;
  ulonglong uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 extraout_var [56];
  undefined1 extraout_var_00 [56];
  undefined1 auVar24 [16];
  undefined8 uVar25;
  undefined1 auVar26 [64];
  undefined1 auVar27 [64];
  undefined1 auVar28 [64];
  float fVar29;
  float fVar30;
  undefined1 auVar31 [64];
  uint uVar32;
  undefined1 auVar33 [64];
  float fVar34;
  undefined1 auStack_1b8 [32];
  float local_198;
  float local_188;
  float local_184;
  float local_180 [3];
  float local_174 [3];
  float local_168 [4];
  undefined ***local_158;
  longlong lStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined *local_108;
  longlong local_100;
  undefined **local_f8;
  longlong local_f0;
  ulonglong local_e8;
  
  local_e8 = DAT_1808d5f00 ^ (ulonglong)auStack_1b8;
  *param_1 = 0;
  if ((param_2 != 0) && (DAT_180b8e620 != '\0')) {
    AcquireSRWLockShared((PSRWLOCK)&DAT_180bb88c0);
    local_158 = _DAT_180bb8890;
    lStack_150 = lRam0000000180bb8898;
    uStack_148 = uRam0000000180bb88a0;
    uStack_140 = uRam0000000180bb88a8;
    ReleaseSRWLockShared((PSRWLOCK)&DAT_180bb88c0);
    lVar9 = lStack_150;
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) | 1;
    iVar6 = DAT_180c643f8;
    puVar12 = (uint *)0x0;
    if (*(longlong *)(param_2 + 0x40) != 0) {
      puVar12 = (uint *)(*(longlong *)(param_2 + 0x40) + 0x10);
    }
    if (lStack_150 == 0) {
    }
    if (puVar12 == (uint *)0x0) {
    }
    uVar15 = 0xffffffffffffffff;
    if ((DAT_180c643f8 == 0) && (UVar7 = GetTickCount64(), DAT_180c643f0 <= UVar7)) {
      local_108 = &DAT_1808edd80;
      iVar6 = FUN_1805f68d0(&DAT_1808edd80);
      if (iVar6 != 0) goto LAB_1802444f6;
      if (DAT_1808eddcc == 0x7fffffff) {
        DAT_1808eddcc = 0x7ffffffe;
        goto LAB_1802444eb;
      }
      if ((DAT_180c643f8 == 0) && (DAT_180c643f0 <= UVar7)) {
        DAT_180c643f8 = FUN_1804174b0("C_BasePlayerPawn",0xcf73e28a);
        if (DAT_180c643f8 == 0) {
          DAT_180c643f0 = UVar7 + 1000;
        }
        else {
          DAT_180c643f0 = 0xffffffffffffffff;
        }
      }
      iVar6 = DAT_180c643f8;
      FUN_1805f68fc(&DAT_1808edd80);
    }
    lVar8 = FUN_18017ea70();
    *(int *)(lVar8 + 4) = *(int *)(lVar8 + 4) + 1;
    if (iVar6 + lVar9 == 0) {
      bVar1 = false;
    }
    else {
      local_108 = (undefined *)0x0;
      cVar4 = FUN_1804514f0(&local_108,iVar6 + lVar9,8);
      if (cVar4 == '\0') {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
    }
    puVar2 = local_108;
    lVar9 = FUN_18017ea70();
    if (*(int *)(lVar9 + 4) != 0) {
      *(int *)(lVar9 + 4) = *(int *)(lVar9 + 4) + -1;
    }
    if (((bVar1) && (puVar2 != (undefined *)0x0)) && ((_DAT_180b8e114 & 1) != 0)) {
      *param_1 = 1;
      *(ulonglong *)(param_2 + 0x60) = *(ulonglong *)(param_2 + 0x60) & 0xfffffffffffff9e7;
      *(ulonglong *)(param_2 + 0x68) = *(ulonglong *)(param_2 + 0x68) | 0x618;
      *(ulonglong *)(param_2 + 0x70) = *(ulonglong *)(param_2 + 0x70) & 0xfffffffffffff9e7;
      auVar22._8_8_ = 0;
      auVar22._0_8_ = DAT_180b8e118;
      local_100 = CONCAT44(local_100._4_4_,DAT_180b8e120);
      auVar22 = vshufps_avx(auVar22,auVar22,0x55);
      auVar33 = ZEXT1664(auVar22);
      local_108 = DAT_180b8e118;
      puVar3 = local_108;
      local_108._0_4_ = SUB84(DAT_180b8e118,0);
      fVar17 = auVar22._0_4_ * auVar22._0_4_ + local_108._0_4_ * local_108._0_4_;
      fVar29 = 0.0;
      fVar34 = local_108._0_4_;
      local_108 = puVar3;
      if (fVar17 == 0.0) {
        auVar26 = ZEXT864(0);
      }
      else if (fVar17 < 0.0) {
        auVar26._0_8_ = FUN_18061e150(fVar17);
        auVar26._8_56_ = extraout_var;
        auVar26 = ZEXT1664(auVar26._0_16_);
      }
      else {
        auVar26 = ZEXT464((uint)SQRT(fVar17));
      }
      sVar5 = thunk_FUN_180624430(auVar26._0_8_);
      if ((sVar5 < 1) && (auVar31 = ZEXT464(0x3f800000), 1.0 < auVar26._0_4_)) {
        auVar27 = ZEXT464((uint)DAT_180cc9368);
        sVar5 = thunk_FUN_180624430(DAT_180cc9368);
        if ((sVar5 < 1) && (fVar29 < auVar27._0_4_)) {
          if ((DAT_180cd3bc0 & 1) == 0) {
            DAT_180cd3bc0 = DAT_180cd3bc0 | 1;
            local_108 = (undefined *)CONCAT44(local_108._4_4_,0xad8af3df);
            local_100 = 0;
            local_f8 = &local_108;
            local_f0 = 1;
            FUN_18044c9c0(DAT_180c64058,&local_f8);
            DAT_180cd3bc8 = local_100;
          }
          fVar17 = *(float *)(DAT_180cd3bc8 + 0x58);
          if ((DAT_180cd3bd0 & 1) == 0) {
            DAT_180cd3bd0 = DAT_180cd3bd0 | 1;
            local_f8 = (undefined **)CONCAT44(local_f8._4_4_,0xa84213b4);
            local_f0 = 0;
            local_158 = &local_f8;
            lStack_150 = 1;
            FUN_18044c9c0(DAT_180c64058,&local_158);
            DAT_180cd3bd8 = local_f0;
          }
          fVar21 = DAT_180b8e154;
          fVar16 = (float)FUN_180615630(auVar26._0_8_,*(undefined4 *)(DAT_180cd3bd8 + 0x58));
          auVar27._0_8_ = FUN_180615630(auVar26._0_4_ - fVar16 * fVar17 * fVar21 * 0.015625,0);
          auVar27._8_56_ = extraout_var_00;
          auVar28 = ZEXT1664(auVar27._0_16_);
          fVar17 = (float)auVar27._0_8_;
          if (fVar29 < fVar17) {
            fVar16 = fVar17 / auVar26._0_4_;
            fVar34 = fVar34 * fVar16;
            fVar16 = auVar33._0_4_ * fVar16;
            if (2.0 <= fVar17) {
              if ((DAT_180cd3be0 & 1) == 0) {
                DAT_180cd3be0 = DAT_180cd3be0 | 1;
                local_f8 = (undefined **)CONCAT44(local_f8._4_4_,0x16cc57ac);
                local_f0 = 0;
                local_158 = &local_f8;
                lStack_150 = 1;
                FUN_18044c9c0(DAT_180c64058,&local_158);
                DAT_180cd3be8 = local_f0;
              }
              fVar17 = *(float *)(DAT_180cd3be8 + 0x58);
              local_198 = DAT_180cc9368;
              fVar18 = (float)FUN_180244510();
              if (DAT_180cc9371 != '\0') {
                auVar33 = ZEXT464(0x437a0000);
                auVar24._0_4_ = DAT_180cc9368 / 250.0;
                auVar24._4_12_ = SUB6012((undefined1  [60])0x0,0);
                fVar19 = (float)FUN_1806156a0(auVar31._0_8_,auVar24._0_8_);
                uVar25 = auVar33._0_8_;
                iVar6 = DAT_180c643e4;
                if (DAT_180c643e4 == 0) {
                  UVar7 = GetTickCount64();
                  uVar25 = auVar33._0_8_;
                  if (UVar7 < DAT_180c643e8) {
                    iVar6 = 0;
                  }
                  else {
                    local_108 = &DAT_1808edd30;
                    iVar6 = FUN_1805f68d0(&DAT_1808edd30);
                    if (iVar6 != 0) {
LAB_1802444f6:
                    /* WARNING: Subroutine does not return */
                      FUN_1805f6d44(5);
                    }
                    if (DAT_1808edd7c == 0x7fffffff) {
                      DAT_1808edd7c = 0x7ffffffe;
LAB_1802444eb:
                    /* WARNING: Subroutine does not return */
                      FUN_1805f6d44(6);
                    }
                    if ((DAT_180c643e4 == 0) && (DAT_180c643e8 <= UVar7)) {
                      DAT_180c643e4 = FUN_1804174b0("CPlayer_MovementServices",0x468f90f2);
                      if (DAT_180c643e4 == 0) {
                        uVar15 = UVar7 + 1000;
                      }
                      DAT_180c643e8 = uVar15;
                    }
                    iVar6 = DAT_180c643e4;
                    FUN_1805f68fc(&DAT_1808edd30);
                    uVar25 = auVar33._0_8_;
                  }
                }
                fVar20 = (float)FUN_180615630(uVar25,*(undefined4 *)(puVar2 + iVar6));
                auVar33 = ZEXT464(0x40a00000);
                fVar19 = fVar20 * fVar19 * 0.52 - 5.0;
                if (fVar19 < auVar28._0_4_) {
                  fVar19 = (float)FUN_180615630(0,auVar28._0_4_ - fVar19);
                  fVar20 = (float)FUN_180615630(0x3c23d70a,auVar33._0_8_);
                  fVar30 = auVar31._0_4_;
                  local_184 = fVar30 - fVar19 / fVar20;
                  local_108 = (undefined *)CONCAT44(local_108._4_4_,fVar30);
                  local_188 = fVar29;
                  ppuVar13 = (undefined **)&local_188;
                  if (fVar29 <= local_184) {
                    ppuVar13 = (undefined **)&local_184;
                  }
                  ppuVar10 = &local_108;
                  if (local_184 <= fVar30) {
                    ppuVar10 = ppuVar13;
                  }
                  fVar17 = fVar17 * *(float *)ppuVar10;
                }
              }
              uVar32 = 0x80000000;
              fVar34 = -fVar34 / auVar28._0_4_;
              fVar16 = -fVar16 / auVar28._0_4_;
              FUN_1806156a0(fVar18 * fVar17 * fVar21 * 0.015625,auVar28._0_8_);
              local_180[2] = auVar31._0_4_;
              local_180[0] = fVar29;
              auVar23._0_4_ = auVar28._0_4_ / DAT_180cc9368;
              auVar23._4_12_ = auVar28._4_12_;
              local_180[1] = auVar23._0_4_;
              pfVar14 = local_180;
              if (fVar29 <= auVar23._0_4_) {
                pfVar14 = local_180 + 1;
              }
              pfVar11 = local_180 + 2;
              if (auVar23._0_4_ <= auVar31._0_4_) {
                pfVar11 = pfVar14;
              }
              fVar17 = *pfVar11;
              lVar9 = FUN_1803dff30(auVar23._0_8_,&local_108);
              auVar33 = ZEXT464(*(uint *)(lVar9 + 4));
              lVar9 = 0;
              if (*(longlong *)(puVar12 + 0xc) != 0) {
                lVar9 = *(longlong *)(puVar12 + 0xc) + 0x10;
              }
              if (lVar9 != 0) {
                auVar26 = ZEXT464(*(uint *)(lVar9 + 0xc));
                sVar5 = thunk_FUN_180624430(*(uint *)(lVar9 + 0xc));
                auVar22 = vpcmpgtd_avx(ZEXT416((uint)(int)sVar5),SUB6416(ZEXT464(0),0));
                auVar22 = vblendvps_avx(auVar26._0_16_,auVar33._0_16_,auVar22);
                auVar33 = ZEXT1664(auVar22);
              }
              sVar5 = thunk_FUN_180624430(auVar33._0_8_);
              if (0 < sVar5) {
              }
              fVar21 = auVar33._0_4_ * 0.017453292;
              auVar33 = ZEXT464((uint)fVar21);
              fVar21 = (float)FUN_180638e00(fVar21);
              fVar18 = (float)FUN_180637540(auVar33._0_8_);
              local_174[2] = auVar31._0_4_;
              local_174[0] = -1.0;
              local_174[1] = (fVar21 * fVar16 + fVar18 * fVar34) * fVar17;
              pfVar14 = local_174;
              if (-1.0 <= local_174[1]) {
                pfVar14 = local_174 + 1;
              }
              pfVar11 = local_174 + 2;
              if (local_174[1] <= local_174[2]) {
                pfVar11 = pfVar14;
              }
              fVar19 = *pfVar11;
              local_168[2] = local_174[2];
              local_168[0] = -1.0;
              local_168[1] = (fVar21 * fVar34 - fVar18 * fVar16) * (float)((uint)fVar17 ^ uVar32);
              pfVar14 = local_168;
              if (-1.0 <= local_168[1]) {
                pfVar14 = local_168 + 1;
              }
              pfVar11 = local_168 + 2;
              if (local_168[1] <= local_174[2]) {
                pfVar11 = pfVar14;
              }
              fVar17 = *pfVar11;
              puVar12[0x12] = (uint)fVar19;
              *puVar12 = *puVar12 | 0xc0;
              puVar12[0x13] = (uint)fVar17;
              if ((puVar12 != (uint *)0xfffffffffffffff8) &&
                 (puVar12 = (uint *)FUN_1803dfb00(), puVar12 != (uint *)0x0)) {
                puVar12[2] = 0;
                puVar12[3] = 0;
                *(undefined1 *)(puVar12 + 4) = 0;
                *puVar12 = *puVar12 | 7;
                uVar32 = *puVar12;
                puVar12[5] = 0;
                fVar34 = DAT_180b8e148;
                *puVar12 = uVar32 | 8;
                puVar12[6] = (uint)(fVar19 - fVar34);
                fVar34 = DAT_180b8e14c;
                *puVar12 = uVar32 | 0x18;
                puVar12[7] = (uint)(fVar17 - fVar34);
              }
              if (fVar19 <= fVar29) {
                if (fVar19 < fVar29) {
                  *(ulonglong *)(param_2 + 0x60) = *(ulonglong *)(param_2 + 0x60) | 0x10;
                }
              }
              else {
                *(ulonglong *)(param_2 + 0x60) = *(ulonglong *)(param_2 + 0x60) | 8;
              }
              if (fVar17 <= fVar29) {
                if (fVar17 < fVar29) {
                  *(ulonglong *)(param_2 + 0x60) = *(ulonglong *)(param_2 + 0x60) | 0x400;
                }
              }
              *(ulonglong *)(param_2 + 0x60) = *(ulonglong *)(param_2 + 0x60) | 0x200;
            }
          }
        }
      }
      puVar12[0x12] = 0;
      puVar12[0x13] = 0;
      *puVar12 = *puVar12 | 0xc0;
    }
  }
}



