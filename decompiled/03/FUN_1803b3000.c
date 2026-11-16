// FUN_1803b3000 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1803b3000 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_1803b3000(undefined8 param_1,undefined8 param_2)

{
  int *piVar1;
  char cVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  HWND pHVar5;
  _struct_19 _Var6;
  undefined1 auVar7 [8];
  undefined1 auVar8 [8];
  char cVar9;
  byte bVar10;
  char cVar11;
  undefined1 uVar12;
  short sVar13;
  SHORT SVar14;
  int iVar15;
  DWORD DVar16;
  undefined1 (*pauVar17) [16];
  longlong *plVar18;
  LARGE_INTEGER *pLVar19;
  undefined1 auVar20 [8];
  ULONGLONG UVar21;
  PSRWLOCK pRVar22;
  ULONGLONG UVar23;
  HWND pHVar24;
  bool bVar25;
  float *pfVar26;
  longlong lVar27;
  uint uVar28;
  ulonglong uVar29;
  undefined *puVar30;
  undefined8 *puVar31;
  ulonglong uVar32;
  LARGE_INTEGER LVar33;
  longlong lVar34;
  char *pcVar35;
  ulonglong uVar36;
  PSRWLOCK pRVar37;
  undefined **ppuVar38;
  undefined8 uVar39;
  longlong lVar40;
  double dVar41;
  double dVar42;
  bool bVar43;
  bool bVar44;
  undefined8 extraout_XMM0_Qa;
  undefined8 uVar45;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qa_01;
  undefined8 extraout_XMM0_Qa_02;
  double dVar46;
  double dVar47;
  undefined1 auVar48 [16];
  float fVar49;
  undefined1 auVar50 [64];
  undefined1 auVar51 [64];
  undefined1 auVar52 [64];
  undefined1 auVar53 [64];
  undefined1 auVar54 [64];
  undefined1 auVar55 [64];
  undefined1 auVar56 [64];
  double dVar57;
  undefined1 auVar58 [16];
  undefined1 auVar59 [64];
  undefined1 auVar60 [16];
  undefined1 auVar61 [64];
  unkbyte9 Var62;
  undefined1 auVar63 [16];
  undefined1 auVar64 [64];
  undefined1 auVar65 [16];
  undefined1 auStack_9f8 [32];
  undefined **local_9d8;
  undefined2 *local_9d0;
  double local_9c8;
  LARGE_INTEGER local_9c0;
  double local_9b8;
  undefined8 local_9b0;
  longlong local_9a8;
  double local_9a0;
  double local_998;
  double local_990;
  double local_988;
  ULONGLONG local_980;
  double local_978;
  uint local_970;
  byte local_968;
  byte local_967;
  byte local_966;
  undefined1 local_964 [12];
  ULONGLONG local_958;
  undefined8 local_948;
  undefined8 uStack_940;
  undefined8 uStack_938;
  undefined8 uStack_930;
  undefined8 local_928;
  undefined8 uStack_920;
  undefined8 uStack_918;
  undefined8 uStack_910;
  LARGE_INTEGER local_908;
  undefined1 local_900 [16];
  undefined1 local_8e8 [8];
  PSRWLOCK pRStack_8e0;
  longlong lStack_8d8;
  ulonglong uStack_8d0;
  undefined8 local_8c8;
  undefined2 uStack_8c0;
  undefined6 uStack_8be;
  undefined1 local_8b8 [16];
  longlong lStack_8a8;
  ulonglong uStack_8a0;
  undefined8 local_898;
  undefined8 uStack_890;
  _struct_19 local_888;
  PSRWLOCK pRStack_880;
  longlong lStack_878;
  ulonglong uStack_870;
  longlong *local_868;
  undefined1 local_860 [384];
  undefined4 local_6e0;
  char local_6dc;
  undefined2 local_6d8 [2];
  float local_6d4;
  undefined8 local_6d0;
  undefined8 uStack_6c8;
  undefined8 uStack_6c0;
  undefined8 uStack_6b8;
  undefined1 local_6b0 [16];
  undefined1 local_680;
  undefined1 local_668 [24];
  char local_650;
  ulonglong local_d0;
  
  local_d0 = DAT_1808d5f00 ^ (ulonglong)auStack_9f8;
  pauVar17 = (undefined1 (*) [16])FUN_180382820(local_8b8,DAT_180c6e520,DAT_180ccaa20);
  _local_8e8 = *pauVar17;
  lStack_8d8 = *(longlong *)pauVar17[1];
  FUN_1803b2030(*(undefined8 *)*pauVar17,DAT_180c6e508,DAT_180c6e510,local_8e8);
  _local_8e8 = ZEXT816(0x18080c498);
  FUN_18017bf40(&pRStack_8e0);
  cVar9 = FUN_1800e5780();
  FUN_18017bf40(&local_908);
  LVar33.s = local_908.s;
  uVar29 = local_908.QuadPart - (longlong)pRStack_8e0;
  plVar18 = (longlong *)FUN_1803bb430();
  ppuVar38 = (undefined **)(*plVar18 + 1);
  *plVar18 = (longlong)ppuVar38;
  lVar27 = plVar18[1];
  plVar18[1] = lVar27 + uVar29;
  lVar40 = plVar18[3] + (ulonglong)(999999 < uVar29);
  plVar18[3] = lVar40;
  dVar41 = (double)(plVar18[4] + (ulonglong)(4999999 < uVar29));
  plVar18[4] = (longlong)dVar41;
  dVar42 = (double)(plVar18[5] + (ulonglong)(15999999 < uVar29));
  plVar18[5] = (longlong)dVar42;
  uVar36 = plVar18[2];
  if ((ulonglong)plVar18[2] < uVar29) {
    plVar18[2] = uVar29;
    uVar36 = uVar29;
  }
  auVar61 = ZEXT864(0x412e848000000000);
  auVar59 = ZEXT864(0);
  auVar52 = ZEXT864(0x408f400000000000);
  if ((LVar33.s == *(_struct_19 *)(plVar18 + 7)) ||
     (uVar45 = extraout_XMM0_Qa, (longlong)*(_struct_19 *)(plVar18 + 7) <= LVar33.QuadPart)) {
    local_9b8 = (double)(LVar33.QuadPart - plVar18[6]) / 1000000.0;
    dVar57 = (double)(lVar27 + uVar29);
    if (local_9b8 <= 0.0) {
      local_9b0 = 0.0;
    }
    else {
      local_9b0 = (dVar57 / 1000.0) / local_9b8;
    }
    local_9c0.s = (_struct_19)(dVar57 / 1000000.0);
    local_9c8 = (double)uVar36 / 1000.0;
    local_9d0 = (undefined2 *)((dVar57 / (double)ppuVar38) / 1000.0);
    local_9d8 = ppuVar38;
    local_9a8 = lVar40;
    local_9a0 = dVar41;
    local_998 = dVar42;
    uVar45 = FUN_1801af8a0(dVar57 / (double)ppuVar38,local_9d0,local_8e8);
    plVar18[2] = 0;
    plVar18[1] = 0;
    *plVar18 = 0;
    plVar18[5] = 0;
    plVar18[4] = 0;
    plVar18[3] = 0;
    *(_struct_19 *)(plVar18 + 6) = LVar33.s;
    plVar18[7] = LVar33.QuadPart + 5000000000;
  }
  if ((cVar9 == '\0') ||
     ((DAT_180c6e528 == '\0' && (cVar9 = FUN_1803b2930(uVar45,param_2), cVar9 == '\0'))))
  goto LAB_1803b6e22;
  FUN_1803b27a0();
  _local_8e8 = ZEXT816(0x18080c5b0);
  FUN_18017bf40(&pRStack_8e0);
  FUN_180198700();
  FUN_18017bf40(&local_908);
  LVar33.s = local_908.s;
  uVar29 = local_908.QuadPart - (longlong)pRStack_8e0;
  plVar18 = (longlong *)FUN_1803bb610();
  ppuVar38 = (undefined **)(*plVar18 + 1);
  *plVar18 = (longlong)ppuVar38;
  lVar27 = plVar18[1];
  plVar18[1] = lVar27 + uVar29;
  lVar40 = plVar18[3] + (ulonglong)(999999 < uVar29);
  plVar18[3] = lVar40;
  dVar41 = (double)(plVar18[4] + (ulonglong)(4999999 < uVar29));
  plVar18[4] = (longlong)dVar41;
  dVar42 = (double)(plVar18[5] + (ulonglong)(15999999 < uVar29));
  plVar18[5] = (longlong)dVar42;
  uVar36 = plVar18[2];
  if ((ulonglong)plVar18[2] < uVar29) {
    plVar18[2] = uVar29;
    uVar36 = uVar29;
  }
  if ((LVar33.s == *(_struct_19 *)(plVar18 + 7)) ||
     ((longlong)*(_struct_19 *)(plVar18 + 7) <= LVar33.QuadPart)) {
    local_9b8 = (double)(LVar33.QuadPart - plVar18[6]) / auVar61._0_8_;
    dVar57 = (double)(lVar27 + uVar29);
    dVar47 = auVar52._0_8_;
    if (local_9b8 <= auVar59._0_8_) {
      local_9b0 = 0.0;
    }
    else {
      local_9b0 = (dVar57 / dVar47) / local_9b8;
    }
    local_9c0.s = (_struct_19)(dVar57 / auVar61._0_8_);
    local_9c8 = (double)uVar36 / dVar47;
    local_9d0 = (undefined2 *)((dVar57 / (double)ppuVar38) / dVar47);
    local_9d8 = ppuVar38;
    local_9a8 = lVar40;
    local_9a0 = dVar41;
    local_998 = dVar42;
    FUN_1801af8a0(dVar57 / (double)ppuVar38,local_9d0,local_8e8);
    plVar18[2] = 0;
    plVar18[1] = 0;
    *plVar18 = 0;
    plVar18[5] = 0;
    plVar18[4] = 0;
    plVar18[3] = 0;
    *(_struct_19 *)(plVar18 + 6) = LVar33.s;
    plVar18[7] = LVar33.QuadPart + 5000000000;
  }
  _local_8e8 = ZEXT816(0x18080c5e8);
  FUN_18017bf40(&pRStack_8e0);
  LOCK();
  DAT_180b901a0 = DAT_180b901a0 + 1;
  UNLOCK();
  FUN_18017bf40(&local_908);
  LVar33.s = local_908.s;
  uVar29 = local_908.QuadPart - (longlong)pRStack_8e0;
  plVar18 = (longlong *)FUN_1803bb7f0();
  ppuVar38 = (undefined **)(*plVar18 + 1);
  *plVar18 = (longlong)ppuVar38;
  lVar27 = plVar18[1];
  plVar18[1] = lVar27 + uVar29;
  lVar40 = plVar18[3] + (ulonglong)(999999 < uVar29);
  plVar18[3] = lVar40;
  dVar41 = (double)(plVar18[4] + (ulonglong)(4999999 < uVar29));
  plVar18[4] = (longlong)dVar41;
  dVar42 = (double)(plVar18[5] + (ulonglong)(15999999 < uVar29));
  plVar18[5] = (longlong)dVar42;
  uVar36 = plVar18[2];
  if ((ulonglong)plVar18[2] < uVar29) {
    plVar18[2] = uVar29;
    uVar36 = uVar29;
  }
  if ((LVar33.s == *(_struct_19 *)(plVar18 + 7)) ||
     ((longlong)*(_struct_19 *)(plVar18 + 7) <= LVar33.QuadPart)) {
    local_9b8 = (double)(LVar33.QuadPart - plVar18[6]) / auVar61._0_8_;
    dVar57 = (double)(lVar27 + uVar29);
    dVar47 = auVar52._0_8_;
    if (local_9b8 <= auVar59._0_8_) {
      local_9b0 = 0.0;
    }
    else {
      local_9b0 = (dVar57 / dVar47) / local_9b8;
    }
    local_9c0.s = (_struct_19)(dVar57 / auVar61._0_8_);
    local_9c8 = (double)uVar36 / dVar47;
    local_9d0 = (undefined2 *)((dVar57 / (double)ppuVar38) / dVar47);
    local_9d8 = ppuVar38;
    local_9a8 = lVar40;
    local_9a0 = dVar41;
    local_998 = dVar42;
    FUN_1801af8a0(dVar57 / (double)ppuVar38,local_9d0,local_8e8);
    plVar18[2] = 0;
    plVar18[1] = 0;
    *plVar18 = 0;
    plVar18[5] = 0;
    plVar18[4] = 0;
    plVar18[3] = 0;
    *(_struct_19 *)(plVar18 + 6) = LVar33.s;
    plVar18[7] = LVar33.QuadPart + 5000000000;
  }
  _local_8e8 = ZEXT816(0x18080c5c8);
  FUN_18017bf40(&pRStack_8e0);
  iVar15 = FUN_1805f68d0(&DAT_180902d10);
  if (iVar15 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(5);
  }
  if (DAT_180902d5c == 0x7fffffff) {
    DAT_180902d5c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(6);
  }
  DAT_180902d60 = DAT_180b0d768;
  _DAT_180902d64 = ((DAT_180b0d7d2 | 0x500) << 8 | (uint)DAT_180b0d7d1) << 8 | (uint)DAT_180b0d7d0;
  auVar50 = ZEXT464((uint)DAT_180b0d7d4);
  sVar13 = thunk_FUN_180624430(DAT_180b0d7d4);
  fVar49 = 1.0;
  if (sVar13 < 1) {
    local_964._0_4_ = 0x466a6000;
    local_908.s.LowPart = 0x3f800000;
    pfVar26 = (float *)&local_908;
    if (1.0 <= auVar50._0_4_) {
      pfVar26 = &DAT_180b0d7d4;
    }
    pLVar19 = (LARGE_INTEGER *)local_964;
    if (auVar50._0_4_ <= 15000.0) {
      pLVar19 = (LARGE_INTEGER *)pfVar26;
    }
    _DAT_180902d68 = (float)(pLVar19->s).LowPart;
  }
  else {
    _DAT_180902d68 = 300.0;
  }
  auVar50 = ZEXT464(DAT_180b0d7d8);
  sVar13 = thunk_FUN_180624430(DAT_180b0d7d8);
  auVar48 = vpcmpgtd_avx(ZEXT416((uint)(int)sVar13),SUB6416(ZEXT464(0),0));
  auVar48 = vblendvps_avx(auVar50._0_16_,SUB6416(ZEXT464(0x40000000),0),auVar48);
  _DAT_180902d6c = auVar48._0_4_;
  FUN_1805f68fc(&DAT_180902d10);
  FUN_18017bf40(&local_908);
  LVar33.s = local_908.s;
  uVar29 = local_908.QuadPart - (longlong)pRStack_8e0;
  plVar18 = (longlong *)FUN_1803bb9d0();
  ppuVar38 = (undefined **)(*plVar18 + 1);
  *plVar18 = (longlong)ppuVar38;
  lVar27 = plVar18[1];
  plVar18[1] = lVar27 + uVar29;
  lVar40 = plVar18[3] + (ulonglong)(999999 < uVar29);
  plVar18[3] = lVar40;
  dVar41 = (double)(plVar18[4] + (ulonglong)(4999999 < uVar29));
  plVar18[4] = (longlong)dVar41;
  dVar42 = (double)(plVar18[5] + (ulonglong)(15999999 < uVar29));
  plVar18[5] = (longlong)dVar42;
  uVar36 = plVar18[2];
  if ((ulonglong)plVar18[2] < uVar29) {
    plVar18[2] = uVar29;
    uVar36 = uVar29;
  }
  if ((LVar33.s == *(_struct_19 *)(plVar18 + 7)) ||
     ((longlong)*(_struct_19 *)(plVar18 + 7) <= LVar33.QuadPart)) {
    local_9b8 = (double)(LVar33.QuadPart - plVar18[6]) / auVar61._0_8_;
    dVar57 = (double)(lVar27 + uVar29);
    dVar47 = auVar52._0_8_;
    if (local_9b8 <= auVar59._0_8_) {
      local_9b0 = 0.0;
    }
    else {
      local_9b0 = (dVar57 / dVar47) / local_9b8;
    }
    local_9c0.s = (_struct_19)(dVar57 / auVar61._0_8_);
    local_9c8 = (double)uVar36 / dVar47;
    local_9d0 = (undefined2 *)((dVar57 / (double)ppuVar38) / dVar47);
    local_9d8 = ppuVar38;
    local_9a8 = lVar40;
    local_9a0 = dVar41;
    local_998 = dVar42;
    FUN_1801af8a0(dVar57 / (double)ppuVar38,local_9d0,local_8e8);
    plVar18[2] = 0;
    plVar18[1] = 0;
    *plVar18 = 0;
    plVar18[5] = 0;
    plVar18[4] = 0;
    plVar18[3] = 0;
    *(_struct_19 *)(plVar18 + 6) = LVar33.s;
    plVar18[7] = LVar33.QuadPart + 5000000000;
  }
  auVar20 = (undefined1  [8])FUN_1803ba270();
  local_8e8 = auVar20;
  UVar21 = GetTickCount64();
  UVar23 = *(ULONGLONG *)auVar20;
  if (UVar23 == 0) {
    *(ULONGLONG *)auVar20 = UVar21;
    UVar23 = UVar21;
  }
  else {
    *(ULONGLONG *)((longlong)auVar20 + 8) = *(ULONGLONG *)((longlong)auVar20 + 8) + 1;
  }
  uVar36 = UVar21 - UVar23;
  if (4999 < uVar36) {
    AcquireSRWLockShared((PSRWLOCK)&DAT_180bb88c0);
    local_888 = _DAT_180bb8890;
    pRStack_880 = pRRam0000000180bb8898;
    lStack_878 = lRam0000000180bb88a0;
    uStack_870 = uRam0000000180bb88a8;
    local_8b8._8_8_ = pRRam0000000180bb8898;
    local_8b8._0_4_ = _DAT_180bb8890;
    local_8b8._4_4_ = DAT_180bb8890_4;
    lStack_8a8 = lRam0000000180bb88a0;
    uStack_8a0 = uRam0000000180bb88a8;
    uStack_890 = CONCAT71(uRam0000000180bb88b9,cRam0000000180bb88b8);
    local_898 = _DAT_180bb88b0;
    auVar52 = ZEXT1664(auVar52._0_16_);
    auVar59 = ZEXT1664(auVar59._0_16_);
    auVar61 = ZEXT1664(auVar61._0_16_);
    ReleaseSRWLockShared((PSRWLOCK)&DAT_180bb88c0);
    if ((DAT_1808d9bda == '\0') && (DAT_1808d9bd8 == 3)) {
      local_968 = 1;
    }
    else {
      local_968 = 0;
    }
    local_966 = DAT_180b8e2b0;
    if (DAT_180c6e529 == '\0') {
      pcVar35 = "fonts_pending";
    }
    else if (local_968 == 0) {
      pcVar35 = "world_pending";
    }
    else {
      bVar10 = DAT_180b8e2b0;
      cVar9 = FUN_180284d80(local_8b8);
      if (cVar9 == '\0') {
        pcVar35 = "local_pending";
      }
      else {
        pcVar35 = "ready";
        if (bVar10 == 0) {
          pcVar35 = "camera_pending";
        }
      }
    }
    local_964._4_8_ = *(ULONGLONG *)((longlong)auVar20 + 0x28);
    local_958 = *(ULONGLONG *)((longlong)auVar20 + 0x20);
    local_900._0_8_ = *(ULONGLONG *)((longlong)auVar20 + 0x18);
    local_8b8._0_8_ = *(ULONGLONG *)((longlong)auVar20 + 0x10);
    local_967 = DAT_180ccaa36;
    AcquireSRWLockShared((PSRWLOCK)&DAT_180b0e0f8);
    lVar27 = (DAT_180b0e0e8 - DAT_180b0e0e0) / 6 + (DAT_180b0e0e8 - DAT_180b0e0e0 >> 0x3f);
    ReleaseSRWLockShared((PSRWLOCK)&DAT_180b0e0f8);
    local_964[0] = DAT_180c6e529;
    if ((pRStack_880 != (PSRWLOCK)0x0) ||
       (local_908.QuadPart = local_908.QuadPart & 0xffffffff00000000, lStack_878 != 0)) {
      local_908.s.LowPart = 1;
    }
    uVar28 = (uint)DAT_1808d9bd8;
    auVar52 = ZEXT1664(auVar52._0_16_);
    auVar59 = ZEXT1664(auVar59._0_16_);
    auVar61 = ZEXT1664(auVar61._0_16_);
    FUN_18063ab10(local_6d8,0,0x600);
    local_980 = local_964._4_8_;
    local_988 = (double)local_958;
    local_990 = (double)local_900._0_8_;
    local_998 = (double)local_8b8._0_8_;
    local_9a0 = (double)CONCAT44(local_9a0._4_4_,(uint)local_967);
    local_9b0 = (double)(CONCAT44(local_9b0._4_4_,local_964._0_4_) & 0xffffffff000000ff);
    local_9c0.s.LowPart = local_908.s.LowPart;
    local_9d0 = (undefined2 *)CONCAT44(local_9d0._4_4_,uVar28);
    local_9d8 = (undefined **)pcVar35;
    local_9a8 = (lVar27 >> 2) - (lVar27 >> 0x3f);
    local_9b8._0_4_ = (uint)local_966;
    local_9c8._0_4_ = (uint)local_968;
    FUN_18015ad60(local_6d8,0x600,0xffffffffffffffff,
                  "reason=%s world_state=%u world_ready=%d local_valid=%d camera_valid=%d fonts_ready=%d entities=%zu menu_input_owned=%d decorations_allowed=%llu decorations_native_blocked=%llu decorations_input_blocked=%llu decorations_unknown=%llu"
                 );
    ppuVar38 = &PTR_180700558;
    local_9d8 = &PTR_180700558;
    if ((char)local_6d8[0] != '\0') {
      local_9d8 = (undefined **)&DAT_1806bcfc0;
    }
    local_9d0 = local_6d8;
    FUN_1800f6900(0);
    FUN_18063ab10(local_6d8,0,0x600);
    local_978 = (double)DAT_180b0d7d4;
    local_988 = (double)DAT_180cc91bc;
    local_990 = (double)DAT_180cc91b8;
    local_998 = (double)DAT_180cc91b4;
    local_9a0 = (double)DAT_180cc91b0;
    local_9b0 = (double)DAT_180b0cd60;
    local_9c0.s = (_struct_19)(double)DAT_180b0cc08;
    auVar20 = local_8e8;
    local_9d8 = (undefined **)
                (((double)*(ulonglong *)((longlong)local_8e8 + 8) * auVar52._0_8_) / (double)uVar36)
    ;
    local_970 = (uint)(DAT_180cc8ef0 != '\0');
    local_980 = CONCAT44(local_980._4_4_,(uint)(DAT_180b0d768 != '\0'));
    local_9a8 = CONCAT44(local_9a8._4_4_,(uint)(DAT_180cc9148 != '\0'));
    local_9b8 = (double)CONCAT44(local_9b8._4_4_,(uint)(DAT_180b0ccf8 != '\0'));
    local_9c8 = (double)CONCAT44(local_9c8._4_4_,(uint)(DAT_180b0cba0 != '\0'));
    local_9d0 = (undefined2 *)uVar36;
    FUN_18015ad60(local_6d8,0x600,0xffffffffffffffff,
                  "present_fps=%.1f interval_ms=%llu fov_enabled=%d fov=%.1f aspect_enabled=%d aspect=%.2f dof=%d dof_ranges=(%.1f,%.1f,%.1f,%.1f) dlight=%d radius=%.1f scene_lighting=%d"
                 );
    if ((char)local_6d8[0] != '\0') {
      ppuVar38 = (undefined **)&DAT_1806bcfc0;
    }
    local_9d0 = local_6d8;
    local_9d8 = ppuVar38;
    FUN_1800f6900(0);
    *(ULONGLONG *)((longlong)auVar20 + 8) = 0;
    *(ULONGLONG *)((longlong)auVar20 + 0x10) = 0;
    *(ULONGLONG *)((longlong)auVar20 + 0x18) = 0;
    *(ULONGLONG *)((longlong)auVar20 + 0x20) = 0;
    *(ULONGLONG *)((longlong)auVar20 + 0x28) = 0;
    *(ULONGLONG *)auVar20 = UVar21;
  }
  (**(code **)(*DAT_180c6e510 + 0x108))(DAT_180c6e510,1,&DAT_180c6e518,0);
  FUN_18063ab10(&local_868,0,400);
  FUN_1803b2520(&local_868,DAT_180c6e510,DAT_180c6e518);
  if (local_6dc != '\0') {
    local_8b8 = ZEXT816(0x18080c628);
    FUN_18017bf40(local_8b8 + 8);
    FUN_1803f2990(&DAT_180cce340,param_2,DAT_180ccaa20);
    puVar30 = &DAT_180cce780;
    do {
      FUN_1803f2990(puVar30,param_2,DAT_180ccaa20);
      puVar30 = puVar30 + 0x440;
    } while (puVar30 != &DAT_180ccf000);
    FUN_1803f5890(&DAT_180ccf000,param_2,DAT_180ccaa20);
    FUN_1803c2350(&DAT_180ccf690,param_2,DAT_180ccaa20);
    FUN_1803c2350(&DAT_180cd0770,param_2,DAT_180ccaa20);
    if ((DAT_180ccaa20 != '\0') || (0.001 < DAT_180ccaa28)) {
      uVar45 = 1;
    }
    else {
      uVar45 = 0;
    }
    FUN_1803c2350(&DAT_180cd1850,param_2,uVar45);
    FUN_1803c2350(&DAT_180cd2930,param_2,DAT_180ccaa20);
    FUN_18017bf40(local_8e8);
    auVar7 = local_8e8;
    uVar29 = (longlong)local_8e8 - local_8b8._8_8_;
    plVar18 = (longlong *)FUN_1803bbbb0();
    ppuVar38 = (undefined **)(*plVar18 + 1);
    *plVar18 = (longlong)ppuVar38;
    lVar27 = plVar18[1];
    plVar18[1] = lVar27 + uVar29;
    lVar40 = plVar18[3] + (ulonglong)(999999 < uVar29);
    plVar18[3] = lVar40;
    dVar41 = (double)(plVar18[4] + (ulonglong)(4999999 < uVar29));
    plVar18[4] = (longlong)dVar41;
    dVar42 = (double)(plVar18[5] + (ulonglong)(15999999 < uVar29));
    plVar18[5] = (longlong)dVar42;
    uVar36 = plVar18[2];
    if ((ulonglong)plVar18[2] < uVar29) {
      plVar18[2] = uVar29;
      uVar36 = uVar29;
    }
    if ((auVar7 == (undefined1  [8])plVar18[7]) || (plVar18[7] <= (longlong)auVar7)) {
      local_9b8 = (double)((longlong)auVar7 - plVar18[6]) / auVar61._0_8_;
      dVar57 = (double)(lVar27 + uVar29);
      local_9b0 = auVar59._0_8_;
      dVar47 = auVar52._0_8_;
      if (local_9b0 < local_9b8) {
        local_9b0 = (dVar57 / dVar47) / local_9b8;
      }
      local_9c0.s = (_struct_19)(dVar57 / auVar61._0_8_);
      local_9c8 = (double)uVar36 / dVar47;
      local_9d0 = (undefined2 *)((dVar57 / (double)ppuVar38) / dVar47);
      local_9d8 = ppuVar38;
      local_9a8 = lVar40;
      local_9a0 = dVar41;
      local_998 = dVar42;
      FUN_1801af8a0(dVar57 / (double)ppuVar38,local_9d0,local_8b8._0_8_);
      plVar18[2] = 0;
      plVar18[1] = 0;
      *plVar18 = 0;
      plVar18[5] = 0;
      plVar18[4] = 0;
      plVar18[3] = 0;
      plVar18[6] = (longlong)auVar7;
      plVar18[7] = (longlong)auVar7 + 5000000000;
    }
    iVar15 = FUN_1805f68d0(&DAT_1808e6940);
    if (iVar15 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1805f6d44(5);
    }
    if (DAT_1808e698c == 0x7fffffff) {
      DAT_1808e698c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
      FUN_1805f6d44(6);
    }
    local_6d8[0] = 0;
    local_6d0 = 0;
    uStack_6c8 = 0;
    uStack_6c0 = 0;
    uStack_6b8 = 0;
    local_6b0 = (undefined1  [16])0x0;
    local_680 = 0;
    local_650 = '\0';
    auVar52 = ZEXT1664(auVar52._0_16_);
    auVar59 = ZEXT1664(auVar59._0_16_);
    auVar61 = ZEXT1664(auVar61._0_16_);
    local_6d4 = fVar49;
    FUN_1805449d0();
    if (local_650 != '\0') {
      FUN_180159650(local_668);
    }
    FUN_1801b3620(&uStack_6b8);
    FUN_1801b3410(&local_6d0);
    FUN_1805f68fc(&DAT_1808e6940);
    local_908.QuadPart._0_4_ = 0;
    local_908.QuadPart._4_4_ = 0;
    QueryPerformanceCounter(&local_908);
    auVar48._0_4_ = (float)(local_908.QuadPart - (longlong)_DAT_180bbadf8) / (float)_DAT_180bbadf0;
    auVar48._4_12_ = SUB1612(ZEXT816(0),4);
    auVar48 = vminss_avx(SUB6416(ZEXT464(0x3dcccccd),0),auVar48);
    DAT_180bbae00 = auVar48._0_4_;
    _DAT_180bbadf8 = local_908.s;
    auVar50 = ZEXT864(0);
    if (0.0 < DAT_180bbae00) {
      DAT_180bbae04 = (fVar49 / DAT_180bbae00) * 0.1 + DAT_180bbae04 * 0.9;
    }
    puVar31 = &DAT_180bbafa0;
    lVar27 = 3;
    do {
      FUN_180430420(puVar31 + -0x77);
      FUN_180430420(puVar31);
      puVar31 = puVar31 + 0x13;
      lVar27 = lVar27 + -1;
    } while (lVar27 != 0);
    local_888.LowPart = 0;
    local_888.HighPart = 0;
    pRStack_880 = (PSRWLOCK)0x0;
    lStack_878 = 0;
    uStack_870 = 0;
    auVar52 = ZEXT1664(auVar52._0_16_);
    auVar59 = ZEXT1664(auVar59._0_16_);
    auVar61 = ZEXT1664(auVar61._0_16_);
    auVar50 = ZEXT1664(auVar50._0_16_);
    FUN_180244f40();
    FUN_180197e40(uStack_870 & 0xff);
    FUN_1801c3040(uStack_870 & 0xff);
    auVar60 = auVar61._0_16_;
    auVar58 = auVar59._0_16_;
    auVar48 = auVar52._0_16_;
    auVar65 = auVar50._0_16_;
    if ((DAT_180ccaa20 == '\0') || (DAT_180c63119 == '\0')) {
      local_967 = 0;
    }
    else {
      local_967 = 1;
    }
    if ((((char)uStack_870 == '\0') || (DAT_180c6e529 == '\0')) || (local_967 != 0)) {
      local_8e8._0_4_ = 0;
      local_8e8._4_4_ = 0;
      pRStack_8e0 = (PSRWLOCK)0x0;
      lStack_8d8 = 0;
      uStack_8d0 = 0;
      local_8c8 = 0;
      uStack_8c0 = 0;
      auVar63._10_6_ = uStack_8be;
      auVar63._0_10_ = (unkuint10)0;
    }
    else {
      AcquireSRWLockShared((PSRWLOCK)&DAT_180bb88c0);
      local_8e8._0_4_ = _DAT_180bb8890;
      local_8e8._4_4_ = DAT_180bb8890_4;
      pRStack_8e0 = pRRam0000000180bb8898;
      lStack_8d8 = lRam0000000180bb88a0;
      uStack_8d0 = uRam0000000180bb88a8;
      auVar52 = ZEXT1664(auVar52._0_16_);
      auVar59 = ZEXT1664(auVar59._0_16_);
      auVar61 = ZEXT1664(auVar61._0_16_);
      auVar64 = ZEXT1664(CONCAT79(uRam0000000180bb88b9,CONCAT18(cRam0000000180bb88b8,_DAT_180bb88b0)
                                 ));
      auVar50 = ZEXT1664(auVar50._0_16_);
      ReleaseSRWLockShared((PSRWLOCK)&DAT_180bb88c0);
      auVar60 = auVar61._0_16_;
      auVar58 = auVar59._0_16_;
      auVar48 = auVar52._0_16_;
      auVar65 = auVar50._0_16_;
      auVar63 = auVar64._0_16_;
    }
    local_8b8._0_8_ = pRStack_8e0;
    if (((pRStack_8e0 != (PSRWLOCK)0x0) || (lStack_8d8 != 0)) && (DAT_180b8e2b0 != 0)) {
      local_900 = ZEXT816(0x18080c608);
      auVar52 = ZEXT1664(auVar48);
      auVar59 = ZEXT1664(auVar58);
      auVar61 = ZEXT1664(auVar60);
      auVar50 = ZEXT1664(auVar63);
      auVar64 = ZEXT1664(auVar65);
      FUN_18017bf40(local_900 + 8);
      FUN_1802da4e0(*DAT_180bb8958,&DAT_180bbabe8,*(undefined4 *)(*DAT_180bb8958 + 0x30));
      _local_8e8 = (undefined1  [16])0x0;
      pRVar22 = (PSRWLOCK)FUN_180113860(&DAT_180cc9a88);
      _Var6 = DAT_180cc9a80;
      local_8e8._0_4_ = DAT_180cc9a80.LowPart;
      local_8e8._4_4_ = DAT_180cc9a80.HighPart;
      if (pRVar22 == (PSRWLOCK)0x0) {
        pRVar37 = (PSRWLOCK)&DAT_00000008;
      }
      else {
        pRVar37 = pRVar22 + 1;
        LOCK();
        *(int *)&pRVar37->Ptr = *(int *)&pRVar37->Ptr + 1;
        UNLOCK();
      }
      LOCK();
      UNLOCK();
      bVar10 = (byte)DAT_180cc9a88;
      DAT_180cc9a88 = pRVar22;
      pRStack_8e0 = pRVar22;
      if ((bVar10 & 3) == 2) {
        FUN_1805fa36c(&DAT_180cc9a88);
      }
      if ((_Var6 == (_struct_19)0x0) ||
         (UVar23 = GetTickCount64(), 0x96 < UVar23 - *(longlong *)((longlong)_Var6 + 0x20))) {
        if (pRVar22 != (PSRWLOCK)0x0) {
          LOCK();
          iVar15 = *(int *)&pRVar37->Ptr;
          *(int *)&pRVar37->Ptr = *(int *)&pRVar37->Ptr + -1;
          UNLOCK();
          if (iVar15 == 1) {
            (**(code **)pRVar22->Ptr)(pRVar22);
            LOCK();
            piVar1 = (int *)((longlong)&pRVar22[1].Ptr + 4);
            iVar15 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar15 == 1) {
              (**(code **)((longlong)pRVar22->Ptr + 8))(pRVar22);
            }
          }
        }
      }
      else {
        FUN_180419b00();
        uVar4 = DAT_180b0c6c8;
        uVar3 = DAT_180b0c5c0;
        uVar12 = DAT_180b0c290;
        iVar15 = FUN_1805f68d0(&DAT_180b8e260);
        if (iVar15 != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_1805f6d44(5);
        }
        if (DAT_180b8e2ac == 0x7fffffff) {
          DAT_180b8e2ac = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
          FUN_1805f6d44(6);
        }
        local_948 = _DAT_180b8e220;
        uStack_940 = uRam0000000180b8e228;
        uStack_938 = uRam0000000180b8e230;
        uStack_930 = uRam0000000180b8e238;
        local_928 = _DAT_180b8e240;
        uStack_920 = uRam0000000180b8e248;
        uStack_918 = uRam0000000180b8e250;
        uStack_910 = uRam0000000180b8e258;
        auVar52 = ZEXT1664(auVar52._0_16_);
        auVar59 = ZEXT1664(auVar59._0_16_);
        auVar61 = ZEXT1664(auVar61._0_16_);
        auVar50 = ZEXT1664(auVar50._0_16_);
        auVar64 = ZEXT1664(auVar64._0_16_);
        FUN_1805f68fc(&DAT_180b8e260);
        local_9d0 = (undefined2 *)CONCAT71(local_9d0._1_7_,uVar12);
        local_9d8 = (undefined **)CONCAT71(local_9d8._1_7_,uVar4);
        FUN_1802e3940(_Var6,&DAT_180bbabe8,&local_948,uVar3);
        if (pRVar22 != (PSRWLOCK)0x0) {
          LOCK();
          pRVar37 = pRVar22 + 1;
          iVar15 = *(int *)&pRVar37->Ptr;
          *(int *)&pRVar37->Ptr = *(int *)&pRVar37->Ptr + -1;
          UNLOCK();
          if (iVar15 == 1) {
            (**(code **)pRVar22->Ptr)(pRVar22);
            LOCK();
            piVar1 = (int *)((longlong)&pRVar22[1].Ptr + 4);
            iVar15 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar15 == 1) {
              (**(code **)((longlong)pRVar22->Ptr + 8))(pRVar22);
            }
          }
        }
      }
      FUN_18017bf40(local_8e8);
      auVar7 = local_8e8;
      uVar32 = (longlong)local_8e8 - local_900._8_8_;
      plVar18 = (longlong *)FUN_1803bbd90();
      ppuVar38 = (undefined **)(*plVar18 + 1);
      *plVar18 = (longlong)ppuVar38;
      uVar29 = plVar18[1] + uVar32;
      plVar18[1] = uVar29;
      lVar27 = plVar18[3] + (ulonglong)(999999 < uVar32);
      plVar18[3] = lVar27;
      dVar41 = (double)(plVar18[4] + (ulonglong)(4999999 < uVar32));
      plVar18[4] = (longlong)dVar41;
      dVar42 = (double)(plVar18[5] + (ulonglong)(15999999 < uVar32));
      plVar18[5] = (longlong)dVar42;
      uVar36 = plVar18[2];
      if ((ulonglong)plVar18[2] < uVar32) {
        plVar18[2] = uVar32;
        uVar36 = uVar32;
      }
      if (((_struct_19)auVar7 == *(_struct_19 *)(plVar18 + 7)) ||
         ((longlong)*(_struct_19 *)(plVar18 + 7) <= (longlong)auVar7)) {
        local_9b8 = (double)((longlong)auVar7 - plVar18[6]) / auVar61._0_8_;
        local_9b0 = auVar59._0_8_;
        dVar57 = auVar52._0_8_;
        if (local_9b8 <= local_9b0) {
          if ((longlong)uVar29 < 0) {
            dVar47 = (double)uVar29;
          }
          else {
            dVar47 = (double)(longlong)uVar29;
          }
        }
        else if ((longlong)uVar29 < 0) {
          dVar47 = (double)uVar29;
          local_9b0 = (dVar47 / dVar57) / local_9b8;
        }
        else {
          dVar47 = (double)(longlong)uVar29;
          local_9b0 = (dVar47 / dVar57) / local_9b8;
        }
        local_9c0.s = (_struct_19)(dVar47 / auVar61._0_8_);
        local_9c8 = (double)uVar36 / dVar57;
        local_9d0 = (undefined2 *)((dVar47 / (double)ppuVar38) / dVar57);
        local_9d8 = ppuVar38;
        local_9a8 = lVar27;
        local_9a0 = dVar41;
        local_998 = dVar42;
        FUN_1801af8a0(dVar47 / (double)ppuVar38,local_9d0,local_900._0_8_);
        auVar8 = local_8e8;
        plVar18[2] = 0;
        plVar18[1] = 0;
        *plVar18 = 0;
        plVar18[5] = 0;
        plVar18[4] = 0;
        plVar18[3] = 0;
        local_8e8._0_4_ = auVar7._0_4_;
        local_8e8._4_4_ = auVar7._4_4_;
        ((_struct_19 *)(plVar18 + 6))->LowPart = local_8e8._0_4_;
        ((_struct_19 *)(plVar18 + 6))->HighPart = local_8e8._4_4_;
        plVar18[7] = (longlong)auVar7 + 5000000000;
        local_8e8 = auVar8;
      }
      local_900 = ZEXT816(0x18080c668);
      FUN_18017bf40(local_900 + 8);
      FUN_180246860(&DAT_180b8e420,&DAT_180bbabe8);
      FUN_18017bf40(local_8e8);
      auVar7 = local_8e8;
      uVar32 = (longlong)local_8e8 - local_900._8_8_;
      plVar18 = (longlong *)FUN_1803bbf70();
      ppuVar38 = (undefined **)(*plVar18 + 1);
      *plVar18 = (longlong)ppuVar38;
      uVar29 = plVar18[1] + uVar32;
      plVar18[1] = uVar29;
      lVar27 = plVar18[3] + (ulonglong)(999999 < uVar32);
      plVar18[3] = lVar27;
      dVar41 = (double)(plVar18[4] + (ulonglong)(4999999 < uVar32));
      plVar18[4] = (longlong)dVar41;
      dVar42 = (double)(plVar18[5] + (ulonglong)(15999999 < uVar32));
      plVar18[5] = (longlong)dVar42;
      uVar36 = plVar18[2];
      if ((ulonglong)plVar18[2] < uVar32) {
        plVar18[2] = uVar32;
        uVar36 = uVar32;
      }
      if (((_struct_19)auVar7 == *(_struct_19 *)(plVar18 + 7)) ||
         ((longlong)*(_struct_19 *)(plVar18 + 7) <= (longlong)auVar7)) {
        local_9b8 = (double)((longlong)auVar7 - plVar18[6]) / auVar61._0_8_;
        local_9b0 = auVar59._0_8_;
        dVar57 = auVar52._0_8_;
        if (local_9b8 <= local_9b0) {
          if ((longlong)uVar29 < 0) {
            dVar47 = (double)uVar29;
          }
          else {
            dVar47 = (double)(longlong)uVar29;
          }
        }
        else if ((longlong)uVar29 < 0) {
          dVar47 = (double)uVar29;
          local_9b0 = (dVar47 / dVar57) / local_9b8;
        }
        else {
          dVar47 = (double)(longlong)uVar29;
          local_9b0 = (dVar47 / dVar57) / local_9b8;
        }
        local_9c0.s = (_struct_19)(dVar47 / auVar61._0_8_);
        local_9c8 = (double)uVar36 / dVar57;
        local_9d0 = (undefined2 *)((dVar47 / (double)ppuVar38) / dVar57);
        local_9d8 = ppuVar38;
        local_9a8 = lVar27;
        local_9a0 = dVar41;
        local_998 = dVar42;
        FUN_1801af8a0(dVar47 / (double)ppuVar38,local_9d0,local_900._0_8_);
        auVar8 = local_8e8;
        plVar18[2] = 0;
        plVar18[1] = 0;
        *plVar18 = 0;
        plVar18[5] = 0;
        plVar18[4] = 0;
        plVar18[3] = 0;
        local_8e8._0_4_ = auVar7._0_4_;
        local_8e8._4_4_ = auVar7._4_4_;
        ((_struct_19 *)(plVar18 + 6))->LowPart = local_8e8._0_4_;
        ((_struct_19 *)(plVar18 + 6))->HighPart = local_8e8._4_4_;
        plVar18[7] = (longlong)auVar7 + 5000000000;
        local_8e8 = auVar8;
      }
      local_900 = ZEXT816(0x18080c648);
      uVar45 = FUN_18017bf40(local_900 + 8);
      FUN_18034c060(uVar45,&DAT_180bbabe8);
      FUN_18017bf40(local_8e8);
      auVar7 = local_8e8;
      uVar32 = (longlong)local_8e8 - local_900._8_8_;
      plVar18 = (longlong *)FUN_1803bc150();
      ppuVar38 = (undefined **)(*plVar18 + 1);
      *plVar18 = (longlong)ppuVar38;
      uVar29 = plVar18[1] + uVar32;
      plVar18[1] = uVar29;
      lVar27 = plVar18[3] + (ulonglong)(999999 < uVar32);
      plVar18[3] = lVar27;
      dVar41 = (double)(plVar18[4] + (ulonglong)(4999999 < uVar32));
      plVar18[4] = (longlong)dVar41;
      dVar42 = (double)(plVar18[5] + (ulonglong)(15999999 < uVar32));
      plVar18[5] = (longlong)dVar42;
      uVar36 = plVar18[2];
      if ((ulonglong)plVar18[2] < uVar32) {
        plVar18[2] = uVar32;
        uVar36 = uVar32;
      }
      if (((_struct_19)auVar7 == *(_struct_19 *)(plVar18 + 7)) ||
         ((longlong)*(_struct_19 *)(plVar18 + 7) <= (longlong)auVar7)) {
        local_9b8 = (double)((longlong)auVar7 - plVar18[6]) / auVar61._0_8_;
        local_9b0 = auVar59._0_8_;
        dVar57 = auVar52._0_8_;
        if (local_9b8 <= local_9b0) {
          if ((longlong)uVar29 < 0) {
            dVar47 = (double)uVar29;
          }
          else {
            dVar47 = (double)(longlong)uVar29;
          }
        }
        else if ((longlong)uVar29 < 0) {
          dVar47 = (double)uVar29;
          local_9b0 = (dVar47 / dVar57) / local_9b8;
        }
        else {
          dVar47 = (double)(longlong)uVar29;
          local_9b0 = (dVar47 / dVar57) / local_9b8;
        }
        local_9c0.s = (_struct_19)(dVar47 / auVar61._0_8_);
        local_9c8 = (double)uVar36 / dVar57;
        local_9d0 = (undefined2 *)((dVar47 / (double)ppuVar38) / dVar57);
        local_9d8 = ppuVar38;
        local_9a8 = lVar27;
        local_9a0 = dVar41;
        local_998 = dVar42;
        FUN_1801af8a0(dVar47 / (double)ppuVar38,local_9d0,local_900._0_8_);
        auVar8 = local_8e8;
        plVar18[2] = 0;
        plVar18[1] = 0;
        *plVar18 = 0;
        plVar18[5] = 0;
        plVar18[4] = 0;
        plVar18[3] = 0;
        local_8e8._0_4_ = auVar7._0_4_;
        local_8e8._4_4_ = auVar7._4_4_;
        ((_struct_19 *)(plVar18 + 6))->LowPart = local_8e8._0_4_;
        ((_struct_19 *)(plVar18 + 6))->HighPart = local_8e8._4_4_;
        plVar18[7] = (longlong)auVar7 + 5000000000;
        local_8e8 = auVar8;
      }
      local_900 = ZEXT816(0x18080c8f0);
      uVar45 = FUN_18017bf40(local_900 + 8);
      FUN_18032fb00(uVar45,&DAT_180bbabe8);
      FUN_18017bf40(local_8e8);
      auVar7 = local_8e8;
      uVar32 = (longlong)local_8e8 - local_900._8_8_;
      plVar18 = (longlong *)FUN_1803bc330();
      ppuVar38 = (undefined **)(*plVar18 + 1);
      *plVar18 = (longlong)ppuVar38;
      uVar29 = plVar18[1] + uVar32;
      plVar18[1] = uVar29;
      lVar27 = plVar18[3] + (ulonglong)(999999 < uVar32);
      plVar18[3] = lVar27;
      dVar41 = (double)(plVar18[4] + (ulonglong)(4999999 < uVar32));
      plVar18[4] = (longlong)dVar41;
      dVar42 = (double)(plVar18[5] + (ulonglong)(15999999 < uVar32));
      plVar18[5] = (longlong)dVar42;
      uVar36 = plVar18[2];
      if ((ulonglong)plVar18[2] < uVar32) {
        plVar18[2] = uVar32;
        uVar36 = uVar32;
      }
      if (((_struct_19)auVar7 == *(_struct_19 *)(plVar18 + 7)) ||
         ((longlong)*(_struct_19 *)(plVar18 + 7) <= (longlong)auVar7)) {
        local_9b8 = (double)((longlong)auVar7 - plVar18[6]) / auVar61._0_8_;
        local_9b0 = auVar59._0_8_;
        dVar57 = auVar52._0_8_;
        if (local_9b8 <= local_9b0) {
          if ((longlong)uVar29 < 0) {
            dVar47 = (double)uVar29;
          }
          else {
            dVar47 = (double)(longlong)uVar29;
          }
        }
        else if ((longlong)uVar29 < 0) {
          dVar47 = (double)uVar29;
          local_9b0 = (dVar47 / dVar57) / local_9b8;
        }
        else {
          dVar47 = (double)(longlong)uVar29;
          local_9b0 = (dVar47 / dVar57) / local_9b8;
        }
        local_9c0.s = (_struct_19)(dVar47 / auVar61._0_8_);
        local_9c8 = (double)uVar36 / dVar57;
        local_9d0 = (undefined2 *)((dVar47 / (double)ppuVar38) / dVar57);
        local_9d8 = ppuVar38;
        local_9a8 = lVar27;
        local_9a0 = dVar41;
        local_998 = dVar42;
        FUN_1801af8a0(dVar47 / (double)ppuVar38,local_9d0,local_900._0_8_);
        auVar8 = local_8e8;
        plVar18[2] = 0;
        plVar18[1] = 0;
        *plVar18 = 0;
        plVar18[5] = 0;
        plVar18[4] = 0;
        plVar18[3] = 0;
        local_8e8._0_4_ = auVar7._0_4_;
        local_8e8._4_4_ = auVar7._4_4_;
        ((_struct_19 *)(plVar18 + 6))->LowPart = local_8e8._0_4_;
        ((_struct_19 *)(plVar18 + 6))->HighPart = local_8e8._4_4_;
        plVar18[7] = (longlong)auVar7 + 5000000000;
        local_8e8 = auVar8;
      }
      local_900 = ZEXT816(0x18080c8d0);
      FUN_18017bf40(local_900 + 8);
      if (((DAT_180cc8960 != '\0') && (DAT_180cc89c8 != '\0')) && (DAT_180b8fe84 != '\0')) {
        auVar51 = ZEXT464(0x475ead00);
        if (DAT_180b8e2b0 == 0) {
          auVar55 = ZEXT1664(auVar51._0_16_);
          auVar56 = ZEXT1664(auVar51._0_16_);
        }
        else {
          iVar15 = FUN_1805f68d0(&DAT_180b8e260);
          if (iVar15 != 0) goto LAB_1803b7052;
          if (DAT_180b8e2ac == 0x7fffffff) goto LAB_1803b703d;
          local_948 = _DAT_180b8e220;
          uStack_940 = uRam0000000180b8e228;
          uStack_938 = uRam0000000180b8e230;
          uStack_930 = uRam0000000180b8e238;
          local_928 = _DAT_180b8e240;
          uStack_920 = uRam0000000180b8e248;
          uStack_918 = uRam0000000180b8e250;
          uStack_910 = uRam0000000180b8e258;
          auVar51 = ZEXT1664(auVar51._0_16_);
          auVar52 = ZEXT1664(auVar52._0_16_);
          auVar59 = ZEXT1664(auVar59._0_16_);
          auVar61 = ZEXT1664(auVar61._0_16_);
          auVar50 = ZEXT1664(auVar50._0_16_);
          auVar64 = ZEXT1664(auVar64._0_16_);
          uVar45 = FUN_1805f68fc(&DAT_180b8e260);
          FUN_180419d90(uVar45,&local_908,&DAT_180b8feb0,&local_948);
          auVar56 = ZEXT464((uint)local_908.s.HighPart);
          auVar55 = ZEXT464(local_908.s.LowPart);
        }
        if (DAT_180b8e2b0 == 0) {
          auVar53 = ZEXT1664(auVar51._0_16_);
          auVar54 = ZEXT1664(auVar51._0_16_);
        }
        else {
          iVar15 = FUN_1805f68d0(&DAT_180b8e260);
          if (iVar15 != 0) {
LAB_1803b7052:
                    /* WARNING: Subroutine does not return */
            FUN_1805f6d44(5);
          }
          if (DAT_180b8e2ac == 0x7fffffff) {
LAB_1803b703d:
            DAT_180b8e2ac = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
            FUN_1805f6d44(6);
          }
          local_948 = _DAT_180b8e220;
          uStack_940 = uRam0000000180b8e228;
          uStack_938 = uRam0000000180b8e230;
          uStack_930 = uRam0000000180b8e238;
          local_928 = _DAT_180b8e240;
          uStack_920 = uRam0000000180b8e248;
          uStack_918 = uRam0000000180b8e250;
          uStack_910 = uRam0000000180b8e258;
          auVar51 = ZEXT1664(auVar51._0_16_);
          auVar52 = ZEXT1664(auVar52._0_16_);
          auVar55 = ZEXT1664(auVar55._0_16_);
          auVar56 = ZEXT1664(auVar56._0_16_);
          auVar59 = ZEXT1664(auVar59._0_16_);
          auVar61 = ZEXT1664(auVar61._0_16_);
          auVar50 = ZEXT1664(auVar50._0_16_);
          auVar64 = ZEXT1664(auVar64._0_16_);
          uVar45 = FUN_1805f68fc(&DAT_180b8e260);
          FUN_180419d90(uVar45,&local_908,&DAT_180b8febc,&local_948);
          auVar54 = ZEXT464((uint)local_908.s.HighPart);
          auVar53 = ZEXT464(local_908.s.LowPart);
        }
        fVar49 = auVar51._0_4_;
        if (((auVar55._0_4_ != fVar49) && (auVar56._0_4_ != fVar49)) &&
           ((auVar53._0_4_ != fVar49 && (auVar54._0_4_ != fVar49)))) {
          local_964._0_4_ = 0xc8000000;
          local_9c8._0_4_ = 0x40800000;
          local_9d0._0_4_ = 0xc8000000;
          local_9d8._0_4_ = auVar54._0_4_;
          FUN_180433450(&DAT_180bbabe8,auVar55._0_8_,auVar56._0_8_,auVar53._0_8_);
          local_964._0_4_ = 0xffffffff;
          local_9c8 = (double)CONCAT44(local_9c8._4_4_,0x3fc00000);
          local_9d0 = (undefined2 *)CONCAT44(local_9d0._4_4_,0xffffffff);
          local_9d8 = (undefined **)CONCAT44(local_9d8._4_4_,auVar54._0_4_);
          FUN_180433450(&DAT_180bbabe8,auVar55._0_8_,auVar56._0_8_,auVar53._0_8_);
        }
      }
      FUN_18017bf40(local_8e8);
      auVar7 = local_8e8;
      uVar32 = (longlong)local_8e8 - local_900._8_8_;
      plVar18 = (longlong *)FUN_1803bc510();
      ppuVar38 = (undefined **)(*plVar18 + 1);
      *plVar18 = (longlong)ppuVar38;
      uVar29 = plVar18[1] + uVar32;
      plVar18[1] = uVar29;
      lVar27 = plVar18[3] + (ulonglong)(999999 < uVar32);
      plVar18[3] = lVar27;
      dVar41 = (double)(plVar18[4] + (ulonglong)(4999999 < uVar32));
      plVar18[4] = (longlong)dVar41;
      dVar42 = (double)(plVar18[5] + (ulonglong)(15999999 < uVar32));
      plVar18[5] = (longlong)dVar42;
      uVar36 = plVar18[2];
      if ((ulonglong)plVar18[2] < uVar32) {
        plVar18[2] = uVar32;
        uVar36 = uVar32;
      }
      if (((_struct_19)auVar7 == *(_struct_19 *)(plVar18 + 7)) ||
         ((longlong)*(_struct_19 *)(plVar18 + 7) <= (longlong)auVar7)) {
        local_9b8 = (double)((longlong)auVar7 - plVar18[6]) / auVar61._0_8_;
        local_9b0 = auVar59._0_8_;
        dVar57 = auVar52._0_8_;
        if (local_9b8 <= local_9b0) {
          if ((longlong)uVar29 < 0) {
            dVar47 = (double)uVar29;
          }
          else {
            dVar47 = (double)(longlong)uVar29;
          }
        }
        else if ((longlong)uVar29 < 0) {
          dVar47 = (double)uVar29;
          local_9b0 = (dVar47 / dVar57) / local_9b8;
        }
        else {
          dVar47 = (double)(longlong)uVar29;
          local_9b0 = (dVar47 / dVar57) / local_9b8;
        }
        local_9c0.s = (_struct_19)(dVar47 / auVar61._0_8_);
        local_9c8 = (double)uVar36 / dVar57;
        local_9d0 = (undefined2 *)((dVar47 / (double)ppuVar38) / dVar57);
        local_9d8 = ppuVar38;
        local_9a8 = lVar27;
        local_9a0 = dVar41;
        local_998 = dVar42;
        FUN_1801af8a0(dVar47 / (double)ppuVar38,local_9d0,local_900._0_8_);
        auVar8 = local_8e8;
        plVar18[2] = 0;
        plVar18[1] = 0;
        *plVar18 = 0;
        plVar18[5] = 0;
        plVar18[4] = 0;
        plVar18[3] = 0;
        local_8e8._0_4_ = auVar7._0_4_;
        local_8e8._4_4_ = auVar7._4_4_;
        ((_struct_19 *)(plVar18 + 6))->LowPart = local_8e8._0_4_;
        ((_struct_19 *)(plVar18 + 6))->HighPart = local_8e8._4_4_;
        plVar18[7] = (longlong)auVar7 + 5000000000;
        local_8e8 = auVar8;
      }
      local_900 = ZEXT816(0x18080c930);
      uVar45 = FUN_18017bf40(local_900 + 8);
      FUN_1802802f0(uVar45,&DAT_180bbabe8);
      FUN_18017bf40(local_8e8);
      auVar7 = local_8e8;
      uVar32 = (longlong)local_8e8 - local_900._8_8_;
      plVar18 = (longlong *)FUN_1803bc6f0();
      ppuVar38 = (undefined **)(*plVar18 + 1);
      *plVar18 = (longlong)ppuVar38;
      uVar29 = plVar18[1] + uVar32;
      plVar18[1] = uVar29;
      lVar27 = plVar18[3] + (ulonglong)(999999 < uVar32);
      plVar18[3] = lVar27;
      dVar41 = (double)(plVar18[4] + (ulonglong)(4999999 < uVar32));
      plVar18[4] = (longlong)dVar41;
      dVar42 = (double)(plVar18[5] + (ulonglong)(15999999 < uVar32));
      plVar18[5] = (longlong)dVar42;
      uVar36 = plVar18[2];
      if ((ulonglong)plVar18[2] < uVar32) {
        plVar18[2] = uVar32;
        uVar36 = uVar32;
      }
      if (((_struct_19)auVar7 == *(_struct_19 *)(plVar18 + 7)) ||
         ((longlong)*(_struct_19 *)(plVar18 + 7) <= (longlong)auVar7)) {
        local_9b8 = (double)((longlong)auVar7 - plVar18[6]) / auVar61._0_8_;
        local_9b0 = auVar59._0_8_;
        dVar57 = auVar52._0_8_;
        if (local_9b8 <= local_9b0) {
          if ((longlong)uVar29 < 0) {
            dVar47 = (double)uVar29;
          }
          else {
            dVar47 = (double)(longlong)uVar29;
          }
        }
        else if ((longlong)uVar29 < 0) {
          dVar47 = (double)uVar29;
          local_9b0 = (dVar47 / dVar57) / local_9b8;
        }
        else {
          dVar47 = (double)(longlong)uVar29;
          local_9b0 = (dVar47 / dVar57) / local_9b8;
        }
        local_9c0.s = (_struct_19)(dVar47 / auVar61._0_8_);
        local_9c8 = (double)uVar36 / dVar57;
        local_9d0 = (undefined2 *)((dVar47 / (double)ppuVar38) / dVar57);
        local_9d8 = ppuVar38;
        local_9a8 = lVar27;
        local_9a0 = dVar41;
        local_998 = dVar42;
        FUN_1801af8a0(dVar47 / (double)ppuVar38,local_9d0,local_900._0_8_);
        auVar8 = local_8e8;
        plVar18[2] = 0;
        plVar18[1] = 0;
        *plVar18 = 0;
        plVar18[5] = 0;
        plVar18[4] = 0;
        plVar18[3] = 0;
        local_8e8._0_4_ = auVar7._0_4_;
        local_8e8._4_4_ = auVar7._4_4_;
        ((_struct_19 *)(plVar18 + 6))->LowPart = local_8e8._0_4_;
        ((_struct_19 *)(plVar18 + 6))->HighPart = local_8e8._4_4_;
        plVar18[7] = (longlong)auVar7 + 5000000000;
        local_8e8 = auVar8;
      }
      local_900 = ZEXT816(0x18080c910);
      uVar45 = FUN_18017bf40(local_900 + 8);
      FUN_1802b18b0(uVar45,&DAT_180bbabe8,&DAT_180bbac80);
      FUN_18017bf40(local_8e8);
      auVar7 = local_8e8;
      uVar32 = (longlong)local_8e8 - local_900._8_8_;
      plVar18 = (longlong *)FUN_1803bc8d0();
      Var62 = auVar50._0_9_;
      ppuVar38 = (undefined **)(*plVar18 + 1);
      *plVar18 = (longlong)ppuVar38;
      uVar29 = plVar18[1] + uVar32;
      plVar18[1] = uVar29;
      lVar27 = plVar18[3] + (ulonglong)(999999 < uVar32);
      plVar18[3] = lVar27;
      dVar41 = (double)(plVar18[4] + (ulonglong)(4999999 < uVar32));
      plVar18[4] = (longlong)dVar41;
      dVar42 = (double)(plVar18[5] + (ulonglong)(15999999 < uVar32));
      plVar18[5] = (longlong)dVar42;
      uVar36 = plVar18[2];
      if ((ulonglong)plVar18[2] < uVar32) {
        plVar18[2] = uVar32;
        uVar36 = uVar32;
      }
      if (((_struct_19)auVar7 == *(_struct_19 *)(plVar18 + 7)) ||
         ((longlong)*(_struct_19 *)(plVar18 + 7) <= (longlong)auVar7)) {
        local_9b8 = (double)((longlong)auVar7 - plVar18[6]) / auVar61._0_8_;
        local_9b0 = auVar59._0_8_;
        dVar57 = auVar52._0_8_;
        if (local_9b8 <= local_9b0) {
          if ((longlong)uVar29 < 0) {
            dVar47 = (double)uVar29;
          }
          else {
            dVar47 = (double)(longlong)uVar29;
          }
        }
        else if ((longlong)uVar29 < 0) {
          dVar47 = (double)uVar29;
          local_9b0 = (dVar47 / dVar57) / local_9b8;
        }
        else {
          dVar47 = (double)(longlong)uVar29;
          local_9b0 = (dVar47 / dVar57) / local_9b8;
        }
        local_9c0.s = (_struct_19)(dVar47 / auVar61._0_8_);
        local_9c8 = (double)uVar36 / dVar57;
        local_9d0 = (undefined2 *)((dVar47 / (double)ppuVar38) / dVar57);
        local_9d8 = ppuVar38;
        local_9a8 = lVar27;
        local_9a0 = dVar41;
        local_998 = dVar42;
        FUN_1801af8a0(dVar47 / (double)ppuVar38,local_9d0,local_900._0_8_);
        auVar8 = local_8e8;
        Var62 = auVar50._0_9_;
        plVar18[2] = 0;
        plVar18[1] = 0;
        *plVar18 = 0;
        plVar18[5] = 0;
        plVar18[4] = 0;
        plVar18[3] = 0;
        local_8e8._0_4_ = auVar7._0_4_;
        local_8e8._4_4_ = auVar7._4_4_;
        ((_struct_19 *)(plVar18 + 6))->LowPart = local_8e8._0_4_;
        ((_struct_19 *)(plVar18 + 6))->HighPart = local_8e8._4_4_;
        plVar18[7] = (longlong)auVar7 + 5000000000;
        local_8e8 = auVar8;
      }
      cVar9 = DAT_180cae828;
      if (((DAT_180b0d2d0 == '\0') || (DAT_180b0cc88 == '\0')) || (DAT_180b8f9e8 != '\0')) {
        local_968 = 0;
      }
      else {
        local_968 = 1;
      }
      bVar43 = DAT_180cad2e0 != 0;
      local_966 = DAT_180b0cde0;
      if (((((char)((unkuint9)Var62 >> 0x40) == '\0') || ((int)Var62 < 2)) ||
          (DAT_180bb88c9 != '\0')) ||
         (((local_968 == 0 && (bVar43)) && ((DAT_180cae828 == '\0' && (DAT_180b0cde0 == 0)))))) {
        bVar44 = false;
      }
      else {
        local_900 = ZEXT816(0x18080c868);
        FUN_18017bf40(local_900 + 8);
        if ((DAT_180cd42e0 & 1) == 0) {
          DAT_180cd42e0 = DAT_180cd42e0 | 1;
          atexit(FUN_180662f20);
        }
        lVar27 = DAT_180c6e8e8;
        lVar40 = FUN_18017ea70();
        *(int *)(lVar40 + 4) = *(int *)(lVar40 + 4) + 1;
        if (lVar27 == 0) {
          bVar44 = false;
          LVar33.QuadPart = (LONGLONG)local_8e8;
        }
        else {
          local_908.QuadPart._0_4_ = 0;
          local_908.QuadPart._4_4_ = 0;
          cVar11 = FUN_1804514f0(&local_908,lVar27,8);
          if (cVar11 == '\0') {
            bVar44 = false;
            LVar33.s = (_struct_19)local_8e8;
          }
          else {
            bVar44 = true;
            LVar33.s = local_908.s;
          }
        }
        lVar27 = FUN_18017ea70();
        if (*(int *)(lVar27 + 4) != 0) {
          *(int *)(lVar27 + 4) = *(int *)(lVar27 + 4) + -1;
        }
        uVar45 = extraout_XMM0_Qa_00;
        if ((bVar44) && (LVar33.s != (_struct_19)0x0)) {
          lVar27 = FUN_18017ea70();
          *(int *)(lVar27 + 4) = *(int *)(lVar27 + 4) + 1;
          if (LVar33.QuadPart + 8 != 0) {
            local_908.QuadPart._0_4_ = 0;
            local_908.QuadPart._4_4_ = 0;
            FUN_1804514f0(&local_908,LVar33.QuadPart + 8,8);
          }
          lVar27 = FUN_18017ea70();
          uVar45 = extraout_XMM0_Qa_01;
          if (*(int *)(lVar27 + 4) != 0) {
            *(int *)(lVar27 + 4) = *(int *)(lVar27 + 4) + -1;
          }
        }
        if (DAT_180bb83c8 == 0) {
          local_9d8 = (undefined **)0x0;
        }
        else {
          local_9d8 = (undefined **)FUN_180453ce0();
          uVar45 = extraout_XMM0_Qa_02;
        }
        local_9d0 = (undefined2 *)CONCAT71(local_9d0._1_7_,local_966);
        FUN_1803b73b0(uVar45,local_964);
        pHVar5 = DAT_180c6e520;
        uVar12 = local_964[1];
        if ((local_964[1] == '\0') && (pHVar24 = GetForegroundWindow(), pHVar24 == pHVar5)) {
          UVar23 = GetTickCount64();
          if ((DAT_180b0dfc0 == 0) || ((UVar23 < DAT_180b0dfc0 || (100 < UVar23 - DAT_180b0dfc0))))
          {
            bVar44 = false;
          }
          else {
            bVar44 = true;
          }
          SVar14 = GetAsyncKeyState(9);
          if (-1 < SVar14) goto LAB_1803b55bc;
          bVar25 = true;
        }
        else {
          bVar44 = false;
LAB_1803b55bc:
          bVar25 = false;
        }
        if ((bVar44) || (cVar11 = '\0', bVar25)) {
          cVar11 = '\x01';
        }
        cVar2 = local_964[0];
        if (local_964[1] == '\0') {
          cVar2 = cVar11;
        }
        bVar44 = cVar2 == '\0';
        *(ULONGLONG *)((longlong)auVar20 + 0x28) =
             *(ULONGLONG *)((longlong)auVar20 + 0x28) + (ulonglong)(uVar12 == '\0');
        if (cVar2 == '\0') {
          *(ULONGLONG *)((longlong)auVar20 + 0x10) = *(ULONGLONG *)((longlong)auVar20 + 0x10) + 1;
        }
        else if ((uVar12 == '\0') || (local_964[0] == '\0')) {
          *(ULONGLONG *)((longlong)auVar20 + 0x20) = *(ULONGLONG *)((longlong)auVar20 + 0x20) + 1;
        }
        else {
          *(ULONGLONG *)((longlong)auVar20 + 0x18) = *(ULONGLONG *)((longlong)auVar20 + 0x18) + 1;
        }
        FUN_18017bf40(local_8e8);
        auVar20 = local_8e8;
        uVar32 = (longlong)local_8e8 - local_900._8_8_;
        plVar18 = (longlong *)FUN_1803bcab0();
        ppuVar38 = (undefined **)(*plVar18 + 1);
        *plVar18 = (longlong)ppuVar38;
        uVar29 = plVar18[1] + uVar32;
        plVar18[1] = uVar29;
        lVar27 = plVar18[3] + (ulonglong)(999999 < uVar32);
        plVar18[3] = lVar27;
        dVar41 = (double)(plVar18[4] + (ulonglong)(4999999 < uVar32));
        plVar18[4] = (longlong)dVar41;
        dVar42 = (double)(plVar18[5] + (ulonglong)(15999999 < uVar32));
        plVar18[5] = (longlong)dVar42;
        uVar36 = plVar18[2];
        if ((ulonglong)plVar18[2] < uVar32) {
          plVar18[2] = uVar32;
          uVar36 = uVar32;
        }
        if (((_struct_19)auVar20 == *(_struct_19 *)(plVar18 + 7)) ||
           ((longlong)*(_struct_19 *)(plVar18 + 7) <= (longlong)auVar20)) {
          local_9b8 = (double)((longlong)auVar20 - plVar18[6]) / auVar61._0_8_;
          local_9b0 = auVar59._0_8_;
          dVar57 = auVar52._0_8_;
          if (local_9b8 <= local_9b0) {
            if ((longlong)uVar29 < 0) {
              dVar47 = (double)uVar29;
            }
            else {
              dVar47 = (double)(longlong)uVar29;
            }
          }
          else if ((longlong)uVar29 < 0) {
            dVar47 = (double)uVar29;
            local_9b0 = (dVar47 / dVar57) / local_9b8;
          }
          else {
            dVar47 = (double)(longlong)uVar29;
            local_9b0 = (dVar47 / dVar57) / local_9b8;
          }
          local_9c0.s = (_struct_19)(dVar47 / auVar61._0_8_);
          local_9c8 = (double)uVar36 / dVar57;
          local_9d0 = (undefined2 *)((dVar47 / (double)ppuVar38) / dVar57);
          local_9d8 = ppuVar38;
          local_9a8 = lVar27;
          local_9a0 = dVar41;
          local_998 = dVar42;
          FUN_1801af8a0(dVar47 / (double)ppuVar38,local_9d0,local_900._0_8_);
          auVar7 = local_8e8;
          plVar18[2] = 0;
          plVar18[1] = 0;
          *plVar18 = 0;
          plVar18[5] = 0;
          plVar18[4] = 0;
          plVar18[3] = 0;
          local_8e8._0_4_ = auVar20._0_4_;
          local_8e8._4_4_ = auVar20._4_4_;
          ((_struct_19 *)(plVar18 + 6))->LowPart = local_8e8._0_4_;
          ((_struct_19 *)(plVar18 + 6))->HighPart = local_8e8._4_4_;
          plVar18[7] = (longlong)auVar20 + 5000000000;
          local_8e8 = auVar7;
        }
      }
      local_900 = ZEXT816(0x18080c848);
      FUN_18017bf40(local_900 + 8);
      if ((!bVar44) || (cVar9 == '\0')) {
        uVar45 = 0;
      }
      else {
        uVar45 = 1;
      }
      FUN_18029d680(&DAT_180cc98a0,&DAT_180bbabe8,uVar45);
      FUN_18017bf40(local_8e8);
      auVar20 = local_8e8;
      uVar32 = (longlong)local_8e8 - local_900._8_8_;
      plVar18 = (longlong *)FUN_1803bcc90();
      ppuVar38 = (undefined **)(*plVar18 + 1);
      *plVar18 = (longlong)ppuVar38;
      uVar29 = plVar18[1] + uVar32;
      plVar18[1] = uVar29;
      lVar27 = plVar18[3] + (ulonglong)(999999 < uVar32);
      plVar18[3] = lVar27;
      dVar41 = (double)(plVar18[4] + (ulonglong)(4999999 < uVar32));
      plVar18[4] = (longlong)dVar41;
      dVar42 = (double)(plVar18[5] + (ulonglong)(15999999 < uVar32));
      plVar18[5] = (longlong)dVar42;
      uVar36 = plVar18[2];
      if ((ulonglong)plVar18[2] < uVar32) {
        plVar18[2] = uVar32;
        uVar36 = uVar32;
      }
      if (((_struct_19)auVar20 == *(_struct_19 *)(plVar18 + 7)) ||
         ((longlong)*(_struct_19 *)(plVar18 + 7) <= (longlong)auVar20)) {
        local_9b8 = (double)((longlong)auVar20 - plVar18[6]) / auVar61._0_8_;
        local_9b0 = auVar59._0_8_;
        dVar57 = auVar52._0_8_;
        if (local_9b8 <= local_9b0) {
          if ((longlong)uVar29 < 0) {
            dVar47 = (double)uVar29;
          }
          else {
            dVar47 = (double)(longlong)uVar29;
          }
        }
        else if ((longlong)uVar29 < 0) {
          dVar47 = (double)uVar29;
          local_9b0 = (dVar47 / dVar57) / local_9b8;
        }
        else {
          dVar47 = (double)(longlong)uVar29;
          local_9b0 = (dVar47 / dVar57) / local_9b8;
        }
        local_9c0.s = (_struct_19)(dVar47 / auVar61._0_8_);
        local_9c8 = (double)uVar36 / dVar57;
        local_9d0 = (undefined2 *)((dVar47 / (double)ppuVar38) / dVar57);
        local_9d8 = ppuVar38;
        local_9a8 = lVar27;
        local_9a0 = dVar41;
        local_998 = dVar42;
        FUN_1801af8a0(dVar47 / (double)ppuVar38,local_9d0,local_900._0_8_);
        auVar7 = local_8e8;
        plVar18[2] = 0;
        plVar18[1] = 0;
        *plVar18 = 0;
        plVar18[5] = 0;
        plVar18[4] = 0;
        plVar18[3] = 0;
        local_8e8._0_4_ = auVar20._0_4_;
        local_8e8._4_4_ = auVar20._4_4_;
        ((_struct_19 *)(plVar18 + 6))->LowPart = local_8e8._0_4_;
        ((_struct_19 *)(plVar18 + 6))->HighPart = local_8e8._4_4_;
        plVar18[7] = (longlong)auVar20 + 5000000000;
        local_8e8 = auVar7;
      }
      local_900 = ZEXT816(0x18080c8a8);
      uVar45 = FUN_18017bf40(local_900 + 8);
      FUN_1802ee560(uVar45,&DAT_180bbabe8);
      FUN_18017bf40(local_8e8);
      auVar20 = local_8e8;
      uVar32 = (longlong)local_8e8 - local_900._8_8_;
      plVar18 = (longlong *)FUN_1803bce70();
      ppuVar38 = (undefined **)(*plVar18 + 1);
      *plVar18 = (longlong)ppuVar38;
      uVar29 = plVar18[1] + uVar32;
      plVar18[1] = uVar29;
      lVar27 = plVar18[3] + (ulonglong)(999999 < uVar32);
      plVar18[3] = lVar27;
      dVar41 = (double)(plVar18[4] + (ulonglong)(4999999 < uVar32));
      plVar18[4] = (longlong)dVar41;
      dVar42 = (double)(plVar18[5] + (ulonglong)(15999999 < uVar32));
      plVar18[5] = (longlong)dVar42;
      uVar36 = plVar18[2];
      if ((ulonglong)plVar18[2] < uVar32) {
        plVar18[2] = uVar32;
        uVar36 = uVar32;
      }
      if (((_struct_19)auVar20 == *(_struct_19 *)(plVar18 + 7)) ||
         ((longlong)*(_struct_19 *)(plVar18 + 7) <= (longlong)auVar20)) {
        local_9b8 = (double)((longlong)auVar20 - plVar18[6]) / auVar61._0_8_;
        local_9b0 = auVar59._0_8_;
        dVar57 = auVar52._0_8_;
        if (local_9b8 <= local_9b0) {
          if ((longlong)uVar29 < 0) {
            dVar47 = (double)uVar29;
          }
          else {
            dVar47 = (double)(longlong)uVar29;
          }
        }
        else if ((longlong)uVar29 < 0) {
          dVar47 = (double)uVar29;
          local_9b0 = (dVar47 / dVar57) / local_9b8;
        }
        else {
          dVar47 = (double)(longlong)uVar29;
          local_9b0 = (dVar47 / dVar57) / local_9b8;
        }
        local_9c0.s = (_struct_19)(dVar47 / auVar61._0_8_);
        local_9c8 = (double)uVar36 / dVar57;
        local_9d0 = (undefined2 *)((dVar47 / (double)ppuVar38) / dVar57);
        local_9d8 = ppuVar38;
        local_9a8 = lVar27;
        local_9a0 = dVar41;
        local_998 = dVar42;
        FUN_1801af8a0(dVar47 / (double)ppuVar38,local_9d0,local_900._0_8_);
        auVar7 = local_8e8;
        plVar18[2] = 0;
        plVar18[1] = 0;
        *plVar18 = 0;
        plVar18[5] = 0;
        plVar18[4] = 0;
        plVar18[3] = 0;
        local_8e8._0_4_ = auVar20._0_4_;
        local_8e8._4_4_ = auVar20._4_4_;
        ((_struct_19 *)(plVar18 + 6))->LowPart = local_8e8._0_4_;
        ((_struct_19 *)(plVar18 + 6))->HighPart = local_8e8._4_4_;
        plVar18[7] = (longlong)auVar20 + 5000000000;
        local_8e8 = auVar7;
      }
      local_900 = ZEXT816(0x18080c890);
      uVar45 = FUN_18017bf40(local_900 + 8);
      FUN_180255670(uVar45,&DAT_180bbabe8);
      FUN_18017bf40(local_8e8);
      auVar20 = local_8e8;
      uVar32 = (longlong)local_8e8 - local_900._8_8_;
      plVar18 = (longlong *)FUN_1803bd050();
      ppuVar38 = (undefined **)(*plVar18 + 1);
      *plVar18 = (longlong)ppuVar38;
      uVar29 = plVar18[1] + uVar32;
      plVar18[1] = uVar29;
      lVar27 = plVar18[3] + (ulonglong)(999999 < uVar32);
      plVar18[3] = lVar27;
      dVar41 = (double)(plVar18[4] + (ulonglong)(4999999 < uVar32));
      plVar18[4] = (longlong)dVar41;
      dVar42 = (double)(plVar18[5] + (ulonglong)(15999999 < uVar32));
      plVar18[5] = (longlong)dVar42;
      uVar36 = plVar18[2];
      if ((ulonglong)plVar18[2] < uVar32) {
        plVar18[2] = uVar32;
        uVar36 = uVar32;
      }
      if (((_struct_19)auVar20 == *(_struct_19 *)(plVar18 + 7)) ||
         ((longlong)*(_struct_19 *)(plVar18 + 7) <= (longlong)auVar20)) {
        local_9b8 = (double)((longlong)auVar20 - plVar18[6]) / auVar61._0_8_;
        local_9b0 = auVar59._0_8_;
        dVar57 = auVar52._0_8_;
        if (local_9b8 <= local_9b0) {
          if ((longlong)uVar29 < 0) {
            dVar47 = (double)uVar29;
          }
          else {
            dVar47 = (double)(longlong)uVar29;
          }
        }
        else if ((longlong)uVar29 < 0) {
          dVar47 = (double)uVar29;
          local_9b0 = (dVar47 / dVar57) / local_9b8;
        }
        else {
          dVar47 = (double)(longlong)uVar29;
          local_9b0 = (dVar47 / dVar57) / local_9b8;
        }
        local_9c0.s = (_struct_19)(dVar47 / auVar61._0_8_);
        local_9c8 = (double)uVar36 / dVar57;
        local_9d0 = (undefined2 *)((dVar47 / (double)ppuVar38) / dVar57);
        local_9d8 = ppuVar38;
        local_9a8 = lVar27;
        local_9a0 = dVar41;
        local_998 = dVar42;
        FUN_1801af8a0(dVar47 / (double)ppuVar38,local_9d0,local_900._0_8_);
        auVar7 = local_8e8;
        plVar18[2] = 0;
        plVar18[1] = 0;
        *plVar18 = 0;
        plVar18[5] = 0;
        plVar18[4] = 0;
        plVar18[3] = 0;
        local_8e8._0_4_ = auVar20._0_4_;
        local_8e8._4_4_ = auVar20._4_4_;
        ((_struct_19 *)(plVar18 + 6))->LowPart = local_8e8._0_4_;
        ((_struct_19 *)(plVar18 + 6))->HighPart = local_8e8._4_4_;
        plVar18[7] = (longlong)auVar20 + 5000000000;
        local_8e8 = auVar7;
      }
      if (bVar44) {
        if (!bVar43) {
          FUN_1800a8050(local_900);
          FUN_1803b8a40(local_900);
          if (DAT_180cad2e0 == 0) {
            AcquireSRWLockShared((PSRWLOCK)&DAT_180bb88c0);
            local_8e8._0_4_ = _DAT_180bb8890;
            local_8e8._4_4_ = DAT_180bb8890_4;
            pRStack_8e0 = pRRam0000000180bb8898;
            lStack_8d8 = lRam0000000180bb88a0;
            uStack_8d0 = uRam0000000180bb88a8;
            auVar52 = ZEXT1664(auVar52._0_16_);
            auVar59 = ZEXT1664(auVar59._0_16_);
            auVar61 = ZEXT1664(auVar61._0_16_);
            auVar50 = ZEXT1664(auVar64._0_16_);
            cVar9 = cRam0000000180bb88b8;
            ReleaseSRWLockShared((PSRWLOCK)&DAT_180bb88c0);
            if (cVar9 != '\0') {
              auVar52 = ZEXT1664(auVar52._0_16_);
              auVar59 = ZEXT1664(auVar59._0_16_);
              auVar61 = ZEXT1664(auVar61._0_16_);
              auVar50 = ZEXT1664(auVar50._0_16_);
              sVar13 = FUN_18023fc30(pRStack_8e0);
              if ((sVar13 != 0) &&
                 (pcVar35 = (char *)FUN_1802345c0(&DAT_180c8fdb8), pcVar35[0xb00] != '\0')) {
                uVar29 = auVar50._0_8_;
                uVar36 = uVar29;
                if (*pcVar35 != '\0') {
                  uVar36 = (ulonglong)DAT_180b8f820;
                }
                if ((float)uVar36 <= auVar50._0_4_) {
                  uVar36 = FUN_180233fd0(*(undefined4 *)(pcVar35 + 0x68),uVar29,uVar29);
                }
                FUN_1802401a0(uVar36,&DAT_180bbabe8,uVar36,*(undefined4 *)(pcVar35 + 0xb68));
              }
            }
          }
          FUN_18017bf40(local_8e8);
          auVar20 = local_8e8;
          uVar32 = (longlong)local_8e8 - local_900._8_8_;
          plVar18 = (longlong *)FUN_1803bd230();
          ppuVar38 = (undefined **)(*plVar18 + 1);
          *plVar18 = (longlong)ppuVar38;
          uVar29 = plVar18[1] + uVar32;
          plVar18[1] = uVar29;
          lVar27 = plVar18[3] + (ulonglong)(999999 < uVar32);
          plVar18[3] = lVar27;
          dVar41 = (double)(plVar18[4] + (ulonglong)(4999999 < uVar32));
          plVar18[4] = (longlong)dVar41;
          dVar42 = (double)(plVar18[5] + (ulonglong)(15999999 < uVar32));
          plVar18[5] = (longlong)dVar42;
          uVar36 = plVar18[2];
          if ((ulonglong)plVar18[2] < uVar32) {
            plVar18[2] = uVar32;
            uVar36 = uVar32;
          }
          if (((_struct_19)auVar20 == *(_struct_19 *)(plVar18 + 7)) ||
             ((longlong)*(_struct_19 *)(plVar18 + 7) <= (longlong)auVar20)) {
            local_9b8 = (double)((longlong)auVar20 - plVar18[6]) / auVar61._0_8_;
            local_9b0 = auVar59._0_8_;
            dVar57 = auVar52._0_8_;
            if (local_9b8 <= local_9b0) {
              if ((longlong)uVar29 < 0) {
                dVar47 = (double)uVar29;
              }
              else {
                dVar47 = (double)(longlong)uVar29;
              }
            }
            else if ((longlong)uVar29 < 0) {
              dVar47 = (double)uVar29;
              local_9b0 = (dVar47 / dVar57) / local_9b8;
            }
            else {
              dVar47 = (double)(longlong)uVar29;
              local_9b0 = (dVar47 / dVar57) / local_9b8;
            }
            local_9c0.s = (_struct_19)(dVar47 / auVar61._0_8_);
            local_9c8 = (double)uVar36 / dVar57;
            local_9d0 = (undefined2 *)((dVar47 / (double)ppuVar38) / dVar57);
            local_9d8 = ppuVar38;
            local_9a8 = lVar27;
            local_9a0 = dVar41;
            local_998 = dVar42;
            FUN_1801af8a0(dVar47 / (double)ppuVar38,local_9d0,local_900._0_8_);
            auVar7 = local_8e8;
            plVar18[2] = 0;
            plVar18[1] = 0;
            *plVar18 = 0;
            plVar18[5] = 0;
            plVar18[4] = 0;
            plVar18[3] = 0;
            local_8e8._0_4_ = auVar20._0_4_;
            local_8e8._4_4_ = auVar20._4_4_;
            ((_struct_19 *)(plVar18 + 6))->LowPart = local_8e8._0_4_;
            ((_struct_19 *)(plVar18 + 6))->HighPart = local_8e8._4_4_;
            plVar18[7] = (longlong)auVar20 + 5000000000;
            local_8e8 = auVar7;
          }
        }
        if (local_968 != 0) {
          FUN_1802c54d0(&DAT_180bbabe8,local_8b8._0_8_);
        }
      }
      local_8b8 = ZEXT816(0x18080c990);
      FUN_18017bf40(local_8b8 + 8);
      auVar50 = ZEXT464(*(uint *)(*DAT_180bb8958 + 0x30));
      uVar45 = FUN_1802d9270();
      uVar45 = FUN_1802d9670(uVar45,&DAT_180bbabe8,auVar50._0_8_);
      FUN_1802d9fb0(uVar45,&DAT_180bbabe8,auVar50._0_8_);
      FUN_18017bf40(local_8e8);
      auVar20 = local_8e8;
      uVar32 = (longlong)local_8e8 - local_8b8._8_8_;
      plVar18 = (longlong *)FUN_1803bd410();
      ppuVar38 = (undefined **)(*plVar18 + 1);
      *plVar18 = (longlong)ppuVar38;
      uVar29 = plVar18[1] + uVar32;
      plVar18[1] = uVar29;
      lVar27 = plVar18[3] + (ulonglong)(999999 < uVar32);
      plVar18[3] = lVar27;
      dVar41 = (double)(plVar18[4] + (ulonglong)(4999999 < uVar32));
      plVar18[4] = (longlong)dVar41;
      dVar42 = (double)(plVar18[5] + (ulonglong)(15999999 < uVar32));
      plVar18[5] = (longlong)dVar42;
      uVar36 = plVar18[2];
      if ((ulonglong)plVar18[2] < uVar32) {
        plVar18[2] = uVar32;
        uVar36 = uVar32;
      }
      if (((_struct_19)auVar20 == *(_struct_19 *)(plVar18 + 7)) ||
         ((longlong)*(_struct_19 *)(plVar18 + 7) <= (longlong)auVar20)) {
        local_9b8 = (double)((longlong)auVar20 - plVar18[6]) / auVar61._0_8_;
        local_9b0 = auVar59._0_8_;
        dVar57 = auVar52._0_8_;
        if (local_9b8 <= local_9b0) {
          if ((longlong)uVar29 < 0) {
            dVar47 = (double)uVar29;
          }
          else {
            dVar47 = (double)(longlong)uVar29;
          }
        }
        else if ((longlong)uVar29 < 0) {
          dVar47 = (double)uVar29;
          local_9b0 = (dVar47 / dVar57) / local_9b8;
        }
        else {
          dVar47 = (double)(longlong)uVar29;
          local_9b0 = (dVar47 / dVar57) / local_9b8;
        }
        local_9c0.s = (_struct_19)(dVar47 / auVar61._0_8_);
        local_9c8 = (double)uVar36 / dVar57;
        local_9d0 = (undefined2 *)((dVar47 / (double)ppuVar38) / dVar57);
        local_9d8 = ppuVar38;
        local_9a8 = lVar27;
        local_9a0 = dVar41;
        local_998 = dVar42;
        FUN_1801af8a0(dVar47 / (double)ppuVar38,local_9d0,local_8b8._0_8_);
        auVar7 = local_8e8;
        plVar18[2] = 0;
        plVar18[1] = 0;
        *plVar18 = 0;
        plVar18[5] = 0;
        plVar18[4] = 0;
        plVar18[3] = 0;
        local_8e8._0_4_ = auVar20._0_4_;
        local_8e8._4_4_ = auVar20._4_4_;
        ((_struct_19 *)(plVar18 + 6))->LowPart = local_8e8._0_4_;
        ((_struct_19 *)(plVar18 + 6))->HighPart = local_8e8._4_4_;
        plVar18[7] = (longlong)auVar20 + 5000000000;
        local_8e8 = auVar7;
      }
      local_8b8 = ZEXT816(0x18080c9e0);
      uVar45 = FUN_18017bf40(local_8b8 + 8);
      if ((!bVar44) || (local_966 == 0)) {
        uVar39 = 0;
      }
      else {
        uVar39 = 1;
      }
      FUN_1802bbc40(uVar45,&DAT_180bbabe8,uVar39);
      FUN_18017bf40(local_8e8);
      auVar20 = local_8e8;
      uVar32 = (longlong)local_8e8 - local_8b8._8_8_;
      plVar18 = (longlong *)FUN_1803bd5f0();
      ppuVar38 = (undefined **)(*plVar18 + 1);
      *plVar18 = (longlong)ppuVar38;
      uVar29 = plVar18[1] + uVar32;
      plVar18[1] = uVar29;
      lVar27 = plVar18[3] + (ulonglong)(999999 < uVar32);
      plVar18[3] = lVar27;
      dVar41 = (double)(plVar18[4] + (ulonglong)(4999999 < uVar32));
      plVar18[4] = (longlong)dVar41;
      dVar42 = (double)(plVar18[5] + (ulonglong)(15999999 < uVar32));
      plVar18[5] = (longlong)dVar42;
      uVar36 = plVar18[2];
      if ((ulonglong)plVar18[2] < uVar32) {
        plVar18[2] = uVar32;
        uVar36 = uVar32;
      }
      if (((_struct_19)auVar20 == *(_struct_19 *)(plVar18 + 7)) ||
         ((longlong)*(_struct_19 *)(plVar18 + 7) <= (longlong)auVar20)) {
        local_9b8 = (double)((longlong)auVar20 - plVar18[6]) / auVar61._0_8_;
        local_9b0 = auVar59._0_8_;
        dVar57 = auVar52._0_8_;
        if (local_9b8 <= local_9b0) {
          if ((longlong)uVar29 < 0) {
            dVar47 = (double)uVar29;
          }
          else {
            dVar47 = (double)(longlong)uVar29;
          }
        }
        else if ((longlong)uVar29 < 0) {
          dVar47 = (double)uVar29;
          local_9b0 = (dVar47 / dVar57) / local_9b8;
        }
        else {
          dVar47 = (double)(longlong)uVar29;
          local_9b0 = (dVar47 / dVar57) / local_9b8;
        }
        local_9c0.s = (_struct_19)(dVar47 / auVar61._0_8_);
        local_9c8 = (double)uVar36 / dVar57;
        local_9d0 = (undefined2 *)((dVar47 / (double)ppuVar38) / dVar57);
        local_9d8 = ppuVar38;
        local_9a8 = lVar27;
        local_9a0 = dVar41;
        local_998 = dVar42;
        FUN_1801af8a0(dVar47 / (double)ppuVar38,local_9d0,local_8b8._0_8_);
        auVar7 = local_8e8;
        plVar18[2] = 0;
        plVar18[1] = 0;
        *plVar18 = 0;
        plVar18[5] = 0;
        plVar18[4] = 0;
        plVar18[3] = 0;
        local_8e8._0_4_ = auVar20._0_4_;
        local_8e8._4_4_ = auVar20._4_4_;
        ((_struct_19 *)(plVar18 + 6))->LowPart = local_8e8._0_4_;
        ((_struct_19 *)(plVar18 + 6))->HighPart = local_8e8._4_4_;
        plVar18[7] = (longlong)auVar20 + 5000000000;
        local_8e8 = auVar7;
      }
      local_8b8 = ZEXT816(0x18080c9c8);
      FUN_18017bf40(local_8b8 + 8);
      FUN_180287a80();
      FUN_180287200();
      FUN_18017bf40(local_8e8);
      auVar20 = local_8e8;
      uVar32 = (longlong)local_8e8 - local_8b8._8_8_;
      plVar18 = (longlong *)FUN_1803bd7d0();
      auVar60 = auVar61._0_16_;
      auVar58 = auVar59._0_16_;
      auVar48 = auVar52._0_16_;
      ppuVar38 = (undefined **)(*plVar18 + 1);
      *plVar18 = (longlong)ppuVar38;
      uVar29 = plVar18[1] + uVar32;
      plVar18[1] = uVar29;
      lVar27 = plVar18[3] + (ulonglong)(999999 < uVar32);
      plVar18[3] = lVar27;
      dVar41 = (double)(plVar18[4] + (ulonglong)(4999999 < uVar32));
      plVar18[4] = (longlong)dVar41;
      dVar42 = (double)(plVar18[5] + (ulonglong)(15999999 < uVar32));
      plVar18[5] = (longlong)dVar42;
      uVar36 = plVar18[2];
      if ((ulonglong)plVar18[2] < uVar32) {
        plVar18[2] = uVar32;
        uVar36 = uVar32;
      }
      if (((_struct_19)auVar20 == *(_struct_19 *)(plVar18 + 7)) ||
         ((longlong)*(_struct_19 *)(plVar18 + 7) <= (longlong)auVar20)) {
        local_9b8 = (double)((longlong)auVar20 - plVar18[6]) / auVar61._0_8_;
        local_9b0 = auVar59._0_8_;
        dVar57 = auVar52._0_8_;
        if (local_9b8 <= local_9b0) {
          if ((longlong)uVar29 < 0) {
            dVar47 = (double)uVar29;
          }
          else {
            dVar47 = (double)(longlong)uVar29;
          }
        }
        else if ((longlong)uVar29 < 0) {
          dVar47 = (double)uVar29;
          local_9b0 = (dVar47 / dVar57) / local_9b8;
        }
        else {
          dVar47 = (double)(longlong)uVar29;
          local_9b0 = (dVar47 / dVar57) / local_9b8;
        }
        local_9c0.s = (_struct_19)(dVar47 / auVar61._0_8_);
        local_9c8 = (double)uVar36 / dVar57;
        local_9d0 = (undefined2 *)((dVar47 / (double)ppuVar38) / dVar57);
        local_9d8 = ppuVar38;
        local_9a8 = lVar27;
        local_9a0 = dVar41;
        local_998 = dVar42;
        FUN_1801af8a0(dVar47 / (double)ppuVar38,local_9d0,local_8b8._0_8_);
        auVar7 = local_8e8;
        auVar60 = auVar61._0_16_;
        auVar58 = auVar59._0_16_;
        auVar48 = auVar52._0_16_;
        plVar18[2] = 0;
        plVar18[1] = 0;
        *plVar18 = 0;
        plVar18[5] = 0;
        plVar18[4] = 0;
        plVar18[3] = 0;
        local_8e8._0_4_ = auVar20._0_4_;
        local_8e8._4_4_ = auVar20._4_4_;
        ((_struct_19 *)(plVar18 + 6))->LowPart = local_8e8._0_4_;
        ((_struct_19 *)(plVar18 + 6))->HighPart = local_8e8._4_4_;
        plVar18[7] = (longlong)auVar20 + 5000000000;
        local_8e8 = auVar7;
      }
    }
    if (((local_967 == 0) && ((char)uStack_870 != '\0')) && (DAT_180c6e529 != '\0')) {
      local_8b8 = ZEXT816(0x18080c958);
      auVar52 = ZEXT1664(auVar48);
      auVar59 = ZEXT1664(auVar58);
      auVar61 = ZEXT1664(auVar60);
      uVar45 = FUN_18017bf40(local_8b8 + 8);
      if (DAT_180b0dad8 != '\0') {
        FUN_1803cc1f0(uVar45,&DAT_180bbac80);
      }
      FUN_1803ccf10(&DAT_180c71a30,&DAT_180bbac80);
      FUN_18017bf40(local_8e8);
      auVar20 = local_8e8;
      uVar32 = (longlong)local_8e8 - local_8b8._8_8_;
      plVar18 = (longlong *)FUN_1803bd9b0();
      auVar60 = auVar61._0_16_;
      auVar58 = auVar59._0_16_;
      auVar48 = auVar52._0_16_;
      ppuVar38 = (undefined **)(*plVar18 + 1);
      *plVar18 = (longlong)ppuVar38;
      uVar29 = plVar18[1] + uVar32;
      plVar18[1] = uVar29;
      lVar27 = plVar18[3] + (ulonglong)(999999 < uVar32);
      plVar18[3] = lVar27;
      dVar42 = (double)(plVar18[4] + (ulonglong)(4999999 < uVar32));
      plVar18[4] = (longlong)dVar42;
      dVar41 = (double)(plVar18[5] + (ulonglong)(15999999 < uVar32));
      plVar18[5] = (longlong)dVar41;
      uVar36 = plVar18[2];
      if ((ulonglong)plVar18[2] < uVar32) {
        plVar18[2] = uVar32;
        uVar36 = uVar32;
      }
      if (((_struct_19)auVar20 == *(_struct_19 *)(plVar18 + 7)) ||
         ((longlong)*(_struct_19 *)(plVar18 + 7) <= (longlong)auVar20)) {
        local_9b8 = (double)((longlong)auVar20 - plVar18[6]) / auVar61._0_8_;
        local_9b0 = auVar59._0_8_;
        dVar57 = auVar52._0_8_;
        if (local_9b0 < local_9b8) {
          if ((longlong)uVar29 < 0) {
            local_9b0 = ((double)uVar29 / dVar57) / local_9b8;
          }
          else {
            local_9b0 = ((double)(longlong)uVar29 / dVar57) / local_9b8;
          }
        }
        local_9c0.s = (_struct_19)((double)uVar29 / auVar61._0_8_);
        local_9c8 = (double)uVar36 / dVar57;
        dVar47 = (double)uVar29 / (double)ppuVar38;
        local_9d0 = (undefined2 *)(dVar47 / dVar57);
        local_9d8 = ppuVar38;
        local_9a8 = lVar27;
        local_9a0 = dVar42;
        local_998 = dVar41;
        FUN_1801af8a0(dVar47,local_9d0,local_8b8._0_8_);
        auVar7 = local_8e8;
        auVar60 = auVar61._0_16_;
        auVar58 = auVar59._0_16_;
        auVar48 = auVar52._0_16_;
        plVar18[2] = 0;
        plVar18[1] = 0;
        *plVar18 = 0;
        plVar18[5] = 0;
        plVar18[4] = 0;
        plVar18[3] = 0;
        local_8e8._0_4_ = auVar20._0_4_;
        local_8e8._4_4_ = auVar20._4_4_;
        ((_struct_19 *)(plVar18 + 6))->LowPart = local_8e8._0_4_;
        ((_struct_19 *)(plVar18 + 6))->HighPart = local_8e8._4_4_;
        plVar18[7] = (longlong)auVar20 + 5000000000;
        local_8e8 = auVar7;
      }
    }
    local_8b8 = ZEXT816(0x18080c948);
    auVar52 = ZEXT1664(auVar48);
    auVar59 = ZEXT1664(auVar58);
    auVar61 = ZEXT1664(auVar60);
    FUN_18017bf40(local_8b8 + 8);
    FUN_1803d1040();
    FUN_18017bf40(local_8e8);
    auVar20 = local_8e8;
    uVar32 = (longlong)local_8e8 - local_8b8._8_8_;
    plVar18 = (longlong *)FUN_1803bdb90();
    ppuVar38 = (undefined **)(*plVar18 + 1);
    *plVar18 = (longlong)ppuVar38;
    uVar29 = plVar18[1] + uVar32;
    plVar18[1] = uVar29;
    lVar27 = plVar18[3] + (ulonglong)(999999 < uVar32);
    plVar18[3] = lVar27;
    dVar42 = (double)(plVar18[4] + (ulonglong)(4999999 < uVar32));
    plVar18[4] = (longlong)dVar42;
    dVar41 = (double)(plVar18[5] + (ulonglong)(15999999 < uVar32));
    plVar18[5] = (longlong)dVar41;
    uVar36 = plVar18[2];
    if ((ulonglong)plVar18[2] < uVar32) {
      plVar18[2] = uVar32;
      uVar36 = uVar32;
    }
    if (((_struct_19)auVar20 == *(_struct_19 *)(plVar18 + 7)) ||
       ((longlong)*(_struct_19 *)(plVar18 + 7) <= (longlong)auVar20)) {
      local_9b8 = (double)((longlong)auVar20 - plVar18[6]) / auVar61._0_8_;
      local_9b0 = auVar59._0_8_;
      dVar57 = auVar52._0_8_;
      if (local_9b0 < local_9b8) {
        if ((longlong)uVar29 < 0) {
          local_9b0 = ((double)uVar29 / dVar57) / local_9b8;
        }
        else {
          local_9b0 = ((double)(longlong)uVar29 / dVar57) / local_9b8;
        }
      }
      local_9c0.s = (_struct_19)((double)uVar29 / auVar61._0_8_);
      local_9c8 = (double)uVar36 / dVar57;
      dVar47 = (double)uVar29 / (double)ppuVar38;
      local_9d0 = (undefined2 *)(dVar47 / dVar57);
      local_9d8 = ppuVar38;
      local_9a8 = lVar27;
      local_9a0 = dVar42;
      local_998 = dVar41;
      FUN_1801af8a0(dVar47,local_9d0,local_8b8._0_8_);
      auVar7 = local_8e8;
      plVar18[2] = 0;
      plVar18[1] = 0;
      *plVar18 = 0;
      plVar18[5] = 0;
      plVar18[4] = 0;
      plVar18[3] = 0;
      local_8e8._0_4_ = auVar20._0_4_;
      local_8e8._4_4_ = auVar20._4_4_;
      ((_struct_19 *)(plVar18 + 6))->LowPart = local_8e8._0_4_;
      ((_struct_19 *)(plVar18 + 6))->HighPart = local_8e8._4_4_;
      plVar18[7] = (longlong)auVar20 + 5000000000;
      local_8e8 = auVar7;
    }
    FUN_180180bf0(&local_888);
    if ((char)lStack_878 != '\0') {
      ReleaseSRWLockShared(pRStack_880);
    }
    local_8b8 = ZEXT816(0x18080c970);
    FUN_18017bf40(local_8b8 + 8);
    FUN_180435fc0();
    local_908.s = DAT_180c6e518;
    local_8e8 = (undefined1  [8])&DAT_1808e6940;
    iVar15 = FUN_1805f68d0(&DAT_1808e6940);
    if (iVar15 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1805f6d44(5);
    }
    if (DAT_1808e698c == 0x7fffffff) {
      DAT_1808e698c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
      FUN_1805f6d44(6);
    }
    if (((DAT_180c62ff0 != 0) && (DAT_180bbef4b != '\0')) && (local_908.s != (_struct_19)0x0)) {
      DAT_180bb8ae8 = DAT_180c62ff0;
      pcVar35 = (char *)(**(longlong **)(DAT_180c62ff0 + 0x2030) + 0x60);
      if (*pcVar35 == '\0') {
        pcVar35 = (char *)0x0;
      }
      if (pcVar35 != (char *)0x0) {
        if (0 < *(int *)(pcVar35 + 0x48)) {
          (**(code **)(*DAT_180c6e510 + 0x108))(DAT_180c6e510,1,&local_908,0);
        }
        pcVar35 = (char *)(**(longlong **)(DAT_180bb8ae8 + 0x2030) + 0x60);
        if (*pcVar35 == '\0') {
          pcVar35 = (char *)0x0;
        }
        FUN_180507160(pcVar35);
      }
      DAT_180bbef4b = '\0';
    }
    FUN_1805f68fc(&DAT_1808e6940);
    FUN_18017bf40(local_8e8);
    auVar20 = local_8e8;
    uVar32 = (longlong)local_8e8 - local_8b8._8_8_;
    plVar18 = (longlong *)FUN_1803bdd70();
    dVar57 = auVar59._0_8_;
    ppuVar38 = (undefined **)(*plVar18 + 1);
    *plVar18 = (longlong)ppuVar38;
    uVar29 = plVar18[1] + uVar32;
    plVar18[1] = uVar29;
    lVar27 = plVar18[3] + (ulonglong)(999999 < uVar32);
    plVar18[3] = lVar27;
    dVar42 = (double)(plVar18[4] + (ulonglong)(4999999 < uVar32));
    plVar18[4] = (longlong)dVar42;
    dVar41 = (double)(plVar18[5] + (ulonglong)(15999999 < uVar32));
    plVar18[5] = (longlong)dVar41;
    uVar36 = plVar18[2];
    if ((ulonglong)plVar18[2] < uVar32) {
      plVar18[2] = uVar32;
      uVar36 = uVar32;
    }
    if ((auVar20 == (undefined1  [8])plVar18[7]) || (plVar18[7] <= (longlong)auVar20)) {
      local_9b8 = (double)((longlong)auVar20 - plVar18[6]) / auVar61._0_8_;
      dVar47 = auVar52._0_8_;
      if (dVar57 < local_9b8) {
        dVar57 = ((double)uVar29 / dVar47) / local_9b8;
      }
      local_9c0.s = (_struct_19)((double)uVar29 / auVar61._0_8_);
      local_9c8 = (double)uVar36 / dVar47;
      dVar46 = (double)uVar29 / (double)ppuVar38;
      local_9d0 = (undefined2 *)(dVar46 / dVar47);
      local_9d8 = ppuVar38;
      local_9b0 = dVar57;
      local_9a8 = lVar27;
      local_9a0 = dVar42;
      local_998 = dVar41;
      FUN_1801af8a0(dVar46,local_9d0,local_8b8._0_8_);
      plVar18[2] = 0;
      plVar18[1] = 0;
      *plVar18 = 0;
      plVar18[5] = 0;
      plVar18[4] = 0;
      plVar18[3] = 0;
      plVar18[6] = (longlong)auVar20;
      plVar18[7] = (longlong)auVar20 + 5000000000;
    }
  }
  if (local_6dc != '\0') {
    (**(code **)(*local_868 + 0x160))(local_868,local_6e0,local_860);
  }
