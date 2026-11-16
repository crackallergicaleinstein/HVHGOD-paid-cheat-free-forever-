// FUN_18024d940 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18024d940 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18024d940(longlong param_1,longlong param_2,byte param_3)

{
  ULONGLONG *pUVar1;
  undefined1 auVar2 [32];
  float fVar3;
  undefined1 auVar4 [16];
  undefined4 *puVar5;
  undefined1 auVar6 [32];
  bool bVar7;
  undefined4 uVar8;
  byte bVar9;
  undefined1 uVar10;
  char cVar11;
  short sVar12;
  int iVar13;
  undefined **ppuVar14;
  undefined *puVar15;
  undefined8 uVar16;
  undefined4 *puVar17;
  ULONGLONG *pUVar18;
  ULONGLONG UVar19;
  longlong lVar20;
  undefined4 *puVar21;
  longlong lVar22;
  longlong lVar23;
  undefined *puVar24;
  int iVar25;
  uint uVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 extraout_var [56];
  undefined1 extraout_var_00 [56];
  undefined1 extraout_var_01 [56];
  undefined1 auVar30 [16];
  float fVar31;
  ulonglong uVar32;
  undefined1 auVar33 [64];
  undefined1 auVar34 [64];
  undefined1 auVar35 [16];
  undefined1 auVar36 [64];
  undefined1 auVar37 [64];
  undefined1 auVar38 [64];
  undefined1 auVar39 [64];
  undefined1 auVar40 [64];
  undefined1 auVar41 [64];
  undefined1 auStack_e08 [32];
  undefined **local_de8;
  char *local_de0;
  double local_dd8;
  double local_dd0;
  double local_dc8;
  double dStack_dc0;
  undefined8 local_db8;
  double local_db0;
  double local_da8;
  double local_da0;
  uint local_d98;
  uint local_d90;
  double local_d88;
  double local_d80;
  double local_d78;
  undefined4 local_d70;
  uint local_d68;
  uint local_d60;
  uint local_d58;
  uint local_d50;
  byte local_d48;
  byte local_d47;
  undefined8 local_d38;
  undefined4 uStack_d30;
  uint uStack_d2c;
  ulonglong local_d28;
  undefined4 *local_d18;
  undefined4 uStack_d10;
  uint uStack_d0c;
  undefined **ppuStack_d08;
  undefined4 uStack_d00;
  undefined4 uStack_cfc;
  undefined4 local_cf8;
  uint uStack_cf4;
  undefined4 *local_ce8;
  undefined8 uStack_ce0;
  undefined **ppuStack_cd8;
  undefined4 uStack_cd0;
  undefined4 uStack_ccc;
  ulonglong local_cc8;
  undefined8 uStack_cc0;
  undefined4 uStack_cb8;
  undefined4 uStack_cb4;
  undefined4 uStack_cb0;
  undefined4 uStack_cac;
  longlong local_ca8;
  uint *local_ca0;
  undefined8 local_c98;
  undefined8 local_c90;
  undefined8 local_c88;
  undefined8 local_c80;
  undefined8 local_c78;
  undefined8 local_c70;
  undefined8 local_c68;
  undefined8 local_c60;
  undefined8 local_c58;
  undefined1 local_c50 [16];
  undefined4 local_c40;
  undefined4 local_c3c;
  undefined1 local_c38 [16];
  undefined4 local_c28 [320];
  undefined4 local_728;
  undefined4 local_718;
  undefined4 uStack_714;
  undefined4 uStack_710;
  uint uStack_70c;
  undefined8 local_708;
  PSRWLOCK pRStack_700;
  undefined8 uStack_6f8;
  undefined8 uStack_6f0;
  char local_6e8 [1536];
  ulonglong local_e8;
  
  if (param_2 == 0) {
    return;
  }
  local_e8 = DAT_1808d5f00 ^ (ulonglong)auStack_e08;
  local_708 = 0;
  pRStack_700 = (PSRWLOCK)0x0;
  uStack_6f8 = 0;
  uStack_6f0 = 0;
  local_d48 = param_3;
  FUN_180244f40();
  if ((char)uStack_6f0 == '\0') goto LAB_18024e89c;
  *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) | 1;
  local_ca0 = (uint *)0x0;
  if (*(longlong *)(param_2 + 0x40) != 0) {
    local_ca0 = (uint *)(*(longlong *)(param_2 + 0x40) + 0x10);
  }
  if (local_ca0 == (uint *)0x0) goto LAB_18024e89c;
  if ((*local_ca0 & 4) == 0) goto LAB_18024e89c;
  *local_ca0 = *local_ca0 | 4;
  lVar20 = 0;
  if (*(longlong *)(local_ca0 + 0xc) != 0) {
    lVar20 = *(longlong *)(local_ca0 + 0xc) + 0x10;
  }
  local_ca8 = lVar20;
  if (lVar20 == 0) goto LAB_18024e89c;
  auVar38 = ZEXT464(*(uint *)(lVar20 + 0xc));
  bVar9 = FUN_18024a3b0();
  local_d47 = bVar9;
  ppuVar14 = (undefined **)GetTickCount64();
  AcquireSRWLockShared((PSRWLOCK)&DAT_180bb88c0);
  local_d18 = (undefined4 *)_DAT_180bb8890;
  uStack_d10 = (undefined4)uRam0000000180bb8898;
  uStack_d0c = (uint)((ulonglong)uRam0000000180bb8898 >> 0x20);
  ppuStack_d08 = (undefined **)uRam0000000180bb88a0;
  uStack_d00 = (undefined4)uRam0000000180bb88a8;
  uStack_cfc = (undefined4)((ulonglong)uRam0000000180bb88a8 >> 0x20);
  local_cc8 = _DAT_180bb88b0;
  uStack_cc0 = uRam0000000180bb88b8;
  auVar38 = ZEXT1664(auVar38._0_16_);
  ReleaseSRWLockShared((PSRWLOCK)&DAT_180bb88c0);
  puVar15 = (undefined *)FUN_180250780();
  puVar24 = &DAT_1808db120;
  if (puVar15 != (undefined *)0x0) {
    puVar24 = puVar15;
  }
  puVar5 = (undefined4 *)CONCAT44(uStack_d0c,uStack_d10);
  if (local_d48 == 0) {
    local_c98 = 0;
    local_c90 = 0;
    local_c88 = 0xffffffffffffffff;
    local_c80 = 0;
    local_c78 = 0;
    local_c70 = 0;
    local_c68 = 0;
    local_c60 = 0;
    local_c58 = 0;
    local_c50 = (undefined1  [16])0x0;
    local_c40 = 0;
    local_c3c = 0;
    local_c38 = (undefined1  [16])0x0;
    auVar34 = ZEXT1264(ZEXT812(0)) << 0x20;
    auVar38 = ZEXT1664(auVar38._0_16_);
    FUN_18063ab10(local_c28,0,0x500);
    auVar30 = auVar38._0_16_;
    auVar27 = auVar34._0_16_;
    puVar17 = local_c28;
    lVar22 = 0x20;
    do {
      *(undefined8 *)(puVar17 + 1) = 0;
      *(undefined8 *)(puVar17 + 3) = 0;
      *(undefined8 *)(puVar17 + 5) = 0;
      *(undefined8 *)(puVar17 + 7) = 0;
      puVar17[9] = 0;
      *puVar17 = 0;
      puVar17 = puVar17 + 10;
      lVar22 = lVar22 + -1;
    } while (lVar22 != 0);
    local_728 = 0x1000100;
  }
  else {
    auVar34 = ZEXT1264(ZEXT812(0)) << 0x20;
    auVar36 = ZEXT1664(auVar38._0_16_);
    AcquireSRWLockShared((PSRWLOCK)&DAT_180bb88c0);
    local_d18 = (undefined4 *)_DAT_180bb8890;
    uStack_d10 = (undefined4)uRam0000000180bb8898;
    uStack_d0c = (uint)((ulonglong)uRam0000000180bb8898 >> 0x20);
    ppuStack_d08 = (undefined **)uRam0000000180bb88a0;
    uStack_d00 = (undefined4)uRam0000000180bb88a8;
    uStack_cfc = (undefined4)((ulonglong)uRam0000000180bb88a8 >> 0x20);
    local_cc8 = _DAT_180bb88b0;
    uStack_cc0 = uRam0000000180bb88b8;
    auVar38 = ZEXT1664(auVar34._0_16_);
    auVar34 = ZEXT1664(auVar36._0_16_);
    ReleaseSRWLockShared((PSRWLOCK)&DAT_180bb88c0);
    local_de8 = ppuVar14;
    uVar16 = FUN_18024ea30(local_6e8,param_2,puVar5,local_d18);
    FUN_18063aed0(&local_c98,uVar16,0x578);
    auVar30 = auVar34._0_16_;
    auVar27 = auVar38._0_16_;
  }
  auVar38 = ZEXT1664(auVar27);
  auVar34 = ZEXT1664(auVar30);
  FUN_18063aed0(puVar24,&local_c98,0x578);
  if (((*(char *)(param_1 + 0xcd) == '\0') ||
      (((DAT_180cc9372 == '\0' || (((DAT_180cc9348 & 0xfffffff7) != 0 && (5 < DAT_180cc9348 - 1))))
       && (bVar9 != 0)))) || ((DAT_180cad6b8 == '\0' || (DAT_180cad2e0 != 1)))) {
    cVar11 = '\0';
  }
  else {
    cVar11 = '\x01';
  }
  puVar24[0x571] = cVar11;
  puVar24[0x573] = bVar9 ^ 1;
  auVar36 = ZEXT1664(_DAT_18086dba0);
  auVar39 = ZEXT464(0x43b40000);
  if (((bVar9 == 0) && (cVar11 == '\0')) && (DAT_180b8fbfc != '\0')) {
    fVar31 = auVar34._0_4_ - DAT_180b0dfc8._4_4_;
    auVar33 = ZEXT464((uint)fVar31);
    sVar12 = thunk_FUN_180624430(fVar31);
    if (sVar12 < 1) {
      uVar26 = FUN_180615070(auVar33._0_8_,auVar39._0_8_);
    }
    else {
      uVar26 = auVar38._0_4_;
    }
    if ((float)(uVar26 & auVar36._0_4_) <= 0.001) goto LAB_18024dc92;
    cVar11 = '\x01';
  }
  else {
LAB_18024dc92:
    cVar11 = '\0';
  }
  puVar24[0x572] = cVar11;
  if ((puVar24[0x570] == '\0') ||
     (((DAT_180b0dfe8 == '\0' && (puVar24[0x571] == '\0')) && (cVar11 == '\0')))) {
    uVar10 = 0;
  }
  else {
    uVar10 = 1;
  }
  puVar24[0x570] = uVar10;
  uVar8 = DAT_180b8e14c;
  *(undefined4 *)(puVar24 + 100) = DAT_180b8e148;
  *(undefined4 *)(puVar24 + 0x68) = uVar8;
  sVar12 = thunk_FUN_180624430(DAT_180b8e148);
  auVar28 = auVar39._0_16_;
  auVar30 = auVar36._0_16_;
  auVar27 = auVar38._0_16_;
  auVar29 = auVar34._0_16_;
  if (sVar12 < 1) {
    sVar12 = thunk_FUN_180624430(DAT_180b8e14c);
    auVar28 = auVar39._0_16_;
    auVar30 = auVar36._0_16_;
    auVar27 = auVar38._0_16_;
    auVar29 = auVar34._0_16_;
    if (0 < sVar12) goto LAB_18024dd0f;
  }
  else {
LAB_18024dd0f:
    puVar24[0x570] = 0;
  }
  uStack_ce0 = *(undefined8 *)(param_2 + 8);
  uStack_d10 = (undefined4)uStack_ce0;
  uStack_d0c = (uint)((ulonglong)uStack_ce0 >> 0x20);
  uStack_d00 = *(undefined4 *)(lVar20 + 8);
  uStack_cfc = auVar29._0_4_;
  local_cf8 = *(undefined4 *)(lVar20 + 0x10);
  if (local_d48 == 0) {
LAB_18024dd55:
    uStack_cf4 = uStack_cf4 & 0xffffff00;
  }
  else {
    uStack_cf4 = CONCAT31(uStack_cf4._1_3_,1);
    if (*(char *)(param_1 + 0xcd) == '\0') goto LAB_18024dd55;
  }
  local_cc8 = CONCAT44(uStack_cf4,local_cf8);
  auVar35._8_8_ = 0;
  auVar35._0_8_ = local_cc8;
  auVar38 = ZEXT1664(auVar27);
  auVar34 = ZEXT1664(auVar35);
  auVar36 = ZEXT1664(auVar35);
  auVar39 = ZEXT1664(auVar30);
  auVar33 = ZEXT1664(auVar29);
  auVar37 = ZEXT1664(auVar28);
  local_d18 = puVar5;
  ppuStack_d08 = ppuVar14;
  local_ce8 = puVar5;
  ppuStack_cd8 = ppuVar14;
  uStack_cd0 = uStack_d00;
  uStack_ccc = uStack_cfc;
  iVar13 = FUN_1805f68d0(param_1 + 0x28);
  uVar32 = auVar34._0_8_;
  if (iVar13 != 0) goto LAB_18024e941;
  if (*(int *)(param_1 + 0x74) == 0x7fffffff) {
    *(undefined4 *)(param_1 + 0x74) = 0x7ffffffe;
    goto LAB_18024e936;
  }
  auVar2._8_4_ = uStack_d10;
  auVar2._0_8_ = local_d18;
  auVar2._12_4_ = uStack_d0c;
  auVar2._16_8_ = ppuStack_d08;
  auVar2._24_4_ = uStack_d00;
  auVar2._28_4_ = uStack_cfc;
  *(undefined1 (*) [32])(param_1 + 0x78) = auVar2;
  *(longlong *)(param_1 + 0x98) = auVar36._0_8_;
  if (bVar9 != 0) {
    uStack_cd0 = *(undefined4 *)(param_1 + 0x18);
    uStack_ccc = *(undefined4 *)(param_1 + 0x1c);
    uVar32 = CONCAT44((int)(local_cc8 >> 0x20),*(undefined4 *)(param_1 + 0x20));
    auVar2._8_8_ = uStack_ce0;
    auVar2._0_8_ = local_ce8;
    auVar2._16_8_ = ppuStack_cd8;
    auVar2._24_4_ = uStack_cd0;
    auVar2._28_4_ = uStack_ccc;
    local_cc8 = uVar32;
  }
  *(undefined1 (*) [32])(param_1 + 0xa0) = auVar2;
  *(ulonglong *)(param_1 + 0xc0) = uVar32;
  auVar38 = ZEXT1664(auVar38._0_16_);
  auVar34 = ZEXT1664(auVar39._0_16_);
  auVar36 = ZEXT1664(auVar33._0_16_);
  auVar39 = ZEXT1664(auVar37._0_16_);
  FUN_1805f68fc(param_1 + 0x28);
  local_de8 = (undefined **)0x0;
  FUN_18024c5d0(param_1,0,param_2,local_d48);
  pUVar18 = (ULONGLONG *)FUN_1802500f0();
  pUVar1 = pUVar18 + 1;
  if (((undefined4 *)*pUVar18 != puVar5) || (*(longlong *)(param_2 + 8) < (longlong)*pUVar1)) {
    local_ce8 = (undefined4 *)0x0;
    uStack_ce0 = 0xffffffffffffffff;
    ppuStack_cd8 = (undefined **)0x0;
    uStack_cd0 = 0;
    uStack_ccc = 0;
    local_cc8 = 0;
    uStack_cc0 = 0;
    uStack_cb8 = auVar38._0_4_;
    *pUVar18 = 0;
    pUVar18[1] = 0xffffffffffffffff;
    pUVar18[2] = 0;
    pUVar18[3] = 0;
    auVar6._16_4_ = uStack_cb8;
    auVar6._0_16_ = ZEXT816(0);
    auVar6._20_4_ = uStack_cb8;
    auVar6._24_4_ = uStack_cb8;
    auVar6._28_4_ = uStack_cac;
    *(undefined1 (*) [32])(pUVar18 + 4) = auVar6;
    *pUVar18 = (ULONGLONG)puVar5;
    uStack_cb4 = uStack_cb8;
    uStack_cb0 = uStack_cb8;
  }
  if (*(ULONGLONG *)(param_2 + 8) != *pUVar1) {
    auVar38 = ZEXT1664(auVar38._0_16_);
    auVar33 = ZEXT464((uint)(auVar36._0_4_ - *(float *)(pUVar18 + 6)));
    auVar34 = ZEXT1664(auVar34._0_16_);
    auVar36 = ZEXT1664(auVar36._0_16_);
    auVar39 = ZEXT1664(auVar39._0_16_);
    sVar12 = thunk_FUN_180624430();
    if (sVar12 < 1) {
      auVar33._0_8_ = FUN_180615070(auVar33._0_8_,auVar39._0_8_);
      auVar33._8_56_ = extraout_var;
      auVar27 = auVar33._0_16_;
    }
    else {
      auVar27 = auVar38._0_16_;
    }
    fVar31 = auVar27._0_4_;
    if (-1 < (longlong)*pUVar1) {
      auVar30._0_4_ = (float)((uint)fVar31 & auVar34._0_4_);
      auVar30._4_4_ = auVar27._4_4_ & auVar34._4_4_;
      auVar30._8_4_ = auVar27._8_4_ & auVar34._8_4_;
      auVar30._12_4_ = auVar27._12_4_ & auVar34._12_4_;
      auVar27 = vmaxss_avx(auVar30,ZEXT416((uint)pUVar18[7]));
      *(int *)(pUVar18 + 7) = auVar27._0_4_;
      if (((1.0 < auVar30._0_4_) &&
          (1.0 < (float)((uint)*(float *)((longlong)pUVar18 + 0x34) & auVar34._0_4_))) &&
         (*(float *)((longlong)pUVar18 + 0x34) * fVar31 < auVar38._0_4_)) {
        pUVar18[5] = pUVar18[5] + 1;
      }
    }
    *(int *)(pUVar18 + 6) = auVar36._0_4_;
    *(float *)((longlong)pUVar18 + 0x34) = fVar31;
    pUVar18[1] = *(ULONGLONG *)(param_2 + 8);
    pUVar18[2] = pUVar18[2] + 1;
    pUVar18[3] = pUVar18[3] + (ulonglong)*(byte *)(param_1 + 0xcd);
    pUVar18[4] = pUVar18[4] + (ulonglong)local_d47;
  }
  if (ppuVar14 < *(undefined ***)(param_1 + 0xe8)) goto LAB_18024e89c;
  *(undefined ***)(param_1 + 0xe8) = ppuVar14 + 0xfa;
  local_d28 = 1;
  if ((DAT_180cd3c10 & 1) == 0) {
    DAT_180cd3c10 = DAT_180cd3c10 | 1;
    local_718 = 0xdafa8d1;
    uStack_710 = 0;
    uStack_70c = 0;
    local_d38 = &local_718;
    uStack_d30 = 1;
    uStack_d2c = 0;
    auVar38 = ZEXT1664(auVar38._0_16_);
    auVar34 = ZEXT1664(auVar34._0_16_);
    auVar36 = ZEXT1664(auVar36._0_16_);
    auVar39 = ZEXT1664(auVar39._0_16_);
    FUN_18044c9c0(DAT_180c64058,&local_d38);
    DAT_180cd3c18 = CONCAT44(uStack_70c,uStack_710);
  }
  iVar13 = DAT_180c644c0;
  auVar28 = auVar39._0_16_;
  auVar29 = auVar36._0_16_;
  auVar30 = auVar34._0_16_;
  auVar27 = auVar38._0_16_;
  if ((DAT_180cd3c18 == 0) || (*(char *)(DAT_180cd3c18 + 0x58) == '\0')) {
    local_d28 = local_d28 & 0xffffffff00000000;
  }
  if (puVar5 == (undefined4 *)0x0) {
    puVar17 = (undefined4 *)0x0;
  }
  else {
    if (DAT_180c644c0 == 0) {
      auVar38 = ZEXT1664(auVar27);
      auVar34 = ZEXT1664(auVar30);
      auVar36 = ZEXT1664(auVar29);
      auVar39 = ZEXT1664(auVar28);
      UVar19 = GetTickCount64();
      auVar28 = auVar39._0_16_;
      auVar29 = auVar36._0_16_;
      auVar30 = auVar34._0_16_;
      auVar27 = auVar38._0_16_;
      if (DAT_180c644b8 <= UVar19) {
        local_d38._0_4_ = -1.3121624e-38;
        local_d38._4_4_ = 1;
        iVar13 = FUN_1805f68d0(&DAT_1808ee1c0);
        if (iVar13 != 0) goto LAB_18024e941;
        if (DAT_1808ee20c == 0x7fffffff) {
          DAT_1808ee20c = 0x7ffffffe;
          goto LAB_18024e936;
        }
        if ((DAT_180c644c0 == 0) && (DAT_180c644b8 <= UVar19)) {
          DAT_180c644c0 = FUN_1804174b0("C_BaseEntity",0x9d930423);
          if (DAT_180c644c0 == 0) {
            DAT_180c644b8 = UVar19 + 1000;
          }
          else {
            DAT_180c644b8 = 0xffffffffffffffff;
          }
        }
        iVar13 = DAT_180c644c0;
        FUN_1805f68fc(&DAT_1808ee1c0);
        auVar28 = auVar39._0_16_;
        auVar29 = auVar36._0_16_;
        auVar30 = auVar34._0_16_;
        auVar27 = auVar38._0_16_;
      }
    }
    auVar38 = ZEXT1664(auVar27);
    auVar34 = ZEXT1664(auVar30);
    auVar36 = ZEXT1664(auVar29);
    auVar39 = ZEXT1664(auVar28);
    lVar20 = FUN_18017ea70();
    *(int *)(lVar20 + 4) = *(int *)(lVar20 + 4) + 1;
    if ((longlong)iVar13 + (longlong)puVar5 == 0) {
      bVar7 = false;
    }
    else {
      local_d38._0_4_ = 0.0;
      local_d38._4_4_ = 0;
      cVar11 = FUN_1804514f0(&local_d38,(longlong)iVar13 + (longlong)puVar5);
      if (cVar11 == '\0') {
        bVar7 = false;
        local_d38 = (undefined4 *)CONCAT44(local_d38._4_4_,(float)local_d38);
      }
      else {
        bVar7 = true;
      }
    }
    lVar20 = FUN_18017ea70();
    if (*(int *)(lVar20 + 4) != 0) {
      *(int *)(lVar20 + 4) = *(int *)(lVar20 + 4) + -1;
    }
    puVar17 = (undefined4 *)0x0;
    if (bVar7) {
      puVar17 = local_d38;
    }
  }
  iVar13 = DAT_180c644ac;
  puVar21 = local_d38;
  if (DAT_180c644ac == 0) {
    auVar38 = ZEXT1664(auVar38._0_16_);
    auVar34 = ZEXT1664(auVar34._0_16_);
    auVar36 = ZEXT1664(auVar36._0_16_);
    auVar39 = ZEXT1664(auVar39._0_16_);
    puVar21 = (undefined4 *)GetTickCount64();
    if (DAT_180c644b0 <= puVar21) {
      local_718 = 0x808ee210;
      uStack_714 = 1;
      local_d38 = puVar21;
      iVar13 = FUN_1805f68d0(&DAT_1808ee210);
      if (iVar13 != 0) goto LAB_18024e941;
      if (DAT_1808ee25c == 0x7fffffff) {
        DAT_1808ee25c = 0x7ffffffe;
        goto LAB_18024e936;
      }
      if ((DAT_180c644ac == 0) && (DAT_180c644b0 <= local_d38)) {
        DAT_180c644ac = FUN_1804174b0("CGameSceneNode",0xae099497);
        if (DAT_180c644ac == 0) {
          DAT_180c644b0 = local_d38 + 0xfa;
        }
        else {
          DAT_180c644b0 = (undefined4 *)0xffffffffffffffff;
        }
      }
      iVar13 = DAT_180c644ac;
      FUN_1805f68fc(&DAT_1808ee210);
      puVar21 = local_d38;
    }
  }
  if ((puVar17 == (undefined4 *)0x0) || (iVar13 == 0)) {
    uStack_d0c = uStack_d0c & 0xffffff00;
    local_d38 = local_d18;
  }
  else {
    auVar38 = ZEXT1664(auVar38._0_16_);
    auVar34 = ZEXT1664(auVar34._0_16_);
    auVar36 = ZEXT1664(auVar36._0_16_);
    auVar39 = ZEXT1664(auVar39._0_16_);
    local_d38 = puVar21;
    lVar20 = FUN_18017ea70();
    *(int *)(lVar20 + 4) = *(int *)(lVar20 + 4) + 1;
    if ((longlong)iVar13 + (longlong)puVar17 == 0) {
LAB_18024e225:
      uStack_d2c = uStack_d2c & 0xffffff00;
    }
    else {
      local_718 = auVar38._0_4_;
      uStack_714 = local_718;
      uStack_710 = local_718;
      cVar11 = FUN_1804514f0(&local_718,(longlong)iVar13 + (longlong)puVar17);
      if (cVar11 == '\0') goto LAB_18024e225;
      local_d38 = (undefined4 *)CONCAT44(uStack_714,local_718);
      uStack_d30 = uStack_710;
      uStack_d2c = CONCAT31(uStack_d2c._1_3_,1);
    }
    lVar20 = FUN_18017ea70();
    if (*(int *)(lVar20 + 4) != 0) {
      *(int *)(lVar20 + 4) = *(int *)(lVar20 + 4) + -1;
    }
    uStack_d10 = uStack_d30;
    uStack_d0c = uStack_d2c;
    puVar21 = local_d38;
  }
  iVar13 = DAT_180c644a8;
  local_d18 = local_d38;
  if (DAT_180c644a8 == 0) {
    auVar38 = ZEXT1664(auVar38._0_16_);
    auVar34 = ZEXT1664(auVar34._0_16_);
    auVar36 = ZEXT1664(auVar36._0_16_);
    auVar39 = ZEXT1664(auVar39._0_16_);
    local_d38 = puVar21;
    UVar19 = GetTickCount64();
    puVar21 = local_d38;
    if (DAT_180c644a0 <= UVar19) {
      local_718 = 0x808ee170;
      uStack_714 = 1;
      iVar13 = FUN_1805f68d0(&DAT_1808ee170);
      if (iVar13 != 0) {
LAB_18024e941:
                    /* WARNING: Subroutine does not return */
        FUN_1805f6d44(5);
      }
      if (DAT_1808ee1bc == 0x7fffffff) {
        DAT_1808ee1bc = 0x7ffffffe;
LAB_18024e936:
                    /* WARNING: Subroutine does not return */
        FUN_1805f6d44(6);
      }
      if ((DAT_180c644a8 == 0) && (DAT_180c644a0 <= UVar19)) {
        DAT_180c644a8 = FUN_1804174b0("C_CSPlayerPawn",0x4ee662ac);
        if (DAT_180c644a8 == 0) {
          DAT_180c644a0 = UVar19 + 1000;
        }
        else {
          DAT_180c644a0 = 0xffffffffffffffff;
        }
      }
      iVar13 = DAT_180c644a8;
      FUN_1805f68fc(&DAT_1808ee170);
      puVar21 = local_d38;
    }
  }
  if ((puVar5 == (undefined4 *)0x0) || (iVar13 == 0)) {
    uStack_70c = uStack_70c & 0xffffff00;
    auVar27._4_4_ = uStack_714;
    auVar27._0_4_ = local_718;
    auVar27._8_4_ = uStack_710;
    auVar27._12_4_ = uStack_70c;
  }
  else {
    auVar38 = ZEXT1664(auVar38._0_16_);
    auVar34 = ZEXT1664(auVar34._0_16_);
    auVar36 = ZEXT1664(auVar36._0_16_);
    auVar39 = ZEXT1664(auVar39._0_16_);
    local_d38 = puVar21;
    lVar20 = FUN_18017ea70();
    *(int *)(lVar20 + 4) = *(int *)(lVar20 + 4) + 1;
    if ((longlong)iVar13 + (longlong)puVar5 == 0) {
LAB_18024e36a:
      uStack_d2c = uStack_d2c & 0xffffff00;
    }
    else {
      local_718 = auVar38._0_4_;
      uStack_714 = local_718;
      uStack_710 = local_718;
      cVar11 = FUN_1804514f0(&local_718,(longlong)iVar13 + (longlong)puVar5);
      if (cVar11 == '\0') goto LAB_18024e36a;
      local_d38 = (undefined4 *)CONCAT44(uStack_714,local_718);
      uStack_d30 = uStack_710;
      uStack_d2c = CONCAT31(uStack_d2c._1_3_,1);
    }
    lVar20 = FUN_18017ea70();
    if (*(int *)(lVar20 + 4) != 0) {
      *(int *)(lVar20 + 4) = *(int *)(lVar20 + 4) + -1;
    }
    auVar27._8_4_ = uStack_d30;
    auVar27._0_8_ = local_d38;
    auVar27._12_4_ = uStack_d2c;
    puVar21 = local_d38;
  }
  auVar35 = auVar39._0_16_;
  auVar28 = auVar36._0_16_;
  auVar33 = ZEXT1664(auVar27);
  auVar29 = auVar38._0_16_;
  auVar37 = ZEXT1664(auVar29);
  iVar25 = 0;
  iVar13 = *(int *)(param_2 + 0x30);
  auVar30 = auVar29;
  if (0 < iVar13) {
    lVar20 = 0;
    do {
      lVar22 = *(longlong *)(*(longlong *)(param_2 + 0x38) + 8 + lVar20);
      lVar23 = 0;
      if (lVar22 != 0) {
        lVar23 = lVar22 + 0x10;
      }
      if (lVar23 != 0) {
        lVar22 = 0;
        if (*(longlong *)(lVar23 + 8) != 0) {
          lVar22 = *(longlong *)(lVar23 + 8) + 0x10;
        }
        if (lVar22 != 0) {
          auVar38 = ZEXT1664(auVar38._0_16_);
          auVar40 = ZEXT464((uint)(*(float *)(lVar22 + 0xc) - auVar36._0_4_));
          auVar33 = ZEXT1664(auVar33._0_16_);
          auVar34 = ZEXT1664(auVar34._0_16_);
          auVar37 = ZEXT1664(auVar37._0_16_);
          auVar36 = ZEXT1664(auVar36._0_16_);
          auVar39 = ZEXT1664(auVar39._0_16_);
          local_d38 = puVar21;
          sVar12 = thunk_FUN_180624430();
          if (sVar12 < 1) {
            uVar16 = FUN_180615070(auVar40._0_8_,auVar39._0_8_);
            iVar13 = *(int *)(param_2 + 0x30);
            auVar28._0_4_ = (uint)uVar16 & auVar34._0_4_;
            auVar28._4_4_ = (uint)((ulonglong)uVar16 >> 0x20) & auVar34._4_4_;
            auVar28._8_4_ = extraout_var_00._0_4_ & auVar34._8_4_;
            auVar28._12_4_ = extraout_var_00._4_4_ & auVar34._12_4_;
            auVar27 = vmaxss_avx(auVar28,auVar37._0_16_);
            auVar37 = ZEXT1664(auVar27);
            puVar21 = local_d38;
          }
          else {
            auVar29._0_4_ = auVar38._0_4_ & auVar34._0_4_;
            auVar29._4_4_ = auVar38._4_4_ & auVar34._4_4_;
            auVar29._8_4_ = auVar38._8_4_ & auVar34._8_4_;
            auVar29._12_4_ = auVar38._12_4_ & auVar34._12_4_;
            auVar27 = vmaxss_avx(auVar29,auVar37._0_16_);
            auVar37 = ZEXT1664(auVar27);
            puVar21 = local_d38;
          }
        }
      }
      auVar35 = auVar39._0_16_;
      auVar28 = auVar36._0_16_;
      auVar30 = auVar37._0_16_;
      auVar27 = auVar33._0_16_;
      auVar29 = auVar38._0_16_;
      iVar25 = iVar25 + 1;
      lVar20 = lVar20 + 8;
    } while (iVar25 < iVar13);
  }
  auVar38 = ZEXT1664(auVar29);
  auVar34 = ZEXT1664(auVar27);
  auVar36 = ZEXT1664(auVar30);
  auVar39 = ZEXT1664(auVar28);
  auVar33 = ZEXT1664(auVar35);
  local_d38 = puVar21;
  FUN_18063ab10(local_6e8,0,0x600);
  lVar20 = local_ca8;
  local_dc8 = (double)*(float *)(param_1 + 4);
  local_d68 = (uint)DAT_180cc934c;
  local_da0 = (double)*(float *)(param_1 + 0x10c);
  local_db0 = (double)*(float *)(local_ca8 + 8);
  local_db8 = (double)auVar39._0_4_;
  local_d50 = (uint)(byte)puVar24[0x573];
  local_d58 = (uint)(byte)puVar24[0x571];
  local_d60 = DAT_180cc9348;
  local_d70 = *(undefined4 *)(param_2 + 0x50);
  local_d78 = (double)CONCAT44(local_d78._4_4_,*(undefined4 *)(param_2 + 0x4c));
  local_d80 = *(double *)(param_2 + 0x60);
  local_d88 = (double)CONCAT44(local_d88._4_4_,DAT_180cad72c);
  local_d90 = (uint)local_d47;
  local_d98 = local_ca0[4];
  local_da8 = (double)CONCAT44(local_da8._4_4_,(int)local_d28);
  local_dd0 = (double)CONCAT44(local_dd0._4_4_,*(undefined4 *)(param_1 + 200));
  local_dd8 = (double)CONCAT44(local_dd8._4_4_,(uint)DAT_180cad728);
  local_de0 = (char *)CONCAT44(local_de0._4_4_,(uint)*(byte *)(param_1 + 0xcd));
  local_de8 = *(undefined ***)(param_2 + 8);
  dStack_dc0 = local_dc8;
  FUN_18015ad60(local_6e8,0x600,0xffffffffffffffff,
                "command=%lld active=%d mode=%u side=%d camera_yaw=%.2f source_yaw=%.2f sent_yaw=%.2f pitch=%.2f quantized=%d duty=%.3f subticks=%d shooting=%d target_selection=%d visibility_traces=0 buttons=0x%llx attack_indices=(%d,%d) weapon=%d weapon_type=%u base_pose_owned=%d history_owned=%d"
               );
  ppuVar14 = &PTR_180700558;
  local_de8 = &PTR_180700558;
  if (local_6e8[0] != '\0') {
    local_de8 = (undefined **)&DAT_1806bcfc0;
  }
  local_de0 = local_6e8;
  FUN_1800f6900();
  uVar26 = uStack_d0c;
  fVar31 = *(float *)(param_1 + 4);
  auVar30 = auVar34._0_16_;
  bVar9 = auVar34[0xc];
  auVar27 = vpcmpeqd_avx(ZEXT116(bVar9),SUB6416(ZEXT464(0),0));
  auVar29 = auVar38._0_16_;
  auVar27 = vblendvps_avx(auVar30,auVar29,auVar27);
  auVar37 = ZEXT1664(auVar27);
  auVar27 = vpcmpeqd_avx(ZEXT116(bVar9),SUB6416(ZEXT464(0),0));
  auVar30 = vshufps_avx(auVar30,auVar30,0x55);
  auVar27 = vblendvps_avx(auVar30,auVar29,auVar27);
  auVar40 = ZEXT1664(auVar27);
  local_d47 = DAT_180cad9c0;
  auVar4._8_4_ = uStack_d10;
  auVar4._0_8_ = local_d18;
  auVar4._12_4_ = uStack_d0c;
  auVar27 = vpcmpeqd_avx(ZEXT116((byte)uStack_d0c),SUB6416(ZEXT464(0),0));
  auVar30 = vshufps_avx(auVar4,auVar4,0xaa);
  auVar27 = vblendvps_avx(auVar30,auVar29,auVar27);
  auVar41 = ZEXT1664(auVar27);
  auVar27 = vpcmpeqd_avx(ZEXT116((byte)uStack_d0c),SUB6416(ZEXT464(0),0));
  auVar30 = vshufps_avx(auVar4,auVar4,0x55);
  auVar27 = vblendvps_avx(auVar30,auVar29,auVar27);
  local_d28 = CONCAT44(local_d28._4_4_,auVar27._0_4_);
  local_d38._0_4_ = *(float *)(lVar20 + 0x10);
  fVar3 = auVar39._0_4_ - *(float *)(param_1 + 0x1c);
  auVar34 = ZEXT464((uint)fVar3);
  sVar12 = thunk_FUN_180624430(fVar3);
  if (sVar12 < 1) {
    auVar38._0_8_ = FUN_180615070(auVar34._0_8_,auVar33._0_8_);
    auVar38._8_56_ = extraout_var_01;
    auVar38 = ZEXT1664(auVar38._0_16_);
  }
  FUN_18063ab10(local_6e8,0,0x600);
  local_d78 = (double)fVar31;
  local_d80 = (double)auVar37._0_4_;
  local_d88 = (double)auVar40._0_4_;
  local_da0 = (double)auVar36._0_4_;
  local_da8 = (double)auVar41._0_4_;
  local_db0 = (double)(float)local_d28;
  dStack_dc0 = (double)(float)local_d38;
  local_dc8 = (double)auVar38._0_4_;
  local_dd0 = (double)auVar39._0_4_;
  local_dd8 = (double)*(float *)(param_1 + 0x1c);
  local_d90 = (uint)bVar9;
  local_d98 = (uint)(local_d47 != 0);
  local_db8 = (double)(CONCAT44(local_db8._4_4_,uVar26) & 0xffffffff000000ff);
  local_de0 = (char *)CONCAT44(local_de0._4_4_,(uint)local_d48);
  local_de8 = *(undefined ***)(param_2 + 8);
  FUN_18015ad60(local_6e8,0x600,0xffffffffffffffff,
                "command=%lld serialized=%d requested_yaw=%.3f submitted_yaw=%.3f yaw_residual=%.3f command_roll=%.3f model_valid=%d model_yaw=%.3f model_roll=%.3f history_yaw_error=%.3f interpolated_history=%d eye_valid=%d eye_yaw=%.3f eye_pitch=%.3f camera_yaw=%.3f server_ack=unavailable"
               );
  local_de8 = &PTR_180700558;
  if (local_6e8[0] != '\0') {
    local_de8 = (undefined **)&DAT_1806bcfc0;
  }
  local_de0 = local_6e8;
  FUN_1800f6900(0);
  FUN_18063ab10(local_6e8,0,0x600);
  local_db0 = (double)*(float *)(pUVar18 + 7);
  local_da0 = (double)CONCAT44(local_da0._4_4_,(uint)(DAT_180cad7a0 != '\0'));
  local_da8 = (double)CONCAT44(local_da8._4_4_,(uint)(DAT_180cad730 != '\0'));
  local_db8 = (double)pUVar18[5];
  dStack_dc0 = (double)pUVar18[4];
  local_dc8 = (double)pUVar18[3];
  local_dd0 = (double)pUVar18[2];
  local_dd8 = (double)CONCAT44(local_dd8._4_4_,(uint)(DAT_180cad2e0 == 1));
  local_de0 = (char *)CONCAT44(local_de0._4_4_,(uint)(DAT_180cad6b8 != '\0'));
  local_de8 = *(undefined ***)(param_2 + 8);
  FUN_18015ad60(local_6e8,0x600,0xffffffffffffffff,
                "command=%lld enabled=%d rage_active=%d commands=%llu active=%llu shooting=%llu direction_flips=%llu max_yaw_delta=%.3f jitter=%d spin=%d interval_ms=2000 sample_phase=post_crc_prepare network_send_observed=0"
               );
  if (local_6e8[0] != '\0') {
    ppuVar14 = (undefined **)&DAT_1806bcfc0;
  }
  local_de0 = local_6e8;
  local_de8 = ppuVar14;
  FUN_1800f6900(0);
  pUVar18[5] = 0;
  pUVar18[4] = 0;
  pUVar18[3] = 0;
  pUVar18[2] = 0;
  *(undefined4 *)(pUVar18 + 7) = 0;
LAB_18024e89c:
  FUN_180180bf0(&local_708);
  if ((char)uStack_6f8 != '\0') {
    ReleaseSRWLockShared(pRStack_700);
  }
}



