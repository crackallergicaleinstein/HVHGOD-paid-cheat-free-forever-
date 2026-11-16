// FUN_1804891c0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804891c0 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1804891c0(int *param_1)

{
  int *piVar1;
  undefined2 uVar2;
  longlong *plVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [32];
  undefined4 uVar8;
  int iVar9;
  undefined1 (*pauVar10) [32];
  char *pcVar11;
  undefined2 *puVar12;
  longlong lVar13;
  longlong lVar14;
  char cVar15;
  int iVar16;
  int iVar17;
  uint uVar18;
  uint uVar19;
  char **ppcVar20;
  int iVar21;
  longlong lVar22;
  float fVar23;
  float fVar24;
  undefined1 auVar25 [64];
  undefined4 uVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  undefined1 auVar30 [16];
  undefined1 auVar31 [64];
  undefined1 auVar32 [16];
  undefined1 auVar33 [64];
  float fVar34;
  float fVar35;
  float fVar36;
  undefined1 auStack_1e8 [32];
  undefined8 local_1c8;
  char *local_1c0;
  undefined8 local_1b8;
  undefined1 *local_1b0;
  undefined8 local_1a8;
  undefined4 local_198;
  undefined1 local_188;
  undefined2 local_184 [2];
  float local_180;
  undefined8 local_178;
  float local_168;
  float local_164;
  undefined1 local_160 [8];
  int *local_158;
  undefined *local_150 [3];
  undefined1 local_138 [32];
  undefined1 local_118 [16];
  undefined1 auStack_108 [16];
  float local_f8;
  float local_f4;
  float local_f0;
  float local_ec;
  char *local_e8 [24];
  
  local_e8[3] = (char *)(DAT_1808d5f00 ^ (ulonglong)auStack_1e8);
  auVar31 = ZEXT464(0x41533333);
  fVar29 = 0.5;
  auVar33 = ZEXT464(0x3f800000);
  local_e8[0] = "Toggle";
  local_e8[1] = "Hold";
  local_e8[2] = "Hold Off";
  local_150[0] = &DAT_180829a4c;
  local_150[1] = &DAT_180829dc8;
  local_150[2] = &DAT_180829a40;
  uVar26 = 0;
  auVar6 = ZEXT816(0);
  ppcVar20 = local_e8;
  local_158 = param_1;
  do {
    auVar25 = ZEXT1664(auVar6);
    local_1c0 = *ppcVar20;
    local_198 = 0;
    local_1a8 = 0;
    auVar6 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(auVar31._0_4_ * DAT_180b0a41c + fVar29)),1);
    local_1b0 = (undefined1 *)0x0;
    auVar6 = vmaxss_avx(auVar33._0_16_,auVar6);
    local_1b8 = 0;
    local_1c8 = CONCAT44(local_1c8._4_4_,uVar26);
    FUN_1804ea040(&local_178,DAT_180c62ca8,auVar6._0_8_);
    auVar6 = vmaxss_avx(auVar25._0_16_,ZEXT416((uint)local_178));
    ppcVar20 = ppcVar20 + 1;
  } while (ppcVar20 != local_e8 + 3);
  local_180 = auVar6._0_4_ + DAT_180b0a41c * 26.0;
  fVar24 = DAT_180b0a41c * 40.0 + local_180;
  local_1a8 = 0;
  local_1b0 = local_118;
  local_1b8 = CONCAT44(local_1b8._4_4_,uVar26);
  local_178 = 0;
  local_1c0 = (char *)CONCAT44(local_1c0._4_4_,fVar24 / DAT_180b0a41c + 6.0);
  local_1c8 = 0;
  auVar7._4_4_ = uVar26;
  auVar7._0_4_ = uVar26;
  auVar7._8_16_ = auStack_108;
  auVar7._24_8_ = 0;
  _local_118 = auVar7 << 0x40;
  pauVar10 = (undefined1 (*) [32])FUN_180487810(local_138,&DAT_180829e20,&DAT_180829dc4,1);
  lVar4 = DAT_180bb8ae8;
  auVar32 = auVar33._0_16_;
  auVar30 = auVar31._0_16_;
  fVar27 = 4.0;
  fVar23 = DAT_180b0a41c * 4.0;
  _local_118 = *pauVar10;
  local_188 = 0;
  auVar6 = vshufps_avx(local_118._16_16_,local_118._16_16_,0x55);
  fVar24 = auVar6._0_4_ - fVar24;
  *(undefined1 *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0xce) = 1;
  plVar3 = *(longlong **)(lVar4 + 0x14d0);
  auVar6 = vmaxss_avx(local_118,ZEXT416((uint)(fVar24 - fVar23)));
  local_f8 = auVar6._0_4_;
  lVar4 = plVar3[0x59];
  local_f4 = (float)vextractps_avx(local_118,3);
  pcVar11 = "##bind_mode_cycle";
  uVar18 = ~*(uint *)(plVar3[0x22] + -4 + (longlong)(int)plVar3[0x21] * 4);
  cVar15 = '#';
  uVar19 = uVar18;
  do {
    pcVar11 = pcVar11 + 1;
    if (((cVar15 == '#') && (*pcVar11 == '#')) && (pcVar11[1] == '#')) {
      pcVar11 = pcVar11 + 2;
      uVar19 = uVar18;
    }
    else {
      uVar19 = crc32(uVar19,cVar15);
    }
    cVar15 = *pcVar11;
  } while (cVar15 != '\0');
  uVar19 = ~uVar19;
  if (*(uint *)(*plVar3 + 0x1534) == uVar19) {
    fVar27 = 4.0;
    auVar31 = ZEXT1664(auVar30);
    auVar33 = ZEXT1664(auVar32);
    FUN_1804cf810(uVar19,0xb,"##bind_mode_cycle");
    auVar32 = auVar33._0_16_;
    auVar30 = auVar31._0_16_;
  }
  local_1c8 = CONCAT71(local_1c8._1_7_,1);
  auVar31 = ZEXT1664(auVar30);
  auVar33 = ZEXT1664(auVar32);
  puVar12 = (undefined2 *)FUN_1804aad60(local_160,uVar19,local_118,&local_f8);
  local_184[0] = *puVar12;
  if (*(char *)(puVar12 + 1) != '\0') {
    iVar16 = *param_1;
    if (iVar16 < 0) {
      iVar16 = 0;
    }
    else if (2 < iVar16) {
      iVar16 = 2;
    }
    local_188 = 1;
    *param_1 = (iVar16 + 1) % 3;
  }
  iVar16 = *param_1;
  if (iVar16 < 0) {
    iVar16 = 0;
  }
  else if (2 < iVar16) {
    iVar16 = 2;
  }
  fVar34 = 18.0;
  fVar36 = 9.0;
  uVar26 = 0x41300000;
  fVar35 = 2.0;
  iVar21 = 0;
  lVar22 = 0;
  fVar28 = (float)auStack_108._0_4_;
  fVar23 = DAT_180b0a41c;
  do {
    if (iVar16 == iVar21) {
      local_f8 = local_180;
    }
    else {
      local_f8 = fVar23 * fVar34;
    }
    local_ec = fVar28 - fVar23 * 10.0;
    local_f4 = fVar23 * 10.0 + fVar28;
    local_f8 = local_f8 + fVar24;
    lVar13 = *(longlong *)(DAT_180bb8ae8 + 0x14d0);
    local_f0 = fVar24;
    uVar8 = FUN_1804c2670(lVar13,iVar21);
    iVar9 = *(int *)(lVar13 + 0x10c);
    piVar1 = (int *)(lVar13 + 0x108);
    if (*piVar1 == iVar9) {
      iVar17 = *piVar1 + 1;
      if (iVar9 == 0) {
        iVar9 = 8;
      }
      else {
        iVar9 = iVar9 / 2 + iVar9;
      }
      if (iVar17 < iVar9) {
        iVar17 = iVar9;
      }
      FUN_1804d14d0(piVar1,iVar17);
    }
    *(undefined4 *)(*(longlong *)(lVar13 + 0x110) + (longlong)*piVar1 * 4) = uVar8;
    *piVar1 = *piVar1 + 1;
    plVar3 = *(longlong **)(DAT_180bb8ae8 + 0x14d0);
    pcVar11 = "##bind_mode_chip";
    uVar18 = ~*(uint *)(plVar3[0x22] + -4 + (longlong)(int)plVar3[0x21] * 4);
    cVar15 = '#';
    uVar19 = uVar18;
    do {
      pcVar11 = pcVar11 + 1;
      if (((cVar15 == '#') && (*pcVar11 == '#')) && (pcVar11[1] == '#')) {
        pcVar11 = pcVar11 + 2;
        uVar19 = uVar18;
      }
      else {
        uVar19 = crc32(uVar19,cVar15);
      }
      cVar15 = *pcVar11;
    } while (cVar15 != '\0');
    uVar19 = ~uVar19;
    if (*(uint *)(*plVar3 + 0x1534) == uVar19) {
      FUN_1804cf810(uVar19,0xb,"##bind_mode_chip");
    }
    local_1c8 = CONCAT71(local_1c8._1_7_,1);
    puVar12 = (undefined2 *)FUN_1804aad60(local_184,uVar19,&local_f0,&local_f8);
    uVar2 = *puVar12;
    if (*(char *)(puVar12 + 1) != '\0') {
      local_188 = 1;
      *local_158 = iVar21;
    }
    if ((iVar16 == iVar21) || ((char)uVar2 != '\0')) {
      local_1c0 = (char *)((ulonglong)local_1c0 & 0xffffffff00000000);
      uVar8 = DAT_180b0a434;
      if (iVar16 == iVar21) {
        uVar8 = DAT_180b0a418;
      }
      local_1c8 = CONCAT44(local_1c8._4_4_,fVar27 * DAT_180b0a41c);
      FUN_1804df870(lVar4,&local_f0,&local_f8,uVar8);
    }
    local_168 = fVar36 * DAT_180b0a41c + local_f0;
    uVar8 = DAT_1808da474;
    if (iVar16 == iVar21) {
      uVar8 = DAT_180b0a458;
    }
    local_1c8 = CONCAT44(local_1c8._4_4_,uVar26);
    local_164 = fVar28;
    FUN_180463dc0(lVar4,&local_168,uVar8,*(undefined8 *)((longlong)local_150 + lVar22));
    uVar8 = DAT_180b0a458;
    if (iVar16 == iVar21) {
      fVar24 = DAT_180b0a41c * 19.0 + local_f0;
      uVar5 = *(ulonglong *)((longlong)local_e8 + lVar22);
      auVar6 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(DAT_180b0a41c * auVar31._0_4_ + fVar29)),1);
      auVar6 = vmaxss_avx(auVar33._0_16_,auVar6);
      auVar25 = ZEXT1664(auVar6);
      lVar13 = FUN_1804e97d0(DAT_180c62ca8,auVar6._0_8_,0xbf800000);
      lVar14 = FUN_1804e95f0(lVar13,0x48);
      if (lVar14 == 0) {
        fVar23 = auVar25._0_4_ * fVar29;
      }
      else {
        fVar23 = (*(float *)(lVar14 + 0x14) - *(float *)(lVar14 + 0xc)) *
                 (auVar25._0_4_ / *(float *)(lVar13 + 0x14));
      }
      local_1b8 = 0;
      local_178 = CONCAT44(fVar28 - fVar23 * fVar29,fVar24);
      local_1c8 = CONCAT44(local_1c8._4_4_,uVar8);
      local_1c0 = (char *)uVar5;
      FUN_180463450(lVar4,DAT_180c62ca8,auVar31._0_8_,&local_178);
      fVar27 = 4.0;
    }
    if (DAT_180cd6f38 != 0) {
      local_118._0_8_ = *(undefined8 *)((longlong)local_e8 + lVar22);
      (**(code **)(*(longlong *)DAT_180cd6f38 + 0x10))(DAT_180cd6f38,local_118,&local_f0,&local_f8);
    }
    fVar23 = DAT_180b0a41c;
    fVar24 = DAT_180b0a41c * fVar35 + local_f8;
    iVar9 = *(int *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0x108);
    if (iVar9 < 2) {
      FUN_1804c5a40("Calling PopID() too many times!");
      fVar23 = DAT_180b0a41c;
    }
    else {
      *(int *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0x108) = iVar9 + -1;
    }
    iVar21 = iVar21 + 1;
    lVar22 = lVar22 + 8;
  } while (iVar21 < 3);
}



