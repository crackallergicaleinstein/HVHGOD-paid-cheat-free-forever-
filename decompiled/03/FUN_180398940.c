// FUN_180398940 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180398940 */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180398940(undefined8 param_1,int param_2,uint param_3)

{
  bool bVar1;
  double dVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined1 *puVar13;
  HWND pHVar14;
  char cVar15;
  char cVar16;
  byte bVar17;
  byte bVar18;
  SHORT SVar19;
  int iVar20;
  int *piVar21;
  float *pfVar22;
  undefined *puVar23;
  ULONGLONG UVar24;
  longlong *plVar25;
  longlong lVar26;
  uint *puVar27;
  undefined4 *puVar28;
  HWND pHVar29;
  undefined8 *puVar30;
  ulonglong *puVar31;
  longlong lVar32;
  byte bVar33;
  uint *puVar34;
  longlong lVar35;
  ulonglong uVar36;
  ulonglong uVar37;
  undefined4 uVar38;
  undefined *puVar39;
  char *pcVar40;
  undefined **ppuVar41;
  ulonglong uVar42;
  char *pcVar43;
  bool bVar44;
  undefined1 *puVar45;
  uint uVar46;
  undefined1 *puVar47;
  undefined8 uVar48;
  undefined8 extraout_XMM0_Qa;
  undefined8 uVar49;
  undefined8 extraout_XMM0_Qa_00;
  float fVar50;
  float fVar51;
  undefined1 auVar52 [64];
  double dVar53;
  undefined1 auVar54 [64];
  undefined1 auVar55 [64];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [64];
  undefined1 auVar60 [16];
  undefined1 auVar61 [64];
  undefined1 auStack_5948 [32];
  undefined8 local_5928;
  undefined8 local_5920;
  char *local_5918;
  char *local_5910;
  char *local_5908;
  char *local_5900;
  char *local_58f8;
  ulonglong local_58f0;
  undefined1 *local_58e8;
  double local_58e0;
  char *local_58d8;
  byte local_58c8;
  char local_58c7;
  char local_58c6;
  char local_58c5 [5];
  undefined1 local_58c0 [16];
  int local_58b0 [2];
  ulonglong local_58a8;
  uint local_58a0;
  ulonglong local_5898;
  undefined *local_5890 [2];
  undefined1 local_5880 [16];
  uint local_5870;
  undefined4 uStack_586c;
  undefined **local_5868;
  ulonglong uStack_5860;
  ulonglong uStack_5858;
  undefined8 uStack_5850;
  undefined **local_5848;
  undefined1 local_5840 [16];
  longlong local_5830;
  longlong local_5828;
  undefined8 local_5820;
  undefined8 uStack_5818;
  undefined8 uStack_5810;
  undefined4 uStack_5808;
  undefined2 uStack_5804;
  ushort uStack_5802;
  undefined4 local_5800;
  undefined4 uStack_57fc;
  undefined4 uStack_57f8;
  undefined4 uStack_57f4;
  undefined4 uStack_57f0;
  undefined4 uStack_57ec;
  undefined4 uStack_57e8;
  undefined4 uStack_57e4;
  undefined1 local_57e0 [16];
  undefined8 local_57b8;
  undefined8 local_57b0;
  undefined8 local_57a8;
  undefined8 local_57a0;
  undefined8 local_5798;
  undefined8 local_5790;
  undefined8 local_5788;
  undefined8 local_5780;
  undefined8 local_5778;
  undefined8 local_5770;
  undefined8 local_5768;
  undefined8 local_5760;
  undefined4 local_5758;
  undefined4 local_5750;
  undefined1 local_574c [16];
  undefined4 local_573c;
  undefined4 local_5738;
  undefined8 local_5734;
  undefined4 local_572c;
  undefined4 local_5728;
  undefined4 local_5724;
  undefined4 local_5720;
  undefined1 local_5718 [3936];
  size_t local_47b8;
  char local_47b0;
  char local_47a8;
  undefined4 local_2e18 [80];
  undefined8 local_2cd8;
  undefined8 local_2cd0;
  undefined8 local_2cc8;
  undefined8 local_2cc0;
  undefined8 local_2cb8;
  undefined8 local_2cb0;
  undefined8 local_2ca8;
  undefined8 local_2ca0;
  undefined8 local_2c98;
  undefined8 local_2c90;
  undefined8 local_2c88;
  undefined4 local_2c80;
  undefined4 local_2c7c;
  undefined1 local_2c78 [16];
  undefined4 local_2c68;
  undefined2 local_2c64;
  undefined1 local_2c62;
  undefined1 local_2c60 [16];
  undefined1 *local_2c48 [2];
  undefined1 *local_2c38;
  undefined8 local_2c30;
  undefined **local_2c28;
  longlong lStack_2c20;
  undefined8 uStack_2c18;
  undefined8 uStack_2c10;
  undefined8 local_2c08;
  undefined8 uStack_2c00;
  longlong local_2bf8;
  PSRWLOCK pRStack_2bf0;
  ulonglong uStack_2be8;
  undefined8 uStack_2be0;
  undefined1 local_2bd8 [16];
  undefined8 uStack_2bc8;
  undefined8 uStack_2bc0;
  undefined8 local_2bb8;
  float local_2bb0;
  undefined8 local_2ba8;
  PSRWLOCK pRStack_2ba0;
  undefined8 uStack_2b98;
  undefined8 uStack_2b90;
  char local_2b88 [4096];
  size_t local_1b88;
  char local_1b80;
  ulonglong local_a0;
  
  local_a0 = DAT_1808d5f00 ^ (ulonglong)auStack_5948;
  uVar46 = param_3 & 0xff;
  LOCK();
  DAT_180c64050 = DAT_180c64050 + 1;
  UNLOCK();
  local_5840 = ZEXT816(0x180808268);
  FUN_18017bf40(local_5840 + 8);
  local_2bf8 = 0;
  pRStack_2bf0 = (PSRWLOCK)0x0;
  uStack_2be8 = 0;
  uStack_2be0 = 0;
  uVar48 = FUN_180244f40();
  if ((char)uStack_2be0 == '\0') {
    local_5920 = (char *)0xffffffffffffffff;
    local_5928 = (undefined **)((ulonglong)local_5928 & 0xffffffff00000000);
    FUN_180396e00("world_inactive",param_2,uVar46,0);
    if (local_2bf8 != 0) {
      if ((char)uStack_2be0 != '\0') {
        LOCK();
        *(int *)(local_2bf8 + 0x5c) = *(int *)(local_2bf8 + 0x5c) + -1;
        UNLOCK();
      }
      piVar21 = (int *)FUN_1801acaf0();
      if ((uStack_2be0._1_1_ != '\0') && (*piVar21 != 0)) {
        *piVar21 = *piVar21 + -1;
      }
      if ((char)uStack_2be8 != '\0') {
        if (pRStack_2bf0 == (PSRWLOCK)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_18017d0c0(1);
        }
        ReleaseSRWLockShared(pRStack_2bf0);
        uStack_2be8 = uStack_2be8 & 0xffffffffffffff00;
      }
      uStack_2be0 = uStack_2be0 & 0xffffffffffffff00;
    }
joined_r0x000180398a96:
    local_2bf8 = 0;
    if ((code *)DAT_180c70870 != (code *)0x0) {
      (*(code *)DAT_180c70870)(param_1,param_2,uVar46);
    }
  }
  else if ((((param_2 == 0) && (DAT_180ccaa20 != '\0')) && (DAT_180c63119 != '\0')) &&
          (DAT_1808e6c00 != '\0')) {
    FUN_1803dff30(uVar48,&local_2bb8);
    if (local_2bf8 != 0) {
      if ((char)uStack_2be0 != '\0') {
        LOCK();
        *(int *)(local_2bf8 + 0x5c) = *(int *)(local_2bf8 + 0x5c) + -1;
        UNLOCK();
      }
      piVar21 = (int *)FUN_1801acaf0();
      if ((uStack_2be0._1_1_ != '\0') && (*piVar21 != 0)) {
        *piVar21 = *piVar21 + -1;
      }
      if ((char)uStack_2be8 != '\0') {
        if (pRStack_2bf0 == (PSRWLOCK)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_18017d0c0(1);
        }
        ReleaseSRWLockShared(pRStack_2bf0);
        uStack_2be8 = uStack_2be8 & 0xffffffffffffff00;
      }
      uStack_2be0 = uStack_2be0 & 0xffffffffffffff00;
      local_2bf8 = 0;
    }
    if (DAT_180c70870 != 0) {
      (*(code *)DAT_180c70870)(param_1,0,uVar46);
    }
    local_2bd8 = ZEXT816(0);
    uStack_2bc8 = 0;
    uStack_2bc0 = 0;
    uVar48 = FUN_180244f40();
    if ((((char)uStack_2bc0 != '\0') && (DAT_180ccaa20 != '\0')) &&
       ((DAT_180c63119 != '\0' && (DAT_1808e6c00 != '\0')))) {
      pfVar22 = (float *)FUN_1803dff30(uVar48,local_5890);
      fVar50 = *pfVar22;
      if (fVar50 == (float)local_2bb8) {
        fVar50 = pfVar22[1];
        if ((fVar50 != local_2bb8._4_4_) || (fVar50 = pfVar22[2], fVar50 != local_2bb0))
        goto LAB_180398bf1;
      }
      else {
LAB_180398bf1:
        FUN_1803e07c0(fVar50,&local_2bb8);
      }
      uVar48 = FUN_1803de270();
      puVar47 = DAT_180b0dfb0;
      if (DAT_180b0dfb0 != (undefined1 *)0x0) {
        FUN_1803de3b0(uVar48,DAT_180b0dfb0);
        cVar15 = FUN_1803a09a0(puVar47,&local_2bb8);
        if (cVar15 != '\0') {
          FUN_1803def00();
        }
      }
    }
    FUN_180180bf0(local_2bd8);
    if ((char)uStack_2bc8 != '\0') {
      ReleaseSRWLockShared((PSRWLOCK)local_2bd8._8_8_);
    }
  }
  else {
    cVar16 = FUN_18038d3c0(uVar48,&DAT_180c7e1f0,&DAT_180b0b320);
    cVar15 = DAT_180c71310;
    if (cVar16 == '\0') {
      LOCK();
      DAT_180c71310 = '\0';
      UNLOCK();
      if (cVar15 != '\0') {
        FUN_1803773d0();
        local_57b8 = 0;
        local_57b0 = 0;
        local_57a8 = 0xffffffffffffffff;
        local_57a0 = 0;
        local_5798 = 0;
        local_5790 = 0;
        local_5788 = 0;
        local_5780 = 0;
        local_5778 = 0;
        local_5770 = 0;
        local_5768 = 0;
        local_5760 = 0;
        local_5758 = 0;
        local_574c = (undefined1  [16])0x0;
        local_5750 = 0;
        uVar38 = 0;
        local_573c = 0;
        local_5738 = 0;
        local_5734 = 0;
        local_572c = 0;
        local_5728 = 0xffffffff;
        local_5724 = 0;
        local_5720 = 0x1000000;
        FUN_18063ab10(local_5718,0,0x2900);
        FUN_180382020(local_5718);
        FUN_18063ab10(local_2e18,0,0x140);
        puVar28 = local_2e18;
        lVar32 = 8;
        do {
          *(undefined8 *)(puVar28 + 1) = 0;
          *(undefined8 *)(puVar28 + 3) = 0;
          *(undefined8 *)(puVar28 + 5) = 0;
          *(undefined8 *)(puVar28 + 7) = 0;
          puVar28[9] = 0;
          *puVar28 = 0;
          puVar28 = puVar28 + 10;
          lVar32 = lVar32 + -1;
        } while (lVar32 != 0);
        local_2cd8 = 0;
        local_2cd0 = 0;
        local_2cc8 = 0;
        local_2cc0 = 0;
        local_2cb8 = 0xffffffffffffffff;
        local_2cb0 = 0;
        local_2ca8 = 0;
        local_2ca0 = 0;
        local_2c98 = 0;
        local_2c90 = 0;
        local_2c88 = 0xffffffffffffffff;
        local_2c80 = 0;
        local_2c78 = (undefined1  [16])0x0;
        local_2c64 = 0;
        local_2c62 = 0;
        local_2c60 = (undefined1  [16])0x0;
        local_2c7c = uVar38;
        local_2c68 = uVar38;
        puVar23 = (undefined *)FUN_1803a70a0();
        puVar39 = &DAT_180ba31a0;
        if (puVar23 != (undefined *)0x0) {
          puVar39 = puVar23;
        }
        FUN_18063aed0(puVar39,&local_57b8,0x2b68);
      }
      UVar24 = GetTickCount64();
      if (DAT_180c71300 <= UVar24) {
        DAT_180c71300 = UVar24 + 2000;
        FUN_18063ab10(local_2b88,0,0x600);
        local_5918 = (char *)CONCAT44(local_5918._4_4_,(uint)DAT_180b0cc88);
        local_5920 = (char *)(CONCAT44(local_5920._4_4_,param_3) & 0xffffffff000000ff);
        local_5928 = (undefined **)CONCAT44(local_5928._4_4_,param_2);
        FUN_18015ad60(local_2b88,0x600,0xffffffffffffffff,
                      "slot=%d active=%d thirdperson=%d feature_pipeline=0 runtime_command_writes=0 extra_crc_calls=0 extra_prediction=0 command_body_overrides=0 server_ack=unverified"
                     );
        local_5928 = &PTR_180700558;
        if (local_2b88[0] != '\0') {
          local_5928 = (undefined **)&DAT_1806bcfc0;
        }
        local_5920 = local_2b88;
        FUN_1800f6900(0);
      }
      if (local_2bf8 != 0) {
        if ((char)uStack_2be0 != '\0') {
          LOCK();
          *(int *)(local_2bf8 + 0x5c) = *(int *)(local_2bf8 + 0x5c) + -1;
          UNLOCK();
        }
        piVar21 = (int *)FUN_1801acaf0();
        if ((uStack_2be0._1_1_ != '\0') && (*piVar21 != 0)) {
          *piVar21 = *piVar21 + -1;
        }
        if ((char)uStack_2be8 != '\0') {
          if (pRStack_2bf0 == (PSRWLOCK)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_18017d0c0(1);
          }
          ReleaseSRWLockShared(pRStack_2bf0);
          uStack_2be8 = uStack_2be8 & 0xffffffffffffff00;
        }
        uStack_2be0 = uStack_2be0 & 0xffffffffffffff00;
        local_2bf8 = 0;
      }
      if (DAT_180c70870 != 0) {
        (*(code *)DAT_180c70870)(param_1,param_2,uVar46);
      }
      local_2bd8 = ZEXT816(0);
      uStack_2bc8 = 0;
      uStack_2bc0 = 0;
      FUN_180244f40();
      if ((char)uStack_2bc0 != '\0') {
        FUN_1803de270();
      }
      FUN_180180bf0(local_2bd8);
      if ((char)uStack_2bc8 != '\0') {
        ReleaseSRWLockShared((PSRWLOCK)local_2bd8._8_8_);
      }
      goto LAB_18039d05c;
    }
    DAT_180c71310 = '\x01';
    AcquireSRWLockShared((PSRWLOCK)&DAT_180bb88c0);
    local_2c28 = _DAT_180bb8890;
    lStack_2c20 = lRam0000000180bb8898;
    uStack_2c18 = uRam0000000180bb88a0;
    uStack_2c10 = uRam0000000180bb88a8;
    uStack_2c00 = CONCAT71(uRam0000000180bb88b9,cRam0000000180bb88b8);
    local_2c08 = _DAT_180bb88b0;
    ReleaseSRWLockShared((PSRWLOCK)&DAT_180bb88c0);
    if ((lStack_2c20 == 0) || (local_2c28 == (undefined **)0x0)) {
      local_5920 = (char *)0xffffffffffffffff;
      local_5928 = (undefined **)((ulonglong)local_5928._4_4_ << 0x20);
      FUN_180396e00("local_unavailable",param_2,uVar46,0);
      if (local_2bf8 != 0) {
        if ((char)uStack_2be0 != '\0') {
          LOCK();
          *(int *)(local_2bf8 + 0x5c) = *(int *)(local_2bf8 + 0x5c) + -1;
          UNLOCK();
        }
        piVar21 = (int *)FUN_1801acaf0();
        if ((uStack_2be0._1_1_ != '\0') && (*piVar21 != 0)) {
          *piVar21 = *piVar21 + -1;
        }
        if ((char)uStack_2be8 != '\0') {
          if (pRStack_2bf0 == (PSRWLOCK)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_18017d0c0(1);
          }
          ReleaseSRWLockShared(pRStack_2bf0);
          uStack_2be8 = uStack_2be8 & 0xffffffffffffff00;
        }
        uStack_2be0 = uStack_2be0 & 0xffffffffffffff00;
      }
      goto joined_r0x000180398a96;
    }
    FUN_180398380("before_native",DAT_180b0dfb0);
    local_5928 = (undefined **)0x0;
    local_5898 = 1;
    FUN_18024c5d0(&DAT_180b8e420,1,0,0);
    if (local_2bf8 != 0) {
      if ((char)uStack_2be0 != '\0') {
        LOCK();
        *(int *)(local_2bf8 + 0x5c) = *(int *)(local_2bf8 + 0x5c) + -1;
        UNLOCK();
      }
      piVar21 = (int *)FUN_1801acaf0();
      if ((uStack_2be0._1_1_ != '\0') && (*piVar21 != 0)) {
        *piVar21 = *piVar21 + -1;
      }
      if ((char)uStack_2be8 != '\0') {
        if (pRStack_2bf0 == (PSRWLOCK)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_18017d0c0(1);
        }
        ReleaseSRWLockShared(pRStack_2bf0);
        uStack_2be8 = uStack_2be8 & 0xffffffffffffff00;
      }
      uStack_2be0 = uStack_2be0 & 0xffffffffffffff00;
      local_2bf8 = 0;
    }
    if (DAT_180c70870 != 0) {
      (*(code *)DAT_180c70870)(param_1,param_2,uVar46);
    }
    local_2ba8 = 0;
    pRStack_2ba0 = (PSRWLOCK)0x0;
    uStack_2b98 = 0;
    uStack_2b90 = 0;
    FUN_180244f40();
    if ((char)uStack_2b90 == '\0') {
      local_5920 = (char *)0xffffffffffffffff;
      local_5928 = (undefined **)((ulonglong)local_5928 & 0xffffffff00000000);
      FUN_180396e00("world_transition",param_2,uVar46,0);
    }
    else {
      AcquireSRWLockShared((PSRWLOCK)&DAT_180bb88c0);
      local_5868 = _DAT_180bb8890;
      uStack_5860 = lRam0000000180bb8898;
      uStack_5858 = uRam0000000180bb88a0;
      uStack_5850 = uRam0000000180bb88a8;
      uVar48 = CONCAT71(uRam0000000180bb88b9,cRam0000000180bb88b8);
      uVar49 = _DAT_180bb88b0;
      ReleaseSRWLockShared((PSRWLOCK)&DAT_180bb88c0);
      local_2c28 = local_5868;
      lStack_2c20 = uStack_5860;
      uStack_2c18 = uStack_5858;
      uStack_2c10 = uStack_5850;
      local_5928 = (undefined **)0x0;
      local_2c08 = uVar49;
      uStack_2c00 = uVar48;
      FUN_18024c5d0(&DAT_180b8e420,2,0,0);
      AcquireSRWLockShared((PSRWLOCK)&DAT_180bb88c0);
      local_5868 = _DAT_180bb8890;
      uStack_5860 = lRam0000000180bb8898;
      uStack_5858 = uRam0000000180bb88a0;
      uStack_5850 = uRam0000000180bb88a8;
      cVar15 = cRam0000000180bb88b8;
      ReleaseSRWLockShared((PSRWLOCK)&DAT_180bb88c0);
      auVar56._12_4_ = 0;
      auVar56._0_12_ = ZEXT812(0);
      if (((cVar15 == '\0') || (uStack_5860 == 0)) || (local_5868 == (undefined **)0x0)) {
        local_5820 = 0;
        uStack_5818 = 0;
        uStack_5810 = 0;
        uStack_5808 = 0;
        uStack_5804 = 0;
        local_5800 = 0;
        uStack_57fc = 0xffffffff;
        uStack_57f8 = 0;
        uStack_57f4 = 0;
        uStack_57f0 = 0;
        uStack_57ec = 0;
        uStack_57e8 = 0;
        uStack_57e4 = 0;
        auVar57._13_3_ = 0;
        auVar57._0_13_ = local_57e0._3_13_;
        local_57e0 = auVar57 << 0x18;
        _DAT_180cc9348 = (ulonglong)uStack_5802 << 0x30;
        DAT_180cc9330 = 0;
        DAT_180cc9338 = 0;
        DAT_180cc9340 = 0;
        _DAT_180cc9350 = 0xffffffff00000000;
        _DAT_180cc9358 = 0;
        _DAT_180cc9360 = 0;
        _DAT_180cc9368 = 0;
        auVar57 = vinsertps_avx(local_57e0,auVar56 << 0x20,0x10);
        _DAT_180cc9370 = vinsertps_avx(auVar57,auVar56 << 0x20,0x20);
        DAT_180cc9680 = 0;
        local_57e0 = _DAT_180cc9370;
      }
      auVar55 = ZEXT1264(ZEXT812(0)) << 0x20;
      AcquireSRWLockShared((PSRWLOCK)&DAT_180bb88c0);
      local_5868 = _DAT_180bb8890;
      uStack_5860 = lRam0000000180bb8898;
      uStack_5858 = uRam0000000180bb88a0;
      uStack_5850 = uRam0000000180bb88a8;
      auVar55 = ZEXT1664(auVar55._0_16_);
      cVar15 = cRam0000000180bb88b8;
      ReleaseSRWLockShared((PSRWLOCK)&DAT_180bb88c0);
      auVar56 = auVar55._0_16_;
      if (((cVar15 == '\0') || (uStack_5860 == 0)) || (local_5868 == (undefined **)0x0)) {
        auVar55 = ZEXT1664(auVar56);
        FUN_180235740();
        auVar56 = auVar55._0_16_;
      }
      if (DAT_180b8e556 != '\0') {
        auVar55 = ZEXT1664(auVar56);
        AcquireSRWLockShared((PSRWLOCK)&DAT_180bb88c0);
        local_5868 = _DAT_180bb8890;
        uStack_5860 = lRam0000000180bb8898;
        uStack_5858 = uRam0000000180bb88a0;
        uStack_5850 = uRam0000000180bb88a8;
        auVar55 = ZEXT1664(auVar55._0_16_);
        cVar15 = cRam0000000180bb88b8;
        ReleaseSRWLockShared((PSRWLOCK)&DAT_180bb88c0);
        auVar56 = auVar55._0_16_;
        if (((cVar15 == '\0') || (uStack_5860 == 0)) || (DAT_180cad2e8 == '\0')) {
          auVar55 = ZEXT1664(auVar56);
          FUN_1802439f0(&DAT_180b8e548);
          auVar56 = auVar55._0_16_;
          _DAT_180b8e548 = auVar55._0_4_;
          _DAT_180b8e554 = 0;
          DAT_180b8e556 = '\0';
          _DAT_180b8e578 = 0;
          _DAT_180b8e568 = 0;
          _DAT_180b8e54c = _DAT_180b8e548;
          _DAT_180b8e550 = _DAT_180b8e548;
        }
      }
      if (((char)uStack_2c00 == '\0') || (DAT_180b8e2b0 == '\0')) {
        local_5920 = (char *)0xffffffffffffffff;
        local_5928 = (undefined **)((ulonglong)local_5928 & 0xffffffff00000000);
        auVar55 = ZEXT1664(auVar56);
        FUN_180396e00("local_dead_or_camera_unavailable",param_2,uVar46,0);
        FUN_180249d40(&DAT_180b8e420);
        DAT_180b8e588._0_4_ = auVar55._0_4_;
        DAT_180b8e598 = 0;
        DAT_180b8e5a0 = 0;
        DAT_180b8e5a8 = 0;
        DAT_180b8e5b0 = 0;
        DAT_180b8e588._4_4_ = (undefined4)DAT_180b8e588;
        _DAT_180b8e590 = (undefined4)DAT_180b8e588;
      }
      else {
        iVar20 = DAT_180c71358;
        if (DAT_180c71358 == 0) {
          auVar55 = ZEXT1664(auVar56);
          UVar24 = GetTickCount64();
          if (DAT_180c71350 <= UVar24) {
            local_5890[0] = &DAT_1809034f0;
            iVar20 = FUN_1805f68d0(&DAT_1809034f0);
            if (iVar20 != 0) goto LAB_18039d2fa;
            if (DAT_18090353c == 0x7fffffff) {
              DAT_18090353c = 0x7ffffffe;
              goto LAB_18039d2c4;
            }
            if ((DAT_180c71358 == 0) && (DAT_180c71350 <= UVar24)) {
              DAT_180c71358 = FUN_1804174b0("CBasePlayerController",0x7c628c1d);
              if (DAT_180c71358 == 0) {
                DAT_180c71350 = UVar24 + 1000;
              }
              else {
                DAT_180c71350 = 0xffffffffffffffff;
              }
            }
            iVar20 = DAT_180c71358;
            FUN_1805f68fc(&DAT_1809034f0);
            auVar56 = auVar55._0_16_;
            if (iVar20 != 0) goto LAB_18039943f;
          }
        }
        else {
LAB_18039943f:
          puVar39 = (undefined *)((longlong)iVar20 + (longlong)local_2c28);
          if (puVar39 == (undefined *)0x0) {
            bVar44 = false;
            iVar20 = (int)local_2c38;
          }
          else {
            local_58b0[0] = 0;
            auVar55 = ZEXT1664(auVar56);
            lVar32 = FUN_18017ea70();
            *(int *)(lVar32 + 4) = *(int *)(lVar32 + 4) + 1;
            cVar15 = FUN_1804514c0(local_58b0,puVar39,4);
            if (cVar15 == '\0') {
              bVar44 = false;
              lVar32 = FUN_18017ea70();
              auVar56 = auVar55._0_16_;
              if (*(int *)(lVar32 + 4) != 0) {
                *(int *)(lVar32 + 4) = *(int *)(lVar32 + 4) + -1;
              }
              iVar20 = (int)local_2c38;
            }
            else {
              bVar44 = true;
              lVar32 = FUN_18017ea70();
              auVar56 = auVar55._0_16_;
              if (*(int *)(lVar32 + 4) != 0) {
                *(int *)(lVar32 + 4) = *(int *)(lVar32 + 4) + -1;
              }
              iVar20 = local_58b0[0];
            }
          }
          if (!bVar44) {
            iVar20 = 0;
          }
          if (iVar20 != 0) {
            auVar55 = ZEXT1664(auVar56);
            lVar32 = FUN_1803d4150();
            if (lVar32 == lStack_2c20) {
              iVar20 = DAT_180c71318;
              if (DAT_180c71318 == 0) {
                UVar24 = GetTickCount64();
                if (DAT_180c71320 <= UVar24) {
                  local_5890[0] = &DAT_180903400;
                  iVar20 = FUN_1805f68d0(&DAT_180903400);
                  if (iVar20 != 0) goto LAB_18039d2fa;
                  if (DAT_18090344c == 0x7fffffff) {
                    DAT_18090344c = 0x7ffffffe;
                    goto LAB_18039d2c4;
                  }
                  if ((DAT_180c71318 == 0) && (DAT_180c71320 <= UVar24)) {
                    DAT_180c71318 = FUN_1804174b0("C_BasePlayerPawn",0xcf73e28a);
                    if (DAT_180c71318 == 0) {
                      DAT_180c71320 = UVar24 + 1000;
                    }
                    else {
                      DAT_180c71320 = 0xffffffffffffffff;
                    }
                  }
                  iVar20 = DAT_180c71318;
                  FUN_1805f68fc(&DAT_180903400);
                  if (iVar20 != 0) goto LAB_180399584;
                }
              }
              else {
LAB_180399584:
                lVar32 = iVar20 + lStack_2c20;
                if (lVar32 == 0) {
                  bVar44 = false;
                  puVar47 = (undefined1 *)local_2bd8._0_8_;
                }
                else {
                  local_2c48[0] = (undefined1 *)0x0;
                  lVar26 = FUN_18017ea70();
                  *(int *)(lVar26 + 4) = *(int *)(lVar26 + 4) + 1;
                  cVar15 = FUN_1804514c0(local_2c48,lVar32,8);
                  if (cVar15 == '\0') {
                    bVar44 = false;
                    lVar32 = FUN_18017ea70();
                    if (*(int *)(lVar32 + 4) != 0) {
                      *(int *)(lVar32 + 4) = *(int *)(lVar32 + 4) + -1;
                    }
                    puVar47 = (undefined1 *)local_2bd8._0_8_;
                  }
                  else {
                    bVar44 = true;
                    lVar32 = FUN_18017ea70();
                    if (*(int *)(lVar32 + 4) != 0) {
                      *(int *)(lVar32 + 4) = *(int *)(lVar32 + 4) + -1;
                    }
                    puVar47 = local_2c48[0];
                  }
                }
                if (!bVar44) {
                  puVar47 = (undefined1 *)0x0;
                }
                if (puVar47 != (undefined1 *)0x0) {
                  iVar20 = DAT_180c71314;
                  if (DAT_180c71314 == 0) {
                    UVar24 = GetTickCount64();
                    if (DAT_180c71338 <= UVar24) {
                      local_5890[0] = &DAT_180903450;
                      iVar20 = FUN_1805f68d0(&DAT_180903450);
                      if (iVar20 != 0) {
LAB_18039d2fa:
                    /* WARNING: Subroutine does not return */
                        FUN_1805f6d44(5);
                      }
                      if (DAT_18090349c == 0x7fffffff) {
                        DAT_18090349c = 0x7ffffffe;
LAB_18039d2c4:
                    /* WARNING: Subroutine does not return */
                        FUN_1805f6d44(6);
                      }
                      if ((DAT_180c71314 == 0) && (DAT_180c71338 <= UVar24)) {
                        DAT_180c71314 = FUN_1804174b0("CPlayer_MovementServices",0x9927f73d);
                        if (DAT_180c71314 == 0) {
                          DAT_180c71338 = UVar24 + 1000;
                        }
                        else {
                          DAT_180c71338 = 0xffffffffffffffff;
                        }
                      }
                      iVar20 = DAT_180c71314;
                      FUN_1805f68fc(&DAT_180903450);
                      if (iVar20 != 0) goto LAB_1803996b5;
                    }
                  }
                  else {
LAB_1803996b5:
                    if (puVar47 + iVar20 == (undefined1 *)0x0) {
                      bVar44 = false;
                      iVar20 = (int)local_2c38;
                    }
                    else {
                      local_58b0[0] = 0;
                      lVar32 = FUN_18017ea70();
                      *(int *)(lVar32 + 4) = *(int *)(lVar32 + 4) + 1;
                      cVar15 = FUN_1804514c0(local_58b0,puVar47 + iVar20,4);
                      if (cVar15 == '\0') {
                        bVar44 = false;
                        lVar32 = FUN_18017ea70();
                        if (*(int *)(lVar32 + 4) != 0) {
                          *(int *)(lVar32 + 4) = *(int *)(lVar32 + 4) + -1;
                        }
                        iVar20 = (int)local_2c38;
                      }
                      else {
                        bVar44 = true;
                        lVar32 = FUN_18017ea70();
                        if (*(int *)(lVar32 + 4) != 0) {
                          *(int *)(lVar32 + 4) = *(int *)(lVar32 + 4) + -1;
                        }
                        iVar20 = local_58b0[0];
                      }
                    }
                    if (!bVar44) {
                      iVar20 = 0;
                    }
                    if (iVar20 != 0) {
                      FUN_1803de270();
                      FUN_180398380("after_native",DAT_180b0dfb0,lStack_2c20);
                      puVar13 = DAT_180b0dfb0;
                      local_2c48[0] = DAT_180b0dfb0;
                      if ((DAT_180b0dfb0 == (undefined1 *)0x0) ||
                         ((*(uint *)(DAT_180b0dfb0 + 0x20) & 1) == 0)) {
                        local_5920 = (char *)0xffffffffffffffff;
                        local_5928 = (undefined **)CONCAT44(local_5928._4_4_,iVar20);
                        FUN_180396e00("command_or_base_unavailable",param_2,uVar46,puVar47);
                      }
                      else {
                        *(uint *)(DAT_180b0dfb0 + 0x20) = *(uint *)(DAT_180b0dfb0 + 0x20) | 1;
                        local_58a8 = *(ulonglong *)(puVar13 + 0x40);
                        lVar32 = 0;
                        if (local_58a8 != 0) {
                          lVar32 = local_58a8 + 0x10;
                        }
                        if ((lVar32 == 0) ||
                           (cVar15 = FUN_1803de490(local_58a8,puVar13), cVar15 == '\0')) {
                          local_5920 = *(char **)(local_2c48[0] + 8);
                          local_5928 = (undefined **)CONCAT44(local_5928._4_4_,iVar20);
                          FUN_180396e00("command_angles_unavailable",param_2,uVar46,puVar47);
                        }
                        else {
                          if (DAT_180c71308 != lStack_2c20) {
                            DAT_180c71308 = lStack_2c20;
                            DAT_1809033a8 = -0x8000000000000000;
                            DAT_180c712f4 = 0;
                          }
                          if (*(longlong *)(local_2c48[0] + 8) != DAT_1809033a8) {
                            local_5868 = (undefined **)
                                         (ulonglong)
                                         ((uint)*(undefined8 *)(local_2c48[0] + 0x60) & 0x2821);
                            local_5898 = CONCAT44(local_5898._4_4_,*(undefined4 *)(lVar32 + 0x58));
                            uStack_5860 = (ulonglong)(*(uint *)(local_2c48[0] + 0x68) & 0x2821);
                            uStack_5858 = (ulonglong)(*(uint *)(local_2c48[0] + 0x70) & 0x2821);
                            uStack_5850 = CONCAT44(uStack_5850._4_4_,*(undefined4 *)(lVar32 + 0x58))
                            ;
                            DAT_1809033a8 = *(longlong *)(local_2c48[0] + 8);
                            local_5848 = local_5868;
                            local_58b0[0] = FUN_1803972f0(lStack_2c20);
                            local_5920 = *(char **)(local_2c48[0] + 8);
                            local_5928 = (undefined **)CONCAT44(local_5928._4_4_,iVar20);
                            FUN_180396e00("pipeline_ready",param_2,uVar46,puVar47);
                            plVar25 = (longlong *)FUN_18017bf40(local_5890);
                            bVar17 = DAT_180c712f0;
                            lVar32 = *plVar25;
                            LOCK();
                            DAT_180c712f0 = 1;
                            UNLOCK();
                            local_58a0 = (uint)bVar17;
                            lVar26 = FUN_18017ea70();
                            uVar48 = *(undefined8 *)(lVar26 + 8);
                            local_2bb8 = uVar48;
                            piVar21 = (int *)FUN_18017ea70();
                            *piVar21 = *piVar21 + 1;
                            *(char **)(piVar21 + 2) = "create_move: desubtick";
                            uVar49 = extraout_XMM0_Qa;
                            if (bVar17 == 0) {
                              uVar49 = FUN_1800aa120("create_move: feature pipeline begin");
                            }
                            uVar49 = FUN_1803de3b0(uVar49,local_2c48[0]);
                            FUN_180400590(uVar49,lStack_2c20,puVar47);
                            iVar20 = DAT_180c71328;
                            if (DAT_180c71328 == 0) {
                              UVar24 = GetTickCount64();
                              if (UVar24 < DAT_180c71330) {
                                iVar20 = 0;
                              }
                              else {
                                local_5890[0] = &DAT_1809033b0;
                                iVar20 = FUN_1805f68d0(&DAT_1809033b0);
                                if (iVar20 != 0) {
                    /* WARNING: Subroutine does not return */
                                  FUN_1805f6d44(5);
                                }
                                if (DAT_1809033fc == 0x7fffffff) {
                                  DAT_1809033fc = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
                                  FUN_1805f6d44(6);
                                }
                                if ((DAT_180c71328 == 0) && (DAT_180c71330 <= UVar24)) {
                                  DAT_180c71328 = FUN_1804174b0("C_BaseEntity",0x5600aa92);
                                  if (DAT_180c71328 == 0) {
                                    DAT_180c71330 = UVar24 + 1000;
                                  }
                                  else {
                                    DAT_180c71330 = 0xffffffffffffffff;
                                  }
                                }
                                iVar20 = DAT_180c71328;
                                FUN_1805f68fc(&DAT_1809033b0);
                              }
                            }
                            lVar35 = iVar20 + lStack_2c20;
                            lVar26 = FUN_18017ea70();
                            *(int *)(lVar26 + 4) = *(int *)(lVar26 + 4) + 1;
                            bVar44 = false;
                            if (lVar35 != 0) {
                              local_58c8 = 0;
                              cVar15 = FUN_1804514f0(&local_58c8,lVar35,1);
                              if (cVar15 == '\0') {
                                bVar44 = false;
                              }
                              else {
                                bVar44 = true;
                              }
                            }
                            bVar18 = local_58c8;
                            lVar26 = FUN_18017ea70();
                            if (*(int *)(lVar26 + 4) != 0) {
                              *(int *)(lVar26 + 4) = *(int *)(lVar26 + 4) + -1;
                            }
                            bVar33 = 0;
                            if (bVar44) {
                              bVar33 = bVar18;
                            }
                            if ((((((DAT_180cc81b0 != '\0') && ((DAT_180b0dfd8 & 2) != 0)) ||
                                  ((DAT_180cc8360 != '\0' && ((DAT_180b0dfd8 & 2) != 0)))) ||
                                 ((((DAT_180cc8a98 != '\0' || (DAT_180cc8b00 != '\0')) ||
                                   (DAT_180cc8438 != '\0')) ||
                                  ((DAT_180cc8600 != '\0' || (DAT_180cc8960 != '\0')))))) ||
                                ((DAT_180cc8280 != '\0' && ((~DAT_180b8e114 & 1) != 0)))) ||
                               ((((DAT_180cc8a30 != '\0' && (bVar33 == 9)) ||
                                 ((DAT_180cc82f8 != '\0' || (DAT_180cc8b68 != '\0')))) ||
                                (((((~DAT_180b8e114 & 1) != 0 &&
                                   (cVar15 = FUN_1802ff9f0(), cVar15 != '\0')) ||
                                  (DAT_180cad2e8 != '\0')) || (DAT_180cad358 != '\0')))))) {
                              DAT_180b0dfe8 = '\x01';
                              *(uint *)(local_2c48[0] + 0x20) = *(uint *)(local_2c48[0] + 0x20) | 1;
                              puVar28 = (undefined4 *)&DAT_00000010;
                              if (*(longlong *)(local_2c48[0] + 0x40) != 0) {
                                puVar28 = (undefined4 *)(*(longlong *)(local_2c48[0] + 0x40) + 0x20)
                                ;
                              }
                              *puVar28 = 0;
                            }
                            FUN_18017bf40(&local_2c38);
                            puVar47 = local_2c38;
                            local_5828 = ((longlong)local_2c38 - lVar32) / 1000;
                            lVar26 = FUN_18017ea70();
                            *(char **)(lVar26 + 8) = "create_move: shared update";
                            _DAT_180b8e623 = 0;
                            DAT_180b8e622 = '\0';
                            DAT_180b8e628 = 0;
                            if ((DAT_180cad2e0 != 1) || (DAT_180c7e1f0 == '\0')) {
                              DAT_180b8e620 = '\0';
                            }
                            _DAT_180b8f808 = 0;
                            DAT_180b8f80c = 0;
                            DAT_180b8f7b0 = 0;
                            DAT_180b8f7a8 = 0;
                            DAT_180b8f80a = '\0';
                            DAT_180b8f818 = '\0';
                            DAT_180b8e580 = '\0';
                            FUN_1802740d0();
                            lVar26 = FUN_18017ea70();
                            *(char **)(lVar26 + 8) = "create_move: combat misc";
                            FUN_1802461d0(&DAT_180b8e420,local_2c48[0]);
                            FUN_18017bf40(&local_2c38);
                            puVar13 = local_2c38;
                            local_5890[0] =
                                 (undefined *)(((longlong)local_2c38 - (longlong)puVar47) / 1000);
                            if (bVar17 == 0) {
                              FUN_1800aa120("create_move: shared and combat misc ready");
                            }
                            FUN_180303020();
                            DAT_1808fedf1 = 0;
                            DAT_180b8fc30 = '\0';
                            DAT_180b8fe80 = '\0';
                            DAT_180b900c0 = '\0';
                            DAT_180b90028 = '\0';
                            DAT_180b8fffc = '\0';
                            DAT_180b90050 = '\0';
                            if (DAT_180b90090 != (undefined *)0x0) {
                              (**(code **)(*(longlong *)DAT_180b90090 + 0x20))
                                        (DAT_180b90090,DAT_180b90090 != &DAT_180b90058);
                              DAT_180b90090 = (undefined *)0x0;
                            }
                            uVar42 = DAT_180b0dfd8 & 2;
                            bVar17 = ~DAT_180b8e114 & 1;
                            if (((((bVar17 == 0) || (auVar55._0_4_ <= DAT_180b8e120)) ||
                                 ((DAT_180cc8360 == '\0' ||
                                  (((DAT_180b900c1 != '\0' || (DAT_180b900c5 != '\0')) ||
                                   (DAT_180b8fc32 != '\0')))))) ||
                                ((DAT_180b8fc31 != '\0' || (DAT_180b8fe81 != '\0')))) ||
                               (DAT_180b8fe82 != '\0')) {
                              bVar44 = false;
                              local_58c6 = '\0';
                              if (bVar17 != 0) goto LAB_180399f32;
LAB_180399f6f:
                              cVar15 = '\0';
                            }
                            else {
                              bVar44 = true;
                              local_58c6 = '\x01';
LAB_180399f32:
                              if ((((auVar55._0_4_ < DAT_180b8e120) || (DAT_180cc81b0 == '\0')) ||
                                  ((DAT_180cc8218 == '\0' ||
                                   ((((DAT_180b0dfd8 & 2) == 0 || (DAT_180b900c1 != '\0')) ||
                                    (DAT_180b900c5 != '\0')))))) ||
                                 (((DAT_180b8fc32 != '\0' || (DAT_180b8fc31 != '\0')) ||
                                  ((DAT_180b8fe81 != '\0' || (DAT_180b8fe82 != '\0'))))))
                              goto LAB_180399f6f;
                              cVar15 = '\x01';
                            }
                            local_58c7 = cVar15;
                            if ((bVar44) || (cVar15 != '\0')) {
                              local_58c8 = 1;
                              if ((cVar15 == '\0') ||
                                 ((((!bVar44 || (DAT_180cc8a98 != '\0')) || (DAT_180cc8b00 != '\0'))
                                  || (cVar16 = FUN_1802ff9f0(), cVar16 != '\0'))))
                              goto LAB_180399f8c;
                              bVar44 = true;
                            }
                            else {
                              local_58c8 = 0;
LAB_180399f8c:
                              bVar44 = false;
                            }
                            if ((((DAT_180cc81b0 != '\0') && (DAT_180cc8218 != '\0')) &&
                                ((uVar42 != 0 && (bVar17 != 0)))) ||
                               ((((DAT_180cc8a98 != '\0' || (DAT_180cc8b00 != '\0')) &&
                                 (bVar17 == 0)) ||
                                ((DAT_180cc8438 != '\0' || (bVar1 = false, DAT_180cc8600 != '\0'))))
                               )) {
                              bVar1 = true;
                            }
                            local_47a8 = '\0';
                            auVar61 = ZEXT864(0x412e848000000000);
                            auVar59 = ZEXT864(0);
                            auVar54 = ZEXT864(0x408f400000000000);
                            if ((!bVar44) && (bVar1)) {
                              lVar26 = FUN_18017ea70();
                              *(char **)(lVar26 + 8) = "create_move: raw movement prediction";
                              local_58c0 = ZEXT816(0x180808630);
                              uVar49 = FUN_18017bf40(local_58c0 + 8);
                              cVar16 = FUN_1804133c0(uVar49,local_2c48[0],&local_2c28);
                              if ((cVar16 != '\0') && ((cVar15 != '\0' && (DAT_180b8e111 != '\0'))))
                              {
                                lVar26 = FUN_180415e00();
                                local_5918 = *(char **)(lVar26 + 8);
                                local_5920 = (char *)CONCAT44(local_5920._4_4_,DAT_180b8e4f4);
                                local_5928 = local_2c28;
                                FUN_1803a0c90(local_2b88,local_2c48[0],&DAT_180b8e110,lStack_2c20);
                                FUN_18063aed0(&local_57b8,local_2b88,0x1010);
                                local_47a8 = '\x01';
                              }
                              FUN_18017bf40(&local_2c38);
                              puVar47 = local_2c38;
                              uVar36 = (longlong)local_2c38 - local_58c0._8_8_;
                              plVar25 = (longlong *)FUN_1803a5660();
                              ppuVar41 = (undefined **)(*plVar25 + 1);
                              *plVar25 = (longlong)ppuVar41;
                              lVar26 = plVar25[1];
                              plVar25[1] = lVar26 + uVar36;
                              pcVar43 = (char *)(plVar25[3] + (ulonglong)(999999 < uVar36));
                              plVar25[3] = (longlong)pcVar43;
                              uVar37 = plVar25[4] + (ulonglong)(4999999 < uVar36);
                              plVar25[4] = uVar37;
                              puVar45 = (undefined1 *)(plVar25[5] + (ulonglong)(15999999 < uVar36));
                              plVar25[5] = (longlong)puVar45;
                              uVar42 = plVar25[2];
                              if ((ulonglong)plVar25[2] < uVar36) {
                                plVar25[2] = uVar36;
                                uVar42 = uVar36;
                              }
                              if ((puVar47 == (undefined1 *)plVar25[7]) ||
                                 (plVar25[7] <= (longlong)puVar47)) {
                                local_5908 = (char *)((double)((longlong)puVar47 - plVar25[6]) /
                                                     auVar61._0_8_);
                                dVar2 = (double)(lVar26 + uVar36);
                                dVar53 = auVar54._0_8_;
                                if ((double)local_5908 <= auVar59._0_8_) {
                                  local_5900 = (char *)0x0;
                                }
                                else {
                                  local_5900 = (char *)((dVar2 / dVar53) / (double)local_5908);
                                }
                                local_5910 = (char *)(dVar2 / auVar61._0_8_);
                                local_5918 = (char *)((double)uVar42 / dVar53);
                                local_5920 = (char *)((dVar2 / (double)ppuVar41) / dVar53);
                                local_5928 = ppuVar41;
                                local_58f8 = pcVar43;
                                local_58f0 = uVar37;
                                local_58e8 = puVar45;
                                FUN_1801af8a0(dVar2 / (double)ppuVar41,local_5920,local_58c0._0_8_);
                                plVar25[2] = 0;
                                plVar25[1] = 0;
                                *plVar25 = 0;
                                plVar25[5] = 0;
                                plVar25[4] = 0;
                                plVar25[3] = 0;
                                plVar25[6] = (longlong)puVar47;
                                plVar25[7] = (longlong)(puVar47 + 5000000000);
                              }
                            }
                            local_5880._0_8_ = local_2c48;
                            if (local_58c6 == '\0') {
                              FUN_18039d310(local_5880);
                            }
                            lVar26 = FUN_18017ea70();
                            *(char **)(lVar26 + 8) = "create_move: edgejump";
                            local_58c0 = ZEXT816(0x180808788);
                            uVar49 = FUN_18017bf40(local_58c0 + 8);
                            FUN_1803051f0(uVar49,local_2c48[0]);
                            FUN_18017bf40(&local_2c38);
                            puVar47 = local_2c38;
                            uVar36 = (longlong)local_2c38 - local_58c0._8_8_;
                            plVar25 = (longlong *)FUN_1803a5de0();
                            ppuVar41 = (undefined **)(*plVar25 + 1);
                            *plVar25 = (longlong)ppuVar41;
                            lVar26 = plVar25[1];
                            plVar25[1] = lVar26 + uVar36;
                            pcVar43 = (char *)(plVar25[3] + (ulonglong)(999999 < uVar36));
                            plVar25[3] = (longlong)pcVar43;
                            uVar37 = plVar25[4] + (ulonglong)(4999999 < uVar36);
                            plVar25[4] = uVar37;
                            puVar45 = (undefined1 *)(plVar25[5] + (ulonglong)(15999999 < uVar36));
                            plVar25[5] = (longlong)puVar45;
                            uVar42 = plVar25[2];
                            if ((ulonglong)plVar25[2] < uVar36) {
                              plVar25[2] = uVar36;
                              uVar42 = uVar36;
                            }
                            if ((puVar47 == (undefined1 *)plVar25[7]) ||
                               (plVar25[7] <= (longlong)puVar47)) {
                              local_5908 = (char *)((double)((longlong)puVar47 - plVar25[6]) /
                                                   auVar61._0_8_);
                              dVar2 = (double)(lVar26 + uVar36);
                              dVar53 = auVar54._0_8_;
                              if ((double)local_5908 <= auVar59._0_8_) {
                                local_5900 = (char *)0x0;
                              }
                              else {
                                local_5900 = (char *)((dVar2 / dVar53) / (double)local_5908);
                              }
                              local_5910 = (char *)(dVar2 / auVar61._0_8_);
                              local_5918 = (char *)((double)uVar42 / dVar53);
                              local_5920 = (char *)((dVar2 / (double)ppuVar41) / dVar53);
                              local_5928 = ppuVar41;
                              local_58f8 = pcVar43;
                              local_58f0 = uVar37;
                              local_58e8 = puVar45;
                              FUN_1801af8a0(dVar2 / (double)ppuVar41,local_5920,local_58c0._0_8_);
                              plVar25[2] = 0;
                              plVar25[1] = 0;
                              *plVar25 = 0;
                              plVar25[5] = 0;
                              plVar25[4] = 0;
                              plVar25[3] = 0;
                              plVar25[6] = (longlong)puVar47;
                              plVar25[7] = (longlong)(puVar47 + 5000000000);
                            }
                            lVar26 = FUN_18017ea70();
                            *(char **)(lVar26 + 8) = "create_move: edgestop";
                            FUN_180305c10(&DAT_180c7135c,local_2c48[0]);
                            if (DAT_180c7135c != '\0') {
                              DAT_180b8e4f4 = DAT_180b0dfc8._4_4_;
                              DAT_180b0dfe8 = '\x01';
                            }
                            lVar26 = FUN_18017ea70();
                            *(char **)(lVar26 + 8) = "create_move: strafer";
                            local_58c0 = ZEXT816(0x180808718);
                            FUN_18017bf40(local_58c0 + 8);
                            FUN_1802fcfa0(&DAT_180b8fb90,local_2c48[0]);
                            FUN_18017bf40(&local_2c38);
                            puVar47 = local_2c38;
                            uVar36 = (longlong)local_2c38 - local_58c0._8_8_;
                            plVar25 = (longlong *)FUN_1803a5fc0();
                            ppuVar41 = (undefined **)(*plVar25 + 1);
                            *plVar25 = (longlong)ppuVar41;
                            lVar26 = plVar25[1];
                            plVar25[1] = lVar26 + uVar36;
                            pcVar43 = (char *)(plVar25[3] + (ulonglong)(999999 < uVar36));
                            plVar25[3] = (longlong)pcVar43;
                            uVar37 = plVar25[4] + (ulonglong)(4999999 < uVar36);
                            plVar25[4] = uVar37;
                            puVar45 = (undefined1 *)(plVar25[5] + (ulonglong)(15999999 < uVar36));
                            plVar25[5] = (longlong)puVar45;
                            uVar42 = plVar25[2];
                            if ((ulonglong)plVar25[2] < uVar36) {
                              plVar25[2] = uVar36;
                              uVar42 = uVar36;
                            }
                            if ((puVar47 == (undefined1 *)plVar25[7]) ||
                               (plVar25[7] <= (longlong)puVar47)) {
                              local_5908 = (char *)((double)((longlong)puVar47 - plVar25[6]) /
                                                   auVar61._0_8_);
                              dVar2 = (double)(lVar26 + uVar36);
                              dVar53 = auVar54._0_8_;
                              if ((double)local_5908 <= auVar59._0_8_) {
                                local_5900 = (char *)0x0;
                              }
                              else {
                                local_5900 = (char *)((dVar2 / dVar53) / (double)local_5908);
                              }
                              local_5910 = (char *)(dVar2 / auVar61._0_8_);
                              local_5918 = (char *)((double)uVar42 / dVar53);
                              local_5920 = (char *)((dVar2 / (double)ppuVar41) / dVar53);
                              local_5928 = ppuVar41;
                              local_58f8 = pcVar43;
                              local_58f0 = uVar37;
                              local_58e8 = puVar45;
                              FUN_1801af8a0(dVar2 / (double)ppuVar41,local_5920,local_58c0._0_8_);
                              plVar25[2] = 0;
                              plVar25[1] = 0;
                              *plVar25 = 0;
                              plVar25[5] = 0;
                              plVar25[4] = 0;
                              plVar25[3] = 0;
                              plVar25[6] = (longlong)puVar47;
                              plVar25[7] = (longlong)(puVar47 + 5000000000);
                            }
                            uVar42 = local_58a8;
                            if (DAT_180b8fba8 != '\0') {
                              plVar25 = (longlong *)&DAT_00000030;
                              if (local_58a8 != 0) {
                                plVar25 = (longlong *)(local_58a8 + 0x40);
                              }
                              puVar27 = (uint *)&DAT_0000000c;
                              if (*plVar25 != 0) {
                                puVar27 = (uint *)(*plVar25 + 0x1c);
                              }
                              DAT_180b8e4f4 = *puVar27;
                              DAT_180b0dfe8 = '\x01';
                            }
                            if (local_58c8 != 0) {
                              local_2bd8 = ZEXT816(0x1808086f0);
                              FUN_18017bf40(local_2bd8 + 8);
                              FUN_1802ffb50(&DAT_180b8fbe0,local_2c48[0]);
                              FUN_1803a4130(local_2bd8);
                              if (DAT_180b8fbfc != '\0') {
                                plVar25 = (longlong *)&DAT_00000030;
                                if (uVar42 != 0) {
                                  plVar25 = (longlong *)(uVar42 + 0x40);
                                }
                                puVar27 = (uint *)&DAT_0000000c;
                                if (*plVar25 != 0) {
                                  puVar27 = (uint *)(*plVar25 + 0x1c);
                                }
                                DAT_180b8e4f4 = *puVar27;
                                DAT_180b0dfe8 = '\x01';
                              }
                            }
                            if (((DAT_180b900c0 == '\0') && (DAT_180b8fc30 == '\0')) &&
                               (DAT_180b8fe80 == '\0')) {
                              bVar44 = false;
                            }
                            else {
                              bVar44 = true;
                            }
                            if ((DAT_180cd4210 & 1) == 0) {
                              DAT_180cd4210 = DAT_180cd4210 | 1;
                              local_2bd8._0_4_ = 0x6b8c9875;
                              local_2bd8._8_8_ = 0;
                              local_2c38 = local_2bd8;
                              local_2c30 = 1;
                              FUN_18044c9c0(DAT_180c64058,&local_2c38);
                              DAT_180cd4218 = local_2bd8._8_8_;
                            }
                            if (((local_58c7 == '\0') || (bVar44)) ||
                               ((DAT_180cd4218 != 0 && (*(char *)(DAT_180cd4218 + 0x58) != '\0'))))
                            {
                              uVar42 = 0;
LAB_18039a92a:
                              cVar15 = (char)uVar42;
                              bVar17 = 0;
                              if (local_58c7 != '\0') goto LAB_18039a937;
                            }
                            else {
                              uVar42 = 1;
                              if (((local_47a8 == '\0') || (DAT_180b8fba8 != '\0')) ||
                                 (DAT_180b8fbfc != '\0')) goto LAB_18039a92a;
                              lVar26 = FUN_180415e00();
                              local_5918 = *(char **)(lVar26 + 8);
                              local_5920 = (char *)CONCAT44(local_5920._4_4_,DAT_180b8e4f4);
                              local_5928 = local_2c28;
                              FUN_1803a0c90(local_2b88,local_2c48[0],&DAT_180b8e110,lStack_2c20);
                              if ((((local_47b0 == '\0') || (local_1b80 == '\0')) ||
                                  (local_47b8 != local_1b88)) ||
                                 (iVar20 = memcmp(&local_57b8,local_2b88,local_47b8), iVar20 != 0))
                              goto LAB_18039a92a;
                              bVar17 = 1;
LAB_18039a937:
                              plVar25 = (longlong *)FUN_1803a5130();
                              *plVar25 = *plVar25 + 1;
                              plVar25[1] = plVar25[1] + (ulonglong)bVar17;
                              cVar15 = (char)uVar42;
                              plVar25[2] = plVar25[2] + (uVar42 ^ 1);
                              if ((cVar15 == '\0') || (lVar26 = 1, bVar17 != 0)) {
                                lVar26 = 0;
                              }
                              plVar25[3] = plVar25[3] + lVar26;
                              plVar25[4] = plVar25[4] + 1;
                              if ((*(byte *)(plVar25 + 4) & 0x3f) == 0) {
                                local_2c38 = (undefined1 *)GetTickCount64();
                                if ((undefined1 *)plVar25[5] != (undefined1 *)0x0) {
                                  if (local_2c38 < (undefined1 *)plVar25[5]) goto LAB_18039aa52;
                                  FUN_18063ab10(local_2b88,0,0x600);
                                  local_5910 = (char *)plVar25[3];
                                  local_5918 = (char *)plVar25[2];
                                  local_5920 = (char *)plVar25[1];
                                  local_5928 = (undefined **)*plVar25;
                                  FUN_18015ad60(local_2b88,0x600,0xffffffffffffffff,
                                                "considered=%llu reused_exact=%llu no_consumer=%llu replayed=%llu cache_scope=current_command changed_input=replay"
                                               );
                                  local_5928 = &PTR_180700558;
                                  if (local_2b88[0] != '\0') {
                                    local_5928 = (undefined **)&DAT_1806bcfc0;
                                  }
                                  local_5920 = local_2b88;
                                  FUN_1800f6900(0);
                                  plVar25[3] = 0;
                                  plVar25[2] = 0;
                                  plVar25[1] = 0;
                                  *plVar25 = 0;
                                }
                                plVar25[5] = (longlong)(local_2c38 + 5000);
                              }
                            }
LAB_18039aa52:
                            if ((cVar15 != '\0') && (bVar17 == 0)) {
                              lVar26 = FUN_18017ea70();
                              *(char **)(lVar26 + 8) = "create_move: steered bhop prediction";
                              local_58c0 = ZEXT816(0x180808738);
                              FUN_18017bf40(local_58c0 + 8);
                              puVar27 = (uint *)FUN_1803a52e0();
                              uVar46 = *puVar27;
                              local_5870 = uVar46;
                              puVar28 = (undefined4 *)FUN_1803a52e0();
                              *puVar28 = 1;
                              FUN_1804133c0(extraout_XMM0_Qa_00,local_2c48[0],&local_2c28);
                              puVar27 = (uint *)FUN_1803a52e0();
                              *puVar27 = uVar46;
                              FUN_18017bf40(&local_2c38);
                              puVar47 = local_2c38;
                              uVar36 = (longlong)local_2c38 - local_58c0._8_8_;
                              plVar25 = (longlong *)FUN_1803a6380();
                              ppuVar41 = (undefined **)(*plVar25 + 1);
                              *plVar25 = (longlong)ppuVar41;
                              lVar26 = plVar25[1];
                              plVar25[1] = lVar26 + uVar36;
                              pcVar43 = (char *)(plVar25[3] + (ulonglong)(999999 < uVar36));
                              plVar25[3] = (longlong)pcVar43;
                              uVar37 = plVar25[4] + (ulonglong)(4999999 < uVar36);
                              plVar25[4] = uVar37;
                              puVar45 = (undefined1 *)(plVar25[5] + (ulonglong)(15999999 < uVar36));
                              plVar25[5] = (longlong)puVar45;
                              uVar42 = plVar25[2];
                              if ((ulonglong)plVar25[2] < uVar36) {
                                plVar25[2] = uVar36;
                                uVar42 = uVar36;
                              }
                              if ((puVar47 == (undefined1 *)plVar25[7]) ||
                                 (plVar25[7] <= (longlong)puVar47)) {
                                local_5908 = (char *)((double)((longlong)puVar47 - plVar25[6]) /
                                                     auVar61._0_8_);
                                dVar2 = (double)(lVar26 + uVar36);
                                dVar53 = auVar54._0_8_;
                                if ((double)local_5908 <= auVar59._0_8_) {
                                  local_5900 = (char *)0x0;
                                }
                                else {
                                  local_5900 = (char *)((dVar2 / dVar53) / (double)local_5908);
                                }
                                local_5910 = (char *)(dVar2 / auVar61._0_8_);
                                local_5918 = (char *)((double)uVar42 / dVar53);
                                local_5920 = (char *)((dVar2 / (double)ppuVar41) / dVar53);
                                local_5928 = ppuVar41;
                                local_58f8 = pcVar43;
                                local_58f0 = uVar37;
                                local_58e8 = puVar45;
                                FUN_1801af8a0(dVar2 / (double)ppuVar41,local_5920,local_58c0._0_8_);
                                plVar25[2] = 0;
                                plVar25[1] = 0;
                                *plVar25 = 0;
                                plVar25[5] = 0;
                                plVar25[4] = 0;
                                plVar25[3] = 0;
                                plVar25[6] = (longlong)puVar47;
                                plVar25[7] = (longlong)(puVar47 + 5000000000);
                              }
                            }
                            lVar26 = FUN_18017ea70();
                            *(char **)(lVar26 + 8) = "create_move: slope movement";
                            DAT_180bbe88f = 1;
                            DAT_180bbea87 = 0;
                            DAT_180bbea86 = 0;
                            FUN_18017bf40(&local_2c38);
                            lVar26 = ((longlong)DAT_180bda148 - (longlong)local_2c38) / 1000;
                            lVar35 = 0;
                            if (0 < lVar26) {
                              lVar35 = lVar26;
                            }
                            if (DAT_180bbea84 != '\0') {
                              lVar35 = (lVar35 * 2) / 3;
                            }
                            puVar47 = local_2c38 + lVar35 * 1000;
                            local_5870 = 0xff;
                            if (puVar47 == DAT_180bda148) {
                              cVar15 = '\0';
                            }
                            else {
                              cVar15 = -1;
                              if ((longlong)DAT_180bda148 <= (longlong)puVar47) {
                                cVar15 = '\x01';
                              }
                            }
                            DAT_180bda140 = DAT_180bda148;
                            if (cVar15 < '\0') {
                              DAT_180bda140 = puVar47;
                            }
                            local_58c0 = ZEXT816(0x180808850);
                            FUN_18017bf40(local_58c0 + 8);
                            FUN_1803661e0(&DAT_180b90050,local_2c48[0]);
                            FUN_18017bf40(&local_2c38);
                            puVar47 = local_2c38;
                            uVar36 = (longlong)local_2c38 - local_58c0._8_8_;
                            plVar25 = (longlong *)FUN_1803a6560();
                            ppuVar41 = (undefined **)(*plVar25 + 1);
                            *plVar25 = (longlong)ppuVar41;
                            lVar26 = plVar25[1];
                            plVar25[1] = lVar26 + uVar36;
                            pcVar43 = (char *)(plVar25[3] + (ulonglong)(999999 < uVar36));
                            plVar25[3] = (longlong)pcVar43;
                            uVar37 = plVar25[4] + (ulonglong)(4999999 < uVar36);
                            plVar25[4] = uVar37;
                            puVar45 = (undefined1 *)(plVar25[5] + (ulonglong)(15999999 < uVar36));
                            plVar25[5] = (longlong)puVar45;
                            uVar42 = plVar25[2];
                            if ((ulonglong)plVar25[2] < uVar36) {
                              plVar25[2] = uVar36;
                              uVar42 = uVar36;
                            }
                            if ((puVar47 == (undefined1 *)plVar25[7]) ||
                               (plVar25[7] <= (longlong)puVar47)) {
                              local_5908 = (char *)((double)((longlong)puVar47 - plVar25[6]) /
                                                   auVar61._0_8_);
                              dVar2 = (double)(lVar26 + uVar36);
                              dVar53 = auVar54._0_8_;
                              if ((double)local_5908 <= auVar59._0_8_) {
                                local_5900 = (char *)0x0;
                              }
                              else {
                                local_5900 = (char *)((dVar2 / dVar53) / (double)local_5908);
                              }
                              local_5910 = (char *)(dVar2 / auVar61._0_8_);
                              local_5918 = (char *)((double)uVar42 / dVar53);
                              local_5920 = (char *)((dVar2 / (double)ppuVar41) / dVar53);
                              local_5928 = ppuVar41;
                              local_58f8 = pcVar43;
                              local_58f0 = uVar37;
                              local_58e8 = puVar45;
                              FUN_1801af8a0(dVar2 / (double)ppuVar41,local_5920,local_58c0._0_8_);
                              plVar25[2] = 0;
                              plVar25[1] = 0;
                              *plVar25 = 0;
                              plVar25[5] = 0;
                              plVar25[4] = 0;
                              plVar25[3] = 0;
                              plVar25[6] = (longlong)puVar47;
                              plVar25[7] = (longlong)(puVar47 + 5000000000);
                            }
                            lVar26 = FUN_18017ea70();
                            *(char **)(lVar26 + 8) = "create_move: jumpbug";
                            DAT_180bbe88f = 1;
                            DAT_180bbea86 = 1;
                            DAT_180bbea87 = 0;
                            DAT_180bda140 = DAT_180bda148;
                            local_58c0 = ZEXT816(0x180808898);
                            FUN_18017bf40(local_58c0 + 8);
                            FUN_180355a10(&DAT_180b8fed0,local_2c48[0]);
                            FUN_18017bf40(&local_2c38);
                            puVar47 = local_2c38;
                            uVar36 = (longlong)local_2c38 - local_58c0._8_8_;
                            plVar25 = (longlong *)FUN_1803a6740();
                            ppuVar41 = (undefined **)(*plVar25 + 1);
                            *plVar25 = (longlong)ppuVar41;
                            lVar26 = plVar25[1];
                            plVar25[1] = lVar26 + uVar36;
                            pcVar43 = (char *)(plVar25[3] + (ulonglong)(999999 < uVar36));
                            plVar25[3] = (longlong)pcVar43;
                            uVar37 = plVar25[4] + (ulonglong)(4999999 < uVar36);
                            plVar25[4] = uVar37;
                            puVar45 = (undefined1 *)(plVar25[5] + (ulonglong)(15999999 < uVar36));
                            plVar25[5] = (longlong)puVar45;
                            uVar42 = plVar25[2];
                            if ((ulonglong)plVar25[2] < uVar36) {
                              plVar25[2] = uVar36;
                              uVar42 = uVar36;
                            }
                            if ((puVar47 == (undefined1 *)plVar25[7]) ||
                               (plVar25[7] <= (longlong)puVar47)) {
                              local_5908 = (char *)((double)((longlong)puVar47 - plVar25[6]) /
                                                   auVar61._0_8_);
                              dVar2 = (double)(lVar26 + uVar36);
                              dVar53 = auVar54._0_8_;
                              if ((double)local_5908 <= auVar59._0_8_) {
                                local_5900 = (char *)0x0;
                              }
                              else {
                                local_5900 = (char *)((dVar2 / dVar53) / (double)local_5908);
                              }
                              local_5910 = (char *)(dVar2 / auVar61._0_8_);
                              local_5918 = (char *)((double)uVar42 / dVar53);
                              local_5920 = (char *)((dVar2 / (double)ppuVar41) / dVar53);
                              local_5928 = ppuVar41;
                              local_58f8 = pcVar43;
                              local_58f0 = uVar37;
                              local_58e8 = puVar45;
                              FUN_1801af8a0(dVar2 / (double)ppuVar41,local_5920,local_58c0._0_8_);
                              plVar25[2] = 0;
                              plVar25[1] = 0;
                              *plVar25 = 0;
                              plVar25[5] = 0;
                              plVar25[4] = 0;
                              plVar25[3] = 0;
                              plVar25[6] = (longlong)puVar47;
                              plVar25[7] = (longlong)(puVar47 + 5000000000);
                            }
                            DAT_180bbea87 = 0;
                            DAT_180bbea86 = 0;
                            if ((((local_58c6 != '\0') && (DAT_180b8fffc == '\0')) &&
                                (DAT_180b90028 == '\0')) && (DAT_180b90050 == '\0')) {
                              FUN_18039d310(local_5880);
                            }
                            lVar26 = FUN_18017ea70();
                            *(char **)(lVar26 + 8) = "create_move: bhop";
                            local_58c0 = ZEXT816(0x1808087f0);
                            FUN_18017bf40(local_58c0 + 8);
                            FUN_1803398f0(&DAT_1808fedf0,local_2c48[0]);
                            FUN_18017bf40(&local_2c38);
                            puVar47 = local_2c38;
                            uVar36 = (longlong)local_2c38 - local_58c0._8_8_;
                            plVar25 = (longlong *)FUN_1803a6920();
                            ppuVar41 = (undefined **)(*plVar25 + 1);
                            *plVar25 = (longlong)ppuVar41;
                            lVar26 = plVar25[1];
                            plVar25[1] = lVar26 + uVar36;
                            pcVar43 = (char *)(plVar25[3] + (ulonglong)(999999 < uVar36));
                            plVar25[3] = (longlong)pcVar43;
                            uVar37 = plVar25[4] + (ulonglong)(4999999 < uVar36);
                            plVar25[4] = uVar37;
                            puVar45 = (undefined1 *)(plVar25[5] + (ulonglong)(15999999 < uVar36));
                            plVar25[5] = (longlong)puVar45;
                            uVar42 = plVar25[2];
                            if ((ulonglong)plVar25[2] < uVar36) {
                              plVar25[2] = uVar36;
                              uVar42 = uVar36;
                            }
                            if ((puVar47 == (undefined1 *)plVar25[7]) ||
                               (plVar25[7] <= (longlong)puVar47)) {
                              local_5908 = (char *)((double)((longlong)puVar47 - plVar25[6]) /
                                                   auVar61._0_8_);
                              dVar2 = (double)(lVar26 + uVar36);
                              dVar53 = auVar54._0_8_;
                              if ((double)local_5908 <= auVar59._0_8_) {
                                local_5900 = (char *)0x0;
                              }
                              else {
                                local_5900 = (char *)((dVar2 / dVar53) / (double)local_5908);
                              }
                              local_5910 = (char *)(dVar2 / auVar61._0_8_);
                              local_5918 = (char *)((double)uVar42 / dVar53);
                              local_5920 = (char *)((dVar2 / (double)ppuVar41) / dVar53);
                              local_5928 = ppuVar41;
                              local_58f8 = pcVar43;
                              local_58f0 = uVar37;
                              local_58e8 = puVar45;
                              FUN_1801af8a0(dVar2 / (double)ppuVar41,local_5920,local_58c0._0_8_);
                              plVar25[2] = 0;
                              plVar25[1] = 0;
                              *plVar25 = 0;
                              plVar25[5] = 0;
                              plVar25[4] = 0;
                              plVar25[3] = 0;
                              plVar25[6] = (longlong)puVar47;
                              plVar25[7] = (longlong)(puVar47 + 5000000000);
                            }
                            lVar26 = FUN_18017ea70();
                            *(char **)(lVar26 + 8) = "create_move: fastladder";
                            FUN_180306ad0("create_move: fastladder",local_2c48[0]);
                            if ((local_58c6 == '\0') && (local_58c8 == 0)) {
                              local_2bd8 = ZEXT816(0x1808086f0);
                              FUN_18017bf40(local_2bd8 + 8);
                              FUN_1802ffb50(&DAT_180b8fbe0,local_2c48[0]);
                              FUN_1803a4130(local_2bd8);
                              if (DAT_180b8fbfc != '\0') {
                                plVar25 = (longlong *)&DAT_00000030;
                                if (local_58a8 != 0) {
                                  plVar25 = (longlong *)(local_58a8 + 0x40);
                                }
                                puVar27 = (uint *)&DAT_0000000c;
                                if (*plVar25 != 0) {
                                  puVar27 = (uint *)(*plVar25 + 0x1c);
                                }
                                DAT_180b8e4f4 = *puVar27;
                                DAT_180b0dfe8 = '\x01';
                              }
                            }
                            uVar42 = local_58a8;
                            lVar26 = FUN_18017ea70();
                            *(char **)(lVar26 + 8) = "create_move: quickpeek";
                            uVar36 = FUN_180242420(&DAT_180b8e548,local_2c48[0]);
                            if (DAT_180b8e557 != '\0') {
                              plVar25 = (longlong *)&DAT_00000030;
                              if (uVar42 != 0) {
                                plVar25 = (longlong *)(uVar42 + 0x40);
                              }
                              puVar27 = (uint *)&DAT_0000000c;
                              if (*plVar25 != 0) {
                                puVar27 = (uint *)(*plVar25 + 0x1c);
                              }
                              DAT_180b8e4f4 = *puVar27;
                              uVar36 = (ulonglong)DAT_180b8e4f4;
                              DAT_180b0dfe8 = '\x01';
                            }
                            uVar36 = FUN_180301700(uVar36,local_2c48[0]);
                            if (DAT_180c646fa != '\0') {
                              plVar25 = (longlong *)&DAT_00000030;
                              if (uVar42 != 0) {
                                plVar25 = (longlong *)(uVar42 + 0x40);
                              }
                              puVar27 = (uint *)&DAT_0000000c;
                              if (*plVar25 != 0) {
                                puVar27 = (uint *)(*plVar25 + 0x1c);
                              }
                              DAT_180b8e4f4 = *puVar27;
                              uVar36 = (ulonglong)DAT_180b8e4f4;
                              DAT_180b0dfe8 = '\x01';
                            }
                            FUN_180307b00(uVar36,local_2c48[0]);
                            puVar47 = local_2c48[0];
                            auVar60 = auVar61._0_16_;
                            auVar58 = auVar59._0_16_;
                            auVar57 = auVar55._0_16_;
                            auVar56 = auVar54._0_16_;
                            DAT_180b8e541 = 0;
                            if ((local_2c48[0] == (undefined1 *)0x0) || (DAT_180cad358 == '\0')) {
LAB_18039b5a1:
                              DAT_180b8e540 = 0;
                            }
                            else {
                              AcquireSRWLockShared((PSRWLOCK)&DAT_180bb88c0);
                              local_2bd8._8_8_ = lRam0000000180bb8898;
                              local_2bd8._0_8_ = _DAT_180bb8890;
                              uStack_2bc8 = uRam0000000180bb88a0;
                              uStack_2bc0 = uRam0000000180bb88a8;
                              auVar54 = ZEXT1664(auVar54._0_16_);
                              auVar55 = ZEXT1664(auVar55._0_16_);
                              auVar59 = ZEXT1664(auVar59._0_16_);
                              auVar61 = ZEXT1664(auVar61._0_16_);
                              cVar15 = cRam0000000180bb88b8;
                              ReleaseSRWLockShared((PSRWLOCK)&DAT_180bb88c0);
                              auVar60 = auVar61._0_16_;
                              auVar58 = auVar59._0_16_;
                              auVar57 = auVar55._0_16_;
                              auVar56 = auVar54._0_16_;
                              if ((cVar15 == '\0') ||
                                 (((local_2bd8._8_8_ == 0 || (DAT_180bb88c9 != '\0')) ||
                                  (DAT_180bb88ca != '\0')))) goto LAB_18039b5a1;
                              DAT_180b8e540 = 1;
                              if (DAT_180b8e62c == '\0') {
                                *(ulonglong *)(puVar47 + 0x60) = *(ulonglong *)(puVar47 + 0x60) | 4;
                                if (DAT_180b8e62d != '\0') {
                                  DAT_180b8e62d = '\0';
                                }
                              }
                              else {
                                *(ulonglong *)(puVar47 + 0x60) =
                                     *(ulonglong *)(puVar47 + 0x60) & 0xfffffffffffffffb;
                                DAT_180b8e541 = 1;
                              }
                            }
                            auVar55 = ZEXT1664(auVar56);
                            auVar54 = ZEXT1664(auVar57);
                            auVar59 = ZEXT1664(auVar58);
                            auVar61 = ZEXT1664(auVar60);
                            uVar49 = FUN_18034bb90(&DAT_180b900c0,local_2c48[0]);
                            FUN_18032b980(uVar49,local_2c48[0]);
                            if (((local_2c48[0] != (undefined1 *)0x0) && (DAT_180b8fe80 != '\0')) &&
                               (DAT_180b8fe81 != '\0')) {
                              FUN_180301bc0(local_2c48[0],DAT_180b8fe9c);
                            }
                            if ((DAT_180b90050 != '\0') && (DAT_180b90090 != (undefined *)0x0)) {
                              local_2c38 = local_2c48[0];
                              (**(code **)(*(longlong *)DAT_180b90090 + 0x10))
                                        (DAT_180b90090,&local_2c38);
                            }
                            if (((DAT_180b900c0 != '\0') || (DAT_180b8fc30 != '\0')) ||
                               (DAT_180b8fe80 != '\0')) {
                              plVar25 = (longlong *)&DAT_00000030;
                              if (uVar42 != 0) {
                                plVar25 = (longlong *)(uVar42 + 0x40);
                              }
                              puVar27 = (uint *)&DAT_0000000c;
                              if (*plVar25 != 0) {
                                puVar27 = (uint *)(*plVar25 + 0x1c);
                              }
                              DAT_180b8e4f4 = *puVar27;
                              DAT_180b0dfe8 = '\x01';
                            }
                            FUN_18024a220(&DAT_180b8e420,local_2c48[0]);
                            lVar26 = FUN_18017ea70();
                            *(char **)(lVar26 + 8) = "create_move: jumpbug landing accuracy";
                            local_58c0 = ZEXT816(0x180808958);
                            FUN_18017bf40(local_58c0 + 8);
                            DAT_180bbe88f = 1;
                            DAT_180bbea86 = 0;
                            DAT_180bbea87 = 1;
                            DAT_180bda140 = DAT_180bda148;
                            FUN_180361f60(&DAT_180b8fed0,local_2c48[0]);
                            DAT_180bbea87 = 0;
                            DAT_180bbea86 = 0;
                            FUN_18017bf40(&local_2c38);
                            puVar47 = local_2c38;
                            uVar36 = (longlong)local_2c38 - local_58c0._8_8_;
                            plVar25 = (longlong *)FUN_1803a6b00();
                            ppuVar41 = (undefined **)(*plVar25 + 1);
                            *plVar25 = (longlong)ppuVar41;
                            lVar26 = plVar25[1];
                            plVar25[1] = lVar26 + uVar36;
                            pcVar43 = (char *)(plVar25[3] + (ulonglong)(999999 < uVar36));
                            plVar25[3] = (longlong)pcVar43;
                            uVar37 = plVar25[4] + (ulonglong)(4999999 < uVar36);
                            plVar25[4] = uVar37;
                            puVar45 = (undefined1 *)(plVar25[5] + (ulonglong)(15999999 < uVar36));
                            plVar25[5] = (longlong)puVar45;
                            uVar42 = plVar25[2];
                            if ((ulonglong)plVar25[2] < uVar36) {
                              plVar25[2] = uVar36;
                              uVar42 = uVar36;
                            }
                            if ((puVar47 == (undefined1 *)plVar25[7]) ||
                               (plVar25[7] <= (longlong)puVar47)) {
                              local_5908 = (char *)((double)((longlong)puVar47 - plVar25[6]) /
                                                   auVar61._0_8_);
                              dVar2 = (double)(lVar26 + uVar36);
                              dVar53 = auVar55._0_8_;
                              if ((double)local_5908 <= auVar59._0_8_) {
                                local_5900 = (char *)0x0;
                              }
                              else {
                                local_5900 = (char *)((dVar2 / dVar53) / (double)local_5908);
                              }
                              local_5910 = (char *)(dVar2 / auVar61._0_8_);
                              local_5918 = (char *)((double)uVar42 / dVar53);
                              local_5920 = (char *)((dVar2 / (double)ppuVar41) / dVar53);
                              local_5928 = ppuVar41;
                              local_58f8 = pcVar43;
                              local_58f0 = uVar37;
                              local_58e8 = puVar45;
                              FUN_1801af8a0(dVar2 / (double)ppuVar41,local_5920,local_58c0._0_8_);
                              plVar25[2] = 0;
                              plVar25[1] = 0;
                              *plVar25 = 0;
                              plVar25[5] = 0;
                              plVar25[4] = 0;
                              plVar25[3] = 0;
                              plVar25[6] = (longlong)puVar47;
                              plVar25[7] = (longlong)(puVar47 + 5000000000);
                            }
                            FUN_18032bde0(&DAT_180b8fc30,local_2c48[0]);
                            FUN_180303ca0();
                            FUN_1803554a0();
                            FUN_18017bf40(&local_2c38);
                            puVar47 = local_2c38;
                            local_5830 = ((longlong)local_2c38 - (longlong)puVar13) / 1000;
                            lVar26 = FUN_18017ea70();
                            *(char **)(lVar26 + 8) = "create_move: rage";
                            local_5880 = ZEXT816(0x1808089a8);
                            uVar49 = FUN_18017bf40(local_5880 + 8);
                            FUN_180254d40(uVar49,local_2c48[0]);
                            FUN_18017bf40(&local_2c38);
                            puVar45 = local_2c38;
                            uVar36 = (longlong)local_2c38 - local_5880._8_8_;
                            plVar25 = (longlong *)FUN_1803a6ce0();
                            ppuVar41 = (undefined **)(*plVar25 + 1);
                            *plVar25 = (longlong)ppuVar41;
                            lVar26 = plVar25[1];
                            plVar25[1] = lVar26 + uVar36;
                            pcVar43 = (char *)(plVar25[3] + (ulonglong)(999999 < uVar36));
                            plVar25[3] = (longlong)pcVar43;
                            uVar37 = plVar25[4] + (ulonglong)(4999999 < uVar36);
                            plVar25[4] = uVar37;
                            local_2c38 = (undefined1 *)(plVar25[5] + (ulonglong)(15999999 < uVar36))
                            ;
                            plVar25[5] = (longlong)local_2c38;
                            uVar42 = plVar25[2];
                            if ((ulonglong)plVar25[2] < uVar36) {
                              plVar25[2] = uVar36;
                              uVar42 = uVar36;
                            }
                            local_58c0._0_8_ = plVar25;
                            if ((puVar45 == (undefined1 *)plVar25[7]) ||
                               (plVar25[7] <= (longlong)puVar45)) {
                              local_5908 = (char *)((double)((longlong)puVar45 - plVar25[6]) /
                                                   auVar61._0_8_);
                              dVar2 = (double)(lVar26 + uVar36);
                              dVar53 = auVar55._0_8_;
                              if ((double)local_5908 <= auVar59._0_8_) {
                                local_5900 = (char *)0x0;
                              }
                              else {
                                local_5900 = (char *)((dVar2 / dVar53) / (double)local_5908);
                              }
                              local_5910 = (char *)(dVar2 / auVar61._0_8_);
                              local_5918 = (char *)((double)uVar42 / dVar53);
                              local_5920 = (char *)((dVar2 / (double)ppuVar41) / dVar53);
                              local_5928 = ppuVar41;
                              local_58f8 = pcVar43;
                              local_58f0 = uVar37;
                              local_58e8 = local_2c38;
                              FUN_1801af8a0(dVar2 / (double)ppuVar41,plVar25,local_5880._0_8_);
                              *(longlong *)(local_58c0._0_8_ + 0x10) = 0;
                              *(longlong *)(local_58c0._0_8_ + 8) = 0;
                              *(longlong *)local_58c0._0_8_ = 0;
                              *(longlong *)(local_58c0._0_8_ + 0x28) = 0;
                              *(longlong *)(local_58c0._0_8_ + 0x20) = 0;
                              *(longlong *)(local_58c0._0_8_ + 0x18) = 0;
                              *(undefined1 **)(local_58c0._0_8_ + 0x30) = puVar45;
                              *(undefined1 **)(local_58c0._0_8_ + 0x38) = puVar45 + 5000000000;
                            }
                            FUN_18017bf40(&local_2c38);
                            puVar45 = local_2c38;
                            local_58c0._0_8_ = ((longlong)local_2c38 - (longlong)puVar47) / 1000;
                            lVar26 = FUN_18017ea70();
                            *(char **)(lVar26 + 8) = "create_move: legit";
                            local_2bd8 = ZEXT816(0x1808088d0);
                            uVar49 = FUN_18017bf40(local_2bd8 + 8);
                            FUN_180236070(uVar49,local_2c48[0]);
                            FUN_18017bf40(&local_2c38);
                            puVar47 = local_2c38;
                            uVar36 = (longlong)local_2c38 - local_2bd8._8_8_;
                            plVar25 = (longlong *)FUN_1803a6ec0();
                            local_5880._0_8_ = plVar25;
                            ppuVar41 = (undefined **)(*plVar25 + 1);
                            *plVar25 = (longlong)ppuVar41;
                            lVar26 = plVar25[1];
                            plVar25[1] = lVar26 + uVar36;
                            pcVar43 = (char *)(plVar25[3] + (ulonglong)(999999 < uVar36));
                            plVar25[3] = (longlong)pcVar43;
                            uVar37 = plVar25[4] + (ulonglong)(4999999 < uVar36);
                            plVar25[4] = uVar37;
                            local_2c38 = (undefined1 *)(plVar25[5] + (ulonglong)(15999999 < uVar36))
                            ;
                            plVar25[5] = (longlong)local_2c38;
                            uVar42 = plVar25[2];
                            if ((ulonglong)plVar25[2] < uVar36) {
                              plVar25[2] = uVar36;
                              uVar42 = uVar36;
                            }
                            if ((puVar47 == (undefined1 *)plVar25[7]) ||
                               (plVar25[7] <= (longlong)puVar47)) {
                              local_5908 = (char *)((double)((longlong)puVar47 - plVar25[6]) /
                                                   auVar61._0_8_);
                              dVar2 = (double)(lVar26 + uVar36);
                              dVar53 = auVar55._0_8_;
                              if ((double)local_5908 <= auVar59._0_8_) {
                                local_5900 = (char *)0x0;
                              }
                              else {
                                local_5900 = (char *)((dVar2 / dVar53) / (double)local_5908);
                              }
                              local_5910 = (char *)(dVar2 / auVar61._0_8_);
                              local_5918 = (char *)((double)uVar42 / dVar53);
                              local_5920 = (char *)((dVar2 / (double)ppuVar41) / dVar53);
                              local_5928 = ppuVar41;
                              local_58f8 = pcVar43;
                              local_58f0 = uVar37;
                              local_58e8 = local_2c38;
                              FUN_1801af8a0(dVar2 / (double)ppuVar41,plVar25,local_2bd8._0_8_);
                              *(undefined8 *)(local_5880._0_8_ + 0x10) = 0;
                              *(undefined8 *)(local_5880._0_8_ + 8) = 0;
                              *(undefined8 *)local_5880._0_8_ = 0;
                              *(undefined8 *)(local_5880._0_8_ + 0x28) = 0;
                              *(undefined8 *)(local_5880._0_8_ + 0x20) = 0;
                              *(undefined8 *)(local_5880._0_8_ + 0x18) = 0;
                              *(undefined1 **)(local_5880._0_8_ + 0x30) = puVar47;
                              *(undefined1 **)(local_5880._0_8_ + 0x38) = puVar47 + 5000000000;
                            }
                            FUN_18017bf40(&local_2c38);
                            lVar26 = (longlong)local_2c38 - (longlong)puVar45;
                            puVar47 = (undefined1 *)(lVar26 / 1000);
                            local_2c38 = puVar47;
                            FUN_1802ee830(lVar26,local_2c48[0]);
                            if (local_58a0 == 0) {
                              FUN_1800aa120("create_move: post-combat movement end");
                            }
                            if ((((((DAT_180b8e622 == '\0') && (DAT_180b8f808 == 0)) &&
                                  ((*(uint *)(local_2c48[0] + 0x60) & 0x801) == 0)) &&
                                 ((DAT_180b90050 == '\0' && (DAT_180b900c0 == '\0')))) &&
                                (DAT_180b8fc30 == '\0')) &&
                               (((DAT_180b8fe80 == '\0' && (DAT_180b8fffc == '\0')) &&
                                ((DAT_180b90028 == '\0' &&
                                 (FUN_180243c80(&DAT_180b8e580), DAT_180b8e580 != '\0')))))) {
                              plVar25 = (longlong *)&DAT_00000030;
                              if (local_58a8 != 0) {
                                plVar25 = (longlong *)(local_58a8 + 0x40);
                              }
                              puVar27 = (uint *)&DAT_0000000c;
                              if (*plVar25 != 0) {
                                puVar27 = (uint *)(*plVar25 + 0x1c);
                              }
                              DAT_180b8e4f4 = *puVar27;
                              DAT_180b0dfe8 = '\x01';
                            }
                            lVar26 = FUN_18017ea70();
                            *(char **)(lVar26 + 8) = "create_move: final anti-aim movement";
                            FUN_18024a220(&DAT_180b8e420,local_2c48[0]);
                            lVar26 = FUN_18017ea70();
                            *(char **)(lVar26 + 8) = "create_move: hide shot v2";
                            FUN_1802522f0("create_move: hide shot v2",local_2c48[0]);
                            local_58c7 = DAT_180b8e622;
                            local_58c6 = DAT_180b8e620;
                            if ((DAT_180b8e622 != DAT_180c712fa) || (DAT_180b8e620 != DAT_180c712f8)
                               ) {
                              *(uint *)(local_2c48[0] + 0x20) = *(uint *)(local_2c48[0] + 0x20) | 1;
                              pHVar14 = DAT_180c6e520;
                              lVar26 = 0;
                              if (*(longlong *)(local_2c48[0] + 0x40) != 0) {
                                lVar26 = *(longlong *)(local_2c48[0] + 0x40) + 0x10;
                              }
                              if (DAT_180c6e520 == (HWND)0x0) {
LAB_18039bf14:
                                local_58a8 = local_58a8 & 0xffffffff00000000;
                              }
                              else {
                                pHVar29 = GetForegroundWindow();
                                local_58a8 = CONCAT44(local_58a8._4_4_,1);
                                if (pHVar29 != pHVar14) goto LAB_18039bf14;
                              }
                              lVar35 = DAT_180c70e78;
                              if (DAT_180c70e78 == 0) {
                                local_5880._0_8_ = 0xffffffffffffffff;
                              }
                              else {
                                UVar24 = GetTickCount64();
                                local_5880._0_8_ = UVar24 - lVar35;
                              }
                              if (lVar26 == 0) {
                                fVar50 = 0.0;
                                fVar51 = 0.0;
                              }
                              else {
                                fVar50 = *(float *)(lVar26 + 0x4c);
                                fVar51 = *(float *)(lVar26 + 0x48);
                              }
                              if (DAT_180c70a60 != 0) {
                                lVar26 = DAT_180c70a60 + 0x54;
                                if (lVar26 == 0) {
LAB_18039bfa0:
                                  bVar17 = 0xff;
                                }
                                else {
                                  local_58c8 = 0;
                                  lVar35 = FUN_18017ea70();
                                  *(int *)(lVar35 + 4) = *(int *)(lVar35 + 4) + 1;
                                  cVar15 = FUN_1804514c0(&local_58c8,lVar26,1);
                                  if (cVar15 == '\0') {
                                    lVar26 = FUN_18017ea70();
                                    if (*(int *)(lVar26 + 4) != 0) {
                                      *(int *)(lVar26 + 4) = *(int *)(lVar26 + 4) + -1;
                                    }
                                    goto LAB_18039bfa0;
                                  }
                                  lVar26 = FUN_18017ea70();
                                  if (*(int *)(lVar26 + 4) != 0) {
                                    *(int *)(lVar26 + 4) = *(int *)(lVar26 + 4) + -1;
                                  }
                                  bVar17 = local_58c8;
                                }
                                local_5870 = (uint)bVar17;
                              }
                              SVar19 = GetAsyncKeyState(0x1b);
                              cVar15 = DAT_180ccaa20;
                              pcVar43 = "false";
                              pcVar40 = "false";
                              if (SVar19 < 0) {
                                pcVar40 = "true";
                              }
                              FUN_18063ab10(local_2b88,0,0x600);
                              cVar16 = local_58c6;
                              local_58d8 = (char *)(double)fVar50;
                              local_58e0 = (double)fVar51;
                              local_5900 = "false";
                              if ((int)local_58a8 != 0) {
                                local_5900 = "true";
                              }
                              local_5908 = "false";
                              if (cVar15 != '\0') {
                                local_5908 = "true";
                              }
                              local_5910 = "false";
                              if ((local_2c48[0][0x60] & 1) != 0) {
                                local_5910 = "true";
                              }
                              local_5918 = "false";
                              if (local_58c6 != '\0') {
                                local_5918 = "true";
                              }
                              if (local_58c7 != '\0') {
                                pcVar43 = "true";
                              }
                              local_58e8 = (undefined1 *)CONCAT44(local_58e8._4_4_,local_5870);
                              local_58f0 = local_5880._0_8_;
                              local_5928 = *(undefined ***)(local_2c48[0] + 8);
                              local_5920 = pcVar43;
                              local_58f8 = pcVar40;
                              FUN_18015ad60(local_2b88,0x600,0xffffffffffffffff,
                                            "command=%lld firing=%s stopping=%s attack=%s menu_open=%s foreground=%s escape_down=%s escape_age_ms=%lld relative_mouse=%d forward=%.3f left=%.3f"
                                           );
                              local_5928 = &PTR_180700558;
                              if (local_2b88[0] != '\0') {
                                local_5928 = (undefined **)&DAT_1806bcfc0;
                              }
                              local_5920 = local_2b88;
                              FUN_1800f6900(0);
                              DAT_180c712fa = local_58c7;
                              DAT_180c712f8 = cVar16;
                              puVar47 = local_2c38;
                            }
                            uVar46 = local_58a0;
                            if (local_58a0 == 0) {
                              FUN_1800aa120("create_move: quickpeek end");
                              FUN_1800aa120("create_move: final subtick begin");
                            }
                            lVar26 = FUN_18017ea70();
                            *(char **)(lVar26 + 8) = "create_move: final subtick";
                            *(uint *)(local_2c48[0] + 0x20) = *(uint *)(local_2c48[0] + 0x20) | 1;
                            puVar27 = (uint *)0x0;
                            if (*(longlong *)(local_2c48[0] + 0x40) != 0) {
                              puVar27 = (uint *)(*(longlong *)(local_2c48[0] + 0x40) + 0x10);
                            }
                            if (puVar27 != (uint *)0x0) {
                              uVar42 = 0;
                              if (puVar27[4] != 0) {
                                do {
                                  lVar26 = *(longlong *)
                                            (*(longlong *)(puVar27 + 6) + 8 +
                                            (longlong)(int)uVar42 * 8);
                                  puVar34 = (uint *)0x0;
                                  if (lVar26 != 0) {
                                    puVar34 = (uint *)(lVar26 + 0x10);
                                  }
                                  if ((puVar34 != (uint *)0x0) &&
                                     (((*puVar34 & 8) != 0 || ((*puVar34 & 0x10) != 0)))) {
                                    if (DAT_180b0dfe8 != '\0') {
                                      puVar27[0x12] = 0;
                                      puVar27[0x13] = 0;
                                      *puVar27 = *puVar27 | 0xc0;
                                    }
                                    break;
                                  }
                                  uVar42 = uVar42 + 1;
                                } while (uVar42 < (ulonglong)(longlong)(int)puVar27[4]);
                              }
                            }
                            if (uVar46 == 0) {
                              FUN_1800aa120("create_move: final subtick end");
                            }
                            lVar26 = FUN_18017ea70();
                            puVar45 = local_2c48[0];
                            *(char **)(lVar26 + 8) = "create_move: rage final command";
                            local_58c7 = FUN_180254650("create_move: rage final command",
                                                       local_2c48[0]);
                            plVar25 = (longlong *)FUN_18017bf40(&local_2bb8);
                            local_5880._0_8_ =
                                 (((*plVar25 - (longlong)puVar13) / 1000 - (longlong)puVar47) -
                                 local_5830) - local_58c0._0_8_;
                            piVar21 = (int *)FUN_18017ea70();
                            *(undefined8 *)(piVar21 + 2) = uVar48;
                            if (*piVar21 != 0) {
                              *piVar21 = *piVar21 + -1;
                            }
                            bVar17 = DAT_180c712f9;
                            LOCK();
                            DAT_180c712f9 = 1;
                            UNLOCK();
                            local_58a0 = (uint)bVar17;
                            if (local_58a0 == 0) {
                              FUN_1800aa120("create_move: input apply begin");
                            }
                            lVar26 = FUN_18017ea70();
                            uVar48 = *(undefined8 *)(lVar26 + 8);
                            local_2bb8 = uVar48;
                            piVar21 = (int *)FUN_18017ea70();
                            *piVar21 = *piVar21 + 1;
                            *(char **)(piVar21 + 2) = "create_move: input apply";
                            FUN_18017bf40(&local_5870);
                            bVar17 = FUN_1803def00();
                            if (((DAT_180b90050 != '\0') && (puVar45 != (undefined1 *)0x0)) &&
                               (lVar26 = *(longlong *)(puVar45 + 8), lVar26 == DAT_180b90098)) {
                              lVar35 = 0;
                              if (*(longlong *)(puVar45 + 0x40) != 0) {
                                lVar35 = *(longlong *)(puVar45 + 0x40) + 0x10;
                              }
                              if (lVar35 == 0) {
                                fVar50 = NAN;
                                fVar51 = NAN;
                                uVar38 = 0xffffffff;
                              }
                              else {
                                uVar38 = *(undefined4 *)(lVar35 + 0x10);
                                fVar50 = *(float *)(lVar35 + 0x48);
                                fVar51 = *(float *)(lVar35 + 0x4c);
                              }
                              FUN_18063ab10(local_2b88,0,0x600);
                              local_5908 = (char *)(double)fVar51;
                              local_5910 = (char *)(double)fVar50;
                              local_5900 = *(char **)(puVar45 + 0x60);
                              local_5918 = (char *)CONCAT44(local_5918._4_4_,uVar38);
                              local_5920 = (char *)CONCAT44(local_5920._4_4_,(uint)bVar17);
                              local_5928 = (undefined **)lVar26;
                              FUN_18015ad60(local_2b88,0x600,0xffffffffffffffff,
                                            "command=%lld serialized=%d subticks=%d forward=%.4f left=%.4f buttons=0x%llx velocity_written=0 server_ack=unverified"
                                           );
                              local_5928 = &PTR_180700558;
                              if (local_2b88[0] != '\0') {
                                local_5928 = (undefined **)&DAT_1806bcfc0;
                              }
                              local_5920 = local_2b88;
                              FUN_1800f6900(0);
                            }
                            puVar23 = (undefined *)FUN_1803a70a0();
                            puVar39 = &DAT_180ba31a0;
                            if (puVar23 != (undefined *)0x0) {
                              puVar39 = puVar23;
                            }
                            if ((local_58c7 == '\0') || (DAT_180b8e622 == '\0')) {
                              cVar15 = '\0';
                            }
                            else {
                              cVar15 = '\x01';
                            }
                            local_58c8 = DAT_180b8f808;
                            local_57b8 = 0;
                            local_57b0 = 0;
                            local_57a8 = 0xffffffffffffffff;
                            local_57a0 = 0;
                            local_5798 = 0;
                            local_5790 = 0;
                            local_5788 = 0;
                            local_5780 = 0;
                            local_5778 = 0;
                            local_5770 = 0;
                            local_5768 = 0;
                            local_5760 = 0;
                            local_5758 = 0;
                            local_574c = (undefined1  [16])0x0;
                            local_5750 = 0;
                            local_573c = auVar54._0_4_;
                            local_5734 = 0;
                            local_572c = 0;
                            local_5728 = 0xffffffff;
                            local_5724 = 0;
                            local_5720 = 0x1000000;
                            local_5738 = local_573c;
                            FUN_18063ab10(local_5718,0,0x2900);
                            FUN_180382020(local_5718);
                            FUN_18063ab10(local_2e18,0,0x140);
                            puVar28 = local_2e18;
                            lVar26 = 8;
                            do {
                              *(undefined8 *)(puVar28 + 1) = 0;
                              *(undefined8 *)(puVar28 + 3) = 0;
                              *(undefined8 *)(puVar28 + 5) = 0;
                              *(undefined8 *)(puVar28 + 7) = 0;
                              puVar28[9] = 0;
                              *puVar28 = 0;
                              puVar28 = puVar28 + 10;
                              lVar26 = lVar26 + -1;
                            } while (lVar26 != 0);
                            auVar55 = ZEXT1664(auVar55._0_16_);
                            auVar54 = ZEXT1664(auVar59._0_16_);
                            auVar59 = ZEXT1664(auVar61._0_16_);
                            FUN_18063aed0(puVar39,&local_57b8,0x2ae0);
                            if ((((bVar17 != 0) && ((cVar15 != '\0' || (local_58c8 != 0)))) &&
                                (((ulonglong)local_5848 & 0x2801) == 0)) &&
                               (((int)local_5898 == 0 &&
                                (iVar20 = FUN_1803972f0(lStack_2c20), local_58b0[0] == iVar20)))) {
                              if (((cVar15 == '\0') ||
                                  (lVar26 = FUN_180252d60(&DAT_180c7e1f0),
                                  *(char *)(lVar26 + 0x318) == '\0')) &&
                                 ((local_58c8 == 0 || (DAT_180b8f809 == '\0')))) {
                                local_58c8 = 0;
                              }
                              else {
                                local_58c8 = 1;
                              }
                              auVar52 = ZEXT464(DAT_180b8e148);
                              auVar61 = ZEXT464(DAT_180b8e14c);
                              local_5918 = (char *)GetTickCount64();
                              local_58f8 = (char *)CONCAT71(local_58f8._1_7_,local_58c8);
                              local_5900 = local_58c5;
                              local_5908 = (char *)CONCAT71(local_5908._1_7_,cVar15);
                              auVar56 = vunpcklps_avx(auVar52._0_16_,auVar61._0_16_);
                              local_5910 = auVar56._0_8_;
                              local_5920 = (char *)CONCAT44(local_5920._4_4_,local_58b0[0]);
                              local_5928 = local_2c28;
                              auVar55 = ZEXT1664(auVar55._0_16_);
                              auVar54 = ZEXT1664(auVar54._0_16_);
                              auVar59 = ZEXT1664(auVar59._0_16_);
                              uVar49 = FUN_1803a0f80(local_2b88,puVar45,&local_5868,lStack_2c20);
                              FUN_18063aed0(&local_57b8,uVar49,0x2ae0);
                              FUN_18063aed0(puVar39,&local_57b8,0x2ae0);
                              UVar24 = GetTickCount64();
                              if ((puVar39[0x98] == '\0') &&
                                 (*(ulonglong *)(puVar39 + 0x2ae8) <= UVar24)) {
                                *(ULONGLONG *)(puVar39 + 0x2ae8) = UVar24 + 1000;
                                FUN_18063ab10(local_2b88,0,0x600);
                                local_5920 = "legit";
                                if (cVar15 != '\0') {
                                  local_5920 = "rage";
                                }
                                local_5910 = (char *)CONCAT44(local_5910._4_4_,
                                                              *(undefined4 *)(puVar45 + 0x30));
                                local_5918 = (char *)CONCAT44(local_5918._4_4_,local_58b0[0]);
                                local_5928 = *(undefined ***)(puVar45 + 8);
                                FUN_18015ad60(local_2b88,0x600,0xffffffffffffffff,
                                              "command=%lld feature=%s reason=invalid_or_unavailable_native_shot_storage weapon_handle=%u history=%d"
                                             );
                                local_5928 = &PTR_180700558;
                                if (local_2b88[0] != '\0') {
                                  local_5928 = (undefined **)&DAT_1806bcfc0;
                                }
                                local_5920 = local_2b88;
                                FUN_1800f6900(2,local_5920,"Shots","SHOT_COMMAND_CAPTURE_REJECTED");
                              }
                            }
                            cVar15 = local_58c7;
                            if (((local_58c7 == '\0') || (bVar17 == 0)) || (DAT_180b8e622 == '\0'))
                            {
                              puVar39[0x2b54] = 0;
                              FUN_18024d940(&DAT_180b8e420,puVar45,bVar17);
                              uVar49 = FUN_1803966f0(puVar45,bVar17);
                              if ((cVar15 == '\0') || (bVar17 == 0)) {
                                bVar44 = false;
                              }
                              else {
                                bVar44 = true;
                              }
                            }
                            else {
                              puVar30 = (undefined8 *)FUN_180398030(&local_5820,puVar45,lStack_2c20)
                              ;
                              uVar49 = puVar30[1];
                              uVar3 = puVar30[2];
                              uVar4 = puVar30[3];
                              uVar5 = puVar30[4];
                              uVar6 = puVar30[5];
                              uVar7 = puVar30[6];
                              uVar8 = puVar30[7];
                              uVar9 = puVar30[8];
                              uVar10 = puVar30[9];
                              uVar11 = puVar30[10];
                              uVar12 = puVar30[0xb];
                              *(undefined8 *)(puVar39 + 11000) = *puVar30;
                              *(undefined8 *)(puVar39 + 0x2b00) = uVar49;
                              *(undefined8 *)(puVar39 + 0x2b08) = uVar3;
                              *(undefined8 *)(puVar39 + 0x2b10) = uVar4;
                              *(undefined8 *)(puVar39 + 0x2b18) = uVar5;
                              *(undefined8 *)(puVar39 + 0x2b20) = uVar6;
                              *(undefined8 *)(puVar39 + 0x2b28) = uVar7;
                              *(undefined8 *)(puVar39 + 0x2b30) = uVar8;
                              *(undefined8 *)(puVar39 + 0x2b38) = uVar9;
                              *(undefined8 *)(puVar39 + 0x2b40) = uVar10;
                              *(undefined8 *)(puVar39 + 0x2b48) = uVar11;
                              *(undefined8 *)(puVar39 + 0x2b50) = uVar12;
                              auVar55 = ZEXT1664(auVar55._0_16_);
                              auVar54 = ZEXT1664(auVar54._0_16_);
                              auVar59 = ZEXT1664(auVar59._0_16_);
                              FUN_18024d940(&DAT_180b8e420,puVar45,bVar17);
                              uVar49 = FUN_1803966f0(puVar45,bVar17);
                              bVar44 = true;
                            }
                            if (DAT_180b8e622 != '\0') {
                              if (bVar44) {
                                DAT_180cc9680 = DAT_180b8e628;
                                if (puVar45 == (undefined1 *)0x0) {
                                  uVar49 = 0xffffffffffffffff;
                                }
                                else {
                                  FUN_1802d1c40(uVar49,*(undefined8 *)(puVar45 + 8),1);
                                  uVar49 = *(undefined8 *)(puVar45 + 8);
                                }
                                iVar20 = DAT_180b8e628;
                                FUN_18063ab10(local_2b88,0,0x600);
                                local_5920 = (char *)CONCAT44(local_5920._4_4_,iVar20);
                                local_5928 = (undefined **)uVar49;
                                FUN_18015ad60(local_2b88,0x600,0xffffffffffffffff,
                                              "command=%lld shoot_tick=%d");
                                local_5928 = &PTR_180700558;
                                if (local_2b88[0] != '\0') {
                                  local_5928 = (undefined **)&DAT_1806bcfc0;
                                }
                                local_5920 = local_2b88;
                                uVar49 = FUN_1800f6900(0);
                              }
                              else {
                                if (puVar45 != (undefined1 *)0x0) {
                                  FUN_1802d1c40(uVar49,*(undefined8 *)(puVar45 + 8),0);
                                }
                                uVar49 = FUN_180254480(&DAT_180b8e5b8,puVar45,"serialization");
                                DAT_180b8e622 = '\0';
                              }
                              DAT_180b8e628 = 0;
                            }
                            if (DAT_180b8f818 != '\0') {
                              FUN_1802d1c40(uVar49,DAT_180b8f810,bVar17);
                              DAT_180b8f818 = '\0';
                            }
                            if (DAT_180b8f80a != '\0') {
                              if (bVar17 == 0) {
                                DAT_180b8f7b8 = 0;
                              }
                              else {
                                UVar24 = GetTickCount64();
                                DAT_180b8f7b8 = UVar24 + 500;
                              }
                            }
                            lVar26 = DAT_180b8f7a8;
                            bVar18 = DAT_180b8f808;
                            if (DAT_180b8f808 == 0) {
                              if (bVar17 == 0) goto LAB_18039c92a;
LAB_18039c932:
                              if (bVar17 != 0) goto LAB_18039c94c;
                            }
                            else {
                              if (bVar17 == 0) {
LAB_18039c92a:
                                _DAT_180b8f808 = _DAT_180b8f808 & 0xff00;
                                bVar18 = 0;
                                goto LAB_18039c932;
                              }
                              if (DAT_180b8f80c < 1) goto LAB_18039c932;
                              DAT_180cc9680 = DAT_180b8f80c;
                              UVar24 = GetTickCount64();
                              if (UVar24 < DAT_180b8f7b0) {
                                UVar24 = DAT_180b8f7b0;
                              }
                              DAT_180b8e7a0 = UVar24 + lVar26;
                              bVar18 = DAT_180b8f808;
LAB_18039c94c:
                              if (((DAT_180b8e622 != '\0') || (bVar18 != 0)) &&
                                 (DAT_180b8e556 != '\0')) {
                                _DAT_180b8e554 = 0x101;
                              }
                            }
                            DAT_180b8f80c = 0;
                            DAT_180b8f7b0 = 0;
                            DAT_180b8f7a8 = 0;
                            FUN_18017bf40(&local_5848);
                            pcVar43 = (char *)(((longlong)local_5848 - lVar32) / 1000);
                            DAT_180c71288 = DAT_180c71288 + 1;
                            DAT_180c71290 = DAT_180c71290 + (longlong)pcVar43;
                            if (DAT_180c71298 < pcVar43) {
                              DAT_180c71298 = pcVar43;
                            }
                            DAT_180c712a0 = DAT_180c712a0 + local_5828;
                            DAT_180c712a8 = DAT_180c712a8 + (longlong)local_5890[0];
                            DAT_180c712b0 = DAT_180c712b0 + local_5830;
                            DAT_180c712b8 = DAT_180c712b8 + local_58c0._0_8_;
                            DAT_180c712c0 = DAT_180c712c0 + (longlong)local_2c38;
                            DAT_180c712c8 = DAT_180c712c8 + local_5880._0_8_;
                            DAT_180c712d0 =
                                 DAT_180c712d0 +
                                 ((longlong)local_5848 - CONCAT44(uStack_586c,local_5870)) / 1000;
                            UVar24 = GetTickCount64();
                            uVar42 = DAT_180c71288;
                            if (DAT_180c71280 <= UVar24) {
                              uVar36 = DAT_180c71288;
                              if (DAT_180c71288 == 0) {
                                uVar36 = 1;
                              }
                              DAT_180c71280 = UVar24 + 5000;
                              FUN_18063ab10(local_2b88,0,0x600);
                              local_58d8 = "legit";
                              if (DAT_180cad2e0 == 1) {
                                local_58d8 = "rage";
                              }
                              local_58e0 = (double)(DAT_180c712d0 / uVar36);
                              local_58e8 = (undefined1 *)(DAT_180c712c8 / uVar36);
                              local_58f0 = DAT_180c712c0 / uVar36;
                              local_58f8 = (char *)(DAT_180c712b8 / uVar36);
                              local_5900 = (char *)(DAT_180c712b0 / uVar36);
                              local_5908 = (char *)((ulonglong)DAT_180c712a8 / uVar36);
                              local_5910 = (char *)(DAT_180c712a0 / uVar36);
                              local_5920 = (char *)(DAT_180c71290 / uVar36);
                              local_5918 = DAT_180c71298;
                              local_5928 = (undefined **)uVar42;
                              FUN_18015ad60(local_2b88,0x600,0xffffffffffffffff,
                                            "commands=%llu avg_us=%llu max_us=%llu setup_avg_us=%llu shared_aa_avg_us=%llu movement_avg_us=%llu rage_avg_us=%llu legit_avg_us=%llu post_avg_us=%llu apply_avg_us=%llu mode=%s"
                                           );
                              local_5928 = &PTR_180700558;
                              if (local_2b88[0] != '\0') {
                                local_5928 = (undefined **)&DAT_1806bcfc0;
                              }
                              local_5920 = local_2b88;
                              FUN_1800f6900(0);
                              DAT_180c71288 = 0;
                              DAT_180c71290 = 0;
                              DAT_180c71298 = (char *)0x0;
                              DAT_180c712a0 = 0;
                              DAT_180c712a8 = (undefined *)0x0;
                              DAT_180c712b0 = 0;
                              DAT_180c712b8 = 0;
                              DAT_180c712c0 = 0;
                              DAT_180c712c8 = 0;
                              DAT_180c712d0 = 0;
                              DAT_180c71280 = UVar24 + 5000;
                            }
                            if (local_58a0 == 0) {
                              FUN_1800aa120("create_move: input apply end");
                            }
                            piVar21 = (int *)FUN_18017ea70();
                            *(undefined8 *)(piVar21 + 2) = uVar48;
                            if (*piVar21 != 0) {
                              *piVar21 = *piVar21 + -1;
                            }
                            FUN_180180bf0(&local_2ba8);
                            if ((char)uStack_2b98 != '\0') {
                              ReleaseSRWLockShared(pRStack_2ba0);
                            }
                            if (local_2bf8 == 0) {
                              cVar15 = (char)uStack_2be8;
                            }
                            else {
                              if ((char)uStack_2be0 != '\0') {
                                LOCK();
                                *(int *)(local_2bf8 + 0x5c) = *(int *)(local_2bf8 + 0x5c) + -1;
                                UNLOCK();
                              }
                              piVar21 = (int *)FUN_1801acaf0();
                              if ((uStack_2be0._1_1_ != '\0') && (*piVar21 != 0)) {
                                *piVar21 = *piVar21 + -1;
                              }
                              if ((char)uStack_2be8 != '\0') {
                                if (pRStack_2bf0 == (PSRWLOCK)0x0) {
                    /* WARNING: Subroutine does not return */
                                  FUN_18017d0c0(1);
                                }
                                ReleaseSRWLockShared(pRStack_2bf0);
                                uStack_2be8 = uStack_2be8 & 0xffffffffffffff00;
                              }
                              uStack_2be0 = uStack_2be0 & 0xffffffffffffff00;
                              local_2bf8 = 0;
                              cVar15 = '\0';
                            }
                            if (cVar15 != '\0') {
                              ReleaseSRWLockShared(pRStack_2bf0);
                            }
                            FUN_18017bf40(local_5890);
                            puVar39 = local_5890[0];
                            uVar37 = (longlong)local_5890[0] - local_5840._8_8_;
                            puVar31 = (ulonglong *)FUN_1803a5480();
                            local_5900 = auVar54._0_8_;
                            local_5928 = (undefined **)(*puVar31 + 1);
                            *puVar31 = (ulonglong)local_5928;
                            uVar42 = puVar31[1];
                            puVar31[1] = uVar42 + uVar37;
                            local_58f8 = (char *)(puVar31[3] + (ulonglong)(999999 < uVar37));
                            puVar31[3] = (ulonglong)local_58f8;
                            local_58f0 = puVar31[4] + (ulonglong)(4999999 < uVar37);
                            puVar31[4] = local_58f0;
                            local_58e8 = (undefined1 *)(puVar31[5] + (ulonglong)(15999999 < uVar37))
                            ;
                            puVar31[5] = (ulonglong)local_58e8;
                            uVar36 = puVar31[2];
                            if (puVar31[2] < uVar37) {
                              puVar31[2] = uVar37;
                              uVar36 = uVar37;
                            }
                            if ((puVar39 == (undefined *)puVar31[7]) ||
                               ((longlong)puVar31[7] <= (longlong)puVar39)) {
                              local_5908 = (char *)((double)(longlong)
                                                            ((longlong)puVar39 - puVar31[6]) /
                                                   auVar59._0_8_);
                              dVar2 = (double)(uVar42 + uVar37);
                              dVar53 = auVar55._0_8_;
                              if ((double)local_5900 < (double)local_5908) {
                                local_5900 = (char *)((dVar2 / dVar53) / (double)local_5908);
                              }
                              local_5910 = (char *)(dVar2 / auVar59._0_8_);
                              local_5918 = (char *)((double)uVar36 / dVar53);
                              local_5920 = (char *)((dVar2 / (double)local_5928) / dVar53);
                              FUN_1801af8a0(dVar2 / (double)local_5928,local_5920,local_5840._0_8_);
                              puVar31[2] = 0;
                              puVar31[1] = 0;
                              *puVar31 = 0;
                              puVar31[5] = 0;
                              puVar31[4] = 0;
                              puVar31[3] = 0;
                              puVar31[6] = (ulonglong)puVar39;
                              puVar31[7] = (ulonglong)(puVar39 + 5000000000);
                            }
                            goto LAB_18039d231;
                          }
                          bVar17 = FUN_180397570(local_2c48[0],lStack_2c20,local_2c28);
                          local_58c8 = bVar17;
                          if ((bVar17 == 0) &&
                             (cVar15 = FUN_18024b750(&DAT_180b8e420,local_2c48[0]), cVar15 != '\0'))
                          {
                            bVar18 = FUN_1803def00();
                            FUN_18024d940(&DAT_180b8e420,local_2c48[0],bVar18);
                          }
                          else {
                            bVar18 = 0;
                            local_5898 = local_5898 & 0xffffffff00000000;
                            if (bVar17 != 0) {
                              bVar18 = FUN_1803def00();
                              uVar48 = FUN_18024d940(&DAT_180b8e420,local_2c48[0],bVar18);
                              local_5898 = local_5898 & 0xffffffff00000000;
                              if (bVar18 == 0) {
                                FUN_1802d1c40(uVar48,*(undefined8 *)(local_2c48[0] + 8),0);
                                puVar23 = (undefined *)FUN_1803a70a0();
                                puVar39 = &DAT_180ba31a0;
                                if (puVar23 != (undefined *)0x0) {
                                  puVar39 = puVar23;
                                }
                                puVar39[0x98] = 0;
                                UVar24 = GetTickCount64();
                                local_5898 = local_5898 & 0xffffffff00000000;
                                if (*(ulonglong *)(puVar39 + 0x2af0) <= UVar24) {
                                  *(ULONGLONG *)(puVar39 + 0x2af0) = UVar24 + 1000;
                                  FUN_18063ab10(local_2b88,0,0x600);
                                  local_5928 = *(undefined ***)(local_2c48[0] + 8);
                                  FUN_18015ad60(local_2b88,0x600,0xffffffffffffffff,
                                                "command=%lld snapshot_invalidated=1 server_ack=unverified"
                                               );
                                  local_5928 = &PTR_180700558;
                                  if (local_2b88[0] != '\0') {
                                    local_5928 = (undefined **)&DAT_1806bcfc0;
                                  }
                                  local_5920 = local_2b88;
                                  FUN_1800f6900(3);
                                  local_5898 = local_5898 & 0xffffffff00000000;
                                }
                                bVar17 = local_58c8;
                              }
                            }
                          }
                          local_5928 = (undefined **)0x0;
                          FUN_18024c5d0(&DAT_180b8e420,3,local_2c48[0],0);
                          FUN_1803966f0(local_2c48[0],bVar18);
                          local_5920 = *(char **)(local_2c48[0] + 8);
                          local_5928 = (undefined **)CONCAT44(local_5928._4_4_,iVar20);
                          FUN_180396e00("duplicate_command",param_2,uVar46,puVar47);
                          iVar20 = DAT_180c712f4 + 1;
                          DAT_180c712f4 = iVar20;
                          if ((iVar20 == 1) || ((char)iVar20 == '\0')) {
                            FUN_18063ab10(local_2b88,0,0x600);
                            local_5908 = (char *)CONCAT44(local_5908._4_4_,(uint)bVar17);
                            local_5910 = (char *)CONCAT44(local_5910._4_4_,(uint)bVar18);
                            local_5918 = (char *)CONCAT44(local_5918._4_4_,(int)local_5898);
                            local_5920 = (char *)CONCAT44(local_5920._4_4_,iVar20);
                            local_5928 = *(undefined ***)(local_2c48[0] + 8);
                            FUN_18015ad60(local_2b88,0x600,0xffffffffffffffff,
                                          "command=%lld count=%u feature_pipeline_skipped=1 antiaim_reconciled=%d crc_prepared=%d shot_reconciled=%d"
                                         );
                            local_5928 = &PTR_180700558;
                            if (local_2b88[0] != '\0') {
                              local_5928 = (undefined **)&DAT_1806bcfc0;
                            }
                            local_5920 = local_2b88;
                            FUN_1800f6900(0);
                          }
                        }
                      }
                      goto LAB_18039cf8d;
                    }
                  }
                  local_5920 = (char *)0xffffffffffffffff;
                  local_5928 = (undefined **)((ulonglong)local_5928 & 0xffffffff00000000);
                  FUN_180396e00("last_processed_unavailable",param_2,uVar46,puVar47);
                  goto LAB_18039cf8d;
                }
              }
              local_5920 = (char *)0xffffffffffffffff;
              local_5928 = (undefined **)((ulonglong)local_5928 & 0xffffffff00000000);
              FUN_180396e00("movement_services_unavailable",param_2,uVar46,0);
              goto LAB_18039cf8d;
            }
          }
        }
        local_5920 = (char *)0xffffffffffffffff;
        local_5928 = (undefined **)((ulonglong)local_5928 & 0xffffffff00000000);
        FUN_180396e00("pawn_ownership_changed",param_2,uVar46,0);
      }
    }
LAB_18039cf8d:
    FUN_180180bf0(&local_2ba8);
    if ((char)uStack_2b98 != '\0') {
      ReleaseSRWLockShared(pRStack_2ba0);
    }
  }
LAB_18039d05c:
  FUN_180180bf0(&local_2bf8);
  if ((char)uStack_2be8 != '\0') {
    ReleaseSRWLockShared(pRStack_2bf0);
  }
  FUN_18017bf40(local_5890);
  puVar39 = local_5890[0];
  uVar37 = (longlong)local_5890[0] - local_5840._8_8_;
  puVar31 = (ulonglong *)FUN_1803a5480();
  local_5928 = (undefined **)(*puVar31 + 1);
  *puVar31 = (ulonglong)local_5928;
  uVar42 = puVar31[1];
  puVar31[1] = uVar42 + uVar37;
  local_58f8 = (char *)(puVar31[3] + (ulonglong)(999999 < uVar37));
  puVar31[3] = (ulonglong)local_58f8;
  local_58f0 = puVar31[4] + (ulonglong)(4999999 < uVar37);
  puVar31[4] = local_58f0;
  local_58e8 = (undefined1 *)(puVar31[5] + (ulonglong)(15999999 < uVar37));
  puVar31[5] = (ulonglong)local_58e8;
  uVar36 = puVar31[2];
  if (puVar31[2] < uVar37) {
    puVar31[2] = uVar37;
    uVar36 = uVar37;
  }
  if ((puVar39 == (undefined *)puVar31[7]) || ((longlong)puVar31[7] <= (longlong)puVar39)) {
    local_5908 = (char *)((double)(longlong)((longlong)puVar39 - puVar31[6]) / 1000000.0);
    dVar2 = (double)(uVar42 + uVar37);
    local_5900 = (char *)0x0;
    if (0.0 < (double)local_5908) {
      local_5900 = (char *)((dVar2 / 1000.0) / (double)local_5908);
    }
    local_5910 = (char *)(dVar2 / 1000000.0);
    local_5918 = (char *)((double)uVar36 / 1000.0);
    local_5920 = (char *)((dVar2 / (double)local_5928) / 1000.0);
    FUN_1801af8a0(dVar2 / (double)local_5928,local_5920,local_5840._0_8_);
    puVar31[2] = 0;
    puVar31[1] = 0;
    *puVar31 = 0;
    puVar31[5] = 0;
    puVar31[4] = 0;
    puVar31[3] = 0;
    puVar31[6] = (ulonglong)puVar39;
    puVar31[7] = (ulonglong)(puVar39 + 5000000000);
  }
LAB_18039d231:
  LOCK();
  DAT_180c64050 = DAT_180c64050 + -1;
  UNLOCK();
}



