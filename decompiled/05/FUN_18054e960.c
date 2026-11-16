// FUN_18054e960 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18054e960 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18054e960(longlong param_1,byte param_2,int *param_3,int param_4,int param_5,uint param_6)

{
  int *piVar1;
  float fVar2;
  char cVar3;
  int iVar4;
  float *pfVar5;
  longlong lVar6;
  int *piVar7;
  float *pfVar8;
  int *piVar9;
  undefined8 *puVar10;
  int iVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  int local_res20 [2];
  undefined1 auStack_f8 [32];
  char *local_d8;
  undefined4 local_d0;
  undefined1 local_c8;
  undefined *local_c0;
  undefined1 local_b0;
  int local_a8 [6];
  undefined1 uStack_90;
  uint7 uStack_8f;
  undefined8 local_88;
  float *local_80;
  longlong local_78;
  uint *local_70;
  byte *local_68;
  undefined4 *local_60;
  int *local_58;
  float *local_50;
  byte local_48 [8];
  float local_40;
  float local_3c;
  float local_38;
  uint local_34;
  ulonglong local_30;
  
  local_30 = DAT_1808d5f00 ^ (ulonglong)auStack_f8;
  local_48[0] = param_2;
  local_34 = param_6;
  if ((int)param_6 < 0) {
    local_34 = (uint)param_2;
  }
  pfVar5 = (float *)(param_1 + 0xaf0 + (longlong)(int)local_34 * 4);
  local_40 = 5.60519e-45;
  fVar2 = *pfVar5;
  local_38 = 0.0;
  pfVar8 = &local_38;
  if (-1 < (int)fVar2) {
    pfVar8 = pfVar5;
  }
  pfVar5 = &local_40;
  if ((int)fVar2 < 5) {
    pfVar5 = pfVar8;
  }
  local_3c = *pfVar5;
  local_40 = -NAN;
  local_res20[0] = param_4;
  FUN_180488c60();
  local_38 = (float)*param_3;
  if (local_48[0] == 0) {
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
  if (local_48[0] != 0) {
    local_c0 = &DAT_18085d5ac;
  }
  local_c8 = 1;
  local_d0 = 0x3f800000;
  auVar12._0_4_ = (float)local_res20[0];
  auVar12._4_12_ = SUB1612(ZEXT816(0),4);
  auVar13._0_4_ = (float)param_5;
  auVar13._4_12_ = SUB1612(ZEXT816(0),4);
  cVar3 = FUN_18048a250("Base Value",&local_38,auVar12._0_8_,auVar13._0_8_);
  if (cVar3 != '\0') {
    auVar13 = vroundps_avx(ZEXT416((uint)ABS(local_38)),0);
    auVar12 = vcmpss_avx(ZEXT416((uint)(ABS(local_38) - auVar13._0_4_)),ZEXT416(0x3f000000),0);
    *param_3 = (int)(float)((uint)((float)(auVar12._0_4_ & 0x3f800000) + auVar13._0_4_) |
                           (uint)local_38 & 0x80000000);
    FUN_18050cd00();
  }
  FUN_180488f10();
  FUN_180516b10("Used whenever no hotkey preset is active.");
  if (local_3c == 0.0) {
    FUN_180516b10("No presets yet. Add one below to switch this value with a shortcut.");
  }
  else {
    local_80 = &local_3c;
    local_70 = &local_34;
    local_68 = local_48;
    local_60 = &param_5;
    local_58 = local_res20;
    local_50 = &local_40;
    local_78 = param_1;
    FUN_180488c60();
    FUN_18054edd0(&local_80);
    FUN_180488f10();
  }
  if (-1 < (int)local_40) {
    DAT_180c62f48 = 0;
    DAT_180c62fe0 = 0;
    DAT_1808e4f84 = 0xffffffff;
    DAT_180bbecdf = 0;
    DAT_180bbecde = 0;
    lVar6 = FUN_180439770();
    local_a8[1] = 4;
    local_a8[0] = 0;
    *(undefined8 *)(lVar6 + 0x420) = 0;
    lVar6 = (longlong)(int)local_34;
    iVar4 = *(int *)(param_1 + (lVar6 + 700) * 4);
    piVar1 = (int *)(param_1 + (lVar6 + 700) * 4);
    piVar9 = local_a8;
    if (-1 < iVar4) {
      piVar9 = piVar1;
    }
    piVar7 = local_a8 + 1;
    if (iVar4 < 5) {
      piVar7 = piVar9;
    }
    iVar4 = *piVar7;
    if ((-1 < (int)local_40) && ((int)local_40 < iVar4)) {
      iVar11 = (int)local_40 + 1;
      if (iVar11 < iVar4) {
        puVar10 = (undefined8 *)(((longlong)(int)local_40 + lVar6 * 4) * 0x70 + 0x3f8 + param_1);
        do {
          iVar11 = iVar11 + 1;
          *(undefined1 *)(puVar10 + -1) = *(undefined1 *)(puVar10 + 0xd);
          *puVar10 = puVar10[0xe];
          puVar10[1] = puVar10[0xf];
          puVar10[2] = puVar10[0x10];
          *(undefined4 *)(puVar10 + 0xc) = *(undefined4 *)(puVar10 + 0x1a);
          puVar10 = puVar10 + 0xe;
        } while (iVar11 < iVar4);
      }
      local_a8[4] = 0;
      local_a8[5] = 0;
      uStack_90 = 0;
      lVar6 = ((longlong)iVar4 + (lVar6 + 2) * 4) * 0x70;
      local_88 = 0;
      puVar10 = (undefined8 *)(lVar6 + 8 + param_1);
      *puVar10 = 0;
      puVar10[1] = (ulonglong)uStack_8f << 8;
      *(undefined8 *)(lVar6 + 0x18 + param_1) = 0;
      *(undefined1 *)(lVar6 + param_1) = 0;
      *(uint *)(lVar6 + 0x68 + param_1) = (local_34 & 1) * 0x40 + 0xb;
      *piVar1 = iVar4 + -1;
    }
    FUN_18050cd00();
  }
  FUN_180488c60();
  cVar3 = FUN_18048b0e0("Add Hotkey Preset",&DAT_180858020,(int)local_3c < 4);
  if (cVar3 != '\0') {
    DAT_180c62f48 = 0;
    DAT_180c62fe0 = 0;
    DAT_1808e4f84 = 0xffffffff;
    DAT_180bbecdf = 0;
    DAT_180bbecde = 0;
    lVar6 = FUN_180439770();
    local_a8[3] = 4;
    local_a8[2] = 0;
    *(undefined8 *)(lVar6 + 0x420) = 0;
    lVar6 = (longlong)(int)local_34 + 700;
    iVar4 = *(int *)(param_1 + lVar6 * 4);
    piVar1 = (int *)(param_1 + lVar6 * 4);
    piVar9 = local_a8 + 2;
    if (-1 < iVar4) {
      piVar9 = piVar1;
    }
    piVar7 = local_a8 + 3;
    if (iVar4 < 5) {
      piVar7 = piVar9;
    }
    iVar4 = *piVar7;
    if (iVar4 != 4) {
      local_a8[4] = 0;
      local_a8[5] = 0;
      uStack_90 = 0;
      lVar6 = ((longlong)(int)local_34 * 4 + 9 + (longlong)iVar4) * 0x70;
      local_88 = 0;
      puVar10 = (undefined8 *)(lVar6 + 8 + param_1);
      *puVar10 = 0;
      puVar10[1] = (ulonglong)uStack_8f << 8;
      *(undefined8 *)(lVar6 + 0x18 + param_1) = 0;
      *(undefined1 *)(lVar6 + param_1) = 0;
      *(uint *)(lVar6 + 0x68 + param_1) = (local_34 & 1) * 0x40 + 0xb;
      *piVar1 = iVar4 + 1;
    }
    FUN_18050cd00();
  }
  cVar3 = FUN_18048b0e0("Reset Base Value",&DAT_180829a4c,1);
  if (cVar3 != '\0') {
    iVar4 = 0x65;
    if (local_48[0] != 0) {
      iVar4 = 0x50;
    }
    *param_3 = iVar4;
    FUN_18050cd00();
  }
  FUN_180488f10();
  if (local_3c == 5.60519e-45) {
    FUN_180516b10("All four preset slots are in use. Edit or remove an existing preset.");
  }
}



