// FUN_1804ea5f0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804ea5f0 */

void FUN_1804ea5f0(undefined8 param_1,int *param_2,undefined8 param_3,float *param_4,float param_5,
                  float *param_6,char *param_7,char *param_8,float param_9,uint param_10)

{
  int *piVar1;
  float fVar2;
  ushort uVar3;
  uint uVar4;
  bool bVar5;
  short sVar6;
  int iVar7;
  float fVar8;
  longlong lVar9;
  char *pcVar10;
  char *pcVar11;
  longlong lVar12;
  char *pcVar13;
  ulonglong uVar14;
  uint *puVar15;
  int iVar16;
  float *pfVar17;
  char *pcVar18;
  int iVar19;
  short *psVar20;
  bool bVar21;
  undefined1 in_ZMM2 [64];
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined1 auVar27 [64];
  float fVar28;
  undefined1 auVar29 [64];
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float local_118;
  uint local_110;
  float local_10c;
  float local_108;
  float local_104;
  int local_100;
  int local_fc;
  int local_f8;
  int local_f4;
  
  local_118 = *param_4;
  fVar34 = param_4[1];
  auVar27 = ZEXT1664(in_ZMM2._0_16_);
  if (fVar34 <= param_6[3]) {
    bVar5 = param_9 <= 0.0;
    fVar30 = param_9;
    do {
      param_10 = param_10 | param_2[0xc];
      if ((param_10 >> 0x14 & 1) == 0) {
        local_118 = (float)(int)local_118;
        fVar34 = (float)(int)fVar34;
      }
      pcVar13 = param_8;
      if (param_8 == (char *)0x0) {
        lVar9 = -1;
        do {
          lVar12 = lVar9 + 1;
          lVar9 = lVar9 + 1;
        } while (param_7[lVar12] != '\0');
        pcVar13 = param_7 + lVar9;
      }
      fVar23 = local_118;
      lVar9 = FUN_1804e97d0(param_1,auVar27._0_8_,0xbf800000);
      local_104 = auVar27._0_4_ / *(float *)(lVar9 + 0x14);
      auVar29 = ZEXT1664(CONCAT124(auVar27._4_12_,local_104));
      pcVar11 = param_7;
      fVar8 = fVar23;
      local_10c = fVar23;
      if (fVar34 + auVar27._0_4_ < param_6[1]) {
        do {
          if (pcVar13 <= pcVar11) break;
          pcVar10 = (char *)FUN_18063b630(pcVar11,10,(longlong)pcVar13 - (longlong)pcVar11);
          if (bVar5) {
            pcVar11 = pcVar10 + 1;
            if (pcVar10 == (char *)0x0) {
              pcVar11 = pcVar13;
            }
          }
          else {
            pcVar18 = pcVar13;
            if (pcVar10 != (char *)0x0) {
              pcVar18 = pcVar10;
            }
            pcVar11 = (char *)FUN_1804e9df0(param_1,auVar27._0_8_,pcVar11,pcVar18,fVar30,param_10);
            if ((param_10 & 2) == 0) {
              for (; pcVar11 < pcVar13; pcVar11 = pcVar11 + 1) {
                if ((*pcVar11 != ' ') && (*pcVar11 != '\t')) goto LAB_1804ea7d8;
              }
            }
            else {
LAB_1804ea7d8:
              if ((pcVar11 < pcVar13) && (*pcVar11 == '\n')) {
                pcVar11 = pcVar11 + 1;
              }
            }
          }
          fVar34 = fVar34 + auVar27._0_4_;
        } while (fVar34 + auVar27._0_4_ < param_6[1]);
      }
      param_8 = pcVar13;
      fVar35 = fVar34;
      if (10000 < (longlong)pcVar13 - (longlong)pcVar11) {
        if (bVar5) {
          fVar8 = param_6[3];
          param_8 = pcVar11;
          if (fVar34 < fVar8) {
            do {
              if (pcVar13 <= param_8) break;
              lVar12 = FUN_18063b630(param_8,10,(longlong)pcVar13 - (longlong)param_8);
              if (lVar12 == 0) {
                param_8 = pcVar13;
              }
              else {
                param_8 = (char *)(lVar12 + 1);
              }
              fVar34 = fVar34 + auVar27._0_4_;
            } while (fVar34 < fVar8);
          }
          fVar23 = local_118;
          fVar8 = local_10c;
        }
      }
      if (pcVar11 == param_8) {
        return;
      }
      local_fc = (int)param_8 - (int)pcVar11;
      local_f8 = local_fc * 4;
      local_fc = local_fc * 6;
      local_f4 = param_2[4] + local_fc;
      FUN_1804d9590(param_2,local_fc,local_f8);
      pfVar17 = *(float **)(param_2 + 0x10);
      psVar20 = *(short **)(param_2 + 0x12);
      iVar19 = param_2[0xd];
      local_100 = *param_2;
      pcVar13 = (char *)0x0;
      local_108 = (float)((uint)param_5 | 0xffffff);
      if (pcVar11 < param_8) {
        do {
          if (bVar5) {
LAB_1804ea9a2:
            local_110 = (uint)*pcVar11;
            if (local_110 < 0x80) {
              pcVar11 = pcVar11 + 1;
            }
            else {
              iVar7 = FUN_1804b0e50(&local_110,pcVar11,param_8);
              pcVar11 = pcVar11 + iVar7;
            }
            fVar34 = auVar29._0_4_;
            if (local_110 < 0x20) {
              if (local_110 == 10) {
                fVar35 = fVar35 + auVar27._0_4_;
                local_118 = fVar8;
                if (param_6[3] < fVar35) break;
              }
              else {
                fVar8 = fVar23;
                if (local_110 != 0xd) goto LAB_1804eaa03;
              }
            }
            else {
LAB_1804eaa03:
              uVar14 = (ulonglong)local_110 & 0xffff;
              if (uVar14 < (ulonglong)(longlong)*(int *)(lVar9 + 0x20)) {
                uVar3 = *(ushort *)(*(longlong *)(lVar9 + 0x28) + uVar14 * 2);
                uVar14 = (ulonglong)uVar3;
                if (uVar3 == 0xfffe) goto LAB_1804eaa41;
                if (uVar3 == 0xffff) goto LAB_1804eaa31;
LAB_1804eaa49:
                puVar15 = (uint *)(uVar14 * 0x2c + *(longlong *)(lVar9 + 0x38));
              }
              else {
LAB_1804eaa31:
                puVar15 = (uint *)FUN_1804e83c0(lVar9,(ulonglong)local_110,0);
                fVar34 = auVar29._0_4_;
                if (puVar15 == (uint *)0x0) {
LAB_1804eaa41:
                  uVar14 = (ulonglong)*(int *)(lVar9 + 0x40);
                  goto LAB_1804eaa49;
                }
              }
              uVar4 = *puVar15;
              fVar30 = (float)puVar15[1];
              if ((uVar4 & 2) != 0) {
                fVar8 = param_6[2];
                fVar31 = fVar34 * (float)puVar15[2] + fVar23;
                fVar22 = fVar34 * (float)puVar15[4] + fVar23;
                fVar24 = fVar34 * (float)puVar15[5] + fVar35;
                fVar25 = fVar34 * (float)puVar15[3] + fVar35;
                fVar23 = local_118;
                if ((fVar31 <= fVar8) && (fVar2 = *param_6, fVar2 <= fVar22)) {
                  fVar26 = (float)puVar15[6];
                  fVar28 = (float)puVar15[7];
                  fVar32 = (float)puVar15[8];
                  fVar33 = (float)puVar15[9];
                  if ((param_10 & 1) != 0) {
                    if (fVar31 < fVar2) {
                      fVar26 = fVar26 + (1.0 - (fVar22 - fVar2) / (fVar22 - fVar31)) *
                                        (fVar32 - fVar26);
                      fVar31 = fVar2;
                    }
                    fVar2 = param_6[1];
                    if (fVar25 < fVar2) {
                      fVar28 = fVar28 + (1.0 - (fVar24 - fVar2) / (fVar24 - fVar25)) *
                                        (fVar33 - fVar28);
                      fVar25 = fVar2;
                    }
                    if (fVar8 < fVar22) {
                      fVar32 = ((fVar8 - fVar31) / (fVar22 - fVar31)) * (fVar32 - fVar26) + fVar26;
                      fVar22 = fVar8;
                    }
                    fVar8 = param_6[3];
                    if (fVar8 < fVar24) {
                      fVar33 = ((fVar8 - fVar25) / (fVar24 - fVar25)) * (fVar33 - fVar28) + fVar28;
                      fVar24 = fVar8;
                    }
                    if (fVar24 <= fVar25) goto LAB_1804eac39;
                  }
                  *pfVar17 = fVar31;
                  fVar8 = param_5;
                  if ((uVar4 & 1) != 0) {
                    fVar8 = local_108;
                  }
                  pfVar17[4] = fVar8;
                  pfVar17[9] = fVar8;
                  pfVar17[0xe] = fVar8;
                  pfVar17[0x13] = fVar8;
                  sVar6 = (short)iVar19;
                  pfVar17[1] = fVar25;
                  pfVar17[2] = fVar26;
                  pfVar17[3] = fVar28;
                  pfVar17[5] = fVar22;
                  pfVar17[6] = fVar25;
                  pfVar17[7] = fVar32;
                  pfVar17[8] = fVar28;
                  pfVar17[10] = fVar22;
                  pfVar17[0xb] = fVar24;
                  pfVar17[0xc] = fVar32;
                  pfVar17[0xd] = fVar33;
                  pfVar17[0xf] = fVar31;
                  pfVar17[0x10] = fVar24;
                  pfVar17[0x11] = fVar26;
                  pfVar17[0x12] = fVar33;
                  psVar20[1] = sVar6 + 1;
                  pfVar17 = pfVar17 + 0x14;
                  *psVar20 = sVar6;
                  psVar20[2] = sVar6 + 2;
                  psVar20[4] = sVar6 + 2;
                  psVar20[3] = sVar6;
                  iVar19 = iVar19 + 4;
                  psVar20[5] = sVar6 + 3;
                  psVar20 = psVar20 + 6;
                }
              }
LAB_1804eac39:
              fVar8 = fVar34 * fVar30 + fVar23;
              local_118 = fVar8;
            }
LAB_1804eac3f:
            bVar21 = pcVar11 < param_8;
            fVar23 = fVar8;
          }
          else {
            if (pcVar13 == (char *)0x0) {
              pcVar13 = (char *)FUN_1804e9df0(param_1,auVar27._0_8_,pcVar11,param_8,
                                              fVar30 - (fVar23 - fVar8),param_10);
            }
            if (pcVar11 < pcVar13) goto LAB_1804ea9a2;
            fVar35 = fVar35 + auVar27._0_4_;
            if (param_6[3] < fVar35) break;
            pcVar13 = (char *)0x0;
            fVar23 = fVar8;
            local_118 = fVar8;
            if ((param_10 & 2) != 0) {
LAB_1804ea988:
              bVar21 = pcVar11 < param_8;
              if (!bVar21) goto LAB_1804eac42;
              if (*pcVar11 == '\n') {
                pcVar11 = pcVar11 + 1;
              }
              goto LAB_1804eac3f;
            }
            bVar21 = false;
            if (pcVar11 < param_8) {
              do {
                if ((*pcVar11 != ' ') && (*pcVar11 != '\t')) goto LAB_1804ea988;
                pcVar11 = pcVar11 + 1;
              } while (pcVar11 < param_8);
              goto LAB_1804eac3f;
            }
          }
LAB_1804eac42:
          auVar27 = ZEXT464(in_ZMM2._0_4_);
          auVar29 = ZEXT464((uint)local_104);
          fVar8 = local_10c;
          fVar30 = param_9;
        } while (bVar21);
      }
      iVar7 = *param_2;
      if (local_100 == iVar7) {
        param_2[8] = (int)(((longlong)pfVar17 - *(longlong *)(param_2 + 10)) / 0x14);
        iVar16 = (int)((longlong)psVar20 - *(longlong *)(param_2 + 6) >> 1);
        param_2[4] = iVar16;
        piVar1 = (int *)(*(longlong *)(param_2 + 2) + -0x20 + (longlong)iVar7 * 0x48);
        *piVar1 = *piVar1 + (iVar16 - local_f4);
        *(float **)(param_2 + 0x10) = pfVar17;
        *(short **)(param_2 + 0x12) = psVar20;
        param_2[0xd] = iVar19;
        return;
      }
      *param_2 = iVar7 + -1;
      piVar1 = (int *)(*(longlong *)(param_2 + 2) + -0x68 + (longlong)iVar7 * 0x48);
      *piVar1 = *piVar1 - local_fc;
      param_2[4] = param_2[4] - local_fc;
      param_2[8] = param_2[8] - local_f8;
      FUN_1804d90c0(param_2);
      fVar34 = param_4[1];
      local_118 = *param_4;
    } while (fVar34 <= param_6[3]);
  }
  return;
}



