// FUN_180300180 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180300180 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180300180(undefined8 param_1,longlong param_2)

{
  byte bVar1;
  bool bVar2;
  undefined4 uVar3;
  char cVar4;
  short sVar5;
  int iVar6;
  undefined4 *puVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 uVar11;
  uint *puVar12;
  ulonglong uVar13;
  float *pfVar14;
  uint *puVar15;
  ulonglong uVar16;
  char *pcVar17;
  uint uVar18;
  uint uVar19;
  float *pfVar20;
  int iVar21;
  uint *puVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined8 uVar26;
  undefined1 extraout_var [56];
  undefined1 auVar27 [16];
  float fVar28;
  undefined1 auVar29 [64];
  undefined1 auVar30 [64];
  float fVar31;
  undefined1 auVar32 [64];
  float fVar33;
  float fVar34;
  undefined1 auVar35 [64];
  undefined1 auVar36 [64];
  undefined1 auVar37 [64];
  undefined1 auStack_2a8 [32];
  uint *local_288;
  float local_280;
  uint local_278;
  uint local_270;
  float local_268;
  undefined4 local_260;
  undefined8 local_258;
  float local_250;
  float local_24c;
  float local_248;
  uint local_244;
  uint local_240;
  undefined1 local_23c;
  undefined1 local_23b [3];
  undefined4 local_238;
  undefined8 local_230;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined8 uStack_210;
  float local_208 [4];
  float local_1f8;
  float local_1f4;
  int local_1f0;
  float local_1ec;
  undefined8 local_1e8;
  undefined4 local_1e0;
  float local_1d8;
  uint local_1d4;
  byte local_1d0;
  char local_1c8 [128];
  longlong local_148;
  char local_140;
  uint local_138;
  uint local_134;
  uint local_130;
  uint uStack_12c;
  undefined4 local_128;
  undefined1 local_120 [8];
  longlong local_118;
  undefined1 local_f0;
  undefined1 local_ef [7];
  undefined8 local_e8;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 *local_d8;
  ulonglong local_d0;
  
  uVar13 = DAT_180b0dfd8;
  local_d0 = DAT_1808d5f00 ^ (ulonglong)auStack_2a8;
  iVar21 = 0;
  local_230 = DAT_180b0dfd8;
  if ((DAT_180cc82eb != '\0') && ((DAT_180b0dfd8 & 2) == 0)) {
  }
  if ((DAT_180cc82ec != '\0') && ((DAT_180b0dfd8 >> 0x10 & 1) != 0)) {
  }
  *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) | 1;
  puVar22 = (uint *)0x0;
  if (*(longlong *)(param_2 + 0x40) != 0) {
    puVar22 = (uint *)(*(longlong *)(param_2 + 0x40) + 0x10);
  }
  if (puVar22 == (uint *)0x0) {
  }
  local_208[1] = 2.8026e-43;
  local_208[2] = 3.50325e-44;
  puVar7 = (undefined4 *)FUN_1800b01c0(&DAT_180cc82f4,local_208 + 2,local_208 + 1,0);
  local_238 = *puVar7;
  FUN_180180d50(&DAT_180bb8890,local_120);
  if (local_118 == 0) {
  }
  FUN_180301640(&DAT_180b8fbe0,uVar13,0x200);
  FUN_180301640(&DAT_180b8fbe0,uVar13,0x400);
  FUN_180301640(&DAT_180b8fbe0,uVar13,8);
  FUN_180301640(&DAT_180b8fbe0,uVar13,0x10);
  uVar3 = DAT_180b8e120;
  _DAT_180b8fbe8 = uVar13;
  local_1e0 = DAT_180b8e120;
  local_1e8 = DAT_180b8e118;
  uVar11 = DAT_180b8e118;
  sVar5 = thunk_FUN_180624430(DAT_180b8e118);
  fVar28 = (float)uVar11;
  if (0 < sVar5) {
  }
  fVar23 = local_1e8._4_4_;
  sVar5 = thunk_FUN_180624430(local_1e8._4_4_);
  if (0 < sVar5) {
  }
  sVar5 = thunk_FUN_180624430(uVar3);
  if (0 < sVar5) {
  }
  fVar28 = fVar23 * fVar23 + fVar28 * fVar28;
  auVar35 = ZEXT864(0);
  if (fVar28 == 0.0) {
    fVar28 = 0.0;
  }
  else if (fVar28 < 0.0) {
    fVar28 = (float)FUN_18061e150(fVar28);
  }
  else {
    fVar28 = SQRT(fVar28);
  }
  pfVar20 = (float *)&DAT_0000000c;
  if (*(longlong *)(puVar22 + 0xc) != 0) {
    pfVar20 = (float *)(*(longlong *)(puVar22 + 0xc) + 0x1c);
  }
  fVar23 = *pfVar20;
  if ((DAT_180cc82ea == '\0') || ((uVar13 & 0x618) == 0)) {
    auVar37 = ZEXT464(0x3f800000);
    auVar36 = ZEXT864(0);
  }
  else {
    auVar36 = ZEXT464(0xbf800000);
    auVar27 = SUB6416(ZEXT464(0x3f800000),0);
    if ((DAT_180b8fbf0 & 8) == 0) {
      auVar27 = vpcmpeqd_avx(ZEXT116((byte)DAT_180b8fbf0 & 0x10),SUB6416(ZEXT464(0),0));
      auVar27 = vblendvps_avx(auVar36._0_16_,auVar35._0_16_,auVar27);
    }
    auVar37 = ZEXT1664(auVar27);
    if ((DAT_180b8fbf0 >> 9 & 1) == 0) {
      auVar27._0_8_ = -(ulonglong)((DAT_180b8fbf0 & 0x400) == 0);
      auVar27._8_8_ = 0xffffffffffffffff;
      auVar27 = vblendvps_avx(SUB6416(ZEXT464(0x3f800000),0),auVar35._0_16_,auVar27);
      auVar36 = ZEXT1664(auVar27);
    }
  }
  if ((auVar37._0_4_ == auVar35._0_4_) && (auVar36._0_4_ == auVar35._0_4_)) {
  }
  if (fVar28 < 5.0) {
  }
  local_248 = fVar23;
  fVar28 = (float)FUN_1802ff690(puVar22);
  fVar28 = (fVar28 + 131072.0) - 131072.0;
  local_1ec = fVar28;
  local_1f0 = FUN_1802ff350(DAT_180cc82f0,puVar22[4] + 1,fVar28,DAT_180cc8360);
  if (local_1f0 < 1) {
  }
  if (0.99 <= fVar28) {
  }
  local_228 = 0xdb35e39b27e1c185;
  uStack_220 = 0xa05181ee77d57a06;
  local_218 = 0x929654b1461b7377;
  local_258 = 0xa5cea54bfef7110;
  uStack_210 = 0xa5cea54bfef7110;
  cVar4 = 's';
  builtin_strncpy(local_1c8 + 0x10,"sv_airaccelerate",0x11);
  local_1c8[0x21] = '\0';
  local_1c8[0x22] = '\0';
  local_1c8[0x23] = '\0';
  local_1c8[0x24] = '\0';
  local_1c8[0x25] = '\0';
  local_1c8[0x26] = '\0';
  local_1c8[0x27] = '\0';
  local_1c8[0x28] = '\0';
  local_1c8[0x29] = '\0';
  local_1c8[0x2a] = '\0';
  local_1c8[0x2b] = '\0';
  local_1c8[0x2c] = '\0';
  local_1c8[0x2d] = '\0';
  local_1c8[0x2e] = '\0';
  local_1c8[0x2f] = '\0';
  pcVar17 = local_1c8 + 0x10;
  uVar19 = 0x811c9dc5;
  uVar18 = 0x811c9dc5;
  do {
    pcVar17 = pcVar17 + 1;
    uVar18 = ((int)cVar4 ^ uVar18) * 0x1000193;
    cVar4 = *pcVar17;
  } while (cVar4 != '\0');
  lVar8 = FUN_1802fbb20(&DAT_180c6f0d8,uVar18);
  local_228 = 0xdb35e39b27e1c185;
  local_258 = 0xa05181ee77d57a06;
  uStack_220 = 0xa05181ee77d57a06;
  cVar4 = 's';
  builtin_strncpy(local_1c8,"sv_maxspeed",0xc);
  local_1c8[0xc] = '\0';
  local_1c8[0xd] = '\0';
  local_1c8[0xe] = '\0';
  local_1c8[0xf] = '\0';
  pcVar17 = local_1c8;
  uVar18 = 0x811c9dc5;
  do {
    pcVar17 = pcVar17 + 1;
    uVar18 = ((int)cVar4 ^ uVar18) * 0x1000193;
    cVar4 = *pcVar17;
  } while (cVar4 != '\0');
  lVar9 = FUN_1802fbb20(&DAT_180c6f0f0,uVar18);
  local_228 = 0xdb35e39b27e1c185;
  uStack_220 = 0xa05181ee77d57a06;
  local_218 = 0x929654b1461b7377;
  local_258 = 0xa5cea54bfef7110;
  uStack_210 = 0xa5cea54bfef7110;
  cVar4 = 's';
  builtin_strncpy(local_1c8 + 0x30,"sv_air_max_wishspeed",0x15);
  local_1c8[0x45] = '\0';
  local_1c8[0x46] = '\0';
  local_1c8[0x47] = '\0';
  local_1c8[0x48] = '\0';
  local_1c8[0x49] = '\0';
  local_1c8[0x4a] = '\0';
  local_1c8[0x4b] = '\0';
  local_1c8[0x4c] = '\0';
  local_1c8[0x4d] = '\0';
  local_1c8[0x4e] = '\0';
  local_1c8[0x4f] = '\0';
  pcVar17 = local_1c8 + 0x30;
  uVar18 = 0x811c9dc5;
  do {
    pcVar17 = pcVar17 + 1;
    uVar18 = ((int)cVar4 ^ uVar18) * 0x1000193;
    cVar4 = *pcVar17;
  } while (cVar4 != '\0');
  lVar10 = FUN_1802fbb20(&DAT_180c6f108,uVar18);
  if (lVar8 == 0) {
  }
  if (lVar9 == 0) {
  }
  if (lVar10 == 0) {
  }
  auVar29 = ZEXT464(*(uint *)(lVar8 + 0x58));
  local_240 = *(uint *)(lVar8 + 0x58);
  auVar30 = ZEXT464(*(uint *)(lVar9 + 0x58));
  auVar32 = ZEXT464(*(uint *)(lVar10 + 0x58));
  local_244 = *(uint *)(lVar10 + 0x58);
  local_228 = 0xdb35e39b27e1c185;
  uStack_220 = 0xa05181ee77d57a06;
  local_218 = 0x929654b1461b7377;
  local_258 = 0xa5cea54bfef7110;
  uStack_210 = 0xa5cea54bfef7110;
  cVar4 = 's';
  builtin_strncpy(local_1c8 + 0x50,"sv_subtick_movement_view_angles",0x20);
  pcVar17 = local_1c8 + 0x50;
  do {
    pcVar17 = pcVar17 + 1;
    uVar19 = ((int)cVar4 ^ uVar19) * 0x1000193;
    cVar4 = *pcVar17;
  } while (cVar4 != '\0');
  lVar8 = FUN_1802fbb20(&DAT_180c6f0c0,uVar19);
  if ((lVar8 == 0) || (*(char *)(lVar8 + 0x58) != '\0')) {
    bVar2 = true;
    _DAT_180b8fc1c = 0;
  }
  else {
    bVar2 = false;
  }
  sVar5 = thunk_FUN_180624430(auVar29._0_8_);
  if (0 < sVar5) {
  }
  if (auVar29._0_4_ <= auVar35._0_4_) {
  }
  sVar5 = thunk_FUN_180624430(auVar30._0_8_);
  if (0 < sVar5) {
  }
  if (auVar30._0_4_ <= auVar35._0_4_) {
  }
  sVar5 = thunk_FUN_180624430(auVar32._0_8_);
  if (0 < sVar5) {
  }
  if (auVar32._0_4_ <= auVar35._0_4_) {
  }
  iVar6 = FUN_180301370(&local_23c);
  lVar8 = iVar6 + local_118;
  FUN_18017edb0(local_ef);
  FUN_1801ad700(&local_148,lVar8);
  FUN_18017edd0(local_ef);
  if (local_140 == '\0') {
    local_148 = 0;
LAB_180300996:
    auVar27 = auVar35._0_16_;
    lVar8 = local_148;
  }
  else {
    if (local_148 == 0) goto LAB_180300996;
    iVar6 = FUN_180301470(local_23b);
    FUN_18017edb0(&local_f0);
    FUN_1801aeb70(&local_1d4,iVar6 + local_148);
    FUN_18017edd0(&local_f0);
    auVar27 = vpcmpeqd_avx(ZEXT116(local_1d0),SUB6416(ZEXT464(0),0));
    auVar27 = vblendvps_avx(ZEXT416(local_1d4),auVar35._0_16_,auVar27);
    lVar8 = local_148;
  }
  auVar29 = ZEXT1664(auVar27);
  sVar5 = thunk_FUN_180624430(auVar27._0_8_);
  if ((0 < sVar5) || (uVar11 = auVar29._0_8_, auVar29._0_4_ <= auVar35._0_4_)) {
    uVar11 = auVar30._0_8_;
  }
  local_24c = (float)FUN_1806156a0(uVar11,auVar30._0_8_);
  fVar28 = local_24c;
  sVar5 = thunk_FUN_180624430();
  if (0 < sVar5) {
  }
  if (fVar28 <= auVar35._0_4_) {
  }
  if (lVar8 == 0) {
  }
  auVar29 = ZEXT464((uint)DAT_180b8e154);
  sVar5 = thunk_FUN_180624430(DAT_180b8e154);
  if (0 < sVar5) {
  }
  if (auVar29._0_4_ < auVar35._0_4_) {
  }
  cVar4 = FUN_1802fbbf0(local_118,lVar8);
  if (cVar4 != '\0') {
  }
  local_1f4 = DAT_180b0dfc8._4_4_;
  fVar33 = -360.0;
  fVar28 = 180.0;
  for (fVar23 = fVar23 - DAT_180b0dfc8._4_4_; 180.0 < fVar23; fVar23 = fVar23 + -360.0) {
  }
  fVar31 = -180.0;
  fVar34 = 360.0;
  for (; fVar23 < -180.0; fVar23 = fVar23 + 360.0) {
  }
  auVar29 = ZEXT464((uint)(fVar23 * 0.017453292));
  fVar23 = (float)FUN_180637540(fVar23 * 0.017453292);
  fVar24 = (float)FUN_180638e00(auVar29._0_8_);
  uVar11 = FUN_1802ff520(fVar23 * auVar37._0_4_ - fVar24 * auVar36._0_4_,
                         -fVar24 * auVar37._0_4_ - fVar23 * auVar36._0_4_);
  local_258._0_4_ = (float)uVar11;
  auVar37 = ZEXT464((uint)(float)local_258);
  puVar22[0x12] = (uint)(float)local_258;
  *puVar22 = *puVar22 | 0xc0;
  local_258._4_4_ = (uint)((ulonglong)uVar11 >> 0x20);
  auVar36 = ZEXT464(local_258._4_4_);
  puVar22[0x13] = local_258._4_4_;
  puVar15 = (uint *)0x0;
  local_258 = uVar11;
  if ((puVar22 != (uint *)0xfffffffffffffff8) &&
     (puVar12 = (uint *)FUN_1803dfb00(&DAT_180b0dfb0), puVar12 != (uint *)0x0)) {
    uVar18 = *puVar12;
    puVar12[2] = 0;
    puVar12[3] = 0;
    *(undefined1 *)(puVar12 + 4) = 0;
    *puVar12 = uVar18 | 7;
    puVar12[5] = 0;
    fVar23 = DAT_180b8e148;
    *puVar12 = uVar18 | 0xf;
    puVar12[6] = (uint)(auVar37._0_4_ - fVar23);
    fVar23 = DAT_180b8e14c;
    *puVar12 = uVar18 | 0x1f;
    puVar12[7] = (uint)(auVar36._0_4_ - fVar23);
    puVar15 = puVar12;
  }
  uVar13 = *(ulonglong *)(param_2 + 0x60) & 0xfffffffffffff9e7;
  fVar23 = auVar35._0_4_;
  if (auVar37._0_4_ <= fVar23) {
    if (auVar37._0_4_ < fVar23) {
      uVar13 = uVar13 | 0x10;
    }
  }
  else {
    uVar13 = uVar13 | 8;
  }
  if (auVar36._0_4_ <= fVar23) {
    if (auVar36._0_4_ < fVar23) {
      uVar13 = uVar13 | 0x400;
    }
  }
  else {
    uVar13 = uVar13 | 0x200;
  }
  *(ulonglong *)(param_2 + 0x60) = uVar13;
  auVar30 = ZEXT464((uint)local_1e8);
  local_130 = (uint)local_1e8;
  auVar32 = ZEXT464((uint)local_1e8._4_4_);
  uStack_12c = (uint)local_1e8._4_4_;
  local_128 = local_1e0;
  auVar29 = ZEXT464((uint)DAT_180b8e154);
  local_250 = DAT_180b8e154;
  sVar5 = thunk_FUN_180624430(DAT_180b8e154);
  if (0 < sVar5) {
  }
  local_208[3] = auVar35._0_4_;
  fVar23 = auVar29._0_4_;
  if (fVar23 < local_208[3]) {
  }
  local_1f8 = 1.0;
  pfVar20 = local_208 + 3;
  if (local_208[3] <= fVar23) {
    pfVar20 = &local_250;
  }
  pfVar14 = &local_1f8;
  if (fVar23 <= 1.0) {
    pfVar14 = pfVar20;
  }
  local_250 = *pfVar14;
  fVar24 = (float)FUN_180636c80(auVar36._0_8_,auVar37._0_8_);
  fVar24 = fVar24 * 57.295776;
  local_258 = CONCAT44(local_258._4_4_,fVar24);
  fVar23 = (float)FUN_180636c80(auVar32._0_8_,auVar30._0_8_);
  local_288 = (uint *)&DAT_180b8fbe0;
  uVar11 = FUN_1802fba20(&DAT_180cc82e8,local_230,DAT_180b0dfc8._4_4_,(fVar23 * fVar28) / 3.1415927)
  ;
  local_288 = &local_130;
  auVar37._0_8_ = FUN_1802fc550(uVar11,local_118,lVar8,&DAT_180b8e13c);
  iVar6 = local_1f0;
  uVar3 = local_238;
  auVar37._8_56_ = extraout_var;
  auVar36 = ZEXT1664(auVar37._0_16_);
  fVar23 = (float)auVar37._0_8_;
  while (fVar25 = auVar36._0_4_, fVar28 < fVar23) {
    fVar23 = fVar25 + fVar33;
    auVar36 = ZEXT464((uint)fVar23);
  }
  while (fVar25 < fVar31) {
    fVar25 = auVar36._0_4_ + fVar34;
    auVar36 = ZEXT464((uint)fVar25);
  }
  local_138 = local_130;
  local_134 = uStack_12c;
  bVar1 = (byte)_DAT_180b8fbf8;
  auVar37 = ZEXT464(0x3c800000);
  if (bVar2) {
    fVar23 = -12.0;
    do {
      uVar13 = FUN_1802ff410(local_1ec,iVar6,iVar21,auVar37._0_8_);
      local_260 = uVar3;
      local_268 = local_250;
      local_270 = local_244;
      local_278 = local_240;
      local_280 = local_24c;
      local_288 = (uint *)(CONCAT71(local_288._1_7_,~bVar1) & 0xffffffffffffff01);
      local_230._4_4_ = (uint)(uVar13 >> 0x20);
      uVar18 = local_230._4_4_;
      auVar35 = ZEXT464(local_230._4_4_);
      local_230 = uVar13;
      uVar11 = FUN_1802ff6f0(local_138,local_134,auVar36._0_8_,uVar18);
      for (fVar24 = (float)uVar11 - fVar24; fVar28 < fVar24; fVar24 = fVar24 + fVar33) {
      }
      for (; fVar24 < fVar31; fVar24 = fVar24 + fVar34) {
      }
      for (fVar25 = fVar24 - local_248; fVar28 < fVar25; fVar25 = fVar25 + fVar33) {
      }
      for (; fVar25 < fVar31; fVar25 = fVar25 + fVar34) {
      }
      if (0 < DAT_180b8fc20) {
        local_1d8 = fVar23;
        local_208[0] = ((float)(4 - DAT_180b8fc20) / 3.0) * fVar25;
        pfVar20 = &local_1d8;
        if (fVar23 <= local_208[0]) {
          pfVar20 = local_208;
        }
        if (12.0 < local_208[0]) {
          pfVar20 = (float *)&DAT_180701d10;
        }
        fVar25 = *pfVar20;
      }
      cVar4 = FUN_1803000b0(&DAT_180b8fbe0,puVar22,local_230 & 0xffffffff,fVar25);
      if (cVar4 == '\0') break;
      local_270 = local_244;
      local_278 = local_240;
      local_280 = local_24c;
      local_288 = (uint *)CONCAT44(local_288._4_4_,local_250);
      local_248 = fVar24;
      FUN_1802ff910(&local_138,&local_134,uVar11,auVar35._0_8_);
      iVar21 = iVar21 + 1;
      fVar24 = (float)local_258;
    } while (iVar21 < iVar6);
    DAT_180b8fc00 = CONCAT44(local_134,local_138);
    _DAT_180b8fc08 = local_128;
  }
  else {
    local_260 = local_238;
    local_268 = local_250;
    local_270 = local_244;
    local_278 = local_240;
    local_280 = local_24c;
    local_288 = (uint *)(CONCAT71(local_288._1_7_,~bVar1) & 0xffffffffffffff01);
    fVar23 = (float)FUN_1802ff6f0(local_130,uStack_12c,auVar36._0_8_,auVar37._0_8_);
    fVar24 = (fVar23 - local_248) * 0.017453292;
    auVar36 = ZEXT464((uint)fVar24);
    uVar11 = FUN_180637540(fVar24);
    local_e0 = (undefined4)uVar11;
    uVar26 = FUN_180638e00(auVar36._0_8_);
    local_dc = (undefined4)uVar26;
    local_e8 = FUN_1802ff520(uVar11,uVar26);
    if ((DAT_180cad7a0 == '\0') && (DAT_180cad730 == '\0')) {
      bVar2 = false;
      local_d8 = &local_e0;
      fVar24 = (float)FUN_180301570(&local_d8,&local_e8);
      if (DAT_180b8fc1d != '\0') {
        pfVar20 = (float *)&DAT_180701cd0;
        do {
          if ((*pfVar20 == DAT_180b8fc14) && (pfVar20[1] == DAT_180b8fc18)) {
            fVar25 = (float)FUN_180301570(&local_d8,pfVar20);
            if (fVar25 <= fVar24 + 3.0) {
              local_e8 = *(ulonglong *)pfVar20;
            }
            break;
          }
          pfVar20 = pfVar20 + 2;
        } while (pfVar20 != (float *)&DAT_180701d10);
      }
    }
    else {
      bVar2 = true;
      _DAT_180b8fc1c = 0;
    }
    uVar18 = (uint)(float)local_e8;
    fVar24 = (float)FUN_180636c80(local_e8._4_4_,local_e8 & 0xffffffff);
    uVar11 = auVar37._0_8_;
    fVar25 = auVar35._0_4_;
    for (fVar23 = fVar23 - fVar24 * 57.295776; fVar28 < fVar23; fVar23 = fVar23 + fVar33) {
    }
    for (; fVar23 < fVar31; fVar23 = fVar23 + fVar34) {
    }
    fVar24 = fVar23 + fVar24 * 57.295776;
    auVar36 = ZEXT464((uint)fVar24);
    uVar13 = (ulonglong)(uint)fVar24;
    for (fVar24 = fVar23 - local_248; fVar28 < fVar24; fVar24 = fVar24 + fVar33) {
    }
    for (; fVar24 < fVar31; fVar24 = fVar24 + fVar34) {
    }
    if (puVar15 != (uint *)0x0) {
LAB_180300f17:
      *puVar22 = *puVar22 | 0x40;
      uVar19 = *puVar22;
      puVar22[0x12] = uVar18;
      *puVar22 = uVar19 | 0x80;
      puVar22[0x13] = (uint)local_e8._4_4_;
      if (0.001 < ABS(fVar24)) {
        *puVar22 = uVar19 | 0x84;
        puVar12 = (uint *)0x0;
        if (*(longlong *)(puVar22 + 0xc) != 0) {
          puVar12 = (uint *)(*(longlong *)(puVar22 + 0xc) + 0x10);
        }
        if (puVar12 != (uint *)0x0) {
          *puVar12 = *puVar12 | 2;
          puVar12[3] = (uint)fVar23;
        }
      }
      fVar28 = (float)local_e8 - DAT_180b8e148;
      *puVar15 = *puVar15 | 8;
      puVar15[6] = (uint)fVar28;
      fVar28 = local_e8._4_4_ - DAT_180b8e14c;
      *puVar15 = *puVar15 | 0x10;
      puVar15[7] = (uint)fVar28;
      if ((float)local_e8 <= fVar25) {
        uVar16 = 0;
        if ((float)local_e8 < fVar25) {
          uVar16 = 0x10;
        }
      }
      else {
        uVar16 = 8;
      }
      if (local_e8._4_4_ <= fVar25) {
        if (local_e8._4_4_ < fVar25) {
          uVar16 = uVar16 | 0x400;
        }
      }
      else {
        uVar16 = uVar16 | 0x200;
      }
      *(ulonglong *)(param_2 + 0x60) = *(ulonglong *)(param_2 + 0x60) & 0xfffffffffffff9e7;
      *(ulonglong *)(param_2 + 0x60) = *(ulonglong *)(param_2 + 0x60) | uVar16;
      *(ulonglong *)(param_2 + 0x68) =
           *(ulonglong *)(param_2 + 0x68) |
           (ulonglong)(((uint)*(undefined8 *)(param_2 + 0x60) ^ (uint)local_230) & 0x618);
      *(ulonglong *)(param_2 + 0x70) = *(ulonglong *)(param_2 + 0x70) & 0xfffffffffffff9e7;
      local_270 = local_244;
      local_278 = local_240;
      local_280 = local_24c;
      local_288 = (uint *)CONCAT44(local_288._4_4_,local_250);
      FUN_1802ff910(&local_138,&local_134,uVar13,uVar11);
      _DAT_180b8fbf8 = _DAT_180b8fbf8 + 1;
      DAT_180b8fc00 = CONCAT44(local_134,local_138);
      if (!bVar2) {
        DAT_180b8fbfc = 1;
        _DAT_180b8fc08 = local_128;
        _DAT_180b8fc0c = fVar23;
        _DAT_180b8fc10 = local_1f4;
        DAT_180b8fc14 = (float)local_e8;
        DAT_180b8fc18 = local_e8._4_4_;
        _DAT_180b8fc1c = 0x101;
        DAT_180b8fc1e = 1;
      }
      DAT_180b8fbfc = 1;
      _DAT_180b8fc08 = local_128;
      DAT_180b8fc1e = 1;
    }
    if (puVar22 + 2 != (uint *)0x0) {
      puVar15 = (uint *)FUN_1803dfb00(&DAT_180b0dfb0,puVar22 + 2);
      uVar13 = auVar36._0_8_;
      uVar11 = auVar37._0_8_;
      fVar25 = auVar35._0_4_;
      if (puVar15 != (uint *)0x0) {
        puVar15[2] = 0;
        puVar15[3] = 0;
        *(undefined1 *)(puVar15 + 4) = 0;
        *puVar15 = *puVar15 | 7;
        puVar15[5] = 0;
        uVar18 = (uint)(float)local_e8;
        goto LAB_180300f17;
      }
    }
    _DAT_180b8fc1c = 0;
    DAT_180b8fc00 = CONCAT44(uStack_12c,local_130);
    _DAT_180b8fc08 = local_128;
  }
  _DAT_180b8fbf8 = _DAT_180b8fbf8 + 1;
  DAT_180b8fbfc = 1;
}



