// FUN_1804fbc20 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804fbc20 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_1804fbc20(char *param_1,undefined8 param_2,char *param_3,int param_4,undefined8 *param_5,
                  uint param_6)

{
  char *pcVar1;
  char cVar2;
  byte bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  longlong lVar9;
  ulonglong uVar10;
  char *pcVar11;
  uint uVar12;
  char cVar13;
  byte bVar14;
  char cVar15;
  uint uVar16;
  int iVar17;
  int iVar18;
  float fVar19;
  int iVar20;
  undefined4 uVar21;
  uint uVar22;
  undefined4 *puVar23;
  char *pcVar24;
  undefined **ppuVar25;
  undefined **ppuVar26;
  char *pcVar27;
  short sVar28;
  float *pfVar29;
  int *piVar30;
  ulonglong uVar31;
  uint uVar32;
  undefined4 uVar33;
  int iVar34;
  longlong lVar35;
  longlong lVar37;
  longlong lVar36;
  ulonglong uVar38;
  int *piVar39;
  char *pcVar40;
  undefined **ppuVar41;
  undefined8 *puVar42;
  uint uVar43;
  longlong *plVar44;
  char *pcVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  undefined8 uVar49;
  float fVar50;
  undefined1 auVar51 [64];
  float fVar52;
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [64];
  undefined1 auVar56 [64];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [64];
  float fVar60;
  undefined1 auVar61 [16];
  undefined1 auVar62 [64];
  undefined1 auVar63 [64];
  undefined1 auVar64 [64];
  undefined1 auVar65 [64];
  float fVar66;
  undefined1 auStack_328 [32];
  char *local_308;
  char *local_300;
  char *local_2f8;
  char *local_2f0;
  undefined8 local_2e8;
  undefined4 local_2e0;
  undefined4 local_2d8;
  byte local_2c8;
  byte local_2c7;
  char local_2c6;
  char local_2c5;
  char local_2c4;
  char local_2c3;
  uint local_2c0;
  byte local_2bc;
  char local_2bb;
  uint local_2b8;
  char local_2b4;
  uint local_2b0;
  float local_2ac;
  char local_2a8;
  uint local_2a4;
  char local_2a0;
  char *local_298;
  uint local_290;
  char local_28c;
  byte local_28b;
  char local_28a;
  char local_289;
  char local_288;
  char local_287;
  uint local_284;
  undefined8 local_280;
  uint local_278;
  undefined8 local_270;
  char local_268;
  longlong *local_260;
  uint local_258;
  uint local_254;
  uint local_250;
  undefined8 local_248;
  undefined8 local_240;
  longlong local_238;
  uint local_230;
  float local_22c;
  undefined1 local_228 [8];
  undefined8 uStack_220;
  uint local_218;
  undefined4 local_214;
  undefined4 local_210;
  float local_20c;
  float local_208 [2];
  longlong *local_200;
  char *local_1f8;
  char *local_1f0;
  char *local_1e8;
  longlong local_1e0;
  float local_1d8;
  float fStack_1d4;
  float local_1d0;
  float fStack_1cc;
  char *local_1c8;
  undefined4 local_1c0;
  uint local_1bc;
  undefined8 local_1b8;
  uint local_1b0;
  undefined4 local_1ac;
  undefined2 local_1a8;
  undefined1 local_1a6;
  char local_1a5;
  undefined4 uStack_1a4;
  undefined3 uStack_1a0;
  undefined5 local_19d;
  int iStack_198;
  undefined4 uStack_194;
  int iStack_190;
  int iStack_18c;
  int iStack_188;
  undefined3 uStack_184;
  undefined1 local_181;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  ulonglong uStack_160;
  undefined8 local_158;
  char *pcStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined1 local_138 [16];
  undefined8 local_128;
  undefined1 local_120 [12];
  float fStack_114;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  ulonglong local_e0;
  
  pcVar11 = DAT_180bb8ae8;
  local_e0 = DAT_1808d5f00 ^ (ulonglong)auStack_328;
  *(undefined1 *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0xce) = 1;
  plVar44 = *(longlong **)(pcVar11 + 0x14d0);
  if (*(char *)((longlong)plVar44 + 0xd1) != '\0') {
  }
  uVar32 = param_6 & 0x4000000;
  local_2b0 = uVar32;
  local_298 = param_3;
  local_284 = param_4;
  local_200 = plVar44;
  local_1e8 = param_1;
  if (uVar32 != 0) {
    FUN_1804c68e0();
  }
  uVar16 = FUN_1804b0a90(param_1,0,
                         *(undefined4 *)(plVar44[0x22] + -4 + (longlong)(int)plVar44[0x21] * 4));
  local_2c0 = uVar16;
  if (*(uint *)(*plVar44 + 0x1534) == uVar16) {
    FUN_1804cf810(uVar16,0xb,param_1);
  }
  local_1f0 = param_1;
  if (param_1 != (char *)0xffffffffffffffff) {
    while( true ) {
      if (*local_1f0 == '\0') break;
      pcVar45 = local_1f0 + 1;
      if (((*local_1f0 == '#') && (*pcVar45 == '#')) ||
         (local_1f0 = pcVar45, pcVar45 == (char *)0xffffffffffffffff)) break;
    }
  }
  auVar59 = ZEXT464(0x7f7fffff);
  auVar62 = ZEXT464(0xbf800000);
  if (param_1 == local_1f0) {
    fVar46 = 0.0;
    local_270._4_4_ = *(float *)(DAT_180bb8ae8 + 0x11e0);
  }
  else {
    local_2d8 = 0;
    local_2e8 = 0;
    local_308 = (char *)CONCAT44(local_308._4_4_,0xbf800000);
    local_300 = param_1;
    local_2f8 = local_1f0;
    local_2f0 = local_1f0;
    FUN_1804ea040(&local_270,*(undefined8 *)(DAT_180bb8ae8 + 0x11d0),
                  *(float *)(DAT_180bb8ae8 + 0x11e0),auVar59._0_8_);
    fVar46 = (float)(int)((uint)((float)(int)(float)local_270 < (float)local_270) +
                         (int)(float)local_270);
  }
  fVar47 = 0.0;
  if (uVar32 != 0) {
    local_270._4_4_ = *(float *)(pcVar11 + 0x11e0) * 8.0;
  }
  fVar19 = *(float *)(pcVar11 + 0xcc8) + *(float *)(pcVar11 + 0xcc8);
  auVar51 = ZEXT464((uint)(fVar19 + local_270._4_4_));
  local_20c = fVar46;
  uVar49 = FUN_1804c6720(fVar19,local_270._4_4_);
  FUN_1804c67b0(&local_280,*param_5,uVar49,auVar51._0_8_);
  if (fVar46 <= fVar47) {
    fVar46 = 0.0;
  }
  else {
    fVar46 = fVar46 + *(float *)(pcVar11 + 0xcdc);
  }
  local_1d8 = *(float *)(plVar44 + 0x23);
  fStack_1cc = local_280._4_4_ + *(float *)((longlong)plVar44 + 0x11c);
  fStack_1d4 = *(float *)((longlong)plVar44 + 0x11c);
  local_1d0 = (float)local_280 + local_1d8;
  local_120._8_4_ = fVar46 + (float)local_280 + local_1d8;
  local_120._0_8_ = plVar44[0x23];
  fStack_114 = fStack_1d4 + local_280._4_4_;
  auVar54 = ZEXT416((uint)(float)local_280);
  local_208[0] = (float)local_280;
  local_178 = (char *)0x0;
  uStack_170 = 0;
  uStack_168 = 0;
  uStack_160 = 0;
  local_158 = 0;
  pcStack_150 = (char *)0x0;
  uStack_148 = 0;
  uStack_140 = 0;
  local_138 = (undefined1  [16])0x0;
  bVar4 = true;
  local_270 = (char *)CONCAT44((fStack_1d4 + local_280._4_4_) - fStack_1d4,
                               (float)local_120._8_4_ - local_1d8);
  local_260 = plVar44;
  if (uVar32 == 0) {
    auVar51 = ZEXT1664(auVar54);
    auVar64 = ZEXT1664(auVar54);
    auVar59 = ZEXT1664(auVar59._0_16_);
    auVar62 = ZEXT1664(auVar62._0_16_);
    FUN_1804c6420(&local_270);
    auVar61 = auVar62._0_16_;
    auVar58 = auVar59._0_16_;
    auVar57 = auVar64._0_16_;
    auVar53 = auVar51._0_16_;
    if ((param_6 >> 0x1b & 1) == 0) {
      cVar13 = FUN_1804c6190(local_120,uVar16,&local_1d8,0x100000);
      auVar61 = auVar62._0_16_;
      auVar58 = auVar59._0_16_;
      auVar57 = auVar64._0_16_;
      auVar53 = auVar51._0_16_;
      if (cVar13 == '\0') {
      }
    }
    local_230 = (uint)uStack_170;
    local_210 = local_178._4_4_;
    auVar54 = ZEXT816(0);
  }
  else {
    uVar21 = (undefined4)plVar44[0x23];
    uVar33 = *(undefined4 *)((longlong)plVar44 + 0x11c);
    auVar51 = ZEXT1664(auVar54);
    auVar59 = ZEXT1664(auVar59._0_16_);
    auVar62 = ZEXT1664(auVar62._0_16_);
    FUN_1804c6420(&local_270);
    if (((*(uint *)(pcVar11 + 0x2580) != uVar16) && (*(uint *)(pcVar11 + 0x1550) != uVar16)) &&
       (uVar16 != *(uint *)(pcVar11 + 0x2054))) {
      bVar4 = false;
    }
    cVar13 = FUN_1804c6190(local_120,uVar16,&local_1d8,0x100000);
    if ((cVar13 == '\0') && (!bVar4)) {
LAB_1804fc0b1:
      FUN_1804c6a30();
    }
    _local_120 = *(undefined1 (*) [16])(pcVar11 + 0x1ec0);
    uStack_110 = *(undefined8 *)(pcVar11 + 0x1ed0);
    uStack_108 = *(undefined8 *)(pcVar11 + 0x1ed8);
    local_158 = *(undefined8 *)(pcVar11 + 0x1ee0);
    pcStack_150 = *(char **)(pcVar11 + 0x1ee8);
    uStack_148 = *(undefined8 *)(pcVar11 + 0x1ef0);
    uStack_140 = *(undefined8 *)(pcVar11 + 0x1ef8);
    local_138 = *(undefined1 (*) [16])(pcVar11 + 0x1f00);
    *(undefined4 *)(plVar44 + 0x23) = uVar21;
    *(undefined4 *)((longlong)plVar44 + 0x11c) = uVar33;
    uVar32 = *(uint *)(pcVar11 + 0x2054);
    if ((uVar32 == uVar16) &&
       ((((byte)*(undefined4 *)(pcVar11 + 0x2060) & 0x28) == 8 && ((param_6 & 0x20) != 0)))) {
      pcVar11[0x2054] = '\0';
      pcVar11[0x2055] = '\0';
      pcVar11[0x2056] = '\0';
      pcVar11[0x2057] = '\0';
      uVar32 = 0;
    }
    if (*(uint *)(pcVar11 + 0x1550) == uVar16) {
      pcVar11[0x2054] = '\0';
      pcVar11[0x2055] = '\0';
      pcVar11[0x2056] = '\0';
      pcVar11[0x2057] = '\0';
    }
    auVar51 = ZEXT1664(auVar51._0_16_);
    auVar64 = ZEXT1664(auVar59._0_16_);
    auVar62 = ZEXT1664(auVar62._0_16_);
    FUN_1804b2af0(3,pcVar11 + 0xe38);
    FUN_1804b2c00(7,*(undefined4 *)(pcVar11 + 0xccc));
    FUN_1804b2c00(8,*(undefined4 *)(pcVar11 + 0xcd0));
    auVar59 = ZEXT864(0);
    local_270 = (char *)0x0;
    FUN_1804b2d30(2,&local_270);
    local_270 = (char *)CONCAT44(fStack_1cc - fStack_1d4,local_1d0 - local_1d8);
    local_308 = (char *)CONCAT44(local_308._4_4_,4);
    cVar13 = FUN_1804bb960(local_1e8,uVar16,&local_270,1);
    *(uint *)(pcVar11 + 0x2054) = uVar32;
    FUN_1804b2de0(3);
    FUN_1804b2b70(1);
    auVar61 = auVar62._0_16_;
    auVar58 = auVar64._0_16_;
    auVar53 = auVar51._0_16_;
    auVar54 = auVar59._0_16_;
    if ((cVar13 == '\0') && (!bVar4)) {
      FUN_1804bbd00();
      goto LAB_1804fc0b1;
    }
    plVar44 = *(longlong **)(pcVar11 + 0x14d0);
    *(ushort *)((longlong)plVar44 + 0x176) =
         *(ushort *)((longlong)plVar44 + 0x176) | (ushort)(1 << (*(uint *)(plVar44 + 0x2e) & 0x1f));
    *(float *)(plVar44 + 0x23) = *(float *)(plVar44 + 0x23) + *(float *)(pcVar11 + 0xcc4);
    *(float *)((longlong)plVar44 + 0x11c) =
         *(float *)(pcVar11 + 0xcc8) + *(float *)((longlong)plVar44 + 0x11c);
    local_208[0] = auVar51._0_4_ - *(float *)(plVar44 + 0x18);
    auVar57 = ZEXT416((uint)local_208[0]);
    *(uint *)(pcVar11 + 0x1ec0) = uVar16;
    local_210 = local_120._4_4_;
    *(undefined4 *)(pcVar11 + 0x1ec4) = local_120._4_4_;
    local_230 = local_120._8_4_;
    *(undefined4 *)(pcVar11 + 0x1ec8) = local_120._8_4_;
    uVar32 = local_2b0;
    local_260 = plVar44;
  }
  auVar59 = ZEXT1664(auVar54);
  auVar63 = ZEXT1664(auVar53);
  auVar62 = ZEXT1664(auVar57);
  auVar51 = ZEXT1664(auVar58);
  auVar64 = ZEXT1664(auVar61);
  bVar14 = FUN_1804b7e00(&local_1d8,uVar16,*(uint *)(pcVar11 + 0x1ec4) | 0x8000);
  if (bVar14 == 0) {
    local_2ac = 0.0;
  }
  else {
    pcVar45 = DAT_180bb8ae8;
    pcVar45[0x24d8] = '\x01';
    pcVar45[0x24d9] = '\0';
    pcVar45[0x24da] = '\0';
    pcVar45[0x24db] = '\0';
    local_2ac = (float)(uint)bVar14;
    if (pcVar11[0x2039] != '\0') {
      local_2ac = 0.0;
    }
  }
  if ((uVar16 == 0) ||
     (local_270 = DAT_180bb8ae8 + 0x24e8, *(uint *)(DAT_180bb8ae8 + 0x24fc) != uVar16)) {
    local_270 = (char *)0x0;
  }
  pcVar45 = local_270;
  local_2a4 = param_6 | 0x200;
  if ((*(uint *)(pcVar11 + 0x1ec4) >> 0xb & 1) == 0) {
    local_2a4 = param_6;
  }
  local_2b8 = local_2a4 & 0x200;
  local_258 = local_2a4 & 0x400;
  local_254 = local_2a4 & 0x10000;
  local_218 = local_2a4 & 0x400000;
  local_278 = *(uint *)(pcVar11 + 0x1ec4) & 0x200;
  local_250 = local_2a4 & 0x1000000;
  auVar54 = ZEXT816(0);
  local_214 = 0;
  if (local_250 != 0) {
    if (*(char *)((longlong)plVar44 + 0xc9) == '\0') {
      fVar46 = -*(float *)(pcVar11 + 0xcfc);
    }
    else {
      fVar46 = 0.0;
    }
    lVar35 = *(longlong *)(DAT_180bb8ae8 + 0x14d0);
    if ((*(longlong *)(lVar35 + 0x1c8) != 0) ||
       (pfVar29 = (float *)(lVar35 + 0x280), *(longlong *)(DAT_180bb8ae8 + 0x2338) != 0)) {
      pfVar29 = (float *)(lVar35 + 0x250);
    }
    auVar54 = vmaxss_avx(SUB6416(ZEXT464(0x3f800000),0),
                         ZEXT416((uint)((*pfVar29 - *(float *)(lVar35 + 0x118)) + fVar46)));
    local_214 = auVar54._0_4_;
  }
  auVar65 = ZEXT1664(auVar54);
  if ((SUB41(local_2ac,0) == '\0') || (pcVar11[0xb40] == '\0')) {
    local_2c6 = '\0';
  }
  else {
    local_2c6 = '\x01';
  }
  if ((*(uint *)(pcVar11 + 0x1550) == uVar16) ||
     (local_2c4 = '\x01', *(uint *)(pcVar11 + 0x2054) != uVar16)) {
    local_2c4 = '\0';
  }
  local_22c = *(float *)(pcVar11 + 0x2604);
  if ((local_2c6 == '\0') &&
     (((*(uint *)(pcVar11 + 0x1550) != 0 || ((local_2a4 >> 0x1b & 1) == 0)) ||
      (*(uint *)(pcVar11 + 0x2580) == uVar16)))) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  uVar16 = local_2a4;
  if ((uVar32 == 0) || (local_270 == (char *)0x0)) {
    iVar18 = 0;
    if ((local_2b0 != 0) && (iVar17 = 0, local_270 != (char *)0x0)) goto LAB_1804fc42d;
LAB_1804fc446:
    bVar5 = false;
    iVar17 = *(int *)(pcVar11 + 0x1550);
    if ((local_2b0 != 0) && (pcVar45 != (char *)0x0)) goto LAB_1804fc45a;
LAB_1804fc477:
    local_290 = local_290 & 0xffffff00;
    local_2bb = '\0';
    if (local_2b0 == 0) {
      auVar55 = ZEXT1664(auVar51._0_16_);
      local_2bb = '\0';
    }
    else {
      auVar55 = ZEXT464(*(uint *)((longlong)plVar44 + 0x9c));
    }
  }
  else {
    iVar17 = FUN_1804b0a90("#SCROLLY",0,
                           *(undefined4 *)(plVar44[0x22] + -4 + (longlong)(int)plVar44[0x21] * 4));
    if (*(int *)(*plVar44 + 0x1534) == iVar17) {
      FUN_1804cf810(iVar17,0xb,"#SCROLLY");
      uVar16 = local_2a4;
    }
LAB_1804fc42d:
    iVar18 = iVar17;
    if ((*(int *)(pcVar11 + 0x1550) != 0) || (*(int *)(pcVar11 + 0x1580) != iVar18))
    goto LAB_1804fc446;
    bVar5 = true;
    iVar17 = 0;
LAB_1804fc45a:
    if (iVar17 != iVar18) goto LAB_1804fc477;
    local_2bb = '\x01';
    local_290 = local_290 & 0xffffff00;
    auVar55 = ZEXT464(*(uint *)((longlong)plVar44 + 0x9c));
  }
  pcVar24 = local_298;
  uVar32 = local_2c0;
  local_2c3 = '\0';
  if ((pcVar45 == (char *)0x0) || (pcVar45[0x76] == '\0')) {
    bVar6 = false;
    if (pcVar45 != (char *)0x0) goto LAB_1804fc4b5;
LAB_1804fc4cf:
    bVar7 = false;
    if (pcVar45 != (char *)0x0) goto LAB_1804fc4d7;
LAB_1804fc4e8:
    bVar8 = false;
  }
  else {
    bVar6 = true;
LAB_1804fc4b5:
    if ((bool)*(char *)(*(longlong *)(pcVar45 + 8) + 0x17) == (local_2b0 == 0)) goto LAB_1804fc4cf;
    bVar7 = true;
LAB_1804fc4d7:
    if (((uVar16 ^ *(uint *)(pcVar45 + 0x10)) >> 9 & 1) == 0) goto LAB_1804fc4e8;
    bVar8 = true;
  }
  if ((((bVar4) || (local_2c4 != '\0')) || (local_22c == (float)local_2c0)) || (bVar5)) {
    local_2bc = 1;
  }
  else {
    local_2bc = 0;
  }
  if (bVar6) {
    lVar35 = -1;
    do {
      lVar35 = lVar35 + 1;
    } while (local_298[lVar35] != '\0');
    pcVar45[0x76] = '\0';
    local_308 = (char *)CONCAT44(local_308._4_4_,(int)lVar35);
    FUN_1804fb6b0(pcVar45,*(undefined8 *)(pcVar45 + 0x30),*(undefined4 *)(pcVar45 + 0x18));
    iVar17 = local_284 + 1;
    iVar18 = *(int *)(pcVar45 + 0x2c);
    if (iVar18 < iVar17) {
      if (iVar18 == 0) {
        iVar18 = 8;
      }
      else {
        iVar18 = iVar18 / 2 + iVar18;
      }
      iVar34 = iVar17;
      if (iVar17 < iVar18) {
        iVar34 = iVar18;
      }
      FUN_1804d0ea0(pcVar45 + 0x28,iVar34);
    }
    *(int *)(pcVar45 + 0x28) = iVar17;
    *(int *)(pcVar45 + 0x18) = (int)lVar35;
    FUN_18063aed0(*(undefined8 *)(pcVar45 + 0x30));
    *(undefined4 *)(*(longlong *)(pcVar45 + 8) + 4) = *(undefined4 *)(pcVar45 + 0x78);
    *(undefined4 *)(*(longlong *)(pcVar45 + 8) + 8) = *(undefined4 *)(pcVar45 + 0x7c);
    **(undefined4 **)(pcVar45 + 8) = (*(undefined4 **)(pcVar45 + 8))[2];
  }
  else if (((local_2bc != 0) && (*(uint *)(pcVar11 + 0x1550) != local_2c0)) || ((bVar7 || (bVar8))))
  {
    pcVar45 = pcVar11 + 0x24e8;
    pcVar11[0x2554] = -0x66;
    pcVar11[0x2555] = -0x67;
    pcVar11[0x2556] = -0x67;
    pcVar11[0x2557] = -0x42;
    local_270 = pcVar45;
    if (((*(uint *)(pcVar11 + 0x24fc) != local_2c0) &&
        (*(uint *)(pcVar11 + 0x24fc) == *(uint *)(pcVar11 + 0x1550))) &&
       ((local_2bc != 0 && (*(uint *)(pcVar11 + 0x1550) != local_2c0)))) {
      FUN_1804fb820();
    }
    lVar35 = -1;
    do {
      lVar37 = lVar35;
      lVar35 = lVar37 + 1;
    } while (local_298[lVar35] != '\0');
    if (!bVar5) {
      iVar17 = (int)lVar37 + 2;
      iVar18 = *(int *)(pcVar11 + 0x2524);
      if (iVar18 < iVar17) {
        if (iVar18 == 0) {
          iVar18 = 8;
        }
        else {
          iVar18 = iVar18 / 2 + iVar18;
        }
        iVar34 = iVar17;
        if (iVar17 < iVar18) {
          iVar34 = iVar18;
        }
        FUN_1804d0ea0(pcVar11 + 0x2520,iVar34);
      }
      *(int *)(pcVar11 + 0x2520) = iVar17;
      FUN_18063aed0(*(undefined8 *)(pcVar11 + 0x2528),local_298,(longlong)iVar17);
      uVar32 = local_2c0;
    }
    iVar18 = (int)lVar35;
    pcVar40 = local_298;
    if ((*(uint *)(pcVar11 + 0x24fc) != uVar32) || (bVar7)) {
LAB_1804fc699:
      bVar4 = false;
    }
    else {
      bVar4 = true;
      if (!bVar8) {
        if ((*(int *)(pcVar11 + 0x2500) == iVar18) && (*(char **)(pcVar11 + 0x2518) != (char *)0x0))
        {
          uVar16 = strncmp(*(char **)(pcVar11 + 0x2518),local_298,(longlong)iVar18);
          pcVar40 = (char *)(ulonglong)uVar16;
          if (uVar16 == 0) goto LAB_1804fc69c;
        }
        goto LAB_1804fc699;
      }
    }
LAB_1804fc69c:
    *(uint *)(pcVar11 + 0x24fc) = uVar32;
    *(int *)(pcVar11 + 0x2500) = iVar18;
    pcVar11[0x255b] = '\0';
    if (local_2b8 == 0) {
      iVar17 = local_284 + 1;
      iVar18 = *(int *)(pcVar11 + 0x2514);
      if (iVar18 < iVar17) {
        if (iVar18 == 0) {
          iVar18 = 8;
        }
        else {
          iVar18 = iVar18 / 2 + iVar18;
        }
        iVar34 = iVar17;
        if (iVar17 < iVar18) {
          iVar34 = iVar18;
        }
        FUN_1804d0ea0(pcVar11 + 0x2510,iVar34);
      }
      pcVar24 = local_298;
      *(int *)(pcVar11 + 0x2510) = iVar17;
      pcVar40 = (char *)FUN_18063aed0(*(undefined8 *)(pcVar11 + 0x2518),local_298,
                                      (longlong)(*(int *)(pcVar11 + 0x2500) + 1));
    }
    else {
      pcVar24 = local_298;
    }
    fVar46 = auVar63._0_4_;
    pcVar11[0x2544] = '\0';
    pcVar11[0x2545] = '\0';
    pcVar11[0x2546] = '\0';
    pcVar11[0x2547] = '\0';
    pcVar11[0x2548] = '\0';
    pcVar11[0x2549] = '\0';
    pcVar11[0x254a] = '\0';
    pcVar11[0x254b] = '\0';
    if ((local_2a4 >> 0x11 & 1) != 0) {
      if (pcVar24 == (char *)0x0) {
        fVar47 = auVar59._0_4_;
        pcVar40 = DAT_180bb8ae8;
      }
      else {
        local_2d8 = 0;
        local_2e8 = 0;
        local_2f0 = (char *)0x0;
        local_2f8 = (char *)0x0;
        local_308 = (char *)CONCAT44(local_308._4_4_,auVar64._0_4_);
        local_300 = pcVar24;
        FUN_1804ea040(&local_248,*(undefined8 *)(DAT_180bb8ae8 + 0x11d0),
                      *(undefined4 *)(DAT_180bb8ae8 + 0x11e0),auVar51._0_8_);
        fVar46 = auVar63._0_4_;
        uVar32 = (uint)((float)(int)(float)local_248 < (float)local_248) + (int)(float)local_248;
        pcVar40 = (char *)(ulonglong)uVar32;
        fVar47 = (float)(int)uVar32;
      }
      auVar54 = vmaxss_avx(auVar59._0_16_,
                           ZEXT416((uint)(*(float *)(pcVar11 + 0xcc4) + *(float *)(pcVar11 + 0xcc4)
                                         + (fVar47 - fVar46))));
      *(float *)(pcVar11 + 0x2544) = auVar54._0_4_ + *(float *)(pcVar11 + 0x2544);
    }
    if (!bVar4) {
      puVar23 = *(undefined4 **)(pcVar11 + 0x24f0);
      *(undefined8 *)(puVar23 + 0x28e) = 0x630000;
      puVar23[0x290] = 999;
      *(undefined8 *)(puVar23 + 1) = 0;
      *puVar23 = 0;
      *(undefined2 *)((longlong)puVar23 + 0x15) = 1;
      puVar23[7] = 0;
      *(undefined1 *)(puVar23 + 5) = 0;
      pcVar40 = (char *)0x0;
      *(bool *)((longlong)puVar23 + 0x17) = local_2b0 == 0;
      *(undefined1 *)(puVar23 + 3) = 0;
      puVar23[4] = 0;
    }
    if (local_2b0 == 0) {
      if (((local_2a4 >> 0xc & 1) == 0) && (local_278 == 0)) {
        uVar38 = (ulonglong)local_290;
      }
      else {
        uVar38 = CONCAT71((int7)((ulonglong)pcVar40 >> 8),1);
        local_290 = (uint)uVar38;
      }
      uVar32 = (uint)uVar38;
      if ((local_2c4 != '\0') && ((!bVar4 || ((pcVar11[0x2060] & 4U) == 0)))) {
        uVar32 = (uint)CONCAT71((int7)(uVar38 >> 8),1);
        local_290 = uVar32;
      }
      if ((local_2c6 != '\0') && (local_290 = uVar32 & 0xff, pcVar11[300] != '\0')) {
        local_290 = 1;
      }
    }
    if ((local_2a4 >> 0xb & 1) != 0) {
      *(undefined1 *)(*(longlong *)(pcVar11 + 0x24f0) + 0xc) = 1;
    }
  }
  bVar14 = local_2bc;
  cVar15 = local_2c6;
  cVar13 = pcVar11[0x78];
  local_268 = cVar13;
  if ((local_2bc == 0) || (*(uint *)(pcVar11 + 0x1550) == local_2c0)) {
    cVar2 = local_2c4;
  }
  else {
    FUN_1804b7870(local_2c0,local_200);
    FUN_1804c8fd0(local_2c0);
    FUN_1804c8a10();
    cVar2 = local_2c4;
    if (local_2c4 != '\0') {
      FUN_1804c8df0();
    }
  }
  uVar38 = (ulonglong)local_2c0;
  if (*(uint *)(pcVar11 + 0x1550) == local_2c0) {
    local_100 = 0x20200000201;
    uStack_f8 = 0x20b0000020a;
    local_f0 = 0x207;
    local_ec = 0x208;
    puVar42 = &local_100;
    do {
      pcVar40 = DAT_180bb8ae8;
      puVar23 = (undefined4 *)FUN_1804af210(DAT_180bb8ae8);
      uVar21 = (undefined4)uVar38;
      puVar23[1] = uVar21;
      *puVar23 = uVar21;
      *(undefined2 *)(puVar23 + 2) = 0;
      puVar42 = (undefined8 *)((longlong)puVar42 + 4);
    } while (puVar42 != (undefined8 *)&local_e8);
    if (cVar15 != '\0') {
      *(undefined4 *)(pcVar40 + 0x1c98) = uVar21;
      *(undefined4 *)(pcVar40 + 0x1c94) = uVar21;
      pcVar40[0x1c9c] = '\0';
      pcVar40[0x1c9d] = '\0';
    }
    uVar32 = *(uint *)(pcVar11 + 0x1e70);
    *(uint *)(pcVar11 + 0x1e70) = uVar32 | 3;
    if ((local_2b0 != 0) || ((local_2a4 & 0x80000) != 0)) {
      *(uint *)(pcVar11 + 0x1e70) = uVar32 | 0xf;
      pcVar40 = DAT_180bb8ae8;
      *(undefined4 *)(DAT_180bb8ae8 + 0x15fc) = uVar21;
      *(undefined4 *)(pcVar40 + 0x15f8) = uVar21;
      pcVar40[0x1600] = '\0';
      pcVar40[0x1601] = '\0';
      *(undefined4 *)(pcVar40 + 0x1608) = uVar21;
      *(undefined4 *)(pcVar40 + 0x1604) = uVar21;
      pcVar40[0x160c] = '\0';
      pcVar40[0x160d] = '\0';
      if (local_2b0 != 0) {
        *(undefined4 *)(pcVar40 + 0x1614) = uVar21;
        *(undefined4 *)(pcVar40 + 0x1610) = uVar21;
        pcVar40[0x1618] = '\0';
        pcVar40[0x1619] = '\0';
        *(undefined4 *)(pcVar40 + 0x1620) = uVar21;
        *(undefined4 *)(pcVar40 + 0x161c) = uVar21;
        pcVar40[0x1624] = '\0';
        pcVar40[0x1625] = '\0';
      }
    }
    pcVar40 = DAT_180bb8ae8;
    if (cVar13 != '\0') {
      *(undefined4 *)(DAT_180bb8ae8 + 0x1d04) = uVar21;
      *(undefined4 *)(pcVar40 + 0x1d00) = uVar21;
      pcVar40[0x1d08] = '\0';
      pcVar40[0x1d09] = '\0';
    }
    if ((local_2b0 != 0) && (pcVar45 != (char *)0x0)) {
      *(undefined4 *)(pcVar45 + 0x60) = *(undefined4 *)((longlong)local_260 + 0x9c);
    }
    if (local_2b8 == 0) {
      if (pcVar45 != (char *)0x0) goto LAB_1804fca4f;
    }
    else if (pcVar45 != (char *)0x0) {
      lVar35 = -1;
      do {
        lVar35 = lVar35 + 1;
      } while (pcVar24[lVar35] != '\0');
      *(int *)(pcVar45 + 0x18) = (int)lVar35;
LAB_1804fca4f:
      piVar39 = *(int **)(pcVar45 + 8);
      iVar18 = *(int *)(pcVar45 + 0x18);
      if (*piVar39 < *(int *)(pcVar45 + 0x18)) {
        iVar18 = *piVar39;
      }
      *piVar39 = iVar18;
      lVar35 = *(longlong *)(pcVar45 + 8);
      iVar18 = *(int *)(pcVar45 + 0x18);
      if (*(int *)(lVar35 + 4) < *(int *)(pcVar45 + 0x18)) {
        iVar18 = *(int *)(lVar35 + 4);
      }
      *(int *)(lVar35 + 4) = iVar18;
      lVar35 = *(longlong *)(pcVar45 + 8);
      iVar18 = *(int *)(pcVar45 + 0x18);
      if (*(int *)(lVar35 + 8) < *(int *)(pcVar45 + 0x18)) {
        iVar18 = *(int *)(lVar35 + 8);
      }
      *(int *)(lVar35 + 8) = iVar18;
      goto LAB_1804fca8a;
    }
  }
  else {
    if (pcVar45 == (char *)0x0) goto LAB_1804fca9c;
LAB_1804fca8a:
    if (local_2b8 == 0) {
      pcVar24 = *(char **)(pcVar45 + 0x30);
    }
    *(char **)(pcVar45 + 0x20) = pcVar24;
  }
LAB_1804fca9c:
  if (*(int *)(pcVar11 + 0x1550) == (int)uVar38) {
    if (pcVar45 == (char *)0x0) {
      FUN_1804b7870();
      uVar38 = (ulonglong)local_2c0;
    }
    if (*(int *)(pcVar11 + 0x1550) != (int)uVar38) goto LAB_1804fcad8;
    if ((pcVar11[0xb40] == '\0') || (bVar14 != 0)) goto LAB_1804fcae4;
    local_2c3 = '\x01';
    local_2c7 = 1;
  }
  else {
LAB_1804fcad8:
    if ((pcVar45 == (char *)0x0) || (local_2bb == '\0')) {
      local_2c7 = 0;
    }
    else {
LAB_1804fcae4:
      local_2c7 = 1;
    }
  }
  cVar15 = (char)local_290;
  if ((pcVar45 == (char *)0x0) ||
     (((*(int *)(*(longlong *)(pcVar45 + 8) + 4) == *(int *)(*(longlong *)(pcVar45 + 8) + 8) &&
       (cVar15 == '\0')) || (local_2c7 == 0)))) {
    bVar14 = 0;
    local_2c8 = 0;
    if ((local_2c7 != 0) || (local_2c8 = 0, *(int *)(pcVar11 + 0x1550) == (int)uVar38))
    goto LAB_1804fcb48;
LAB_1804fcb58:
    local_287 = '\0';
  }
  else {
    bVar14 = 1;
    local_2c8 = 1;
LAB_1804fcb48:
    if ((local_2b8 != 0) || (local_287 = '\x01', pcVar45 == (char *)0x0)) goto LAB_1804fcb58;
  }
  local_2c5 = '\0';
  local_2c6 = '\0';
  if (local_258 != 0) {
    FUN_1804fb1e0();
    uVar38 = (ulonglong)local_2c0;
  }
  fVar46 = auVar65._0_4_;
  if ((pcVar45 != (char *)0x0) && (*(int *)(pcVar45 + 0x14) == (int)uVar38)) {
    *(uint *)(pcVar45 + 0x10) = local_2a4;
    pcVar45[0x74] = '\0';
    pcVar45[0x75] = '\0';
    if ((local_250 != 0) && (*(float *)(pcVar45 + 0x68) != fVar46)) {
      pcVar45[0x71] = '\x01';
      *(float *)(pcVar45 + 0x68) = fVar46;
      local_2c7 = 1;
    }
  }
  fVar47 = 0.5;
  if (*(int *)(pcVar11 + 0x1550) == (int)uVar38) {
    *(uint *)(pcVar45 + 0x58) = local_284;
    *(float *)(pcVar45 + 0x68) = fVar46;
    pcVar11[0x155f] = pcVar11[0x118] == '\0';
    if (cVar15 != '\0') {
      *(undefined4 *)(*(longlong *)(pcVar45 + 8) + 4) = 0;
      *(undefined4 *)(*(longlong *)(pcVar45 + 8) + 8) = *(undefined4 *)(pcVar45 + 0x18);
      **(undefined4 **)(pcVar45 + 8) = (*(undefined4 **)(pcVar45 + 8))[2];
      *(undefined1 *)(*(longlong *)(pcVar45 + 8) + 0x16) = 0;
      pcVar45[0x72] = '\x01';
      goto LAB_1804fce62;
    }
    if (((SUB41(local_2ac,0) == '\0') || (*(ushort *)(pcVar11 + 0xb4a) < 2)) ||
       (pcVar11[0x12d] != '\0')) {
      if ((pcVar11[0xb40] != '\0') && (pcVar45[0x72] == '\0')) {
        if (SUB41(local_2ac,0) != '\0') {
          if (pcVar11[0x12d] == '\0') {
            FUN_1804f9520(pcVar45);
          }
          else {
            FUN_1804f95a0();
          }
          goto LAB_1804fce56;
        }
        goto LAB_1804fce62;
      }
      if (pcVar11[0x118] == '\0') goto LAB_1804fce62;
      if (pcVar45[0x72] == '\0') {
        if ((*(float *)(pcVar11 + 0xfc) != auVar59._0_4_) ||
           (*(float *)(pcVar11 + 0x100) != auVar59._0_4_)) {
          FUN_1804f95a0(pcVar45);
          pcVar45[0x70] = '\x01';
          goto LAB_1804fce56;
        }
        goto LAB_1804fce62;
      }
LAB_1804fce68:
      if (pcVar11[0x118] == '\0') {
        pcVar45[0x72] = '\0';
      }
    }
    else {
      FUN_1804f9520(pcVar45,*(undefined8 *)(pcVar45 + 8));
      piVar39 = *(int **)(pcVar45 + 8);
      iVar18 = *piVar39;
      if ((pcVar11[0xb4a] & 1U) == 0) {
        if ((iVar18 == 0) ||
           (*(char *)(*(longlong *)(pcVar45 + 0x20) + -1 + (longlong)iVar18) == '\n')) {
          bVar4 = true;
        }
        else {
          bVar4 = false;
        }
        if ((piVar39[1] != piVar39[2]) || (!bVar4)) {
          FUN_1804f99f0(pcVar45,piVar39,0x20000c);
          pcVar45[0x70] = '\x01';
          pcVar45[0x6c] = -0x66;
          pcVar45[0x6d] = -0x67;
          pcVar45[0x6e] = -0x67;
          pcVar45[0x6f] = -0x42;
          pcVar45[0x77] = '\0';
        }
        puVar23 = *(undefined4 **)(pcVar45 + 8);
        if (puVar23[1] == puVar23[2]) {
          puVar23[2] = *puVar23;
          puVar23[1] = *puVar23;
        }
        uVar21 = FUN_1804f8c50(pcVar45,**(undefined4 **)(pcVar45 + 8));
        **(undefined4 **)(pcVar45 + 8) = uVar21;
        (*(undefined4 **)(pcVar45 + 8))[2] = **(undefined4 **)(pcVar45 + 8);
        piVar39 = *(int **)(pcVar45 + 8);
        iVar18 = *(int *)(pcVar45 + 0x18);
        iVar17 = piVar39[2];
        iVar34 = piVar39[1];
        if (iVar34 != iVar17) {
          if (iVar18 < iVar34) {
            piVar39[1] = iVar18;
            iVar34 = iVar18;
          }
          if (iVar18 < iVar17) {
            piVar39[2] = iVar18;
            iVar17 = iVar18;
          }
          if (iVar34 == iVar17) {
            *piVar39 = iVar34;
          }
        }
        if (iVar18 < *piVar39) {
          *piVar39 = iVar18;
        }
      }
      else {
        cVar15 = *(char *)((longlong)iVar18 + *(longlong *)(pcVar45 + 0x20));
        pcVar45[0x68] = '\0';
        pcVar45[0x69] = '\0';
        pcVar45[0x6a] = '\0';
        pcVar45[0x6b] = '\0';
        FUN_1804f99f0(pcVar45,piVar39,0x200004);
        pcVar45[0x70] = '\x01';
        pcVar45[0x6c] = -0x66;
        pcVar45[0x6d] = -0x67;
        pcVar45[0x6e] = -0x67;
        pcVar45[0x6f] = -0x42;
        pcVar45[0x77] = '\0';
        FUN_1804f99f0(pcVar45,*(undefined8 *)(pcVar45 + 8),0x600005);
        pcVar45[0x70] = '\x01';
        pcVar45[0x6c] = -0x66;
        pcVar45[0x6d] = -0x67;
        pcVar45[0x6e] = -0x67;
        pcVar45[0x6f] = -0x42;
        pcVar45[0x77] = '\x01';
        FUN_1804f99f0(pcVar45);
        pcVar45[0x70] = '\x01';
        pcVar45[0x6c] = -0x66;
        pcVar45[0x6d] = -0x67;
        pcVar45[0x6e] = -0x67;
        pcVar45[0x6f] = -0x42;
        pcVar45[0x77] = '\x01';
        *(int *)(pcVar45 + 0x68) = auVar65._0_4_;
        if ((cVar15 != '\n') && (local_2b0 != 0)) {
          lVar35 = *(longlong *)(pcVar45 + 8);
          uVar21 = *(undefined4 *)(lVar35 + 4);
          *(undefined4 *)(lVar35 + 4) = *(undefined4 *)(lVar35 + 8);
          *(undefined4 *)(lVar35 + 8) = uVar21;
          **(undefined4 **)(pcVar45 + 8) = (*(undefined4 **)(pcVar45 + 8))[2];
        }
        pcVar45[0x70] = '\0';
      }
LAB_1804fce56:
      pcVar45[0x6c] = -0x66;
      pcVar45[0x6d] = -0x67;
      pcVar45[0x6e] = -0x67;
      pcVar45[0x6f] = -0x42;
LAB_1804fce62:
      if (pcVar45[0x72] != '\0') goto LAB_1804fce68;
    }
    if ((((local_2a4 & 0x20) != 0) && (local_2b8 == 0)) &&
       (cVar15 = FUN_1804c5370(0x200), cVar15 != '\0')) {
      local_2ac = 1.26117e-44;
      local_300 = (char *)((ulonglong)local_300 & 0xffffffffffffff00);
      cVar15 = FUN_1804fb3d0(pcVar11);
      if (cVar15 != '\0') {
        FUN_1804fb0a0(pcVar45);
      }
    }
    if (((pcVar11[300] == '\0') || (pcVar11[0x12e] != '\0')) &&
       ((cVar13 == '\0' || (pcVar11[300] == '\0')))) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (0 < *(int *)(pcVar11 + 0xbe0)) {
      if (((!bVar4) && (local_2b8 == 0)) && (cVar2 == '\0')) {
        iVar18 = 0;
        lVar35 = 0;
        do {
          local_2ac = (float)(uint)*(ushort *)(lVar35 + *(longlong *)(pcVar11 + 0xbe8));
          if (local_2ac != 1.26117e-44) {
            local_300 = (char *)((ulonglong)local_300 & 0xffffffffffffff00);
            cVar15 = FUN_1804fb3d0(pcVar11);
            if (cVar15 != '\0') {
              FUN_1804fb0a0(pcVar45);
            }
          }
          iVar18 = iVar18 + 1;
          lVar35 = lVar35 + 2;
        } while (iVar18 < *(int *)(pcVar11 + 0xbe0));
      }
      if (*(int *)(pcVar11 + 0xbe4) < 0) {
        FUN_1804d1090();
      }
      pcVar11[0xbe0] = '\0';
      pcVar11[0xbe1] = '\0';
      pcVar11[0xbe2] = '\0';
      pcVar11[0xbe3] = '\0';
    }
    uVar38 = (ulonglong)local_2c0;
  }
  cVar15 = '\0';
  local_2bb = '\0';
  uVar32 = (uint)uVar38;
  fVar46 = local_280._4_4_;
  if (((*(uint *)(pcVar11 + 0x1550) == uVar32) && (pcVar11[0x155c] == '\0')) && (local_2c3 == '\0'))
  {
    fVar19 = (float)(int)((local_280._4_4_ - *(float *)(pcVar11 + 0xcc8)) /
                         *(float *)(pcVar11 + 0x11e0));
    local_2ac = 1.4013e-45;
    if (0 < (int)fVar19) {
      local_2ac = fVar19;
    }
    *(float *)(*(longlong *)(pcVar45 + 8) + 0x10) = local_2ac;
    uVar32 = -(uint)(pcVar11[0x12d] != '\0') & 0x400000;
    if (cVar13 == '\0') {
      local_2c4 = pcVar11[300];
LAB_1804fd093:
      local_2bc = 0;
    }
    else {
      local_2c4 = pcVar11[0x12e];
      local_2c5 = '\0';
      local_2c6 = '\0';
      local_2c8 = bVar14;
      if (pcVar11[300] == '\0') goto LAB_1804fd093;
      local_2c5 = '\0';
      local_2c6 = '\0';
      if (pcVar11[0x12f] != '\0') goto LAB_1804fd093;
      local_2c5 = '\0';
      local_2c6 = '\0';
      if (local_2c4 != '\0') goto LAB_1804fd093;
      local_2bc = 1;
      local_2c5 = '\0';
      local_2c6 = '\0';
    }
    cVar13 = FUN_1804c5370(0x1239,1,uVar38 & 0xffffffff);
    uVar16 = local_2c0;
    if ((((cVar13 == '\0') && (cVar13 = FUN_1804c5370(0x220a,1,local_2c0), cVar13 == '\0')) ||
        ((local_2b8 != 0 || (local_258 != 0)))) ||
       ((local_2b0 != 0 &&
        (*(int *)(*(longlong *)(pcVar45 + 8) + 4) == *(int *)(*(longlong *)(pcVar45 + 8) + 8))))) {
      local_2a8 = '\0';
    }
    else {
      local_2a8 = '\x01';
    }
    uVar12 = local_258;
    uVar43 = local_2b0;
    uVar22 = local_2b8;
    cVar13 = FUN_1804c5370(0x1224,0,uVar16);
    if ((((cVar13 == '\0') && (cVar13 = FUN_1804c5370(0x1209,0,uVar16), cVar13 == '\0')) ||
        (uVar12 != 0)) ||
       ((uVar43 != 0 &&
        (*(int *)(*(longlong *)(pcVar45 + 8) + 4) == *(int *)(*(longlong *)(pcVar45 + 8) + 8))))) {
      local_289 = '\0';
    }
    else {
      local_289 = '\x01';
    }
    bVar4 = true;
    cVar13 = FUN_1804c5370(0x1237,1,uVar16);
    if (((cVar13 == '\0') && (cVar13 = FUN_1804c5370(0x2209,1,uVar16), cVar13 == '\0')) ||
       (local_288 = '\x01', uVar22 != 0)) {
      local_288 = '\0';
    }
    cVar13 = FUN_1804c5370(0x123b,1,uVar16);
    uVar43 = local_254;
    if (((cVar13 == '\0') || (uVar22 != 0)) || (local_28b = 1, local_254 != 0)) {
      local_28b = 0;
    }
    cVar13 = FUN_1804c5370(0x123a,1,uVar16);
    if (((cVar13 == '\0') && (cVar13 = FUN_1804c5370(0x323b,1,uVar16), cVar13 == '\0')) ||
       ((uVar22 != 0 || (local_28a = '\x01', uVar43 != 0)))) {
      local_28a = '\0';
    }
    local_2b4 = FUN_1804c5370(0x1222,0,uVar16);
    if (((pcVar11[0x28] & 2U) == 0) || ((pcVar11[0x2c] & 1U) == 0)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    cVar13 = FUN_1804c5370(0x20d,1,uVar16);
    if (cVar13 == '\0') {
      cVar13 = FUN_1804c5370(0x273,1,uVar16);
      local_28c = '\0';
      if (cVar13 != '\0') goto LAB_1804fd236;
    }
    else {
LAB_1804fd236:
      local_28c = '\x01';
    }
    cVar13 = FUN_1804c5370(0x120d,1,uVar16);
    if ((cVar13 == '\0') && (cVar13 = FUN_1804c5370(0x1273,1,uVar16), cVar13 == '\0')) {
      local_2a0 = '\0';
    }
    else {
      local_2a0 = '\x01';
    }
    cVar13 = FUN_1804c5370(0x220d,1,uVar16);
    if ((cVar13 == '\0') && (cVar13 = FUN_1804c5370(0x2273,1,uVar16), cVar13 == '\0')) {
      bVar4 = false;
    }
    if (bVar5) {
      uVar49 = 0x27d;
      if (pcVar11[0x71] != '\0') {
        uVar49 = 0x27b;
      }
      cVar13 = FUN_1804c3390(uVar49,0,0);
      if (cVar13 == '\0') goto LAB_1804fd2c2;
      bVar6 = true;
    }
    else {
LAB_1804fd2c2:
      bVar6 = false;
    }
    cVar13 = FUN_1804c5370(0x20e,1);
    if (cVar13 == '\0') {
      if (bVar5) {
        uVar21 = 0x27b;
        if (pcVar11[0x71] != '\0') {
          uVar21 = 0x27d;
        }
        cVar13 = FUN_1804c5370(uVar21,1);
        if (cVar13 != '\0') goto LAB_1804fd312;
      }
      bVar5 = false;
    }
    else {
LAB_1804fd312:
      bVar5 = true;
    }
    cVar13 = FUN_1804c3390(0x201,1);
    if (cVar13 == '\0') {
      cVar13 = FUN_1804c3390(0x202,1);
      if (cVar13 != '\0') {
        if (local_2bc == 0) {
          uVar16 = 0x200001;
          if (local_2c4 != '\0') {
            uVar16 = 0x20000d;
          }
          uVar16 = uVar32 | uVar16;
        }
        else {
          uVar16 = uVar32 | 0x200005;
        }
        goto LAB_1804fd34d;
      }
      cVar13 = FUN_1804c3390(0x203,1);
      uVar16 = local_2b0;
      if ((cVar13 != '\0') && (local_2b0 != 0)) {
        if (pcVar11[300] == '\0') {
          uVar16 = (uint)local_2bc * 4 + 0x200002 | uVar32;
          goto LAB_1804fd34d;
        }
        auVar54 = vmaxss_avx(ZEXT416((uint)(*(float *)((longlong)local_260 + 0x9c) -
                                           *(float *)(pcVar11 + 0x11e0))),auVar59._0_16_);
        *(int *)((longlong)local_260 + 0xac) = auVar54._0_4_;
        *(undefined4 *)((longlong)local_260 + 0xb4) = 0;
        *(undefined4 *)((longlong)local_260 + 0xbc) = 0;
        goto LAB_1804fd35a;
      }
      cVar13 = FUN_1804c3390(0x204,1);
      if ((cVar13 != '\0') && (uVar16 != 0)) {
        if (pcVar11[300] == '\0') {
          uVar16 = (uint)local_2bc * 4 + 0x200003 | uVar32;
          goto LAB_1804fd34d;
        }
        auVar54 = vminss_avx(ZEXT416((uint)(*(float *)(pcVar11 + 0x11e0) +
                                           *(float *)((longlong)local_260 + 0x9c))),
                             ZEXT416(*(uint *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0xa4)));
        *(int *)((longlong)local_260 + 0xac) = auVar54._0_4_;
        *(undefined4 *)((longlong)local_260 + 0xb4) = 0;
        *(undefined4 *)((longlong)local_260 + 0xbc) = 0;
        goto LAB_1804fd35a;
      }
      cVar13 = FUN_1804c3390(0x205,1);
      if ((cVar13 != '\0') && (uVar16 != 0)) {
        FUN_1804fb020(pcVar45,uVar32 | 0x20000e);
        auVar55 = ZEXT464((uint)(auVar55._0_4_ -
                                (float)(int)local_2ac * *(float *)(pcVar11 + 0x11e0)));
        goto LAB_1804fd35a;
      }
      cVar13 = FUN_1804c3390(0x206,1);
      if ((cVar13 != '\0') && (uVar16 != 0)) {
        FUN_1804fb020(pcVar45,uVar32 | 0x20000f);
        auVar55 = ZEXT464((uint)(auVar55._0_4_ +
                                (float)(int)local_2ac * *(float *)(pcVar11 + 0x11e0)));
        goto LAB_1804fd35a;
      }
      cVar13 = FUN_1804c3390(0x207,1);
      if (cVar13 != '\0') {
        uVar16 = uVar32 | 0x200004;
        if (pcVar11[300] != '\0') {
          uVar16 = uVar32 | 0x200006;
        }
        goto LAB_1804fd34d;
      }
      cVar13 = FUN_1804c3390(0x208,1);
      if (cVar13 != '\0') {
        uVar16 = uVar32 | 0x200005;
        if (pcVar11[300] != '\0') {
          uVar16 = uVar32 | 0x200007;
        }
        goto LAB_1804fd34d;
      }
      cVar15 = FUN_1804c3390(0x20a,1);
      cVar13 = local_2a8;
      if (((cVar15 != '\0') && (local_2b8 == 0)) && (local_2a8 == '\0')) {
        lVar35 = *(longlong *)(pcVar45 + 8);
        if ((*(int *)(lVar35 + 4) == *(int *)(lVar35 + 8)) && (local_2c4 != '\0')) {
          FUN_1804f99f0(pcVar45,lVar35,0x60000d);
          pcVar45[0x70] = '\x01';
          pcVar45[0x6c] = -0x66;
          pcVar45[0x6d] = -0x67;
          pcVar45[0x6e] = -0x67;
          pcVar45[0x6f] = -0x42;
          pcVar45[0x77] = '\x01';
        }
        uVar16 = uVar32 | 0x200008;
        goto LAB_1804fd34d;
      }
      cVar15 = FUN_1804c3390(0x20b,1);
      if ((cVar15 != '\0') && (local_2b8 == 0)) {
        lVar35 = *(longlong *)(pcVar45 + 8);
        if (*(int *)(lVar35 + 4) == *(int *)(lVar35 + 8)) {
          if (local_2c4 == '\0') {
            if ((((local_268 == '\0') || (pcVar11[300] == '\0')) || (pcVar11[0x12e] != '\0')) ||
               (pcVar11[0x12f] != '\0')) goto LAB_1804fd685;
            uVar49 = 0x600004;
          }
          else {
            uVar49 = 0x60000c;
          }
          FUN_1804f99f0(pcVar45,lVar35,uVar49);
          pcVar45[0x77] = '\0';
          pcVar45[0x6c] = -0x66;
          pcVar45[0x6d] = -0x67;
          pcVar45[0x6e] = -0x67;
          pcVar45[0x6f] = -0x42;
          pcVar45[0x70] = '\x01';
        }
LAB_1804fd685:
        uVar16 = uVar32 | 0x200009;
        goto LAB_1804fd34d;
      }
      if (((local_28c != '\0') || (local_2a0 != '\0')) || ((bVar4 || (bVar6)))) {
        if (((local_2b0 == 0) || (bVar6)) ||
           ((!bVar4 &&
            (((local_28c == '\0' || ((local_2a4 & 0x100) != 0)) &&
             ((local_2a0 == '\0' || ((local_2a4 & 0x100) == 0)))))))) {
          local_2c3 = '\x01';
          local_2c6 = '\x01';
          if ((((pcVar11[0x7b] != '\0') && (local_2b0 == 0)) && (local_2a0 == '\0')) && (!bVar4)) {
            *(undefined4 *)(*(longlong *)(pcVar45 + 8) + 4) = 0;
            *(undefined4 *)(*(longlong *)(pcVar45 + 8) + 8) = *(undefined4 *)(pcVar45 + 0x18);
            **(undefined4 **)(pcVar45 + 8) = (*(undefined4 **)(pcVar45 + 8))[2];
            *(undefined1 *)(*(longlong *)(pcVar45 + 8) + 0x16) = 0;
            *(uint *)(pcVar11 + 0x2604) = local_2c0;
          }
        }
        else if (local_2b8 == 0) {
          local_2ac = 1.4013e-44;
          local_300 = (char *)((ulonglong)local_300 & 0xffffffffffffff00);
          cVar13 = FUN_1804fb3d0(pcVar11,pcVar45,&local_2ac);
          if (cVar13 != '\0') {
            FUN_1804fb0a0(pcVar45,local_2ac);
          }
        }
        goto LAB_1804fd35a;
      }
      if (!bVar5) {
        if ((local_28b == 0) && (local_28a == '\0')) {
          if (local_2b4 == '\0') {
            if ((cVar13 == '\0') && (local_289 == '\0')) {
              if ((local_288 != '\0') &&
                 ((*(code **)(DAT_180bb8ae8 + 0xbf8) != (code *)0x0 &&
                  (pcVar24 = (char *)(**(code **)(DAT_180bb8ae8 + 0xbf8))(), pcVar24 != (char *)0x0)
                  ))) {
                lVar35 = -1;
                do {
                  lVar35 = lVar35 + 1;
                } while (pcVar24[lVar35] != '\0');
                pcVar40 = pcVar24 + (int)lVar35;
                local_240 = 0;
                local_238 = 0;
                local_248 = pcVar40;
                FUN_1804d0ea0(&local_240,(int)lVar35 + 1);
                uVar38 = local_240 & 0xffffffff;
                cVar13 = *pcVar24;
                iVar18 = local_240._4_4_;
                iVar17 = (int)(float)local_240;
                lVar35 = local_238;
                while (cVar13 != '\0') {
                  iVar17 = FUN_1804b0e50(&local_2ac,pcVar24,pcVar40);
                  pcVar24 = pcVar24 + iVar17;
                  local_300 = (char *)CONCAT71(local_300._1_7_,1);
                  cVar13 = FUN_1804fb3d0(pcVar11,pcVar45,&local_2ac);
                  if (cVar13 != '\0') {
                    iVar17 = FUN_1804b1000(&local_e8);
                    *(undefined1 *)((longlong)&local_e8 + (longlong)iVar17) = 0;
                    lVar37 = -1;
                    do {
                      lVar36 = lVar37 + 1;
                      lVar9 = lVar37 + 1;
                      lVar37 = lVar36;
                    } while (*(char *)((longlong)&local_e8 + lVar9) != '\0');
                    iVar17 = (int)lVar36;
                    iVar34 = (int)uVar38 + iVar17;
                    uVar38 = (ulonglong)iVar34;
                    if (iVar18 < iVar34) {
                      if (iVar18 == 0) {
                        iVar18 = 8;
                      }
                      else {
                        iVar18 = iVar18 / 2 + iVar18;
                      }
                      iVar20 = iVar34;
                      if (iVar34 < iVar18) {
                        iVar20 = iVar18;
                      }
                      FUN_1804d0ea0(&local_240,iVar20);
                      lVar35 = local_238;
                      iVar18 = local_240._4_4_;
                    }
                    local_240 = CONCAT44(local_240._4_4_,iVar34);
                    FUN_18063aed0((uVar38 - (longlong)iVar17) + lVar35,&local_e8);
                    pcVar40 = local_248;
                  }
                  iVar17 = (int)uVar38;
                  cVar13 = *pcVar24;
                }
                if (0 < iVar17) {
                  if (iVar17 == iVar18) {
                    if (iVar18 == 0) {
                      iVar18 = 8;
                    }
                    else {
                      iVar18 = iVar18 / 2 + iVar18;
                    }
                    iVar34 = iVar17 + 1;
                    if (iVar17 + 1 < iVar18) {
                      iVar34 = iVar18;
                    }
                    FUN_1804d0ea0(&local_240,iVar34);
                    lVar35 = local_238;
                    iVar17 = (int)(float)local_240;
                  }
                  *(undefined1 *)(iVar17 + lVar35) = 0;
                  local_240 = CONCAT44(local_240._4_4_,iVar17 + 1);
                  piVar39 = *(int **)(pcVar45 + 8);
                  iVar18 = *(int *)(pcVar45 + 0x18);
                  iVar34 = piVar39[2];
                  iVar20 = piVar39[1];
                  if (iVar20 != iVar34) {
                    if (iVar18 < iVar20) {
                      piVar39[1] = iVar18;
                      iVar20 = iVar18;
                    }
                    if (iVar18 < iVar34) {
                      piVar39[2] = iVar18;
                      iVar34 = iVar18;
                    }
                    if (iVar20 == iVar34) {
                      *piVar39 = iVar20;
                    }
                  }
                  if (iVar18 < *piVar39) {
                    *piVar39 = iVar18;
                  }
                  FUN_1804f9960(pcVar45,piVar39);
                  iVar18 = FUN_1804f9170(pcVar45,*piVar39,lVar35,iVar17);
                  if (iVar18 != 0) {
                    FUN_1804fa9e0(piVar39 + 8,*piVar39,0,iVar18);
                    *piVar39 = *piVar39 + iVar18;
                    *(undefined1 *)((longlong)piVar39 + 0x16) = 0;
                  }
                  pcVar45[0x70] = '\x01';
                }
                pcVar24 = DAT_180bb8ae8;
                if (lVar35 != 0) {
                  if (DAT_180bb8ae8 != (char *)0x0) {
                    piVar39 = (int *)(DAT_180bb8ae8 + 4);
                    piVar30 = (int *)(DAT_180bb8ae8 +
                                     (longlong)*(short *)(DAT_180bb8ae8 + 0x2994) * 8 + 0x2998);
                    if (*piVar30 != *piVar39) {
                      iVar18 = *(short *)(DAT_180bb8ae8 + 0x2994) + 1;
                      sVar28 = (short)iVar18 + (short)(iVar18 / 6) * -6;
                      *(short *)(DAT_180bb8ae8 + 0x2994) = sVar28;
                      piVar30 = (int *)(pcVar24 + ((longlong)sVar28 + 0x533) * 8);
                      *piVar30 = *piVar39;
                      piVar30[1] = 0;
                    }
                    *(short *)((longlong)piVar30 + 6) = *(short *)((longlong)piVar30 + 6) + 1;
                    piVar39 = (int *)(pcVar24 + 0x2990);
                    *piVar39 = *piVar39 + 1;
                  }
                  thunk_FUN_180621380(lVar35);
                }
              }
            }
            else {
              if (*(longlong *)(pcVar11 + 0xc00) != 0) {
                iVar17 = *(int *)(*(longlong *)(pcVar45 + 8) + 8);
                iVar18 = *(int *)(*(longlong *)(pcVar45 + 8) + 4);
                if (iVar18 == iVar17) {
                  iVar34 = 0;
                  iVar17 = *(int *)(pcVar45 + 0x18);
                }
                else if (iVar18 < iVar17) {
                  iVar34 = iVar18;
                }
                else {
                  iVar34 = iVar17;
                  iVar17 = iVar18;
                }
                iVar17 = iVar17 - iVar34;
                FUN_1804d0ea0(pcVar11 + 0x2ad0,iVar17 + 1);
                FUN_18063aed0(*(undefined8 *)(pcVar11 + 0x2ad8),
                              (longlong)iVar34 + *(longlong *)(pcVar45 + 0x20),(longlong)iVar17);
                *(undefined1 *)((longlong)iVar17 + *(longlong *)(pcVar11 + 0x2ad8)) = 0;
                if (*(code **)(DAT_180bb8ae8 + 0xc00) != (code *)0x0) {
                  (**(code **)(DAT_180bb8ae8 + 0xc00))
                            (DAT_180bb8ae8,*(undefined8 *)(pcVar11 + 0x2ad8));
                }
              }
              if (cVar13 != '\0') {
                lVar35 = *(longlong *)(pcVar45 + 8);
                if (*(int *)(lVar35 + 4) == *(int *)(lVar35 + 8)) {
                  *(undefined4 *)(lVar35 + 4) = 0;
                  *(undefined4 *)(*(longlong *)(pcVar45 + 8) + 8) = *(undefined4 *)(pcVar45 + 0x18);
                  **(undefined4 **)(pcVar45 + 8) = (*(undefined4 **)(pcVar45 + 8))[2];
                  *(undefined1 *)(*(longlong *)(pcVar45 + 8) + 0x16) = 0;
                }
                pcVar45[0x70] = '\x01';
                lVar35 = *(longlong *)(pcVar45 + 8);
                if (*(int *)(lVar35 + 4) != *(int *)(lVar35 + 8)) {
                  FUN_1804f9960(pcVar45,lVar35);
                  *(undefined1 *)(lVar35 + 0x16) = 0;
                }
              }
            }
          }
          else {
            *(undefined4 *)(*(longlong *)(pcVar45 + 8) + 4) = 0;
            *(undefined4 *)(*(longlong *)(pcVar45 + 8) + 8) = *(undefined4 *)(pcVar45 + 0x18);
            **(undefined4 **)(pcVar45 + 8) = (*(undefined4 **)(pcVar45 + 8))[2];
            *(undefined1 *)(*(longlong *)(pcVar45 + 8) + 0x16) = 0;
            pcVar45[0x70] = '\x01';
          }
        }
        else {
          FUN_1804fb020(pcVar45,(local_28b ^ 1) + 0x20000a);
          (*(undefined4 **)(pcVar45 + 8))[2] = **(undefined4 **)(pcVar45 + 8);
          *(undefined4 *)(*(longlong *)(pcVar45 + 8) + 4) =
               *(undefined4 *)(*(longlong *)(pcVar45 + 8) + 8);
        }
        goto LAB_1804fd35a;
      }
      if ((local_2a4 & 0x80) == 0) {
        cVar15 = '\x01';
        local_2bb = '\x01';
        local_2c3 = '\x01';
        local_2c8 = 0;
        local_2c7 = 0;
      }
      else if (**(char **)(pcVar45 + 0x20) == '\0') {
        local_2c8 = 0;
        local_2c7 = 0;
        local_2c3 = '\x01';
        cVar15 = '\0';
      }
      else {
        cVar15 = '\x01';
        local_2bb = '\x01';
      }
    }
    else {
      if (local_2bc == 0) {
        uVar16 = 0x200000;
        if (local_2c4 != '\0') {
          uVar16 = 0x20000c;
        }
      }
      else {
        uVar16 = 0x200004;
      }
      uVar16 = uVar32 | uVar16;
LAB_1804fd34d:
      FUN_1804fb020(pcVar45,uVar16);
LAB_1804fd35a:
      cVar15 = '\0';
    }
    if ((*(int *)(*(longlong *)(pcVar45 + 8) + 4) == *(int *)(*(longlong *)(pcVar45 + 8) + 8)) ||
       (local_2c7 == 0)) {
      bVar14 = 0;
    }
    else {
      bVar14 = 1;
    }
    local_2c8 = local_2c8 | bVar14;
    uVar32 = local_2c0;
  }
  uVar16 = local_2a4;
  uVar21 = 0;
  ppuVar41 = (undefined **)0x0;
  local_280 = (undefined **)0x0;
  iVar18 = 0;
  if (*(uint *)(pcVar11 + 0x1550) == uVar32) {
    if ((cVar15 != '\0') && (local_2b8 == 0)) {
      if ((char)local_2a4 < '\0') {
        local_280 = &PTR_180700558;
        local_2c5 = '\x01';
        puVar23 = *(undefined4 **)(pcVar45 + 8);
        local_308 = (char *)((ulonglong)local_308 & 0xffffffff00000000);
        FUN_1804fae00(pcVar45,puVar23,0,*(undefined4 *)(pcVar45 + 0x18));
        iVar17 = *(int *)(pcVar45 + 0x18);
        **(undefined1 **)(pcVar45 + 0x30) = (*(undefined1 **)(pcVar45 + 0x30))[iVar17];
        pcVar45[0x73] = '\x01';
        pcVar45[0x74] = '\x01';
        *(int *)(pcVar45 + 0x18) = *(int *)(pcVar45 + 0x18) - iVar17;
        *(undefined8 *)(puVar23 + 1) = 0;
        *puVar23 = 0;
      }
      else {
        ppuVar41 = *(undefined ***)(pcVar45 + 0x40);
        pcVar24 = *(char **)(pcVar45 + 0x20);
        lVar35 = (longlong)ppuVar41 - (longlong)pcVar24;
        do {
          cVar13 = *pcVar24;
          cVar2 = pcVar24[lVar35];
          if (cVar13 != cVar2) break;
          pcVar24 = pcVar24 + 1;
        } while (cVar2 != '\0');
        if (cVar13 != cVar2) {
          iVar18 = *(int *)(pcVar45 + 0x38) + -1;
          local_2c5 = '\x01';
          local_280 = ppuVar41;
          FUN_1804faee0(pcVar45,*(undefined8 *)(pcVar45 + 8),ppuVar41,iVar18);
        }
      }
    }
    if ((uVar16 & 0x9c0000) != 0) {
      uVar33 = 0x40000;
      if (((uVar16 & 0x40000) == 0) || (cVar13 = FUN_1804c5370(0x200,0), cVar13 == '\0')) {
        if ((uVar16 >> 0x13 & 1) == 0) {
LAB_1804fdd56:
          uVar33 = 0x800000;
          if (((uVar16 & 0x800000) == 0) || (pcVar45[0x74] == '\0')) {
            if ((uVar16 >> 0x14 & 1) == 0) goto LAB_1804fdf4c;
            uVar33 = 0x100000;
          }
        }
        else {
          cVar13 = FUN_1804c3390(0x203,1);
          if (cVar13 == '\0') {
            cVar13 = FUN_1804c3390(0x204,1);
            if (cVar13 == '\0') goto LAB_1804fdd56;
            uVar33 = 0x80000;
            uVar21 = 0x204;
          }
          else {
            uVar33 = 0x80000;
            uVar21 = 0x203;
          }
        }
      }
      else {
        uVar21 = 0x200;
      }
      local_1ac = 0;
      local_1a8 = 0;
      local_1a5 = 0;
      uStack_1a4 = 0;
      uStack_1a0 = 0;
      local_19d = 0;
      iStack_198 = 0;
      uStack_194 = 0;
      iStack_190 = 0;
      iStack_18c = 0;
      iStack_188 = 0;
      uStack_184 = 0;
      local_181 = 0;
      local_1c8 = pcVar11;
      local_1b0 = local_2c0;
      local_1bc = uVar16;
      if ((*(int *)(pcVar11 + 0x1550) != *(int *)(pcVar45 + 0x14)) ||
         (local_1a6 = 1, pcVar11[0x155c] == '\0')) {
        local_1a6 = 0;
      }
      local_1b8 = 0;
      pcVar24 = local_298;
      if (local_2b8 == 0) {
        pcVar24 = *(char **)(pcVar45 + 0x30);
      }
      iVar34 = *(int *)(pcVar45 + 0x18) + 1;
      iVar17 = *(int *)(pcVar45 + 0x4c);
      local_1c0 = uVar33;
      if (iVar17 < iVar34) {
        if (iVar17 == 0) {
          iVar17 = 8;
        }
        else {
          iVar17 = iVar17 / 2 + iVar17;
        }
        iVar20 = iVar34;
        if (iVar34 < iVar17) {
          iVar20 = iVar17;
        }
        FUN_1804d0ea0(pcVar45 + 0x48,iVar20);
      }
      *(int *)(pcVar45 + 0x48) = iVar34;
      FUN_18063aed0(*(undefined8 *)(pcVar45 + 0x50),pcVar24);
      uStack_1a0 = SUB83(pcVar24,0);
      local_19d = (undefined5)((ulonglong)pcVar24 >> 0x18);
      iStack_198 = *(int *)(pcVar45 + 0x18);
      uStack_194 = *(undefined4 *)(pcVar45 + 0x58);
      local_1a5 = '\0';
      piVar39 = *(int **)(pcVar45 + 8);
      iStack_190 = *piVar39;
      iStack_18c = piVar39[1];
      iStack_188 = piVar39[2];
      local_1ac = uVar21;
      (*(code *)0x0)(&local_1c8);
      if ((local_1a5 != '\0') || (iStack_190 != **(int **)(pcVar45 + 8))) {
        pcVar45[0x70] = '\x01';
      }
      if (iStack_190 < 0) {
        iVar17 = 0;
      }
      else {
        iVar17 = iStack_190;
        if (iStack_198 < iStack_190) {
          iVar17 = iStack_198;
        }
      }
      **(int **)(pcVar45 + 8) = iVar17;
      if (iStack_18c < 0) {
        iVar17 = 0;
      }
      else {
        iVar17 = iStack_18c;
        if (iStack_198 < iStack_18c) {
          iVar17 = iStack_198;
        }
      }
      *(int *)(*(longlong *)(pcVar45 + 8) + 4) = iVar17;
      if (iStack_188 < 0) {
        iVar17 = 0;
      }
      else {
        iVar17 = iStack_188;
        if (iStack_198 < iStack_188) {
          iVar17 = iStack_198;
        }
      }
      *(int *)(*(longlong *)(pcVar45 + 8) + 8) = iVar17;
      if (local_1a5 != '\0') {
        local_308 = (char *)CONCAT44(local_308._4_4_,iStack_198);
        FUN_1804fb6b0(pcVar45,*(undefined8 *)(pcVar45 + 0x50),*(int *)(pcVar45 + 0x48) + -1,
                      CONCAT53(local_19d,uStack_1a0));
        *(int *)(pcVar45 + 0x18) = iStack_198;
        pcVar45[0x73] = '\x01';
        pcVar45[0x74] = '\x01';
        pcVar45[0x6c] = -0x66;
        pcVar45[0x6d] = -0x67;
        pcVar45[0x6e] = -0x67;
        pcVar45[0x6f] = -0x42;
      }
      cVar15 = local_2bb;
    }
LAB_1804fdf4c:
    ppuVar41 = (undefined **)0x0;
    uVar32 = local_2c0;
    if (local_2b8 == 0) {
      if ((pcVar11[0x1ec4] & 0x80U) == 0) {
        if (((local_2c6 != '\0') || (local_2c3 != '\0')) || (cVar15 != '\0')) {
          ppuVar25 = *(undefined ***)(pcVar45 + 0x20);
          ppuVar26 = ppuVar25;
          do {
            uVar16 = (uint)*(byte *)((longlong)ppuVar26 + ((longlong)local_298 - (longlong)ppuVar25)
                                    );
            uVar22 = (uint)*(byte *)ppuVar26;
            if (uVar22 != uVar16) break;
            ppuVar26 = (undefined **)((longlong)ppuVar26 + 1);
          } while (uVar16 != 0);
          if ((uVar22 != uVar16) || ((local_278 != uVar22 - uVar16 && (local_2c6 != '\0')))) {
            local_2c5 = '\x01';
            iVar18 = *(int *)(pcVar45 + 0x18);
            ppuVar41 = ppuVar25;
            goto LAB_1804fe055;
          }
        }
        local_2c5 = '\0';
        iVar18 = 0;
      }
      else {
        ppuVar41 = *(undefined ***)(pcVar45 + 0x20);
        ppuVar25 = ppuVar41;
        do {
          bVar14 = *(byte *)ppuVar25;
          bVar3 = *(byte *)((longlong)ppuVar25 + ((longlong)local_298 - (longlong)ppuVar41));
          if (bVar14 != bVar3) break;
          ppuVar25 = (undefined **)((longlong)ppuVar25 + 1);
        } while (bVar3 != 0);
        if ((bVar14 == bVar3) &&
           ((local_278 == 0 || ((pcVar45[0x74] == '\0' && (local_2c6 == '\0')))))) {
          ppuVar41 = local_280;
        }
        else {
          iVar18 = *(int *)(pcVar45 + 0x18);
          local_2c5 = '\x01';
        }
      }
      goto LAB_1804fe055;
    }
    ppuVar41 = local_280;
  }
  else {
LAB_1804fe055:
  }
  if (*(uint *)(pcVar11 + 0x2580) == uVar32) {
    if (*(uint *)(pcVar11 + 0x1550) == uVar32) {
      uVar16 = local_2a4 & 0x8000000;
joined_r0x0001804fe0b0:
      if (uVar16 != 0) {
LAB_1804fe0b2:
        if (local_2b8 == 0) {
          ppuVar25 = *(undefined ***)(pcVar11 + 0x2590);
          ppuVar26 = ppuVar25;
          do {
            bVar14 = *(byte *)ppuVar26;
            bVar3 = *(byte *)((longlong)ppuVar26 + ((longlong)local_298 - (longlong)ppuVar25));
            if (bVar14 != bVar3) break;
            ppuVar26 = (undefined **)((longlong)ppuVar26 + 1);
          } while (bVar3 != 0);
          if (bVar14 != bVar3) {
            iVar18 = *(int *)(pcVar11 + 0x2588) + -1;
            local_2c5 = '\x01';
            ppuVar41 = ppuVar25;
          }
        }
      }
    }
    else {
      if ((*(uint *)(DAT_180bb8ae8 + 0x1ec8) & 0x20) != 0) {
        uVar16 = *(uint *)(DAT_180bb8ae8 + 0x1ec8) >> 6 & 1;
        goto joined_r0x0001804fe0b0;
      }
      if (((*(int *)(DAT_180bb8ae8 + 0x1584) == *(int *)(DAT_180bb8ae8 + 0x1ec0)) &&
          (*(int *)(DAT_180bb8ae8 + 0x1ec0) != 0)) &&
         (*(int *)(DAT_180bb8ae8 + 4) <= *(int *)(DAT_180bb8ae8 + 0x1588))) goto LAB_1804fe0b2;
    }
    pcVar11[0x2580] = '\0';
    pcVar11[0x2581] = '\0';
    pcVar11[0x2582] = '\0';
    pcVar11[0x2583] = '\0';
  }
  pcVar24 = local_298;
  if (ppuVar41 != (undefined **)0x0) {
    if (local_218 == 0) {
      uVar32 = local_284;
    }
    else {
      uStack_140 = 0;
      auVar54._8_8_ = 0;
      auVar54._0_8_ = local_138._8_8_;
      local_138 = auVar54 << 0x40;
      local_178 = pcVar11;
      uStack_160 = (ulonglong)uVar32;
      uStack_170 = CONCAT44(local_2a4,0x400000);
      if (((pcVar45 == (char *)0x0) || (*(int *)(pcVar11 + 0x1550) != *(int *)(pcVar45 + 0x14))) ||
         (local_158 = 0x10000, pcVar11[0x155c] == '\0')) {
        local_158 = 0;
      }
      uVar32 = iVar18 + 1;
      if (iVar18 + 1 <= (int)local_284) {
        uVar32 = local_284;
      }
      uStack_148 = CONCAT44(uVar32,iVar18);
      uStack_168 = 0;
      pcStack_150 = local_298;
      (*(code *)0x0)(&local_178);
      local_298 = pcStack_150;
      iVar18 = uStack_148._4_4_ + -1;
      uVar32 = uStack_148._4_4_;
      if ((int)uStack_148 < uStack_148._4_4_ + -1) {
        iVar18 = (int)uStack_148;
      }
    }
    pcVar24 = local_298;
    if (iVar18 + 1 < (int)uVar32) {
      uVar32 = iVar18 + 1;
    }
    uVar38 = (ulonglong)(int)uVar32;
    if (uVar38 != 0) {
      if (1 < uVar38) {
        strncpy(local_298,(char *)ppuVar41,uVar38 - 1);
      }
      pcVar24[uVar38 - 1] = '\0';
    }
  }
  uVar32 = local_2c0;
  uVar49 = auVar64._0_8_;
  if ((*(uint *)(pcVar11 + 0x1550) == local_2c0) && (local_2c3 != '\0')) {
    pcVar45[0x73] = '\0';
    FUN_1804b7870(0,0);
    uVar49 = auVar64._0_8_;
  }
  if (local_2b0 == 0) {
    FUN_1804b4250(&local_1d8,uVar32,0,uVar49);
    auVar54 = *(undefined1 (*) [16])(DAT_180bb8ae8 + 0xe38);
    auVar53 = vshufps_avx(auVar54,auVar54,0xff);
    local_120 = auVar54._0_12_;
    fStack_114 = auVar53._0_4_ * *(float *)(DAT_180bb8ae8 + 0xc84);
    uVar21 = FUN_1804b1120(local_120);
    local_308 = (char *)CONCAT44(local_308._4_4_,*(undefined4 *)(pcVar11 + 0xccc));
    FUN_1804b3f60(CONCAT44(fStack_1d4,local_1d8),CONCAT44(fStack_1cc,local_1d0),uVar21,1);
    auVar64 = ZEXT464((uint)fStack_1d4);
    fVar19 = fStack_1d4 + *(float *)(pcVar11 + 0xcc8);
    auVar54 = vunpcklps_avx(ZEXT416((uint)(local_1d8 + *(float *)(pcVar11 + 0xcc4))),
                            ZEXT416((uint)fVar19));
    local_128 = auVar54._0_8_;
    uStack_220._0_4_ = auVar62._0_4_ + local_1d8;
    auVar62 = ZEXT464((uint)(fStack_1d4 + fVar46));
    local_2ac = local_1d8;
  }
  else {
    fVar19 = *(float *)((longlong)local_260 + 0x11c);
    auVar54 = vunpcklps_avx(ZEXT416(*(uint *)(local_260 + 0x23)),ZEXT416((uint)fVar19));
    local_128 = auVar54._0_8_;
    auVar54 = vmaxss_avx(ZEXT416((uint)local_1d8),ZEXT416(*(uint *)(local_260 + 0x4d)));
    local_2ac = auVar54._0_4_;
    auVar54 = vmaxss_avx(ZEXT416((uint)fStack_1d4),ZEXT416(*(uint *)((longlong)local_260 + 0x26c)));
    auVar64 = ZEXT1664(auVar54);
    auVar54 = vminss_avx(ZEXT416((uint)(auVar62._0_4_ + local_1d8)),
                         ZEXT416(*(uint *)(local_260 + 0x4e)));
    uStack_220._0_4_ = auVar54._0_4_;
    auVar54 = vminss_avx(ZEXT416((uint)(fVar46 + fStack_1d4)),
                         ZEXT416(*(uint *)((longlong)local_260 + 0x274)));
    auVar62 = ZEXT1664(auVar54);
  }
  uVar21 = auVar65._0_4_;
  uStack_220._4_4_ = auVar62._0_4_;
  local_228._4_4_ = auVar64._0_4_;
  local_228._0_4_ = local_2ac;
  if (local_287 != '\0') {
    pcVar24 = *(char **)(pcVar45 + 0x30);
    local_298 = pcVar24;
  }
  if (((local_278 == 0) || (*(uint *)(pcVar11 + 0x1550) == uVar32)) ||
     (ppuVar41 != (undefined **)0x0)) {
    local_2c3 = '\0';
LAB_1804fe3af:
    if (((local_2c7 != 0) || (local_2c8 != 0)) || (*(uint *)(pcVar11 + 0x1550) == uVar32)) {
      local_280 = (undefined **)(pcVar24 + *(int *)(pcVar45 + 0x18));
      goto LAB_1804fe408;
    }
    if ((local_2b0 == 0) || (local_250 != 0)) {
      lVar35 = -1;
      do {
        lVar35 = lVar35 + 1;
      } while (pcVar24[lVar35] != '\0');
      local_280 = (undefined **)(pcVar24 + lVar35);
      goto LAB_1804fe408;
    }
    local_280 = (undefined **)0x0;
LAB_1804fe422:
    uVar32 = (uint)((auVar64._0_4_ - fVar19) / *(float *)(pcVar11 + 0x11e0));
    local_290 = 0;
    if (-1 < (int)uVar32) {
      local_290 = uVar32;
    }
    auVar54 = vroundss_avx(ZEXT816(0),
                           ZEXT416((uint)((auVar62._0_4_ - fVar19) / *(float *)(pcVar11 + 0x11e0))),
                           2);
    uVar32 = local_290;
    if ((int)local_290 <= (int)auVar54._0_4_) {
      uVar32 = (int)auVar54._0_4_;
    }
  }
  else {
    local_2c3 = '\x01';
    pcVar40 = *(char **)(pcVar11 + 0x1528);
    if (pcVar40 == (char *)0x0) goto LAB_1804fe3af;
    lVar35 = -1;
    do {
      lVar35 = lVar35 + 1;
    } while (pcVar40[lVar35] != '\0');
    local_280 = (undefined **)(pcVar40 + lVar35);
    local_2c8 = 0;
    local_2c7 = 0;
    local_298 = pcVar40;
LAB_1804fe408:
    local_290 = 0;
    uVar32 = 1;
    if (local_2b0 != 0) goto LAB_1804fe422;
  }
  pcVar24 = (char *)local_280;
  iVar18 = *(int *)(pcVar11 + 0x256c);
  if (iVar18 < 0) {
    iVar18 = iVar18 + iVar18 / 2;
    iVar17 = 0;
    if (0 < iVar18) {
      iVar17 = iVar18;
    }
    FUN_1804d14d0(pcVar11 + 0x2568,iVar17);
    uVar21 = auVar65._0_4_;
  }
  cVar13 = local_2c3;
  uVar49 = auVar51._0_8_;
  pcVar11[0x2568] = '\0';
  pcVar11[0x2569] = '\0';
  pcVar11[0x256a] = '\0';
  pcVar11[0x256b] = '\0';
  uVar16 = 1;
  if (local_2b0 != 0) {
    if ((pcVar45 == (char *)0x0) ||
       (((pcVar45[0x70] == '\0' || (local_2c7 == 0)) &&
        ((pcVar45[0x71] == '\0' || ((local_2c7 == 0 && (local_2c8 == 0)))))))) {
      iVar18 = uVar32 + 1;
    }
    else {
      iVar18 = 0x7fffffff;
    }
    local_2f8 = (char *)&local_280;
    if (pcVar24 != (char *)0x0) {
      local_2f8 = (char *)0x0;
    }
    local_300 = (char *)CONCAT44(local_300._4_4_,iVar18);
    local_308 = (char *)CONCAT44(local_308._4_4_,uVar21);
    uVar16 = FUN_1804fb920(local_2a4,pcVar11 + 0x2568,local_298,pcVar24);
    uVar49 = auVar51._0_8_;
    pcVar24 = (char *)local_280;
  }
  *(int *)(pcVar11 + 0x2578) = (int)pcVar24 - (int)local_298;
  local_284 = uVar16;
  if ((int)uVar32 < (int)uVar16) {
    local_284 = uVar32;
  }
  fVar19 = (float)(int)uVar16 * *(float *)(pcVar11 + 0x11e0);
  local_e8 = fVar19;
  if ((local_2c7 == 0) || (pcVar45 == (char *)0x0)) {
    auVar63 = ZEXT1664(auVar59._0_16_);
    auVar51 = ZEXT1664(auVar59._0_16_);
    local_22c = auVar59._0_4_;
  }
  else {
    iVar18 = **(int **)(pcVar45 + 8);
    local_2f8 = local_298 + iVar18;
    piVar30 = *(int **)(pcVar11 + 0x2570);
    uVar31 = (ulonglong)*(int *)(pcVar11 + 0x2568);
    piVar39 = piVar30;
    uVar38 = uVar31;
    while (uVar10 = uVar38, uVar10 != 0) {
      uVar38 = uVar10 >> 1;
      if (piVar39[uVar38] < iVar18) {
        piVar39 = piVar39 + uVar38 + 1;
        uVar38 = uVar10 + (-1 - uVar38);
      }
    }
    if (piVar30 < piVar39) {
      if (((piVar39 == piVar30 + uVar31) || (*piVar39 != iVar18)) ||
         ((auVar59._0_4_ < *(float *)(pcVar45 + 0x68) &&
          (((pcVar45[0x77] == '\x01' && (local_2f8[-1] != '\n')) && (local_2f8[-1] != '\0')))))) {
        piVar39 = piVar39 + -1;
        goto LAB_1804fe60e;
      }
LAB_1804fe618:
      iVar18 = (int)((longlong)piVar39 - (longlong)piVar30 >> 2);
    }
    else {
LAB_1804fe60e:
      if (piVar39 != piVar30) goto LAB_1804fe618;
      iVar18 = 0;
    }
    if (*(int *)(pcVar11 + 0x2568) == 0) {
      iVar17 = 0;
    }
    else {
      iVar17 = piVar30[iVar18];
    }
    local_300 = local_298 + iVar17;
    local_2d8 = 2;
    local_2e8 = 0;
    local_308 = (char *)CONCAT44(local_308._4_4_,*(undefined4 *)(pcVar11 + 0x2550));
    local_2f0 = pcVar24;
    FUN_1804ea040(&local_248,*(undefined8 *)(pcVar11 + 0x11d0),*(undefined4 *)(pcVar11 + 0x11e0),
                  uVar49);
    auVar63 = ZEXT464((uint)(float)local_248);
    local_22c = (float)local_248;
    auVar51 = ZEXT464((uint)((float)(iVar18 + 1) * *(float *)(pcVar11 + 0x11e0)));
  }
  local_250 = auVar51._0_4_;
  auVar65 = ZEXT1664(auVar59._0_16_);
  lVar35 = 0x150;
  if (cVar13 != '\0') {
    lVar35 = 0x160;
  }
  auVar54 = *(undefined1 (*) [16])(DAT_180bb8ae8 + lVar35 + 0xc78);
  auVar53 = vshufps_avx(auVar54,auVar54,0xff);
  local_120 = auVar54._0_12_;
  fStack_114 = auVar53._0_4_ * *(float *)(DAT_180bb8ae8 + 0xc84);
  uVar32 = local_284;
  local_254 = FUN_1804b1120();
  if ((local_2c7 == 0) && (bVar14 = local_2c7, local_2c8 == 0)) {
LAB_1804fed24:
  }
  else {
    *(uint *)(pcVar45 + 100) = uVar16;
    auVar54 = auVar55._0_16_;
    fVar52 = auVar55._0_4_;
    fVar50 = auVar51._0_4_;
    auVar53 = auVar59._0_16_;
    if ((local_2c7 != 0) && (pcVar45[0x70] != '\0')) {
      if ((local_2a4 & 0x8000) == 0) {
        fVar60 = auVar63._0_4_;
        if (*(float *)(pcVar45 + 0x5c) <= fVar60) {
          fVar60 = fVar60 - (local_208[0] - *(float *)(pcVar11 + 0xcc4));
          if (*(float *)(pcVar45 + 0x5c) <= fVar60) {
            *(float *)(pcVar45 + 0x5c) = (float)(int)(fVar60 + local_208[0] * 0.25);
          }
        }
        else {
          auVar58 = vmaxss_avx(auVar53,ZEXT416((uint)(fVar60 - local_208[0] * 0.25)));
          *(float *)(pcVar45 + 0x5c) = (float)(int)auVar58._0_4_;
        }
      }
      else {
        pcVar45[0x5c] = '\0';
        pcVar45[0x5d] = '\0';
        pcVar45[0x5e] = '\0';
        pcVar45[0x5f] = '\0';
      }
      if (local_2b0 != 0) {
        if (fVar50 - *(float *)(pcVar11 + 0x11e0) < fVar52) {
          auVar54 = vmaxss_avx(auVar53,ZEXT416((uint)(fVar50 - *(float *)(pcVar11 + 0x11e0))));
          pcVar45[0x70] = '\0';
          goto LAB_1804fe807;
        }
        fVar60 = *(float *)(pcVar11 + 0xcc8) + *(float *)(pcVar11 + 0xcc8);
        if (fVar52 <= fVar50 - (fVar46 - fVar60)) {
          auVar54 = ZEXT416((uint)((fVar50 - fVar46) + fVar60));
        }
      }
      pcVar45[0x70] = '\0';
    }
LAB_1804fe807:
    uVar22 = (uint)local_2c7;
    if (pcVar45[0x71] != '\0') {
      if (local_2b0 != 0) {
        auVar54 = ZEXT416((uint)((fVar50 - *(float *)(pcVar11 + 0x11e0)) -
                                (fVar46 * fVar47 - *(float *)(pcVar11 + 0xcc8))));
      }
      pcVar45[0x71] = '\0';
      uVar22 = 0;
      local_2c7 = 0;
    }
    if (auVar54._0_4_ != fVar52) {
      if (auVar59._0_4_ <= auVar54._0_4_) {
        auVar53 = vmaxss_avx(ZEXT416((uint)((*(float *)(pcVar11 + 0xcc8) +
                                             *(float *)(pcVar11 + 0xcc8) + fVar19) - fVar46)),
                             auVar53);
        auVar53 = vminss_avx(auVar53,auVar54);
      }
      fVar46 = (*(float *)((longlong)local_260 + 0x9c) - auVar53._0_4_) + local_128._4_4_;
      local_128 = CONCAT44(fVar46,(float)local_128);
      *(float *)((longlong)local_260 + 0x9c) = auVar53._0_4_;
      uVar32 = (uint)((auVar64._0_4_ - fVar46) / *(float *)(pcVar11 + 0x11e0));
      local_290 = 0;
      if (-1 < (int)uVar32) {
        local_290 = uVar32;
      }
      auVar54 = vroundss_avx(ZEXT816(0),
                             ZEXT416((uint)((auVar62._0_4_ - fVar46) / *(float *)(pcVar11 + 0x11e0))
                                    ),2);
      uVar22 = local_290;
      if ((int)local_290 <= (int)auVar54._0_4_) {
        uVar22 = (int)auVar54._0_4_;
      }
      uVar32 = uVar16;
      if ((int)uVar22 < (int)uVar16) {
        uVar32 = uVar22;
      }
      uVar22 = (uint)local_2c7;
      local_284 = uVar32;
    }
    uVar16 = local_290;
    uVar43 = 0;
    auVar65 = ZEXT464(*(uint *)(pcVar45 + 0x5c));
    if (local_2c8 == 0) {
LAB_1804fed21:
      bVar14 = (byte)uVar22;
      goto LAB_1804fed24;
    }
    auVar54 = *(undefined1 (*) [16])(DAT_180bb8ae8 + 0x1108);
    auVar53 = vpcmpeqd_avx(ZEXT416(uVar22),SUB6416(ZEXT464(0),0));
    auVar53 = vblendvps_avx(SUB6416(ZEXT464(0x3f800000),0),SUB6416(ZEXT464(0x3f19999a),0),auVar53);
    auVar58 = vshufps_avx(auVar54,auVar54,0xff);
    local_120 = auVar54._0_12_;
    fStack_114 = auVar58._0_4_ * auVar53._0_4_ * *(float *)(DAT_180bb8ae8 + 0xc84);
    uVar22 = local_2b0;
    local_218 = FUN_1804b1120(local_120);
    auVar54 = vpcmpeqd_avx(ZEXT416(uVar22),ZEXT416(uVar43));
    auVar54 = vblendvps_avx(auVar59._0_16_,SUB6416(ZEXT464(0xbf800000),0),auVar54);
    auVar55 = ZEXT1664(auVar54);
    auVar54 = vpcmpeqd_avx(ZEXT416(uVar22),ZEXT416(uVar43));
    auVar54 = vblendvps_avx(auVar59._0_16_,SUB6416(ZEXT464(0x40000000),0),auVar54);
    auVar56 = ZEXT1664(auVar54);
    piVar39 = *(int **)(pcVar11 + 0x11d8);
    if (*piVar39 < 0x21) {
LAB_1804fe9c1:
      fVar46 = (float)FUN_1804e8740(piVar39,0x20);
      uVar32 = local_284;
    }
    else {
      fVar46 = *(float *)(*(longlong *)(piVar39 + 2) + 0x80);
      if (fVar46 < auVar59._0_4_) goto LAB_1804fe9c1;
    }
    fVar46 = (float)(int)(fVar46 * fVar47);
    iVar18 = *(int *)(*(longlong *)(pcVar45 + 8) + 8);
    iVar17 = *(int *)(*(longlong *)(pcVar45 + 8) + 4);
    iVar34 = iVar18;
    if (iVar17 < iVar18) {
      iVar34 = iVar17;
    }
    local_240 = (ulonglong)iVar34;
    local_248 = local_298 + local_240;
    if (iVar18 <= iVar17) {
      iVar18 = iVar17;
    }
    local_1f8 = local_298 + iVar18;
    local_1e0 = (longlong)(int)uVar16;
    local_278 = uVar16;
    if (local_1e0 < (int)uVar32) {
      auVar51 = ZEXT464((uint)local_2ac);
      auVar59 = ZEXT464((uint)(float)uStack_220);
      fVar47 = 0.0;
      do {
        if (*(int *)(pcVar11 + 0x2568) == 0) {
          iVar18 = 0;
        }
        else {
          iVar18 = *(int *)(local_1e0 * 4 + *(longlong *)(pcVar11 + 0x2570));
        }
        pcVar45 = local_298 + iVar18;
        if ((int)(local_278 + 1) < *(int *)(pcVar11 + 0x2568)) {
          iVar17 = *(int *)(*(longlong *)(pcVar11 + 0x2570) + 4 + local_1e0 * 4) + -1;
        }
        else {
          iVar17 = *(int *)(pcVar11 + 0x2578);
        }
        pcVar40 = local_298 + iVar17;
        if ((pcVar40 < pcVar24) && (*pcVar40 != '\n')) {
          bVar4 = true;
          pcVar40 = pcVar40 + 1;
        }
        else {
          bVar4 = false;
        }
        uVar38 = (longlong)iVar18;
        if (pcVar45 < local_248) {
          uVar38 = local_240;
        }
        pcVar1 = local_298 + uVar38;
        pcVar27 = pcVar40;
        if (local_1f8 < pcVar40) {
          pcVar27 = local_1f8;
        }
        fVar19 = fVar47;
        if (pcVar1 < pcVar27) {
          local_2d8 = 0;
          local_2e8 = 0;
          local_308 = (char *)CONCAT44(local_308._4_4_,0xbf800000);
          local_300 = pcVar1;
          local_2f8 = pcVar27;
          local_2f0 = pcVar27;
          FUN_1804ea040(&local_280,*(undefined8 *)(DAT_180bb8ae8 + 0x11d0),
                        *(undefined4 *)(DAT_180bb8ae8 + 0x11e0),0x7f7fffff);
          fVar47 = (float)(int)((uint)((float)(int)(float)local_280 < (float)local_280) +
                               (int)(float)local_280);
          local_280 = (undefined **)CONCAT44(local_280._4_4_,fVar47);
          fVar47 = fVar47 + fVar19;
        }
        if (((local_248 <= pcVar40) && (pcVar40 < local_1f8)) && (!bVar4)) {
          fVar47 = fVar47 + fVar46;
        }
        if (fVar47 != fVar19) {
          _local_120 = ZEXT816(0);
          fVar52 = fVar19;
          if (pcVar45 != pcVar1) {
            local_2d8 = 0;
            local_2e8 = 0;
            local_308 = (char *)CONCAT44(local_308._4_4_,0xbf800000);
            local_300 = pcVar45;
            local_2f8 = pcVar1;
            local_2f0 = pcVar1;
            FUN_1804ea040(local_208,*(undefined8 *)(DAT_180bb8ae8 + 0x11d0),
                          *(undefined4 *)(DAT_180bb8ae8 + 0x11e0),0x7f7fffff);
            fVar19 = (float)(int)((uint)((float)(int)local_208[0] < local_208[0]) +
                                 (int)local_208[0]);
            local_208[0] = fVar19;
          }
          fVar19 = ((float)local_128 - auVar65._0_4_) + fVar19;
          fVar50 = (float)(int)local_278 * *(float *)(pcVar11 + 0x11e0) + (local_128._4_4_ - fVar52)
          ;
          auVar54 = vmaxss_avx(ZEXT416((uint)fVar19),auVar51._0_16_);
          auVar53 = vmaxss_avx(ZEXT416((uint)(auVar55._0_4_ + fVar50)),auVar64._0_16_);
          local_120._4_4_ = auVar53._0_4_;
          local_120._0_4_ = auVar54._0_4_;
          auVar54 = vminss_avx(ZEXT416((uint)(fVar19 + fVar47)),auVar59._0_16_);
          local_120._8_4_ = auVar54._0_4_;
          auVar54 = vminss_avx(ZEXT416((uint)(auVar56._0_4_ + fVar50 + *(float *)(pcVar11 + 0x11e0))
                                      ),auVar62._0_16_);
          fStack_114 = (float)auVar54._0_4_;
          local_300 = (char *)((ulonglong)local_300 & 0xffffffff00000000);
          local_308 = (char *)CONCAT44(local_308._4_4_,fVar52);
          FUN_1804df870(local_260[0x59],local_120,local_120 + 8,local_218);
          fVar19 = fVar52;
        }
        fVar47 = fVar19;
        local_278 = local_278 + 1;
        local_1e0 = local_1e0 + 1;
      } while (local_1e0 < (int)local_284);
      auVar51 = ZEXT464(local_250);
      auVar63 = ZEXT464((uint)local_22c);
      auVar59 = ZEXT864(0);
      uVar22 = (uint)local_2c7;
      pcVar45 = local_270;
      uVar32 = local_284;
      fVar19 = local_e8;
      goto LAB_1804fed21;
    }
    auVar59 = ZEXT464(0);
    bVar14 = local_2c7;
  }
  uVar22 = local_254;
  pcVar40 = local_298;
  uVar16 = local_2c0;
  if (((*(uint *)(pcVar11 + 0x1550) == local_2c0) || ((local_2a4 & 0x20000) == 0)) ||
     ((bVar14 != 0 || (local_2c8 != 0)))) {
    fVar46 = (float)local_128;
  }
  else {
    if (local_298 == (char *)0x0) {
      fVar46 = auVar59._0_4_;
    }
    else {
      local_2d8 = 0;
      local_2e8 = 0;
      local_2f0 = (char *)0x0;
      local_2f8 = (char *)0x0;
      local_308 = (char *)CONCAT44(local_308._4_4_,0xbf800000);
      local_300 = local_298;
      FUN_1804ea040(&local_240,*(undefined8 *)(DAT_180bb8ae8 + 0x11d0),
                    *(undefined4 *)(DAT_180bb8ae8 + 0x11e0),0x7f7fffff);
      fVar46 = (float)(int)((uint)((float)(int)(float)local_240 < (float)local_240) +
                           (int)(float)local_240);
      uVar32 = local_284;
    }
    auVar54 = vminss_avx(ZEXT416((uint)(float)local_128),
                         ZEXT416((uint)((local_1d0 - fVar46) - *(float *)(pcVar11 + 0xcc4))));
    fVar46 = auVar54._0_4_;
    local_128 = CONCAT44(local_128._4_4_,fVar46);
  }
  plVar44 = local_260;
  if (((local_2b0 != 0) || ((longlong)pcVar24 - (longlong)pcVar40 < 0x200000)) &&
     (((uVar22 & 0xff000000) != 0 && ((int)local_290 < (int)uVar32)))) {
    if ((int)uVar32 < *(int *)(pcVar11 + 0x2568)) {
      iVar18 = *(int *)(*(longlong *)(pcVar11 + 0x2570) + (longlong)(int)uVar32 * 4) + -1;
    }
    else {
      iVar18 = *(int *)(pcVar11 + 0x2578);
    }
    local_2f0 = pcVar40 + iVar18;
    if (*(int *)(pcVar11 + 0x2568) == 0) {
      iVar18 = 0;
    }
    else {
      iVar18 = *(int *)(*(longlong *)(pcVar11 + 0x2570) + (longlong)(int)local_290 * 4);
    }
    local_248 = (char *)CONCAT44((float)(int)local_290 * *(float *)(pcVar11 + 0x11e0) +
                                 (local_128._4_4_ - auVar59._0_4_),
                                 (fVar46 - auVar65._0_4_) + auVar59._0_4_);
    local_2f8 = pcVar40 + iVar18;
    local_2e0 = 3;
    local_2e8 = CONCAT44(local_2e8._4_4_,local_214);
    local_308 = (char *)CONCAT44(local_308._4_4_,uVar22);
    local_300 = local_228;
    FUN_1804ea5f0(*(undefined8 *)(pcVar11 + 0x11d0),local_260[0x59],local_2f0,&local_248);
  }
  fVar46 = auVar59._0_4_;
  fVar66 = auVar62._0_4_;
  fVar60 = auVar64._0_4_;
  fVar52 = auVar51._0_4_;
  fVar47 = auVar65._0_4_;
  fVar50 = auVar63._0_4_;
  if (local_2c7 == 0) {
    fVar46 = 1.0;
  }
  else {
    fVar48 = *(float *)(pcVar11 + 0x40) + *(float *)(pcVar45 + 0x6c);
    *(float *)(pcVar45 + 0x6c) = fVar48;
    if ((pcVar11[0x7a] == '\0') || (fVar48 <= fVar46)) {
LAB_1804fef5a:
      bVar4 = true;
    }
    else {
      fVar48 = (float)FUN_180637760(fVar48,0x3f99999a);
      fVar46 = auVar59._0_4_;
      fVar66 = auVar62._0_4_;
      fVar60 = auVar64._0_4_;
      fVar52 = auVar51._0_4_;
      fVar47 = auVar65._0_4_;
      fVar50 = auVar63._0_4_;
      if (fVar48 <= 0.8) goto LAB_1804fef5a;
      bVar4 = false;
    }
    fVar50 = (float)(int)((fVar50 + (float)local_128) - fVar47);
    auVar59 = ZEXT1664(CONCAT124(SUB1612(ZEXT816(0),4),fVar50));
    fVar52 = (float)(int)((fVar52 + local_128._4_4_) - fVar46);
    fVar46 = 1.0;
    fVar47 = (fVar52 - *(float *)(pcVar11 + 0x11e0)) + 1.0;
    auVar62 = ZEXT464((uint)fVar47);
    auVar51 = ZEXT464((uint)(fVar52 - 1.0));
    if ((((bVar4) && (fVar60 < fVar52 - 1.0)) && (fVar47 < fVar66)) &&
       ((local_2ac < fVar50 + 1.0 && (fVar50 < (float)uStack_220)))) {
      auVar54 = *(undefined1 (*) [16])(DAT_180bb8ae8 + 0xfe8);
      auVar53 = vshufps_avx(auVar54,auVar54,0xff);
      _local_228 = auVar54._0_12_;
      uStack_220._4_4_ = auVar53._0_4_ * *(float *)(DAT_180bb8ae8 + 0xc84);
      uVar21 = FUN_1804b1120(local_228);
      local_2f8 = (char *)CONCAT44(local_2f8._4_4_,0x20000);
      local_300 = (char *)CONCAT44(local_300._4_4_,*(undefined4 *)(pcVar11 + 0xd80));
      local_308 = (char *)CONCAT44(local_308._4_4_,uVar21);
      FUN_1804dd220(plVar44[0x59],auVar59._0_8_,auVar62._0_8_,auVar51._0_8_);
    }
    if ((local_2b8 == 0) && (*(uint *)(pcVar11 + 0x1550) == uVar16)) {
      pcVar11[0x2740] = '\x01';
      pcVar11[0x2741] = '\x01';
      *(float *)(pcVar11 + 0x2744) = auVar59._0_4_ - fVar46;
      *(float *)(pcVar11 + 0x2748) = fVar52 - *(float *)(pcVar11 + 0x11e0);
      *(undefined4 *)(pcVar11 + 0x274c) = *(undefined4 *)(pcVar11 + 0x11e0);
      *(undefined4 *)(pcVar11 + 0x2750) = *(undefined4 *)local_200[4];
    }
  }
  uVar32 = local_258;
  if (local_258 != 0) {
    FUN_1804fb300();
  }
  fVar47 = 0.0;
  if (local_2b0 == 0) goto LAB_1804ff172;
  local_200 = (longlong *)((ulonglong)(uint)(fVar19 + *(float *)(pcVar11 + 0xcc8)) << 0x20);
  FUN_1804f6ea0(&local_200);
  *(uint *)(pcVar11 + 0x1e8c) = *(uint *)(pcVar11 + 0x1e8c) | 0x100001;
  FUN_1804bbd00();
  local_230 = local_230 | *(uint *)(pcVar11 + 0x1ec8) & 0x80;
  FUN_1804c6a30();
  if (*(int *)(pcVar11 + 0x1ec0) == 0) {
LAB_1804ff153:
    *(uint *)(pcVar11 + 0x1ec0) = uVar16;
    *(undefined4 *)(pcVar11 + 0x1ec4) = local_210;
    *(uint *)(pcVar11 + 0x1ec8) = local_230;
  }
  else {
    iVar18 = FUN_1804b0a90("#SCROLLY",0,
                           *(undefined4 *)(plVar44[0x22] + -4 + (longlong)(int)plVar44[0x21] * 4));
    if (*(int *)(*plVar44 + 0x1534) == iVar18) {
      FUN_1804cf810(iVar18,0xb,"#SCROLLY");
    }
    if (*(int *)(pcVar11 + 0x1ec0) != iVar18) goto LAB_1804ff153;
  }
  uVar32 = local_258;
LAB_1804ff172:
  if ((pcVar45 != (char *)0x0) && (local_2b8 != 0)) {
    pcVar45[0x20] = '\0';
    pcVar45[0x21] = '\0';
    pcVar45[0x22] = '\0';
    pcVar45[0x23] = '\0';
    pcVar45[0x24] = '\0';
    pcVar45[0x25] = '\0';
    pcVar45[0x26] = '\0';
    pcVar45[0x27] = '\0';
  }
  pcVar1 = DAT_180bb8ae8;
  if (pcVar11[0x2840] != '\0') {
    if (uVar32 == 0) {
      lVar35 = *(longlong *)(DAT_180bb8ae8 + 0x14d0);
      pcVar45 = DAT_180bb8ae8;
      pcVar45[0x2870] = '\0';
      pcVar45[0x2871] = '\0';
      pcVar45[0x2872] = '\0';
      pcVar45[0x2873] = '\0';
      pcVar45[0x2874] = '\0';
      pcVar45[0x2875] = '\0';
      pcVar45[0x2876] = '\0';
      pcVar45[0x2877] = '\0';
      pcVar45[0x2868] = '\0';
      pcVar45[0x2869] = '\0';
      pcVar45[0x286a] = '\0';
      pcVar45[0x286b] = '\0';
      pcVar45[0x286c] = '\0';
      pcVar45[0x286d] = '\0';
      pcVar45[0x286e] = '\0';
      pcVar45[0x286f] = '\0';
      if ((pcVar24 == (char *)0x0) && (pcVar24 = pcVar40, pcVar40 != (char *)0xffffffffffffffff)) {
        while( true ) {
          if (*pcVar24 == '\0') break;
          pcVar45 = pcVar24 + 1;
          if (((*pcVar24 == '#') && (*pcVar45 == '#')) ||
             (pcVar24 = pcVar45, pcVar45 == (char *)0xffffffffffffffff)) break;
        }
      }
      auVar54 = vmaxss_avx(ZEXT416(*(uint *)(pcVar1 + 0xcc8)),ZEXT416(*(uint *)(pcVar1 + 0xcd8)));
      fVar19 = *(float *)(pcVar1 + 0x2878);
      *(float *)(pcVar1 + 0x2878) = local_128._4_4_;
      if (auVar54._0_4_ + fVar19 + fVar46 < local_128._4_4_) {
        FUN_1804cda40(&DAT_18085b098);
        pcVar1[0x2841] = '\x01';
      }
      FUN_1804cda80(&local_128,&DAT_1807ccf68,&DAT_1807ccf69);
      iVar18 = *(int *)(lVar35 + 0x1a0);
      iVar17 = *(int *)(pcVar1 + 0x287c);
      if (iVar18 < *(int *)(pcVar1 + 0x287c)) {
        *(int *)(pcVar1 + 0x287c) = iVar18;
        iVar17 = iVar18;
      }
      iVar18 = *(int *)(lVar35 + 0x1a0);
      while( true ) {
        pcVar27 = (char *)FUN_18063b630(pcVar40,10,(longlong)pcVar24 - (longlong)pcVar40);
        pcVar45 = pcVar24;
        if (pcVar27 != (char *)0x0) {
          pcVar45 = pcVar27;
        }
        if ((pcVar40 == pcVar45) && (pcVar45 == pcVar24)) break;
        iVar34 = (iVar18 - iVar17) * 4;
        if (pcVar1[0x2841] == '\0') {
          iVar34 = 1;
        }
        local_308 = pcVar40;
        FUN_1804cda40("%*s%.*s",iVar34,&PTR_180700558,(int)pcVar45 - (int)pcVar40);
        pcVar1[0x2841] = '\0';
        if (*pcVar45 == '\n') {
          FUN_1804cda40(&DAT_18085b098);
          pcVar1[0x2841] = '\x01';
        }
        if (pcVar45 == pcVar24) break;
        pcVar40 = pcVar45 + 1;
      }
      FUN_1804cda80(&local_128,&DAT_1807ccf30,&DAT_1807ccf31);
      pcVar45 = local_270;
      uVar16 = local_2c0;
    }
  }
  if (fVar47 < local_20c) {
    auVar54 = vunpcklps_avx(ZEXT416((uint)(local_1d0 + *(float *)(pcVar11 + 0xcdc))),
                            ZEXT416((uint)(fStack_1d4 + *(float *)(pcVar11 + 0xcc8))));
    FUN_1804b3060(auVar54._0_8_,local_1e8,local_1f0,0);
  }
  if ((pcVar45 != (char *)0x0) && (local_2c6 != '\0')) {
    pcVar45[0x75] = '\x01';
  }
  if (local_2c5 != '\0') {
    FUN_1804b7a50(uVar16);
  }
}



