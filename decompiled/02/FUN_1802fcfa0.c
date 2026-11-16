// FUN_1802fcfa0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802fcfa0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1802fcfa0(undefined8 param_1,longlong param_2)

{
  float fVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  short sVar5;
  ulonglong *puVar6;
  uint *puVar7;
  ULONGLONG UVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  float *pfVar13;
  uint *puVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  float *pfVar17;
  undefined4 *puVar18;
  ulonglong uVar19;
  byte bVar20;
  int iVar21;
  uint uVar22;
  int iVar23;
  int iVar24;
  longlong lVar25;
  bool bVar26;
  int iVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  undefined8 uVar32;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 extraout_var [56];
  undefined1 extraout_var_00 [56];
  undefined1 extraout_var_01 [56];
  undefined1 extraout_var_02 [56];
  undefined1 extraout_var_03 [56];
  undefined1 auVar36 [64];
  float fVar37;
  undefined1 auVar38 [64];
  undefined1 auVar39 [64];
  undefined1 auVar40 [64];
  undefined1 auVar41 [64];
  undefined1 auVar42 [64];
  float fVar43;
  undefined1 auVar44 [64];
  float fVar45;
  undefined1 auVar46 [64];
  undefined1 auStack_308 [32];
  undefined8 *local_2e8;
  float local_2e0;
  float local_2d8;
  char local_2c8;
  float local_2c4;
  char local_2c0;
  float local_2bc;
  float local_2b8;
  float local_2b4 [4];
  float local_2a4;
  float local_2a0;
  int local_29c;
  float local_298;
  float local_290;
  float local_28c;
  int local_288;
  int local_284;
  uint *local_280;
  float local_278;
  float local_274;
  float local_270;
  float local_26c;
  float local_268;
  undefined *local_260;
  longlong local_258;
  undefined8 **local_248;
  undefined1 *local_240;
  undefined8 **local_238;
  undefined4 *local_230;
  float *local_228;
  undefined4 *local_220;
  undefined4 *local_218;
  float *local_210;
  uint **local_208;
  undefined8 *local_200;
  float *local_1f8;
  uint *local_1f0;
  undefined8 *local_1e8;
  float *local_1e0;
  float *local_1d8;
  uint *local_1d0;
  undefined8 local_1c8;
  float local_1c0;
  undefined1 local_1b8 [4];
  float local_1b4;
  float local_1b0;
  float local_1ac;
  float local_1a8;
  float local_1a4;
  float local_1a0;
  uint local_19c;
  float local_198;
  undefined4 local_194;
  undefined8 local_190;
  undefined4 local_188;
  undefined4 local_180;
  float local_17c;
  undefined4 local_178;
  undefined4 local_174;
  undefined8 *local_170;
  undefined4 *puStack_168;
  float *pfStack_160;
  float *pfStack_158;
  undefined8 *local_150;
  undefined4 *local_148;
  float *local_140;
  float *local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  float local_118 [16];
  ulonglong local_d8;
  
  local_d8 = DAT_1808d5f00 ^ (ulonglong)auStack_308;
  DAT_180b8fba8 = 0;
  DAT_180b8fbbc = 0;
  puVar6 = &DAT_180b8e174;
  if (DAT_180b8e111 == 0) {
    puVar6 = &DAT_180b8e118;
  }
  DAT_180b8fbc8 = *puVar6;
  _DAT_180b8fbd0 = (undefined4)puVar6[1];
  if (DAT_180b8fffc != '\0') {
    DAT_180b8fba8 = 0;
    DAT_180b8fbbc = 0;
  }
  if (DAT_180b90028 != '\0') {
    DAT_180b8fba8 = 0;
    DAT_180b8fbbc = 0;
  }
  if (DAT_180b900c0 != '\0') {
    DAT_180b8fba8 = 0;
    DAT_180b8fbbc = 0;
  }
  if (DAT_180b8fc30 != '\0') {
    DAT_180b8fba8 = 0;
    DAT_180b8fbbc = 0;
  }
  if (DAT_180b8fe80 != '\0') {
    DAT_180b8fba8 = 0;
    DAT_180b8fbbc = 0;
  }
  if (DAT_1808fedf1 != '\0') {
    DAT_180b8fba8 = 0;
    DAT_180b8fbbc = 0;
  }
  *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) | 1;
  uVar16 = DAT_180b0dfd8;
  local_1d0 = (uint *)0x0;
  if (*(longlong *)(param_2 + 0x40) != 0) {
    local_1d0 = (uint *)(*(longlong *)(param_2 + 0x40) + 0x10);
  }
  if (local_1d0 == (uint *)0x0) {
  }
  bVar20 = ~DAT_180b8e114 & 1;
  if ((((bVar20 == 0) || (DAT_180cad2e0 != 1)) || (DAT_180c7e1f0 == '\0')) ||
     ((DAT_180b8e620 == '\0' || (DAT_180b8e621 == '\0')))) {
    bVar26 = false;
  }
  else {
    bVar26 = true;
  }
  if ((DAT_180b8e622 == '\0') || (bVar20 == 0)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  local_258 = param_2;
  if (((bVar26) || (bVar2)) || (DAT_180b8f98d != '\0')) {
    bVar26 = true;
    local_298 = 0.0;
  }
  else {
    auVar46._0_8_ = FUN_1803074b0();
    auVar46._8_56_ = extraout_var;
    auVar33 = auVar46._0_16_;
    auVar34 = vcmpss_avx(ZEXT816(0),auVar33,2);
    auVar34 = vblendvps_avx(auVar33,auVar33,auVar34);
    auVar34 = vmaxss_avx(ZEXT816(0),auVar34);
    local_298 = auVar34._0_4_;
    bVar26 = 0.0 <= (float)auVar46._0_8_;
  }
  auVar46 = ZEXT864(0);
  if ((bVar20 == 0) || (cVar4 = FUN_180306f60(), cVar4 == '\0')) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if ((bVar26 == false) && (DAT_180b8fbc0 != '\0')) {
    bVar3 = true;
LAB_1802fd19a:
    if (DAT_180b8fbc0 == '\0') {
      if (0 < DAT_180b8fbc4) {
        DAT_180b8fbc4 = DAT_180b8fbc4 + -1;
      }
    }
    else {
      DAT_180b8fbc4 = 3;
      if ((uVar16 & 0x618) != 0) {
        DAT_180b8fbc4 = 0;
        _DAT_180b8fb90 = 0;
        DAT_180b8fb98 = 0;
      }
    }
  }
  else {
    bVar3 = false;
    if (bVar26 == false) goto LAB_1802fd19a;
    DAT_180b8fbc4 = 0;
  }
  DAT_180b8fbc0 = bVar26;
  if (((DAT_180cc8280 == '\0') || (bVar2)) && (bVar26 == false)) {
    if (!bVar3) {
    }
    if ((uVar16 & 0x618) == 0) {
    }
    if (bVar2) {
    }
    if (local_1d0 == (uint *)0xfffffffffffffff8) {
    }
    puVar7 = (uint *)FUN_1803dfb00();
    if (puVar7 == (uint *)0x0) {
    }
    puVar7[2] = 0;
    puVar7[3] = 0;
    *(undefined1 *)(puVar7 + 4) = 0;
    *puVar7 = *puVar7 | 7;
    uVar22 = *puVar7;
    puVar7[5] = 0;
    fVar28 = (float)local_1d0[0x12] - DAT_180b8e148;
    *puVar7 = uVar22 | 8;
    puVar7[6] = (uint)fVar28;
    fVar28 = (float)local_1d0[0x13] - DAT_180b8e14c;
    *puVar7 = uVar22 | 0x18;
    puVar7[7] = (uint)fVar28;
  }
  AcquireSRWLockShared((PSRWLOCK)&DAT_180bb88c0);
  local_170 = _DAT_180bb8890;
  puStack_168 = puRam0000000180bb8898;
  pfStack_160 = pfRam0000000180bb88a0;
  pfStack_158 = pfRam0000000180bb88a8;
  local_130 = _DAT_180bb88b0;
  uStack_128 = uRam0000000180bb88b8;
  auVar46 = ZEXT1664(auVar46._0_16_);
  ReleaseSRWLockShared((PSRWLOCK)&DAT_180bb88c0);
  puVar18 = puStack_168;
  auVar34 = auVar46._0_16_;
  if (puStack_168 == (undefined4 *)0x0) {
  }
  iVar21 = DAT_180c6f0a0;
  if (DAT_180c6f0a0 == 0) {
    auVar46 = ZEXT1664(auVar34);
    UVar8 = GetTickCount64();
    auVar34 = auVar46._0_16_;
    if (UVar8 < DAT_180c6f088) {
      iVar21 = 0;
    }
    else {
      local_280 = (uint *)&DAT_1808feda0;
      iVar21 = FUN_1805f68d0(&DAT_1808feda0);
      if (iVar21 != 0) goto LAB_1802fe8a3;
      if (DAT_1808fedec == 0x7fffffff) {
        DAT_1808fedec = 0x7ffffffe;
        goto LAB_1802fe898;
      }
      if ((DAT_180c6f0a0 == 0) && (DAT_180c6f088 <= UVar8)) {
        DAT_180c6f0a0 = FUN_1804174b0("C_BaseEntity",0x5600aa92);
        if (DAT_180c6f0a0 == 0) {
          DAT_180c6f088 = UVar8 + 1000;
        }
        else {
          DAT_180c6f088 = 0xffffffffffffffff;
        }
      }
      iVar21 = DAT_180c6f0a0;
      FUN_1805f68fc(&DAT_1808feda0);
      auVar34 = auVar46._0_16_;
    }
  }
  if (*(char *)((longlong)iVar21 + (longlong)puVar18) == '\t') {
  }
  if (*(char *)((longlong)iVar21 + (longlong)puVar18) == '\a') {
  }
  if ((DAT_180b8e114 & 1) != 0) {
  }
  auVar46 = ZEXT1664(auVar34);
  cVar4 = FUN_1802ff9f0();
  puVar7 = local_1d0;
  if ((cVar4 != '\0') && (bVar26 == false)) {
  }
  local_2c0 = DAT_180cc82e9;
  local_2b8 = 2.8026e-43;
  local_2c4 = 3.50325e-44;
  pfVar17 = &local_2c4;
  if (0x18 < DAT_180cc82f4) {
    pfVar17 = (float *)&DAT_180cc82f4;
  }
  pfVar13 = &local_2b8;
  if (DAT_180cc82f4 < 0xc9) {
    pfVar13 = pfVar17;
  }
  local_268 = *pfVar13;
  if (bVar26 == false) {
    if ((DAT_180cc82eb != '\0') && ((uVar16 & 2) == 0)) {
    }
    if ((DAT_180cc82ec != '\0') && ((uVar16 >> 0x10 & 1) != 0)) {
    }
  }
  local_280 = local_1d0 + 2;
  if (local_1d0 + 2 == (uint *)0x0) {
  }
  fVar28 = 0.0;
  if ((local_1d0 != (uint *)0x0) && (iVar21 = 0, 0 < (int)local_1d0[4])) {
    lVar25 = 0;
    fVar30 = 1.0;
    fVar28 = 0.0;
    do {
      lVar9 = *(longlong *)(lVar25 + 8 + *(longlong *)(puVar7 + 6));
      lVar10 = 0;
      if (lVar9 != 0) {
        lVar10 = lVar9 + 0x10;
      }
      if (lVar10 != 0) {
        local_2b4[3] = fVar30;
        local_2c4 = auVar46._0_4_;
        local_2b8 = *(float *)(lVar10 + 0x14);
        pfVar17 = &local_2c4;
        if (auVar46._0_4_ <= local_2b8) {
          pfVar17 = &local_2b8;
        }
        pfVar13 = local_2b4 + 3;
        if (local_2b8 <= fVar30) {
          pfVar13 = pfVar17;
        }
        fVar28 = (float)FUN_180615630(pfVar17,*pfVar13);
      }
      iVar21 = iVar21 + 1;
      lVar25 = lVar25 + 8;
    } while (iVar21 < (int)puVar7[4]);
  }
  fVar30 = 131072.0;
  fVar28 = (fVar28 + 131072.0) - 131072.0;
  if (0.99 <= fVar28) {
  }
  if (bVar26 == false) {
    if ((uVar16 & 0x200) == 0) {
      DAT_180b8fb98 = DAT_180b8fb98 & 0xfffffffffffffdff;
    }
    else if (((_DAT_180b8fb90 & 0x200) == 0) || ((DAT_180b8fb98 & 0x400) == 0)) {
      DAT_180b8fb98 = DAT_180b8fb98 & 0xfffffffffffffbff | 0x200;
    }
    if ((uVar16 & 0x400) == 0) {
      DAT_180b8fb98 = DAT_180b8fb98 & 0xfffffffffffffbff;
    }
    else if (((_DAT_180b8fb90 & 0x400) == 0) || ((DAT_180b8fb98 & 0x200) == 0)) {
      DAT_180b8fb98 = DAT_180b8fb98 & 0xfffffffffffffdff | 0x400;
    }
    if ((uVar16 & 8) == 0) {
      DAT_180b8fb98 = DAT_180b8fb98 & 0xfffffffffffffff7;
      uVar15 = 0;
    }
    else if (((_DAT_180b8fb90 & 8) == 0) ||
            (uVar15 = DAT_180b8fb98 & 0xff, (DAT_180b8fb98 & 0x10) == 0)) {
      DAT_180b8fb98 = DAT_180b8fb98 & 0xffffffffffffffef | 8;
      uVar15 = DAT_180b8fb98;
    }
    if ((uVar16 & 0x10) == 0) {
      DAT_180b8fb98 = DAT_180b8fb98 & 0xffffffffffffffef;
    }
    else if (((_DAT_180b8fb90 & 0x10) == 0) || ((uVar15 & 8) == 0)) {
      DAT_180b8fb98 = DAT_180b8fb98 & 0xfffffffffffffff7 | 0x10;
    }
    _DAT_180b8fb90 = uVar16;
  }
  iVar21 = DAT_180c6f090;
  local_2a4 = fVar28;
  if (DAT_180c6f090 == 0) {
    UVar8 = GetTickCount64();
    if (UVar8 < DAT_180c6f098) {
      iVar21 = 0;
    }
    else {
      local_260 = &DAT_1808fed00;
      iVar21 = FUN_1805f68d0(&DAT_1808fed00);
      if (iVar21 != 0) {
LAB_1802fe8a3:
                    /* WARNING: Subroutine does not return */
        FUN_1805f6d44(5);
      }
      if (DAT_1808fed4c == 0x7fffffff) {
        DAT_1808fed4c = 0x7ffffffe;
LAB_1802fe898:
                    /* WARNING: Subroutine does not return */
        FUN_1805f6d44(6);
      }
      if ((DAT_180c6f090 == 0) && (DAT_180c6f098 <= UVar8)) {
        DAT_180c6f090 = FUN_1804174b0("C_BasePlayerPawn",0xcf73e28a);
        if (DAT_180c6f090 == 0) {
          DAT_180c6f098 = UVar8 + 1000;
        }
        else {
          DAT_180c6f098 = 0xffffffffffffffff;
        }
      }
      iVar21 = DAT_180c6f090;
      FUN_1805f68fc(&DAT_1808fed00);
    }
  }
  lVar25 = *(longlong *)((longlong)iVar21 + (longlong)puVar18);
  if (lVar25 == 0) {
  }
  cVar4 = FUN_1802fbbf0(puVar18,lVar25);
  if (cVar4 != '\0') {
  }
  lVar9 = FUN_1802fbb20(&DAT_180c6f048,0x2f5504fa);
  lVar10 = FUN_1802fbb20(&DAT_180c6f060,0xa239062b);
  lVar11 = FUN_1802fbb20(&DAT_180c6efe8,0x1da56b38);
  lVar12 = FUN_1802fbb20(&DAT_180c6f000,0x58e37709);
  if (lVar9 == 0) {
  }
  if (lVar10 == 0) {
  }
  if (lVar11 == 0) {
  }
  if (lVar12 == 0) {
  }
  fVar31 = *(float *)(lVar9 + 0x58);
  local_19c = *(uint *)(lVar10 + 0x58);
  auVar38 = ZEXT464(local_19c);
  auVar40 = ZEXT464(*(uint *)(lVar11 + 0x58));
  local_278 = *(float *)(lVar12 + 0x58);
  auVar44 = ZEXT464((uint)local_278);
  local_1a0 = fVar31;
  sVar5 = thunk_FUN_180624430(fVar31);
  if (0 < sVar5) {
  }
  if (fVar31 <= auVar46._0_4_) {
  }
  sVar5 = thunk_FUN_180624430(auVar38._0_8_);
  if (0 < sVar5) {
  }
  if (auVar38._0_4_ <= auVar46._0_4_) {
  }
  sVar5 = thunk_FUN_180624430(auVar40._0_8_);
  if (0 < sVar5) {
  }
  if (auVar40._0_4_ <= auVar46._0_4_) {
  }
  sVar5 = thunk_FUN_180624430(auVar44._0_8_);
  if (0 < sVar5) {
  }
  if (auVar44._0_4_ <= auVar46._0_4_) {
  }
  auVar38 = ZEXT464(DAT_180b0dfc8._4_4_);
  local_2b4[3] = (float)local_1d0[0x12];
  local_2b8 = (float)local_1d0[0x13];
  iVar21 = DAT_180c6f078;
  if (DAT_180c6f078 == 0) {
    UVar8 = GetTickCount64();
    if (UVar8 < DAT_180c6f080) {
      iVar21 = 0;
    }
    else {
      local_260 = &DAT_1808fed50;
      FUN_180162830(&DAT_1808fed50);
      if ((DAT_180c6f078 == 0) && (DAT_180c6f080 <= UVar8)) {
        DAT_180c6f078 = FUN_1804174b0("CPlayer_MovementServices",0x468f90f2);
        if (DAT_180c6f078 == 0) {
          DAT_180c6f080 = UVar8 + 1000;
        }
        else {
          DAT_180c6f080 = 0xffffffffffffffff;
        }
      }
      iVar21 = DAT_180c6f078;
      FUN_1805f68fc(&DAT_1808fed50);
    }
  }
  iVar27 = 0;
  lVar9 = FUN_18017ea70();
  *(int *)(lVar9 + 4) = *(int *)(lVar9 + 4) + 1;
  if (iVar21 + lVar25 == 0) {
    auVar44 = ZEXT464((uint)local_2c4);
    uVar22 = 0;
  }
  else {
    local_2bc = auVar46._0_4_;
    cVar4 = FUN_1804514f0(&local_2bc,iVar21 + lVar25,4);
    if (cVar4 == '\0') {
      uVar22 = 0;
      auVar44 = ZEXT464((uint)local_2c4);
    }
    else {
      auVar44 = ZEXT464((uint)local_2bc);
      uVar22 = 1;
    }
  }
  lVar9 = FUN_18017ea70();
  if (*(int *)(lVar9 + 4) != 0) {
    *(int *)(lVar9 + 4) = *(int *)(lVar9 + 4) + -1;
  }
  auVar34 = vpcmpeqd_avx(ZEXT416(uVar22),SUB6416(ZEXT464(0),0));
  auVar34 = vblendvps_avx(auVar44._0_16_,auVar46._0_16_,auVar34);
  auVar44 = ZEXT1664(auVar34);
  local_1b4 = auVar34._0_4_;
  sVar5 = thunk_FUN_180624430(auVar34._0_8_);
  if ((0 < sVar5) || (uVar32 = auVar44._0_8_, auVar44._0_4_ <= auVar46._0_4_)) {
    local_1b4 = auVar40._0_4_;
    uVar32 = auVar40._0_8_;
  }
  local_1b4 = (float)FUN_1806156a0(uVar32,auVar40._0_8_);
  fVar31 = local_1b4;
  sVar5 = thunk_FUN_180624430();
  if (0 < sVar5) {
  }
  if (fVar31 <= auVar46._0_4_) {
  }
  local_28c = 3.92364e-44;
  if (DAT_180cc8360 != '\0') {
    local_28c = 3.64338e-44;
  }
  local_1a4 = 3.92364e-44;
  local_2c4 = 1.4013e-45;
  pfVar17 = &local_2c4;
  if (0 < DAT_180cc82f0) {
    pfVar17 = (float *)&DAT_180cc82f0;
  }
  pfVar13 = &local_1a4;
  if (DAT_180cc82f0 < 0x1d) {
    pfVar13 = pfVar17;
  }
  local_290 = *pfVar13;
  local_288 = (int)local_28c - local_280[2];
  auVar44 = ZEXT464(0x3f800000);
  auVar40 = ZEXT464((uint)(1.0 - fVar28));
  local_284 = (int)((1.0 - fVar28) * 64.0);
  iVar21 = thunk_FUN_1805f8250(&local_290,&local_280);
  if (iVar21 < 1) {
  }
  local_274 = auVar40._0_4_ / (float)iVar21;
  local_29c = iVar21;
  lVar9 = FUN_1802fbb20(&DAT_180c6f018,0xdafa8d1);
  fVar28 = DAT_180b8e120;
  if ((lVar9 == 0) || (local_2c8 = '\x01', *(char *)(lVar9 + 0x58) == '\0')) {
    local_2c8 = '\0';
  }
  local_2a0 = auVar46._0_4_;
  local_1c0 = DAT_180b8e120;
  local_1c8 = DAT_180b8e118;
  uVar15 = DAT_180b8e118;
  sVar5 = thunk_FUN_180624430(DAT_180b8e118);
  if (sVar5 < 1) {
    auVar40 = ZEXT464((uint)local_1c8._4_4_);
    sVar5 = thunk_FUN_180624430(local_1c8._4_4_);
    if (sVar5 < 1) {
      sVar5 = thunk_FUN_180624430(fVar28);
      uVar32 = auVar40._0_8_;
      if (sVar5 < 1) goto LAB_1802fdab9;
    }
  }
  auVar34._8_8_ = 0;
  auVar34._0_8_ = DAT_180b8e174;
  local_1c0 = DAT_180b8e17c;
  auVar34 = vshufps_avx(auVar34,auVar34,0x55);
  uVar32 = auVar34._0_8_;
  local_1c8 = DAT_180b8e174;
  uVar15 = DAT_180b8e174 & 0xffffffff;
LAB_1802fdab9:
  local_190 = CONCAT44(DAT_180b8e14c,DAT_180b8e148);
  local_188 = DAT_180b8e150;
  fVar28 = (float)FUN_180636c80(uVar32,uVar15);
  fVar31 = 180.0;
  local_2e8 = (undefined8 *)&DAT_180b8fba4;
  auVar38._0_8_ = FUN_1802fba20(&DAT_180cc82e8,uVar16,auVar38._0_8_,(fVar28 * 180.0) / 3.1415927);
  auVar38._8_56_ = extraout_var_00;
  auVar34 = auVar38._0_16_;
  local_2bc = (float)auVar38._0_8_;
  if (bVar26 == false) {
    local_2e8 = &local_1c8;
    auVar40._0_8_ = FUN_1802fc550(auVar38._0_8_,puVar18,lVar25,&DAT_180b8e13c);
    auVar40._8_56_ = extraout_var_01;
    auVar34 = auVar40._0_16_;
    local_2bc = (float)auVar40._0_8_;
  }
  auVar40 = ZEXT1664(auVar34);
  auVar38 = ZEXT464((uint)DAT_180b8e154);
  local_1a8 = DAT_180b8e154;
  sVar5 = thunk_FUN_180624430(DAT_180b8e154);
  if (sVar5 < 1) {
    local_2c4 = auVar46._0_4_;
    fVar28 = auVar38._0_4_;
    if (local_2c4 <= fVar28) {
      local_1a4 = auVar44._0_4_;
      pfVar17 = &local_2c4;
      if (local_2c4 <= fVar28) {
        pfVar17 = &local_1a8;
      }
      pfVar13 = &local_1a4;
      if (fVar28 <= auVar44._0_4_) {
        pfVar13 = pfVar17;
      }
      local_1a8 = *pfVar13;
      local_208 = &local_1d0;
      local_200 = &local_190;
      local_1f8 = &local_1b4;
      local_1f0 = &local_19c;
      local_1e8 = &local_1c8;
      local_1e0 = &local_1a0;
      local_1d8 = &local_1a8;
      fVar28 = local_2a4;
      if ((bVar26 == false) && (local_2c4 < local_2a4)) {
        FUN_1802fe8b0(&local_208,local_2a4 * 0.015625);
      }
      local_2c4 = (float)local_280[2];
      iVar24 = 0;
      fVar45 = 360.0;
      fVar43 = -360.0;
      fVar29 = 0.125;
      puVar7 = local_280;
      do {
        uVar32 = auVar40._0_8_;
        fVar37 = ((float)iVar24 * local_274 + fVar28 + fVar30) - fVar30;
        local_260 = (undefined *)CONCAT44(local_260._4_4_,fVar37);
        iVar24 = iVar24 + 1;
        local_26c = ((((float)iVar24 * local_274 + fVar28 + fVar30) - fVar30) - fVar37) * 0.015625;
        auVar38 = ZEXT464((uint)local_26c);
        *local_1d0 = *local_1d0 | 0x40;
        local_1d0[0x12] = (uint)local_2b4[3];
        *local_1d0 = *local_1d0 | 0x80;
        local_1d0[0x13] = (uint)local_2b8;
        fVar28 = local_1c8._4_4_ * local_1c8._4_4_ + (float)local_1c8 * (float)local_1c8;
        fVar30 = local_1c8._4_4_;
        fVar37 = (float)local_1c8;
        if (fVar28 < 0.0) {
          local_1ac = (float)FUN_18061e150();
          uVar32 = auVar40._0_8_;
        }
        else {
          local_1ac = SQRT(fVar28);
        }
        iVar23 = 0;
        if (bVar26 == false) {
          if (local_1ac < 10.0) {
            *local_1d0 = *local_1d0 | 0x40;
            local_1d0[0x12] = 0x3f800000;
            *local_1d0 = *local_1d0 | 0x80;
            local_1d0[0x13] = 0;
            puVar18 = (undefined4 *)&DAT_0000000c;
            if (*(longlong *)(local_1d0 + 0xc) != 0) {
              puVar18 = (undefined4 *)(*(longlong *)(local_1d0 + 0xc) + 0x1c);
            }
            FUN_1802fecd0(puVar18,local_1d0,uVar32,*puVar18);
            fVar30 = local_1c8._4_4_;
            fVar37 = (float)local_1c8;
          }
        }
        local_1c0 = auVar38._0_4_ * local_278 * 0.5 + local_1c0;
        fVar28 = fVar30 * fVar30 + fVar37 * fVar37;
        if (fVar28 < 0.0) {
          uVar15 = FUN_18061e150();
        }
        else {
          uVar15 = (ulonglong)(uint)SQRT(fVar28);
        }
        local_1ac = (float)uVar15;
        if (bVar26 == false) {
          if (10.0 <= local_1ac) {
            *local_1d0 = *local_1d0 | 0x40;
            local_1d0[0x12] = 0;
            *local_1d0 = *local_1d0 | 0x80;
            local_1d0[0x13] = 0;
            fVar30 = (float)FUN_180636c80(local_1c8._4_4_,local_1c8 & 0xffffffff);
            fVar30 = fVar30 * 57.295776;
            local_194 = FUN_1806156a0(local_19c,local_1b4);
            local_1a4 = local_1a0 * local_1b4 * auVar38._0_4_ * local_1a8;
            local_2d8 = local_268;
            local_2e0 = local_1a8;
            local_2e8 = (undefined8 *)CONCAT44(local_2e8._4_4_,local_19c);
            fVar28 = (float)FUN_1802fb7c0(local_1ac,auVar38._0_8_);
            local_1b0 = local_2bc;
            if (fVar31 < local_2bc) {
              do {
                local_1b0 = local_1b0 - fVar45;
              } while (fVar31 < local_1b0);
            }
            fVar37 = -180.0;
            if (local_1b0 < -180.0) {
              do {
                local_1b0 = local_1b0 + fVar45;
              } while (local_1b0 < -180.0);
            }
            for (fVar1 = local_1b0 - fVar30; fVar31 < fVar1; fVar1 = fVar1 + fVar43) {
            }
            for (; fVar1 < -180.0; fVar1 = fVar1 + fVar45) {
            }
            if ((local_2c0 == '\0') &&
               ((((uVar16 & 8) == 0 || ((uVar16 & 0x10) != 0)) || ((uVar16 & 0x600) != 0)))) {
              local_1b8[0] = 0;
            }
            else {
              local_1b8[0] = 1;
            }
            local_150 = &local_1c8;
            local_148 = &local_194;
            local_140 = &local_1ac;
            local_138 = &local_1a4;
            local_170 = &local_1c8;
            puStack_168 = &local_194;
            pfStack_160 = &local_1a4;
            pfStack_158 = &local_1b0;
            local_180 = 0xbf800000;
            local_178 = 0xffffffff;
            if (DAT_180b8fba0 != '\0') {
              local_178 = 1;
            }
            local_174 = 0;
            local_248 = &local_150;
            local_240 = local_1b8;
            local_238 = &local_170;
            local_230 = &local_180;
            local_228 = &local_17c;
            local_220 = &local_178;
            local_218 = &local_174;
            local_210 = &local_198;
            local_198 = fVar30;
            local_17c = fVar31;
            if (fVar1 <= 90.0 - fVar28) {
              if (-(90.0 - fVar28) <= fVar1) {
                do {
                  fVar37 = (float)iVar23 * fVar29 * fVar28;
                  FUN_1802fea20(&local_248,fVar37 + fVar30,1);
                  FUN_1802fea20(&local_248,fVar30 - fVar37,0xffffffff);
                  puVar7 = local_280;
                  iVar23 = iVar23 + 1;
                } while (iVar23 < 9);
                FUN_1802fea20(&local_248,fVar28 + fVar30,1);
                uVar32 = 0xffffffff;
                fVar37 = -180.0;
              }
              else {
                do {
                  FUN_1802fea20(&local_248,fVar30 - (float)iVar23 * fVar29 * fVar28,0);
                  iVar23 = iVar23 + 1;
                } while (iVar23 < 9);
                uVar32 = 0;
              }
              fVar28 = fVar30 - fVar28;
            }
            else {
              do {
                FUN_1802fea20(&local_248,(float)iVar23 * fVar29 * fVar28 + fVar30,0);
                iVar23 = iVar23 + 1;
              } while (iVar23 < 9);
              fVar28 = fVar28 + fVar30;
              uVar32 = 0;
            }
            FUN_1802fea20(&local_248,fVar28,uVar32);
            if (0 < DAT_180b8fbc4) {
              for (local_198 = ((float)(4 - DAT_180b8fbc4) / 3.0) * (local_198 - fVar30) + fVar30;
                  fVar31 < local_198; local_198 = local_198 + fVar43) {
              }
              for (; local_198 < fVar37; local_198 = local_198 + fVar45) {
              }
            }
            local_1b0 = local_198 + 90.0;
            if (fVar31 < local_1b0) {
              do {
                local_1b0 = local_1b0 - fVar45;
              } while (fVar31 < local_1b0);
            }
            if (local_1b0 < fVar37) {
              do {
                local_1b0 = local_1b0 + fVar45;
              } while (local_1b0 < fVar37);
            }
            *local_1d0 = *local_1d0 | 0x80;
            local_1d0[0x13] = 0x3f800000;
            puVar18 = (undefined4 *)&DAT_0000000c;
            if (*(longlong *)(local_1d0 + 0xc) != 0) {
              puVar18 = (undefined4 *)(*(longlong *)(local_1d0 + 0xc) + 0x1c);
            }
            uVar15 = FUN_1802fecd0(puVar18,local_1d0,local_1b0,*puVar18);
          }
LAB_1802fe137:
          cVar4 = local_2c8;
        }
        else {
          *local_1d0 = *local_1d0 | 0x40;
          local_1d0[0x12] = 0;
          *local_1d0 = *local_1d0 | 0x80;
          local_1d0[0x13] = 0;
          uVar15 = uVar15 & 0xffffffff;
          fVar28 = local_1ac - local_298;
          auVar40 = ZEXT464((uint)fVar28);
          if (fVar28 <= 0.1) {
LAB_1802fe12f:
            fVar43 = -360.0;
            goto LAB_1802fe137;
          }
          fVar30 = local_1b4 * local_1a0 * auVar38._0_4_ * local_1a8;
          auVar34 = auVar44._0_16_;
          if (0.0001 < fVar30) {
            auVar42._0_8_ = FUN_1806156a0(fVar28 / fVar30,auVar44._0_8_);
            auVar42._8_56_ = extraout_var_02;
            auVar34 = auVar42._0_16_;
          }
          puVar14 = local_1d0;
          auVar42 = ZEXT1664(auVar34);
          fVar28 = (float)FUN_180636c80(local_1c8._4_4_,local_1c8 & 0xffffffff);
          *puVar14 = *puVar14 | 0x40;
          puVar14[0x12] = 0x3f800000;
          puVar14[0x13] = 0;
          *puVar14 = *puVar14 | 0x80;
          pfVar17 = (float *)&DAT_0000000c;
          if (*(longlong *)(puVar14 + 0xc) != 0) {
            pfVar17 = (float *)(*(longlong *)(puVar14 + 0xc) + 0x1c);
          }
          fVar28 = (*pfVar17 - (fVar28 * 57.295776 + fVar31)) * 0.017453292;
          auVar39 = ZEXT464((uint)fVar28);
          local_2b4[0] = auVar44._0_4_;
          local_2b4[2] = -1.0;
          fVar28 = (float)FUN_180638e00(fVar28);
          fVar29 = (float)FUN_180637540(auVar39._0_8_);
          cVar4 = local_2c8;
          local_2b4[1] = fVar29 - fVar28 * auVar46._0_4_;
          pfVar17 = local_2b4 + 2;
          if (-1.0 <= local_2b4[1]) {
            pfVar17 = local_2b4 + 1;
          }
          local_2b4[2] = auVar44._0_4_;
          pfVar13 = local_2b4;
          if (local_2b4[1] <= local_2b4[2]) {
            pfVar13 = pfVar17;
          }
          puVar14[0x12] = (uint)*pfVar13;
          local_2b4[0] = -1.0;
          local_2b4[1] = (fVar29 * auVar46._0_4_ + fVar28) * -1.0;
          *puVar14 = *puVar14 | 0xc0;
          pfVar17 = local_2b4;
          if (-1.0 <= local_2b4[1]) {
            pfVar17 = local_2b4 + 1;
          }
          pfVar13 = local_2b4 + 2;
          if (local_2b4[1] <= local_2b4[2]) {
            pfVar13 = pfVar17;
          }
          puVar14[0x13] = (uint)*pfVar13;
          fVar28 = auVar42._0_4_;
          if (local_2c8 == '\0') {
            *local_1d0 = *local_1d0 | 0x40;
            local_1d0[0x12] = (uint)(fVar28 * (float)local_1d0[0x12]);
            *local_1d0 = *local_1d0 | 0x80;
            local_1d0[0x13] = (uint)(fVar28 * (float)local_1d0[0x13]);
            fVar28 = (float)FUN_1806156a0(fVar28 * fVar30,auVar40._0_8_);
            fVar28 = local_1ac - fVar28;
            local_1c8 = CONCAT44((fVar28 / local_1ac) * local_1c8._4_4_,
                                 (fVar28 / local_1ac) * (float)local_1c8);
          }
          else {
            fVar28 = fVar28 + local_2a0;
            *local_1d0 = *local_1d0 | 0x40;
            local_1d0[0x12] = 0;
            *local_1d0 = *local_1d0 | 0x80;
            local_1d0[0x13] = 0;
            local_2a0 = fVar28;
            if (0.5 <= fVar28) {
              local_2a0 = fVar28 + -1.0;
              pfVar17 = (float *)&DAT_0000000c;
              if (*(longlong *)(local_1d0 + 0xc) != 0) {
                pfVar17 = (float *)(*(longlong *)(local_1d0 + 0xc) + 0x1c);
              }
              auVar40 = ZEXT464((uint)(*pfVar17 * 0.017453292));
              fVar30 = (float)FUN_180638e00(*pfVar17 * 0.017453292);
              local_2b4[2] = fVar30;
              uVar32 = FUN_180637540(auVar40._0_8_);
              fVar28 = -fVar30;
              local_2b4[1] = local_1b4 * local_1a0 * auVar38._0_4_ * local_1a8;
              local_270 = fVar28;
              local_2b4[0] = (float)FUN_1806156a0(local_1b4,local_19c);
              auVar40 = ZEXT1664(auVar46._0_16_);
              auVar44 = ZEXT464((uint)(float)local_1c8);
              auVar42 = ZEXT464((uint)local_1c8._4_4_);
              auVar38 = ZEXT464((uint)local_1ac);
              local_118[0] = 1.0;
              local_118[1] = 0.0;
              local_118[2] = 1.0;
              local_118[3] = 1.0;
              local_118[4] = 0.0;
              local_118[5] = 1.0;
              local_118[6] = -1.0;
              local_118[7] = 1.0;
              local_118[8] = -1.0;
              local_118[9] = 0.0;
              local_118[10] = -1.0;
              local_118[0xb] = -1.0;
              local_118[0xc] = 0.0;
              local_118[0xd] = -1.0;
              local_118[0xe] = 1.0;
              local_118[0xf] = -1.0;
              pfVar17 = local_118;
              fVar31 = (float)local_1c8;
              fVar29 = local_1c8._4_4_;
              do {
                local_290 = (float)uVar32 * *pfVar17 + fVar28 * pfVar17[1];
                local_28c = fVar30 * *pfVar17 + (float)uVar32 * pfVar17[1];
                local_288 = 0;
                auVar38 = ZEXT1664(auVar38._0_16_);
                auVar40 = ZEXT1664(auVar40._0_16_);
                auVar46 = ZEXT1664(auVar46._0_16_);
                auVar44 = ZEXT1664(auVar44._0_16_);
                auVar42 = ZEXT1664(auVar42._0_16_);
                FUN_180450e30(&local_290);
                uVar15 = 0;
                if (0.0 < local_2b4[0] - (local_28c * fVar29 + local_290 * fVar31)) {
                  fVar28 = local_290;
                  fVar30 = local_28c;
                  fVar31 = (float)FUN_1806156a0(local_2b4[1]);
                  fVar28 = fVar28 * fVar31 + (float)local_1c8;
                  auVar39 = ZEXT464((uint)fVar28);
                  auVar34 = ZEXT416((uint)fVar28);
                  fVar30 = fVar30 * fVar31 + local_1c8._4_4_;
                  auVar41 = ZEXT464((uint)fVar30);
                  auVar33 = ZEXT416((uint)fVar30);
                  fVar28 = fVar30 * fVar30 + fVar28 * fVar28;
                  fVar31 = (float)local_1c8;
                  fVar29 = local_1c8._4_4_;
                  if (fVar28 < 0.0) {
                    auVar36._0_8_ = FUN_18061e150();
                    auVar33 = auVar41._0_16_;
                    auVar34 = auVar39._0_16_;
                    auVar36._8_56_ = extraout_var_03;
                    auVar35 = auVar36._0_16_;
                  }
                  else {
                    auVar35 = ZEXT416((uint)SQRT(fVar28));
                  }
                  uVar15 = auVar35._0_8_;
                  if (auVar35._0_4_ < auVar38._0_4_) {
                    auVar38 = ZEXT1664(auVar35);
                    auVar40 = ZEXT464((uint)*pfVar17);
                    auVar46 = ZEXT464((uint)pfVar17[1]);
                    auVar44 = ZEXT1664(auVar34);
                    auVar42 = ZEXT1664(auVar33);
                  }
                }
                pfVar17 = pfVar17 + 2;
                fVar28 = local_270;
                fVar30 = local_2b4[2];
              } while (pfVar17 != (float *)&local_d8);
              fVar45 = 360.0;
              *local_1d0 = *local_1d0 | 0x40;
              local_1d0[0x12] = auVar40._0_4_;
              *local_1d0 = *local_1d0 | 0x80;
              local_1d0[0x13] = auVar46._0_4_;
              local_1c8 = CONCAT44(auVar42._0_4_,auVar44._0_4_);
              fVar31 = 180.0;
              auVar46 = ZEXT864(0);
              fVar29 = 0.125;
              auVar38 = ZEXT464((uint)local_26c);
              auVar44 = ZEXT464(0x3f800000);
              iVar21 = local_29c;
              goto LAB_1802fe12f;
            }
          }
          uVar15 = (ulonglong)(uint)fVar28;
          fVar29 = 0.125;
          fVar43 = -360.0;
          iVar21 = local_29c;
        }
        puVar14 = (uint *)FUN_1803dfb00(uVar15,puVar7);
        if (puVar14 == (uint *)0x0) break;
        puVar14[2] = 0;
        puVar14[3] = 0;
        *(undefined1 *)(puVar14 + 4) = 0;
        *puVar14 = *puVar14 | 7;
        uVar22 = *puVar14;
        puVar14[5] = (uint)local_260;
        fVar28 = (float)local_1d0[0x12];
        *puVar14 = uVar22 | 8;
        puVar14[6] = (uint)(fVar28 - (float)local_190);
        fVar28 = (float)local_1d0[0x13];
        *puVar14 = uVar22 | 0x18;
        puVar14[7] = (uint)(fVar28 - local_190._4_4_);
        local_190 = CONCAT44(((float)local_1d0[0x13] - local_190._4_4_) + local_190._4_4_,
                             ((float)local_1d0[0x12] - (float)local_190) + (float)local_190);
        iVar27 = iVar27 + 1;
        if (bVar26 == false) {
          FUN_1802fe8b0(&local_208,auVar38._0_8_);
        }
        auVar40 = ZEXT464((uint)local_2bc);
        fVar30 = 131072.0;
        fVar28 = local_2a4;
      } while (iVar24 < iVar21);
      lVar25 = local_258;
      if (iVar27 == 0) {
        *local_1d0 = *local_1d0 | 0x40;
        local_1d0[0x12] = (uint)local_2b4[3];
        *local_1d0 = *local_1d0 | 0x80;
        local_1d0[0x13] = (uint)local_2b8;
      }
      else {
        auVar34 = vpcmpeqd_avx(ZEXT116(DAT_180b8e111),SUB6416(ZEXT464(0),0));
        auVar34 = vblendvps_avx(ZEXT416((uint)DAT_180b8e17c),ZEXT416((uint)DAT_180b8e120),auVar34);
        DAT_180b8fbc8 = local_1c8;
        _DAT_180b8fbd0 = auVar34._0_4_;
        DAT_180b8fba8 = 1;
        if ((bVar26 == false) && (cVar4 == '\0')) {
          DAT_180b8fbb0 = *(undefined8 *)(local_258 + 8);
          DAT_180b8fbb8 = local_2c4;
          DAT_180b8fbbc = iVar27;
        }
        lVar9 = FUN_1802fbb20(&DAT_180c6f030,0xdafa8d1);
        fVar28 = auVar46._0_4_;
        if ((lVar9 == 0) || (*(char *)(lVar9 + 0x58) == '\0')) {
          uVar16 = (ulonglong)((uint)DAT_180b0dfd8 & 0x18);
          uVar15 = *(ulonglong *)(lVar25 + 0x60) & 0xfffffffffffff9e7 | uVar16;
          uVar19 = (ulonglong)((uint)DAT_180b0dfd8 & 0x600);
          if ((uVar16 == 0) && (0.001 < ABS((float)local_1d0[0x12]))) {
            uVar16 = 0x10;
            if (fVar28 < (float)local_1d0[0x12]) {
              uVar16 = 8;
            }
            uVar15 = uVar15 | uVar16;
          }
          if (uVar19 == 0) {
            uVar19 = 0x400;
            if (0.001 < ABS((float)local_1d0[0x13])) {
              uVar16 = 0x400;
              if (fVar28 < (float)local_1d0[0x13]) {
                uVar16 = 0x200;
              }
              *(ulonglong *)(lVar25 + 0x60) = uVar15 | uVar16;
            }
            if (DAT_180b8fba0 != '\0') {
              uVar19 = 0x200;
            }
          }
          *(ulonglong *)(lVar25 + 0x60) = uVar15 | uVar19;
        }
        else {
          uVar16 = *(ulonglong *)(lVar25 + 0x60);
          uVar15 = uVar16 & 0xfffffffffffff9e7;
          if ((float)local_1d0[0x12] <= fVar28) {
            if ((float)local_1d0[0x12] < fVar28) {
              uVar15 = uVar15 | 0x10;
            }
          }
          else {
            uVar15 = uVar15 | 8;
          }
          if ((float)local_1d0[0x13] <= fVar28) {
            if ((float)local_1d0[0x13] < fVar28) {
              uVar15 = uVar15 | 0x400;
            }
          }
          else {
            uVar15 = uVar15 | 0x200;
          }
          *(ulonglong *)(lVar25 + 0x60) = uVar15;
          *(ulonglong *)(lVar25 + 0x68) =
               *(ulonglong *)(lVar25 + 0x68) | (ulonglong)(((uint)uVar15 ^ (uint)uVar16) & 0x618);
          *(ulonglong *)(lVar25 + 0x70) = *(ulonglong *)(lVar25 + 0x70) & 0xfffffffffffff9e7;
        }
      }
    }
  }
}



