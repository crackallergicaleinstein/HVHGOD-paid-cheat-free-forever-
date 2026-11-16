// FUN_1801d2f50 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801d2f50 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x0001801d3b2b) */

void FUN_1801d2f50(undefined8 *param_1,undefined8 *param_2,uint param_3,char param_4)

{
  size_t _Size;
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  char cVar8;
  int iVar9;
  undefined4 uVar10;
  undefined1 (*pauVar11) [16];
  undefined8 uVar12;
  longlong lVar13;
  undefined8 ****ppppuVar14;
  int iVar15;
  undefined8 *puVar16;
  ulonglong uVar17;
  undefined8 *puVar18;
  ulonglong uVar19;
  char *pcVar20;
  ulonglong uVar21;
  uint uVar22;
  uint uVar23;
  bool bVar24;
  ulonglong uVar25;
  bool bVar26;
  float fVar27;
  float fVar28;
  undefined1 auVar29 [64];
  undefined1 auVar30 [64];
  float fVar31;
  undefined1 auVar32 [64];
  undefined1 auVar33 [16];
  undefined1 auVar34 [64];
  undefined8 uVar35;
  undefined1 auVar36 [64];
  float fVar37;
  undefined1 auVar38 [64];
  undefined1 auVar39 [16];
  undefined1 auVar40 [64];
  undefined1 auVar41 [16];
  undefined1 auVar42 [64];
  float fVar43;
  undefined1 auStack_2c8 [32];
  undefined8 ****local_2a8;
  undefined8 local_2a0;
  undefined8 ****local_298;
  float local_290;
  float local_288;
  float local_280;
  undefined4 local_278;
  float local_268;
  uint local_264;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined1 local_248 [16];
  undefined8 ****local_238;
  undefined8 uStack_230;
  undefined1 local_228 [16];
  float local_218;
  float local_214;
  float local_210;
  undefined4 local_20c;
  undefined1 local_208 [16];
  undefined1 local_1f8 [16];
  undefined1 auStack_1e8 [16];
  undefined8 ***local_1d8;
  undefined8 ***pppuStack_1d0;
  undefined8 ***pppuStack_1c8;
  undefined8 ***pppuStack_1c0;
  undefined8 ***local_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined1 local_158 [32];
  byte local_138 [8];
  undefined8 ****local_130 [2];
  undefined8 local_120;
  ulonglong local_118;
  undefined1 local_110 [16];
  undefined8 uStack_100;
  ulonglong uStack_f8;
  undefined8 ****local_f0 [2];
  undefined8 local_e0;
  ulonglong local_d8;
  ulonglong local_d0;
  
  local_d0 = DAT_1808d5f00 ^ (ulonglong)auStack_2c8;
  uVar21 = 0;
  local_20c = 0;
  local_264 = param_3;
  FUN_18043b470();
  auVar30 = ZEXT864(0);
  pauVar11 = (undefined1 (*) [16])FUN_18043b290(local_208,*(undefined4 *)*param_1,0x42800000,0);
  auVar33 = *pauVar11;
  auVar29 = ZEXT1664(auVar33);
  auVar39 = vpcmpeqd_avx(ZEXT116(*(byte *)((longlong)param_2 + 0xe3)),SUB6416(ZEXT464(0),0));
  auVar39 = vblendvps_avx(SUB6416(ZEXT464(0x41b00000),0),auVar30._0_16_,auVar39);
  local_210 = auVar39._0_4_ + auVar33._0_4_;
  auVar40 = ZEXT464((uint)local_210);
  auVar41 = vshufps_avx(auVar33,auVar33,0x55);
  auVar42 = ZEXT1664(auVar41);
  local_258._4_4_ = (float)auVar41._0_4_;
  local_258._0_4_ = local_210;
  auVar41 = vshufps_avx(auVar33,auVar33,0xaa);
  local_268 = auVar41._0_4_ - auVar39._0_4_;
  auVar32 = ZEXT464((uint)local_268);
  uStack_250._0_4_ = local_268;
  local_208 = vshufps_avx(auVar33,auVar33,0xff);
  auVar38 = ZEXT1664(local_208);
  uStack_250._4_4_ = local_208._0_4_;
  lVar13 = param_1[1];
  puVar18 = (undefined8 *)(lVar13 + 0x3e0);
  if (0xf < *(ulonglong *)(lVar13 + 0x3f8)) {
    puVar18 = (undefined8 *)*puVar18;
  }
  _Size = param_2[2];
  uVar17 = param_2[3];
  puVar16 = param_2;
  if (0xf < uVar17) {
    puVar16 = (undefined8 *)*param_2;
  }
  if (_Size == *(size_t *)(lVar13 + 0x3f0)) {
    if (_Size == 0) {
      bVar24 = true;
    }
    else {
      iVar9 = memcmp(puVar16,puVar18,_Size);
      bVar24 = iVar9 == 0;
    }
  }
  else {
    bVar24 = false;
  }
  puVar18 = &DAT_1808da978;
  if (0xf < DAT_1808da990) {
    puVar18 = DAT_1808da978;
  }
  puVar16 = param_2;
  if (0xf < uVar17) {
    puVar16 = (undefined8 *)*param_2;
  }
  if (_Size == DAT_1808da988) {
    if (_Size == 0) {
      bVar26 = true;
    }
    else {
      iVar9 = memcmp(puVar16,puVar18,_Size);
      bVar26 = iVar9 == 0;
    }
  }
  else {
    bVar26 = false;
  }
  cVar8 = FUN_18043b8e0(param_1[2],&local_258);
  if (cVar8 == '\0') {
LAB_1801d32bc:
    uVar22 = 0;
    local_218 = (auVar32._0_4_ + auVar40._0_4_) - 29.0;
    local_214 = auVar42._0_4_ + 16.0;
  }
  else {
    uVar12 = FUN_180439770();
    cVar8 = FUN_18043b5c0(uVar12);
    if (cVar8 != '\0') goto LAB_1801d32bc;
    local_218 = (auVar32._0_4_ + auVar40._0_4_) - 29.0;
    local_214 = auVar42._0_4_ + 16.0;
    local_258._4_4_ = local_214;
    local_258._0_4_ = local_218;
    uStack_250._0_4_ = 0x41c00000;
    uStack_250._4_4_ = 0x42000000;
    if (*(char *)(param_1[2] + 0x11) != '\0') {
      if ((local_264 == 0) || (cVar8 = FUN_18043b8e0(param_1[2],&local_258), cVar8 == '\0')) {
        if (param_4 != '\0') {
          if ((undefined8 **)param_2 != &DAT_1808da978) {
            puVar18 = param_2;
            if (0xf < (ulonglong)param_2[3]) {
              puVar18 = (undefined8 *)*param_2;
            }
            FUN_180113930(&DAT_1808da978,puVar18,param_2[2]);
          }
          puVar18 = param_2 + 4;
          if (puVar18 != &DAT_1808da958) {
            if (0xf < (ulonglong)param_2[7]) {
              puVar18 = (undefined8 *)*puVar18;
            }
            FUN_180113930(&DAT_1808da958,puVar18,param_2[6]);
          }
          DAT_180bb8a8a = 0;
          DAT_180bb8a89 = 0;
        }
      }
      else {
        lVar13 = FUN_1801d42f0(&DAT_180bb92c0,param_2);
        if (lVar13 == 0) {
          FUN_1801d4690(&DAT_180bb92c0,&local_238,param_2);
        }
      }
    }
    uVar22 = 1;
    auVar32 = ZEXT464((uint)local_268);
  }
  puVar18 = param_2;
  if (0xf < (ulonglong)param_2[3]) {
    puVar18 = (undefined8 *)*param_2;
  }
  uVar25 = 0xcbf29ce484222325;
  uVar17 = 0xcbf29ce484222325;
  uVar19 = 0;
  if (param_2[2] != 0) {
    do {
      uVar17 = (uVar17 ^ *(byte *)(uVar19 + (longlong)puVar18)) * 0x100000001b3;
      uVar19 = uVar19 + 1;
    } while (uVar19 < (ulonglong)param_2[2]);
  }
  auVar33 = vpcmpeqd_avx(ZEXT416(uVar22),SUB6416(ZEXT464(0),0));
  auVar36 = ZEXT464(0x3f800000);
  auVar33 = vblendvps_avx(auVar36._0_16_,auVar30._0_16_,auVar33);
  auVar34 = ZEXT464(0x41600000);
  fVar27 = (float)FUN_18043a910(uVar17,auVar33._0_8_,auVar34._0_8_,auVar30._0_8_);
  if (bVar26) {
    local_2a0._0_4_ = DAT_180bb8a6c;
  }
  else {
    uVar23 = DAT_180bb8a68 >> 8 & 0xff;
    uVar22 = DAT_180bb8a68 >> 0x10 & 0xff;
    local_2a0._0_4_ =
         ((((int)((float)(int)((DAT_180bb8a6c >> 0x18) - (DAT_180bb8a68 >> 0x18)) * fVar27 +
                 (float)(DAT_180bb8a68 >> 0x18)) & 0xffU) << 8 |
          (int)((float)(int)((DAT_180bb8a6c >> 0x10 & 0xff) - uVar22) * fVar27 + (float)uVar22) &
          0xffU) << 8 |
         (int)((float)(int)((DAT_180bb8a6c >> 8 & 0xff) - uVar23) * fVar27 + (float)uVar23) & 0xffU)
         << 8 | (int)((float)(int)((DAT_180bb8a6c & 0xff) - (DAT_180bb8a68 & 0xff)) * fVar27 +
                     (float)(DAT_180bb8a68 & 0xff)) & 0xffU;
  }
  local_238 = (undefined8 ****)0x40e0000040e00000;
  uStack_230 = 0x40e0000040e00000;
  local_298 = &local_238;
  local_2a8._0_4_ = auVar38._0_4_;
  FUN_180430970(param_1[3],auVar40._0_8_,auVar42._0_8_,auVar32._0_8_);
  local_2a0._0_4_ = DAT_180bb8a70;
  if (bVar26) {
    local_2a0._0_4_ = DAT_180bb8a64;
  }
  uStack_230 = 0x40e0000040e00000;
  local_238 = (undefined8 ****)0x40e0000040e00000;
  local_290 = auVar36._0_4_;
  local_298 = &local_238;
  local_2a8._0_4_ = auVar38._0_4_;
  FUN_1804330f0(param_1[3],auVar40._0_8_,auVar42._0_8_,auVar32._0_8_);
  fVar27 = auVar34._0_4_;
  fVar28 = auVar40._0_4_;
  fVar37 = 10.0;
  fVar43 = 0.5;
  cVar8 = '\0';
  if (*(char *)((longlong)param_2 + 0xe3) != '\0') {
    fVar27 = auVar29._0_4_ + 10.0;
    auVar32 = ZEXT464((uint)fVar27);
    local_2a8._0_4_ = (float)local_208._0_4_ * 0.5 + auVar42._0_4_;
    auVar29 = ZEXT464((uint)local_2a8._0_4_);
    local_2a0._0_4_ = DAT_180bb8a70;
    local_298._0_4_ = auVar36._0_4_;
    FUN_180433450(param_1[3],fVar27,auVar42._0_4_ - 8.0,fVar27);
    local_298 = (undefined8 ****)CONCAT44(local_298._4_4_,auVar36._0_4_);
    local_2a0._0_4_ = DAT_180bb8a70;
    local_2a8._0_4_ = auVar29._0_4_;
    FUN_180433450(param_1[3],auVar32._0_8_,auVar29._0_8_,auVar40._0_4_ - 3.0);
    fVar27 = auVar34._0_4_;
    fVar28 = auVar40._0_4_;
    cVar8 = *(char *)((longlong)param_2 + 0xe3);
  }
  auVar29 = ZEXT464((uint)(fVar28 + fVar37));
  auVar32 = ZEXT464((uint)(auVar42._0_4_ + fVar27));
  bVar7 = false;
  bVar6 = false;
  bVar5 = false;
  bVar4 = false;
  bVar3 = false;
  bVar2 = false;
  bVar1 = true;
  bVar26 = false;
  if ((*(char *)((longlong)param_2 + 0xe1) != '\0') || (cVar8 != '\0')) {
    local_258 = param_2 + 0x14;
    if (0xf < (ulonglong)param_2[0x17]) {
      local_258 = (undefined8 *)param_2[0x14];
    }
    uStack_250 = param_2[0x16];
    puVar18 = (undefined8 *)FUN_1803d0ea0(param_1[4],&local_258);
    if (puVar18 != (undefined8 *)0x0) {
      iVar9 = *(int *)((longlong)puVar18 + 0xc);
      iVar15 = *(int *)(puVar18 + 1);
      if (iVar15 < 1) {
        iVar15 = 1;
      }
      if (iVar9 < 1) {
        iVar9 = 1;
      }
      fVar28 = (float)iVar15 / (float)iVar9;
      local_288 = auVar36._0_4_;
      local_290 = auVar30._0_4_;
      fVar27 = local_290;
      if (local_288 < fVar28) {
        fVar27 = (local_288 - local_288 / fVar28) * fVar43;
      }
      if (fVar28 < local_288) {
        local_290 = (local_288 - fVar28) * fVar43;
      }
      local_280 = local_288 - local_290;
      local_288 = local_288 - fVar27;
      local_278 = 0xffffffff;
      local_298 = (undefined8 ****)CONCAT44(local_298._4_4_,fVar27);
      local_2a0 = *puVar18;
      auVar38 = ZEXT464(0x42080000);
      local_2a8 = (undefined8 ****)CONCAT44(local_2a8._4_4_,0x42080000);
      FUN_180435220(param_1[3],auVar29._0_8_,auVar32._0_8_,auVar38._0_8_);
      fVar27 = auVar32._0_4_;
      goto LAB_1801d3766;
    }
  }
  local_258 = param_2 + 4;
  if (0xf < (ulonglong)param_2[7]) {
    local_258 = (undefined8 *)param_2[4];
  }
  uStack_250 = param_2[6];
  FUN_1801cc950(local_138,&local_258);
  local_238 = (undefined8 ****)0x40e0000040e00000;
  uStack_230 = 0x40e0000040e00000;
  local_298 = &local_238;
  local_2a0 = CONCAT44(local_2a0._4_4_,
                       ((local_138[0] | 0xffffff00) << 8 | (uint)local_138[0]) << 8 |
                       (uint)local_138[0]);
  auVar38 = ZEXT464(0x42080000);
  local_2a8 = (undefined8 ****)CONCAT44(local_2a8._4_4_,0x42080000);
  FUN_180430970(param_1[3],auVar29._0_8_,auVar32._0_8_,auVar38._0_8_);
  local_238 = local_130;
  if (0xf < local_118) {
    local_238 = local_130[0];
  }
  if (DAT_180bbadc8 == DAT_180bbadd0) {
    lVar13 = DAT_180bbade0;
  }
  else {
    lVar13 = *(longlong *)(DAT_180bbadd0 + -8);
  }
  if (lVar13 == 0) {
    fVar27 = auVar30._0_4_;
    fVar28 = auVar30._0_4_;
  }
  else {
    FUN_180430010(lVar13,&local_258,&local_238);
    fVar27 = local_258._4_4_;
    fVar28 = (float)local_258;
  }
  uVar10 = 0xffffffff;
  if (0x9f < local_138[0]) {
    uVar10 = 0xff1c1c1c;
  }
  local_238 = local_130;
  if (0xf < local_118) {
    local_238 = local_130[0];
  }
  uStack_230 = local_120;
  local_2a0 = 0;
  local_2a8 = (undefined8 ****)CONCAT44(local_2a8._4_4_,uVar10);
  FUN_1804340b0(param_1[3],(auVar29._0_4_ + 17.0) - fVar28 * fVar43,
                (auVar32._0_4_ + 17.0) - fVar27 * fVar43,&local_238);
  FUN_18015c010(local_130);
  fVar27 = auVar32._0_4_;
LAB_1801d3766:
  fVar31 = auVar38._0_4_;
  auVar33 = auVar30._0_16_;
  fVar28 = auVar29._0_4_;
  auVar32 = ZEXT464(0x41900000);
  if (*(char *)((longlong)param_2 + 0xe3) != '\0') {
    local_258._0_4_ = (fVar28 + fVar31) - 13.0;
    local_258._4_4_ = (fVar27 + fVar31) - 13.0;
    uStack_250._0_4_ = 0x41900000;
    uStack_250._4_4_ = 0x41900000;
    uStack_230 = 0x4080000040800000;
    local_238 = (undefined8 ****)0x4080000040800000;
    local_298 = &local_238;
    local_2a0 = CONCAT44(local_2a0._4_4_,DAT_180bb8a68);
    local_2a8 = (undefined8 ****)CONCAT44(local_2a8._4_4_,0x41900000);
    FUN_180430970(param_1[3],(float)local_258,local_258._4_4_,auVar32._0_8_);
    FUN_1801ce330(param_1[3],&local_258,9,DAT_180bb8a60);
    fVar31 = auVar38._0_4_;
    auVar33 = auVar30._0_16_;
    fVar28 = auVar29._0_4_;
  }
  fVar27 = fVar28 + fVar31 + fVar37;
  auVar30 = ZEXT464((uint)fVar27);
  auVar39 = vpcmpeqd_avx(ZEXT116(bVar24),SUB6416(ZEXT464(0),0));
  auVar39 = vblendvps_avx(SUB6416(ZEXT464(0x41b00000),0),auVar33,auVar39);
  auVar41 = vpcmpeqd_avx(ZEXT416(local_264),SUB6416(ZEXT464(0),0));
  auVar41 = vblendvps_avx(SUB6416(ZEXT464(0x41c00000),0),auVar33,auVar41);
  fVar27 = ((((local_210 + local_268) - fVar27) - fVar37) - auVar39._0_4_) - auVar41._0_4_;
  auVar33 = vmaxss_avx(ZEXT416((uint)fVar27),auVar33);
  auVar29 = ZEXT1664(auVar33);
  local_258 = param_2 + 4;
  if (0xf < (ulonglong)param_2[7]) {
    local_258 = (undefined8 *)param_2[4];
  }
  local_238 = (undefined8 ****)0x1807c6880;
  uStack_230 = 0xe;
  uStack_250 = param_2[6];
  fVar37 = local_210;
  FUN_180165e50(local_f0,fVar27,&local_238);
  local_238 = local_f0;
  if (0xf < local_d8) {
    local_238 = local_f0[0];
  }
  uStack_230 = local_e0;
  local_298 = (undefined8 ****)((ulonglong)local_298 & 0xffffffffffffff00);
  local_2a0 = CONCAT44(local_2a0._4_4_,DAT_180bb8a60);
  local_2a8 = &local_238;
  FUN_1801cd9d0(param_1[3],auVar30._0_8_,auVar42._0_4_ + 8.0,auVar29._0_8_);
  if (*(char *)((longlong)param_2 + 0xe3) == '\0') {
    if (*(char *)((longlong)param_2 + 0xe1) == '\0') {
      pcVar20 = "Personal config";
      if (*(char *)((longlong)param_2 + 0xe2) != '\0') {
        pcVar20 = "Syncing";
      }
      local_238 = (undefined8 ****)0x0;
      uStack_230 = 0;
      local_228 = (undefined1  [16])0x0;
      lVar13 = -1;
      do {
        lVar13 = lVar13 + 1;
      } while (pcVar20[lVar13] != '\0');
      FUN_18015ba30(&local_238);
      auVar41 = auVar42._0_16_;
      auVar39 = auVar32._0_16_;
      auVar33 = auVar36._0_16_;
      ppppuVar14 = &local_238;
      bVar7 = false;
      bVar6 = false;
      bVar5 = false;
      bVar4 = false;
      bVar3 = false;
      bVar2 = false;
    }
    else {
      if (param_4 == '\0') {
        local_258 = (undefined8 *)0x0;
        uStack_250 = 0;
        local_248 = (undefined1  [16])0x0;
        FUN_18015ba30(&local_258,"Source unavailable",0x12);
        auVar41 = auVar42._0_16_;
        auVar39 = auVar32._0_16_;
        auVar33 = auVar36._0_16_;
        puVar18 = &local_258;
        bVar7 = false;
        bVar6 = false;
        bVar5 = false;
        bVar4 = false;
        bVar3 = true;
      }
      else {
        if (param_2[0x12] == 0) {
          local_1f8 = (undefined1  [16])0x0;
          auStack_1e8 = (undefined1  [16])0x0;
          FUN_18015ba30(local_1f8,"Workshop",8);
          auVar41 = auVar42._0_16_;
          auVar39 = auVar32._0_16_;
          auVar33 = auVar36._0_16_;
          puVar18 = (undefined8 *)local_1f8;
          bVar7 = true;
          bVar6 = false;
          bVar5 = false;
        }
        else {
          local_258 = param_2 + 0x10;
          if (0xf < (ulonglong)param_2[0x13]) {
            local_258 = (undefined8 *)*local_258;
          }
          local_238 = (undefined8 ****)&PTR_180700558;
          uStack_230 = 0;
          uStack_250 = param_2[0x12];
          uVar12 = FUN_180165e50(local_158,&local_258,&local_238);
          local_20c = 4;
          puVar18 = (undefined8 *)FUN_180141490(uVar12,0,&DAT_1807c68e4,3);
          auVar41 = auVar42._0_16_;
          auVar39 = auVar32._0_16_;
          auVar33 = auVar36._0_16_;
          local_178 = *puVar18;
          uStack_170 = puVar18[1];
          uStack_168 = puVar18[2];
          uStack_160 = puVar18[3];
          *(undefined1 *)puVar18 = 0;
          puVar18[2] = 0;
          puVar18[3] = 0xf;
          puVar18 = &local_178;
          bVar7 = false;
          bVar6 = true;
          bVar5 = true;
        }
        local_198 = *puVar18;
        uStack_190 = puVar18[1];
        uStack_188 = puVar18[2];
        uStack_180 = puVar18[3];
        *(undefined1 *)puVar18 = 0;
        puVar18[2] = 0;
        puVar18[3] = 0xf;
        puVar18 = &local_198;
        bVar4 = true;
        bVar3 = false;
      }
      local_1b8 = (undefined8 ***)*puVar18;
      uStack_1b0 = puVar18[1];
      uStack_1a8 = puVar18[2];
      uStack_1a0 = puVar18[3];
      *(undefined1 *)puVar18 = 0;
      puVar18[2] = 0;
      puVar18[3] = 0xf;
      ppppuVar14 = &local_1b8;
      bVar2 = true;
    }
    bVar1 = false;
    local_1d8 = *ppppuVar14;
    pppuStack_1d0 = ppppuVar14[1];
    pppuStack_1c8 = ppppuVar14[2];
    pppuStack_1c0 = ppppuVar14[3];
    *(undefined1 *)ppppuVar14 = 0;
    ppppuVar14[2] = (undefined8 ***)0x0;
    ppppuVar14[3] = (undefined8 ***)0xf;
    pauVar11 = (undefined1 (*) [16])&local_1d8;
    bVar26 = true;
  }
  else {
    pauVar11 = (undefined1 (*) [16])FUN_1801cfae0(local_138,param_2);
    auVar41 = auVar42._0_16_;
    auVar39 = auVar32._0_16_;
    auVar33 = auVar36._0_16_;
  }
  local_110 = (undefined1  [16])0x0;
  uStack_100 = 0;
  uStack_f8 = 0;
  local_110 = *pauVar11;
  uStack_100 = *(undefined8 *)pauVar11[1];
  uStack_f8 = *(ulonglong *)(pauVar11[1] + 8);
  (*pauVar11)[0] = 0;
  *(undefined8 *)pauVar11[1] = 0;
  *(undefined8 *)(pauVar11[1] + 8) = 0xf;
  if (bVar26) {
    auVar30 = ZEXT1664(auVar33);
    auVar29 = ZEXT1664(auVar39);
    auVar32 = ZEXT1664(auVar41);
    FUN_18015c010(&local_1d8);
    auVar41 = auVar32._0_16_;
    auVar39 = auVar29._0_16_;
    auVar33 = auVar30._0_16_;
  }
  if (bVar2) {
    auVar30 = ZEXT1664(auVar33);
    auVar29 = ZEXT1664(auVar39);
    auVar32 = ZEXT1664(auVar41);
    FUN_18015c010(&local_1b8);
    auVar41 = auVar32._0_16_;
    auVar39 = auVar29._0_16_;
    auVar33 = auVar30._0_16_;
  }
  if (bVar3) {
    auVar30 = ZEXT1664(auVar33);
    auVar29 = ZEXT1664(auVar39);
    auVar32 = ZEXT1664(auVar41);
    FUN_18015c010(&local_258);
    auVar41 = auVar32._0_16_;
    auVar39 = auVar29._0_16_;
    auVar33 = auVar30._0_16_;
  }
  if (bVar4) {
    auVar30 = ZEXT1664(auVar33);
    auVar29 = ZEXT1664(auVar39);
    auVar32 = ZEXT1664(auVar41);
    FUN_18015c010(&local_198);
    auVar41 = auVar32._0_16_;
    auVar39 = auVar29._0_16_;
    auVar33 = auVar30._0_16_;
  }
  if (bVar5) {
    auVar30 = ZEXT1664(auVar33);
    auVar29 = ZEXT1664(auVar39);
    auVar32 = ZEXT1664(auVar41);
    FUN_18015c010(&local_178);
    auVar41 = auVar32._0_16_;
    auVar39 = auVar29._0_16_;
    auVar33 = auVar30._0_16_;
  }
  if (bVar6) {
    auVar30 = ZEXT1664(auVar33);
    auVar29 = ZEXT1664(auVar39);
    auVar32 = ZEXT1664(auVar41);
    FUN_18015c010(local_158);
    auVar41 = auVar32._0_16_;
    auVar39 = auVar29._0_16_;
    auVar33 = auVar30._0_16_;
  }
  if (bVar7) {
    auVar30 = ZEXT1664(auVar33);
    auVar29 = ZEXT1664(auVar39);
    auVar32 = ZEXT1664(auVar41);
    FUN_18015c010(local_1f8);
    auVar41 = auVar32._0_16_;
    auVar39 = auVar29._0_16_;
    auVar33 = auVar30._0_16_;
  }
  if (bVar1) {
    auVar30 = ZEXT1664(auVar33);
    auVar29 = ZEXT1664(auVar39);
    auVar32 = ZEXT1664(auVar41);
    FUN_18015c010(local_138);
    auVar41 = auVar32._0_16_;
    auVar39 = auVar29._0_16_;
    auVar33 = auVar30._0_16_;
  }
  local_238 = (undefined8 ****)local_110;
  if (0xf < uStack_f8) {
    local_238 = (undefined8 ****)local_110._0_8_;
  }
  uStack_230 = uStack_100;
  local_298 = (undefined8 ****)((ulonglong)local_298 & 0xffffffffffffff00);
  local_2a0._0_4_ = DAT_180bb8a64;
  local_2a8 = &local_238;
  auVar30 = ZEXT1664(auVar33);
  auVar29 = ZEXT1664(auVar39);
  auVar32 = ZEXT1664(auVar41);
  FUN_1801cd9d0(param_1[3]);
  fVar27 = 4.0;
  if (bVar24 != false) {
    auVar33 = vpcmpeqd_avx(ZEXT416(local_264),SUB6416(ZEXT464(0),0));
    auVar33 = vblendvps_avx(SUB6416(ZEXT464(0x42380000),0),auVar29._0_16_,auVar33);
    fVar28 = (fVar37 + local_268) - auVar33._0_4_;
    fVar37 = local_208._0_4_ * fVar43 + auVar32._0_4_;
    auVar29 = ZEXT464((uint)(fVar37 + 3.0));
    fVar43 = fVar28 - auVar30._0_4_;
    auVar30 = ZEXT464((uint)fVar43);
    uVar10 = 0x3fc00000;
    local_298._0_4_ = 0x3fc00000;
    local_2a0._0_4_ = DAT_180bb8a60;
    local_2a8._0_4_ = fVar37 + 3.0;
    FUN_180433450(param_1[3],fVar28 - 4.0,fVar37,fVar43);
    local_298 = (undefined8 ****)CONCAT44(local_298._4_4_,uVar10);
    local_2a0._0_4_ = DAT_180bb8a60;
    local_2a8 = (undefined8 ****)CONCAT44(local_2a8._4_4_,fVar37 - fVar27);
    FUN_180433450(param_1[3],auVar30._0_8_,auVar29._0_8_,fVar28 + 5.0);
  }
  if (local_264 != 0) {
    auVar30 = ZEXT464((uint)(local_218 + 12.0));
    auVar29 = ZEXT464((uint)(local_214 + 16.0));
    puVar18 = param_2;
    if (0xf < (ulonglong)param_2[3]) {
      puVar18 = (undefined8 *)*param_2;
    }
    if (param_2[2] != 0) {
      do {
        uVar25 = (uVar25 ^ *(byte *)(uVar21 + (longlong)puVar18)) * 0x100000001b3;
        uVar21 = uVar21 + 1;
      } while (uVar21 < (ulonglong)param_2[2]);
    }
    uVar12 = param_1[3];
    lVar13 = FUN_180177b00(&DAT_180bb92c0,local_208,param_2,uVar25);
    uVar10 = 0x3fb33333;
    local_298._0_4_ = 0x3fb33333;
    local_2a0._0_4_ = DAT_180bb8a64;
    fVar28 = auVar30._0_4_;
    fVar37 = auVar29._0_4_;
    if (*(longlong *)(lVar13 + 8) == 0) {
      local_2a8._0_4_ = fVar37 + 2.0;
      auVar29 = ZEXT464((uint)local_2a8._0_4_);
      fVar37 = fVar37 - 2.0;
      FUN_180433450(uVar12,fVar28 - fVar27,fVar37,auVar30._0_8_);
      uVar21 = (ulonglong)(uint)(auVar30._0_4_ + fVar27);
      local_298 = (undefined8 ****)CONCAT44(local_298._4_4_,uVar10);
      local_2a8 = (undefined8 ****)CONCAT44(local_2a8._4_4_,fVar37);
      uVar35 = auVar29._0_8_;
      uVar12 = auVar30._0_8_;
    }
    else {
      auVar32 = ZEXT464((uint)(fVar28 + 2.0));
      auVar30 = ZEXT464((uint)(fVar28 - 2.0));
      local_2a8._0_4_ = fVar37;
      FUN_180433450(uVar12,fVar28 - 2.0,fVar37 - fVar27,fVar28 + 2.0);
      local_298 = (undefined8 ****)CONCAT44(local_298._4_4_,uVar10);
      local_2a8 = (undefined8 ****)CONCAT44(local_2a8._4_4_,auVar29._0_4_ + fVar27);
      uVar21 = auVar30._0_8_;
      uVar35 = auVar29._0_8_;
      uVar12 = auVar32._0_8_;
    }
    local_2a0._0_4_ = DAT_180bb8a64;
    FUN_180433450(param_1[3],uVar12,uVar35,uVar21);
  }
  FUN_18015c010(local_110);
  FUN_18015c010(local_f0);
}



