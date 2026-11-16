// FUN_18048bfc0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18048bfc0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18048bfc0(undefined8 param_1,int *param_2,int *param_3,undefined8 param_4,int param_5,
                  undefined8 param_6,longlong param_7)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  int *piVar4;
  undefined4 uVar5;
  longlong lVar6;
  char cVar7;
  int iVar8;
  undefined8 *puVar9;
  char *pcVar10;
  undefined2 *puVar11;
  int **ppiVar12;
  int iVar13;
  float *pfVar14;
  float *pfVar15;
  uint uVar16;
  float *pfVar17;
  uint uVar18;
  int iVar19;
  bool bVar20;
  float fVar21;
  float fVar22;
  undefined1 auVar23 [16];
  float fVar24;
  float fVar25;
  undefined1 auVar26 [64];
  undefined1 auVar27 [64];
  float fVar28;
  undefined1 auVar29 [64];
  undefined1 auStack_1e8 [32];
  ulonglong local_1c8;
  undefined *local_1c0;
  undefined8 local_1b8;
  float *local_1b0;
  undefined8 local_1a8;
  undefined4 local_198;
  float local_188;
  float local_184;
  undefined4 local_180;
  undefined4 local_17c;
  float local_178;
  float local_174;
  float local_170;
  float local_16c;
  undefined2 local_168;
  undefined1 local_166;
  float local_160 [4];
  undefined1 local_150 [8];
  undefined8 *local_148;
  float *local_140;
  float *local_138;
  int ***local_130;
  int *local_128;
  undefined4 *local_120;
  int local_118 [2];
  int *local_110;
  int *local_108;
  float local_100;
  float local_fc [7];
  int **local_e0;
  int **local_d8;
  int *local_d0;
  int *local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  ulonglong local_a0;
  
  lVar6 = param_7;
  local_a0 = DAT_1808d5f00 ^ (ulonglong)auStack_1e8;
  local_118[0] = 0;
  if (DAT_180bbecdb == '\0') {
    local_1b0 = &local_188;
    local_1a8 = 0;
    auVar26 = ZEXT864(0);
    local_1b8 = CONCAT44(local_1b8._4_4_,0x42240000);
    local_1c0 = (undefined *)((ulonglong)local_1c0 & 0xffffffff00000000);
    local_160[0] = 0.0;
    local_160[1] = 0.0;
    local_184 = 0.0;
    local_180 = 0;
    local_17c = 0;
    local_188 = 0.0;
    local_1c8 = 0;
    local_110 = param_3;
    local_108 = param_2;
    puVar9 = (undefined8 *)FUN_180487810(&local_148,param_1,param_7,1);
    local_c0 = *puVar9;
    uStack_b8 = puVar9[1];
    uStack_b0 = puVar9[2];
    uStack_a8 = puVar9[3];
    auVar26 = ZEXT1664(auVar26._0_16_);
    FUN_1804c2800(param_1);
    lVar2 = DAT_180bb8ae8;
    *(undefined1 *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0xce) = 1;
    plVar1 = *(longlong **)(lVar2 + 0x14d0);
    lVar2 = plVar1[0x59];
    lVar3 = plVar1[0x38];
    pcVar10 = "##range";
    uVar16 = ~*(uint *)(plVar1[0x22] + -4 + (longlong)(int)plVar1[0x21] * 4);
    cVar7 = '#';
    uVar18 = uVar16;
    do {
      pcVar10 = pcVar10 + 1;
      if (((cVar7 == '#') && (*pcVar10 == '#')) && (pcVar10[1] == '#')) {
        pcVar10 = pcVar10 + 2;
        uVar18 = uVar16;
      }
      else {
        uVar18 = crc32(uVar18,cVar7);
      }
      cVar7 = *pcVar10;
    } while (cVar7 != '\0');
    uVar16 = ~uVar18;
    if (*(uint *)(*plVar1 + 0x1534) == uVar16) {
      FUN_1804cf810(uVar16,0xb,"##range");
    }
    fVar28 = DAT_180b0a41c;
    fVar21 = 3.0;
    auVar23._0_8_ = -(ulonglong)(lVar6 == 0);
    auVar23._8_8_ = 0xffffffffffffffff;
    auVar23 = vblendvps_avx(SUB6416(ZEXT464(0x420d999a),0),SUB6416(ZEXT464(0x416ccccd),0),auVar23);
    local_16c = DAT_180b0a41c * 7.0;
    fVar25 = local_16c + (float)uStack_a8;
    local_100 = (auVar23._0_4_ - 3.0) * DAT_180b0a41c + (float)local_c0;
    local_fc[0] = uStack_b0._4_4_;
    iVar19 = *local_108;
    iVar13 = local_118[0];
    if ((local_118[0] <= iVar19) && (iVar13 = iVar19, param_5 < iVar19)) {
      iVar13 = param_5;
    }
    *local_108 = iVar13;
    iVar19 = *local_110;
    iVar13 = local_118[0];
    if ((local_118[0] <= iVar19) && (iVar13 = iVar19, param_5 < iVar19)) {
      iVar13 = param_5;
    }
    *local_110 = iVar13;
    iVar19 = *local_108;
    if (iVar13 < iVar19) {
      *local_108 = iVar13;
      *local_110 = iVar19;
    }
    local_178 = fVar28 * 5.0 + uStack_b0._4_4_;
    local_174 = local_16c + fVar25;
    local_e0 = &local_110;
    local_1c8 = CONCAT71(local_1c8._1_7_,1);
    local_d8 = &local_108;
    local_d0 = local_118;
    local_c8 = &param_5;
    local_170 = local_100 - fVar28 * 5.0;
    local_16c = fVar25 - local_16c;
    puVar11 = (undefined2 *)FUN_1804aad60(local_150,uVar16,&local_170,&local_178);
    local_168 = *puVar11;
    local_166 = *(undefined1 *)(puVar11 + 1);
    if (((char)local_168 != '\0') && (cVar7 = FUN_1804c3510(0,0,0), cVar7 != '\0')) {
      fVar28 = *(float *)(DAT_180bb8ae8 + 0x110);
      fVar24 = auVar26._0_4_;
      fVar22 = fVar24;
      if (local_118[0] < param_5) {
        fVar22 = (float)(*local_108 - local_118[0]) / (float)(param_5 - local_118[0]);
      }
      fVar22 = (local_fc[0] - local_100) * fVar22 + local_100;
      if (local_118[0] < param_5) {
        fVar24 = (float)(*local_110 - local_118[0]) / (float)(param_5 - local_118[0]);
      }
      fVar24 = (local_fc[0] - local_100) * fVar24 + local_100;
      if (fVar22 == fVar24) {
        bVar20 = fVar22 < fVar28;
      }
      else {
        bVar20 = ABS(fVar28 - fVar24) < ABS(fVar28 - fVar22);
      }
      local_fc[1] = 0.0;
      pfVar14 = local_fc + 1;
      uVar16 = uVar18;
      do {
        uVar16 = crc32(uVar16,*pfVar14);
        pfVar15 = pfVar14 + 1;
        pfVar17 = pfVar14 + 2;
        pfVar14 = pfVar15;
      } while (pfVar17 <= local_fc + 2);
      if (pfVar15 < local_fc + 2) {
        do {
          uVar16 = crc32(uVar16,*(undefined1 *)pfVar15);
          pfVar15 = (float *)((longlong)pfVar15 + 1);
        } while (pfVar15 < local_fc + 2);
      }
      FUN_1804b1650(lVar3,~uVar16,bVar20);
    }
    auVar29 = ZEXT464(0x3f800000);
    fVar28 = 0.5;
    if ((local_168._1_1_ != '\0') && (local_100 < local_fc[0])) {
      fVar24 = (*(float *)(DAT_180bb8ae8 + 0x110) - local_100) / (local_fc[0] - local_100);
      fVar22 = auVar26._0_4_;
      if (fVar22 <= fVar24) {
        auVar23 = vminss_avx(auVar29._0_16_,ZEXT416((uint)fVar24));
        fVar22 = auVar23._0_4_;
      }
      iVar19 = (int)((float)(param_5 - local_118[0]) * fVar22 + 0.5) + local_118[0];
      local_fc[3] = 0.0;
      pfVar14 = local_fc + 3;
      uVar16 = uVar18;
      do {
        uVar16 = crc32(uVar16,*pfVar14);
        pfVar15 = pfVar14 + 1;
        pfVar17 = pfVar14 + 2;
        pfVar14 = pfVar15;
      } while (pfVar17 <= local_fc + 4);
      if (pfVar15 < local_fc + 4) {
        do {
          uVar16 = crc32(uVar16,*(undefined1 *)pfVar15);
          pfVar15 = (float *)((longlong)pfVar15 + 1);
        } while (pfVar15 < local_fc + 4);
      }
      iVar8 = FUN_1804b13e0(lVar3,~uVar16,0);
      iVar13 = *local_d0;
      if ((*local_d0 <= iVar19) && (iVar13 = iVar19, *local_c8 < iVar19)) {
        iVar13 = *local_c8;
      }
      ppiVar12 = local_d8;
      if (iVar8 != 0) {
        ppiVar12 = local_e0;
      }
      **ppiVar12 = iVar13;
      piVar4 = *local_e0;
      iVar19 = *piVar4;
      iVar13 = **local_d8;
      if (iVar19 < iVar13) {
        **local_d8 = iVar19;
        *piVar4 = iVar13;
        iVar8 = 1 - iVar8;
      }
      local_fc[5] = 0.0;
      pfVar14 = local_fc + 5;
      do {
        uVar18 = crc32(uVar18,*pfVar14);
        pfVar15 = pfVar14 + 1;
        pfVar17 = pfVar14 + 2;
        pfVar14 = pfVar15;
      } while (pfVar17 <= local_fc + 6);
      if (pfVar15 < local_fc + 6) {
        do {
          uVar18 = crc32(uVar18,*(undefined1 *)pfVar15);
          pfVar15 = (float *)((longlong)pfVar15 + 1);
        } while (pfVar15 < local_fc + 6);
      }
      FUN_1804b1650(lVar3,~uVar18,iVar8);
    }
    local_160[1] = fVar25;
    local_160[0] = local_fc[0];
    local_188 = local_100;
    local_184 = fVar25;
    if ((DAT_1808da46c & 0xff000000) != 0) {
      uVar18 = *(uint *)(lVar2 + 0x30) & 0xe0000;
      if ((uVar18 == 0) || (uVar18 != 0xe0000)) {
        pfVar14 = local_160;
        pfVar17 = &local_188;
      }
      else {
        local_170 = local_fc[0] + fVar28;
        local_174 = fVar25 + fVar28;
        local_178 = local_100 + fVar28;
        pfVar14 = &local_170;
        pfVar17 = &local_178;
        local_16c = local_174;
      }
      local_1c0 = (undefined *)CONCAT44(local_1c0._4_4_,*(uint *)(lVar2 + 0x30));
      local_1c8 = CONCAT44(local_1c8._4_4_,fVar21 * DAT_180b0a41c);
      FUN_1804dc7e0(lVar2,pfVar17,pfVar14);
    }
    fVar24 = auVar26._0_4_;
    fVar22 = fVar24;
    if (local_118[0] < param_5) {
      fVar22 = (float)(*local_110 - local_118[0]) / (float)(param_5 - local_118[0]);
    }
    local_170 = (local_fc[0] - local_100) * fVar22 + local_100;
    if (local_118[0] < param_5) {
      fVar24 = (float)(*local_108 - local_118[0]) / (float)(param_5 - local_118[0]);
    }
    local_178 = (local_fc[0] - local_100) * fVar24 + local_100;
    local_174 = fVar25;
    local_16c = fVar25;
    if ((DAT_180b0a544 & 0xff000000) != 0) {
      uVar18 = *(uint *)(lVar2 + 0x30) & 0xe0000;
      if ((uVar18 == 0) || (uVar18 != 0xe0000)) {
        pfVar17 = &local_170;
        pfVar14 = &local_178;
      }
      else {
        local_188 = local_170 + fVar28;
        local_184 = fVar25 + fVar28;
        local_160[1] = local_184;
        local_160[0] = local_178 + fVar28;
        pfVar17 = &local_188;
        pfVar14 = local_160;
      }
      local_1c0 = (undefined *)CONCAT44(local_1c0._4_4_,*(uint *)(lVar2 + 0x30));
      local_1c8 = CONCAT44(local_1c8._4_4_,fVar21 * DAT_180b0a41c);
      FUN_1804dc7e0(lVar2,pfVar14,pfVar17);
    }
    fVar21 = 3.8;
    if (local_118[0] < param_5) {
      fVar22 = (float)(*local_108 - local_118[0]) / (float)(param_5 - local_118[0]);
    }
    else {
      fVar22 = auVar26._0_4_;
    }
    local_188 = (local_fc[0] - local_100) * fVar22 + local_100;
    local_1c8 = local_1c8 & 0xffffffff00000000;
    local_184 = fVar25;
    FUN_1804e01c0(lVar2,&local_188,DAT_180b0a41c * 3.8,DAT_180b0a4bc);
    if (local_118[0] < param_5) {
      fVar22 = (float)(*local_110 - local_118[0]) / (float)(param_5 - local_118[0]);
    }
    else {
      fVar22 = auVar26._0_4_;
    }
    local_188 = (local_fc[0] - local_100) * fVar22 + local_100;
    local_1c8 = local_1c8 & 0xffffffff00000000;
    local_184 = fVar25;
    FUN_1804e01c0(lVar2,&local_188,fVar21 * DAT_180b0a41c,DAT_180b0a4bc);
    local_148 = &local_c0;
    local_140 = local_fc;
    local_138 = &local_100;
    local_130 = &local_e0;
    local_128 = local_118;
    local_120 = &param_5;
    FUN_18048ca30(&local_148,"##minimum",local_108,0);
    FUN_18048ca30(&local_148,"##maximum",local_110,1);
    auVar27 = ZEXT464(0x41533333);
    local_198 = 0;
    local_1a8 = 0;
    auVar23 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(DAT_180b0a41c * 13.2 + fVar28)),1);
    local_1b0 = (float *)0x0;
    auVar23 = vmaxss_avx(auVar29._0_16_,auVar23);
    local_1b8 = 0;
    local_1c0 = &DAT_180867408;
    local_1c8._0_4_ = auVar26._0_4_;
    FUN_1804ea040(&local_188,DAT_180c62ca8,auVar23._0_8_,0x7f7fffff);
    uVar5 = DAT_1808da474;
    fVar25 = DAT_180b0a41c * 27.0 + (float)uStack_a8;
    local_188 = ((local_fc[0] + local_100) - local_188) * fVar28;
    fVar21 = (float)FUN_180463350(DAT_180c62ca8,auVar27._0_8_);
    local_184 = fVar25 - fVar21 * fVar28;
    local_1b8 = 0;
    local_1c0 = &DAT_180867408;
    local_1c8 = CONCAT44(local_1c8._4_4_,uVar5);
    FUN_180463450(lVar2,DAT_180c62ca8,auVar27._0_8_,&local_188);
    iVar19 = *(int *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0x108);
    if (iVar19 < 2) {
      FUN_1804c5a40("Calling PopID() too many times!");
    }
    else {
      *(int *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0x108) = iVar19 + -1;
    }
  }
}



