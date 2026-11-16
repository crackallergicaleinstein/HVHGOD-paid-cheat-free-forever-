// FUN_1802b0560 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802b0560 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1802b0560(void)

{
  int *piVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined1 (*pauVar4) [32];
  undefined8 *puVar5;
  longlong *plVar6;
  float fVar7;
  float fVar8;
  undefined1 auVar9 [32];
  bool bVar10;
  char cVar11;
  byte bVar12;
  short sVar13;
  int iVar14;
  int iVar15;
  ULONGLONG UVar16;
  longlong *plVar17;
  ULONGLONG UVar18;
  longlong lVar19;
  undefined8 *puVar20;
  longlong *plVar21;
  char cVar22;
  longlong *plVar23;
  ulonglong uVar24;
  undefined8 *puVar25;
  float *pfVar26;
  float fVar27;
  ulonglong uVar28;
  undefined1 (*pauVar29) [16];
  undefined1 (*pauVar30) [16];
  ulonglong uVar31;
  undefined8 uVar32;
  ulonglong uVar33;
  undefined1 extraout_var [56];
  undefined1 auVar34 [64];
  undefined1 auVar35 [64];
  undefined1 auVar36 [64];
  undefined1 auVar37 [64];
  undefined1 auVar38 [64];
  undefined1 auVar39 [64];
  undefined1 auVar40 [64];
  undefined1 auVar41 [16];
  undefined1 auVar42 [64];
  float fVar43;
  undefined1 auVar44 [64];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [64];
  undefined1 auVar48 [16];
  undefined1 auVar49 [64];
  undefined1 auStack_918 [32];
  undefined1 (*local_8f8) [16];
  undefined8 local_8f0;
  undefined4 local_8e0;
  float local_8d8 [2];
  undefined8 local_8d0;
  float local_8c8;
  float local_8c0;
  undefined8 local_8b8;
  float local_8b0;
  ULONGLONG local_8a8;
  longlong local_8a0;
  longlong *local_898;
  longlong *local_890;
  undefined8 local_888;
  int iStack_880;
  uint uStack_87c;
  undefined4 uStack_878;
  undefined4 uStack_874;
  undefined4 uStack_870;
  float fStack_86c;
  ULONGLONG local_868;
  byte bStack_860;
  byte bStack_85f;
  undefined6 uStack_85e;
  float local_858;
  undefined4 uStack_854;
  float fStack_850;
  uint uStack_84c;
  undefined1 local_848 [16];
  undefined1 local_838 [16];
  undefined1 local_828 [8];
  longlong local_820 [20];
  float local_77c;
  char local_720;
  uint local_128;
  uint local_120;
  char local_118;
  undefined8 local_108;
  float local_100;
  undefined1 local_f8 [16];
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  ulonglong local_d8;
  
  local_d8 = DAT_1808d5f00 ^ (ulonglong)auStack_918;
  AcquireSRWLockShared((PSRWLOCK)&DAT_180bb88c0);
  local_f8._8_8_ = uRam0000000180bb8898;
  local_f8._0_8_ = _DAT_180bb8890;
  uStack_e8 = uRam0000000180bb88a0;
  uStack_e0 = uRam0000000180bb88a8;
  cVar11 = cRam0000000180bb88b8;
  ReleaseSRWLockShared((PSRWLOCK)&DAT_180bb88c0);
  UVar16 = GetTickCount64();
  if (((DAT_180cc76f0 == '\0') && ((DAT_180cc78b8 == '\0' || (DAT_180cc79a0 == '\0')))) &&
     ((DAT_180cc7a80 == '\0' || (DAT_180cc7b68 == '\0')))) {
    cVar22 = '\0';
  }
  else {
    cVar22 = '\x01';
  }
  local_8a8 = UVar16;
  if (cVar11 == '\0') {
LAB_1802b17e3:
    local_f8 = (undefined1  [16])0x0;
    FUN_1802b5180(cVar22,local_f8);
  }
  uVar32 = local_f8._8_8_;
  local_8a0 = local_f8._8_8_;
  if ((local_f8._8_8_ == 0) || (cVar22 == '\0')) goto LAB_1802b17e3;
  local_838 = (undefined1  [16])0x0;
  plVar17 = (longlong *)FUN_180113860(&DAT_180bbf078);
  plVar21 = DAT_180bbf070;
  local_898 = DAT_180bbf070;
  local_838._8_8_ = plVar17;
  local_838._0_8_ = DAT_180bbf070;
  if (plVar17 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar17 + 1) = (int)plVar17[1] + 1;
    UNLOCK();
  }
  LOCK();
  UNLOCK();
  bVar12 = (byte)DAT_180bbf078;
  DAT_180bbf078 = (longlong)plVar17;
  local_890 = plVar17;
  if ((bVar12 & 3) == 2) {
    FUN_1805fa36c(&DAT_180bbf078);
  }
  if (((plVar21 != (longlong *)0x0) && (*plVar21 == uVar32)) && (UVar16 < DAT_180c6e598))
  goto LAB_1802b1786;
  DAT_180c6e598 = UVar16 + 0x32;
  iVar14 = DAT_180c6e5ec;
  if (DAT_180c6e5ec == 0) {
    UVar18 = GetTickCount64();
    if (UVar18 < DAT_180c6e5f0) {
      iVar14 = 0;
    }
    else {
      local_8d0 = (undefined1 (*) [16])&DAT_1808f4b40;
      iVar14 = FUN_1805f68d0(&DAT_1808f4b40);
      if (iVar14 != 0) goto LAB_1802b1873;
      if (DAT_1808f4b8c == 0x7fffffff) {
        DAT_1808f4b8c = 0x7ffffffe;
        goto LAB_1802b1888;
      }
      if ((DAT_180c6e5ec == 0) && (DAT_180c6e5f0 <= UVar18)) {
        DAT_180c6e5ec = FUN_1804174b0("C_BaseEntity",0x9d930423);
        if (DAT_180c6e5ec == 0) {
          DAT_180c6e5f0 = UVar18 + 1000;
        }
        else {
          DAT_180c6e5f0 = 0xffffffffffffffff;
        }
      }
      iVar14 = DAT_180c6e5ec;
      FUN_1805f68fc(&DAT_1808f4b40);
    }
  }
  lVar19 = FUN_18017ea70();
  *(int *)(lVar19 + 4) = *(int *)(lVar19 + 4) + 1;
  if ((longlong)iVar14 + uVar32 == 0) {
    bVar10 = false;
    pauVar29 = local_8d0;
  }
  else {
    local_8b8 = (undefined1 (*) [16])0x0;
    cVar11 = FUN_1804514f0(&local_8b8,(longlong)iVar14 + uVar32,8);
    if (cVar11 == '\0') {
      bVar10 = false;
      pauVar29 = local_8d0;
    }
    else {
      bVar10 = true;
      pauVar29 = local_8b8;
    }
  }
  lVar19 = FUN_18017ea70();
  if (*(int *)(lVar19 + 4) != 0) {
    *(int *)(lVar19 + 4) = *(int *)(lVar19 + 4) + -1;
  }
  iVar14 = DAT_180c6e5d8;
  auVar44 = ZEXT864(0);
  if ((!bVar10) || (pauVar29 == (undefined1 (*) [16])0x0)) {
    local_f8[0xc] = 0;
    auVar45 = local_f8;
  }
  else {
    if ((DAT_180c6e5d8 == 0) && (UVar18 = GetTickCount64(), DAT_180c6e5e0 <= UVar18)) {
      local_8d0 = (undefined1 (*) [16])&DAT_1808f4aa0;
      iVar14 = FUN_1805f68d0(&DAT_1808f4aa0);
      if (iVar14 != 0) goto LAB_1802b1873;
      if (DAT_1808f4aec == 0x7fffffff) {
        DAT_1808f4aec = 0x7ffffffe;
        goto LAB_1802b1888;
      }
      if ((DAT_180c6e5d8 == 0) && (DAT_180c6e5e0 <= UVar18)) {
        DAT_180c6e5d8 = FUN_1804174b0("CGameSceneNode",0xe8b4eae5);
        if (DAT_180c6e5d8 == 0) {
          DAT_180c6e5e0 = UVar18 + 1000;
        }
        else {
          DAT_180c6e5e0 = 0xffffffffffffffff;
        }
      }
      iVar14 = DAT_180c6e5d8;
      FUN_1805f68fc(&DAT_1808f4aa0);
    }
    lVar19 = FUN_18017ea70();
    *(int *)(lVar19 + 4) = *(int *)(lVar19 + 4) + 1;
    if (*pauVar29 + iVar14 == (undefined *)0x0) {
LAB_1802b091a:
      uStack_84c = uStack_84c & 0xffffff00;
    }
    else {
      local_8c8 = auVar44._0_4_;
      local_8d0 = (undefined1 (*) [16])CONCAT44(local_8c8,local_8c8);
      cVar11 = FUN_1804514f0(&local_8d0,*pauVar29 + iVar14,0xc);
      if (cVar11 == '\0') goto LAB_1802b091a;
      local_858 = SUB84(local_8d0,0);
      uStack_854 = (undefined4)((ulonglong)local_8d0 >> 0x20);
      fStack_850 = local_8c8;
      uStack_84c = CONCAT31(uStack_84c._1_3_,1);
    }
    lVar19 = FUN_18017ea70();
    if (*(int *)(lVar19 + 4) != 0) {
      *(int *)(lVar19 + 4) = *(int *)(lVar19 + 4) + -1;
    }
    auVar45._4_4_ = uStack_854;
    auVar45._0_4_ = local_858;
    auVar45._8_4_ = fStack_850;
    auVar45._12_4_ = uStack_84c;
  }
  auVar47 = ZEXT1664(auVar45);
  iVar14 = DAT_180c6e5e8;
  if (DAT_180c6e5e8 == 0) {
    UVar18 = GetTickCount64();
    if (UVar18 < DAT_180c6e5c0) {
      iVar14 = 0;
    }
    else {
      local_8d0 = (undefined1 (*) [16])&DAT_1808f4a50;
      iVar14 = FUN_1805f68d0(&DAT_1808f4a50);
      if (iVar14 != 0) goto LAB_1802b1873;
      if (DAT_1808f4a9c == 0x7fffffff) {
        DAT_1808f4a9c = 0x7ffffffe;
        goto LAB_1802b1888;
      }
      if ((DAT_180c6e5e8 == 0) && (DAT_180c6e5c0 <= UVar18)) {
        DAT_180c6e5e8 = FUN_1804174b0("C_BaseEntity",0x84cdad2);
        if (DAT_180c6e5e8 == 0) {
          DAT_180c6e5c0 = UVar18 + 1000;
        }
        else {
          DAT_180c6e5c0 = 0xffffffffffffffff;
        }
      }
      iVar14 = DAT_180c6e5e8;
      FUN_1805f68fc(&DAT_1808f4a50);
    }
  }
  lVar19 = FUN_18017ea70();
  *(int *)(lVar19 + 4) = *(int *)(lVar19 + 4) + 1;
  bVar10 = false;
  if ((longlong)iVar14 + uVar32 != 0) {
    local_8d8[0] = 0.0;
    cVar11 = FUN_1804514f0(local_8d8,(longlong)iVar14 + uVar32,4);
    if (cVar11 == '\0') {
      bVar10 = false;
    }
    else {
      bVar10 = true;
    }
  }
  fVar43 = local_8d8[0];
  lVar19 = FUN_18017ea70();
  if (*(int *)(lVar19 + 4) != 0) {
    *(int *)(lVar19 + 4) = *(int *)(lVar19 + 4) + -1;
  }
  local_8c0 = 0.0;
  if (bVar10) {
    local_8c0 = fVar43;
  }
  iVar14 = DAT_180c6e5c8;
  if (DAT_180c6e5c8 == 0) {
    UVar18 = GetTickCount64();
    if (UVar18 < DAT_180c6e5d0) {
      iVar14 = 0;
    }
    else {
      local_8d0 = (undefined1 (*) [16])&DAT_1808f49b0;
      iVar14 = FUN_1805f68d0(&DAT_1808f49b0);
      if (iVar14 != 0) goto LAB_1802b1873;
      if (DAT_1808f49fc == 0x7fffffff) {
        DAT_1808f49fc = 0x7ffffffe;
        goto LAB_1802b1888;
      }
      if ((DAT_180c6e5c8 == 0) && (DAT_180c6e5d0 <= UVar18)) {
        DAT_180c6e5c8 = FUN_1804174b0("C_CSPlayerPawn",0x8937152d);
        if (DAT_180c6e5c8 == 0) {
          DAT_180c6e5d0 = UVar18 + 1000;
        }
        else {
          DAT_180c6e5d0 = 0xffffffffffffffff;
        }
      }
      iVar14 = DAT_180c6e5c8;
      FUN_1805f68fc(&DAT_1808f49b0);
    }
  }
  lVar19 = FUN_18017ea70();
  *(int *)(lVar19 + 4) = *(int *)(lVar19 + 4) + 1;
  bVar10 = false;
  if ((longlong)iVar14 + uVar32 != 0) {
    local_8d8[0] = 0.0;
    cVar11 = FUN_1804514f0(local_8d8,(longlong)iVar14 + uVar32,4);
    if (cVar11 == '\0') {
      bVar10 = false;
    }
    else {
      bVar10 = true;
    }
  }
  fVar43 = local_8d8[0];
  lVar19 = FUN_18017ea70();
  if (*(int *)(lVar19 + 4) != 0) {
    *(int *)(lVar19 + 4) = *(int *)(lVar19 + 4) + -1;
  }
  iVar14 = DAT_180c6e5b0;
  fVar27 = 0.0;
  if (bVar10) {
    fVar27 = fVar43;
  }
  local_8d8[0] = fVar27;
  if ((DAT_180c6e5b0 == 0) && (UVar18 = GetTickCount64(), DAT_180c6e5b8 <= UVar18)) {
    local_8d0 = (undefined1 (*) [16])&DAT_1808f4a00;
    iVar14 = FUN_1805f68d0(&DAT_1808f4a00);
    if (iVar14 != 0) {
LAB_1802b1873:
                    /* WARNING: Subroutine does not return */
      FUN_1805f6d44(5);
    }
    if (DAT_1808f4a4c == 0x7fffffff) {
      DAT_1808f4a4c = 0x7ffffffe;
LAB_1802b1888:
                    /* WARNING: Subroutine does not return */
      FUN_1805f6d44(6);
    }
    if ((DAT_180c6e5b0 == 0) && (DAT_180c6e5b8 <= UVar18)) {
      DAT_180c6e5b0 = FUN_1804174b0("C_BaseModelEntity",0x39db834b);
      if (DAT_180c6e5b0 == 0) {
        DAT_180c6e5b8 = UVar18 + 1000;
      }
      else {
        DAT_180c6e5b8 = 0xffffffffffffffff;
      }
    }
    iVar14 = DAT_180c6e5b0;
    FUN_1805f68fc(&DAT_1808f4a00);
  }
  lVar19 = FUN_18017ea70();
  *(int *)(lVar19 + 4) = *(int *)(lVar19 + 4) + 1;
  if ((longlong)iVar14 + uVar32 == 0) {
LAB_1802b0c01:
    bVar10 = false;
    fVar8 = local_8d8[0];
    fVar43 = local_8d8[0];
    fVar7 = local_8d8[0];
  }
  else {
    local_8c8 = auVar44._0_4_;
    local_8d0 = (undefined1 (*) [16])CONCAT44(local_8c8,local_8c8);
    cVar11 = FUN_1804514f0(&local_8d0,(longlong)iVar14 + uVar32,0xc);
    if (cVar11 == '\0') goto LAB_1802b0c01;
    bVar10 = true;
    fVar8 = local_8c8;
    fVar43 = (float)local_8d0;
    fVar7 = local_8d0._4_4_;
  }
  auVar38 = ZEXT464((uint)fVar7);
  auVar35 = ZEXT464((uint)fVar8);
  lVar19 = FUN_18017ea70();
  if (*(int *)(lVar19 + 4) != 0) {
    *(int *)(lVar19 + 4) = *(int *)(lVar19 + 4) + -1;
  }
  auVar45 = auVar47._0_16_;
  if ((auVar47[0xc] != '\0') && (bVar10)) {
    local_f8 = vshufps_avx(auVar45,auVar45,0x55);
    auVar42 = ZEXT1664(local_f8);
    auVar45 = vshufps_avx(auVar45,auVar45,0xaa);
    auVar49 = ZEXT1664(auVar45);
    sVar13 = thunk_FUN_180624430(auVar47._0_4_ + local_f8._0_4_ + auVar45._0_4_ + fVar43 +
                                 auVar38._0_4_ + auVar35._0_4_);
    fVar7 = local_8c0;
    if ((sVar13 < 1) &&
       (((16.0 <= auVar35._0_4_ && (auVar35._0_4_ <= 80.0)) && (0 < (int)local_8c0)))) {
      if (DAT_180c7df28 == (undefined8 *)0x0) {
        local_848._8_8_ = 0x15;
        local_848._0_8_ = "tier0.dll:g_pMemAlloc";
        DAT_180c7df28 = (undefined8 *)FUN_180451750(local_848);
      }
      local_8b8 = (undefined1 (*) [16])
                  (**(code **)(*(longlong *)*DAT_180c7df28 + 8))((longlong *)*DAT_180c7df28,0x60);
      if (local_8b8 == (undefined1 (*) [16])0x0) {
        local_8b8 = (undefined1 (*) [16])0x0;
      }
      else {
        *local_8b8 = (undefined1  [16])0x0;
        *(undefined4 *)(*local_8b8 + 8) = 1;
        *(undefined4 *)(*local_8b8 + 0xc) = 1;
        *(undefined ***)*local_8b8 =
             std::_Ref_count_obj2<features::esp::projectile::_anon_147F1E66::hazard_frame>::vftable;
        *(undefined8 *)local_8b8[4] = 0x3f99999a;
        *(undefined8 *)local_8b8[1] = 0;
        *(undefined8 *)(local_8b8[1] + 8) = 0;
        *(undefined8 *)local_8b8[2] = 0;
        *(undefined8 *)(local_8b8[2] + 8) = 0;
        *(undefined8 *)local_8b8[3] = 0;
        *(undefined4 *)(local_8b8[3] + 8) = 0x42c60000;
        *(undefined4 *)(local_8b8[3] + 0xc) = 0x43af0000;
        *(undefined8 *)(local_8b8[4] + 8) = 0;
        *(undefined8 *)local_8b8[5] = 0;
        *(undefined8 *)(local_8b8[5] + 8) = 0;
      }
      pauVar30 = local_8b8;
      pauVar29 = local_8b8 + 1;
      local_848._8_8_ = local_8b8;
      local_848._0_8_ = pauVar29;
      *(longlong *)*pauVar29 = local_8a0;
      *(longlong *)(local_8b8[1] + 8) = auVar47._0_8_;
      *(float *)local_8b8[2] = auVar49._0_4_;
      *(float *)(local_8b8[2] + 4) = fVar43 + auVar47._0_4_;
      *(float *)(local_8b8[2] + 8) = auVar38._0_4_ + auVar42._0_4_;
      *(float *)(local_8b8[2] + 0xc) = auVar35._0_4_ + auVar49._0_4_;
      *(float *)local_8b8[3] = fVar7;
      *(float *)(local_8b8[3] + 4) = fVar27;
      local_108 = pauVar29;
      puVar20 = (undefined8 *)FUN_1802af0d0(&local_858);
      UVar18 = local_8a8;
      uVar2 = *(undefined4 *)(puVar20 + 1);
      local_8d0 = (undefined1 (*) [16])(pauVar30[3] + 8);
      *(undefined8 *)*local_8d0 = *puVar20;
      *(undefined4 *)pauVar30[4] = uVar2;
      puVar20 = DAT_180b8f970;
      if (DAT_180b8f968 != DAT_180b8f970) {
        puVar25 = DAT_180b8f968;
        do {
          lVar19 = 0;
          if (0x3f < (ulonglong)((*(longlong *)pauVar30[5] - *(longlong *)(pauVar30[4] + 8)) / 0x30)
             ) break;
          lVar3 = puVar25[1];
          if ((lVar3 == 0x1d8fded0) || (lVar3 == 0xf7b68f78)) {
            bVar10 = true;
          }
          else {
            bVar10 = false;
          }
          if (lVar3 == 0xbbe43941) {
LAB_1802b0e9e:
            if ((&DAT_180cc76f0)[lVar19] != '\0') {
              if (lVar3 != 0xbbe43941) {
                if ((&DAT_180cc77d8)[lVar19] == '\0') goto LAB_1802b106d;
              }
              if (*(char *)((longlong)puVar25 + 0x81) == '\0') {
                if (*(char *)((longlong)puVar25 + 100) != '\0') {
                  if (-1 < *(int *)(puVar25 + 0xc)) {
                    uVar28 = puVar25[10];
                    auVar41._8_8_ = 0;
                    auVar41._0_8_ = uVar28;
                    fVar43 = *(float *)(puVar25 + 0xb);
                    auVar45 = vshufps_avx(auVar41,auVar41,0x55);
                    local_858 = (float)uVar28;
                    uStack_854 = (undefined4)(uVar28 >> 0x20);
                    auVar35 = ZEXT464((uint)fVar43);
                    auVar38 = ZEXT1664(auVar45);
                    auVar42 = ZEXT464((uint)local_858);
                    auVar39 = ZEXT464((uint)(fVar43 - auVar49._0_4_));
                    auVar40 = ZEXT464((uint)(auVar45._0_4_ - (float)local_f8._0_4_));
                    auVar34 = ZEXT464((uint)(local_858 - auVar47._0_4_));
                    auVar36 = ZEXT1664(auVar41);
                    auVar44 = ZEXT1664(auVar44._0_16_);
                    auVar47 = ZEXT1664(auVar47._0_16_);
                    auVar49 = ZEXT1664(auVar49._0_16_);
                    sVar13 = thunk_FUN_180624430();
                    if (sVar13 < 1) {
                      if (lVar3 == 0xbbe43941) {
                        fVar27 = auVar35._0_4_ - *(float *)(local_108[1] + 0xc);
                        fVar7 = auVar38._0_4_ - *(float *)(local_108[1] + 8);
                        fVar8 = auVar42._0_4_ - *(float *)(local_108[1] + 4);
                        fVar27 = fVar8 * fVar8 + fVar7 * fVar7 + fVar27 * fVar27;
                        if (fVar27 == auVar44._0_4_) {
                          uVar28 = auVar44._0_8_;
                        }
                        else if (fVar27 < 0.0) {
                          uVar28 = FUN_18061e150(fVar27);
                        }
                        else {
                          uVar28 = (ulonglong)(uint)SQRT(fVar27);
                        }
                        local_8f8 = local_8d0;
                        iVar14 = FUN_1802aee30(uVar28,local_8d8[0],local_8c0,1);
                        bVar12 = 0 < iVar14;
                      }
                      else {
                        uVar32 = FUN_180636420(auVar34._0_8_,auVar40._0_8_);
                        bVar12 = FUN_1802aefe0(uVar32,auVar39._0_8_,auVar44._0_8_,
                                               *(undefined4 *)((longlong)&DAT_180cc78b0 + lVar19));
                      }
                      iVar14 = FUN_1802aff10(*puVar25);
                      if (iVar14 != -1) {
                        local_888 = *puVar25;
                        uStack_87c = (uint)(lVar3 != 0xbbe43941);
                        uStack_878 = 0;
                        uStack_874 = auVar36._0_4_;
                        uStack_870 = auVar36._4_4_;
                        local_868 = UVar18;
                        bStack_85f = bVar12 ^ 1;
                        pauVar4 = *(undefined1 (**) [32])pauVar30[5];
                        iStack_880 = iVar14;
                        fStack_86c = fVar43;
                        bStack_860 = bVar12;
                        if (pauVar4 == *(undefined1 (**) [32])(pauVar30[5] + 8)) {
                          FUN_1802b64c0(pauVar30[4] + 8,pauVar4,&local_888);
                        }
                        else {
                          auVar9._8_4_ = iVar14;
                          auVar9._0_8_ = local_888;
                          auVar9[0xc] = lVar3 != 0xbbe43941;
                          auVar9._13_7_ = 0;
                          auVar9._20_4_ = uStack_874;
                          auVar9._24_4_ = uStack_870;
                          auVar9._28_4_ = fVar43;
                          *pauVar4 = auVar9;
                          auVar46[8] = bVar12;
                          auVar46._0_8_ = UVar18;
                          auVar46[9] = bStack_85f;
                          auVar46._10_6_ = uStack_85e;
                          *(undefined1 (*) [16])pauVar4[1] = auVar46;
                          *(longlong *)pauVar30[5] = *(longlong *)pauVar30[5] + 0x30;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
          else {
            lVar19 = 0x1c8;
            if (bVar10) goto LAB_1802b0e9e;
          }
LAB_1802b106d:
          puVar25 = puVar25 + 0x11;
        } while (puVar25 != puVar20);
        auVar42 = ZEXT1664(local_f8);
        pauVar29 = local_108;
        pauVar30 = local_8b8;
        UVar16 = local_8a8;
      }
      if ((DAT_180cc7a80 != '\0') && (DAT_180cc7b68 != '\0')) {
        auVar35 = ZEXT1664(auVar42._0_16_);
        auVar44 = ZEXT1664(auVar44._0_16_);
        auVar47 = ZEXT1664(auVar47._0_16_);
        auVar38 = ZEXT1664(auVar49._0_16_);
        plVar21 = (longlong *)FUN_1803d44c0();
        auVar48 = auVar38._0_16_;
        auVar46 = auVar47._0_16_;
        auVar41 = auVar44._0_16_;
        auVar45 = auVar35._0_16_;
        puVar20 = (undefined8 *)*plVar21;
        puVar25 = (undefined8 *)plVar21[1];
        if (puVar20 != puVar25) {
          auVar42 = ZEXT464(0x7f7fffff);
          do {
            auVar48 = auVar38._0_16_;
            auVar46 = auVar47._0_16_;
            auVar41 = auVar44._0_16_;
            auVar45 = auVar35._0_16_;
            if (0x47 < (ulonglong)
                       ((*(longlong *)pauVar29[4] - *(longlong *)(pauVar29[3] + 8)) / 0x30)) break;
            if (*(int *)(puVar20 + 1) == 0x41a8368e) {
              auVar42 = ZEXT1664(auVar42._0_16_);
              auVar35 = ZEXT1664(auVar45);
              auVar44 = ZEXT1664(auVar41);
              auVar47 = ZEXT1664(auVar46);
              auVar38 = ZEXT1664(auVar48);
              FUN_1802af7c0(local_828,*puVar20);
              if (local_118 != '\0') {
                fVar43 = auVar44._0_4_;
                local_108 = (undefined1 (*) [16])CONCAT44(fVar43,fVar43);
                local_100 = fVar43;
                auVar49 = ZEXT1664(auVar42._0_16_);
                if (0 < (int)local_128) {
                  pfVar26 = (float *)local_820;
                  uVar28 = (ulonglong)local_128;
                  auVar39 = ZEXT464(DAT_180cc7c40);
                  auVar40 = ZEXT464(local_120);
                  do {
                    if (*(char *)(pfVar26 + 4) != '\0') {
                      auVar37 = ZEXT464((uint)(*pfVar26 - auVar38._0_4_));
                      auVar34._0_8_ =
                           FUN_180636420(pfVar26[-2] - auVar47._0_4_,pfVar26[-1] - auVar35._0_4_);
                      auVar34._8_56_ = extraout_var;
                      auVar36 = ZEXT1664(auVar34._0_16_);
                      if (((float)auVar34._0_8_ < auVar49._0_4_) &&
                         (cVar11 = FUN_1802aefe0(auVar34._0_8_,auVar37._0_8_,auVar40._0_8_,
                                                 auVar39._0_8_), cVar11 != '\0')) {
                        local_108 = *(undefined1 (**) [16])(pfVar26 + -2);
                        fVar43 = *pfVar26;
                        auVar49 = ZEXT1664(auVar36._0_16_);
                      }
                    }
                    pfVar26 = pfVar26 + 7;
                    uVar28 = uVar28 - 1;
                  } while (uVar28 != 0);
                }
                iVar14 = FUN_1802aff10(*puVar20);
                UVar16 = local_8a8;
                if (iVar14 != -1) {
                  bStack_860 = auVar49._0_4_ < auVar42._0_4_;
                  local_888 = *puVar20;
                  uStack_87c = 2;
                  uStack_878 = 0;
                  uStack_874 = SUB84(local_108,0);
                  uStack_870 = (undefined4)((ulonglong)local_108 >> 0x20);
                  local_868 = local_8a8;
                  bStack_85f = !(bool)bStack_860;
                  puVar5 = *(undefined8 **)pauVar29[4];
                  iStack_880 = iVar14;
                  fStack_86c = fVar43;
                  if (puVar5 == *(undefined8 **)(pauVar29[4] + 8)) {
                    FUN_1802b64c0(pauVar29[3] + 8,puVar5,&local_888);
                  }
                  else {
                    *puVar5 = local_888;
                    puVar5[1] = CONCAT44(2,iVar14);
                    puVar5[2] = (longlong)local_108 << 0x20;
                    puVar5[3] = CONCAT44(fVar43,uStack_870);
                    auVar48[8] = bStack_860;
                    auVar48._0_8_ = local_8a8;
                    auVar48[9] = bStack_85f;
                    auVar48._10_6_ = uStack_85e;
                    *(undefined1 (*) [16])(puVar5 + 4) = auVar48;
                    *(longlong *)pauVar29[4] = *(longlong *)pauVar29[4] + 0x30;
                  }
                }
              }
            }
            auVar48 = auVar38._0_16_;
            auVar46 = auVar47._0_16_;
            auVar41 = auVar44._0_16_;
            auVar45 = auVar35._0_16_;
            puVar20 = puVar20 + 3;
          } while (puVar20 != puVar25);
          pauVar29 = local_8b8 + 1;
          pauVar30 = local_8b8;
        }
        auVar42 = ZEXT1664(auVar45);
        auVar44 = ZEXT1664(auVar41);
        auVar47 = ZEXT1664(auVar46);
        auVar49 = ZEXT1664(auVar48);
        FUN_1801abba0(local_f8);
      }
      if (((((local_898 == (longlong *)0x0) || (*local_898 != local_8a0)) ||
           (*(float *)(local_898 + 4) != local_8c0)) ||
          ((*(float *)((longlong)local_898 + 0x24) != local_8d8[0] ||
           (*(float *)(local_898 + 5) != *(float *)(pauVar29[2] + 8))))) ||
         (((*(float *)((longlong)local_898 + 0x2c) != *(float *)(pauVar29[2] + 0xc) ||
           ((*(float *)(local_898 + 6) != *(float *)pauVar29[3] ||
            (fVar43 = *(float *)(local_898 + 2) - *(float *)pauVar29[1],
            fVar27 = *(float *)((longlong)local_898 + 0xc) - *(float *)(*pauVar29 + 0xc),
            fVar7 = *(float *)(local_898 + 1) - *(float *)(*pauVar29 + 8),
            0.25 <= fVar7 * fVar7 + fVar27 * fVar27 + fVar43 * fVar43)))) ||
          (fVar43 = *(float *)((longlong)local_898 + 0x1c) - *(float *)(pauVar29[1] + 0xc),
          fVar27 = *(float *)(local_898 + 3) - *(float *)(pauVar29[1] + 8),
          fVar7 = *(float *)((longlong)local_898 + 0x14) - *(float *)(pauVar29[1] + 4),
          0.25 <= fVar7 * fVar7 + fVar27 * fVar27 + fVar43 * fVar43)))) {
        bVar10 = false;
      }
      else {
        bVar10 = true;
      }
      plVar21 = *(longlong **)pauVar29[4];
      plVar17 = *(longlong **)(pauVar29[3] + 8);
      if (plVar17 != plVar21) {
        do {
          if (((char)plVar17[5] != '\0') && (bVar10)) {
            plVar6 = (longlong *)local_898[8];
            plVar23 = (longlong *)local_898[7];
            if (plVar23 != plVar6) {
              do {
                if ((((*plVar23 == *plVar17) && ((int)plVar23[1] == (int)plVar17[1])) &&
                    (*(int *)((longlong)plVar23 + 0xc) == *(int *)((longlong)plVar17 + 0xc))) &&
                   (((*(char *)((longlong)plVar23 + 0x29) != '\0' &&
                     ((ulonglong)plVar23[4] <= UVar16)) &&
                    ((UVar16 - plVar23[4] < 0x96 &&
                     (fVar43 = *(float *)((longlong)plVar23 + 0x1c) -
                               *(float *)((longlong)plVar17 + 0x1c),
                     fVar27 = *(float *)((longlong)plVar23 + 0x14) -
                              *(float *)((longlong)plVar17 + 0x14),
                     fVar27 * fVar27 +
                     (*(float *)(plVar23 + 3) - *(float *)(plVar17 + 3)) *
                     (*(float *)(plVar23 + 3) - *(float *)(plVar17 + 3)) + fVar43 * fVar43 < 0.25)))
                    ))) break;
                plVar23 = plVar23 + 6;
              } while (plVar23 != plVar6);
              if (plVar23 != plVar6) {
                *(undefined1 *)((longlong)plVar17 + 0x29) = 1;
                *(char *)(plVar17 + 5) = (char)plVar23[5];
                *(int *)(plVar17 + 2) = (int)plVar23[2];
                plVar17[4] = plVar23[4];
              }
            }
          }
          plVar17 = plVar17 + 6;
        } while (plVar17 != plVar21);
        pauVar30 = local_8b8;
      }
      lVar19 = *(longlong *)pauVar29[4] - *(longlong *)(pauVar29[3] + 8);
      lVar19 = lVar19 / 6 + (lVar19 >> 0x3f);
      uVar28 = (lVar19 >> 3) - (lVar19 >> 0x3f);
      uVar31 = 0;
      if (uVar28 != 0) {
        auVar35 = ZEXT464(0x3f800000);
        auVar38 = ZEXT464(0x41000000);
        fVar43 = 0.97;
        auVar39 = ZEXT464(0x41800000);
        plVar21 = (longlong *)0x4;
        do {
          lVar19 = local_8a0;
          if ((int)plVar21 < 1) goto LAB_1802b16ba;
          uVar24 = (DAT_180c6e5a0 + uVar31) % uVar28;
          lVar3 = *(longlong *)(pauVar29[3] + 8);
          if (*(char *)(lVar3 + 0x29 + uVar24 * 0x30) == '\0') {
            local_898 = (longlong *)(ulonglong)((int)plVar21 - 1);
            fVar27 = auVar44._0_4_;
            if (*(int *)(lVar3 + 0xc + uVar24 * 0x30) == 0) {
              local_108 = *(undefined1 (**) [16])(pauVar30[2] + 4);
              local_100 = *(float *)(pauVar30[2] + 0xc);
            }
            else {
              local_100 = auVar49._0_4_ + auVar39._0_4_;
              auVar45 = vunpcklps_avx(ZEXT416((uint)(auVar47._0_4_ + fVar27)),
                                      ZEXT416((uint)(auVar42._0_4_ + fVar27)));
              local_108 = auVar45._0_8_;
            }
            local_8b8 = (undefined1 (*) [16])
                        CONCAT44(fVar27 + *(float *)(lVar3 + 0x18 + uVar24 * 0x30),
                                 fVar27 + *(float *)(lVar3 + 0x14 + uVar24 * 0x30));
            auVar45 = vpcmpeqd_avx(ZEXT416(*(uint *)(lVar3 + 0xc + uVar24 * 0x30)),ZEXT416(0));
            auVar45 = vblendvps_avx(auVar38._0_16_,auVar35._0_16_,auVar45);
            local_8b0 = auVar45._0_4_ + *(float *)(lVar3 + 0x1c + uVar24 * 0x30);
            local_8e0 = 7;
            local_8f0 = 0x1c3003;
            local_8f8 = *(undefined1 (**) [16])(lVar3 + uVar24 * 0x30);
            auVar35 = ZEXT1664(auVar35._0_16_);
            auVar38 = ZEXT1664(auVar38._0_16_);
            auVar39 = ZEXT1664(auVar39._0_16_);
            auVar42 = ZEXT1664(auVar42._0_16_);
            auVar44 = ZEXT1664(auVar44._0_16_);
            auVar47 = ZEXT1664(auVar47._0_16_);
            auVar49 = ZEXT1664(auVar49._0_16_);
            FUN_180417de0(local_898,local_828,&local_8b8,&local_108);
            if (local_720 != '\0') {
              if ((fVar43 <= local_77c) || (local_820[0] == lVar19)) {
                cVar11 = '\x01';
              }
              else {
                cVar11 = '\0';
              }
              *(undefined1 *)(lVar3 + 0x29 + uVar24 * 0x30) = 1;
              *(ULONGLONG *)(lVar3 + 0x20 + uVar24 * 0x30) = UVar16;
              iVar14 = *(int *)(lVar3 + 0xc + uVar24 * 0x30);
              if (iVar14 == 0) {
                fVar27 = local_100 - *(float *)(lVar3 + 0x1c + uVar24 * 0x30);
                fVar7 = local_108._4_4_ - *(float *)(lVar3 + 0x18 + uVar24 * 0x30);
                fVar8 = (float)local_108 - *(float *)(lVar3 + 0x14 + uVar24 * 0x30);
                fVar27 = fVar8 * fVar8 + fVar7 * fVar7 + fVar27 * fVar27;
                if (fVar27 == auVar44._0_4_) {
                  uVar33 = auVar44._0_8_;
                }
                else if (fVar27 < 0.0) {
                  uVar33 = FUN_18061e150(fVar27);
                }
                else {
                  uVar33 = (ulonglong)(uint)SQRT(fVar27);
                }
                local_8f8 = local_8d0;
                iVar15 = FUN_1802aee30(uVar33,local_8d8[0],local_8c0,cVar11);
              }
              else {
                iVar15 = 0;
              }
              *(int *)(lVar3 + 0x10 + uVar24 * 0x30) = iVar15;
              if ((cVar11 == '\0') || ((iVar14 == 0 && (iVar15 < 1)))) {
                *(undefined1 *)(lVar3 + 0x28 + uVar24 * 0x30) = 0;
              }
              else {
                *(undefined1 *)(lVar3 + 0x28 + uVar24 * 0x30) = 1;
              }
            }
            plVar21 = local_898;
          }
          uVar31 = uVar31 + 1;
          pauVar29 = pauVar30 + 1;
          UVar16 = local_8a8;
        } while (uVar31 < uVar28);
      }
      if (uVar28 != 0) {
LAB_1802b16ba:
        DAT_180c6e5a0 = (DAT_180c6e5a0 + 4) % uVar28;
      }
      AcquireSRWLockShared((PSRWLOCK)&DAT_180bb88c0);
      local_f8._8_8_ = uRam0000000180bb8898;
      local_f8._0_8_ = _DAT_180bb8890;
      uStack_e8 = uRam0000000180bb88a0;
      uStack_e0 = uRam0000000180bb88a8;
      ReleaseSRWLockShared((PSRWLOCK)&DAT_180bb88c0);
      if (local_f8._8_8_ == local_8a0) {
        local_f8 = local_848;
        pauVar30 = (undefined1 (*) [16])0x0;
        FUN_1802b5180();
      }
      if (pauVar30 != (undefined1 (*) [16])0x0) {
        LOCK();
        piVar1 = (int *)(*pauVar30 + 8);
        iVar14 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar14 == 1) {
          (*(code *)**(undefined8 **)*pauVar30)(pauVar30);
          LOCK();
          piVar1 = (int *)(*pauVar30 + 0xc);
          iVar14 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar14 == 1) {
            (**(code **)(*(longlong *)*pauVar30 + 8))(pauVar30);
          }
        }
      }
      plVar17 = local_890;
      goto LAB_1802b1786;
    }
  }
  local_f8 = (undefined1  [16])0x0;
  FUN_1802b5180(0,local_f8);
LAB_1802b1786:
  if (plVar17 == (longlong *)0x0) {
  }
  LOCK();
  plVar21 = plVar17 + 1;
  lVar19 = *plVar21;
  *(int *)plVar21 = (int)*plVar21 + -1;
  UNLOCK();
  if ((int)lVar19 != 1) {
  }
  (**(code **)*plVar17)(plVar17);
  LOCK();
  piVar1 = (int *)((longlong)plVar17 + 0xc);
  iVar14 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar14 == 1) {
    (**(code **)(*plVar17 + 8))(plVar17);
  }
}



