// FUN_1802b2f40 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802b2f40 */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1802b2f40(undefined8 param_1,undefined8 param_2,longlong param_3,byte *param_4,
                  undefined4 *param_5)

{
  longlong *plVar1;
  longlong *plVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  char cVar6;
  short sVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  int iVar11;
  undefined1 uVar12;
  int iVar13;
  undefined1 auVar14 [8];
  undefined8 *puVar15;
  undefined8 *puVar16;
  float *pfVar17;
  uint uVar18;
  ulonglong uVar19;
  uint uVar20;
  int iVar21;
  longlong *plVar22;
  longlong lVar23;
  float *pfVar24;
  float fVar25;
  undefined4 uVar26;
  float fVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined1 extraout_var [56];
  undefined1 auVar30 [16];
  float fVar31;
  float fVar32;
  ulonglong uVar33;
  undefined1 in_ZMM6 [64];
  undefined1 auVar34 [64];
  ulonglong uVar35;
  undefined1 auVar36 [64];
  float fVar37;
  undefined1 auVar38 [16];
  float fVar39;
  undefined1 auVar40 [64];
  float fVar41;
  float fVar42;
  undefined1 in_ZMM10 [64];
  undefined1 auVar43 [64];
  undefined8 uVar44;
  float fVar45;
  undefined1 auVar46 [64];
  undefined1 auStack_18f8 [32];
  float local_18d8;
  undefined1 local_18d0;
  undefined4 local_18c8;
  undefined4 local_18c0;
  undefined1 local_18b8;
  char *local_18b0;
  undefined8 local_18a8;
  char local_1898;
  undefined1 local_1890 [8];
  undefined8 local_1888;
  int local_1880;
  float local_187c;
  float local_1878;
  float local_1874;
  longlong local_1870;
  undefined8 local_1868;
  longlong lStack_1860;
  undefined8 local_1858;
  longlong lStack_1850;
  undefined8 local_1848;
  longlong local_1840;
  byte *local_1838;
  undefined8 local_1830;
  undefined8 local_1828;
  undefined8 uStack_1820;
  undefined8 uStack_1818;
  undefined8 uStack_1810;
  undefined1 local_1808 [32];
  undefined1 local_17e8 [16];
  undefined4 local_17d8;
  undefined1 local_17d4 [3844];
  undefined8 local_8d0;
  undefined1 local_8c8 [16];
  undefined4 local_8b8;
  undefined1 local_8b4;
  undefined8 local_8b0;
  undefined4 local_8a8;
  undefined4 uStack_8a4;
  undefined4 local_8a0;
  float local_898;
  uint local_894;
  uint local_890 [2];
  undefined1 local_888 [8];
  undefined8 uStack_880;
  undefined8 *local_878;
  float *local_870;
  float *pfStack_868;
  float *local_860;
  undefined1 local_858 [16];
  float *local_848;
  undefined1 local_840 [8];
  undefined8 uStack_838;
  float *local_830;
  undefined1 local_828 [16];
  float *local_818;
  undefined8 local_808 [224];
  int local_108;
  int iStack_104;
  float local_100;
  uint local_fc;
  char local_f8;
  ulonglong local_e8;
  undefined1 local_88 [16];
  undefined1 local_48 [16];
  
  local_48 = in_ZMM6._0_16_;
  local_88 = in_ZMM10._0_16_;
  local_e8 = DAT_1808d5f00 ^ (ulonglong)auStack_18f8;
  auVar36 = ZEXT464(DAT_180bbae00);
  local_1848 = CONCAT44(local_1848._4_4_,DAT_180bbae00);
  local_1840 = param_3;
  local_1838 = param_4;
  local_1830 = param_2;
  FUN_1802af7c0(local_808,*(undefined8 *)param_4);
  if (local_f8 == '\0') {
  }
  FUN_1802b00c0(&local_1828,*(undefined8 *)param_4);
  if (((DAT_180cc7a80 == '\0') || (local_1808[0x10] == '\0')) || (local_1808[8] == '\0')) {
    uVar12 = 0;
  }
  else {
    uVar12 = 1;
  }
  FUN_1802b02f0(&local_894,param_5[1],&DAT_180cc7a80,uVar12);
  uVar28 = FUN_1802b02f0(local_890,*param_5,&DAT_180cc7a80,uVar12);
  plVar8 = (longlong *)FUN_1802b5bb0(uVar28,local_17e8,param_4);
  lVar23 = *plVar8;
  auVar46 = ZEXT464(local_fc);
  local_1888 = CONCAT44(local_1888._4_4_,local_fc);
  auVar40 = ZEXT464(0x4e6e6b28);
  iVar21 = 0;
  auVar43 = ZEXT864(0);
  local_1870 = lVar23;
  if (*(int *)(lVar23 + 0x18) != iStack_104) {
    local_17d8 = 0;
    FUN_18063ab10(local_17d4,0,0xf04);
    local_8d0 = 0;
    local_8c8 = (undefined1  [16])0x0;
    local_8b8 = auVar43._0_4_;
    local_8b4 = 0;
    local_8b0 = 0;
    *(undefined4 *)(lVar23 + 0x18) = local_17d8;
    local_8a8 = local_8b8;
    uStack_8a4 = local_8b8;
    local_8a0 = local_8b8;
    FUN_18063aed0(lVar23 + 0x1c,local_17d4,0xf00);
    FUN_1802b5220(lVar23 + 0xf20,&local_8d0);
    *(undefined4 *)(lVar23 + 0xf38) = local_8b8;
    *(undefined1 *)(lVar23 + 0xf3c) = local_8b4;
    *(undefined8 *)(lVar23 + 0xf40) = local_8b0;
    *(ulonglong *)(lVar23 + 0xf48) = CONCAT44(uStack_8a4,local_8a8);
    *(undefined4 *)(lVar23 + 0xf50) = local_8a0;
    FUN_1801b36e0(&local_8d0);
    *(int *)(lVar23 + 0x18) = iStack_104;
    lVar10 = DAT_180bb8958;
    lVar9 = FUN_18017ea70();
    *(int *)(lVar9 + 4) = *(int *)(lVar9 + 4) + 1;
    if (lVar10 == 0) {
      bVar3 = false;
      auVar14 = (undefined1  [8])local_1840;
    }
    else {
      local_1890 = (undefined1  [8])0x0;
      cVar6 = FUN_1804514f0(local_1890,lVar10,8);
      if (cVar6 == '\0') {
        bVar3 = false;
        auVar14 = (undefined1  [8])local_1840;
      }
      else {
        bVar3 = true;
        auVar14 = local_1890;
      }
    }
    lVar10 = FUN_18017ea70();
    if (*(int *)(lVar10 + 4) != 0) {
      *(int *)(lVar10 + 4) = *(int *)(lVar10 + 4) + -1;
    }
    if ((!bVar3) || (auVar14 == (undefined1  [8])0x0)) {
      local_1890[4] = 0;
    }
    else {
      lVar10 = FUN_18017ea70();
      *(int *)(lVar10 + 4) = *(int *)(lVar10 + 4) + 1;
      if ((longlong)auVar14 + 0x30 == 0) {
LAB_1802b3230:
        local_1890[4] = 0;
      }
      else {
        local_898 = auVar43._0_4_;
        cVar6 = FUN_1804514f0(&local_898,(longlong)auVar14 + 0x30,4);
        if (cVar6 == '\0') goto LAB_1802b3230;
        local_1890[4] = 1;
        local_1890._0_4_ = local_898;
      }
      lVar10 = FUN_18017ea70();
      if (*(int *)(lVar10 + 4) != 0) {
        *(int *)(lVar10 + 4) = *(int *)(lVar10 + 4) + -1;
      }
    }
    if (local_1890[4] == '\0') {
      auVar34 = ZEXT464(0xbf800000);
    }
    else {
      auVar34 = ZEXT464((uint)((float)local_1890._0_4_ - (float)iStack_104 * 0.015625));
    }
    if (((0 < iStack_104) && (sVar7 = thunk_FUN_180624430(auVar46._0_4_ + auVar34._0_4_), sVar7 < 1)
        ) && ((auVar43._0_4_ <= auVar34._0_4_ && (auVar34._0_4_ <= auVar46._0_4_ + 0.25)))) {
      plVar8 = (longlong *)FUN_18017bf40(local_1890);
      *(longlong *)(lVar23 + 0xf40) = *plVar8 - (longlong)(auVar34._0_4_ * auVar40._0_4_);
    }
  }
  local_187c = local_100;
  if (local_108 < 0) {
    local_108 = 0;
  }
  iVar13 = local_108;
  if (0x40 < local_108) {
    iVar13 = 0x40;
  }
  auVar40 = ZEXT464(0x3f800000);
  local_1878 = (float)FUN_1806156a0(auVar36._0_4_ * 6.0);
  cVar6 = DAT_180cc7eb8;
  fVar42 = auVar36._0_4_;
  local_858 = (undefined1  [16])0x0;
  local_848 = (float *)0x0;
  if (DAT_180cc7c48 == '\0') {
    local_1898 = '\0';
  }
  else {
    if (DAT_180cc7eb8 != '\0') {
      uVar19 = (longlong)iVar13 * 0xf;
      local_1898 = DAT_180cc7eb8;
      if (uVar19 != 0) {
        if (0x1555555555555555 < uVar19) {
                    /* WARNING: Subroutine does not return */
          FUN_1801136f0();
        }
        uVar28 = FUN_18015bca0((longlong)iVar13 * 0xb4);
        FUN_18063aed0(uVar28,local_858._0_8_,local_858._8_8_ - local_858._0_8_);
        FUN_180242190(local_858,uVar28,0,uVar19);
        fVar42 = auVar36._0_4_;
      }
    }
    local_1898 = cVar6;
    lVar23 = local_1870;
  }
  fVar39 = 0.0;
  fVar45 = 0.0;
  fVar41 = 0.0;
  local_898 = 0.0;
  iVar11 = 0;
  local_1880 = 0;
  bVar3 = false;
  lVar10 = (longlong)iVar13;
  if (0 < iVar13) {
    puVar16 = local_808;
    pfVar24 = (float *)(lVar23 + 0x1c);
    fVar32 = 6.2831855;
    fVar42 = 15.0;
    bVar3 = false;
    do {
      auVar38 = _local_888;
      if (*(char *)(puVar16 + 3) != '\0') {
        local_1868 = (float *)*puVar16;
        auVar36 = ZEXT864(local_1868);
        local_888 = (undefined1  [8])*(undefined8 *)*(undefined1 (*) [12])((longlong)puVar16 + 0xc);
        _local_888 = *(undefined1 (*) [12])((longlong)puVar16 + 0xc);
        uStack_880._4_4_ = auVar38._12_4_;
        auVar38 = _local_888;
        bVar3 = true;
        pfVar17 = local_1868;
        local_1874 = fVar39 + SUB84(local_1868,0);
        local_1868._4_4_ = (float)((ulonglong)local_1868 >> 0x20);
        auVar43 = ZEXT464((uint)local_1868._4_4_);
        local_1890._0_4_ = fVar45 + local_1868._4_4_;
        fVar27 = *(float *)(puVar16 + 1);
        local_898 = fVar41 + fVar27;
        local_1880 = iVar11 + 1;
        fVar41 = fVar41 + fVar27;
        fVar39 = local_1874;
        fVar45 = fVar45 + local_1868._4_4_;
        local_1868 = pfVar17;
        iVar11 = iVar11 + 1;
        if (local_1898 != '\0') {
          iVar13 = 0;
          pfVar17 = pfVar24;
          fVar41 = (float)uStack_880;
          fVar39 = (float)local_888._4_4_;
          fVar45 = (float)local_888._0_4_;
          _local_888 = auVar38;
          do {
            fVar31 = ((float)iVar13 * fVar32) / fVar42;
            auVar46 = ZEXT464((uint)fVar31);
            auVar40._0_8_ = FUN_180637540(fVar31);
            auVar40._8_56_ = extraout_var;
            auVar40 = ZEXT1664(auVar40._0_16_);
            fVar25 = (float)FUN_180638e00(auVar46._0_8_);
            fVar31 = (local_187c - *pfVar17) * local_1878 + *pfVar17;
            *pfVar17 = fVar31;
            fVar37 = (1.0 - ((fVar39 * fVar25 + fVar45 * auVar40._0_4_) / fVar41) * fVar31) + fVar27
            ;
            fVar25 = fVar31 * fVar25 + auVar43._0_4_;
            fVar31 = fVar31 * auVar40._0_4_ + auVar36._0_4_;
            local_1858 = (float *)CONCAT44(fVar25,fVar31);
            lStack_1850 = CONCAT44(lStack_1850._4_4_,fVar37);
            if ((float *)local_858._8_8_ == local_848) {
              FUN_180241ef0(local_858,local_858._8_8_,&local_1858);
            }
            else {
              *(float *)local_858._8_8_ = fVar31;
              *(float *)(local_858._8_8_ + 4) = fVar25;
              *(float *)(local_858._8_8_ + 8) = fVar37;
              local_858._8_8_ = (float *)(local_858._8_8_ + 0xc);
            }
            iVar13 = iVar13 + 1;
            pfVar17 = pfVar17 + 1;
          } while (iVar13 < 0xf);
          fVar41 = local_898;
          fVar39 = local_1874;
          fVar45 = (float)local_1890._0_4_;
          iVar11 = local_1880;
        }
      }
      puVar16 = (undefined8 *)((longlong)puVar16 + 0x1c);
      pfVar24 = pfVar24 + 0xf;
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
    auVar43 = ZEXT864(0);
    auVar40 = ZEXT464(0x3f800000);
    auVar46 = ZEXT464((uint)(float)local_1888);
    fVar42 = (float)local_1848;
  }
  lVar23 = local_1870;
  if (bVar3) {
    uVar26 = FUN_1806156a0(fVar42 * 3.0 + *(float *)(local_1870 + 0xf38),auVar40._0_8_);
    *(undefined4 *)(lVar23 + 0xf38) = uVar26;
    *(undefined1 *)(lVar23 + 0xf3c) = 1;
    if ((undefined1 *)(lVar23 + 0xf20) != local_858) {
      FUN_1802b5f40((undefined1 *)(lVar23 + 0xf20),local_858._0_8_,
                    (longlong)(local_858._8_8_ - local_858._0_8_) / 0xc);
    }
    if (*(longlong *)(lVar23 + 0xf40) == 0) {
      puVar16 = (undefined8 *)FUN_18017bf40(&local_1888);
      *(undefined8 *)(lVar23 + 0xf40) = *puVar16;
    }
  }
  else {
    if (*(char *)(local_1870 + 0xf3c) == '\0') goto LAB_1802b4459;
    fVar42 = *(float *)(local_1870 + 0xf38) - fVar42 * 3.0;
    *(float *)(local_1870 + 0xf38) = fVar42;
    lVar10 = DAT_180b8f848;
    plVar8 = DAT_180b8f838;
    if (fVar42 <= auVar43._0_4_) {
      uVar19 = (((((((((ulonglong)*local_1838 ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                     (ulonglong)local_1838[1]) * 0x100000001b3 ^ (ulonglong)local_1838[2]) *
                    0x100000001b3 ^ (ulonglong)local_1838[3]) * 0x100000001b3 ^
                  (ulonglong)local_1838[4]) * 0x100000001b3 ^ (ulonglong)local_1838[5]) *
                 0x100000001b3 ^ (ulonglong)local_1838[6]) * 0x100000001b3 ^
               (ulonglong)local_1838[7]) * 0x100000001b3 & DAT_180b8f860;
      plVar1 = *(longlong **)(DAT_180b8f848 + 8 + uVar19 * 0x10);
      plVar22 = (longlong *)0x0;
      if (plVar1 != DAT_180b8f838) {
        lVar23 = plVar1[2];
        plVar2 = plVar1;
        while (*(longlong *)local_1838 != lVar23) {
          if (plVar2 == *(longlong **)(DAT_180b8f848 + uVar19 * 0x10)) goto LAB_1802b3732;
          plVar2 = (longlong *)plVar2[1];
          lVar23 = plVar2[2];
        }
        plVar22 = plVar2;
      }
LAB_1802b3732:
      if (plVar22 != (longlong *)0x0) {
        plVar2 = *(longlong **)(DAT_180b8f848 + uVar19 * 0x10);
        if (plVar1 == plVar22) {
          if (plVar2 == plVar22) {
            *(longlong **)(DAT_180b8f848 + uVar19 * 0x10) = DAT_180b8f838;
            *(longlong **)(lVar10 + 8 + uVar19 * 0x10) = plVar8;
          }
          else {
            *(longlong *)(DAT_180b8f848 + 8 + uVar19 * 0x10) = plVar22[1];
          }
        }
        else if (plVar2 == plVar22) {
          *(longlong *)(DAT_180b8f848 + uVar19 * 0x10) = *plVar22;
        }
        lVar23 = *plVar22;
        DAT_180b8f840 = DAT_180b8f840 + -1;
        *(longlong *)plVar22[1] = lVar23;
        *(longlong *)(lVar23 + 8) = plVar22[1];
        FUN_1801b36e0(plVar22 + 0x1e4);
        FUN_1804547d0(plVar22,0xf58);
      }
      goto LAB_1802b4459;
    }
    if ((longlong *)local_858 != (longlong *)(local_1870 + 0xf20)) {
      lVar10 = *(longlong *)(local_1870 + 0xf20);
      FUN_1802b5f40(local_858,lVar10,(*(longlong *)(local_1870 + 0xf28) - lVar10) / 0xc);
    }
  }
  local_828 = (undefined1  [16])0x0;
  local_818 = (float *)0x0;
  FUN_1802aa1b0(local_828,(longlong)(local_858._8_8_ - local_858._0_8_) / 0xc);
  uVar28 = local_858._8_8_;
  if (local_858._0_8_ != local_858._8_8_) {
    auVar36 = ZEXT464(0x475ead00);
    lVar10 = local_858._0_8_;
    do {
      if (DAT_180b8e2b0 == '\0') {
        local_1888 = CONCAT44(auVar36._0_4_,auVar36._0_4_);
        uVar29 = local_1888;
      }
      else {
        iVar13 = FUN_1805f68d0(&DAT_180b8e260);
        if (iVar13 != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_1805f6d44(5);
        }
        if (DAT_180b8e2ac == 0x7fffffff) {
          DAT_180b8e2ac = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
          FUN_1805f6d44(6);
        }
        local_1828 = _DAT_180b8e220;
        uStack_1820 = uRam0000000180b8e228;
        uStack_1818 = uRam0000000180b8e230;
        uStack_1810 = uRam0000000180b8e238;
        local_1808 = _DAT_180b8e240;
        auVar36 = ZEXT1664(auVar36._0_16_);
        auVar43 = ZEXT1664(auVar43._0_16_);
        auVar40 = ZEXT1664(auVar40._0_16_);
        auVar46 = ZEXT1664(auVar46._0_16_);
        uVar29 = FUN_1805f68fc(&DAT_180b8e260);
        FUN_180419d90(uVar29,&local_1888,lVar10,&local_1828);
        uVar29 = local_1888;
        if (((float)local_1888 != auVar36._0_4_) && (local_1888._4_4_ != auVar36._0_4_)) {
          if ((float *)local_828._8_8_ == local_818) {
            FUN_1802ad990(local_828,local_828._8_8_,&local_1888);
            uVar29 = local_1888;
          }
          else {
            auVar38 = vunpcklps_avx(ZEXT416((uint)(float)local_1888),ZEXT416((uint)local_1888._4_4_)
                                   );
            local_1848 = auVar38._0_8_;
            *(float *)local_828._8_8_ = (float)local_1888;
            auVar38 = vshufps_avx(auVar38,auVar38,0x55);
            *(float *)(local_828._8_8_ + 4) = auVar38._0_4_;
            local_828._8_8_ = (float *)(local_828._8_8_ + 8);
            uVar29 = local_1848;
          }
        }
      }
      local_1888 = uVar29;
      lVar10 = lVar10 + 0xc;
    } while (lVar10 != uVar28);
  }
  uVar19 = (longlong)(local_828._8_8_ - local_828._0_8_) >> 3;
  if ((2 < uVar19) && (local_1898 != '\0')) {
    local_18d8 = (float)((uint)local_18d8 & 0xffffff00);
    FUN_1802b52f0(local_828._0_8_,local_828._8_8_,uVar19,local_1898);
    local_870 = (float *)0x0;
    pfStack_868 = (float *)0x0;
    local_860 = (float *)0x0;
    local_840 = (undefined1  [8])0x0;
    uStack_838 = (float *)0x0;
    local_830 = (float *)0x0;
    uVar28 = local_828._8_8_;
    pfVar24 = (float *)local_828._0_8_;
    if (local_828._0_8_ != local_828._8_8_) {
      do {
        lVar10 = (longlong)pfStack_868 - (longlong)local_870;
        while ((1 < (ulonglong)(lVar10 >> 3) &&
               (lVar10 = (longlong)pfStack_868 - (longlong)local_870 >> 3,
               (pfVar24[1] - local_870[lVar10 * 2 + -3]) *
               (local_870[lVar10 * 2 + -2] - local_870[lVar10 * 2 + -4]) -
               (local_870[lVar10 * 2 + -1] - local_870[lVar10 * 2 + -3]) *
               (*pfVar24 - local_870[lVar10 * 2 + -4]) <= auVar43._0_4_))) {
          pfStack_868 = pfStack_868 + -2;
          lVar10 = (longlong)pfStack_868 - (longlong)local_870;
        }
        if (pfStack_868 == local_860) {
          FUN_1802ad990(&local_870,pfStack_868,pfVar24);
        }
        else {
          fVar42 = pfVar24[1];
          *pfStack_868 = *pfVar24;
          pfStack_868[1] = fVar42;
          pfStack_868 = pfStack_868 + 2;
        }
        pfVar24 = pfVar24 + 2;
      } while (pfVar24 != (float *)uVar28);
    }
    pfVar24 = (float *)local_828._8_8_;
    if (local_828._8_8_ != local_828._0_8_) {
      do {
        pfVar17 = pfVar24 + -2;
        lVar10 = (longlong)uStack_838 - (longlong)local_840;
        while ((1 < (ulonglong)(lVar10 >> 3) &&
               (lVar10 = (longlong)uStack_838 - (longlong)local_840 >> 3,
               (pfVar24[-1] - *(float *)((longlong)local_840 + -0xc + lVar10 * 8)) *
               (*(float *)((longlong)local_840 + -8 + lVar10 * 8) -
               *(float *)((longlong)local_840 + -0x10 + lVar10 * 8)) -
               (*(float *)((longlong)local_840 + -4 + lVar10 * 8) -
               *(float *)((longlong)local_840 + -0xc + lVar10 * 8)) *
               (*pfVar17 - *(float *)((longlong)local_840 + -0x10 + lVar10 * 8)) <= auVar43._0_4_)))
        {
          uStack_838 = uStack_838 + -2;
          lVar10 = (longlong)uStack_838 - (longlong)local_840;
        }
        if (uStack_838 == local_830) {
          FUN_1802ad990(local_840,uStack_838,pfVar17);
        }
        else {
          fVar42 = pfVar24[-1];
          *uStack_838 = *pfVar17;
          uStack_838[1] = fVar42;
          uStack_838 = uStack_838 + 2;
        }
        pfVar24 = pfVar17;
      } while (pfVar17 != (float *)local_828._0_8_);
    }
    pfStack_868 = pfStack_868 + -2;
    uStack_838 = uStack_838 + -2;
    FUN_1802b5670(&local_870,pfStack_868,local_840,(longlong)uStack_838 - (longlong)local_840 >> 3);
    uVar4 = local_894;
    uVar19 = (longlong)pfStack_868 - (longlong)local_870 >> 3;
    if (2 < uVar19) {
      auVar38 = auVar43._0_16_;
      auVar36 = ZEXT1664(auVar38);
      auVar34 = ZEXT1664(auVar38);
      auVar30 = auVar38;
      for (pfVar24 = local_870; pfVar24 != pfStack_868; pfVar24 = pfVar24 + 2) {
        fVar42 = auVar36._0_4_ + *pfVar24;
        auVar36 = ZEXT464((uint)fVar42);
        auVar38 = ZEXT416((uint)fVar42);
        fVar42 = auVar34._0_4_ + pfVar24[1];
        auVar34 = ZEXT464((uint)fVar42);
        auVar30 = ZEXT416((uint)fVar42);
      }
      auVar36 = ZEXT1664(CONCAT124(auVar38._4_12_,auVar38._0_4_ / (float)uVar19));
      auVar34 = ZEXT1664(CONCAT124(auVar30._4_12_,auVar30._0_4_ / (float)uVar19));
      fVar42 = *(float *)(lVar23 + 0xf38);
      fVar41 = (float)(local_894 >> 0x18);
      local_1858 = local_870;
      lStack_1860 = uVar19 * 2;
      local_1868 = local_870;
      local_18d8 = (float)param_5[2];
      lStack_1850 = lStack_1860;
      FUN_180433590(local_1830,&local_1868,
                    ((((int)(fVar41 * fVar42) & 0xffU) << 8 | local_894 >> 0x10 & 0xff) << 8 |
                    local_894 >> 8 & 0xff) << 8 | local_894 & 0xff,1);
      uVar5 = local_890[0];
      if (*(char *)(param_5 + 4) != '\0') {
        local_894 = CONCAT13((char)(int)(fVar41 * (float)param_5[0x1e] * fVar42),(int3)uVar4);
        iVar13 = 0;
        fVar42 = (float)((int)((float)(local_890[0] >> 0x18) * (float)param_5[0x1e] * fVar42) & 0xff
                        );
        uVar4 = local_890[0] >> 0x10;
        fVar41 = 0.125;
        do {
          fVar32 = (float)iVar13 * fVar41;
          uVar20 = (uint)((auVar40._0_4_ - fVar32) * fVar42);
          if ((char)uVar20 != '\0') {
            uVar19 = (longlong)pfStack_868 - (longlong)local_870 >> 3;
            _local_888 = (undefined1  [16])0x0;
            local_878 = (undefined8 *)0x0;
            if (uVar19 != 0) {
              if (0x1fffffffffffffff < uVar19) {
                    /* WARNING: Subroutine does not return */
                FUN_1801136f0();
              }
              local_888 = (undefined1  [8])FUN_18015bca0(uVar19 * 8);
              local_878 = (undefined8 *)((longlong)local_888 + uVar19 * 8);
              uStack_880 = (undefined8 *)local_888;
              do {
                *uStack_880 = 0;
                uStack_880 = uStack_880 + 1;
                uVar19 = uVar19 - 1;
              } while (uVar19 != 0);
            }
            uVar18 = 0;
            if ((longlong)pfStack_868 - (longlong)local_870 >> 3 != 0) {
              uVar19 = 0;
              pfVar24 = local_870;
              do {
                *(float *)((longlong)local_888 + uVar19 * 2 * 4) =
                     (auVar36._0_4_ - pfVar24[uVar19 * 2]) * fVar32 + pfVar24[uVar19 * 2];
                *(float *)((longlong)local_888 + (uVar19 * 2 + 1) * 4) =
                     (auVar34._0_4_ - local_870[uVar19 * 2 + 1]) * fVar32 +
                     local_870[uVar19 * 2 + 1];
                uVar18 = uVar18 + 1;
                uVar19 = (ulonglong)uVar18;
                pfVar24 = local_870;
              } while (uVar19 < (ulonglong)((longlong)pfStack_868 - (longlong)local_870 >> 3));
            }
            local_1868 = (float *)local_888;
            lStack_1860 = ((longlong)uStack_880 - (longlong)local_888 >> 3) * 2;
            FUN_180432700(&DAT_180bbb038,&local_1868,
                          (((uVar20 & 0xff) << 8 | uVar4 & 0xff) << 8 | local_890[0] >> 8 & 0xff) <<
                          8 | uVar5 & 0xff);
            FUN_1800f0160(local_888);
          }
          iVar13 = iVar13 + 1;
        } while (iVar13 < 8);
        local_1868 = local_1858;
        lStack_1860 = lStack_1850;
        local_18d8 = (float)param_5[2] + 2.0;
        FUN_180433590(&DAT_180bbb038,&local_1868,local_894,1);
      }
    }
    FUN_1800f0160(local_840);
    FUN_1800f0160(&local_870);
  }
  lVar23 = local_1870;
  if (DAT_180cc7a80 != '\0') {
    if (0 < local_1880) {
      fVar42 = auVar40._0_4_ / (float)local_1880;
      *(float *)(local_1870 + 0xf48) = fVar39 * fVar42;
      *(float *)(local_1870 + 0xf4c) = fVar45 * fVar42;
      *(float *)(local_1870 + 0xf50) = fVar42 * local_898;
    }
    if (auVar43._0_4_ <
        *(float *)(local_1870 + 0xf4c) * *(float *)(local_1870 + 0xf4c) +
        *(float *)(local_1870 + 0xf48) * *(float *)(local_1870 + 0xf48) +
        *(float *)(local_1870 + 0xf50) * *(float *)(local_1870 + 0xf50)) {
      fVar42 = *(float *)(local_1870 + 0xf50);
      _local_888 = *(undefined1 (*) [12])(local_1870 + 0xf48);
      sVar7 = thunk_FUN_180624430(auVar46._0_8_);
      if ((sVar7 < 1) && (auVar43._0_4_ < auVar46._0_4_)) {
        plVar8 = (longlong *)FUN_18017bf40(&local_1830);
        local_1890._0_4_ = auVar40._0_4_;
        local_1888 = CONCAT44(local_1888._4_4_,auVar43._0_4_);
        auVar38 = vmaxss_avx(ZEXT416((uint)(auVar46._0_4_ -
                                           (float)(*plVar8 - *(longlong *)(lVar23 + 0xf40)) / 1e+09)
                                    ),auVar43._0_16_);
        fVar41 = auVar38._0_4_ / auVar46._0_4_;
        local_1848 = CONCAT44(local_1848._4_4_,fVar41);
        puVar16 = &local_1888;
        if (auVar43._0_4_ <= fVar41) {
          puVar16 = &local_1848;
        }
        puVar15 = (undefined8 *)local_1890;
        if (fVar41 <= auVar40._0_4_) {
          puVar15 = puVar16;
        }
        uVar26 = *(undefined4 *)puVar15;
        FUN_180419f80(&local_1848,&local_1868,local_888);
        local_1858 = (float *)CONCAT44(auVar43._0_4_ + (float)local_888._4_4_,
                                       auVar43._0_4_ + (float)local_888._0_4_);
        fVar42 = fVar42 + 80.0;
        lStack_1850 = CONCAT44(lStack_1850._4_4_,fVar42);
        FUN_180419f80(fVar42,local_888,&local_1858);
        _local_840 = (undefined1  [16])0x0;
        local_830 = (float *)0x0;
        local_898 = 1.4013e-45;
        if (((DAT_180bbab78 != 0) &&
            ((**(code **)(*(longlong *)DAT_180bbab78 + 0x2f8))(DAT_180bbab78,&local_898,local_840),
            local_898 == 0.0)) || ((float)uStack_838 <= auVar43._0_4_)) {
          iVar13 = 0;
        }
        else {
          iVar21 = (int)(float)uStack_838;
          iVar13 = (int)uStack_838._4_4_;
        }
        fVar32 = auVar40._0_4_;
        fVar39 = (float)iVar21;
        fVar42 = fVar39 * 0.5;
        fVar45 = (float)iVar13;
        fVar41 = fVar45 * 0.5;
        if ((uStack_880._4_1_ == '\0') || ((float)lStack_1860 <= auVar43._0_4_)) {
          auVar36 = ZEXT464((uint)((float)local_1868 - fVar42));
          auVar46 = ZEXT464((uint)(local_1868._4_4_ - fVar41));
          if ((float)lStack_1860 <= auVar43._0_4_) {
            auVar36 = ZEXT1664(CONCAT412(0x80000000,
                                         CONCAT48(0x80000000,
                                                  CONCAT44(0x80000000,-((float)local_1868 - fVar42))
                                                 )));
            auVar46 = ZEXT1664(CONCAT412(0x80000000,
                                         CONCAT48(0x80000000,
                                                  CONCAT44(0x80000000,-(local_1868._4_4_ - fVar41)))
                                        ));
          }
          auVar38 = auVar36._0_16_;
          auVar30 = auVar46._0_16_;
          fVar27 = auVar46._0_4_ * auVar46._0_4_ + auVar36._0_4_ * auVar36._0_4_;
          if (fVar27 < 0.0) {
            fVar27 = (float)FUN_18061e150();
            fVar32 = auVar40._0_4_;
            auVar38 = auVar36._0_16_;
            auVar30 = auVar46._0_16_;
          }
          else {
            fVar27 = SQRT(fVar27);
          }
          if (fVar27 < fVar32) goto LAB_1802b444c;
          fVar31 = auVar38._0_4_ / fVar27;
          auVar40 = ZEXT1664(CONCAT124(auVar38._4_12_,fVar31));
          auVar36 = ZEXT1664(CONCAT124(auVar30._4_12_,auVar30._0_4_ / fVar27));
          uVar28 = SUB648(ZEXT464(0x7f7fffff),0);
          fVar27 = 52.0;
          fVar32 = 0.001;
          if (0.001 < ABS(fVar31)) {
            fVar32 = ((fVar39 - 52.0) - fVar42) / fVar31;
            auVar46 = ZEXT464((uint)fVar32);
            uVar19 = (ulonglong)(uint)fVar32;
            fVar32 = 0.001;
            if (auVar43._0_4_ < (52.0 - fVar42) / fVar31) {
              uVar28 = FUN_1806156a0(uVar28);
              uVar19 = auVar46._0_8_;
            }
            if (auVar43._0_4_ < (float)uVar19) {
              uVar28 = FUN_1806156a0(uVar28,uVar19);
            }
          }
          uVar29 = auVar36._0_8_;
          uVar44 = auVar40._0_8_;
          fVar37 = auVar43._0_4_;
          fVar31 = auVar36._0_4_;
          if (fVar32 < ABS(fVar31)) {
            fVar32 = ((fVar45 - fVar27) - fVar41) / fVar31;
            uVar19 = (ulonglong)(uint)fVar32;
            auVar46 = ZEXT464((uint)fVar32);
            if (fVar37 < (fVar27 - fVar41) / fVar31) {
              uVar28 = FUN_1806156a0(uVar28);
              fVar37 = auVar43._0_4_;
              uVar19 = auVar46._0_8_;
            }
            uVar29 = auVar36._0_8_;
            uVar44 = auVar40._0_8_;
            if (fVar37 < (float)uVar19) {
              uVar28 = FUN_1806156a0(uVar28,uVar19);
              uVar29 = auVar36._0_8_;
              uVar44 = auVar40._0_8_;
            }
          }
          fVar39 = fVar39 - fVar27;
          fVar42 = (float)uVar28 * (float)uVar44 + fVar42;
          fVar45 = fVar45 - fVar27;
          fVar41 = (float)uVar28 * (float)uVar29 + fVar41;
          local_187c = fVar42;
          local_1878 = fVar45;
          local_1874 = fVar41;
          local_898 = fVar39;
          uVar28 = FUN_180636c80(uVar29,uVar44);
          pfVar24 = &local_1874;
          if (fVar41 < fVar27) {
            pfVar24 = (float *)&DAT_180701c84;
          }
          pfVar17 = &local_1878;
          if (fVar41 <= fVar45) {
            pfVar17 = pfVar24;
          }
          fVar41 = (float)FUN_180638e00();
          auVar36 = ZEXT464((uint)(*pfVar17 - fVar41 * 36.5));
          pfVar24 = &local_187c;
          if (fVar42 < fVar27) {
            pfVar24 = (float *)&DAT_180701c84;
          }
          pfVar17 = &local_898;
          if (fVar42 <= fVar39) {
            pfVar17 = pfVar24;
          }
          fVar42 = (float)FUN_180637540(uVar28,fVar41 * 36.5);
          uVar19 = (ulonglong)(uint)(*pfVar17 - fVar42 * 36.5);
          local_18a8 = *(undefined8 *)local_1838;
          local_18c0 = *(undefined4 *)(lVar23 + 0xf38);
          local_18c8 = *(undefined4 *)puVar15;
          local_18d8 = (float)uVar28;
          uVar28 = auVar36._0_8_;
        }
        else {
          auVar40 = ZEXT464((uint)local_888._0_4_);
          fVar42 = (float)local_1868 - (float)local_888._0_4_;
          auVar36 = ZEXT464((uint)fVar42);
          uVar33 = (ulonglong)(uint)fVar42;
          auVar46 = ZEXT464((uint)local_888._4_4_);
          fVar41 = local_1868._4_4_ - (float)local_888._4_4_;
          auVar43 = ZEXT464((uint)fVar41);
          uVar35 = (ulonglong)(uint)fVar41;
          fVar42 = fVar41 * fVar41 + fVar42 * fVar42;
          if (fVar42 < 0.0) {
            fVar42 = (float)FUN_18061e150();
            uVar35 = auVar43._0_8_;
            uVar33 = auVar36._0_8_;
          }
          else {
            fVar42 = SQRT(fVar42);
          }
          uVar19 = auVar40._0_8_;
          uVar28 = auVar46._0_8_;
          if (fVar42 <= 0.1) {
            local_18d8 = 1.5707964;
          }
          else {
            local_18d8 = (float)FUN_180636c80(uVar35,uVar33);
            uVar19 = auVar40._0_8_;
            uVar28 = auVar46._0_8_;
          }
          local_18a8 = *(undefined8 *)local_1838;
          local_18c0 = *(undefined4 *)(lVar23 + 0xf38);
          local_18c8 = uVar26;
        }
        local_18b0 = &DAT_180cc7a80;
        local_18b8 = 1;
        local_18d0 = 1;
        FUN_1802b25d0(local_18c0,local_1840,uVar19,uVar28);
      }
    }
  }
LAB_1802b444c:
  FUN_1800f0160(local_828);
LAB_1802b4459:
  FUN_1801b36e0(local_858);
}



