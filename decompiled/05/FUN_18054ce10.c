// FUN_18054ce10 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18054ce10 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18054ce10(longlong param_1,byte param_2,int *param_3,undefined8 param_4,int param_5)

{
  longlong lVar1;
  undefined8 uVar2;
  uint uVar3;
  char cVar4;
  float *pfVar5;
  longlong lVar6;
  undefined4 *puVar7;
  float *pfVar8;
  undefined1 *puVar9;
  undefined4 *puVar10;
  undefined1 *puVar11;
  int *piVar12;
  float fVar13;
  int iVar14;
  int iVar15;
  ulonglong uVar16;
  bool bVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auStack_f8 [32];
  char *local_d8;
  undefined4 local_d0;
  undefined1 local_c8;
  undefined *local_c0;
  undefined1 local_b0;
  int *local_a8;
  float *local_a0;
  longlong local_98;
  uint *local_90;
  byte *local_88;
  undefined4 *local_80;
  int *local_78;
  float *local_70;
  int local_68 [2];
  byte local_60 [8];
  float local_58;
  float local_54;
  float local_50;
  uint local_4c;
  ulonglong local_48;
  
  local_48 = DAT_1808d5f00 ^ (ulonglong)auStack_f8;
  local_4c = (uint)param_2;
  local_54 = 5.60519e-45;
  pfVar5 = (float *)(param_1 + 0x2a8 + (ulonglong)param_2 * 4);
  fVar13 = *pfVar5;
  local_58 = 0.0;
  local_68[0] = 0;
  pfVar8 = &local_58;
  if (-1 < (int)fVar13) {
    pfVar8 = pfVar5;
  }
  pfVar5 = &local_54;
  if ((int)fVar13 < 5) {
    pfVar5 = pfVar8;
  }
  local_50 = *pfVar5;
  local_54 = -NAN;
  local_a8 = param_3;
  local_60[0] = param_2;
  FUN_180488c60();
  local_58 = (float)*param_3;
  if (local_60[0] == 0) {
    local_d8 = "%.0f HP";
    if (*param_3 == param_5) {
      local_d8 = "FL";
    }
  }
  else {
    local_d8 = "%.0f%%";
  }
  local_b0 = 0;
  local_c0 = &DAT_18082a25c;
  if (local_60[0] != 0) {
    local_c0 = &DAT_18085d5ac;
  }
  local_c8 = 1;
  local_d0 = 0x3f800000;
  auVar18._0_4_ = (float)local_68[0];
  auVar18._4_12_ = SUB1612(ZEXT816(0),4);
  auVar19._0_4_ = (float)param_5;
  auVar19._4_12_ = SUB1612(ZEXT816(0),4);
  cVar4 = FUN_18048a250("Base Value",&local_58,auVar18._0_8_,auVar19._0_8_);
  if (cVar4 != '\0') {
    auVar19 = vroundps_avx(ZEXT416((uint)ABS(local_58)),0);
    auVar18 = vcmpss_avx(ZEXT416((uint)(ABS(local_58) - auVar19._0_4_)),ZEXT416(0x3f000000),0);
    *param_3 = (int)(float)((uint)((float)(auVar18._0_4_ & 0x3f800000) + auVar19._0_4_) |
                           (uint)local_58 & 0x80000000);
    FUN_18050cd00();
  }
  FUN_180488f10();
  FUN_180516b10("Used whenever no hotkey preset is active.");
  if (local_50 == 0.0) {
    FUN_180516b10("No presets yet. Add one below to switch this value with a shortcut.");
  }
  else {
    local_a0 = &local_50;
    local_90 = &local_4c;
    local_88 = local_60;
    local_80 = &param_5;
    local_78 = local_68;
    local_70 = &local_54;
    local_98 = param_1;
    FUN_180488c60();
    FUN_18054d330(&local_a0);
    FUN_180488f10();
  }
  if (-1 < (int)local_54) {
    DAT_180c62f48 = 0;
    DAT_180c62fe0 = 0;
    DAT_1808e4f84 = 0xffffffff;
    DAT_180bbecdf = 0;
    DAT_180bbecde = 0;
    lVar6 = FUN_180439770();
    fVar13 = local_54;
    *(undefined8 *)(lVar6 + 0x420) = 0;
    bVar17 = local_4c != 0;
    local_58 = local_54;
    FUN_1800b5ba0(param_1);
    uVar16 = (ulonglong)bVar17;
    if (-1 < (int)fVar13) {
      iVar14 = *(int *)(param_1 + 0x2a8 + uVar16 * 4);
      if ((int)fVar13 < iVar14) {
        iVar15 = (int)fVar13 + 1;
        if (iVar15 < iVar14) {
          do {
            if (fVar13 == 0.0) {
              lVar6 = 0x5a0;
              if (!bVar17) {
                lVar6 = 0x530;
              }
            }
            else if (bVar17) {
              lVar6 = ((longlong)((int)fVar13 + -1) + 3) * 0x70;
            }
            else {
              lVar6 = (longlong)((int)fVar13 + -1) * 0x70;
            }
            puVar11 = (undefined1 *)(lVar6 + param_1);
            lVar6 = (longlong)(int)fVar13;
            if (iVar15 == 0) {
              puVar9 = (undefined1 *)(param_1 + 0x530);
              if (bVar17) {
                puVar9 = (undefined1 *)(param_1 + 0x5a0);
              }
            }
            else {
              lVar1 = lVar6;
              if (bVar17) {
                lVar1 = lVar6 + 3;
              }
              puVar9 = (undefined1 *)(lVar1 * 0x70 + param_1);
            }
            *puVar11 = *puVar9;
            uVar2 = *(undefined8 *)(puVar9 + 0x10);
            *(undefined8 *)(puVar11 + 8) = *(undefined8 *)(puVar9 + 8);
            *(undefined8 *)(puVar11 + 0x10) = uVar2;
            *(undefined8 *)(puVar11 + 0x18) = *(undefined8 *)(puVar9 + 0x18);
            if (iVar15 == 0) {
              lVar6 = 0x598;
              if (!bVar17) {
                lVar6 = 0x52c;
              }
              puVar10 = (undefined4 *)(lVar6 + param_1);
            }
            else {
              lVar1 = param_1;
              if (bVar17) {
                lVar1 = param_1 + 0x150;
              }
              puVar10 = (undefined4 *)(lVar1 + lVar6 * 0x70 + 0x68);
            }
            if (fVar13 == 0.0) {
              puVar7 = (undefined4 *)(param_1 + 0x598);
              if (!bVar17) {
                puVar7 = (undefined4 *)(param_1 + 0x52c);
              }
            }
            else {
              lVar6 = (longlong)((int)fVar13 + -1) * 0x70;
              if (bVar17) {
                lVar6 = lVar6 + 0x150;
              }
              puVar7 = (undefined4 *)(lVar6 + param_1 + 0x68);
            }
            *puVar7 = *puVar10;
            iVar14 = *(int *)(param_1 + 0x2a8 + uVar16 * 4);
            iVar15 = (int)fVar13 + 2;
            fVar13 = (float)((int)fVar13 + 1);
          } while (iVar15 < iVar14);
          param_3 = local_a8;
          fVar13 = local_58;
        }
        *(int *)(param_1 + 0x2a8 + uVar16 * 4) = iVar14 + -1;
        FUN_1800b5ac0(param_1,bVar17);
        piVar12 = (int *)(param_1 + 0x2a4);
        if (!bVar17) {
          piVar12 = (int *)(param_1 + 0x2a0);
        }
        if ((int)fVar13 < *piVar12) {
          *piVar12 = *piVar12 + -1;
        }
        FUN_1800b5ba0(param_1);
      }
    }
    FUN_18050cd00();
  }
  FUN_180488c60();
  cVar4 = FUN_18048b0e0("Add Hotkey Preset",&DAT_180858020,(int)local_50 < 4);
  if (cVar4 != '\0') {
    DAT_180c62f48 = 0;
    DAT_180c62fe0 = 0;
    DAT_1808e4f84 = 0xffffffff;
    DAT_180bbecdf = 0;
    DAT_180bbecde = 0;
    lVar6 = FUN_180439770();
    uVar3 = local_4c;
    *(undefined8 *)(lVar6 + 0x420) = 0;
    FUN_1800b5ba0(param_1);
    lVar6 = 0x2ac;
    if (uVar3 == 0) {
      lVar6 = 0x2a8;
    }
    if (*(int *)(lVar6 + param_1) != 4) {
      FUN_1800b5ac0(param_1,uVar3 != 0);
      iVar14 = *(int *)(lVar6 + param_1);
      *(int *)(lVar6 + param_1) = iVar14 + 1;
      if (uVar3 == 0) {
        piVar12 = (int *)(param_1 + 0x2a0);
      }
      else {
        piVar12 = (int *)(param_1 + 0x2a4);
      }
      *piVar12 = iVar14;
    }
    FUN_18050cd00();
  }
  cVar4 = FUN_18048b0e0("Reset Base Value",&DAT_180829a4c,1);
  if (cVar4 != '\0') {
    iVar14 = 0x65;
    if (local_60[0] != 0) {
      iVar14 = 0x50;
    }
    *param_3 = iVar14;
    FUN_18050cd00();
  }
  FUN_180488f10();
  if (local_50 == 5.60519e-45) {
    FUN_180516b10("All four preset slots are in use. Edit or remove an existing preset.");
  }
}



