// FUN_180424ef0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180424ef0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180424ef0(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  char cVar5;
  uint uVar6;
  char *pcVar7;
  char *pcVar8;
  int iVar9;
  byte *pbVar10;
  longlong lVar11;
  char cVar12;
  undefined8 *puVar13;
  bool bVar14;
  double dVar15;
  ulonglong uVar16;
  float fVar17;
  undefined8 unaff_XMM6_Qa;
  undefined8 unaff_XMM6_Qb;
  undefined1 auVar18 [64];
  float fVar19;
  float fVar20;
  undefined8 unaff_XMM7_Qa;
  undefined8 unaff_XMM7_Qb;
  undefined1 auVar21 [64];
  undefined1 auVar22 [16];
  undefined1 in_ZMM8 [64];
  undefined1 auVar23 [16];
  undefined1 in_ZMM9 [64];
  undefined8 unaff_XMM10_Qa;
  undefined8 unaff_XMM10_Qb;
  undefined1 auVar24 [64];
  undefined8 unaff_XMM11_Qa;
  undefined8 unaff_XMM11_Qb;
  undefined1 auVar25 [64];
  undefined8 unaff_XMM12_Qa;
  undefined8 unaff_XMM12_Qb;
  undefined1 auVar26 [64];
  undefined8 unaff_XMM13_Qa;
  undefined8 unaff_XMM13_Qb;
  undefined1 auVar27 [64];
  float fVar28;
  undefined8 unaff_XMM14_Qa;
  undefined1 auVar29 [16];
  undefined8 unaff_XMM14_Qb;
  undefined1 auVar30 [64];
  float fVar31;
  undefined8 unaff_XMM15_Qa;
  undefined1 auVar32 [16];
  undefined8 unaff_XMM15_Qb;
  undefined1 auVar33 [64];
  undefined1 auStack_198 [32];
  uint local_178;
  float local_168 [2];
  undefined8 *local_160;
  float local_158;
  uint local_154;
  undefined8 local_150;
  undefined8 local_148;
  undefined1 local_140 [24];
  char local_128;
  char local_127 [63];
  ulonglong local_e8;
  undefined8 local_d8;
  undefined8 uStack_d0;
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
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  
  local_e8 = DAT_1808d5f00 ^ (ulonglong)auStack_198;
  pcVar8 = (char *)0x0;
  local_158 = 0.0;
  pbVar10 = (byte *)*param_2;
  local_160 = param_2;
  if (pbVar10 != (byte *)0x0) {
    lVar11 = 0;
    puVar13 = param_2 + 1;
    do {
      lVar3 = 0;
      uVar6 = *pbVar10 - 100;
      if (uVar6 == 0) {
        uVar6 = (uint)pbVar10[1];
      }
      if (uVar6 == 0) {
        pcVar8 = (char *)*puVar13;
      }
      else {
        local_150 = pbVar10;
        local_148 = (char *)*puVar13;
        local_140._0_16_ = (undefined1  [16])0x0;
        if (pbVar10 != (byte *)0x0) {
          do {
            lVar1 = 0;
            do {
              lVar2 = lVar1;
              bVar14 = pbVar10[lVar2] == "style"[lVar2];
              if (!bVar14) goto LAB_180424fda;
              lVar1 = lVar2 + 1;
            } while (lVar2 + 1 != 6);
            bVar14 = pbVar10[lVar2] == "style"[lVar2];
LAB_180424fda:
            if (bVar14) {
              FUN_180424410();
            }
            else {
              FUN_180423a20(param_1);
            }
            pbVar10 = *(byte **)(local_140 + lVar3 * 8);
            lVar3 = lVar3 + 2;
          } while (pbVar10 != (byte *)0x0);
          param_2 = local_160;
        }
      }
      pbVar10 = *(byte **)(lVar11 + 0x10 + (longlong)param_2);
      lVar11 = lVar11 + 0x10;
      puVar13 = puVar13 + 2;
    } while (pbVar10 != (byte *)0x0);
    if (pcVar8 != (char *)0x0) {
      local_48 = unaff_XMM6_Qa;
      uStack_40 = unaff_XMM6_Qb;
      bVar14 = false;
      local_58 = unaff_XMM7_Qa;
      uStack_50 = unaff_XMM7_Qb;
      local_a8 = unaff_XMM12_Qa;
      uStack_a0 = unaff_XMM12_Qb;
      iVar9 = 0;
      *(undefined4 *)(param_1 + 0x9c10) = 0;
      auVar18 = ZEXT864(0);
      auVar21 = ZEXT864(0);
      local_b8 = unaff_XMM13_Qa;
      uStack_b0 = unaff_XMM13_Qb;
      local_168[0] = 0.0;
      local_160 = (undefined8 *)((ulonglong)local_160 & 0xffffffff00000000);
      auVar26 = ZEXT864(0);
      auVar27 = ZEXT864(0);
      if (*pcVar8 != '\0') {
        local_88 = unaff_XMM10_Qa;
        uStack_80 = unaff_XMM10_Qb;
        auVar24 = ZEXT464((uint)local_148._4_4_);
        local_98 = unaff_XMM11_Qa;
        uStack_90 = unaff_XMM11_Qb;
        auVar25 = ZEXT464((uint)(float)local_148);
        local_c8 = unaff_XMM14_Qa;
        uStack_c0 = unaff_XMM14_Qb;
        auVar30 = ZEXT464((uint)local_150);
        local_d8 = unaff_XMM15_Qa;
        uStack_d0 = unaff_XMM15_Qb;
        auVar33 = ZEXT464(local_150._4_4_);
        local_68 = in_ZMM8._0_16_;
        local_78 = in_ZMM9._0_16_;
        lVar11 = 0;
        cVar12 = '\0';
        do {
          if (((cVar12 + 0xbfU & 0xdf) == 0) && (lVar11 - 3U < 2)) {
            local_128 = '\0';
            cVar4 = *pcVar8;
            if (cVar4 != '\0') {
              do {
                lVar3 = FUN_180606b00(&DAT_18081e618,(int)cVar4);
                if ((lVar3 == 0) && (cVar5 = *pcVar8, cVar5 != ',')) break;
                cVar4 = pcVar8[1];
                pcVar8 = pcVar8 + 1;
                cVar5 = '\0';
              } while (cVar4 != '\0');
              if ((cVar5 != '\0') && ((byte)(cVar5 - 0x30U) < 2)) {
                local_128 = cVar5;
                local_127[0] = '\0';
                pcVar8 = pcVar8 + 1;
              }
            }
            if (local_128 == '\0') goto LAB_18042515e;
          }
          else {
LAB_18042515e:
            local_128 = '\0';
            cVar4 = *pcVar8;
            if (cVar4 != '\0') {
              do {
                lVar3 = FUN_180606b00(&DAT_18081e618,(int)cVar4);
                if ((lVar3 == 0) && (cVar5 = *pcVar8, cVar5 != ',')) break;
                cVar4 = pcVar8[1];
                pcVar8 = pcVar8 + 1;
                cVar5 = '\0';
              } while (cVar4 != '\0');
              if (cVar5 != '\0') {
                if ((((cVar5 - 0x2bU & 0xfc) == 0) && (cVar5 != ',')) ||
                   ((byte)(cVar5 - 0x30U) < 10)) {
                  pcVar8 = (char *)FUN_180422970(pcVar8,&local_128);
                }
                else {
                  local_128 = cVar5;
                  local_127[0] = '\0';
                  pcVar8 = pcVar8 + 1;
                }
              }
            }
            if (local_128 == '\0') break;
          }
          cVar4 = local_128;
          if (cVar12 == '\0') {
LAB_1804256df:
            if ((local_128 == 'M') || (local_128 == 'm')) {
              if (0 < *(int *)(param_1 + 0x9c10)) {
                FUN_1804225d0(param_1);
              }
              *(undefined4 *)(param_1 + 0x9c10) = 0;
              iVar9 = 0;
              lVar11 = 0;
LAB_180425717:
              cVar12 = cVar4;
              if ((cVar4 + 0xa6U & 0xdf) == 0) {
                if (0 < *(int *)(param_1 + 0x9c10)) {
                  local_168[0] = **(float **)(param_1 + 0x9c08);
                  auVar18 = ZEXT464((uint)local_168[0]);
                  fVar17 = (*(float **)(param_1 + 0x9c08))[1];
                  auVar21 = ZEXT464((uint)fVar17);
                  local_160 = (undefined8 *)CONCAT44(local_160._4_4_,fVar17);
                  FUN_1804225d0(param_1);
                  auVar26 = ZEXT1664(auVar18._0_16_);
                  auVar27 = ZEXT1664(auVar21._0_16_);
                }
                *(undefined4 *)(param_1 + 0x9c10) = 0;
                FUN_1804218b0(param_1,auVar18._0_8_,auVar21._0_8_);
                iVar9 = 0;
                lVar11 = 0;
              }
            }
            else {
              if (bVar14) goto LAB_180425717;
              cVar12 = '\0';
            }
            local_158 = (float)FUN_1804246e0(cVar12);
            if (local_158 == -NAN) {
              cVar12 = '\0';
              local_158 = 0.0;
            }
            goto LAB_18042578d;
          }
          pcVar7 = &local_128;
          if ((local_128 == '-') || (cVar5 = local_128, local_128 == '+')) {
            pcVar7 = local_127;
            cVar5 = local_127[0];
          }
          if ((9 < (byte)(cVar5 - 0x30U)) && (*pcVar7 != '.')) goto LAB_1804256df;
          if (lVar11 < 10) {
            dVar15 = (double)FUN_1804227e0(&local_128);
            *(float *)(local_140 + lVar11 * 4 + -0x10) = (float)dVar15;
            auVar33 = ZEXT464(local_150._4_4_);
            auVar30 = ZEXT464((uint)local_150);
            auVar24 = ZEXT464((uint)local_148._4_4_);
            auVar25 = ZEXT464((uint)(float)local_148);
            iVar9 = iVar9 + 1;
            lVar11 = lVar11 + 1;
          }
          if (iVar9 < (int)local_158) goto LAB_18042578d;
          fVar19 = auVar21._0_4_;
          fVar31 = auVar33._0_4_;
          auVar32 = auVar33._0_16_;
          fVar17 = auVar18._0_4_;
          fVar28 = auVar30._0_4_;
          auVar29 = auVar30._0_16_;
          switch((int)cVar12) {
          case 0x41:
          case 0x61:
            local_178 = (uint)(cVar12 == 'a');
            FUN_180424890(param_1,local_168,&local_160,&local_150);
            auVar18 = ZEXT464((uint)local_168[0]);
            auVar21 = ZEXT464((uint)local_160);
            auVar33 = ZEXT464(local_150._4_4_);
            auVar30 = ZEXT464((uint)local_150);
            auVar24 = ZEXT464((uint)local_148._4_4_);
            auVar25 = ZEXT464((uint)(float)local_148);
            auVar27 = ZEXT464((uint)local_160);
            auVar26 = ZEXT464((uint)local_168[0]);
            iVar9 = 0;
            lVar11 = 0;
            break;
          default:
            if (1 < lVar11) {
              local_168[0] = *(float *)(local_140 + lVar11 * 4 + -0x18);
              auVar18 = ZEXT464((uint)local_168[0]);
              uVar6 = *(uint *)(local_140 + lVar11 * 4 + -0x14);
              auVar21 = ZEXT464(uVar6);
              local_160 = (undefined8 *)CONCAT44(local_160._4_4_,uVar6);
              auVar27 = ZEXT464(uVar6);
              auVar26 = ZEXT464((uint)local_168[0]);
            }
            iVar9 = 0;
            lVar11 = 0;
            break;
          case 0x43:
          case 99:
            if (cVar12 == 'c') {
              uVar16 = (ulonglong)(uint)(fVar28 + fVar17);
              auVar26 = ZEXT464((uint)(auVar25._0_4_ + fVar17));
              auVar27 = ZEXT464((uint)(auVar24._0_4_ + fVar19));
              fVar17 = (float)local_140._0_4_ + fVar17;
              fVar19 = (float)local_140._4_4_ + fVar19;
            }
            else {
              uVar16 = auVar30._0_8_;
              auVar26 = ZEXT1664(auVar25._0_16_);
              auVar27 = ZEXT1664(auVar24._0_16_);
              fVar17 = (float)local_140._0_4_;
              fVar19 = (float)local_140._4_4_;
            }
            auVar21 = ZEXT464((uint)fVar19);
            auVar18 = ZEXT464((uint)fVar17);
            if (0 < *(int *)(param_1 + 0x9c10)) {
              FUN_1804218b0(param_1,uVar16);
              FUN_1804218b0(param_1,auVar26._0_8_,auVar27._0_8_);
              FUN_1804218b0(param_1,auVar18._0_8_,auVar21._0_8_);
            }
            local_168[0] = auVar18._0_4_;
            local_160 = (undefined8 *)CONCAT44(local_160._4_4_,auVar21._0_4_);
            iVar9 = 0;
            lVar11 = 0;
            break;
          case 0x48:
          case 0x68:
            if (cVar12 == 'h') {
              auVar18 = ZEXT464((uint)(fVar28 + fVar17));
              local_168[0] = fVar28 + fVar17;
            }
            else {
              auVar18 = ZEXT1664(auVar29);
              local_168[0] = fVar28;
            }
            goto LAB_18042534f;
          case 0x4c:
          case 0x6c:
            if (cVar12 == 'l') {
              auVar21 = ZEXT464((uint)(fVar31 + fVar19));
              auVar18 = ZEXT464((uint)(fVar28 + fVar17));
            }
            else {
              auVar21 = ZEXT1664(auVar32);
              auVar18 = ZEXT1664(auVar29);
            }
            local_168[0] = auVar18._0_4_;
            goto LAB_180425349;
          case 0x4d:
          case 0x6d:
            if (cVar12 == 0x6d) {
              auVar21 = ZEXT464((uint)(fVar31 + fVar19));
              auVar18 = ZEXT464((uint)(fVar28 + fVar17));
            }
            else {
              auVar21 = ZEXT1664(auVar32);
              auVar18 = ZEXT1664(auVar29);
            }
            local_168[0] = auVar18._0_4_;
            local_160 = (undefined8 *)CONCAT44(local_160._4_4_,auVar21._0_4_);
            if (*(int *)(param_1 + 0x9c10) < 1) {
              FUN_1804218b0(param_1,auVar18._0_8_,auVar21._0_8_);
            }
            else {
              *(float *)(*(longlong *)(param_1 + 0x9c08) + -8 +
                        (longlong)(*(int *)(param_1 + 0x9c10) * 2) * 4) = local_168[0];
              *(int *)(*(longlong *)(param_1 + 0x9c08) + -4 +
                      (longlong)(*(int *)(param_1 + 0x9c10) * 2) * 4) = auVar21._0_4_;
            }
            bVar14 = cVar12 == 'm';
            cVar12 = 'L';
            if (bVar14) {
              cVar12 = 'l';
            }
            local_158 = (float)FUN_1804246e0(cVar12);
            bVar14 = true;
            auVar27 = ZEXT1664(auVar21._0_16_);
            auVar26 = ZEXT1664(auVar18._0_16_);
            iVar9 = 0;
            lVar11 = 0;
            break;
          case 0x51:
          case 0x71:
            if (cVar12 == 'q') {
              auVar26 = ZEXT464((uint)(fVar28 + fVar17));
              auVar27 = ZEXT464((uint)(fVar31 + fVar19));
              fVar28 = fVar17 + (float)local_148;
              fVar31 = fVar19 + local_148._4_4_;
            }
            else {
              auVar26 = ZEXT1664(auVar29);
              auVar27 = ZEXT1664(auVar32);
              fVar28 = (float)local_148;
              fVar31 = local_148._4_4_;
            }
            auVar21 = ZEXT464((uint)fVar31);
            auVar32 = ZEXT416((uint)fVar31);
            auVar18 = ZEXT464((uint)fVar28);
            auVar29 = ZEXT416((uint)fVar28);
            if (0 < *(int *)(param_1 + 0x9c10)) {
              fVar28 = 0.6666667;
              FUN_1804218b0(param_1,(auVar26._0_4_ - fVar17) * 0.6666667 + fVar17,
                            (auVar27._0_4_ - fVar19) * 0.6666667 + fVar19);
              FUN_1804218b0(param_1,(auVar26._0_4_ - auVar18._0_4_) * fVar28 + auVar18._0_4_,
                            (auVar27._0_4_ - auVar21._0_4_) * fVar28 + auVar21._0_4_);
              FUN_1804218b0(param_1,auVar18._0_8_,auVar21._0_8_);
              auVar32 = auVar21._0_16_;
              auVar29 = auVar18._0_16_;
            }
            goto LAB_1804254cb;
          case 0x53:
          case 0x73:
            if (cVar12 == 's') {
              auVar18 = ZEXT464((uint)(fVar28 + fVar17));
              auVar21 = ZEXT464((uint)(fVar31 + fVar19));
              fVar28 = fVar17 + (float)local_148;
              fVar31 = fVar19 + local_148._4_4_;
            }
            else {
              auVar18 = ZEXT1664(auVar29);
              auVar21 = ZEXT1664(auVar32);
              fVar28 = (float)local_148;
              fVar31 = local_148._4_4_;
            }
            auVar23 = auVar21._0_16_;
            auVar22 = auVar18._0_16_;
            auVar25 = ZEXT464((uint)fVar31);
            auVar32 = ZEXT416((uint)fVar31);
            auVar24 = ZEXT464((uint)fVar28);
            auVar29 = ZEXT416((uint)fVar28);
            if (0 < *(int *)(param_1 + 0x9c10)) {
              FUN_1804218b0(param_1,(fVar17 + fVar17) - auVar26._0_4_,
                            (fVar19 + fVar19) - auVar27._0_4_);
              FUN_1804218b0(param_1,auVar18._0_8_,auVar21._0_8_);
              FUN_1804218b0(param_1,auVar24._0_8_,auVar25._0_8_);
              auVar23 = auVar21._0_16_;
              auVar22 = auVar18._0_16_;
              auVar32 = auVar25._0_16_;
              auVar29 = auVar24._0_16_;
            }
            auVar26 = ZEXT1664(auVar22);
            auVar27 = ZEXT1664(auVar23);
LAB_1804254cb:
            auVar21 = ZEXT1664(auVar32);
            auVar18 = ZEXT1664(auVar29);
            auVar24 = ZEXT464((uint)local_148._4_4_);
            auVar25 = ZEXT464((uint)(float)local_148);
            local_168[0] = auVar29._0_4_;
            local_160 = (undefined8 *)CONCAT44(local_160._4_4_,auVar32._0_4_);
            iVar9 = 0;
            lVar11 = 0;
            break;
          case 0x54:
          case 0x74:
            if (cVar12 == 't') {
              auVar18 = ZEXT464((uint)(fVar28 + fVar17));
              auVar21 = ZEXT464((uint)(fVar31 + fVar19));
            }
            else {
              auVar18 = ZEXT1664(auVar29);
              auVar21 = ZEXT1664(auVar32);
            }
            auVar32 = auVar21._0_16_;
            auVar29 = auVar18._0_16_;
            fVar28 = (fVar17 + fVar17) - auVar26._0_4_;
            auVar26 = ZEXT464((uint)fVar28);
            fVar31 = (fVar19 + fVar19) - auVar27._0_4_;
            auVar27 = ZEXT464((uint)fVar31);
            if (0 < *(int *)(param_1 + 0x9c10)) {
              fVar20 = 0.6666667;
              FUN_1804218b0(param_1,(fVar28 - fVar17) * 0.6666667 + fVar17,
                            (fVar31 - fVar19) * 0.6666667 + fVar19);
              FUN_1804218b0(param_1,(auVar26._0_4_ - auVar18._0_4_) * fVar20 + auVar18._0_4_,
                            (auVar27._0_4_ - auVar21._0_4_) * fVar20 + auVar21._0_4_);
              FUN_1804218b0(param_1,auVar18._0_8_,auVar21._0_8_);
              auVar32 = auVar21._0_16_;
              auVar29 = auVar18._0_16_;
            }
            auVar18 = ZEXT1664(auVar29);
            auVar21 = ZEXT1664(auVar32);
            local_168[0] = auVar29._0_4_;
            local_160 = (undefined8 *)CONCAT44(local_160._4_4_,auVar32._0_4_);
            iVar9 = 0;
            lVar11 = 0;
            break;
          case 0x56:
          case 0x76:
            if (cVar12 == 'v') {
              auVar21 = ZEXT464((uint)(fVar28 + fVar19));
            }
            else {
              auVar21 = ZEXT1664(auVar29);
            }
LAB_180425349:
            local_160 = (undefined8 *)CONCAT44(local_160._4_4_,auVar21._0_4_);
LAB_18042534f:
            FUN_180421970(param_1,auVar18._0_8_,auVar21._0_8_);
            auVar27 = ZEXT1664(auVar21._0_16_);
            auVar26 = ZEXT1664(auVar18._0_16_);
            iVar9 = 0;
            lVar11 = 0;
          }
LAB_18042578d:
        } while (*pcVar8 != '\0');
      }
      if (*(int *)(param_1 + 0x9c10) != 0) {
        FUN_1804225d0(param_1,0);
      }
    }
  }
  FUN_180422270(param_1);
}



