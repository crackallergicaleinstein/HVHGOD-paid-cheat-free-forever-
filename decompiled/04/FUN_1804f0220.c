// FUN_1804f0220 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804f0220 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1804f0220(longlong param_1)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  ushort uVar4;
  float *pfVar5;
  ulonglong *puVar6;
  undefined1 auVar7 [32];
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  longlong lVar12;
  longlong lVar13;
  uint uVar14;
  ulonglong uVar15;
  undefined1 (*pauVar16) [32];
  ulonglong *puVar17;
  longlong lVar18;
  int iVar19;
  int iVar20;
  uint uVar21;
  short sVar22;
  undefined1 (*pauVar23) [32];
  uint *puVar24;
  longlong lVar25;
  uint uVar26;
  longlong lVar27;
  int iVar28;
  ulonglong *puVar29;
  int iVar30;
  uint uVar31;
  undefined1 auVar32 [16];
  float fVar33;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined8 unaff_XMM6_Qa;
  undefined8 unaff_XMM6_Qb;
  undefined1 auVar37 [16];
  undefined8 unaff_XMM7_Qa;
  undefined8 unaff_XMM7_Qb;
  undefined1 auVar38 [16];
  undefined8 unaff_XMM8_Qa;
  undefined8 unaff_XMM8_Qb;
  undefined8 unaff_XMM9_Qa;
  undefined8 unaff_XMM9_Qb;
  undefined8 unaff_XMM10_Qa;
  undefined8 unaff_XMM10_Qb;
  undefined8 unaff_XMM11_Qa;
  undefined8 unaff_XMM11_Qb;
  undefined8 unaff_XMM12_Qa;
  undefined8 unaff_XMM12_Qb;
  undefined8 unaff_XMM13_Qa;
  undefined8 unaff_XMM13_Qb;
  undefined1 auStack_1a8 [32];
  short local_188;
  int local_184;
  short local_180;
  undefined1 local_178 [16];
  ulonglong *local_168;
  uint local_160;
  longlong local_158;
  longlong local_150;
  int local_148;
  uint local_144;
  longlong local_140;
  undefined1 local_138 [4];
  float afStack_134 [3];
  longlong local_128 [2];
  undefined1 local_118 [16];
  undefined4 local_108;
  longlong local_100;
  undefined1 local_f8 [16];
  undefined4 local_e8;
  longlong local_e0;
  undefined1 local_d8 [16];
  undefined4 local_c8;
  longlong local_c0;
  ulonglong local_b8;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  
  local_b8 = DAT_1808d5f00 ^ (ulonglong)auStack_1a8;
  iVar30 = 0;
  uVar31 = 0;
  _local_138 = ZEXT816(0);
  local_180 = *(short *)(param_1 + 0x232);
  lVar25 = *(longlong *)(param_1 + 0x1a8);
  sVar22 = *(short *)(param_1 + 0x22e);
  local_128[0]._0_4_ = 0;
  local_128[1] = 0;
  local_108 = 0;
  local_100 = 0;
  local_140 = DAT_180bb8ae8;
  local_e8 = 0;
  local_e0 = 0;
  uVar21 = *(int *)(param_1 + 0x6c) * 2 + 0x23 >> 3 & 0xfffffffc;
  local_c8 = 0;
  local_c0 = 0;
  local_188 = sVar22;
  local_158 = param_1;
  local_150 = lVar25;
  local_144 = uVar21;
  local_118 = _local_138;
  local_f8 = _local_138;
  local_d8 = _local_138;
  FUN_1804d0ea0(DAT_180bb8ae8 + 0x2ad0,uVar21 * 5);
  lVar13 = local_140;
  FUN_18063ab10(*(undefined8 *)(local_140 + 0x2ad8),0,(longlong)(int)(uVar21 * 5));
  lVar12 = local_140;
  lVar27 = local_150;
  local_128[1] = *(longlong *)(lVar13 + 0x2ad8);
  local_100 = (int)uVar21 + local_128[1];
  local_184 = 0;
  local_e0 = (int)(uVar21 * 2) + local_128[1];
  local_168 = (ulonglong *)((int)(uVar21 * 4) + local_128[1]);
  local_c0 = (int)(uVar21 * 3) + local_128[1];
  if (0 < *(int *)(param_1 + 0x6c)) {
    local_178._0_8_ = 0;
    local_160 = 1;
    do {
      if ((*(uint *)(*(longlong *)(param_1 + 0x58) + ((longlong)local_184 >> 5) * 4) & local_160) !=
          0) {
        puVar24 = (uint *)(local_178._0_8_ + *(longlong *)(param_1 + 0x18));
        iVar28 = 0;
        local_148 = (0 < sVar22) + 1;
        do {
          lVar25 = *(longlong *)(lVar25 + 0x10);
          lVar13 = 0x66;
          if (iVar28 != 0) {
            lVar13 = 0x68;
          }
          uVar4 = *(ushort *)(lVar13 + (longlong)puVar24);
          lVar13 = (ulonglong)uVar4 * 0x20;
          iVar20 = *(int *)(lVar13 + lVar25);
          if (0 < iVar20) {
            lVar18 = *(longlong *)(lVar13 + 8 + lVar25);
            if ((*(int *)(lVar18 + -0x20 + (longlong)iVar20 * 0x48) == 0) &&
               (*(longlong *)(lVar18 + -0x18 + (longlong)iVar20 * 0x48) == 0)) {
              *(int *)(lVar13 + lVar25) = iVar20 + -1;
              iVar20 = iVar20 + -1;
            }
          }
          if (iVar20 == 1) {
            if ((*puVar24 & 0x100) == 0) {
              if (local_188 < 1) {
                auVar35 = vmaxss_avx(ZEXT416(puVar24[0x13]),ZEXT416(puVar24[0x14]));
                fVar33 = auVar35._0_4_;
              }
              else if (iVar28 == 0) {
                auVar35 = vmaxss_avx(ZEXT416(puVar24[0x12]),ZEXT416(puVar24[0x14]));
                fVar33 = auVar35._0_4_;
              }
              else {
                fVar33 = (float)puVar24[0x13];
              }
              if ((float)puVar24[0xb] < fVar33) goto LAB_1804f0571;
            }
            if ((local_180 < 1) || (iVar20 = 0, *(short *)(local_158 + 0x232) <= local_184)) {
              iVar20 = 1;
            }
            if ((local_188 < 1) || (iVar19 = 0, iVar28 != 0)) {
              iVar19 = 2;
            }
            uVar15 = (ulonglong)(uint)(iVar19 + iVar20);
            lVar18 = uVar15 * 0x20;
            pfVar1 = afStack_134 + uVar15 * 8;
            if ((int)local_128[uVar15 * 4] == 0) {
              *(undefined4 *)(local_138 + lVar18) = 0x7f7fffff;
              *pfVar1 = 3.4028235e+38;
              afStack_134[uVar15 * 8 + 1] = -3.4028235e+38;
              afStack_134[uVar15 * 8 + 2] = -3.4028235e+38;
            }
            *(uint *)(local_128[uVar15 * 4 + 1] + (ulonglong)(uVar4 >> 5) * 4) =
                 *(uint *)(local_128[uVar15 * 4 + 1] + (ulonglong)(uVar4 >> 5) * 4) |
                 1 << (uVar4 & 0x1f);
            *(int *)(local_128 + uVar15 * 4) = (int)local_128[uVar15 * 4] + 1;
            pfVar5 = *(float **)(lVar13 + 8 + lVar25);
            fVar33 = pfVar5[1];
            fVar2 = pfVar5[2];
            fVar3 = pfVar5[3];
            if (*pfVar5 < *(float *)(local_138 + lVar18)) {
              *(float *)(local_138 + lVar18) = *pfVar5;
            }
            if (fVar33 < *pfVar1) {
              *pfVar1 = fVar33;
            }
            if (afStack_134[uVar15 * 8 + 1] < fVar2) {
              afStack_134[uVar15 * 8 + 1] = fVar2;
            }
            if (afStack_134[uVar15 * 8 + 2] < fVar3) {
              afStack_134[uVar15 * 8 + 2] = fVar3;
            }
            uVar31 = uVar31 | 1 << iVar19 + iVar20;
          }
LAB_1804f0571:
          iVar28 = iVar28 + 1;
          lVar25 = local_150;
        } while (iVar28 < local_148);
        *(undefined2 *)(puVar24 + 0x19) = 0xffff;
        param_1 = local_158;
        sVar22 = local_188;
      }
      local_184 = local_184 + 1;
      local_160 = local_160 << 1 | (uint)((int)local_160 < 0);
      local_178._0_8_ = local_178._0_8_ + 0x78;
    } while (local_184 < *(int *)(param_1 + 0x6c));
    if (uVar31 != 0) {
      local_38 = unaff_XMM6_Qa;
      uStack_30 = unaff_XMM6_Qb;
      local_48 = unaff_XMM7_Qa;
      uStack_40 = unaff_XMM7_Qb;
      iVar28 = *(int *)(local_140 + 0x2394);
      iVar20 = *(int *)(local_150 + 4) + -2;
      local_58 = unaff_XMM8_Qa;
      uStack_50 = unaff_XMM8_Qb;
      local_68 = unaff_XMM9_Qa;
      uStack_60 = unaff_XMM9_Qb;
      local_78 = unaff_XMM10_Qa;
      uStack_70 = unaff_XMM10_Qb;
      local_88 = unaff_XMM11_Qa;
      uStack_80 = unaff_XMM11_Qb;
      local_98 = unaff_XMM12_Qa;
      uStack_90 = unaff_XMM12_Qb;
      local_a8 = unaff_XMM13_Qa;
      uStack_a0 = unaff_XMM13_Qb;
      if (iVar28 < iVar20) {
        if (iVar28 == 0) {
          iVar28 = 8;
        }
        else {
          iVar28 = iVar28 / 2 + iVar28;
        }
        iVar19 = iVar20;
        if (iVar20 < iVar28) {
          iVar19 = iVar28;
        }
        FUN_1804ec0d0(local_140 + 0x2390,iVar19);
      }
      *(int *)(lVar12 + 0x2390) = iVar20;
      pauVar23 = *(undefined1 (**) [32])(lVar12 + 0x2398);
      uVar21 = *(int *)(lVar27 + 4) - 1;
      if (1 < (int)uVar21) {
        uVar31 = 2;
        do {
          lVar25 = (longlong)(int)uVar31;
          uVar26 = uVar31 & 0x1f;
          uVar14 = uVar21 & 0x1f;
          if ((int)(uVar31 | 0x1f) < (int)uVar21) {
            uVar14 = 0x1f;
          }
          uVar31 = uVar31 + 0x20 & 0xffffffe0;
          puVar24 = (uint *)((longlong)local_168 + (lVar25 >> 5) * 4);
          *puVar24 = *puVar24 | (int)(1L << (ulonglong)(uVar14 + 1)) - 1U & -(int)(1L << uVar26);
        } while ((int)uVar31 <= (int)uVar21);
      }
      puVar29 = (ulonglong *)(local_128 + 1);
      uVar15 = (ulonglong)(*(ushort *)(param_1 + 0x23a) >> 5);
      *(uint *)((longlong)local_168 + uVar15 * 4) =
           *(uint *)((longlong)local_168 + uVar15 * 4) &
           ~(1 << (*(ushort *)(param_1 + 0x23a) & 0x1f));
      local_178 = *(undefined1 (*) [16])(param_1 + 0x164);
      uVar11 = local_178._12_4_;
      uVar10 = local_178._8_4_;
      uVar9 = local_178._4_4_;
      uVar8 = local_178._0_4_;
      uVar21 = 0;
      local_184 = *(int *)(lVar27 + 4) - ((0 < local_188) + 2);
      iVar28 = local_184;
LAB_1804f0740:
      do {
        iVar20 = (int)puVar29[-1];
        if (iVar20 != 0) {
          local_178 = *(undefined1 (*) [16])(puVar29 + -3);
          if (((uVar21 & 1) == 0) || (local_180 < 1)) {
            auVar35 = vminss_avx(ZEXT416((uint)local_178._0_4_),ZEXT416((uint)uVar8));
          }
          else {
            auVar35 = ZEXT416((uint)local_178._0_4_);
          }
          if (((uVar21 & 2) == 0) || (local_188 < 1)) {
            auVar38 = vminss_avx(ZEXT416((uint)local_178._4_4_),ZEXT416((uint)uVar9));
          }
          else {
            auVar38 = ZEXT416((uint)local_178._4_4_);
          }
          if (((uVar21 & 1) == 0) || ((*(uint *)(local_158 + 4) & 0x10000) != 0)) {
            auVar37 = ZEXT416((uint)local_178._8_4_);
          }
          else {
            auVar37 = vmaxss_avx(ZEXT416((uint)local_178._8_4_),ZEXT416((uint)uVar10));
          }
          if (((uVar21 & 2) == 0) || ((*(uint *)(local_158 + 4) & 0x20000) != 0)) {
            auVar36 = ZEXT416((uint)local_178._12_4_);
          }
          else {
            auVar36 = vmaxss_avx(ZEXT416((uint)local_178._12_4_),ZEXT416((uint)uVar11));
          }
          iVar28 = iVar28 - iVar20;
          lVar25 = 0;
          uVar31 = (int)local_144 >> 2;
          if ((0 < (int)uVar31) && (1 < uVar31)) {
            puVar6 = (ulonglong *)*puVar29;
            puVar17 = (ulonglong *)((longlong)local_168 + (longlong)(int)(uVar31 - 1) * 4);
            if ((((ulonglong *)((longlong)puVar6 + (longlong)(int)(uVar31 - 1) * 4) < local_168) ||
                (puVar17 < puVar6)) && ((puVar29 < local_168 || (puVar17 < puVar29)))) {
              if (0x1f < uVar31) {
                uVar14 = uVar31 & 0x8000001f;
                if ((int)uVar14 < 0) {
                  uVar14 = (uVar14 - 1 | 0xffffffe0) + 1;
                }
                pauVar16 = (undefined1 (*) [32])(local_168 + 8);
                do {
                  lVar25 = lVar25 + 0x20;
                  auVar7 = vpandn_avx2(*(undefined1 (*) [32])
                                        ((-0x40 - (longlong)local_168) + (longlong)pauVar16 +
                                        (longlong)puVar6),pauVar16[-2]);
                  pauVar16[-2] = auVar7;
                  auVar7 = vpandn_avx2(*(undefined1 (*) [32])
                                        ((-0x20 - (longlong)local_168) + (longlong)pauVar16 +
                                        (longlong)puVar6),pauVar16[-1]);
                  pauVar16[-1] = auVar7;
                  auVar7 = vpandn_avx2(*(undefined1 (*) [32])
                                        (((longlong)pauVar16 - (longlong)local_168) +
                                        (longlong)puVar6),*pauVar16);
                  *pauVar16 = auVar7;
                  auVar7 = vpandn_avx2(*(undefined1 (*) [32])
                                        ((0x20 - (longlong)local_168) + (longlong)pauVar16 +
                                        (longlong)puVar6),pauVar16[1]);
                  pauVar16[1] = auVar7;
                  pauVar16 = pauVar16 + 4;
                } while (lVar25 < (int)(uVar31 - uVar14));
                if (((byte)uVar31 & 0x1f) < 2) goto LAB_1804f0926;
              }
              uVar15 = *puVar29;
              uVar14 = uVar31 & 0x80000001;
              if ((int)uVar14 < 0) {
                uVar14 = (uVar14 - 1 | 0xfffffffe) + 1;
              }
              puVar17 = (ulonglong *)((longlong)local_168 + lVar25 * 4);
              do {
                lVar25 = lVar25 + 2;
                auVar32._8_8_ = 0;
                auVar32._0_8_ =
                     *(ulonglong *)((uVar15 - (longlong)local_168) + -8 + (longlong)(puVar17 + 1));
                auVar34._8_8_ = 0;
                auVar34._0_8_ = *puVar17;
                auVar32 = vpandn_avx(auVar32,auVar34);
                *puVar17 = auVar32._0_8_;
                puVar17 = puVar17 + 1;
              } while (lVar25 < (int)(uVar31 - uVar14));
            }
          }
LAB_1804f0926:
          if (lVar25 < (int)uVar31) {
            lVar27 = (int)uVar31 - lVar25;
            puVar24 = (uint *)((longlong)local_168 + lVar25 * 4);
            do {
              *puVar24 = *puVar24 &
                         ~*(uint *)((*puVar29 - (longlong)local_168) + -4 + (longlong)(puVar24 + 1))
              ;
              lVar27 = lVar27 + -1;
              puVar24 = puVar24 + 1;
            } while (lVar27 != 0);
          }
          uVar31 = 0;
          if (0 < *(int *)(local_150 + 4)) {
            uVar14 = 1;
            lVar25 = 0;
            pauVar16 = pauVar23;
            do {
              pauVar23 = pauVar16;
              if (iVar20 == 0) break;
              uVar26 = *(uint *)(*puVar29 + ((longlong)(int)uVar31 >> 5) * 4);
              if ((uVar26 & uVar14) != 0) {
                iVar20 = iVar20 + -1;
                *(uint *)(*puVar29 + ((longlong)(int)uVar31 >> 5) * 4) =
                     uVar26 & ~(1 << (uVar31 & 0x1f));
                lVar27 = *(longlong *)(local_150 + 0x10);
                auVar32 = vinsertps_avx(auVar35,auVar38,0x10);
                auVar32 = vinsertps_avx(auVar32,auVar37,0x20);
                local_178 = vinsertps_avx(auVar32,auVar36,0x30);
                **(undefined1 (**) [16])(lVar27 + 8 + lVar25) = local_178;
                pauVar23 = pauVar16 + 1;
                *pauVar16 = *(undefined1 (*) [32])(lVar27 + lVar25);
              }
              uVar31 = uVar31 + 1;
              uVar14 = uVar14 << 1 | (uint)((int)uVar14 < 0);
              lVar25 = lVar25 + 0x20;
              pauVar16 = pauVar23;
            } while ((int)uVar31 < *(int *)(local_150 + 4));
          }
          lVar27 = local_150;
          local_184 = iVar28;
        }
        if ((uVar21 == 1) && (0 < local_188)) {
          uVar21 = 2;
          puVar29 = puVar29 + 4;
          *pauVar23 = *(undefined1 (*) [32])
                       ((ulonglong)*(ushort *)(local_158 + 0x23a) * 0x20 +
                       *(longlong *)(lVar27 + 0x10));
          pauVar23 = pauVar23 + 1;
          iVar28 = local_184;
          goto LAB_1804f0740;
        }
        uVar21 = uVar21 + 1;
        puVar29 = puVar29 + 4;
      } while ((int)uVar21 < 4);
      iVar20 = *(int *)(lVar27 + 4);
      if (0 < iVar20) {
        lVar25 = 0;
        uVar21 = 1;
        do {
          if (iVar28 == 0) break;
          pauVar16 = pauVar23;
          if ((*(uint *)((longlong)local_168 + ((longlong)iVar30 >> 5) * 4) & uVar21) != 0) {
            pauVar16 = pauVar23 + 1;
            iVar28 = iVar28 + -1;
            *pauVar23 = *(undefined1 (*) [32])(*(longlong *)(lVar27 + 0x10) + lVar25);
          }
          iVar20 = *(int *)(lVar27 + 4);
          iVar30 = iVar30 + 1;
          uVar21 = uVar21 << 1 | (uint)((int)uVar21 < 0);
          lVar25 = lVar25 + 0x20;
          pauVar23 = pauVar16;
        } while (iVar30 < iVar20);
      }
      FUN_18063aed0(*(longlong *)(lVar27 + 0x10) + 0x40,*(undefined8 *)(local_140 + 0x2398),
                    (longlong)(iVar20 + -2) << 5);
    }
  }
}



