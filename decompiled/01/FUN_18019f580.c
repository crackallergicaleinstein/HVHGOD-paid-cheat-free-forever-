// FUN_18019f580 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18019f580 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18019f580(void)

{
  int *piVar1;
  byte bVar2;
  short sVar3;
  ushort uVar4;
  ushort uVar5;
  char cVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  ULONGLONG UVar12;
  undefined1 (*pauVar13) [16];
  longlong *plVar14;
  ulonglong uVar15;
  longlong lVar16;
  undefined8 uVar17;
  undefined8 *puVar18;
  ulonglong *puVar19;
  undefined8 *puVar20;
  byte bVar21;
  char cVar22;
  undefined *puVar23;
  longlong lVar24;
  ulonglong uVar25;
  undefined8 *******pppppppuVar26;
  ulonglong uVar27;
  undefined *puVar28;
  longlong *plVar29;
  undefined1 auVar30 [8];
  longlong lVar31;
  char cVar32;
  ulonglong uVar33;
  longlong *plVar34;
  char *pcVar35;
  longlong *plVar36;
  char *pcVar37;
  undefined1 *puVar38;
  uint uVar39;
  uint uVar40;
  int iVar41;
  longlong lVar42;
  bool bVar43;
  undefined8 extraout_XMM0_Qa;
  double dVar44;
  undefined1 auVar45 [16];
  undefined1 auVar46 [64];
  undefined1 auVar47 [16];
  undefined1 auVar48 [64];
  undefined1 auStackY_9b8 [32];
  byte local_948;
  byte local_947;
  uint local_944;
  undefined *local_940;
  ushort local_938;
  int local_934;
  uint local_930;
  uint local_92c;
  uint local_928;
  uint local_924;
  longlong local_920;
  longlong local_918;
  undefined *local_910;
  longlong local_908;
  undefined *local_900;
  undefined *local_8f8;
  undefined8 *local_8f0;
  undefined *local_8e8;
  ULONGLONG local_8e0;
  undefined1 (*local_8d8) [16];
  ulonglong local_8d0;
  undefined8 *local_8c8;
  ulonglong **local_8c0;
  undefined1 *local_8b8;
  uint local_8a8 [2];
  longlong local_8a0;
  undefined1 local_898 [16];
  undefined1 local_888 [16];
  undefined1 local_878 [16];
  undefined1 local_868 [16];
  longlong local_858;
  undefined1 local_850 [16];
  undefined1 local_840 [32];
  undefined1 local_820 [16];
  undefined1 local_810 [16];
  undefined1 local_800 [16];
  undefined1 local_7f0 [16];
  ulonglong *local_7e0;
  ULONGLONG local_7d8;
  undefined2 local_7d0;
  char local_7ce;
  undefined1 local_7c8 [8];
  undefined1 *puStack_7c0;
  undefined1 *local_7b8;
  undefined1 local_7a8 [16];
  ulonglong uStack_798;
  ulonglong uStack_790;
  undefined8 *local_788;
  undefined1 local_780 [16];
  ulonglong local_770;
  ulonglong local_768;
  undefined1 local_758 [16];
  undefined8 *******local_748 [2];
  ulonglong local_738;
  ulonglong local_730;
  undefined4 local_728;
  undefined4 uStack_724;
  longlong lStack_720;
  undefined8 uStack_718;
  longlong lStack_710;
  undefined1 local_708 [16];
  ulonglong uStack_6f8;
  undefined8 uStack_6f0;
  undefined1 local_6e8 [16];
  undefined1 local_6d8 [16];
  longlong local_6c8;
  undefined8 local_6b8;
  longlong lStack_6b0;
  undefined8 uStack_6a8;
  longlong lStack_6a0;
  undefined8 local_698;
  undefined8 uStack_690;
  ulonglong uStack_688;
  undefined8 uStack_680;
  char local_678 [64];
  undefined8 *******local_638 [2];
  undefined8 local_628;
  ulonglong local_620;
  char local_5a0;
  ulonglong local_78;
  
  local_78 = DAT_1808d5f00 ^ (ulonglong)auStackY_9b8;
  local_924 = 0;
  UVar12 = GetTickCount64();
  local_6e8 = (undefined1  [16])0x0;
  local_8e0 = UVar12;
  FUN_18019a380(local_6e8);
  lVar16 = local_6e8._0_8_;
  local_918 = local_6e8._0_8_;
  if ((UVar12 < DAT_180bbe9e0) && (local_6e8._0_8_ != 0)) goto LAB_1801a1bc0;
  local_7e0 = &DAT_180bbea08;
  local_7d0 = 0;
  if (DAT_180bb93a9 == '\0') {
LAB_18019f674:
    local_7ce = '\x01';
  }
  else {
    DAT_180bbea00 = DAT_180bbea00 + 1;
    local_7ce = '\0';
    if (DAT_180bbea00 != (DAT_180bbea00 / 3) * 3) goto LAB_18019f674;
  }
  DAT_180bbe9e0 = UVar12 + 100;
  local_758 = (undefined1  [16])0x0;
  local_7d8 = UVar12;
  if (DAT_180c7df28 == (undefined8 *)0x0) {
    local_7a8._8_8_ = 0x15;
    local_7a8._0_8_ = "tier0.dll:g_pMemAlloc";
    DAT_180c7df28 = (undefined8 *)FUN_180451750(local_7a8);
  }
  pauVar13 = (undefined1 (*) [16])
             (**(code **)(*(longlong *)*DAT_180c7df28 + 8))((longlong *)*DAT_180c7df28,0x50);
  local_8d8 = pauVar13;
  if (pauVar13 == (undefined1 (*) [16])0x0) {
    local_758._8_8_ = (undefined1 (*) [16])0x0;
  }
  else {
    *pauVar13 = (undefined1  [16])0x0;
    *(undefined4 *)(*pauVar13 + 8) = 1;
    *(undefined4 *)(*pauVar13 + 0xc) = 1;
    *(undefined ***)*pauVar13 =
         std::
         _Ref_count_obj2<std::unordered_map<unsigned_int,hvhgod::sync::_anon_3E63CB27::peer_ink,std::hash<unsigned_int>,std::equal_to<unsigned_int>,std::allocator<std::pair<unsigned_int_const_,hvhgod::sync::_anon_3E63CB27::peer_ink>_>_>_>
         ::vftable;
    FUN_1801baec0(pauVar13 + 1);
    local_758._8_8_ = pauVar13;
  }
  local_758._0_8_ = (undefined1 (*) [16])(local_758._8_8_ + 0x10);
  local_6b8 = 0;
  lStack_6b0 = 0;
  uStack_6a8 = 0;
  lStack_6a0 = 0;
  local_698 = 0;
  uStack_690 = 0;
  uStack_688 = 0;
  uStack_680 = 0;
  FUN_1801abd10(&local_6b8);
  uStack_724 = 0;
  lStack_710 = 0;
  local_708 = ZEXT816(0);
  uStack_6f8 = 0;
  uStack_6f0 = 0;
  local_728 = 0;
  lStack_720 = 0;
  uStack_718 = 0;
  if (DAT_180c7df28 == (undefined8 *)0x0) {
    local_7a8._8_8_ = 0x15;
    local_7a8._0_8_ = "tier0.dll:g_pMemAlloc";
    DAT_180c7df28 = (undefined8 *)FUN_180451750(local_7a8);
  }
  lStack_720 = (**(code **)(*(longlong *)*DAT_180c7df28 + 8))((longlong *)*DAT_180c7df28,0x18);
  *(longlong *)lStack_720 = lStack_720;
  *(longlong *)(lStack_720 + 8) = lStack_720;
  lStack_710 = 0;
  local_708 = (undefined1  [16])0x0;
  uStack_6f8 = 7;
  uStack_6f0 = 8;
  local_728 = 0x3f800000;
  FUN_1801406e0(&lStack_710,0x10,lStack_720);
  local_8c8 = &local_6b8;
  local_8c0 = &local_7e0;
  local_8b8 = local_758;
  local_6d8 = (undefined1  [16])0x0;
  local_6c8 = 0;
  if (lVar16 == 0) {
    local_850 = (undefined1  [16])0x0;
    plVar14 = &local_858;
    local_928 = 0x12;
    local_908 = 0;
  }
  else {
    plVar14 = (longlong *)FUN_1803d44c0(0,local_840,1);
    local_928 = 0x11;
    local_908 = *plVar14;
  }
  lVar42 = local_908;
  lVar24 = plVar14[2];
  plVar14[2] = 0;
  lVar31 = plVar14[1];
  plVar14[1] = 0;
  *plVar14 = 0;
  local_6d8._8_8_ = lVar31;
  local_6d8._0_8_ = local_908;
  local_8d8 = (undefined1 (*) [16])lVar31;
  local_6c8 = lVar24;
  uVar39 = local_928;
  if ((local_928 & 2) != 0) {
    uVar39 = local_928 & 0xfffffffd;
    local_928 = uVar39;
    FUN_1801abba0(&local_858);
  }
  if ((uVar39 & 1) != 0) {
    uVar39 = uVar39 & 0xfffffffe;
    local_928 = uVar39;
    FUN_1801abba0(local_840);
  }
  local_788 = (undefined8 *)0x0;
  lVar24 = (lVar31 - lVar42) / 6 + (lVar31 - lVar42 >> 0x3f);
  local_8f0 = (undefined8 *)((lVar24 >> 2) - (lVar24 >> 0x3f));
  if (local_8f0 != (undefined8 *)0x0) {
    auVar48 = ZEXT1664(_DAT_18086d450);
    auVar46 = ZEXT864(0x408f400000000000);
    local_938 = (ushort)local_940;
    do {
      uVar25 = (DAT_180bbe9e8 + (longlong)local_788) % (ulonglong)local_8f0;
      auVar46 = ZEXT1664(auVar46._0_16_);
      auVar48 = ZEXT1664(auVar48._0_16_);
      uVar15 = FUN_1801973d0(*(undefined8 *)(lVar42 + uVar25 * 0x18));
      uVar33 = (((((((uVar15 >> 8 & 0xff ^ (uVar15 & 0xff ^ 0xcbf29ce484222325) * 0x100000001b3) *
                     0x100000001b3 ^ uVar15 >> 0x10 & 0xff) * 0x100000001b3 ^ uVar15 >> 0x18 & 0xff)
                   * 0x100000001b3 ^ uVar15 >> 0x20 & 0xff) * 0x100000001b3 ^ uVar15 >> 0x28 & 0xff)
                 * 0x100000001b3 ^ uVar15 >> 0x30 & 0xff) * 0x100000001b3 ^ uVar15 >> 0x38) *
               0x100000001b3 & *(ulonglong *)(lVar16 + 0x78);
      lVar24 = *(longlong *)(*(longlong *)(lVar16 + 0x60) + 8 + uVar33 * 0x10);
      if (lVar24 == *(longlong *)(lVar16 + 0x50)) {
LAB_18019fa42:
        lVar24 = 0;
      }
      else {
        uVar27 = *(ulonglong *)(lVar24 + 0x10);
        while (uVar15 != uVar27) {
          if (lVar24 == *(longlong *)(*(longlong *)(lVar16 + 0x60) + uVar33 * 0x10))
          goto LAB_18019fa42;
          lVar24 = *(longlong *)(lVar24 + 8);
          uVar27 = *(ulonglong *)(lVar24 + 0x10);
        }
      }
      if (((lVar24 != 0) && (lVar24 != *(longlong *)(lVar16 + 0x50))) &&
         (uVar15 != *(ulonglong *)(lVar16 + 0x88))) {
        iVar41 = DAT_180bb84a8;
        if (DAT_180bb84a8 == 0) {
          UVar12 = GetTickCount64();
          if (UVar12 < DAT_180bb84a0) {
            iVar41 = 0;
          }
          else {
            local_8f8 = &DAT_1808d83c0;
            iVar41 = FUN_1805f68d0(&DAT_1808d83c0);
            if (iVar41 != 0) goto LAB_1801a1ce4;
            if (DAT_1808d840c == 0x7fffffff) {
              DAT_1808d840c = 0x7ffffffe;
              goto LAB_1801a1cd9;
            }
            if ((DAT_180bb84a8 == 0) && (DAT_180bb84a0 <= UVar12)) {
              DAT_180bb84a8 = FUN_1804174b0("CBasePlayerController",0x7c628c1d);
              if (DAT_180bb84a8 == 0) {
                DAT_180bb84a0 = UVar12 + 1000;
              }
              else {
                DAT_180bb84a0 = 0xffffffffffffffff;
              }
            }
            iVar41 = DAT_180bb84a8;
            FUN_1805f68fc(&DAT_1808d83c0);
          }
        }
        lVar31 = (longlong)iVar41 + *(longlong *)(lVar42 + uVar25 * 0x18);
        lVar16 = FUN_18017ea70();
        *(int *)(lVar16 + 4) = *(int *)(lVar16 + 4) + 1;
        if (lVar31 == 0) {
          bVar43 = false;
        }
        else {
          local_944 = 0;
          cVar6 = FUN_1804514f0(&local_944,lVar31,4);
          if (cVar6 == '\0') {
            bVar43 = false;
          }
          else {
            local_924 = local_944;
            bVar43 = true;
          }
        }
        uVar39 = local_924;
        lVar16 = FUN_18017ea70();
        if (*(int *)(lVar16 + 4) != 0) {
          *(int *)(lVar16 + 4) = *(int *)(lVar16 + 4) + -1;
        }
        uVar40 = 0;
        if (bVar43) {
          uVar40 = uVar39;
        }
        local_940 = (undefined *)CONCAT44(local_940._4_4_,uVar40);
        local_944 = uVar40;
        lVar16 = FUN_1803d4150();
        local_920 = lVar16;
        if (lVar16 != 0) {
          uVar39 = FUN_18019abd0(lVar16);
          if (uVar39 == uVar40) {
            AcquireSRWLockShared((PSRWLOCK)&DAT_180bb88c0);
            local_7a8._8_8_ = uRam0000000180bb8898;
            local_7a8._0_8_ = _DAT_180bb8890;
            uStack_798 = uRam0000000180bb88a0;
            uStack_790 = uRam0000000180bb88a8;
            local_888._8_8_ = uRam0000000180bb88b8;
            local_888._0_8_ = _DAT_180bb88b0;
            auVar46 = ZEXT1664(auVar46._0_16_);
            auVar48 = ZEXT1664(auVar48._0_16_);
            ReleaseSRWLockShared((PSRWLOCK)&DAT_180bb88c0);
            auVar47 = auVar48._0_16_;
            auVar45 = auVar46._0_16_;
            if (lVar16 != local_7a8._8_8_) {
              iVar41 = DAT_180bb8498;
              if (DAT_180bb8498 == 0) {
                auVar46 = ZEXT1664(auVar45);
                auVar48 = ZEXT1664(auVar47);
                UVar12 = GetTickCount64();
                auVar47 = auVar48._0_16_;
                auVar45 = auVar46._0_16_;
                if (UVar12 < DAT_180bb8490) {
                  iVar41 = 0;
                }
                else {
                  local_8f8 = &DAT_1808d8370;
                  iVar41 = FUN_1805f68d0(&DAT_1808d8370);
                  if (iVar41 != 0) {
LAB_1801a1ce4:
                    /* WARNING: Subroutine does not return */
                    FUN_1805f6d44(5);
                  }
                  if (DAT_1808d83bc == 0x7fffffff) {
                    DAT_1808d83bc = 0x7ffffffe;
LAB_1801a1cd9:
                    /* WARNING: Subroutine does not return */
                    FUN_1805f6d44(6);
                  }
                  if ((DAT_180bb8498 == 0) && (DAT_180bb8490 <= UVar12)) {
                    DAT_180bb8498 = FUN_1804174b0("C_BaseEntity");
                    if (DAT_180bb8498 == 0) {
                      DAT_180bb8490 = UVar12 + 1000;
                    }
                    else {
                      DAT_180bb8490 = 0xffffffffffffffff;
                    }
                  }
                  iVar41 = DAT_180bb8498;
                  FUN_1805f68fc(&DAT_1808d8370);
                  auVar47 = auVar48._0_16_;
                  auVar45 = auVar46._0_16_;
                }
                uVar40 = local_944;
              }
              auVar46 = ZEXT1664(auVar45);
              auVar48 = ZEXT1664(auVar47);
              lVar31 = FUN_18017ea70();
              *(int *)(lVar31 + 4) = *(int *)(lVar31 + 4) + 1;
              if (iVar41 + lVar16 == 0) {
                bVar43 = false;
              }
              else {
                local_948 = 0;
                cVar6 = FUN_1804514f0(&local_948,iVar41 + lVar16,1);
                if (cVar6 == '\0') {
                  bVar43 = false;
                }
                else {
                  local_947 = local_948;
                  bVar43 = true;
                }
              }
              bVar2 = local_947;
              lVar16 = FUN_18017ea70();
              if (*(int *)(lVar16 + 4) != 0) {
                *(int *)(lVar16 + 4) = *(int *)(lVar16 + 4) + -1;
              }
              if (bVar43) {
                uVar15 = (ulonglong)bVar2;
                local_948 = bVar2;
                if ((bVar2 == 2) || (bVar2 == 3)) {
                  puVar28 = *(undefined **)(lVar24 + 0x18);
                  local_900 = puVar28 + (uVar15 - 2) * 0x40;
                  lVar16 = uVar15 - 2;
                  local_8f8 = puVar28;
                  if ((*(longlong *)(puVar28 + uVar15 * 0x20 + 0x58) != 0) ||
                     (*(short *)(puVar28 + lVar16 * 2 + 0x80) != 0)) {
                    FUN_1801af9d0(&local_728,local_820,&local_940);
                    local_944 = (uint)local_940;
                    uVar40 = (uint)local_940;
                  }
                  local_770 = 0;
                  local_768 = 0xf;
                  local_780._1_15_ = SUB1615((undefined1  [16])0x0,1);
                  auVar45[0xf] = 0;
                  auVar45._0_15_ = local_780._1_15_;
                  local_780 = auVar45 << 8;
                  if (*(longlong *)(puVar28 + lVar16 * 0x20 + 0x98) == 0) {
                    uVar4 = *(ushort *)(puVar28 + lVar16 * 2 + 0x80);
                    uVar15 = (((ulonglong)uVar4 & 0xff ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                             (ulonglong)(uVar4 >> 8)) * 0x100000001b3 & DAT_180cc9cb8;
                    lVar16 = *(longlong *)(DAT_180cc9ca0 + 8 + uVar15 * 0x10);
                    if (lVar16 == DAT_180cc9c90) {
LAB_1801a00e1:
                      lVar16 = 0;
                    }
                    else {
                      uVar5 = *(ushort *)(lVar16 + 0x10);
                      while (uVar4 != uVar5) {
                        if (lVar16 == *(longlong *)(DAT_180cc9ca0 + uVar15 * 0x10))
                        goto LAB_1801a00e1;
                        lVar16 = *(longlong *)(lVar16 + 8);
                        uVar5 = *(ushort *)(lVar16 + 0x10);
                      }
                    }
                    lVar24 = DAT_180cc9c90;
                    if (lVar16 != 0) {
                      lVar24 = lVar16;
                    }
                    if ((((lVar24 != DAT_180cc9c90) &&
                         (lVar16 = *(longlong *)(lVar24 + 0x18) * 0xb8 + DAT_180cc9bf8, lVar16 != 0)
                         ) && (*(char *)(lVar16 + 0xb0) == '\x03')) &&
                       ((*(char *)(lVar16 + 0xb2) != '\0' &&
                        (plVar14 = (longlong *)(lVar16 + 0x68), (longlong *)local_780 != plVar14))))
                    {
                      if (0xf < *(ulonglong *)(lVar16 + 0x80)) {
                        plVar14 = (longlong *)*plVar14;
                      }
                      FUN_180113930(local_780,plVar14,*(undefined8 *)(lVar16 + 0x78));
                      goto LAB_18019ffe4;
                    }
                  }
                  else {
                    cVar6 = FUN_18017f370(puVar28 + uVar15 * 0x48 + 0x38);
                    if (cVar6 == '\0') {
                      local_7a8 = (undefined1  [16])0x0;
                      plVar14 = (longlong *)FUN_180113860(&DAT_180bb9388);
                      lVar16 = DAT_180bb9380;
                      local_7a8._8_8_ = plVar14;
                      local_7a8._0_8_ = DAT_180bb9380;
                      if (plVar14 != (longlong *)0x0) {
                        LOCK();
                        *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
                        UNLOCK();
                      }
                      LOCK();
                      UNLOCK();
                      bVar21 = (byte)DAT_180bb9388;
                      DAT_180bb9388 = (longlong)plVar14;
                      if ((bVar21 & 3) == 2) {
                        FUN_1805fa36c(&DAT_180bb9388);
                      }
                      puVar23 = puVar28 + (ulonglong)bVar2 * 0x20 + 0x48;
                      if (0xf < *(ulonglong *)(puVar28 + (ulonglong)bVar2 * 0x20 + 0x60)) {
                        puVar23 = *(undefined **)(puVar28 + (ulonglong)bVar2 * 0x20 + 0x48);
                      }
                      uVar25 = 0xcbf29ce484222325;
                      uVar15 = 0;
                      if (*(ulonglong *)(puVar28 + (ulonglong)bVar2 * 0x20 + 0x58) != 0) {
                        do {
                          uVar25 = (uVar25 ^ (byte)puVar23[uVar15]) * 0x100000001b3;
                          uVar15 = uVar15 + 1;
                        } while (uVar15 < *(ulonglong *)(puVar28 + (ulonglong)bVar2 * 0x20 + 0x58));
                      }
                      lVar24 = FUN_180177b00(lVar16 + 0x50,local_810,
                                             puVar28 + (ulonglong)bVar2 * 0x20 + 0x48,uVar25);
                      lVar24 = *(longlong *)(lVar24 + 8);
                      if (((lVar24 != 0) && (lVar24 != *(longlong *)(lVar16 + 0x58))) &&
                         ((cVar6 = FUN_18019a4f0(*(longlong *)(lVar24 + 0x30) * 0xd8 +
                                                 *(longlong *)(lVar16 + 0x38),0,&local_7e0),
                          cVar6 != '\0' &&
                          (puVar18 = (undefined8 *)
                                     (*(longlong *)(lVar16 + 0x38) + 0x40 +
                                     *(longlong *)(lVar24 + 0x30) * 0xd8),
                          (undefined8 *)local_780 != puVar18)))) {
                        puVar20 = puVar18 + 2;
                        if (0xf < (ulonglong)puVar18[3]) {
                          puVar18 = (undefined8 *)*puVar18;
                        }
                        FUN_180113930(local_780,puVar18,*puVar20);
                      }
                      uVar40 = local_944;
                      if (plVar14 != (longlong *)0x0) {
                        LOCK();
                        plVar36 = plVar14 + 1;
                        lVar16 = *plVar36;
                        *(int *)plVar36 = (int)*plVar36 + -1;
                        UNLOCK();
                        if ((int)lVar16 == 1) {
                          (**(code **)*plVar14)(plVar14);
                          LOCK();
                          piVar1 = (int *)((longlong)plVar14 + 0xc);
                          iVar41 = *piVar1;
                          *piVar1 = *piVar1 + -1;
                          UNLOCK();
                          uVar40 = local_944;
                          if (iVar41 == 1) {
                            (**(code **)(*plVar14 + 8))(plVar14);
                            uVar40 = local_944;
                          }
                        }
                      }
                    }
                    else {
                      FUN_1801950a0(extraout_XMM0_Qa,local_678,puVar28 + uVar15 * 0x48 + 0x38);
                      if ((local_5a0 != '\0') &&
                         (cVar6 = FUN_18019a4f0(local_678,1,&local_7e0), cVar6 != '\0')) {
                        pppppppuVar26 = local_638;
                        if (0xf < local_620) {
                          pppppppuVar26 = local_638[0];
                        }
                        FUN_180113930(local_780,pppppppuVar26,local_628);
                      }
                      FUN_1801ab310(local_678);
                    }
LAB_18019ffe4:
                    lVar16 = local_920;
                    if (local_770 != 0) {
                      uVar15 = (((((ulonglong)(uVar40 & 0xff) ^ 0xcbf29ce484222325) * 0x100000001b3
                                 ^ (ulonglong)local_940 >> 8 & 0xff) * 0x100000001b3 ^
                                (ulonglong)local_940 >> 0x10 & 0xff) * 0x100000001b3 ^
                               (ulonglong)local_940 >> 0x18 & 0xff) * 0x100000001b3 & DAT_180bbe9c0;
                      plVar14 = (longlong *)DAT_180bbe9a8[uVar15 * 2 + 1];
                      if (plVar14 == DAT_180bbe998) {
LAB_1801a015e:
                        plVar14 = (longlong *)0x0;
                      }
                      else {
                        uVar39 = *(uint *)(plVar14 + 2);
                        while (uVar40 != uVar39) {
                          if (plVar14 == (longlong *)DAT_180bbe9a8[uVar15 * 2]) goto LAB_1801a015e;
                          plVar14 = (longlong *)plVar14[1];
                          uVar39 = *(uint *)(plVar14 + 2);
                        }
                      }
                      plVar36 = DAT_180bbe998;
                      if (plVar14 != (longlong *)0x0) {
                        plVar36 = plVar14;
                      }
                      if (plVar36 == DAT_180bbe998) {
                        FUN_18019ada0(local_7a8);
                        uVar15 = uStack_798;
                        if (uStack_798 != 0) {
                          local_8a0 = lVar16;
                          local_898 = (undefined1  [16])0x0;
                          local_888 = (undefined1  [16])0x0;
                          pauVar13 = &local_7a8;
                          if (0xf < uStack_790) {
                            pauVar13 = (undefined1 (*) [16])local_7a8._0_8_;
                          }
                          local_8a8[0] = uVar40;
                          if (0x7fffffffffffffff < uStack_798) {
                    /* WARNING: Subroutine does not return */
                            FUN_18015bb70();
                          }
                          if (uStack_798 < 0x10) {
                            local_888._8_8_ = 0xf;
                            local_888._0_8_ = uStack_798;
                            local_898 = *pauVar13;
                          }
                          else {
                            uVar25 = uStack_798 | 0xf;
                            if (uVar25 < 0x8000000000000000) {
                              if (uVar25 < 0x16) {
                                uVar25 = 0x16;
                              }
                            }
                            else {
                              uVar25 = 0x7fffffffffffffff;
                            }
                            uVar17 = FUN_18015bca0(uVar25 + 1);
                            local_898._0_8_ = uVar17;
                            local_888._8_8_ = uVar25;
                            local_888._0_8_ = uVar15;
                            FUN_18063aed0(uVar17,pauVar13,uVar15 + 1);
                          }
                          local_868 = auVar48._0_16_;
                          local_878._1_15_ = SUB1615((undefined1  [16])0x0,1);
                          auVar47[0xf] = 0;
                          auVar47._0_15_ = local_878._1_15_;
                          local_878 = auVar47 << 8;
                          puVar18 = (undefined8 *)FUN_1801a94d0(0,local_800,&local_940,local_8a8);
                          plVar36 = (longlong *)*puVar18;
                          FUN_18015c010(local_878);
                          FUN_18015c010(local_898);
                          local_944 = (uint)local_940;
                          uVar40 = (uint)local_940;
                        }
                        FUN_18015c010(local_7a8);
                        if (plVar36 == DAT_180bbe998) goto LAB_1801a0798;
                      }
                      FUN_1801af9d0(&local_728,local_7f0,&local_940);
                      FUN_18019ada0(local_748);
                      plVar14 = plVar36 + 9;
                      uVar15 = plVar36[0xb];
                      if ((uVar15 != 0) && (local_738 != 0)) {
                        plVar29 = plVar14;
                        if (0xf < (ulonglong)plVar36[0xc]) {
                          plVar29 = (longlong *)*plVar14;
                        }
                        pppppppuVar26 = local_748;
                        if (0xf < local_730) {
                          pppppppuVar26 = local_748[0];
                        }
                        uVar25 = local_738;
                        if (1 < local_738) {
                          bVar21 = *(byte *)((longlong)pppppppuVar26 + (local_738 - 2));
                          bVar43 = bVar21 < 0x5f;
                          if ((bVar21 == 0x5f) &&
                             (bVar21 = *(byte *)((longlong)pppppppuVar26 + (local_738 - 1)),
                             bVar43 = bVar21 < 99, bVar21 == 99)) {
                            uVar39 = 0;
                          }
                          else {
                            uVar39 = -(uint)bVar43 | 1;
                          }
                          if (uVar39 == 0) {
                            uVar25 = local_738 - 2;
                          }
                        }
                        if (1 < uVar15) {
                          bVar21 = *(byte *)((longlong)plVar29 + (uVar15 - 2));
                          bVar43 = bVar21 < 0x5f;
                          if ((bVar21 == 0x5f) &&
                             (bVar21 = *(byte *)((longlong)plVar29 + (uVar15 - 1)),
                             bVar43 = bVar21 < 99, bVar21 == 99)) {
                            uVar39 = 0;
                          }
                          else {
                            uVar39 = -(uint)bVar43 | 1;
                          }
                          if (uVar39 == 0) {
                            uVar15 = uVar15 - 2;
                          }
                        }
                        if ((uVar25 == 0) || (uVar25 != uVar15)) {
LAB_1801a03bb:
                          if ((undefined8 ********)(plVar36 + 5) != local_748) {
                            pppppppuVar26 = local_748;
                            if (0xf < local_730) {
                              pppppppuVar26 = local_748[0];
                            }
                            FUN_180113930(plVar36 + 5,pppppppuVar26,local_738);
                          }
                        }
                        else if (uVar25 != 0) {
                          plVar34 = plVar29;
                          do {
                            cVar6 = *(char *)(((longlong)pppppppuVar26 - (longlong)plVar29) +
                                             (longlong)plVar34);
                            cVar22 = (char)*plVar34;
                            cVar32 = cVar6 + ' ';
                            if (0x19 < (byte)(cVar6 + 0xbfU)) {
                              cVar32 = cVar6;
                            }
                            cVar6 = cVar22 + ' ';
                            if (0x19 < (byte)(cVar22 + 0xbfU)) {
                              cVar6 = cVar22;
                            }
                            if (cVar32 != cVar6) {
                              local_948 = bVar2;
                              goto LAB_1801a03bb;
                            }
                            plVar34 = (longlong *)((longlong)plVar34 + 1);
                          } while ((ulonglong)((longlong)plVar34 - (longlong)plVar29) < uVar25);
                          local_948 = bVar2;
                        }
                        lVar16 = local_920;
                      }
                      pcVar37 = local_780;
                      if (0xf < local_768) {
                        pcVar37 = (char *)local_780._0_8_;
                      }
                      pppppppuVar26 = local_748;
                      if (0xf < local_730) {
                        pppppppuVar26 = local_748[0];
                      }
                      uVar15 = local_738;
                      if (1 < local_738) {
                        bVar21 = *(byte *)((local_738 - 2) + (longlong)pppppppuVar26);
                        bVar43 = bVar21 < 0x5f;
                        if ((bVar21 == 0x5f) &&
                           (bVar21 = *(byte *)((local_738 - 1) + (longlong)pppppppuVar26),
                           bVar43 = bVar21 < 99, bVar21 == 99)) {
                          uVar39 = 0;
                        }
                        else {
                          uVar39 = -(uint)bVar43 | 1;
                        }
                        if (uVar39 == 0) {
                          uVar15 = local_738 - 2;
                        }
                      }
                      uVar25 = local_770;
                      if (1 < local_770) {
                        bVar43 = (byte)pcVar37[local_770 - 2] < 0x5f;
                        if ((pcVar37[local_770 - 2] == 0x5f) &&
                           (bVar43 = (byte)pcVar37[local_770 - 1] < 99, pcVar37[local_770 - 1] == 99
                           )) {
                          uVar39 = 0;
                        }
                        else {
                          uVar39 = -(uint)bVar43 | 1;
                        }
                        if (uVar39 == 0) {
                          uVar25 = local_770 - 2;
                        }
                      }
                      if ((uVar15 == 0) || (uVar15 != uVar25)) {
LAB_1801a04de:
                        if (((local_7ce == '\0') || ((char)local_7d0 != '\0')) ||
                           (local_7d8 < *local_7e0)) {
                          local_7d0 = CONCAT11(1,(char)local_7d0);
                        }
                        else {
                          *local_7e0 = local_7d8 + 0x10;
                          local_7d0 = CONCAT11(local_7d0._1_1_,1);
                          local_7a8 = ZEXT816(0x1807c5578);
                          FUN_18017bf40(local_7a8 + 8);
                          puVar38 = local_780;
                          if (0xf < local_768) {
                            puVar38 = (undefined1 *)local_780._0_8_;
                          }
                          cVar6 = FUN_180182cb0(lVar16,puVar38);
                          if ((cVar6 != '\0') && (plVar14 != (longlong *)local_780)) {
                            puVar38 = local_780;
                            if (0xf < local_768) {
                              puVar38 = (undefined1 *)local_780._0_8_;
                            }
                            FUN_180113930(plVar14,puVar38,local_770);
                          }
                          FUN_18017bf40(&local_8d0);
                          uVar33 = local_8d0;
                          uVar27 = local_8d0 - local_7a8._8_8_;
                          puVar19 = (ulonglong *)FUN_1801b20c0();
                          uVar15 = *puVar19;
                          *puVar19 = uVar15 + 1;
                          uVar25 = puVar19[1];
                          puVar19[1] = uVar25 + uVar27;
                          puVar19[3] = puVar19[3] + (ulonglong)(999999 < uVar27);
                          puVar19[4] = puVar19[4] + (ulonglong)(4999999 < uVar27);
                          puVar19[5] = puVar19[5] + (ulonglong)(15999999 < uVar27);
                          if (puVar19[2] < uVar27) {
                            puVar19[2] = uVar27;
                          }
                          if ((uVar33 == puVar19[7]) || ((longlong)puVar19[7] <= (longlong)uVar33))
                          {
                            dVar44 = (double)(uVar25 + uVar27) / (double)(uVar15 + 1);
                            FUN_1801af8a0(dVar44,dVar44 / auVar46._0_8_,local_7a8._0_8_);
                            puVar19[2] = 0;
                            puVar19[1] = 0;
                            *puVar19 = 0;
                            puVar19[5] = 0;
                            puVar19[4] = 0;
                            puVar19[3] = 0;
                            puVar19[6] = uVar33;
                            puVar19[7] = uVar33 + 5000000000;
                          }
                        }
                      }
                      else if (uVar15 != 0) {
                        pcVar35 = pcVar37;
                        do {
                          cVar6 = pcVar35[(longlong)pppppppuVar26 - (longlong)pcVar37];
                          cVar22 = *pcVar35;
                          cVar32 = cVar6 + ' ';
                          if (0x19 < (byte)(cVar6 + 0xbfU)) {
                            cVar32 = cVar6;
                          }
                          cVar6 = cVar22 + ' ';
                          if (0x19 < (byte)(cVar22 + 0xbfU)) {
                            cVar6 = cVar22;
                          }
                          if (cVar32 != cVar6) {
                            local_948 = bVar2;
                            goto LAB_1801a04de;
                          }
                          pcVar35 = pcVar35 + 1;
                        } while ((ulonglong)((longlong)pcVar35 - (longlong)pcVar37) < uVar15);
                        local_948 = bVar2;
                      }
                      FUN_18015c010(local_748);
                      local_944 = (uint)local_940;
                      uVar40 = (uint)local_940;
                    }
                  }
LAB_1801a0798:
                  iVar41 = DAT_180bb8488;
                  if (DAT_180bb8488 == 0) {
                    UVar12 = GetTickCount64();
                    if (UVar12 < DAT_180bb8480) {
                      iVar41 = 0;
                    }
                    else {
                      local_940 = &DAT_1808d8320;
                      iVar41 = FUN_1805f68d0(&DAT_1808d8320);
                      if (iVar41 != 0) goto LAB_1801a1cb8;
                      if (DAT_1808d836c == 0x7fffffff) {
                        DAT_1808d836c = 0x7ffffffe;
                        goto LAB_1801a1cad;
                      }
                      if ((DAT_180bb8488 == 0) && (DAT_180bb8480 <= UVar12)) {
                        DAT_180bb8488 = FUN_1804174b0("C_BasePlayerPawn");
                        if (DAT_180bb8488 == 0) {
                          DAT_180bb8480 = UVar12 + 1000;
                        }
                        else {
                          DAT_180bb8480 = 0xffffffffffffffff;
                        }
                      }
                      iVar41 = DAT_180bb8488;
                      FUN_1805f68fc(&DAT_1808d8320);
                    }
                  }
                  lVar16 = local_920;
                  lVar24 = FUN_18017ea70();
                  *(int *)(lVar24 + 4) = *(int *)(lVar24 + 4) + 1;
                  if (iVar41 + lVar16 == 0) {
                    bVar43 = false;
                  }
                  else {
                    local_940 = (undefined *)0x0;
                    cVar6 = FUN_1804514f0(&local_940,iVar41 + lVar16,8);
                    if (cVar6 == '\0') {
                      bVar43 = false;
                    }
                    else {
                      local_8e8 = local_940;
                      bVar43 = true;
                    }
                  }
                  puVar28 = local_8e8;
                  lVar24 = FUN_18017ea70();
                  if (*(int *)(lVar24 + 4) != 0) {
                    *(int *)(lVar24 + 4) = *(int *)(lVar24 + 4) + -1;
                  }
                  if (bVar43) {
                    if (puVar28 != (undefined *)0x0) {
                      iVar41 = DAT_180bb8478;
                      if (DAT_180bb8478 == 0) {
                        UVar12 = GetTickCount64();
                        if (UVar12 < DAT_180bb8470) {
                          iVar41 = 0;
                        }
                        else {
                          local_940 = &DAT_1808d82d0;
                          iVar41 = FUN_1805f68d0(&DAT_1808d82d0);
                          if (iVar41 != 0) {
LAB_1801a1cb8:
                    /* WARNING: Subroutine does not return */
                            FUN_1805f6d44(5);
                          }
                          if (DAT_1808d831c == 0x7fffffff) {
                            DAT_1808d831c = 0x7ffffffe;
LAB_1801a1cad:
                    /* WARNING: Subroutine does not return */
                            FUN_1805f6d44(6);
                          }
                          if ((DAT_180bb8478 == 0) && (DAT_180bb8470 <= UVar12)) {
                            DAT_180bb8478 = FUN_1804174b0("CPlayer_WeaponServices");
                            if (DAT_180bb8478 == 0) {
                              DAT_180bb8470 = UVar12 + 1000;
                            }
                            else {
                              DAT_180bb8470 = 0xffffffffffffffff;
                            }
                          }
                          iVar41 = DAT_180bb8478;
                          FUN_1805f68fc(&DAT_1808d82d0);
                        }
                      }
                      puVar28 = puVar28 + iVar41;
                      if (puVar28 != (undefined *)0x0) {
                        lVar24 = FUN_18017ea70();
                        *(int *)(lVar24 + 4) = *(int *)(lVar24 + 4) + 1;
                        local_940 = (undefined *)((ulonglong)local_940 & 0xffffffff00000000);
                        cVar6 = FUN_1804514f0(&local_940,puVar28,4);
                        uVar39 = local_92c;
                        if (cVar6 != '\0') {
                          uVar39 = (uint)local_940;
                        }
                        local_92c = uVar39;
                        lVar24 = FUN_18017ea70();
                        if (*(int *)(lVar24 + 4) != 0) {
                          *(int *)(lVar24 + 4) = *(int *)(lVar24 + 4) + -1;
                        }
                        uVar11 = 0;
                        if (cVar6 != '\0') {
                          uVar11 = uVar39;
                        }
                        lVar24 = FUN_18017ea70();
                        *(int *)(lVar24 + 4) = *(int *)(lVar24 + 4) + 1;
                        bVar43 = false;
                        if (puVar28 + 8 != (undefined *)0x0) {
                          local_940 = (undefined *)0x0;
                          cVar6 = FUN_1804514f0(&local_940,puVar28 + 8,8);
                          if (cVar6 == '\0') {
                            bVar43 = false;
                          }
                          else {
                            local_910 = local_940;
                            bVar43 = true;
                          }
                        }
                        puVar28 = local_910;
                        lVar24 = FUN_18017ea70();
                        if (*(int *)(lVar24 + 4) != 0) {
                          *(int *)(lVar24 + 4) = *(int *)(lVar24 + 4) + -1;
                        }
                        puVar23 = (undefined *)0x0;
                        if (bVar43) {
                          puVar23 = puVar28;
                        }
                        local_910 = puVar28;
                        if (puVar23 != (undefined *)0x0) {
                          iVar41 = 0;
                          local_92c = uVar39;
                          if (uVar11 < 0x41) {
                            while (iVar41 < (int)uVar11) {
                              uVar15 = iVar41 + _DAT_180bbe9f0;
                              lVar16 = FUN_18017ea70();
                              *(int *)(lVar16 + 4) = *(int *)(lVar16 + 4) + 1;
                              if (puVar23 + (uVar15 % (ulonglong)(longlong)(int)uVar11) * 4 ==
                                  (undefined *)0x0) {
                                bVar43 = false;
                              }
                              else {
                                local_940 = (undefined *)((ulonglong)local_940 & 0xffffffff00000000)
                                ;
                                cVar6 = FUN_1804514f0(&local_940,
                                                      puVar23 + (uVar15 % (ulonglong)
                                                                          (longlong)(int)uVar11) * 4
                                                      ,4);
                                if (cVar6 == '\0') {
                                  bVar43 = false;
                                }
                                else {
                                  local_934 = (uint)local_940;
                                  bVar43 = true;
                                }
                              }
                              iVar7 = local_934;
                              lVar16 = FUN_18017ea70();
                              if (*(int *)(lVar16 + 4) != 0) {
                                *(int *)(lVar16 + 4) = *(int *)(lVar16 + 4) + -1;
                              }
                              iVar9 = 0;
                              if (bVar43) {
                                iVar9 = iVar7;
                              }
                              lVar16 = FUN_1803d4150();
                              if ((lVar16 == 0) || (iVar7 = FUN_18019abd0(lVar16), iVar7 != iVar9))
                              {
LAB_1801a1004:
                                iVar41 = iVar41 + 1;
                              }
                              else {
                                iVar7 = DAT_180bb8468;
                                if (DAT_180bb8468 == 0) {
                                  UVar12 = GetTickCount64();
                                  if (UVar12 < DAT_180bb8460) {
                                    iVar7 = 0;
                                  }
                                  else {
                                    local_940 = &DAT_1808d8280;
                                    iVar7 = FUN_1805f68d0(&DAT_1808d8280);
                                    if (iVar7 != 0) goto LAB_1801a1cb8;
                                    if (DAT_1808d82cc == 0x7fffffff) {
                                      DAT_1808d82cc = 0x7ffffffe;
                                      goto LAB_1801a1cad;
                                    }
                                    if ((DAT_180bb8468 == 0) && (DAT_180bb8460 <= UVar12)) {
                                      DAT_180bb8468 = FUN_1804174b0("C_BaseEntity");
                                      if (DAT_180bb8468 == 0) {
                                        DAT_180bb8460 = UVar12 + 1000;
                                      }
                                      else {
                                        DAT_180bb8460 = 0xffffffffffffffff;
                                      }
                                    }
                                    iVar7 = DAT_180bb8468;
                                    FUN_1805f68fc(&DAT_1808d8280);
                                  }
                                }
                                lVar24 = FUN_18017ea70();
                                *(int *)(lVar24 + 4) = *(int *)(lVar24 + 4) + 1;
                                if (iVar7 + lVar16 == 0) {
                                  bVar43 = false;
                                }
                                else {
                                  local_940 = (undefined *)
                                              ((ulonglong)local_940 & 0xffffffff00000000);
                                  cVar6 = FUN_1804514f0(&local_940,iVar7 + lVar16,4);
                                  if (cVar6 == '\0') {
                                    bVar43 = false;
                                  }
                                  else {
                                    local_930 = (uint)local_940;
                                    bVar43 = true;
                                  }
                                }
                                uVar39 = local_930;
                                lVar24 = FUN_18017ea70();
                                if (*(int *)(lVar24 + 4) != 0) {
                                  *(int *)(lVar24 + 4) = *(int *)(lVar24 + 4) + -1;
                                }
                                uVar8 = 0;
                                if (bVar43) {
                                  uVar8 = uVar39;
                                }
                                if (uVar8 != uVar40) goto LAB_1801a1004;
                                iVar7 = DAT_180bb8458;
                                if (DAT_180bb8458 == 0) {
                                  UVar12 = GetTickCount64();
                                  if (UVar12 < DAT_180bb8450) {
                                    iVar7 = 0;
                                  }
                                  else {
                                    local_940 = &DAT_1808d8230;
                                    iVar7 = FUN_1805f68d0(&DAT_1808d8230);
                                    if (iVar7 != 0) goto LAB_1801a1cb8;
                                    if (DAT_1808d827c == 0x7fffffff) {
                                      DAT_1808d827c = 0x7ffffffe;
                                      goto LAB_1801a1cad;
                                    }
                                    if ((DAT_180bb8458 == 0) && (DAT_180bb8450 <= UVar12)) {
                                      DAT_180bb8458 = FUN_1804174b0("C_EconEntity",0x537b0586);
                                      if (DAT_180bb8458 == 0) {
                                        DAT_180bb8450 = UVar12 + 1000;
                                      }
                                      else {
                                        DAT_180bb8450 = 0xffffffffffffffff;
                                      }
                                    }
                                    iVar7 = DAT_180bb8458;
                                    FUN_1805f68fc(&DAT_1808d8230);
                                  }
                                }
                                iVar9 = DAT_180bb8448;
                                if (DAT_180bb8448 == 0) {
                                  UVar12 = GetTickCount64();
                                  if (UVar12 < DAT_180bb8440) {
                                    iVar9 = 0;
                                  }
                                  else {
                                    local_940 = &DAT_1808d81e0;
                                    iVar9 = FUN_1805f68d0(&DAT_1808d81e0);
                                    if (iVar9 != 0) goto LAB_1801a1cb8;
                                    if (DAT_1808d822c == 0x7fffffff) {
                                      DAT_1808d822c = 0x7ffffffe;
                                      goto LAB_1801a1cad;
                                    }
                                    if ((DAT_180bb8448 == 0) && (DAT_180bb8440 <= UVar12)) {
                                      DAT_180bb8448 =
                                           FUN_1804174b0("C_AttributeContainer",0xdce71866);
                                      if (DAT_180bb8448 == 0) {
                                        DAT_180bb8440 = UVar12 + 1000;
                                      }
                                      else {
                                        DAT_180bb8440 = 0xffffffffffffffff;
                                      }
                                    }
                                    iVar9 = DAT_180bb8448;
                                    FUN_1805f68fc(&DAT_1808d81e0);
                                  }
                                }
                                iVar10 = DAT_180bb8438;
                                if (DAT_180bb8438 == 0) {
                                  UVar12 = GetTickCount64();
                                  if (UVar12 < DAT_180bb8430) {
                                    iVar10 = 0;
                                  }
                                  else {
                                    local_940 = &DAT_1808d8190;
                                    iVar10 = FUN_1805f68d0(&DAT_1808d8190);
                                    if (iVar10 != 0) goto LAB_1801a1cb8;
                                    if (DAT_1808d81dc == 0x7fffffff) {
                                      DAT_1808d81dc = 0x7ffffffe;
                                      goto LAB_1801a1cad;
                                    }
                                    if ((DAT_180bb8438 == 0) && (DAT_180bb8430 <= UVar12)) {
                                      DAT_180bb8438 = FUN_1804174b0("C_EconItemView",0xa2ccb41a);
                                      if (DAT_180bb8438 == 0) {
                                        DAT_180bb8430 = UVar12 + 1000;
                                      }
                                      else {
                                        DAT_180bb8430 = 0xffffffffffffffff;
                                      }
                                    }
                                    iVar10 = DAT_180bb8438;
                                    FUN_1805f68fc(&DAT_1808d8190);
                                  }
                                }
                                lVar24 = FUN_18017ea70();
                                *(int *)(lVar24 + 4) = *(int *)(lVar24 + 4) + 1;
                                lVar24 = (longlong)iVar10 + (longlong)iVar7 + iVar9 + lVar16;
                                if (lVar24 == 0) {
                                  bVar43 = false;
                                }
                                else {
                                  local_940 = (undefined *)
                                              ((ulonglong)local_940 & 0xffffffffffff0000);
                                  cVar6 = FUN_1804514f0(&local_940,lVar24,2);
                                  if (cVar6 == '\0') {
                                    bVar43 = false;
                                  }
                                  else {
                                    local_938 = (ushort)local_940;
                                    bVar43 = true;
                                  }
                                }
                                uVar4 = local_938;
                                lVar24 = FUN_18017ea70();
                                uVar40 = local_944;
                                if (*(int *)(lVar24 + 4) != 0) {
                                  *(int *)(lVar24 + 4) = *(int *)(lVar24 + 4) + -1;
                                }
                                uVar15 = 0;
                                if (bVar43) {
                                  uVar15 = (ulonglong)uVar4;
                                }
                                uVar25 = (uVar15 >> 8 ^
                                         (uVar15 & 0xff ^ 0xcbf29ce484222325) * 0x100000001b3) *
                                         0x100000001b3 & DAT_180cc9cb8;
                                lVar24 = *(longlong *)(DAT_180cc9ca0 + 8 + uVar25 * 0x10);
                                if (lVar24 == DAT_180cc9c90) {
LAB_1801a0ee2:
                                  lVar24 = 0;
                                }
                                else {
                                  sVar3 = *(short *)(lVar24 + 0x10);
                                  while ((short)uVar15 != sVar3) {
                                    if (lVar24 == *(longlong *)(DAT_180cc9ca0 + uVar25 * 0x10))
                                    goto LAB_1801a0ee2;
                                    lVar24 = *(longlong *)(lVar24 + 8);
                                    sVar3 = *(short *)(lVar24 + 0x10);
                                  }
                                }
                                lVar31 = DAT_180cc9c90;
                                if (lVar24 != 0) {
                                  lVar31 = lVar24;
                                }
                                if ((lVar31 != DAT_180cc9c90) &&
                                   (lVar24 = DAT_180cc9bf8 + *(longlong *)(lVar31 + 0x18) * 0xb8,
                                   lVar24 != 0)) {
                                  cVar6 = *(char *)(lVar24 + 0xb0);
                                  if (cVar6 == '\0') {
                                    uVar25 = (uVar15 >> 8 ^
                                             (uVar15 & 0xff ^ 0xcbf29ce484222325) * 0x100000001b3) *
                                             0x100000001b3 & *(ulonglong *)(local_900 + 0x30);
                                    lVar24 = *(longlong *)
                                              (*(longlong *)(local_900 + 0x18) + 8 + uVar25 * 0x10);
                                    if (lVar24 == *(longlong *)(local_900 + 8)) {
LAB_1801a1067:
                                      lVar24 = 0;
                                    }
                                    else {
                                      sVar3 = *(short *)(lVar24 + 0x10);
                                      while ((short)uVar15 != sVar3) {
                                        if (lVar24 == *(longlong *)
                                                       (*(longlong *)(local_900 + 0x18) +
                                                       uVar25 * 0x10)) goto LAB_1801a1067;
                                        lVar24 = *(longlong *)(lVar24 + 8);
                                        sVar3 = *(short *)(lVar24 + 0x10);
                                      }
                                    }
                                    if ((lVar24 != 0) && (lVar24 != *(longlong *)(local_900 + 8))) {
LAB_1801a0ff5:
                                      FUN_1801a1cf0(&local_8c8,lVar16,local_944,uVar15);
                                      goto LAB_1801a1004;
                                    }
                                  }
                                  else if (cVar6 == '\x01') {
                                    for (puVar18 = (undefined8 *)**(undefined8 **)(local_900 + 8);
                                        puVar18 != *(undefined8 **)(local_900 + 8);
                                        puVar18 = (undefined8 *)*puVar18) {
                                      uVar4 = *(ushort *)(puVar18 + 2);
                                      uVar15 = (((ulonglong)uVar4 & 0xff ^ 0xcbf29ce484222325) *
                                                0x100000001b3 ^ (ulonglong)(uVar4 >> 8)) *
                                               0x100000001b3 & DAT_180cc9cb8;
                                      lVar24 = *(longlong *)(DAT_180cc9ca0 + 8 + uVar15 * 0x10);
                                      if (lVar24 == DAT_180cc9c90) {
LAB_1801a0f9a:
                                        lVar24 = 0;
                                      }
                                      else {
                                        uVar5 = *(ushort *)(lVar24 + 0x10);
                                        while (uVar4 != uVar5) {
                                          if (lVar24 == *(longlong *)(DAT_180cc9ca0 + uVar15 * 0x10)
                                             ) goto LAB_1801a0f9a;
                                          lVar24 = *(longlong *)(lVar24 + 8);
                                          uVar5 = *(ushort *)(lVar24 + 0x10);
                                        }
                                      }
                                      lVar31 = DAT_180cc9c90;
                                      if (lVar24 != 0) {
                                        lVar31 = lVar24;
                                      }
                                      if (((lVar31 != DAT_180cc9c90) &&
                                          (lVar24 = *(longlong *)(lVar31 + 0x18) * 0xb8 +
                                                    DAT_180cc9bf8, lVar24 != 0)) &&
                                         (*(char *)(lVar24 + 0xb0) == '\x01')) {
                                        uVar15 = (ulonglong)*(ushort *)(puVar18 + 2);
                                        goto LAB_1801a0ff5;
                                      }
                                    }
                                  }
                                }
                                iVar41 = iVar41 + 1;
                              }
                            }
                            lVar16 = local_920;
                          }
                        }
                      }
                    }
                  }
                  if (*(longlong *)(local_8f8 + (ulonglong)local_948 * 0x20 + 0x58) == 0) {
                    for (puVar18 = (undefined8 *)**(undefined8 **)(local_900 + 8);
                        puVar18 != *(undefined8 **)(local_900 + 8); puVar18 = (undefined8 *)*puVar18
                        ) {
                      uVar4 = *(ushort *)(puVar18 + 2);
                      uVar15 = (((ulonglong)uVar4 & 0xff ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                               (ulonglong)(uVar4 >> 8)) * 0x100000001b3 & DAT_180cc9cb8;
                      lVar24 = *(longlong *)(DAT_180cc9ca0 + 8 + uVar15 * 0x10);
                      if (lVar24 == DAT_180cc9c90) {
LAB_1801a114a:
                        lVar24 = 0;
                      }
                      else {
                        uVar5 = *(ushort *)(lVar24 + 0x10);
                        while (uVar4 != uVar5) {
                          if (lVar24 == *(longlong *)(DAT_180cc9ca0 + uVar15 * 0x10))
                          goto LAB_1801a114a;
                          lVar24 = *(longlong *)(lVar24 + 8);
                          uVar5 = *(ushort *)(lVar24 + 0x10);
                        }
                      }
                      lVar31 = DAT_180cc9c90;
                      if (lVar24 != 0) {
                        lVar31 = lVar24;
                      }
                      if (((lVar31 != DAT_180cc9c90) &&
                          (lVar24 = *(longlong *)(lVar31 + 0x18) * 0xb8 + DAT_180cc9bf8, lVar24 != 0
                          )) && (*(char *)(lVar24 + 0xb0) == '\x02')) {
                        FUN_1801a1cf0(&local_8c8,lVar16,uVar40,*(undefined2 *)(puVar18 + 2));
                        break;
                      }
                    }
                  }
                  FUN_18015c010(local_780);
                }
              }
              lVar42 = local_908;
            }
          }
        }
        lVar16 = local_918;
      }
      local_788 = (undefined8 *)((longlong)local_788 + 1);
    } while (local_788 < local_8f0);
    uVar39 = local_928;
  }
  puVar20 = DAT_180bbe958;
  local_7ce = '\x01';
  _local_7c8 = (undefined1  [16])0x0;
  local_7b8 = (undefined1 *)0x0;
  puVar18 = (undefined8 *)*DAT_180bbe958;
  puStack_7c0 = (undefined1 *)0x0;
  puVar38 = puStack_7c0;
  plVar14 = DAT_180bbe998;
  for (; DAT_180bbe998 = plVar14, puVar18 != puVar20; puVar18 = (undefined8 *)*puVar18) {
    uVar15 = (((((((((ulonglong)*(byte *)(puVar18 + 2) ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                   (ulonglong)*(byte *)((longlong)puVar18 + 0x11)) * 0x100000001b3 ^
                  (ulonglong)*(byte *)((longlong)puVar18 + 0x12)) * 0x100000001b3 ^
                 (ulonglong)*(byte *)((longlong)puVar18 + 0x13)) * 0x100000001b3 ^
                (ulonglong)*(byte *)((longlong)puVar18 + 0x14)) * 0x100000001b3 ^
               (ulonglong)*(byte *)((longlong)puVar18 + 0x15)) * 0x100000001b3 ^
              (ulonglong)*(byte *)((longlong)puVar18 + 0x16)) * 0x100000001b3 ^
             (ulonglong)*(byte *)((longlong)puVar18 + 0x17)) * 0x100000001b3 & uStack_688;
    lVar16 = *(longlong *)(lStack_6a0 + 8 + uVar15 * 0x10);
    if (lVar16 == lStack_6b0) {
LAB_1801a12d1:
      local_947 = 0;
      if (puVar38 == local_7b8) {
        FUN_1801b4e40(local_7c8);
        puVar38 = puStack_7c0;
      }
      else {
        *puVar38 = 0;
        *(undefined8 *)(puVar38 + 8) = puVar18[2];
        puVar38 = (undefined1 *)((longlong)puStack_7c0 + 0x10);
        puStack_7c0 = puVar38;
      }
    }
    else {
      lVar24 = *(longlong *)(lVar16 + 0x10);
      while (puVar18[2] != lVar24) {
        if (lVar16 == *(longlong *)(lStack_6a0 + uVar15 * 0x10)) goto LAB_1801a12d1;
        lVar16 = *(longlong *)(lVar16 + 8);
        lVar24 = *(longlong *)(lVar16 + 0x10);
      }
    }
    plVar14 = DAT_180bbe998;
  }
  for (plVar36 = (longlong *)*plVar14; plVar36 != plVar14; plVar36 = (longlong *)*plVar36) {
    uVar15 = (((((ulonglong)*(byte *)(plVar36 + 2) ^ 0xcbf29ce484222325) * 0x100000001b3 ^
               (ulonglong)*(byte *)((longlong)plVar36 + 0x11)) * 0x100000001b3 ^
              (ulonglong)*(byte *)((longlong)plVar36 + 0x12)) * 0x100000001b3 ^
             (ulonglong)*(byte *)((longlong)plVar36 + 0x13)) * 0x100000001b3 & uStack_6f8;
    lVar16 = *(longlong *)(lStack_710 + 8 + uVar15 * 0x10);
    if (lVar16 == lStack_720) {
LAB_1801a13c0:
      local_947 = 1;
      if (puVar38 == local_7b8) {
        FUN_1801b4fb0(local_7c8);
        puVar38 = puStack_7c0;
      }
      else {
        *puVar38 = 1;
        *(ulonglong *)(puVar38 + 8) = (ulonglong)*(uint *)(plVar36 + 2);
        puStack_7c0 = (undefined1 *)((longlong)puStack_7c0 + 0x10);
        puVar38 = puStack_7c0;
      }
    }
    else {
      iVar41 = *(int *)(lVar16 + 0x10);
      while (*(int *)(plVar36 + 2) != iVar41) {
        if (lVar16 == *(longlong *)(lStack_710 + uVar15 * 0x10)) goto LAB_1801a13c0;
        lVar16 = *(longlong *)(lVar16 + 8);
        iVar41 = *(int *)(lVar16 + 0x10);
      }
    }
  }
  DAT_180bb93a9 = '\0';
  uVar15 = 0;
  auVar30 = local_7c8;
  if ((longlong)puVar38 - (longlong)local_7c8 >> 4 != 0) {
    do {
      uVar33 = (DAT_180bbe9f8 + uVar15) % (ulonglong)((longlong)puVar38 - (longlong)auVar30 >> 4);
      local_7a8[0] = *(char *)((longlong)auVar30 + uVar33 * 0x10);
      uVar25 = *(ulonglong *)((longlong)auVar30 + uVar33 * 0x10 + 8);
      local_7a8._8_8_ = uVar25;
      if (*(char *)((longlong)auVar30 + uVar33 * 0x10) == '\0') {
        local_788 = (undefined8 *)0x0;
        FUN_1801aa8e0();
        if (local_788 == DAT_180bbe958) goto LAB_1801a14e8;
        cVar6 = FUN_18019c410(local_788 + 3);
        if (cVar6 == '\0') {
          DAT_180bb93a9 = '\x01';
        }
        else {
          FUN_1801a9830();
        }
LAB_1801a14d0:
        auVar30 = local_7c8;
        puVar38 = puStack_7c0;
      }
      else {
        uVar33 = ((((uVar25 & 0xff ^ 0xcbf29ce484222325) * 0x100000001b3 ^ uVar25 >> 8 & 0xff) *
                   0x100000001b3 ^ (ulonglong)((uint)uVar25 >> 0x10 & 0xff)) * 0x100000001b3 ^
                 (uVar25 & 0xffffffff) >> 0x18) * 0x100000001b3 & DAT_180bbe9c0;
        plVar14 = (longlong *)DAT_180bbe9a8[uVar33 * 2 + 1];
        plVar36 = DAT_180bbe9a8;
        if (plVar14 == DAT_180bbe998) {
LAB_1801a1661:
          plVar14 = (longlong *)0x0;
        }
        else {
          plVar36 = (longlong *)DAT_180bbe9a8[uVar33 * 2];
          uVar40 = *(uint *)(plVar14 + 2);
          while ((uint)uVar25 != uVar40) {
            if (plVar14 == plVar36) goto LAB_1801a1661;
            plVar14 = (longlong *)plVar14[1];
            uVar40 = *(uint *)(plVar14 + 2);
          }
        }
        plVar29 = DAT_180bbe998;
        if (plVar14 != (longlong *)0x0) {
          plVar29 = plVar14;
        }
        if (plVar29 != DAT_180bbe998) {
          lVar16 = FUN_1803d4150(plVar36,(int)plVar29[3]);
          uVar40 = uVar39;
          if (lVar16 == plVar29[4]) {
            plVar14 = plVar29 + 9;
            if (0xf < (ulonglong)plVar29[0xc]) {
              plVar14 = (longlong *)*plVar14;
            }
            uVar25 = plVar29[0xb];
            puVar20 = (undefined8 *)FUN_18019ada0(&local_8c8);
            uVar40 = uVar39 | 4;
            puVar18 = puVar20;
            if (0xf < (ulonglong)puVar20[3]) {
              puVar18 = (undefined8 *)*puVar20;
            }
            uVar33 = puVar20[2];
            if (1 < uVar33) {
              bVar2 = *(byte *)((uVar33 - 2) + (longlong)puVar18);
              bVar43 = bVar2 < 0x5f;
              if ((bVar2 == 0x5f) &&
                 (bVar2 = *(byte *)((uVar33 - 1) + (longlong)puVar18), bVar43 = bVar2 < 99,
                 bVar2 == 99)) {
                uVar11 = 0;
              }
              else {
                uVar11 = -(uint)bVar43 | 1;
              }
              if (uVar11 == 0) {
                uVar33 = uVar33 - 2;
              }
            }
            if (1 < uVar25) {
              bVar2 = *(byte *)((uVar25 - 2) + (longlong)plVar14);
              bVar43 = bVar2 < 0x5f;
              if ((bVar2 == 0x5f) &&
                 (bVar2 = *(byte *)((uVar25 - 1) + (longlong)plVar14), bVar43 = bVar2 < 99,
                 bVar2 == 99)) {
                uVar11 = 0;
              }
              else {
                uVar11 = -(uint)bVar43 | 1;
              }
              if (uVar11 == 0) {
                uVar25 = uVar25 - 2;
              }
            }
            local_924 = uVar40;
            if ((uVar33 == 0) || (uVar33 != uVar25)) goto LAB_1801a18cf;
            if (uVar33 != 0) {
              plVar36 = plVar14;
              do {
                cVar6 = *(char *)(((longlong)puVar18 - (longlong)plVar14) + (longlong)plVar36);
                cVar22 = (char)*plVar36;
                cVar32 = cVar6 + ' ';
                if (0x19 < (byte)(cVar6 + 0xbfU)) {
                  cVar32 = cVar6;
                }
                cVar6 = cVar22 + ' ';
                if (0x19 < (byte)(cVar22 + 0xbfU)) {
                  cVar6 = cVar22;
                }
                if (cVar32 != cVar6) goto LAB_1801a18cf;
                plVar36 = (longlong *)((longlong)plVar36 + 1);
              } while ((ulonglong)((longlong)plVar36 - (longlong)plVar14) < uVar33);
            }
            if (((local_7ce == '\0') || ((char)local_7d0 != '\0')) || (local_7d8 < *local_7e0)) {
              local_7d0 = CONCAT11(1,(char)local_7d0);
            }
            else {
              *local_7e0 = local_7d8 + 0x10;
              local_7d0 = CONCAT11(local_7d0._1_1_,1);
              cVar6 = FUN_180182cb0(plVar29[4]);
              if (cVar6 != '\0') {
                plVar14 = plVar29 + 5;
                if (0xf < (ulonglong)plVar29[8]) {
                  plVar14 = (longlong *)plVar29[5];
                }
                uVar25 = plVar29[7];
                puVar20 = (undefined8 *)FUN_18019ada0(local_840);
                uVar40 = uVar39 | 0xc;
                puVar18 = puVar20;
                if (0xf < (ulonglong)puVar20[3]) {
                  puVar18 = (undefined8 *)*puVar20;
                }
                uVar33 = puVar20[2];
                if (1 < uVar33) {
                  bVar2 = *(byte *)((uVar33 - 2) + (longlong)puVar18);
                  bVar43 = bVar2 < 0x5f;
                  if ((bVar2 == 0x5f) &&
                     (bVar2 = *(byte *)((uVar33 - 1) + (longlong)puVar18), bVar43 = bVar2 < 99,
                     bVar2 == 99)) {
                    uVar39 = 0;
                  }
                  else {
                    uVar39 = -(uint)bVar43 | 1;
                  }
                  if (uVar39 == 0) {
                    uVar33 = uVar33 - 2;
                  }
                }
                if (1 < uVar25) {
                  bVar2 = *(byte *)((longlong)plVar14 + (uVar25 - 2));
                  bVar43 = bVar2 < 0x5f;
                  if ((bVar2 == 0x5f) &&
                     (bVar2 = *(byte *)((longlong)plVar14 + (uVar25 - 1)), bVar43 = bVar2 < 99,
                     bVar2 == 99)) {
                    uVar39 = 0;
                  }
                  else {
                    uVar39 = -(uint)bVar43 | 1;
                  }
                  if (uVar39 == 0) {
                    uVar25 = uVar25 - 2;
                  }
                }
                if (uVar33 != 0) {
                  if (uVar33 == uVar25) {
                    if (uVar33 != 0) {
                      plVar36 = plVar14;
                      do {
                        cVar6 = *(char *)(((longlong)puVar18 - (longlong)plVar14) +
                                         (longlong)plVar36);
                        cVar22 = (char)*plVar36;
                        cVar32 = cVar22 + ' ';
                        if (0x19 < (byte)(cVar22 + 0xbfU)) {
                          cVar32 = cVar22;
                        }
                        cVar22 = cVar6 + ' ';
                        if (0x19 < (byte)(cVar6 + 0xbfU)) {
                          cVar22 = cVar6;
                        }
                        if (cVar22 != cVar32) goto LAB_1801a1914;
                        plVar36 = (longlong *)((longlong)plVar36 + 1);
                      } while ((ulonglong)((longlong)plVar36 - (longlong)plVar14) < uVar33);
                    }
                    goto LAB_1801a18cf;
                  }
                }
              }
            }
LAB_1801a1914:
            uVar39 = uVar40;
            bVar43 = true;
          }
          else {
LAB_1801a18cf:
            bVar43 = false;
            uVar39 = uVar40;
          }
          if ((uVar39 & 8) != 0) {
            uVar39 = uVar39 & 0xfffffff7;
            FUN_18015c010(local_840);
          }
          if ((uVar39 & 4) != 0) {
            uVar39 = uVar39 & 0xfffffffb;
            FUN_18015c010(&local_8c8);
          }
          plVar36 = DAT_180bbe9a8;
          plVar14 = DAT_180bbe998;
          if (bVar43) {
            DAT_180bb93a9 = '\x01';
            goto LAB_1801a14d0;
          }
          uVar25 = (((((ulonglong)*(byte *)(plVar29 + 2) ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                     (ulonglong)*(byte *)((longlong)plVar29 + 0x11)) * 0x100000001b3 ^
                    (ulonglong)*(byte *)((longlong)plVar29 + 0x12)) * 0x100000001b3 ^
                   (ulonglong)*(byte *)((longlong)plVar29 + 0x13)) * 0x100000001b3 & DAT_180bbe9c0;
          if ((longlong *)DAT_180bbe9a8[uVar25 * 2 + 1] == plVar29) {
            if ((longlong *)DAT_180bbe9a8[uVar25 * 2] == plVar29) {
              DAT_180bbe9a8[uVar25 * 2] = (longlong)DAT_180bbe998;
              plVar36[uVar25 * 2 + 1] = (longlong)plVar14;
            }
            else {
              DAT_180bbe9a8[uVar25 * 2 + 1] = plVar29[1];
            }
          }
          else if ((longlong *)DAT_180bbe9a8[uVar25 * 2] == plVar29) {
            DAT_180bbe9a8[uVar25 * 2] = *plVar29;
          }
          lVar16 = *plVar29;
          DAT_180bbe9a0 = DAT_180bbe9a0 + -1;
          *(longlong *)plVar29[1] = lVar16;
          *(longlong *)(lVar16 + 8) = plVar29[1];
          FUN_18015c010(plVar29 + 9);
          FUN_18015c010(plVar29 + 5);
          FUN_1804547d0(plVar29);
          auVar30 = local_7c8;
          puVar38 = puStack_7c0;
        }
      }
LAB_1801a14e8:
      uVar15 = uVar15 + 1;
    } while (uVar15 < (ulonglong)((longlong)puVar38 - (longlong)auVar30 >> 4));
  }
  if (auVar30 != (undefined1  [8])puVar38) {
    DAT_180bbe9f8 = (DAT_180bbe9f8 + 1) % (ulonglong)((longlong)puVar38 - (longlong)auVar30 >> 4);
  }
  local_7a8 = local_758;
  local_758 = (undefined1  [16])0x0;
  FUN_1801aa600();
  UVar12 = local_8e0;
  if ((undefined1 (*) [16])local_908 != local_8d8) {
    lVar16 = ((longlong)local_8d8 - local_908) / 6 + ((longlong)local_8d8 - local_908 >> 0x3f);
    DAT_180bbe9e8 = (DAT_180bbe9e8 + 1) % (ulonglong)((lVar16 >> 2) - (lVar16 >> 0x3f));
  }
  _DAT_180bbe9f0 = _DAT_180bbe9f0 + 1;
  if (local_7d0._1_1_ != '\0') {
    DAT_180bbe9e0 = local_8e0 + 0x10;
  }
  if (DAT_180bbea28 <= local_8e0) {
    FUN_18063ab10(local_678,0,0x600);
    FUN_18015ad60(local_678,0x600,0xffffffffffffffff,
                  "enabled=%d controllers=%zu profiles=%zu items=%zu bodies=%zu material_rebinds=%llu material_builds=%llu pending_deferrals=%llu native_commit_limit=1 native_calls_thread=game detail=2048"
                 );
    FUN_1800f6900(0);
    DAT_180bbea10 = 0;
    DAT_180bbea18 = 0;
    DAT_180bbea20 = 0;
    DAT_180bbea28 = UVar12 + 5000;
  }
  if (local_7c8 != (undefined1  [8])0x0) {
    if ((0xfff < ((longlong)local_7b8 - (longlong)local_7c8 & 0xfffffffffffffff0U)) &&
       (0x1f < ((longlong)local_7c8 - *(longlong *)((longlong)local_7c8 + -8)) - 8U)) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    FUN_1804547d0();
    _local_7c8 = (undefined1  [16])0x0;
    local_7b8 = (undefined1 *)0x0;
  }
  FUN_1801abba0(local_6d8);
  FUN_180182bf0(&local_728);
  FUN_18017e9a0(&local_6b8);
  uVar17 = local_758._8_8_;
  if ((longlong *)local_758._8_8_ != (longlong *)0x0) {
    LOCK();
    plVar14 = (longlong *)(local_758._8_8_ + 8);
    lVar16 = *plVar14;
    *(int *)plVar14 = (int)*plVar14 + -1;
    UNLOCK();
    if ((int)lVar16 == 1) {
      (*(code *)**(undefined8 **)local_758._8_8_)(local_758._8_8_);
      LOCK();
      piVar1 = (int *)(uVar17 + 0xc);
      iVar41 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar41 == 1) {
        (**(code **)(*(longlong *)uVar17 + 8))(uVar17);
      }
    }
  }
LAB_1801a1bc0:
  uVar17 = local_6e8._8_8_;
  if ((longlong *)local_6e8._8_8_ != (longlong *)0x0) {
    LOCK();
    plVar14 = (longlong *)(local_6e8._8_8_ + 8);
    lVar16 = *plVar14;
    *(int *)plVar14 = (int)*plVar14 + -1;
    UNLOCK();
    if ((int)lVar16 == 1) {
      (*(code *)**(undefined8 **)local_6e8._8_8_)(local_6e8._8_8_);
      LOCK();
      piVar1 = (int *)(uVar17 + 0xc);
      iVar41 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar41 == 1) {
        (**(code **)(*(longlong *)uVar17 + 8))(uVar17);
      }
    }
  }
}



