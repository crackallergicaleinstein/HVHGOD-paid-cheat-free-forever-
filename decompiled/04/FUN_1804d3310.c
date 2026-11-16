// FUN_1804d3310 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804d3310 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1804d3310(longlong param_1,undefined8 param_2,longlong *param_3)

{
  uint uVar1;
  short *psVar2;
  short *psVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  int *piVar7;
  byte bVar8;
  char cVar9;
  char cVar10;
  char cVar11;
  undefined1 uVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  longlong lVar16;
  ushort uVar17;
  short sVar18;
  int *piVar19;
  byte bVar20;
  longlong lVar21;
  byte *pbVar22;
  char *pcVar23;
  char *pcVar24;
  byte bVar25;
  longlong lVar26;
  int iVar27;
  byte *pbVar28;
  ulonglong uVar29;
  short *psVar30;
  longlong lVar31;
  int iVar32;
  byte bVar33;
  undefined2 uVar34;
  int iVar35;
  longlong lVar36;
  undefined1 auVar37 [16];
  undefined1 extraout_var [56];
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  undefined1 auVar45 [64];
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  undefined8 uVar50;
  undefined8 uVar51;
  undefined1 auStack_188 [32];
  int local_168;
  int local_160;
  int local_158;
  int local_150;
  int local_148;
  int local_140;
  byte local_138;
  int local_134;
  short local_130;
  short local_12e;
  int local_12c;
  int local_128;
  byte *local_120;
  ulonglong local_118;
  longlong *local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  ulonglong local_f0;
  ulonglong local_e8;
  
  local_e8 = DAT_1808d5f00 ^ (ulonglong)auStack_188;
  lVar26 = *(longlong *)(param_1 + 8);
  bVar25 = 0;
  lVar16 = 0;
  iVar27 = 0;
  iVar15 = 0;
  local_110 = param_3;
  iVar13 = FUN_1804d3150();
  *param_3 = 0;
  if (-1 < iVar13) {
    lVar31 = (longlong)iVar13;
    uVar17 = CONCAT11(*(char *)(lVar31 + lVar26),*(undefined1 *)(lVar31 + 1 + lVar26));
    local_f0 = CONCAT44(local_f0._4_4_,(uint)uVar17);
    if ((short)uVar17 < 1) {
      if (*(char *)(lVar31 + lVar26) < '\0') {
        uVar50 = 0x3f800000;
        uVar51 = 0x3f80000000000000;
        fVar49 = 6.1035156e-05;
        pcVar23 = (char *)(lVar26 + 10 + lVar31);
        lVar26 = lVar16;
        do {
          cVar9 = pcVar23[3];
          cVar10 = pcVar23[2];
          local_f0 = 0;
          bVar25 = pcVar23[1];
          pcVar24 = pcVar23 + 4;
          fVar47 = 0.0;
          fVar48 = 0.0;
          if ((bVar25 & 2) != 0) {
            if ((bVar25 & 1) == 0) {
              iVar13 = (int)*pcVar24;
              pcVar24 = pcVar23 + 6;
              iVar15 = (int)pcVar23[5];
            }
            else {
              iVar13 = (int)CONCAT11(*pcVar24,pcVar23[5]);
              pcVar24 = pcVar23 + 8;
              iVar15 = (int)CONCAT11(pcVar23[6],pcVar23[7]);
            }
            fVar47 = (float)iVar13;
            fVar48 = (float)iVar15;
          }
          pcVar23 = pcVar24;
          if ((bVar25 & 8) == 0) {
            if ((bVar25 & 0x40) == 0) {
              if ((char)bVar25 < '\0') {
                local_108._0_4_ = (float)(int)CONCAT11(*pcVar23,pcVar23[1]) * fVar49;
                pcVar24 = pcVar23 + 5;
                pcVar4 = pcVar23 + 4;
                local_108._4_4_ = (float)(int)CONCAT11(pcVar23[2],pcVar23[3]) * fVar49;
                pcVar5 = pcVar23 + 7;
                pcVar6 = pcVar23 + 6;
                pcVar23 = pcVar23 + 8;
                fVar40 = (float)(int)CONCAT11(*pcVar6,*pcVar5) * fVar49;
                fVar43 = (float)(int)CONCAT11(*pcVar4,*pcVar24) * fVar49;
              }
              else {
                uStack_100._4_4_ = (float)((ulonglong)uVar51 >> 0x20);
                uStack_100._0_4_ = (float)uVar51;
                local_108._4_4_ = (float)((ulonglong)uVar50 >> 0x20);
                local_108._0_4_ = (float)uVar50;
                fVar40 = uStack_100._4_4_;
                fVar43 = (float)uStack_100;
              }
            }
            else {
              pcVar24 = pcVar23 + 3;
              local_108._4_4_ = 0.0;
              pcVar4 = pcVar23 + 2;
              local_108._0_4_ = (float)(int)CONCAT11(*pcVar23,pcVar23[1]) * fVar49;
              pcVar23 = pcVar23 + 4;
              fVar40 = (float)(int)CONCAT11(*pcVar4,*pcVar24) * fVar49;
              fVar43 = 0.0;
            }
          }
          else {
            pcVar24 = pcVar23 + 1;
            cVar11 = *pcVar23;
            local_108._4_4_ = 0.0;
            pcVar23 = pcVar23 + 2;
            local_108._0_4_ = (float)(int)CONCAT11(cVar11,*pcVar24) * fVar49;
            fVar40 = (float)local_108;
            fVar43 = 0.0;
          }
          fVar46 = local_108._4_4_ * local_108._4_4_ + (float)local_108 * (float)local_108;
          fVar41 = (float)local_108;
          fVar42 = local_108._4_4_;
          local_108 = uVar50;
          uStack_100 = uVar51;
          if (fVar46 < 0.0) {
            fVar46 = (float)FUN_18061e150();
          }
          else {
            fVar46 = SQRT(fVar46);
          }
          fVar44 = fVar40 * fVar40 + fVar43 * fVar43;
          if (fVar44 < 0.0) {
            auVar45._0_8_ = FUN_18061e150();
            auVar45._8_56_ = extraout_var;
            auVar37 = auVar45._0_16_;
          }
          else {
            auVar37 = ZEXT416((uint)SQRT(fVar44));
          }
          auVar45 = ZEXT1664(auVar37);
          iVar15 = FUN_1804d55c0(param_1,CONCAT11(cVar10,cVar9),&local_f0);
          lVar31 = (longlong)iVar15;
          lVar16 = lVar26;
          if (0 < iVar15) {
            lVar16 = 0;
            fVar44 = auVar45._0_4_;
            if (lVar31 < 4) {
              if (0 < iVar15) goto LAB_1804d3d8d;
            }
            else {
              lVar21 = (lVar31 - 4U >> 2) + 1;
              lVar16 = lVar21 * 4;
              lVar36 = 0;
              do {
                fVar38 = (float)(int)*(short *)(lVar36 + 2 + local_f0);
                sVar18 = *(short *)(lVar36 + local_f0);
                *(short *)(lVar36 + local_f0) =
                     (short)(int)(((float)(int)sVar18 * fVar41 + fVar38 * fVar43 + fVar47) * fVar46)
                ;
                *(short *)(lVar36 + 2 + local_f0) =
                     (short)(int)(((float)(int)sVar18 * fVar42 + fVar38 * fVar40 + fVar48) * fVar44)
                ;
                fVar39 = (float)(int)*(short *)(lVar36 + 6 + local_f0);
                fVar38 = (float)(int)*(short *)(lVar36 + 4 + local_f0);
                *(short *)(lVar36 + 4 + local_f0) =
                     (short)(int)((fVar38 * fVar41 + fVar39 * fVar43 + fVar47) * fVar46);
                *(short *)(lVar36 + 6 + local_f0) =
                     (short)(int)((fVar38 * fVar42 + fVar39 * fVar40 + fVar48) * fVar44);
                fVar39 = (float)(int)*(short *)(lVar36 + 0x10 + local_f0);
                fVar38 = (float)(int)*(short *)(lVar36 + 0xe + local_f0);
                *(short *)(lVar36 + 0xe + local_f0) =
                     (short)(int)((fVar38 * fVar41 + fVar39 * fVar43 + fVar47) * fVar46);
                *(short *)(lVar36 + 0x10 + local_f0) =
                     (short)(int)((fVar38 * fVar42 + fVar39 * fVar40 + fVar48) * fVar44);
                fVar39 = (float)(int)*(short *)(lVar36 + 0x14 + local_f0);
                fVar38 = (float)(int)*(short *)(lVar36 + 0x12 + local_f0);
                *(short *)(lVar36 + 0x12 + local_f0) =
                     (short)(int)((fVar38 * fVar41 + fVar39 * fVar43 + fVar47) * fVar46);
                *(short *)(lVar36 + 0x14 + local_f0) =
                     (short)(int)((fVar38 * fVar42 + fVar39 * fVar40 + fVar48) * fVar44);
                fVar39 = (float)(int)*(short *)(lVar36 + 0x1e + local_f0);
                fVar38 = (float)(int)*(short *)(lVar36 + 0x1c + local_f0);
                *(short *)(lVar36 + 0x1c + local_f0) =
                     (short)(int)((fVar38 * fVar41 + fVar39 * fVar43 + fVar47) * fVar46);
                *(short *)(lVar36 + 0x1e + local_f0) =
                     (short)(int)((fVar38 * fVar42 + fVar39 * fVar40 + fVar48) * fVar44);
                fVar39 = (float)(int)*(short *)(lVar36 + 0x22 + local_f0);
                fVar38 = (float)(int)*(short *)(lVar36 + 0x20 + local_f0);
                *(short *)(lVar36 + 0x20 + local_f0) =
                     (short)(int)((fVar38 * fVar41 + fVar39 * fVar43 + fVar47) * fVar46);
                *(short *)(lVar36 + 0x22 + local_f0) =
                     (short)(int)((fVar38 * fVar42 + fVar39 * fVar40 + fVar48) * fVar44);
                fVar39 = (float)(int)*(short *)(lVar36 + 0x2c + local_f0);
                fVar38 = (float)(int)*(short *)(lVar36 + 0x2a + local_f0);
                *(short *)(lVar36 + 0x2a + local_f0) =
                     (short)(int)((fVar41 * fVar38 + fVar43 * fVar39 + fVar47) * fVar46);
                *(short *)(lVar36 + 0x2c + local_f0) =
                     (short)(int)((fVar42 * fVar38 + fVar40 * fVar39 + fVar48) * fVar44);
                fVar39 = (float)(int)*(short *)(lVar36 + 0x30 + local_f0);
                fVar38 = (float)(int)*(short *)(lVar36 + 0x2e + local_f0);
                *(short *)(lVar36 + 0x2e + local_f0) =
                     (short)(int)((fVar38 * fVar41 + fVar39 * fVar43 + fVar47) * fVar46);
                *(short *)(lVar36 + 0x30 + local_f0) =
                     (short)(int)((fVar38 * fVar42 + fVar39 * fVar40 + fVar48) * fVar44);
                lVar21 = lVar21 + -1;
                lVar36 = lVar36 + 0x38;
              } while (lVar21 != 0);
              if (lVar16 < lVar31) {
LAB_1804d3d8d:
                lVar36 = lVar16 * 0xe;
                lVar16 = lVar31 - lVar16;
                do {
                  lVar36 = lVar36 + 0xe;
                  fVar39 = (float)(int)*(short *)((local_f0 - 0xc) + lVar36);
                  fVar38 = (float)(int)*(short *)((local_f0 - 0xe) + lVar36);
                  *(short *)((local_f0 - 0xe) + lVar36) =
                       (short)(int)((fVar41 * fVar38 + fVar43 * fVar39 + fVar47) * fVar46);
                  *(short *)((local_f0 - 0xc) + lVar36) =
                       (short)(int)((fVar42 * fVar38 + fVar40 * fVar39 + fVar48) * fVar44);
                  fVar39 = (float)(int)*(short *)((local_f0 - 8) + lVar36);
                  fVar38 = (float)(int)*(short *)((local_f0 - 10) + lVar36);
                  *(short *)((local_f0 - 10) + lVar36) =
                       (short)(int)((fVar38 * fVar41 + fVar39 * fVar43 + fVar47) * fVar46);
                  *(short *)((local_f0 - 8) + lVar36) =
                       (short)(int)((fVar38 * fVar42 + fVar39 * fVar40 + fVar48) * fVar44);
                  lVar16 = lVar16 + -1;
                } while (lVar16 != 0);
              }
            }
            lVar16 = FUN_1804b8110((longlong)(iVar15 + iVar27) * 0xe);
            lVar36 = DAT_180bb8ae8;
            if (lVar16 == 0) {
              if (lVar26 != 0) {
                if (DAT_180bb8ae8 != 0) {
                  piVar7 = (int *)(DAT_180bb8ae8 + 4);
                  piVar19 = (int *)(DAT_180bb8ae8 + 0x2998 +
                                   (longlong)*(short *)(DAT_180bb8ae8 + 0x2994) * 8);
                  if (*piVar19 != *piVar7) {
                    iVar15 = *(short *)(DAT_180bb8ae8 + 0x2994) + 1;
                    sVar18 = (short)iVar15 + (short)(iVar15 / 6) * -6;
                    *(short *)(DAT_180bb8ae8 + 0x2994) = sVar18;
                    piVar19 = (int *)(lVar36 + ((longlong)sVar18 + 0x533) * 8);
                    *piVar19 = *piVar7;
                    piVar19[1] = 0;
                  }
                  *(short *)((longlong)piVar19 + 6) = *(short *)((longlong)piVar19 + 6) + 1;
                  piVar7 = (int *)(lVar36 + 0x2990);
                  *piVar7 = *piVar7 + 1;
                }
                thunk_FUN_180621380(lVar26);
              }
              lVar26 = DAT_180bb8ae8;
              if (local_f0 == 0) {
              }
              if (DAT_180bb8ae8 != 0) {
                piVar7 = (int *)(DAT_180bb8ae8 + 4);
                piVar19 = (int *)(DAT_180bb8ae8 + 0x2998 +
                                 (longlong)*(short *)(DAT_180bb8ae8 + 0x2994) * 8);
                if (*piVar19 != *piVar7) {
                  iVar15 = *(short *)(DAT_180bb8ae8 + 0x2994) + 1;
                  sVar18 = (short)iVar15 + (short)(iVar15 / 6) * -6;
                  *(short *)(DAT_180bb8ae8 + 0x2994) = sVar18;
                  piVar19 = (int *)(lVar26 + ((longlong)sVar18 + 0x533) * 8);
                  *piVar19 = *piVar7;
                  piVar19[1] = 0;
                }
                *(short *)((longlong)piVar19 + 6) = *(short *)((longlong)piVar19 + 6) + 1;
                piVar7 = (int *)(lVar26 + 0x2990);
                *piVar7 = *piVar7 + 1;
              }
              thunk_FUN_180621380(local_f0);
            }
            if ((0 < iVar27) && (lVar26 != 0)) {
              FUN_18063aed0(lVar16,lVar26,(longlong)iVar27 * 0xe);
            }
            FUN_18063aed0((longlong)iVar27 * 0xe + lVar16,local_f0,lVar31 * 0xe);
            lVar31 = DAT_180bb8ae8;
            if (lVar26 != 0) {
              if (DAT_180bb8ae8 != 0) {
                piVar7 = (int *)(DAT_180bb8ae8 + 4);
                piVar19 = (int *)(DAT_180bb8ae8 + 0x2998 +
                                 (longlong)*(short *)(DAT_180bb8ae8 + 0x2994) * 8);
                if (*piVar19 != *piVar7) {
                  iVar13 = *(short *)(DAT_180bb8ae8 + 0x2994) + 1;
                  sVar18 = (short)iVar13 + (short)(iVar13 / 6) * -6;
                  *(short *)(DAT_180bb8ae8 + 0x2994) = sVar18;
                  piVar19 = (int *)(lVar31 + 0x2998 + (longlong)sVar18 * 8);
                  *piVar19 = *piVar7;
                  *(undefined4 *)(lVar31 + 0x299c + (longlong)sVar18 * 8) = 0;
                }
                *(short *)((longlong)piVar19 + 6) = *(short *)((longlong)piVar19 + 6) + 1;
                *(int *)(lVar31 + 0x2990) = *(int *)(lVar31 + 0x2990) + 1;
              }
              thunk_FUN_180621380(lVar26);
            }
            lVar26 = DAT_180bb8ae8;
            if ((local_f0 != 0) && (DAT_180bb8ae8 != 0)) {
              piVar7 = (int *)(DAT_180bb8ae8 + 4);
              piVar19 = (int *)(DAT_180bb8ae8 + 0x2998 +
                               (longlong)*(short *)(DAT_180bb8ae8 + 0x2994) * 8);
              if (*piVar19 != *piVar7) {
                iVar13 = *(short *)(DAT_180bb8ae8 + 0x2994) + 1;
                sVar18 = (short)iVar13 + (short)(iVar13 / 6) * -6;
                *(short *)(DAT_180bb8ae8 + 0x2994) = sVar18;
                piVar19 = (int *)(lVar26 + 0x2998 + (longlong)sVar18 * 8);
                *piVar19 = *piVar7;
                *(undefined4 *)(lVar26 + 0x299c + (longlong)sVar18 * 8) = 0;
              }
              *(short *)((longlong)piVar19 + 6) = *(short *)((longlong)piVar19 + 6) + 1;
              *(int *)(lVar26 + 0x2990) = *(int *)(lVar26 + 0x2990) + 1;
            }
            thunk_FUN_180621380(local_f0);
            iVar27 = iVar27 + iVar15;
          }
          lVar26 = lVar16;
        } while ((bVar25 & 0x20) != 0);
      }
    }
    else {
      local_120 = (byte *)(lVar26 + 10 + lVar31);
      iVar13 = 0;
      bVar33 = 0;
      lVar36 = (longlong)((short)uVar17 * 2);
      bVar20 = local_120[lVar36 + -1];
      bVar8 = local_120[lVar36 + -2];
      pbVar22 = (byte *)((ulonglong)*(byte *)(lVar36 + lVar31 + 0xb + lVar26) +
                         (ulonglong)*(byte *)(lVar36 + lVar31 + 10 + lVar26) * 0x100 + lVar36 +
                         lVar31 + lVar26 + 0xc);
      lVar16 = FUN_1804b8110((longlong)(int)((short)uVar17 * 2 + 1 + (uint)CONCAT11(bVar8,bVar20)) *
                             0xe);
      if (lVar16 == 0) {
      }
      uVar1 = CONCAT11(bVar8,bVar20) + 1;
      local_128 = 0;
      bVar20 = 0;
      local_118 = (ulonglong)uVar1;
      if (uVar1 == 0) {
        iVar14 = 0;
        local_160 = 0;
        local_168 = 0;
        local_150 = 0;
        local_158 = 0;
        iVar35 = 0;
      }
      else {
        pbVar28 = (byte *)(lVar16 + 0xc + lVar36 * 0xe);
        uVar29 = local_118;
        do {
          if (bVar20 == 0) {
            bVar25 = *pbVar22;
            if ((bVar25 & 8) != 0) {
              bVar20 = pbVar22[1];
            }
            pbVar22 = pbVar22 + (ulonglong)((bVar25 & 8) != 0) + 1;
          }
          else {
            bVar20 = bVar20 - 1;
          }
          *pbVar28 = bVar25;
          pbVar28 = pbVar28 + 0xe;
          uVar29 = uVar29 - 1;
        } while (uVar29 != 0);
        psVar30 = (short *)(lVar36 * 0xe + lVar16);
        sVar18 = 0;
        uVar29 = local_118;
        do {
          if ((*(byte *)(psVar30 + 6) & 2) == 0) {
            if ((*(byte *)(psVar30 + 6) & 0x10) == 0) {
              sVar18 = sVar18 + CONCAT11(*pbVar22,pbVar22[1]);
              pbVar22 = pbVar22 + 2;
            }
          }
          else {
            bVar25 = *pbVar22;
            pbVar22 = pbVar22 + 1;
            uVar17 = (ushort)bVar25;
            if ((*(byte *)(psVar30 + 6) & 0x10) == 0) {
              uVar17 = -(ushort)bVar25;
            }
            sVar18 = sVar18 + uVar17;
          }
          *psVar30 = sVar18;
          psVar30 = psVar30 + 7;
          uVar29 = uVar29 - 1;
        } while (uVar29 != 0);
        iVar13 = 0;
        sVar18 = 0;
        psVar30 = (short *)(lVar36 * 0xe + 2 + lVar16);
        uVar29 = local_118;
        do {
          if ((*(byte *)(psVar30 + 5) & 4) == 0) {
            if ((*(byte *)(psVar30 + 5) & 0x20) == 0) {
              sVar18 = sVar18 + CONCAT11(*pbVar22,pbVar22[1]);
              pbVar22 = pbVar22 + 2;
            }
          }
          else {
            bVar25 = *pbVar22;
            pbVar22 = pbVar22 + 1;
            uVar17 = (ushort)bVar25;
            if ((*(byte *)(psVar30 + 5) & 0x20) == 0) {
              uVar17 = -(ushort)bVar25;
            }
            sVar18 = sVar18 + uVar17;
          }
          *psVar30 = sVar18;
          psVar30 = psVar30 + 7;
          uVar29 = uVar29 - 1;
        } while (uVar29 != 0);
        local_12c = 0;
        local_160 = 0;
        local_168 = 0;
        iVar32 = 0;
        lVar26 = 0;
        local_134 = 0;
        iVar14 = 0;
        iVar35 = 0;
        psVar30 = (short *)((longlong)((short)local_f0 * 2) * 0xe + lVar16);
        iVar15 = iVar27;
        do {
          local_138 = *(byte *)(psVar30 + 6);
          local_130 = *psVar30;
          local_12e = psVar30[1];
          if (local_128 == iVar32) {
            if (lVar26 != 0) {
              local_158 = local_12c;
              local_150 = local_134;
              local_148 = iVar13;
              local_140 = iVar35;
              iVar14 = FUN_1804d3220(lVar16,iVar14,iVar15,bVar33);
            }
            local_168 = (int)local_130;
            local_160 = (int)local_12e;
            bVar33 = ~local_138 & 1;
            if (bVar33 == 0) {
            }
            else {
              psVar2 = psVar30 + 7;
              psVar3 = psVar30 + 8;
              local_134 = local_160;
              local_12c = local_168;
              if ((*(byte *)(psVar30 + 0xd) & 1) == 0) {
                local_160 = *psVar3 + local_160 >> 1;
                local_168 = *psVar2 + local_168 >> 1;
              }
              else {
                iVar32 = iVar32 + 1;
                lVar26 = lVar26 + 1;
                psVar30 = psVar30 + 7;
                local_160 = (int)*psVar3;
                local_168 = (int)*psVar2;
              }
            }
            lVar31 = (longlong)iVar14;
            iVar14 = iVar14 + 1;
            lVar31 = lVar31 * 0xe;
            iVar15 = 0;
            *(undefined4 *)(lVar31 + 4 + lVar16) = 0;
            *(undefined1 *)(lVar31 + 0xc + lVar16) = 1;
            *(short *)(lVar31 + lVar16) = (short)local_168;
            *(short *)(lVar31 + 2 + lVar16) = (short)local_160;
            local_128 = local_120[1] + 1 + (uint)*local_120 * 0x100;
            local_120 = local_120 + 2;
          }
          else {
            uVar34 = (undefined2)iVar35;
            if ((local_138 & 1) == 0) {
              if (iVar15 != 0) {
                lVar31 = (longlong)iVar14;
                iVar14 = iVar14 + 1;
                lVar31 = lVar31 * 0xe;
                *(short *)(lVar31 + lVar16) = (short)(iVar13 + local_130 >> 1);
                *(short *)(lVar31 + 2 + lVar16) = (short)(iVar35 + local_12e >> 1);
                *(undefined1 *)(lVar31 + 0xc + lVar16) = 3;
                *(short *)(lVar31 + 4 + lVar16) = (short)iVar13;
                *(undefined2 *)(lVar31 + 6 + lVar16) = uVar34;
              }
              iVar15 = 1;
              iVar13 = (int)local_130;
              iVar35 = (int)local_12e;
            }
            else {
              lVar31 = (longlong)iVar14 * 0xe;
              if (iVar15 == 0) {
                uVar34 = 0;
                local_f0 = local_f0 & 0xffffffff00000000;
                uVar12 = 2;
              }
              else {
                local_f0 = CONCAT62(local_f0._2_6_,(short)iVar13);
                uVar12 = 3;
              }
              *(undefined1 *)(lVar31 + 0xc + lVar16) = uVar12;
              *(short *)(lVar31 + lVar16) = local_130;
              *(short *)(lVar31 + 2 + lVar16) = local_12e;
              *(short *)(lVar31 + 4 + lVar16) = (short)local_f0;
              *(undefined2 *)(lVar31 + 6 + lVar16) = uVar34;
              iVar14 = iVar14 + 1;
              iVar15 = 0;
            }
          }
          iVar32 = iVar32 + 1;
          lVar26 = lVar26 + 1;
          psVar30 = psVar30 + 7;
        } while (lVar26 < (longlong)local_118);
        local_150 = local_134;
        local_158 = local_12c;
      }
      local_148 = iVar13;
      local_140 = iVar35;
      FUN_1804d3220(lVar16,iVar14,iVar15,bVar33);
      param_3 = local_110;
    }
    *param_3 = lVar16;
  }
}



