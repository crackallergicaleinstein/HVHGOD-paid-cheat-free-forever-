// FUN_18029af50 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18029af50 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18029af50(undefined8 param_1,int param_2,float param_3,float param_4,float param_5,
                  float param_6,float param_7,undefined4 param_8,float param_9,char param_10,
                  undefined4 param_11)

{
  char cVar1;
  short sVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  undefined8 uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined1 auVar14 [64];
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined1 auStack_188 [32];
  float local_168;
  float *local_158;
  undefined8 local_150;
  float local_148 [2];
  float local_140 [2];
  float local_138 [2];
  float local_130 [2];
  float local_128 [2];
  float local_120 [2];
  float local_118 [8];
  float local_f8;
  float local_f4;
  float local_f0;
  float local_e8;
  float local_e4;
  float local_e0;
  float local_dc;
  float local_d8;
  float local_d4;
  float local_d0;
  float local_cc;
  ulonglong local_c8;
  
  local_c8 = DAT_1808d5f00 ^ (ulonglong)auStack_188;
  auVar14 = ZEXT464((uint)param_5);
  sVar2 = thunk_FUN_180624430(param_3 + param_4 + param_5);
  if (0 < sVar2) {
  }
  cVar1 = (char)((uint)param_8 >> 0x18);
  if (cVar1 == '\0') {
  }
  fVar11 = 6.0;
  fVar8 = 48.0;
  local_130[0] = 20.0;
  local_140[0] = 48.0;
  local_148[0] = 6.0;
  local_138[0] = param_6;
  sVar2 = thunk_FUN_180624430();
  pfVar5 = local_138;
  if (0 < sVar2) {
    pfVar5 = local_130;
  }
  pfVar4 = local_148;
  if (fVar11 <= *pfVar5) {
    pfVar4 = pfVar5;
  }
  pfVar3 = local_140;
  if (*pfVar5 <= fVar8) {
    pfVar3 = pfVar4;
  }
  local_120[0] = 15.0;
  local_128[0] = param_7;
  fVar18 = *pfVar3;
  local_148[0] = fVar8;
  local_140[0] = fVar11;
  sVar2 = thunk_FUN_180624430();
  fVar16 = 0.5;
  pfVar5 = local_128;
  if (0 < sVar2) {
    pfVar5 = local_120;
  }
  local_118[4] = 0.5;
  fVar9 = 4.0;
  pfVar4 = local_140;
  if (fVar11 <= *pfVar5) {
    pfVar4 = pfVar5;
  }
  pfVar3 = local_148;
  if (*pfVar5 <= fVar8) {
    pfVar3 = pfVar4;
  }
  local_118[2] = 1.5;
  local_118[6] = 4.0;
  fVar11 = *pfVar3;
  local_118[0] = param_9;
  sVar2 = thunk_FUN_180624430();
  pfVar5 = local_118;
  if (0 < sVar2) {
    pfVar5 = local_118 + 2;
  }
  pfVar4 = local_118 + 4;
  if (fVar16 <= *pfVar5) {
    pfVar4 = pfVar5;
  }
  pfVar6 = local_118 + 6;
  if (*pfVar5 <= fVar9) {
    pfVar6 = pfVar4;
  }
  local_f8 = *pfVar6;
  fVar8 = (float)FUN_180637540(auVar14._0_8_);
  fVar9 = (float)FUN_180638e00(auVar14._0_8_);
  if (param_2 != 1) {
    fVar10 = 0.0;
  }
  else {
    fVar10 = fVar11 * 0.6;
  }
  local_f4 = fVar9 * 0.0;
  local_f0 = fVar8 * 0.0;
  fVar12 = (fVar8 * fVar10 + param_3) - local_f4;
  fVar11 = -fVar11;
  fVar10 = fVar9 * fVar10 + param_4 + local_f0;
  if (param_2 == 1) {
    fVar11 = fVar11 * 0.4;
  }
  fVar17 = fVar8 * fVar11 + param_3;
  fVar19 = fVar9 * fVar11 + param_4;
  fVar13 = fVar17 - -fVar18 * fVar16 * fVar9;
  fVar15 = -fVar18 * fVar16 * fVar8 + fVar19;
  fVar19 = fVar18 * fVar16 * fVar8 + fVar19;
  fVar17 = fVar17 - fVar18 * fVar16 * fVar9;
  local_d8 = fVar17;
  local_d4 = fVar19;
  if (param_2 == 2) {
    local_e8 = fVar13;
    local_e4 = fVar15;
    local_e0 = fVar12;
    local_dc = fVar10;
    if (param_10 == '\0') {
      uVar7 = 0;
      local_168 = local_f8;
    }
    else {
      fVar11 = *pfVar6;
      local_168 = fVar11 + 2.0;
      local_158 = &local_e8;
      local_150 = 6;
      FUN_180433590(param_1,&local_158,param_11,0);
      uVar7 = 0;
      local_168 = fVar11;
    }
  }
  else {
    local_e8 = fVar12;
    local_e4 = fVar10;
    if (param_2 == 1) {
      fVar11 = *pfVar3 * 0.25 + fVar11;
      fVar8 = (fVar11 * fVar8 + param_3) - local_f4;
      fVar11 = fVar11 * fVar9 + param_4 + local_f0;
      if (cVar1 != '\0') {
        local_158 = &local_e8;
        local_150 = 6;
        local_e0 = fVar17;
        local_dc = fVar19;
        local_d8 = fVar8;
        local_d4 = fVar11;
        FUN_180432700(param_1,&local_158,param_8);
        if (cVar1 != '\0') {
          local_158 = &local_e8;
          local_150 = 6;
          local_e8 = fVar12;
          local_e4 = fVar10;
          local_e0 = fVar8;
          local_dc = fVar11;
          local_d8 = fVar13;
          local_d4 = fVar15;
          FUN_180432700(param_1,&local_158,param_8);
        }
      }
      if (param_10 == '\0') {
      }
      local_168 = *pfVar6;
      local_150 = 8;
      uVar7 = 1;
      local_e8 = fVar12;
      local_e4 = fVar10;
      local_e0 = fVar17;
      local_dc = fVar19;
      local_d8 = fVar8;
      local_d4 = fVar11;
      local_d0 = fVar13;
      local_cc = fVar15;
      param_8 = param_11;
      goto LAB_18029b44d;
    }
    if (cVar1 != '\0') {
      local_158 = &local_e8;
      local_150 = 6;
      local_e0 = fVar13;
      local_dc = fVar15;
      FUN_180432700(param_1,&local_158,param_8);
    }
    if (param_10 == '\0') {
    }
    uVar7 = 1;
    local_168 = *pfVar6;
    local_e8 = fVar12;
    local_e4 = fVar10;
    local_e0 = fVar13;
    local_dc = fVar15;
    local_d8 = fVar17;
    local_d4 = fVar19;
    param_8 = param_11;
  }
  local_150 = 6;
LAB_18029b44d:
  local_158 = &local_e8;
  FUN_180433590(param_1,&local_158,param_8,uVar7);
}



