// FUN_1802d1e00 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802d1e00 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1802d1e00(undefined8 param_1,float *param_2,float param_3)

{
  float fVar1;
  float fVar2;
  undefined1 auVar3 [16];
  float fVar4;
  float fVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  float *pfVar10;
  float *pfVar11;
  uint uVar12;
  float *pfVar13;
  longlong lVar14;
  undefined8 *puVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined8 unaff_XMM7_Qa;
  undefined8 unaff_XMM7_Qb;
  undefined1 auVar20 [64];
  undefined8 unaff_XMM8_Qa;
  undefined8 unaff_XMM8_Qb;
  undefined1 auVar21 [64];
  float fVar22;
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
  undefined8 unaff_XMM14_Qa;
  undefined8 unaff_XMM14_Qb;
  float fVar23;
  undefined8 unaff_XMM15_Qa;
  undefined8 unaff_XMM15_Qb;
  undefined1 auStack_788 [32];
  undefined **local_768;
  char *local_760;
  float local_758 [2];
  undefined8 local_750;
  float fStack_748;
  float fStack_744;
  undefined8 local_740;
  undefined8 local_730;
  float fStack_728;
  undefined4 uStack_724;
  undefined4 uStack_720;
  float fStack_71c;
  float fStack_718;
  float fStack_714;
  ULONGLONG local_710;
  undefined8 uStack_708;
  float local_700;
  float fStack_6fc;
  float local_6f8;
  float local_6f0;
  float fStack_6ec;
  float local_6e8;
  char local_6d8 [1536];
  ulonglong local_d8;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
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
  
  pfVar11 = DAT_180cc9ab0;
  local_d8 = DAT_1808d5f00 ^ (ulonglong)auStack_788;
  pfVar13 = DAT_180cc9aa8;
  if (DAT_180cc9aa8 == DAT_180cc9ab0) {
LAB_1802d1ec7:
    if (pfVar13 == pfVar11) goto LAB_1802d1ee7;
  }
  else {
    do {
      if ((0.2 < param_3 - pfVar13[3]) || (param_3 - pfVar13[3] < -0.15)) break;
      pfVar13 = pfVar13 + 0xc;
    } while (pfVar13 != DAT_180cc9ab0);
    if (pfVar13 == DAT_180cc9ab0) goto LAB_1802d1ec7;
    pfVar10 = pfVar13 + 0xc;
    if (pfVar10 != DAT_180cc9ab0) {
      do {
        if ((param_3 - pfVar10[3] <= 0.2) && (-0.15 <= param_3 - pfVar10[3])) {
          uVar6 = *(undefined8 *)(pfVar10 + 2);
          uVar7 = *(undefined8 *)(pfVar10 + 4);
          uVar8 = *(undefined8 *)(pfVar10 + 6);
          *(undefined8 *)pfVar13 = *(undefined8 *)pfVar10;
          *(undefined8 *)(pfVar13 + 2) = uVar6;
          *(undefined8 *)(pfVar13 + 4) = uVar7;
          *(undefined8 *)(pfVar13 + 6) = uVar8;
          uVar6 = *(undefined8 *)(pfVar10 + 10);
          *(undefined8 *)(pfVar13 + 8) = *(undefined8 *)(pfVar10 + 8);
          *(undefined8 *)(pfVar13 + 10) = uVar6;
          pfVar13 = pfVar13 + 0xc;
        }
        pfVar10 = pfVar10 + 0xc;
      } while (pfVar10 != pfVar11);
      goto LAB_1802d1ec7;
    }
  }
  lVar14 = (longlong)DAT_180cc9ab0 - (longlong)pfVar11;
  FUN_18063aed0(pfVar13,pfVar11,lVar14);
  DAT_180cc9ab0 = (float *)(lVar14 + (longlong)pfVar13);
LAB_1802d1ee7:
  puVar9 = DAT_180cc9ac8;
  pfVar13 = (float *)0x0;
  fVar17 = -3.4028235e+38;
  pfVar11 = DAT_180cc9aa8;
  if (DAT_180cc9aa8 != DAT_180cc9ab0) {
    do {
      if (*(char *)(pfVar11 + 4) == '\0') {
LAB_1802d1f23:
        fVar22 = pfVar11[3];
        if (fVar17 < fVar22) {
LAB_1802d1f45:
          pfVar13 = pfVar11;
          fVar17 = fVar22;
        }
        else if (fVar22 == fVar17) {
          if (pfVar13 != (float *)0x0) {
            if (*(char *)(pfVar13 + 4) != '\0') {
              if (*(char *)(pfVar11 + 4) == '\0') goto LAB_1802d1f45;
            }
          }
        }
      }
      else if (param_3 - pfVar11[3] <= 0.15) goto LAB_1802d1f23;
      pfVar11 = pfVar11 + 0xc;
    } while (pfVar11 != DAT_180cc9ab0);
    if (pfVar13 != (float *)0x0) {
      local_68 = unaff_XMM9_Qa;
      uStack_60 = unaff_XMM9_Qb;
      fVar22 = 1.0;
      fVar17 = (param_2[1] - pfVar13[1]) * (param_2[1] - pfVar13[1]) +
               (*param_2 - *pfVar13) * (*param_2 - *pfVar13) +
               (param_2[2] - pfVar13[2]) * (param_2[2] - pfVar13[2]);
      if (fVar17 < 1.0) {
      }
      if (2.6843546e+08 < fVar17) {
      }
      local_48 = unaff_XMM7_Qa;
      uStack_40 = unaff_XMM7_Qb;
      local_b8 = unaff_XMM14_Qa;
      uStack_b0 = unaff_XMM14_Qb;
      *(undefined1 *)(pfVar13 + 4) = 1;
      puVar9 = DAT_180cc9a40;
      fVar17 = *param_2 - pfVar13[8];
      local_c8 = unaff_XMM15_Qa;
      uStack_c0 = unaff_XMM15_Qb;
      fVar23 = param_2[1] - pfVar13[9];
      fVar18 = param_2[2] - pfVar13[10];
      local_58 = unaff_XMM8_Qa;
      uStack_50 = unaff_XMM8_Qb;
      local_78 = unaff_XMM10_Qa;
      uStack_70 = unaff_XMM10_Qb;
      local_88 = unaff_XMM11_Qa;
      uStack_80 = unaff_XMM11_Qb;
      local_98 = unaff_XMM12_Qa;
      uStack_90 = unaff_XMM12_Qb;
      local_6f8 = fVar18;
      local_700 = fVar17;
      fStack_6fc = fVar23;
      local_a8 = unaff_XMM13_Qa;
      uStack_a0 = unaff_XMM13_Qb;
      if (DAT_180cc9a38 != DAT_180cc9a40) {
        lVar14 = *(longlong *)(pfVar13 + 6);
        puVar15 = DAT_180cc9a38;
        do {
          if ((lVar14 != 0) && (puVar15[5] == lVar14)) {
            local_6f0 = *(float *)((longlong)puVar15 + 0xc) - pfVar13[8];
            local_6e8 = *(float *)((longlong)puVar15 + 0x14) - pfVar13[10];
            fStack_6ec = *(float *)(puVar15 + 2) - pfVar13[9];
            fVar18 = fVar23 * fVar23 + fVar17 * fVar17 + fVar18 * fVar18;
            fVar19 = fStack_6ec * fStack_6ec + local_6f0 * local_6f0 + local_6e8 * local_6e8;
            if ((fVar22 <= fVar18) && (fVar22 <= fVar19)) {
              pfVar11 = &local_700;
              if (fVar18 <= fVar19) {
                pfVar11 = &local_6f0;
              }
              auVar3 = vmaxss_avx(ZEXT416((uint)fVar19),ZEXT416((uint)fVar18));
              fVar1 = pfVar11[2];
              pfVar10 = &local_6f0;
              if (fVar18 <= fVar19) {
                pfVar10 = &local_700;
              }
              local_740 = *(undefined8 *)pfVar11;
              local_758[0] = pfVar10[2];
              local_750 = *(undefined8 *)pfVar10;
              if (auVar3._0_4_ < 0.0) {
                auVar20 = ZEXT1664(ZEXT416((uint)fVar19));
                auVar21 = ZEXT1664(ZEXT416((uint)fVar18));
                fVar16 = (float)FUN_18061e150();
                fVar18 = auVar21._0_4_;
                fVar19 = auVar20._0_4_;
              }
              else {
                fVar16 = SQRT(auVar3._0_4_);
              }
              fVar16 = fVar22 / fVar16;
              fVar2 = local_750._4_4_ * fVar16 * local_740._4_4_ +
                      (float)local_750 * fVar16 * (float)local_740 + local_758[0] * fVar1 * fVar16;
              if ((0.0 < fVar2) &&
                 (fVar4 = (float)local_750 - fVar2 * fVar16 * (float)local_740,
                 fVar5 = local_750._4_4_ - fVar2 * fVar16 * local_740._4_4_,
                 local_758[0] = local_758[0] - fVar2 * fVar1 * fVar16,
                 fVar5 * fVar5 + fVar4 * fVar4 + local_758[0] * local_758[0] <= fVar22)) {
                if (fVar19 < fVar18) {
                  *(undefined8 *)((longlong)puVar15 + 0xc) = *(undefined8 *)param_2;
                  *(float *)((longlong)puVar15 + 0x14) = param_2[2];
                }
              }
            }
            fVar18 = local_6f8;
          }
          puVar15 = puVar15 + 6;
        } while (puVar15 != puVar9);
      }
      pfVar11 = local_758;
      local_730 = *(undefined8 *)pfVar13;
      fStack_728 = pfVar13[2];
      uStack_724 = (undefined4)*(undefined8 *)param_2;
      uStack_720 = (undefined4)((ulonglong)*(undefined8 *)param_2 >> 0x20);
      fStack_71c = param_2[2];
      if (0.05 <= DAT_180b0c734) {
        pfVar11 = &DAT_180b0c734;
      }
      local_758[1] = 5.0;
      local_758[0] = 0.05;
      pfVar10 = local_758 + 1;
      if (DAT_180b0c734 <= 5.0) {
        pfVar10 = pfVar11;
      }
      fStack_718 = param_3;
      fStack_714 = *pfVar10;
      local_710 = GetTickCount64();
      puVar9 = DAT_180cc9a40;
      uStack_708 = *(undefined8 *)(pfVar13 + 6);
      if (DAT_180cc9a40 == DAT_180cc9a48) {
        FUN_180282d20(&DAT_180cc9a38,DAT_180cc9a40,&local_730);
      }
      else {
        *DAT_180cc9a40 = local_730;
        puVar9[1] = CONCAT44(uStack_724,fStack_728);
        puVar9[2] = CONCAT44(fStack_71c,uStack_720);
        puVar9[3] = CONCAT44(fStack_714,fStack_718);
        puVar9[4] = local_710;
        puVar9[5] = uStack_708;
        DAT_180cc9a40 = DAT_180cc9a40 + 6;
      }
      if (0x80 < (ulonglong)(((longlong)DAT_180cc9a40 - (longlong)DAT_180cc9a38) / 0x30)) {
        FUN_18063aed0(DAT_180cc9a38,DAT_180cc9a38 + 6,
                      (longlong)DAT_180cc9a40 - (longlong)(DAT_180cc9a38 + 6));
        DAT_180cc9a40 = DAT_180cc9a40 + -6;
      }
      LOCK();
      UNLOCK();
      uVar12 = DAT_180bb8ab8 + 1;
      if ((uVar12 != 1) && ((uVar12 & 0x3f) != 0)) {
        DAT_180bb8ab8 = DAT_180bb8ab8 + 1;
      }
      DAT_180bb8ab8 = DAT_180bb8ab8 + 1;
      FUN_18063ab10(local_6d8,0,0x600);
      local_768 = (undefined **)CONCAT44(local_768._4_4_,uVar12);
      FUN_18015ad60(local_6d8,0x600,0xffffffffffffffff,
                    "count=%u origin=weapon_fire endpoint=bullet_impact ledger_independent=1");
      local_768 = &PTR_180700558;
      if (local_6d8[0] != '\0') {
        local_768 = (undefined **)&DAT_1806bcfc0;
      }
      local_760 = local_6d8;
      FUN_1800f6900(0);
    }
  }
  local_750 = *(undefined8 *)param_2;
  fStack_748 = param_2[2];
  fStack_744 = param_3;
  if (DAT_180cc9ac8 == DAT_180cc9ad0) {
    FUN_180178c40(&DAT_180cc9ac0,DAT_180cc9ac8,&local_750);
  }
  else {
    *DAT_180cc9ac8 = local_750;
    puVar9[1] = CONCAT44(param_3,fStack_748);
    DAT_180cc9ac8 = DAT_180cc9ac8 + 2;
  }
  if (0x20 < (ulonglong)((longlong)DAT_180cc9ac8 - DAT_180cc9ac0 >> 4)) {
    FUN_18063aed0(DAT_180cc9ac0,DAT_180cc9ac0 + 0x10,
                  (longlong)DAT_180cc9ac8 - (DAT_180cc9ac0 + 0x10));
    DAT_180cc9ac8 = DAT_180cc9ac8 + -2;
  }
}



