// FUN_1802bb6a0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802bb6a0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1802bb6a0(undefined8 *param_1,float param_2,float param_3)

{
  float *pfVar1;
  undefined4 *puVar2;
  float *pfVar3;
  uint uVar4;
  uint uVar5;
  float *pfVar6;
  undefined4 *puVar7;
  float *pfVar8;
  int iVar9;
  longlong lVar10;
  undefined8 *puVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  longlong lVar15;
  float fVar16;
  undefined1 extraout_var [56];
  undefined1 extraout_var_00 [56];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  float fVar19;
  float fVar20;
  undefined1 auVar21 [64];
  undefined1 auVar22 [64];
  undefined1 auVar23 [64];
  undefined1 auVar24 [64];
  float fVar25;
  undefined1 auVar26 [64];
  undefined1 auVar27 [64];
  undefined1 auVar28 [64];
  undefined1 auStack_1c8 [32];
  float local_1a8;
  uint local_1a0;
  undefined4 local_198;
  float local_194 [3];
  undefined8 *local_188;
  longlong local_180;
  float *local_178;
  longlong local_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined4 local_148;
  float local_138 [20];
  ulonglong local_e8;
  
  local_e8 = DAT_1808d5f00 ^ (ulonglong)auStack_1c8;
  auVar23 = ZEXT464((uint)(param_2 - *(float *)*param_1));
  auVar24 = ZEXT464((uint)(param_3 + *(float *)*param_1));
  if (*(char *)param_1[6] == '\0') {
    pfVar8 = local_138 + 1;
    iVar13 = *(int *)(param_1[10] + 8);
    iVar9 = 2;
    if (iVar13 == 1) {
      iVar9 = 8;
    }
    iVar14 = 0;
    local_138[0x10] = 0.0;
    local_138[0x11] = 0.0;
    local_168 = 0;
    local_160 = 0;
    local_158 = 0;
    local_150 = 0;
    local_148 = 0;
    local_138[0] = 0.0;
    local_138[1] = 0.0;
    local_138[2] = 0.0;
    local_138[3] = 0.0;
    local_138[4] = 0.0;
    local_138[5] = 0.0;
    local_138[6] = 0.0;
    local_138[7] = 0.0;
    local_138[8] = 0.0;
    local_138[9] = 0.0;
    local_138[10] = 0.0;
    local_138[0xb] = 0.0;
    local_138[0xc] = 0.0;
    local_138[0xd] = 0.0;
    local_138[0xe] = 0.0;
    local_138[0xf] = 0.0;
    puVar11 = &local_168;
    do {
      auVar23._0_8_ = FUN_180242260();
      auVar23._8_56_ = extraout_var_00;
      pfVar6 = (float *)param_1[3];
      puVar7 = (undefined4 *)param_1[0xb];
      fVar16 = (float)auVar23._0_8_;
      pfVar1 = (float *)param_1[5];
      pfVar8[-1] = (fVar16 + *pfVar6) * *(float *)param_1[2] + *(float *)param_1[1];
      puVar2 = (undefined4 *)param_1[0xc];
      pfVar3 = (float *)param_1[8];
      *pfVar8 = (fVar16 + *pfVar6) * *pfVar1 + *(float *)param_1[4];
      auVar18._0_4_ = fVar16 / *pfVar3;
      auVar18._4_12_ = auVar23._4_12_;
      local_1a8 = (float)*puVar2;
      puVar7 = (undefined4 *)FUN_1802bae10(local_194,param_1[10],auVar18._0_8_,*puVar7);
      iVar14 = iVar14 + 1;
      pfVar8 = pfVar8 + 2;
      *(undefined4 *)puVar11 = *puVar7;
      puVar11 = (undefined8 *)((longlong)puVar11 + 4);
    } while (iVar14 <= iVar9);
    local_180 = 3;
    if (iVar13 == 1) {
      local_180 = 9;
    }
    local_188 = &local_168;
    local_178 = local_138;
    local_170 = local_180 * 2;
    local_1a8 = *(float *)*param_1 + *(float *)*param_1 + *(float *)param_1[9];
    FUN_180433bf0(param_1[7],&local_178,&local_188);
  }
  else {
    FUN_1804353e0(param_1[7],0);
    auVar27 = ZEXT464(0x3f800000);
    fVar16 = 0.125;
    auVar26 = ZEXT464(0x3f000000);
    lVar15 = ((longlong *)param_1[7])[1];
    lVar10 = *(longlong *)param_1[7];
    auVar28 = ZEXT864(0);
    uVar12 = 0;
    local_194[0] = 1.0;
    local_194[1] = 0.0;
    do {
      auVar22._0_8_ = FUN_180242260(auVar23._0_8_,auVar24._0_8_,(float)uVar12 * fVar16);
      auVar22._8_56_ = extraout_var;
      auVar21 = ZEXT1664(auVar22._0_16_);
      auVar17._0_4_ = (float)auVar22._0_8_ / *(float *)param_1[8];
      auVar17._4_12_ = auVar22._4_12_;
      pfVar8 = local_194 + 1;
      if (auVar28._0_4_ <= auVar17._0_4_) {
        pfVar8 = local_194 + 2;
      }
      local_194[2] = auVar17._0_4_;
      pfVar6 = local_194;
      if (auVar17._0_4_ <= auVar27._0_4_) {
        pfVar6 = pfVar8;
      }
      fVar25 = auVar26._0_4_;
      fVar19 = (auVar27._0_4_ - *pfVar6 * 0.85) * *(float *)param_1[9] * fVar25 + *(float *)*param_1
      ;
      auVar18 = vmaxss_avx(ZEXT416((uint)(fVar19 - fVar25)),auVar28._0_16_);
      auVar22 = ZEXT1664(auVar18);
      fVar25 = fVar19 + fVar25;
      local_1a8 = *(float *)param_1[0xc];
      FUN_1802bae10(&local_198,param_1[10],auVar17._0_8_,*(undefined4 *)param_1[0xb]);
      uVar4 = local_198;
      auVar18 = vminss_avx(auVar27._0_16_,ZEXT416((uint)(fVar19 + fVar19)));
      local_198 = CONCAT13((char)(int)(auVar18._0_4_ * (float)(local_198 >> 0x18)),
                           (undefined3)local_198);
      fVar19 = auVar21._0_4_ + *(float *)param_1[3];
      fVar20 = fVar19 * *(float *)param_1[2] + *(float *)param_1[1];
      fVar19 = fVar19 * *(float *)param_1[5] + *(float *)param_1[4];
      local_1a8 = auVar26._0_4_;
      local_1a0 = uVar4 & 0xffffff;
      FUN_1804354e0(param_1[7],fVar20 - fVar25 * *(float *)param_1[5],
                    fVar25 * *(float *)param_1[2] + fVar19,auVar26._0_8_);
      uVar5 = local_198;
      local_1a0 = local_198;
      local_1a8 = auVar26._0_4_;
      FUN_1804354e0(param_1[7],fVar20 - auVar22._0_4_ * *(float *)param_1[5],
                    auVar22._0_4_ * *(float *)param_1[2] + fVar19,auVar26._0_8_);
      local_1a0 = uVar5;
      local_1a8 = auVar26._0_4_;
      FUN_1804354e0(param_1[7],auVar22._0_4_ * *(float *)param_1[5] + fVar20,
                    fVar19 - auVar22._0_4_ * *(float *)param_1[2],auVar26._0_8_);
      local_1a8 = auVar26._0_4_;
      local_1a0 = uVar4 & 0xffffff;
      FUN_1804354e0(param_1[7],fVar25 * *(float *)param_1[5] + fVar20,
                    fVar19 - fVar25 * *(float *)param_1[2],auVar26._0_8_);
      uVar12 = uVar12 + 1;
    } while (uVar12 < 9);
    iVar13 = (int)((lVar15 - lVar10) / 0x14) + 5;
    lVar15 = 8;
    do {
      lVar10 = 3;
      iVar9 = iVar13;
      do {
        local_1a8 = (float)(iVar9 + -4);
        FUN_180435650(param_1[7],iVar9 + -5,iVar9 + -1,iVar9);
        iVar9 = iVar9 + 1;
        lVar10 = lVar10 + -1;
      } while (lVar10 != 0);
      iVar13 = iVar13 + 4;
      lVar15 = lVar15 + -1;
    } while (lVar15 != 0);
  }
}



