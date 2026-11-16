// FUN_1803d9dd0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1803d9dd0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1803d9dd0(float *param_1,longlong param_2,uint param_3,uint param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  bool bVar8;
  char cVar9;
  char cVar10;
  short sVar11;
  short sVar12;
  longlong lVar13;
  longlong lVar14;
  float *pfVar15;
  float *pfVar16;
  int iVar17;
  uint uVar18;
  float *pfVar19;
  float fVar20;
  float fVar21;
  undefined1 auVar22 [64];
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  undefined1 auStack_178 [32];
  uint local_158;
  uint local_154;
  float *local_150;
  undefined1 local_140 [2] [16];
  undefined1 local_120 [8];
  float fStack_118;
  float fStack_114;
  float local_110 [4];
  float local_100 [4];
  char local_f0 [16];
  ulonglong local_e0;
  
  local_e0 = DAT_1808d5f00 ^ (ulonglong)auStack_178;
  local_150 = param_1;
  if ((((param_2 != 0) && (param_4 - 1 < 0x400)) && (-1 < (int)param_3)) &&
     ((int)param_3 < (int)param_4)) {
    lVar13 = FUN_18017ea70();
    iVar17 = 0;
    *(int *)(lVar13 + 4) = *(int *)(lVar13 + 4) + 1;
    if (param_2 + 0x178 == 0) {
      bVar8 = false;
      uVar18 = local_154;
    }
    else {
      local_158 = 0;
      cVar9 = FUN_1804514f0(&local_158,param_2 + 0x178,4);
      if (cVar9 == '\0') {
        bVar8 = false;
        uVar18 = local_154;
      }
      else {
        bVar8 = true;
        uVar18 = local_158;
      }
    }
    lVar13 = FUN_18017ea70();
    if (*(int *)(lVar13 + 4) != 0) {
      *(int *)(lVar13 + 4) = *(int *)(lVar13 + 4) + -1;
    }
    if ((bVar8) && (uVar18 == param_4)) {
      lVar13 = FUN_18017ea70();
      *(int *)(lVar13 + 4) = *(int *)(lVar13 + 4) + 1;
      if (param_2 + 0x188 == 0) {
        bVar8 = false;
        uVar18 = local_154;
      }
      else {
        local_158 = 0;
        cVar9 = FUN_1804514f0(&local_158,param_2 + 0x188,4);
        if (cVar9 == '\0') {
          bVar8 = false;
          uVar18 = local_154;
        }
        else {
          bVar8 = true;
          uVar18 = local_158;
        }
      }
      lVar13 = FUN_18017ea70();
      if (*(int *)(lVar13 + 4) != 0) {
        *(int *)(lVar13 + 4) = *(int *)(lVar13 + 4) + -1;
      }
      if ((bVar8) && (uVar18 == param_4)) {
        lVar13 = FUN_18017ea70();
        *(int *)(lVar13 + 4) = *(int *)(lVar13 + 4) + 1;
        if (param_2 + 0x1d8 == 0) {
          bVar8 = false;
          uVar18 = local_154;
        }
        else {
          local_158 = 0;
          cVar9 = FUN_1804514f0(&local_158,param_2 + 0x1d8,4);
          if (cVar9 == '\0') {
            bVar8 = false;
            uVar18 = local_154;
          }
          else {
            bVar8 = true;
            uVar18 = local_158;
          }
        }
        lVar13 = FUN_18017ea70();
        if (*(int *)(lVar13 + 4) != 0) {
          *(int *)(lVar13 + 4) = *(int *)(lVar13 + 4) + -1;
        }
        if ((bVar8) && (uVar18 == param_4)) {
          lVar13 = FUN_18017ea70();
          *(int *)(lVar13 + 4) = *(int *)(lVar13 + 4) + 1;
          if (param_2 + 0x1e8 == 0) {
            bVar8 = false;
            uVar18 = local_154;
          }
          else {
            local_158 = 0;
            cVar9 = FUN_1804514f0(&local_158,param_2 + 0x1e8,4);
            if (cVar9 == '\0') {
              bVar8 = false;
              uVar18 = local_154;
            }
            else {
              bVar8 = true;
              uVar18 = local_158;
            }
          }
          lVar13 = FUN_18017ea70();
          if (*(int *)(lVar13 + 4) != 0) {
            *(int *)(lVar13 + 4) = *(int *)(lVar13 + 4) + -1;
          }
          if ((bVar8) && (uVar18 == param_4)) {
            lVar13 = FUN_18017ea70();
            *(int *)(lVar13 + 4) = *(int *)(lVar13 + 4) + 1;
            if (param_2 + 0x180 == 0) {
              bVar8 = false;
              pfVar16 = local_150;
            }
            else {
              auVar6._8_8_ = 0;
              auVar6._0_8_ = local_140[0]._8_8_;
              local_140[0] = auVar6 << 0x40;
              cVar9 = FUN_1804514f0(local_140,param_2 + 0x180,8);
              if (cVar9 == '\0') {
                bVar8 = false;
                pfVar16 = local_150;
              }
              else {
                bVar8 = true;
                pfVar16 = (float *)local_140[0]._0_8_;
              }
            }
            lVar13 = FUN_18017ea70();
            if (*(int *)(lVar13 + 4) != 0) {
              *(int *)(lVar13 + 4) = *(int *)(lVar13 + 4) + -1;
            }
            if (!bVar8) {
              pfVar16 = (float *)0x0;
            }
            lVar13 = FUN_18017ea70();
            *(int *)(lVar13 + 4) = *(int *)(lVar13 + 4) + 1;
            if (param_2 + 0x1e0 == 0) {
              bVar8 = false;
              pfVar19 = local_150;
            }
            else {
              auVar7._8_8_ = 0;
              auVar7._0_8_ = local_140[0]._8_8_;
              local_140[0] = auVar7 << 0x40;
              cVar9 = FUN_1804514f0(local_140,param_2 + 0x1e0,8);
              if (cVar9 == '\0') {
                bVar8 = false;
                pfVar19 = local_150;
              }
              else {
                bVar8 = true;
                pfVar19 = (float *)local_140[0]._0_8_;
              }
            }
            lVar13 = FUN_18017ea70();
            if (*(int *)(lVar13 + 4) != 0) {
              *(int *)(lVar13 + 4) = *(int *)(lVar13 + 4) + -1;
            }
            if (!bVar8) {
              pfVar19 = (float *)0x0;
            }
            if ((pfVar16 != (float *)0x0) && (pfVar19 != (float *)0x0)) {
              fStack_114 = DAT_18086d930._12_4_;
              fStack_118 = DAT_18086d930._8_4_;
              local_120._4_4_ = DAT_18086d930._4_4_;
              local_120._0_4_ = DAT_18086d930._0_4_;
              sVar12 = (short)local_158;
              fVar28 = (float)local_120._0_4_;
              fVar5 = fStack_114;
              fVar21 = fStack_118;
              fVar20 = (float)local_120._4_4_;
              _local_120 = _DAT_18086d930;
              do {
                if (((int)param_4 <= iVar17) || ((int)param_4 <= (int)param_3)) goto LAB_1803da632;
                fVar25 = fVar5;
                fVar26 = fVar21;
                fVar27 = fVar20;
                lVar13 = FUN_18017ea70();
                *(int *)(lVar13 + 4) = *(int *)(lVar13 + 4) + 1;
                cVar9 = '\0';
                if (pfVar19 + (ulonglong)param_3 * 4 != (float *)0x0) {
                  local_140[0] = (undefined1  [16])0x0;
                  cVar9 = FUN_1804514f0(local_140,pfVar19 + (ulonglong)param_3 * 4,0x10);
                  if (cVar9 == '\0') {
                    cVar9 = '\0';
                  }
                  else {
                    local_100[0] = (float)local_140[0]._0_4_;
                    local_100[1] = (float)local_140[0]._4_4_;
                    local_100[2] = (float)local_140[0]._8_4_;
                    local_100[3] = (float)local_140[0]._12_4_;
                    cVar9 = '\x01';
                  }
                }
                local_f0[0] = cVar9;
                lVar13 = FUN_18017ea70();
                if (*(int *)(lVar13 + 4) != 0) {
                  *(int *)(lVar13 + 4) = *(int *)(lVar13 + 4) + -1;
                }
                lVar13 = (longlong)pfVar16 + (ulonglong)param_3 * 2;
                lVar14 = FUN_18017ea70();
                *(int *)(lVar14 + 4) = *(int *)(lVar14 + 4) + 1;
                bVar8 = false;
                if (lVar13 != 0) {
                  local_158 = local_158 & 0xffff0000;
                  cVar10 = FUN_1804514f0(&local_158,lVar13,2);
                  if (cVar10 == '\0') {
                    bVar8 = false;
                  }
                  else {
                    bVar8 = true;
                    sVar12 = (short)local_158;
                  }
                }
                lVar13 = FUN_18017ea70();
                if (*(int *)(lVar13 + 4) != 0) {
                  *(int *)(lVar13 + 4) = *(int *)(lVar13 + 4) + -1;
                }
                if (((cVar9 == '\0') || (!bVar8)) || (sVar12 < -1)) goto LAB_1803da632;
                fVar20 = 0.0;
                pfVar15 = local_100;
                do {
                  fVar21 = *pfVar15;
                  sVar11 = thunk_FUN_180624430(fVar21);
                  if (0 < sVar11) goto LAB_1803da632;
                  pfVar15 = pfVar15 + 1;
                  fVar20 = fVar20 + fVar21 * fVar21;
                } while (pfVar15 != (float *)local_f0);
                if ((fVar20 < 0.5) || (1.5 < fVar20)) goto LAB_1803da632;
                pfVar15 = local_100;
                if (fVar20 < 0.0) {
                  fVar20 = (float)FUN_18061e150(fVar20);
                }
                else {
                  fVar20 = SQRT(fVar20);
                }
                do {
                  *pfVar15 = *pfVar15 / fVar20;
                  pfVar15 = pfVar15 + 1;
                } while (pfVar15 != (float *)local_f0);
                fVar20 = (local_100[3] * fVar27 - local_100[0] * fVar26) + local_100[1] * fVar25 +
                         local_100[2] * fVar28;
                fVar21 = ((local_100[3] * fVar26 + local_100[0] * fVar27) - local_100[1] * fVar28) +
                         local_100[2] * fVar25;
                fVar5 = ((local_100[3] * fVar25 - local_100[0] * fVar28) - local_100[1] * fVar27) -
                        local_100[2] * fVar26;
                param_3 = (uint)sVar12;
                iVar17 = iVar17 + 1;
                fVar28 = (local_100[3] * fVar28 + local_100[0] * fVar25 + local_100[1] * fVar26) -
                         local_100[2] * fVar27;
                local_120._4_4_ = fVar20;
                local_120._0_4_ = fVar28;
                fStack_118 = fVar21;
                fStack_114 = fVar5;
              } while (-1 < (int)param_3);
              fVar20 = 0.0;
              auVar22 = ZEXT864(0);
              pfVar16 = (float *)local_120;
              do {
                fVar21 = *pfVar16;
                pfVar16 = pfVar16 + 1;
                fVar21 = auVar22._0_4_ + fVar21 * fVar21;
                auVar22 = ZEXT464((uint)fVar21);
              } while (pfVar16 != local_110);
              sVar12 = thunk_FUN_180624430(fVar21);
              if (((sVar12 < 1) && (fVar21 = auVar22._0_4_, 0.5 <= fVar21)) && (fVar21 <= 1.5)) {
                pfVar16 = (float *)local_120;
                if (fVar21 < 0.0) {
                  fVar21 = (float)FUN_18061e150(auVar22._0_8_);
                }
                else {
                  fVar21 = SQRT(fVar21);
                }
                do {
                  *pfVar16 = *pfVar16 / fVar21;
                  pfVar16 = pfVar16 + 1;
                } while (pfVar16 != local_110);
                fVar23 = -(float)local_120._0_4_;
                fStack_118 = -fStack_118;
                fVar24 = -(float)local_120._4_4_;
                fVar2 = fVar24 * fVar20;
                fVar3 = fStack_118 * fVar20;
                fVar4 = fVar23 * fVar20;
                fVar21 = (fVar2 - fVar3) + (fVar2 - fVar3);
                fVar5 = (fVar4 - fVar24) + (fVar4 - fVar24);
                fVar28 = (fStack_118 - fVar4) + (fStack_118 - fVar4);
                fVar25 = (fVar23 - fVar2) + (fVar23 - fVar2);
                fVar26 = (fVar3 - fVar4) + (fVar3 - fVar4);
                fVar27 = (fVar2 - fStack_118) + (fVar2 - fStack_118);
                fVar1 = (fVar3 - fVar23) + (fVar3 - fVar23);
                fVar3 = (fVar24 - fVar3) + (fVar24 - fVar3);
                fVar2 = (fVar4 - fVar2) + (fVar4 - fVar2);
                *local_150 = (fVar24 * fVar5 - fVar28 * fStack_118) + fStack_114 * fVar21 + 1.0;
                local_150[1] = (fVar21 * fStack_118 - fVar5 * fVar23) + fVar28 * fStack_114 + fVar20
                ;
                local_150[2] = (fVar28 * fVar23 - fVar21 * fVar24) + fVar5 * fStack_114 + fVar20;
                local_150[3] = (fVar25 * fVar24 - fVar26 * fStack_118) +
                               fVar27 * fStack_114 + fVar20;
                local_150[4] = (fVar27 * fStack_118 - fVar25 * fVar23) + fVar26 * fStack_114 + 1.0;
                local_150[5] = (fVar26 * fVar23 - fVar27 * fVar24) + fVar25 * fStack_114 + 0.0;
                local_150[6] = (fVar2 * fVar24 - fVar1 * fStack_118) + fVar3 * fStack_114 + 0.0;
                local_150[7] = (fVar3 * fStack_118 - fVar2 * fVar23) + fVar1 * fStack_114 + 0.0;
                local_150[8] = (fVar1 * fVar23 - fVar3 * fVar24) + fVar2 * fStack_114 + 1.0;
                *(undefined1 *)(local_150 + 9) = 1;
              }
            }
          }
        }
      }
    }
  }
LAB_1803da632:
  *(undefined1 *)(local_150 + 9) = 0;
                    /* WARNING: Read-only address (ram,0x00018086d930) is written */
}



