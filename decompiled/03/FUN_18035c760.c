// FUN_18035c760 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18035c760 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18035c760(longlong *param_1)

{
  char *pcVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined8 uVar5;
  char cVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined8 uVar11;
  undefined8 uVar12;
  byte bVar13;
  byte bVar14;
  char cVar15;
  char cVar16;
  int iVar17;
  DWORD DVar18;
  int iVar19;
  float *pfVar20;
  float *pfVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  longlong lVar24;
  undefined1 auVar25 [64];
  undefined1 auStack_238 [32];
  undefined4 local_218;
  undefined4 local_210;
  undefined4 local_208;
  undefined8 *local_200;
  undefined8 *local_1f8;
  float local_1e8;
  char local_1e4;
  undefined8 local_1d8;
  undefined4 local_1d0;
  undefined8 local_1c8;
  undefined4 local_1c0;
  float local_1b8 [6];
  float local_1a0 [2];
  undefined8 local_198;
  undefined4 local_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined4 local_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined4 local_110;
  undefined8 local_108;
  undefined4 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined8 uStack_e0;
  float local_d8;
  char local_d4 [4];
  undefined4 local_d0;
  undefined1 local_cc;
  undefined4 local_c8;
  undefined1 local_c4;
  undefined4 local_c0;
  undefined1 local_bc;
  undefined4 local_b8;
  undefined1 local_b4;
  undefined4 local_b0;
  undefined1 local_ac;
  undefined4 local_a8;
  undefined1 local_a4;
  undefined4 local_a0;
  undefined1 local_9c;
  float local_58 [3];
  float local_4c;
  ulonglong local_48;
  
  local_48 = DAT_1808d5f00 ^ (ulonglong)auStack_238;
  local_1b8[2] = *(float *)(*param_1 + 0x1a0);
  local_1b8[4] = 1.0;
  local_1b8[0] = 0.0;
  pfVar21 = local_1b8;
  if (0.0 <= local_1b8[2]) {
    pfVar21 = local_1b8 + 2;
  }
  pfVar20 = local_1b8 + 4;
  if (local_1b8[2] <= 1.0) {
    pfVar20 = pfVar21;
  }
  auVar9 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(*pfVar20 * 64.0)),1);
  local_1b8[5] = auVar9._0_4_ * 0.015625;
  local_1e8 = local_1b8[5] - 0.015625;
  local_1a0[0] = local_1b8[5] + 0.015625;
  pfVar21 = &local_1e8;
  if (local_1e8 < 0.015625) {
    pfVar21 = (float *)&DAT_180701e48;
  }
  if (0.984375 < local_1e8) {
    pfVar21 = (float *)&DAT_180701e44;
  }
  fVar2 = *pfVar21;
  pfVar21 = local_1b8 + 5;
  if (local_1b8[5] < 0.015625) {
    pfVar21 = (float *)&DAT_180701e48;
  }
  if (0.984375 < local_1b8[5]) {
    pfVar21 = (float *)&DAT_180701e44;
  }
  fVar3 = *pfVar21;
  pfVar21 = local_1a0;
  if (local_1a0[0] < 0.015625) {
    pfVar21 = (float *)&DAT_180701e48;
  }
  if (0.984375 < local_1a0[0]) {
    pfVar21 = (float *)&DAT_180701e44;
  }
  fVar4 = *pfVar21;
  local_d8 = 0.0;
  local_d4[0] = '\0';
  local_d0 = 0;
  local_cc = 0;
  local_c8 = 0;
  local_c4 = 0;
  local_c0 = 0;
  local_bc = 0;
  local_b8 = 0;
  local_b4 = 0;
  local_b0 = 0;
  local_ac = 0;
  local_a8 = 0;
  local_a4 = 0;
  local_a0 = 0;
  local_9c = 0;
  cVar6 = *(char *)param_1[1];
  if (cVar6 != '\0') {
    local_d8 = -1.0;
    local_d4[0] = '\x01';
  }
  uVar22 = (ulonglong)(-(uint)(cVar6 != '\0') & 8);
  uVar23 = (ulonglong)((cVar6 != '\0') + 1);
  pcVar1 = local_d4 + (uVar22 - 4);
  local_d4[0] = cVar6 != '\0';
  pcVar1[0] = '\0';
  pcVar1[1] = '\0';
  pcVar1[2] = -0x80;
  pcVar1[3] = -0x41;
  local_d4[uVar22] = '\0';
  local_58[0] = fVar3;
  local_58[1] = fVar2;
  local_58[2] = fVar4;
  pfVar21 = local_58;
  if (cVar6 == '\0') {
    local_1e8 = 5.60519e-45;
    lVar24 = 1;
    do {
      *(float *)(local_d4 + lVar24 * 8 + -4) = *pfVar21;
      local_d4[lVar24 * 8] = '\0';
      pfVar21 = pfVar21 + 1;
      lVar24 = lVar24 + 1;
    } while (pfVar21 != &local_4c);
  }
  else {
    local_1e8 = (float)((cVar6 != '\0') + 7);
    do {
      fVar2 = *pfVar21;
      *(float *)(local_d4 + uVar23 * 8 + -4) = fVar2;
      local_d4[uVar23 * 8] = '\x01';
      lVar24 = uVar23 + 1;
      uVar23 = uVar23 + 2;
      *(float *)(local_d4 + lVar24 * 8 + -4) = fVar2;
      local_d4[lVar24 * 8] = '\0';
      pfVar21 = pfVar21 + 1;
    } while (pfVar21 != &local_4c);
  }
  lVar24 = 0;
  do {
    auVar25 = ZEXT464(*(uint *)(local_d4 + lVar24 * 8 + -4));
    cVar6 = local_d4[lVar24 * 8];
    if (10 < *(int *)param_1[2] + 4) {
    }
    if ((DAT_180bbeab9 == '\0') && (cVar15 = FUN_180303ad0(4), cVar15 != '\0')) {
      DAT_180bbeab9 = '\x01';
      DAT_180bda15c = 4;
      DAT_180bda160 = GetCurrentThreadId();
      cVar15 = '\x01';
    }
    else {
      cVar15 = '\0';
    }
    local_1e4 = cVar15;
    if (cVar15 == '\0') goto LAB_18035cefe;
    *(int *)param_1[3] = *(int *)param_1[3] + 1;
    cVar16 = FUN_18035c380(param_1[4],auVar25._0_8_,cVar6);
    if (cVar16 == '\0') goto LAB_18035cefe;
    if (cVar6 != '\0') {
      puVar7 = (undefined8 *)param_1[6];
      puVar8 = (undefined8 *)param_1[5];
      uVar5 = puVar7[1];
      uVar11 = puVar7[2];
      uVar12 = puVar7[3];
      *puVar8 = *puVar7;
      puVar8[1] = uVar5;
      puVar8[2] = uVar11;
      puVar8[3] = uVar12;
      uVar5 = puVar7[5];
      uVar11 = puVar7[6];
      uVar12 = puVar7[7];
      puVar8[4] = puVar7[4];
      puVar8[5] = uVar5;
      puVar8[6] = uVar11;
      puVar8[7] = uVar12;
      uVar5 = puVar7[9];
      uVar11 = puVar7[10];
      uVar12 = puVar7[0xb];
      puVar8[8] = puVar7[8];
      puVar8[9] = uVar5;
      puVar8[10] = uVar11;
      puVar8[0xb] = uVar12;
      uVar5 = puVar7[0xd];
      puVar8[0xc] = puVar7[0xc];
      puVar8[0xd] = uVar5;
      puVar8[0xe] = puVar7[0xe];
    }
    puVar7 = (undefined8 *)param_1[6];
    local_148 = *(undefined8 *)((longlong)puVar7 + 0x3c);
    uStack_140 = *(undefined8 *)((longlong)puVar7 + 0x44);
    uStack_138 = *(undefined8 *)((longlong)puVar7 + 0x4c);
    uStack_130 = *(undefined8 *)((longlong)puVar7 + 0x54);
    local_128 = *(undefined8 *)((longlong)puVar7 + 0x5c);
    uStack_120 = *(undefined8 *)((longlong)puVar7 + 100);
    local_118 = *(undefined8 *)((longlong)puVar7 + 0x6c);
    local_110 = *(undefined4 *)((longlong)puVar7 + 0x74);
    local_188 = *puVar7;
    uStack_180 = puVar7[1];
    uStack_178 = puVar7[2];
    uStack_170 = puVar7[3];
    local_168 = puVar7[4];
    uStack_160 = puVar7[5];
    local_158 = puVar7[6];
    local_150 = *(undefined4 *)(puVar7 + 7);
    local_1c8 = *(undefined8 *)param_1[9];
    local_1c0 = *(undefined4 *)((undefined8 *)param_1[9] + 1);
    local_108 = *(undefined8 *)(param_1[8] + 0xc);
    local_100 = *(undefined4 *)(param_1[8] + 0x14);
    puVar8 = (undefined8 *)param_1[7];
    local_f8 = *puVar8;
    uStack_f0 = puVar8[1];
    uStack_e8 = *(undefined4 *)(puVar8 + 2);
    local_1f8 = &local_148;
    local_200 = &local_188;
    local_208 = *(undefined4 *)param_1[0xc];
    local_210 = *(undefined4 *)param_1[0xb];
    local_218 = *(undefined4 *)(param_1[10] + 8);
    auVar25 = ZEXT1664(auVar25._0_16_);
    iVar17 = FUN_180354ba0(&local_f8,&local_108,&local_1c8);
    puVar8 = (undefined8 *)param_1[0xd];
    local_198 = *puVar8;
    local_190 = *(undefined4 *)(puVar8 + 1);
    local_188 = *puVar7;
    uStack_180 = puVar7[1];
    uStack_178 = puVar7[2];
    uStack_170 = puVar7[3];
    local_168 = puVar7[4];
    uStack_160 = puVar7[5];
    local_158 = puVar7[6];
    local_150 = *(undefined4 *)(puVar7 + 7);
    auVar25 = ZEXT1664(auVar25._0_16_);
    cVar16 = FUN_180355330(iVar17,&local_188,&local_198);
    if (cVar16 != '\0') {
      local_1d8 = *puVar8;
      local_1d0 = *(undefined4 *)(puVar8 + 1);
      local_148 = *(undefined8 *)((longlong)puVar7 + 0x3c);
      uStack_140 = *(undefined8 *)((longlong)puVar7 + 0x44);
      uStack_138 = *(undefined8 *)((longlong)puVar7 + 0x4c);
      uStack_130 = *(undefined8 *)((longlong)puVar7 + 0x54);
      local_128 = *(undefined8 *)((longlong)puVar7 + 0x5c);
      uStack_120 = *(undefined8 *)((longlong)puVar7 + 100);
      local_118 = *(undefined8 *)((longlong)puVar7 + 0x6c);
      local_110 = *(undefined4 *)((longlong)puVar7 + 0x74);
      auVar25 = ZEXT1664(auVar25._0_16_);
      cVar16 = FUN_180355330(iVar17,&local_148,&local_1d8);
      if (cVar16 != '\0') {
        local_f8 = *puVar7;
        uStack_f0 = puVar7[1];
        uStack_e0 = puVar7[3];
        uStack_e8 = (undefined4)puVar7[2];
        uStack_e4 = (undefined4)((ulonglong)puVar7[2] >> 0x20);
        local_148 = puVar7[8];
        uStack_140 = puVar7[9];
        uStack_138 = puVar7[10];
        uStack_130 = puVar7[0xb];
        auVar25 = ZEXT1664(auVar25._0_16_);
        cVar16 = FUN_18035c380(param_1[4]);
        if (cVar16 == '\0') goto LAB_18035cefe;
        puVar7 = (undefined8 *)param_1[6];
        auVar10._8_8_ = uStack_f0;
        auVar10._0_8_ = local_f8;
        auVar9 = vshufps_avx(auVar10,auVar10,0x55);
        if (0.01 < ABS(auVar9._0_4_ - (float)*(undefined8 *)((longlong)puVar7 + 4))) {
LAB_18035cd18:
          bVar13 = 0;
        }
        else {
          auVar9 = vshufps_avx(auVar10,auVar10,0xaa);
          local_1c8._4_4_ = (float)((ulonglong)*(undefined8 *)((longlong)puVar7 + 4) >> 0x20);
          if ((0.01 < ABS(auVar9._0_4_ - local_1c8._4_4_)) ||
             (auVar9 = vshufps_avx(auVar10,auVar10,0xff),
             0.01 < ABS(auVar9._0_4_ - *(float *)((longlong)puVar7 + 0xc)))) goto LAB_18035cd18;
          bVar13 = 1;
        }
        uVar5 = puVar7[8];
        auVar9._8_8_ = uStack_140;
        auVar9._0_8_ = local_148;
        if (0.01 < ABS((float)local_148 - (float)uVar5)) {
LAB_18035cd66:
          bVar14 = 0;
        }
        else {
          auVar10 = vshufps_avx(auVar9,auVar9,0x55);
          local_1c8._4_4_ = (float)((ulonglong)uVar5 >> 0x20);
          if ((0.01 < ABS(auVar10._0_4_ - local_1c8._4_4_)) ||
             (auVar9 = vshufps_avx(auVar9,auVar9,0xaa),
             0.01 < ABS(auVar9._0_4_ - *(float *)(puVar7 + 9)))) goto LAB_18035cd66;
          bVar14 = 1;
        }
        local_188 = *(undefined8 *)((longlong)puVar7 + 0x3c);
        uStack_180 = *(undefined8 *)((longlong)puVar7 + 0x44);
        uStack_178 = *(undefined8 *)((longlong)puVar7 + 0x4c);
        uStack_170 = *(undefined8 *)((longlong)puVar7 + 0x54);
        local_168 = *(undefined8 *)((longlong)puVar7 + 0x5c);
        uStack_160 = *(undefined8 *)((longlong)puVar7 + 100);
        local_158 = *(undefined8 *)((longlong)puVar7 + 0x6c);
        local_150 = *(undefined4 *)((longlong)puVar7 + 0x74);
        local_148 = *puVar7;
        uStack_140 = puVar7[1];
        uStack_138 = puVar7[2];
        uStack_130 = puVar7[3];
        local_128 = puVar7[4];
        uStack_120 = puVar7[5];
        local_118 = puVar7[6];
        local_110 = *(undefined4 *)(puVar7 + 7);
        local_1d8 = *(undefined8 *)param_1[9];
        local_1d0 = *(undefined4 *)((undefined8 *)param_1[9] + 1);
        local_198 = *(undefined8 *)(param_1[8] + 0xc);
        local_190 = *(undefined4 *)(param_1[8] + 0x14);
        puVar8 = (undefined8 *)param_1[7];
        local_f8 = *puVar8;
        uStack_f0 = puVar8[1];
        uStack_e8 = *(undefined4 *)(puVar8 + 2);
        local_1f8 = &local_188;
        local_200 = &local_148;
        local_208 = *(undefined4 *)param_1[0xc];
        local_210 = *(undefined4 *)param_1[0xb];
        local_218 = *(undefined4 *)(param_1[10] + 8);
        auVar25 = ZEXT1664(auVar25._0_16_);
        local_1c8 = uVar5;
        iVar19 = FUN_180354ba0(&local_f8,&local_198,&local_1d8);
        if (iVar19 == iVar17) {
          puVar8 = (undefined8 *)param_1[0xd];
          local_1d8 = *puVar8;
          local_1d0 = *(undefined4 *)(puVar8 + 1);
          local_188 = *puVar7;
          uStack_180 = puVar7[1];
          uStack_178 = puVar7[2];
          uStack_170 = puVar7[3];
          local_168 = puVar7[4];
          uStack_160 = puVar7[5];
          local_158 = puVar7[6];
          local_150 = *(undefined4 *)(puVar7 + 7);
          auVar25 = ZEXT1664(auVar25._0_16_);
          cVar16 = FUN_180355330(iVar17,&local_188,&local_1d8);
          if (cVar16 != '\0') {
            local_1d8 = *puVar8;
            local_1d0 = *(undefined4 *)(puVar8 + 1);
            local_188 = *(undefined8 *)((longlong)puVar7 + 0x3c);
            uStack_180 = *(undefined8 *)((longlong)puVar7 + 0x44);
            uStack_178 = *(undefined8 *)((longlong)puVar7 + 0x4c);
            uStack_170 = *(undefined8 *)((longlong)puVar7 + 0x54);
            local_168 = *(undefined8 *)((longlong)puVar7 + 0x5c);
            uStack_160 = *(undefined8 *)((longlong)puVar7 + 100);
            local_158 = *(undefined8 *)((longlong)puVar7 + 0x6c);
            local_150 = *(undefined4 *)((longlong)puVar7 + 0x74);
            auVar25 = ZEXT1664(auVar25._0_16_);
            cVar16 = FUN_180355330(iVar17,&local_188,&local_1d8);
            if ((cVar16 != '\0') && ((bool)(bVar14 & bVar13))) {
              *(int *)param_1[0xe] = auVar25._0_4_;
              *(char *)param_1[0xf] = cVar6;
            }
          }
        }
LAB_18035cefe:
        if (cVar15 == '\0') {
        }
        if (DAT_180bbeab9 == '\0') {
        }
        DVar18 = GetCurrentThreadId();
        if (DAT_180bda160 == DVar18) {
          DAT_1808e3a58 = DAT_1808e3a58 + DAT_180bda15c;
          DAT_180bbeab9 = 0;
          DAT_180bda15c = 0;
          DAT_180bda160 = 0;
        }
      }
    }
    if ((DAT_180bbeab9 != '\0') && (DVar18 = GetCurrentThreadId(), DAT_180bda160 == DVar18)) {
      DAT_1808e3a58 = DAT_1808e3a58 + DAT_180bda15c;
      DAT_180bda15c = 0;
      DAT_180bbeab9 = '\0';
      DAT_180bda160 = 0;
    }
    lVar24 = lVar24 + 1;
    if ((longlong)(ulonglong)(uint)local_1e8 <= lVar24) {
    }
  } while( true );
}



