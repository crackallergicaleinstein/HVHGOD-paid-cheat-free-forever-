// FUN_180272620 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180272620 */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180272620(longlong param_1,longlong param_2,ulonglong param_3,undefined8 param_4,
                  undefined8 *param_5)

{
  float fVar1;
  float fVar2;
  longlong lVar3;
  undefined1 auVar4 [16];
  int iVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  char cVar8;
  short sVar9;
  int *piVar10;
  undefined1 *puVar11;
  undefined1 **ppuVar12;
  ulonglong uVar13;
  longlong lVar14;
  undefined1 **ppuVar15;
  ulonglong uVar16;
  int iVar17;
  longlong lVar18;
  float *pfVar19;
  longlong lVar20;
  undefined4 uVar21;
  float fVar22;
  float fVar23;
  undefined1 auVar24 [16];
  undefined1 extraout_var [56];
  undefined1 extraout_var_00 [56];
  float fVar25;
  undefined1 in_ZMM3 [64];
  undefined1 auVar26 [64];
  undefined1 auVar27 [64];
  float fVar28;
  undefined1 auVar29 [64];
  undefined1 auVar30 [64];
  undefined1 auVar31 [64];
  undefined1 auVar32 [64];
  float fVar33;
  float afStack_1468 [182];
  undefined8 uStack_1190;
  undefined1 auStack_1188 [32];
  float local_1168;
  float local_1164;
  undefined1 *local_1160;
  int local_1158;
  int local_1154 [3];
  int local_1148 [2];
  float local_1140 [2];
  undefined8 local_1138;
  PSRWLOCK local_1128;
  undefined1 *local_1120;
  undefined1 *local_1118;
  longlong local_1110;
  undefined1 *local_1108;
  undefined4 local_1100;
  undefined8 local_10f8;
  float local_10f0;
  undefined1 local_10ec [4];
  undefined1 auStack_10e8 [4];
  undefined1 local_10e4 [4];
  undefined1 auStack_10e0 [12];
  undefined1 local_10d4 [4072];
  int local_ec;
  ulonglong local_e8;
  
  iVar5 = DAT_180cad428;
  local_e8 = DAT_1808d5f00 ^ (ulonglong)auStack_1188;
  auVar26 = ZEXT1664(in_ZMM3._0_16_);
  if (DAT_180cb15f8 == '\0') {
    *(undefined1 *)(param_2 + 0x1010) = 0;
  }
  local_1154[0] = DAT_180cad428;
  local_1110 = param_2;
  if (param_5 == (undefined8 *)0x0) {
    uStack_1190 = 0x1802726b9;
    param_5 = (undefined8 *)FUN_180270b60(&local_1108);
  }
  local_1138 = (undefined1 *)*param_5;
  uVar21 = *(undefined4 *)(param_5 + 1);
  local_1128 = (PSRWLOCK)(param_1 + 0x40);
  uStack_1190 = 0x1802726e1;
  local_1108 = local_1138;
  local_1100 = uVar21;
  AcquireSRWLockShared(local_1128);
  uVar13 = ((((((((param_3 & 0xff ^ 0xcbf29ce484222325) * 0x100000001b3 ^ param_3 >> 8 & 0xff) *
                 0x100000001b3 ^ param_3 >> 0x10 & 0xff) * 0x100000001b3 ^ param_3 >> 0x18 & 0xff) *
               0x100000001b3 ^ param_3 >> 0x20 & 0xff) * 0x100000001b3 ^ param_3 >> 0x28 & 0xff) *
             0x100000001b3 ^ param_3 >> 0x30 & 0xff) * 0x100000001b3 ^ param_3 >> 0x38) *
           0x100000001b3 & *(ulonglong *)(param_1 + 0x30);
  iVar17 = 0;
  lVar14 = *(longlong *)(*(longlong *)(param_1 + 0x18) + 8 + uVar13 * 0x10);
  if (lVar14 == *(longlong *)(param_1 + 8)) {
LAB_180272798:
    lVar14 = 0;
  }
  else {
    uVar16 = *(ulonglong *)(lVar14 + 0x10);
    while (param_3 != uVar16) {
      if (lVar14 == *(longlong *)(*(longlong *)(param_1 + 0x18) + uVar13 * 0x10))
      goto LAB_180272798;
      lVar14 = *(longlong *)(lVar14 + 8);
      uVar16 = *(ulonglong *)(lVar14 + 0x10);
    }
  }
  if ((((lVar14 != 0) && (lVar14 != *(longlong *)(param_1 + 8))) && ((char)uVar21 != '\0')) &&
     (lVar3 = *(longlong *)(lVar14 + 0x38), lVar3 != 0)) {
    uStack_1190 = 0x1802727f8;
    sVar9 = thunk_FUN_180624430(auVar26._0_8_);
    if ((sVar9 < 1) && (auVar32 = ZEXT864(0), 0.0 < auVar26._0_4_)) {
      fVar25 = 1000.0;
      local_1158 = 0;
      piVar10 = &local_1158;
      if (-1 < iVar5) {
        piVar10 = local_1154;
      }
      local_1164 = 1.0;
      if (200 < iVar5) {
        piVar10 = &DAT_1806ff9a8;
      }
      auVar24._0_4_ = (float)*piVar10 / 1000.0;
      auVar24._4_12_ = SUB1612(ZEXT816(0),4);
      auVar24 = vminss_avx(auVar24,ZEXT416(local_1138._4_4_));
      auVar4 = vminss_avx(SUB6416(ZEXT464(0x3f800000),0),auVar26._0_16_);
      fVar22 = auVar24._0_4_ * auVar4._0_4_;
      if (0.0 < fVar22) {
        uVar16 = *(ulonglong *)(lVar14 + 0x30);
        lVar18 = 0;
        fVar22 = (float)local_1138 - fVar22;
        lVar20 = 0;
        uVar13 = uVar16 + lVar3;
        if (uVar16 != uVar13) {
          do {
            lVar3 = *(longlong *)
                     (*(longlong *)(lVar14 + 0x20) +
                     (*(longlong *)(lVar14 + 0x28) - 1U & uVar16) * 8);
            if ((*(char *)(lVar3 + 0x23b8) != '\0') && (*(int *)(lVar3 + 0x36c) - 1U < 0x80)) {
              if (*(float *)(lVar3 + 0x23b0) < fVar22) {
                lVar20 = lVar3;
                break;
              }
              lVar18 = lVar3;
            }
            uVar16 = uVar16 + 1;
          } while (uVar16 != uVar13);
          if (lVar18 != 0) {
            fVar23 = *(float *)(lVar18 + 0x23b0);
            local_1148[0] = iVar5;
            uStack_1190 = 0x180272901;
            fVar28 = (float)local_1138;
            cVar8 = FUN_180232a20(&local_1108,fVar23);
            if (cVar8 != '\0') {
              local_1154[1] = 0;
              piVar10 = local_1154 + 1;
              if (-1 < iVar5) {
                piVar10 = local_1148;
              }
              if (200 < iVar5) {
                piVar10 = &DAT_1806ff9a8;
              }
              if (fVar28 - fVar23 <= (float)*piVar10 / fVar25) {
                local_10f0 = auVar32._0_4_;
                local_10f8 = CONCAT44(local_10f0,local_10f0);
                uStack_1190 = 0x18027296b;
                FUN_18063ab10(local_10ec,0,0x1000);
                puVar11 = auStack_10e8;
                lVar14 = 8;
                do {
                  *(undefined8 *)(puVar11 + -4) = 0;
                  *(undefined8 *)(puVar11 + 4) = 0;
                  *(undefined8 *)(puVar11 + 0xc) = 0;
                  *(undefined4 *)(puVar11 + 0x14) = 0;
                  *(undefined8 *)(puVar11 + 0x18) = 0x3f800000;
                  *(undefined8 *)(puVar11 + 0x20) = 0;
                  *(undefined8 *)(puVar11 + 0x28) = 0;
                  *(undefined8 *)(puVar11 + 0x30) = 0;
                  *(undefined8 *)(puVar11 + 0x38) = 0x3f800000;
                  *(undefined8 *)(puVar11 + 0x40) = 0;
                  *(undefined8 *)(puVar11 + 0x48) = 0;
                  *(undefined8 *)(puVar11 + 0x50) = 0;
                  *(undefined8 *)(puVar11 + 0x58) = 0x3f800000;
                  *(undefined8 *)(puVar11 + 0x60) = 0;
                  *(undefined8 *)(puVar11 + 0x68) = 0;
                  *(undefined8 *)(puVar11 + 0x70) = 0;
                  *(undefined8 *)(puVar11 + 0x78) = 0x3f800000;
                  *(undefined8 *)(puVar11 + 0x80) = 0;
                  *(undefined8 *)(puVar11 + 0x88) = 0;
                  *(undefined8 *)(puVar11 + 0x90) = 0;
                  *(undefined8 *)(puVar11 + 0x98) = 0x3f800000;
                  *(undefined8 *)(puVar11 + 0xa0) = 0;
                  *(undefined8 *)(puVar11 + 0xa8) = 0;
                  *(undefined8 *)(puVar11 + 0xb0) = 0;
                  *(undefined8 *)(puVar11 + 0xb8) = 0x3f800000;
                  *(undefined8 *)(puVar11 + 0xc0) = 0;
                  *(undefined8 *)(puVar11 + 200) = 0;
                  *(undefined8 *)(puVar11 + 0xd0) = 0;
                  *(undefined8 *)(puVar11 + 0xd8) = 0x3f800000;
                  *(undefined8 *)(puVar11 + 0xe0) = 0;
                  *(undefined8 *)(puVar11 + 0xe8) = 0;
                  *(undefined8 *)(puVar11 + 0xf0) = 0;
                  *(undefined8 *)(puVar11 + 0xf8) = 0x3f800000;
                  *(undefined8 *)(puVar11 + 0x100) = 0;
                  *(undefined8 *)(puVar11 + 0x108) = 0;
                  *(undefined8 *)(puVar11 + 0x110) = 0;
                  *(undefined8 *)(puVar11 + 0x118) = 0x3f800000;
                  *(undefined8 *)(puVar11 + 0x120) = 0;
                  *(undefined8 *)(puVar11 + 0x128) = 0;
                  *(undefined8 *)(puVar11 + 0x130) = 0;
                  *(undefined8 *)(puVar11 + 0x138) = 0x3f800000;
                  *(undefined8 *)(puVar11 + 0x140) = 0;
                  *(undefined8 *)(puVar11 + 0x148) = 0;
                  *(undefined8 *)(puVar11 + 0x150) = 0;
                  *(undefined8 *)(puVar11 + 0x158) = 0x3f800000;
                  *(undefined8 *)(puVar11 + 0x160) = 0;
                  *(undefined8 *)(puVar11 + 0x168) = 0;
                  *(undefined8 *)(puVar11 + 0x170) = 0;
                  *(undefined8 *)(puVar11 + 0x178) = 0x3f800000;
                  *(undefined8 *)(puVar11 + 0x180) = 0;
                  *(undefined8 *)(puVar11 + 0x188) = 0;
                  *(undefined8 *)(puVar11 + 400) = 0;
                  *(undefined8 *)(puVar11 + 0x198) = 0x3f800000;
                  *(undefined8 *)(puVar11 + 0x1a0) = 0;
                  *(undefined8 *)(puVar11 + 0x1a8) = 0;
                  *(undefined8 *)(puVar11 + 0x1b0) = 0;
                  *(undefined8 *)(puVar11 + 0x1b8) = 0x3f800000;
                  *(undefined8 *)(puVar11 + 0x1c0) = 0;
                  *(undefined8 *)(puVar11 + 0x1c8) = 0;
                  *(undefined8 *)(puVar11 + 0x1d0) = 0;
                  *(undefined8 *)(puVar11 + 0x1d8) = 0x3f800000;
                  *(undefined8 *)(puVar11 + 0x1e0) = 0;
                  *(undefined8 *)(puVar11 + 0x1e8) = 0;
                  *(undefined8 *)(puVar11 + 0x1f0) = 0;
                  *(undefined4 *)(puVar11 + 0x1f8) = 0x3f800000;
                  puVar11 = puVar11 + 0x200;
                  lVar14 = lVar14 + -1;
                } while (lVar14 != 0);
                local_10f8 = *(undefined8 *)(lVar18 + 0x2370);
                local_10f0 = *(float *)(lVar18 + 0x2378);
                local_ec = *(int *)(lVar18 + 0x36c);
                if (0 < local_ec) {
                  uStack_1190 = 0x180272ba7;
                  FUN_18063aed0(local_10ec,lVar18 + 0x370,(longlong)local_ec << 5);
                }
                if (((lVar20 != 0) && (*(int *)(lVar20 + 0x36c) == *(int *)(lVar18 + 0x36c))) &&
                   (*(longlong *)(lVar20 + 8) == *(longlong *)(lVar18 + 8))) {
                  fVar25 = *(float *)(lVar18 + 0x23b0) - *(float *)(lVar20 + 0x23b0);
                  fVar23 = auVar32._0_4_;
                  if ((fVar23 < fVar25) && (fVar25 <= 0.2)) {
                    fVar25 = (fVar22 - *(float *)(lVar20 + 0x23b0)) / fVar25;
                    local_1160 = (undefined1 *)CONCAT44(local_1160._4_4_,fVar25);
                    ppuVar15 = (undefined1 **)local_1140;
                    if (fVar23 <= fVar25) {
                      ppuVar15 = &local_1160;
                    }
                    ppuVar12 = (undefined1 **)&local_1168;
                    if (fVar25 <= local_1164) {
                      ppuVar12 = ppuVar15;
                    }
                    local_1168 = local_1164;
                    local_1140[0] = fVar23;
                    fVar25 = *(float *)ppuVar12;
                    auVar26 = ZEXT464((uint)fVar25);
                    local_10f0 = (*(float *)(lVar18 + 0x2378) - *(float *)(lVar20 + 0x2378)) *
                                 fVar25 + *(float *)(lVar20 + 0x2378);
                    local_10f8 = CONCAT44((*(float *)(lVar18 + 0x2374) - *(float *)(lVar20 + 0x2374)
                                          ) * fVar25 + *(float *)(lVar20 + 0x2374),
                                          (*(float *)(lVar18 + 0x2370) - *(float *)(lVar20 + 0x2370)
                                          ) * fVar25 + *(float *)(lVar20 + 0x2370));
                    if (0 < local_ec) {
                      lVar20 = lVar20 - lVar18;
                      local_1120 = auStack_10e8 + -lVar18;
                      local_1118 = local_10e4 + -lVar18;
                      local_1108 = local_10ec + -lVar18;
                      local_1138 = auStack_10e0 + -lVar18;
                      local_1160 = local_10d4 + -lVar18;
                      pfVar19 = (float *)(lVar18 + 0x38c);
                      local_1168 = -1.0;
                      do {
                        puVar7 = local_1118;
                        puVar6 = local_1120;
                        puVar11 = local_1138;
                        auVar27 = ZEXT464((uint)local_1164);
                        fVar25 = pfVar19[-6];
                        fVar22 = *(float *)(lVar20 + -0x18 + (longlong)pfVar19);
                        fVar23 = pfVar19[-5];
                        fVar33 = auVar26._0_4_;
                        fVar28 = *(float *)(lVar20 + -0x14 + (longlong)pfVar19);
                        fVar1 = *(float *)(lVar20 + -0x18 + (longlong)pfVar19);
                        fVar2 = *(float *)(lVar20 + -0x14 + (longlong)pfVar19);
                        *(float *)(local_1108 + -0x38c + (longlong)pfVar19) =
                             (pfVar19[-7] - *(float *)(lVar20 + -0x1c + (longlong)pfVar19)) * fVar33
                             + *(float *)(lVar20 + -0x1c + (longlong)pfVar19);
                        *(float *)(puVar6 + -0x38c + (longlong)pfVar19) =
                             (fVar25 - fVar22) * fVar33 + fVar1;
                        *(float *)(puVar7 + -0x38c + (longlong)pfVar19) =
                             (fVar23 - fVar28) * fVar33 + fVar2;
                        uStack_1190 = 0x180272dda;
                        uVar21 = FUN_180242260(*(undefined4 *)(lVar20 + -0x10 + (longlong)pfVar19),
                                               pfVar19[-4],auVar26._0_8_);
                        *(undefined4 *)(puVar11 + -0x38c + (longlong)pfVar19) = uVar21;
                        fVar25 = *(float *)(lVar20 + -0xc + (longlong)pfVar19);
                        fVar22 = *(float *)(lVar20 + -8 + (longlong)pfVar19);
                        auVar29 = ZEXT464((uint)fVar22);
                        fVar23 = *(float *)(lVar20 + -4 + (longlong)pfVar19);
                        auVar30 = ZEXT464((uint)fVar23);
                        auVar31 = ZEXT464((uint)*(float *)(lVar20 + (longlong)pfVar19));
                        auVar24 = vcmpss_avx(ZEXT416((uint)(fVar22 * pfVar19[-2] +
                                                            fVar25 * pfVar19[-3] +
                                                            fVar23 * pfVar19[-1] +
                                                           *(float *)(lVar20 + (longlong)pfVar19) *
                                                           *pfVar19)),auVar32._0_16_,1);
                        auVar24 = vblendvps_avx(auVar27._0_16_,ZEXT416((uint)local_1168),auVar24);
                        auVar27 = ZEXT1664(auVar24);
                        uStack_1190 = 0x180272e3f;
                        fVar25 = (float)FUN_180242260(fVar25,auVar24._0_4_ * pfVar19[-3],
                                                      auVar26._0_8_);
                        local_1160 = (undefined1 *)CONCAT44(local_1160._4_4_,fVar25);
                        uStack_1190 = 0x180272e5d;
                        fVar22 = (float)FUN_180242260(auVar29._0_8_,auVar27._0_4_ * pfVar19[-2],
                                                      auVar26._0_8_);
                        uStack_1190 = 0x180272e75;
                        fVar23 = (float)FUN_180242260(auVar30._0_8_,auVar27._0_4_ * pfVar19[-1],
                                                      auVar26._0_8_);
                        uStack_1190 = 0x180272e8c;
                        auVar27._0_8_ =
                             FUN_180242260(auVar31._0_8_,auVar27._0_4_ * *pfVar19,auVar26._0_8_);
                        auVar27._8_56_ = extraout_var;
                        auVar29 = ZEXT1664(auVar27._0_16_);
                        fVar25 = fVar22 * fVar22 + fVar25 * fVar25 + fVar23 * fVar23 +
                                 (float)auVar27._0_8_ * (float)auVar27._0_8_;
                        if (fVar25 < 0.0) {
                          uStack_1190 = 0x180272ec3;
                          auVar30._0_8_ = FUN_18061e150();
                          auVar30._8_56_ = extraout_var_00;
                          auVar24 = auVar30._0_16_;
                        }
                        else {
                          auVar24 = ZEXT416((uint)SQRT(fVar25));
                        }
                        auVar27 = ZEXT1664(auVar24);
                        uStack_1190 = 0x180272ed0;
                        sVar9 = thunk_FUN_180624430(auVar24._0_8_);
                        if ((sVar9 < 1) && (fVar25 = auVar27._0_4_, 1e-06 < fVar25)) {
                          *(float *)(((longlong)afStack_1468 - lVar18) + (longlong)pfVar19) =
                               local_1160._0_4_ / fVar25;
                          *(float *)((longlong)pfVar19 + (longlong)afStack_1468 + (4 - lVar18)) =
                               fVar22 / fVar25;
                          *(float *)((longlong)afStack_1468 + -lVar18 + 8 + (longlong)pfVar19) =
                               fVar23 / fVar25;
                          *(float *)((longlong)afStack_1468 + (0xc - lVar18) + (longlong)pfVar19) =
                               auVar29._0_4_ / fVar25;
                        }
                        iVar17 = iVar17 + 1;
                        pfVar19 = pfVar19 + 8;
                        param_2 = local_1110;
                      } while (iVar17 < local_ec);
                    }
                  }
                }
                uStack_1190 = 0x180272f8b;
                FUN_18063aed0(param_2,&local_10f8,0x1010);
                *(undefined1 *)(param_2 + 0x1010) = 1;
                goto LAB_180272f9c;
              }
            }
          }
        }
      }
    }
  }
  *(undefined1 *)(param_2 + 0x1010) = 0;
LAB_180272f9c:
  uStack_1190 = 0x180272fa6;
  ReleaseSRWLockShared(local_1128);
}



