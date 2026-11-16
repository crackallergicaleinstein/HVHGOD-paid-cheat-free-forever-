// FUN_18027f410 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18027f410 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18027f410(int *param_1,longlong param_2,longlong *param_3)

{
  float *pfVar1;
  byte bVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [32];
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  byte bVar12;
  int iVar13;
  ulonglong uVar14;
  uint uVar15;
  uint uVar16;
  longlong lVar17;
  float *pfVar18;
  int iVar19;
  longlong lVar20;
  int iVar21;
  int iVar22;
  float fVar23;
  undefined1 in_ZMM6 [64];
  undefined1 auVar24 [64];
  float fVar25;
  float fVar26;
  undefined1 auVar27 [64];
  float fVar28;
  undefined1 auVar29 [64];
  undefined1 auVar30 [64];
  undefined1 auVar31 [64];
  undefined1 auStackY_178 [32];
  int local_148;
  int local_144;
  longlong local_128;
  undefined8 uStack_120;
  float fStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 local_108;
  int iStack_104;
  int iStack_100;
  undefined4 uStack_fc;
  longlong local_f8;
  undefined1 (*local_f0) [16];
  int *local_e8;
  int local_e0;
  int local_dc;
  int local_d8;
  int local_d4;
  undefined1 local_d0 [16];
  undefined8 local_c0;
  undefined1 local_b8 [16];
  undefined1 (*local_a8) [32];
  ulonglong local_a0;
  undefined1 local_48 [16];
  
  local_48 = in_ZMM6._0_16_;
  local_a0 = DAT_1808d5f00 ^ (ulonglong)auStackY_178;
  if ((param_2 == 0) || (uVar4 = param_3[1], 0x7f < uVar4 - 1)) {
    param_1[0] = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
  }
  else {
    local_b8 = (undefined1  [16])0x0;
    local_a8 = (undefined1 (*) [32])0x0;
    auVar31 = ZEXT864(0);
    auVar29 = ZEXT864(0);
    auVar6 = vroundss_avx(ZEXT816(0),ZEXT416(*(uint *)(param_2 + 0x1c)),1);
    auVar30 = ZEXT1664(auVar6);
    iVar21 = 0;
    iVar22 = 0;
    local_e0 = 0;
    local_144 = 0;
    local_dc = 0;
    local_148 = 0;
    uVar14 = 0;
    local_e8 = param_1;
    if (uVar4 != 0) {
      lVar20 = *param_3;
      do {
        iVar13 = 0;
        bVar12 = *(byte *)(uVar14 + lVar20);
        uVar14 = uVar14 + 1;
        uVar16 = (uint)bVar12;
        if ((byte)(bVar12 + 0x3e) < 0x1e) {
          iVar19 = 1;
          uVar15 = 0x1f;
LAB_18027f525:
          uVar16 = uVar15 & uVar16;
          do {
            if ((uVar4 <= uVar14) || (bVar12 = *(byte *)(uVar14 + lVar20), (bVar12 & 0xc0) != 0x80))
            {
              uVar16 = 0xfffd;
              goto LAB_18027f584;
            }
            uVar14 = uVar14 + 1;
            uVar16 = bVar12 & 0x3f | uVar16 << 6;
            iVar13 = iVar13 + 1;
          } while (iVar13 < iVar19);
        }
        else {
          if ((byte)(bVar12 + 0x20) < 0x10) {
            iVar19 = 2;
            uVar15 = 0xf;
            goto LAB_18027f525;
          }
          if ((byte)(bVar12 + 0x10) < 5) {
            iVar19 = 3;
            uVar15 = 7;
            goto LAB_18027f525;
          }
          if (0x7f < bVar12) {
            uVar16 = 0xfffd;
          }
        }
        if (uVar16 == 10) {
          auVar29 = ZEXT1664(auVar31._0_16_);
          auVar30 = ZEXT464((uint)(auVar30._0_4_ + *(float *)(param_2 + 0x24)));
        }
        else if (0x1f < uVar16) {
LAB_18027f584:
          auVar29 = ZEXT1664(auVar29._0_16_);
          auVar30 = ZEXT1664(auVar30._0_16_);
          auVar31 = ZEXT1664(auVar31._0_16_);
          FUN_18042fec0(param_2,&local_f8,uVar16);
          fVar28 = auVar29._0_4_;
          local_e0 = local_144;
          local_dc = local_148;
          if ((local_f8 != 0) && (local_f0 != (undefined1 (*) [16])0x0)) {
            auVar6 = *local_f0;
            auVar24 = ZEXT1664(auVar6);
            fVar23 = auVar6._0_4_;
            fStack_118 = (float)*(undefined8 *)local_f0[1];
            fVar25 = fStack_118;
            uStack_114 = (undefined4)((ulonglong)*(undefined8 *)local_f0[1] >> 0x20);
            uVar3 = *(undefined4 *)(local_f0[1] + 8);
            auVar7 = vshufps_avx(auVar6,auVar6,0x55);
            auVar7 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(auVar7._0_4_ + fVar28)),1);
            iVar13 = (int)auVar7._0_4_;
            auVar7 = vshufps_avx(auVar6,auVar6,0xaa);
            auVar7 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(auVar30._0_4_ - auVar7._0_4_)),1);
            iVar19 = (int)auVar7._0_4_;
            auVar7 = vshufps_avx(auVar6,auVar6,0xff);
            auVar27 = ZEXT1664(auVar7);
            fVar26 = auVar7._0_4_;
            if ((fVar26 <= auVar31._0_4_) || (fStack_118 <= auVar31._0_4_)) {
              auVar29 = ZEXT464((uint)(fVar28 + fVar23));
              uStack_110 = uVar3;
            }
            else {
              local_128 = local_f8;
              uStack_120 = auVar6._0_8_;
              fStack_118 = auVar6._8_4_;
              uStack_114 = auVar6._12_4_;
              uStack_110 = (undefined4)*(undefined8 *)local_f0[1];
              uStack_10c = (undefined4)((ulonglong)*(undefined8 *)local_f0[1] >> 0x20);
              local_108 = uVar3;
              iStack_104 = iVar13;
              iStack_100 = iVar19;
              if ((undefined1 (*) [32])local_b8._8_8_ == local_a8) {
                FUN_180282d20(local_b8,local_b8._8_8_,&local_128);
                fVar28 = auVar29._0_4_;
                fVar23 = auVar24._0_4_;
                fVar26 = auVar27._0_4_;
              }
              else {
                auVar8._8_8_ = uStack_120;
                auVar8._0_8_ = local_f8;
                auVar8._16_4_ = fStack_118;
                auVar8._20_4_ = uStack_114;
                auVar8._24_4_ = uStack_110;
                auVar8._28_4_ = uStack_10c;
                *(undefined1 (*) [32])local_b8._8_8_ = auVar8;
                auVar6._4_4_ = iVar13;
                auVar6._0_4_ = uVar3;
                auVar6._8_4_ = iVar19;
                auVar6._12_4_ = uStack_fc;
                *(undefined1 (*) [16])*(undefined1 (*) [32])(local_b8._8_8_ + 0x20) = auVar6;
                local_b8._8_8_ = *(undefined1 (*) [32])(local_b8._8_8_ + 0x20) + 0x10;
              }
              if (iVar13 < iVar21) {
                iVar21 = iVar13;
              }
              if (iVar19 < iVar22) {
                iVar22 = iVar19;
              }
              if (local_144 < (int)fVar26 + iVar13) {
                local_144 = (int)fVar26 + iVar13;
              }
              if (local_148 < (int)fVar25 + iVar19) {
                local_148 = (int)fVar25 + iVar19;
              }
              auVar29 = ZEXT464((uint)(fVar28 + fVar23));
              local_e0 = local_144;
              local_dc = local_148;
            }
          }
        }
      } while (uVar14 < uVar4);
    }
    local_e0 = local_e0 - iVar21;
    local_dc = local_dc - iVar22;
    local_d0 = (undefined1  [16])0x0;
    local_c0 = 0;
    local_d8 = iVar21;
    local_d4 = iVar22;
    if ((((local_e0 < 1) || (local_dc < 1)) || (0x800 < local_e0)) || (0x100 < local_dc)) {
      param_1[0] = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      param_1[3] = 0;
      param_1[4] = 0;
      param_1[5] = 0;
      param_1[6] = 0;
      param_1[7] = 0;
      param_1[8] = 0;
      param_1[9] = 0;
      FUN_180113710(local_d0);
      if (local_b8._0_8_ != 0) {
        lVar20 = local_b8._0_8_;
        if ((0xfff < (ulonglong)((((longlong)local_a8 - local_b8._0_8_) / 0x30) * 0x30)) &&
           (lVar20 = *(longlong *)(local_b8._0_8_ + -8), 0x1f < (local_b8._0_8_ - lVar20) - 8U))
        goto LAB_18027fa07;
        FUN_1804547d0(lVar20);
      }
    }
    else {
      FUN_1801acf20(local_d0,(longlong)local_dc * (longlong)local_e0);
      uVar11 = local_c0;
      uVar9 = local_d0._0_8_;
      if (local_b8._0_8_ != local_b8._8_8_) {
        pfVar18 = (float *)(local_b8._0_8_ + 0x18);
        do {
          iVar13 = 0;
          if (0 < (int)*pfVar18) {
            do {
              iVar19 = 0;
              lVar20 = 0;
              if (0 < (int)pfVar18[-1]) {
                do {
                  lVar5 = *(longlong *)(pfVar18 + -6);
                  uVar4 = ((longlong)(int)pfVar18[1] +
                          lVar20 + (longlong)((int)pfVar18[2] + iVar13) *
                                   (longlong)*(int *)(lVar5 + 0x10)) * 4 + 3;
                  if (uVar4 < (ulonglong)(*(longlong *)(lVar5 + 0xb8) - *(longlong *)(lVar5 + 0xb0))
                     ) {
                    lVar17 = (longlong)
                             ((((((int)pfVar18[4] - iVar22) + iVar13) * local_e0 + (int)pfVar18[3])
                              - iVar21) + iVar19);
                    bVar12 = *(byte *)(lVar17 + local_d0._0_8_);
                    bVar2 = *(byte *)(*(longlong *)(lVar5 + 0xb0) + uVar4);
                    if (bVar12 < bVar2) {
                      bVar12 = bVar2;
                    }
                    *(byte *)(lVar17 + local_d0._0_8_) = bVar12;
                  }
                  iVar19 = iVar19 + 1;
                  lVar20 = lVar20 + 1;
                } while (iVar19 < (int)pfVar18[-1]);
              }
              iVar13 = iVar13 + 1;
            } while (iVar13 < (int)*pfVar18);
          }
          pfVar1 = pfVar18 + 6;
          pfVar18 = pfVar18 + 0xc;
        } while (pfVar1 != (float *)local_b8._8_8_);
      }
      *param_1 = local_e0;
      param_1[1] = local_dc;
      param_1[2] = local_d8;
      param_1[3] = local_d4;
      local_c0 = 0;
      uVar10 = local_d0._8_8_;
      local_d0 = ZEXT816(0);
      *(undefined8 *)(param_1 + 4) = uVar9;
      *(undefined8 *)(param_1 + 6) = uVar10;
      *(undefined8 *)(param_1 + 8) = uVar11;
      FUN_180113710(local_d0);
      if (local_b8._0_8_ != 0) {
        lVar20 = local_b8._0_8_;
        if ((0xfff < (ulonglong)((((longlong)local_a8 - local_b8._0_8_) / 0x30) * 0x30)) &&
           (lVar20 = *(longlong *)(local_b8._0_8_ + -8), 0x1f < (local_b8._0_8_ - lVar20) - 8U)) {
LAB_18027fa07:
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
        FUN_1804547d0(lVar20);
      }
    }
  }
}