LAB_1803b6e22:
  local_8b8 = ZEXT816(0x180806d58);
  FUN_18017bf40(local_8b8 + 8);
  iVar15 = FUN_1805f68d0(&DAT_180902da0);
  if (iVar15 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(5);
  }
  if (DAT_180902dec == 0x7fffffff) {
    DAT_180902dec = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(6);
  }
  if (DAT_180902df8 != 0) {
    DVar16 = GetCurrentThreadId();
    lVar27 = DAT_180902df8;
    if (DAT_180902e00 == DVar16) {
      plVar18 = (longlong *)FUN_18017bf40(local_8e8);
      lVar40 = *plVar18;
      if ((uint)DAT_180903018 < 6) {
        lVar34 = (ulonglong)(uint)DAT_180903018 * 0x58;
        if ((*(char *)(lVar34 + 0x180902e5c) == '\0') || (*(char *)(lVar34 + 0x180902e5d) == '\0'))
        {
          uVar12 = 0;
        }
        else {
          uVar12 = 1;
        }
        *(undefined1 *)(lVar34 + 0x180902e5c) = uVar12;
        *(longlong *)(lVar34 + 0x180902e50) = lVar40 / 1000;
        (**(code **)(*(longlong *)lVar27 + 0xe0))(lVar27,*(undefined8 *)(lVar34 + 0x180902e20));
        (**(code **)(*(longlong *)lVar27 + 0xe0))(lVar27,*(undefined8 *)(&DAT_180902e08 + lVar34));
        *(undefined4 *)(lVar34 + 0x180902e58) = 2;
        DAT_180903018._0_4_ = 6;
      }
    }
  }
  FUN_1805f68fc(&DAT_180902da0);
  FUN_1803847d0(local_8b8);
}



