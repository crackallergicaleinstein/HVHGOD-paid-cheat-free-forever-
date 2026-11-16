// FUN_1803f2990 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1803f2990 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1803f2990(int *param_1,longlong *param_2,char param_3)

{
  undefined1 (*pauVar1) [16];
  longlong *plVar2;
  int *piVar3;
  undefined8 uVar4;
  code *pcVar5;
  longlong *plVar6;
  ulonglong *puVar7;
  bool bVar8;
  HWND pHVar9;
  char cVar10;
  byte bVar11;
  int iVar12;
  BOOL BVar13;
  int iVar14;
  uint uVar15;
  ULONGLONG UVar16;
  HWND pHVar17;
  ulonglong uVar18;
  longlong **pplVar19;
  undefined1 (*pauVar20) [16];
  ulonglong uVar21;
  longlong *plVar22;
  undefined1 uVar23;
  int iVar24;
  longlong lVar25;
  ULONGLONG UVar26;
  undefined1 (*pauVar27) [16];
  longlong *plVar28;
  longlong lVar29;
  byte bVar30;
  char *pcVar31;
  longlong *plVar32;
  int *piVar33;
  uint uVar34;
  uint uVar35;
  uint uVar36;
  uint uVar37;
  undefined8 *puVar38;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 in_ZMM6 [64];
  undefined1 auVar43 [64];
  undefined1 auVar44 [64];
  undefined1 in_ZMM7 [64];
  undefined1 auVar45 [64];
  undefined1 in_ZMM8 [64];
  undefined1 auVar46 [64];
  undefined1 in_ZMM9 [64];
  undefined1 auVar47 [64];
  undefined1 in_ZMM10 [64];
  undefined1 auVar48 [64];
  float fVar49;
  undefined1 auStack_a68 [32];
  undefined **local_a48;
  undefined8 local_a40;
  longlong *local_a38;
  uint local_a30;
  int *local_a28;
  double local_a20;
  undefined8 local_a18;
  char *local_a10;
  uint local_a08;
  char local_9f8;
  byte local_9f7;
  byte local_9f6;
  byte local_9f5;
  byte local_9f4;
  uint local_9f0;
  byte local_9ec;
  uint local_9e8;
  byte local_9e4;
  char local_9e3;
  ULONGLONG local_9e0;
  int local_9d8;
  uint local_9d4;
  int local_9d0;
  uint local_9cc;
  int local_9c8;
  char local_9c4;
  longlong *local_9c0;
  undefined1 local_9b8;
  undefined1 local_9b7;
  undefined1 local_9b6;
  int local_9a8;
  int local_9a4;
  int local_9a0;
  longlong *local_998;
  longlong *local_990;
  undefined1 local_988 [16];
  int *local_978;
  undefined1 local_970 [24];
  undefined1 (*local_958) [16];
  undefined1 local_950 [16];
  undefined4 local_940;
  undefined4 uStack_93c;
  longlong *local_938;
  undefined1 (*local_930) [16];
  undefined1 (*local_928) [16];
  longlong local_920;
  longlong lStack_918;
  longlong lStack_910;
  ulonglong uStack_908;
  ulonglong local_900;
  ulonglong uStack_8f8;
  ulonglong local_8f0;
  char *local_8e8;
  undefined8 local_8e0;
  undefined8 local_8d8;
  longlong *local_8d0;
  undefined4 local_8c0;
  undefined4 local_8b4;
  undefined1 local_8b0 [16];
  int local_898;
  undefined4 local_894;
  int local_890;
  undefined1 local_888 [32];
  int local_868;
  int local_864;
  int local_860;
  int local_85c;
  longlong *local_840;
  ulonglong local_838;
  undefined1 local_820 [40];
  undefined1 (*local_7f8) [16];
  byte local_7e4;
  undefined1 local_7c8 [32];
  int local_7a8;
  char local_7a0;
  char local_79f;
  char local_79e;
  char local_79d;
  uint local_790;
  longlong *local_788;
  uint local_780 [2];
  undefined1 local_778 [16];
  byte local_768;
  longlong *local_760;
  undefined1 local_758 [16];
  longlong *local_748;
  int local_740;
  int iStack_73c;
  longlong *plStack_738;
  undefined8 uStack_730;
  ulonglong uStack_728;
  ulonglong local_720;
  undefined4 local_718;
  undefined8 local_710;
  longlong *plStack_708;
  undefined8 uStack_700;
  undefined4 uStack_6f8;
  undefined4 uStack_6f4;
  undefined4 uStack_6f0;
  undefined4 uStack_6ec;
  undefined4 local_6e8;
  undefined8 local_6e0;
  undefined8 uStack_6d8;
  undefined8 uStack_6d0;
  ulonglong uStack_6c8;
  undefined8 local_6c0;
  undefined4 local_6b8;
  int local_6a8 [384];
  ulonglong local_a8;
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  
  local_48 = in_ZMM6._0_16_;
  local_58 = in_ZMM7._0_16_;
  local_68 = in_ZMM8._0_16_;
  local_78 = in_ZMM9._0_16_;
  local_88 = in_ZMM10._0_16_;
  local_a8 = DAT_1808d5f00 ^ (ulonglong)auStack_a68;
  uVar35 = 0;
  local_9f0 = 0;
  local_9e8 = 0;
  local_978 = param_1;
  local_938 = param_2;
  if ((DAT_180cd4310 & 1) == 0) {
    DAT_180cd4310 = DAT_180cd4310 | 1;
    atexit(FUN_1806630b0);
  }
  if ((DAT_180cd4310 & 2) == 0) {
    DAT_180cd4310 = DAT_180cd4310 | 2;
    atexit(FUN_180663080);
  }
  if ((DAT_180cd4310 & 4) == 0) {
    DAT_180cd4310 = DAT_180cd4310 | 4;
    atexit(FUN_180663050);
  }
  UVar16 = GetTickCount64();
  local_9e0 = UVar16;
  FUN_1803f1ee0(&local_898);
  pauVar20 = (undefined1 (*) [16])(param_1 + 0xc);
  local_958 = pauVar20;
  iVar12 = FUN_1805f68d0(pauVar20);
  if (iVar12 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(5);
  }
  if (param_1[0x1f] == 0x7fffffff) {
    param_1[0x1f] = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(6);
  }
  if (param_3 == '\0') {
    param_1[0x38] = 0;
    param_1[0x39] = 0;
  }
  FUN_1803f23c0(&local_898,param_1 + 0x20);
  FUN_1805f68fc(pauVar20);
  pHVar9 = DAT_180c6e520;
  local_9a4 = local_898;
  if (((local_898 == 0) || (local_838 <= UVar16)) || (param_2 == (longlong *)0x0)) {
    uVar21 = (ulonglong)(*param_1 - 4U);
    if ((*param_1 - 4U < 2) &&
       (*(longlong *)(&DAT_180c7c308 + uVar21 * 0x18) !=
        *(longlong *)(&DAT_180c7c310 + uVar21 * 0x18))) {
      *(longlong *)(&DAT_180c7c310 + uVar21 * 0x18) = *(longlong *)(&DAT_180c7c308 + uVar21 * 0x18);
    }
    if ((local_79e == '\0') || (param_2 == (longlong *)0x0)) {
      FUN_1803f2680(param_1);
    }
    local_950 = (undefined1  [16])0x0;
    FUN_1803c9920(param_1 + 0x100,local_950);
    param_1[0x82] = 0;
    param_1[0x83] = 0;
    param_1[0x80] = 0;
    param_1[0x81] = 0;
    param_1[0x7e] = 0;
    param_1[0x7f] = 0;
    param_1[0x7c] = 0;
    param_1[0x7d] = 0;
    goto LAB_1803f4f80;
  }
  if (local_79d != '\0') goto LAB_1803f4f80;
  local_9e3 = local_79e;
  if (((DAT_180c6e520 == (HWND)0x0) || (BVar13 = IsIconic(DAT_180c6e520), BVar13 != 0)) ||
     (pHVar17 = GetForegroundWindow(), pHVar17 != pHVar9)) {
    local_9f4 = 0;
    *(undefined1 *)((longlong)param_1 + 0x251) = 1;
    *(ULONGLONG *)(param_1 + 0x88) = UVar16 + 2000;
  }
  else {
    local_9f4 = 1;
    if (*(char *)((longlong)param_1 + 0x251) != '\0') {
      *(undefined1 *)((longlong)param_1 + 0x251) = 0;
      *(ULONGLONG *)(param_1 + 0x88) = UVar16 + 2000;
      uVar21 = UVar16 + 0x2ee;
      *(ulonglong *)(param_1 + 0x8e) = uVar21;
      local_9f4 = 1;
      if ((local_79e != '\0') && (local_9f4 = 1, *(longlong *)(param_1 + 0x104) != 0)) {
        uVar18 = *(ulonglong *)(param_1 + 0x106);
        if (*(ulonglong *)(param_1 + 0x106) < uVar21) {
          uVar18 = uVar21;
        }
        *(ulonglong *)(param_1 + 0x106) = uVar18;
        local_9f4 = 1;
      }
    }
  }
  UVar26 = *(ULONGLONG *)(param_1 + 0x7c);
  if (*(ULONGLONG *)(param_1 + 0x7c) == 0) {
    *(ULONGLONG *)(param_1 + 0x7c) = UVar16;
    UVar26 = UVar16;
  }
  lVar25 = *(longlong *)(param_1 + 0x7e);
  *(ulonglong *)(param_1 + 0x7e) = lVar25 + 1U;
  local_9f7 = local_7e4;
  if (4999 < UVar16 - UVar26) {
    if ((char)param_1[0x94] == '\0') {
      if ((local_7a0 == '\0') || (pcVar31 = "keyed_CPU_cutout", local_7e4 != 0)) {
        pcVar31 = "native_or_CPU_fallback";
      }
    }
    else {
      pcVar31 = "GPU_cutout_64x64_probe";
    }
    auVar43 = ZEXT864((ulonglong)(double)(UVar16 - UVar26));
    FUN_18063ab10(local_6a8,0,0x600);
    local_a20 = ((double)*(ulonglong *)(param_1 + 0x80) * 1000.0) / auVar43._0_8_;
    local_a28 = (int *)(((double)(lVar25 + 1U) * 1000.0) / auVar43._0_8_);
    local_a08 = (uint)local_9f4;
    local_a18 = *(undefined8 *)(param_1 + 0x82);
    local_a30 = (uint)local_9f7;
    local_a38 = (longlong *)CONCAT44(local_a38._4_4_,local_890);
    local_a40 = (longlong *)CONCAT44(local_a40._4_4_,local_9a4);
    local_a48 = (undefined **)CONCAT44(local_a48._4_4_,*param_1);
    local_a10 = pcVar31;
    FUN_18015ad60(local_6a8,0x600,0xffffffffffffffff,
                  "slot=%u definition=%d kind=%d direct=%d present_fps=%.1f verified_fps=%.1f rejected_frames=%llu capture=%s foreground=%d"
                 );
    local_a48 = &PTR_180700558;
    if ((char)local_6a8[0] != '\0') {
      local_a48 = (undefined **)&DAT_1806bcfc0;
    }
    local_a40 = (longlong *)local_6a8;
    FUN_1800f6900(0);
    *(ULONGLONG *)(param_1 + 0x7c) = local_9e0;
    param_1[0x82] = 0;
    param_1[0x83] = 0;
    param_1[0x80] = 0;
    param_1[0x81] = 0;
    param_1[0x7e] = 0;
    param_1[0x7f] = 0;
  }
  UVar16 = local_9e0;
  lVar25 = DAT_180c6e508;
  local_9c0 = (longlong *)DAT_180c6e510;
  local_760 = (longlong *)0x0;
  if (((DAT_180c6e508 != 0) && (DAT_180c6e510 != 0)) &&
     (iVar12 = (**(code **)(*local_938 + 0x48))(local_938,0), -1 < iVar12)) {
    local_6e0 = 0;
    uStack_6d8 = 0;
    uStack_6d0 = 0;
    uStack_6c8 = 0;
    local_6c0 = 0;
    local_6b8 = 0;
    (**(code **)(*local_760 + 0x50))(local_760,&local_6e0);
    bVar11 = local_9f7;
    local_9e4 = ((int)uStack_6d0 - 0x57U & 0xfffffffb) == 0;
    if (((*param_1 - 4U < 2) && (local_890 == 3)) && ((local_7a8 != 0 && (local_9f7 == 0)))) {
      local_9f6 = 1;
    }
    else {
      local_9f6 = 0;
    }
    if ((local_7a0 == '\0') || (local_9f7 != 0)) {
      local_9f5 = 0;
    }
    else {
      local_9f5 = 1;
    }
    if ((((bool)local_9e4) || ((int)uStack_6d0 - 0x1cU < 2)) && (uStack_6d0._4_4_ == 1)) {
      local_9d8 = local_860;
      local_9a0 = local_868;
      if (local_868 + local_860 <= (int)local_6e0) {
        local_9c8 = local_85c;
        local_9a8 = local_864;
        if (local_864 + local_85c <= local_6e0._4_4_) {
          local_780[0] = local_790;
          if (((local_9f5 == 0) || (local_790 == 0x808080)) ||
             (((int)uStack_6d0 != 0x1c && ((int)uStack_6d0 != 0x57)))) {
            bVar30 = 0;
          }
          else {
            bVar30 = 1;
          }
          uStack_908 = (ulonglong)local_9f7;
          local_900 = (ulonglong)local_9f6;
          uStack_8f8 = (ulonglong)local_9f5;
          local_8f0 = (ulonglong)bVar30;
          local_748 = (longlong *)0x0;
          plVar22 = *(longlong **)(param_1 + 0xb6);
          local_920 = (longlong)local_860;
          lStack_918 = (longlong)local_85c;
          lStack_910 = (longlong)(int)uStack_6d0;
          if (plVar22 != (longlong *)0x0) {
            (**(code **)(*plVar22 + 0x18))(plVar22,&local_748);
          }
          iVar12 = memcmp(param_1 + 0x96,&local_920,0x38);
          local_990 = local_840;
          if (iVar12 == 0) {
            if (local_748 != (longlong *)lVar25) goto LAB_1803f2fca;
          }
          else {
LAB_1803f2fca:
            if (local_9e3 == '\0') {
              pplVar19 = (longlong **)&local_940;
              uVar35 = 2;
              plVar22 = (longlong *)0x0;
            }
            else {
              plVar22 = *(longlong **)(param_1 + 0x104);
              local_998 = plVar22;
              if (plVar22 != (longlong *)0x0) {
                (**(code **)(*plVar22 + 8))(plVar22);
              }
              pplVar19 = &local_998;
              uVar35 = 1;
            }
            local_988._0_8_ = plVar22;
            *pplVar19 = (longlong *)0x0;
            local_9f0 = uVar35;
            local_9e8 = uVar35;
            if ((uVar35 & 2) != 0) {
              uVar35 = uVar35 & 0xfffffffd;
              local_9f0 = uVar35;
              local_9e8 = uVar35;
              if ((longlong *)CONCAT44(uStack_93c,local_940) != (longlong *)0x0) {
                (**(code **)(*(longlong *)CONCAT44(uStack_93c,local_940) + 0x10))();
              }
            }
            if ((uVar35 & 1) != 0) {
              uVar35 = uVar35 & 0xfffffffe;
              local_9f0 = uVar35;
              local_9e8 = uVar35;
              if (local_998 != (longlong *)0x0) {
                (**(code **)(*local_998 + 0x10))();
              }
            }
            uVar4 = *(undefined8 *)(param_1 + 0x106);
            auVar43 = ZEXT1664(*(undefined1 (*) [16])(param_1 + 0x108));
            iVar12 = param_1[0x10c];
            FUN_1803f2680(param_1);
            auVar39 = auVar43._0_16_;
            auVar42._8_8_ = 0;
            auVar42._0_8_ = local_988._8_8_;
            local_988 = auVar42 << 0x40;
            plVar28 = *(longlong **)(param_1 + 0x104);
            *(longlong **)(param_1 + 0x104) = plVar22;
            if (plVar28 != (longlong *)0x0) {
              (**(code **)(*plVar28 + 0x10))();
              auVar39 = auVar43._0_16_;
            }
            *(undefined8 *)(param_1 + 0x106) = uVar4;
            *(undefined1 (*) [16])(param_1 + 0x108) = auVar39;
            param_1[0x10c] = iVar12;
            *(longlong **)(param_1 + 0x68) = local_990;
            if (bVar30 != 0) {
              if (DAT_180c7df28 == (undefined8 *)0x0) {
                local_758._8_8_ = 0x15;
                local_758._0_8_ = "tier0.dll:g_pMemAlloc";
                DAT_180c7df28 = (undefined8 *)FUN_180451750(local_758);
              }
              pauVar20 = (undefined1 (*) [16])
                         (**(code **)(*(longlong *)*DAT_180c7df28 + 8))
                                   ((longlong *)*DAT_180c7df28,0xd0);
              local_958 = pauVar20;
              if (pauVar20 == (undefined1 (*) [16])0x0) {
                pauVar20 = (undefined1 (*) [16])0x0;
              }
              else {
                *pauVar20 = (undefined1  [16])0x0;
                *(undefined4 *)(*pauVar20 + 8) = 1;
                *(undefined4 *)(*pauVar20 + 0xc) = 1;
                *(undefined ***)*pauVar20 =
                     std::_Ref_count_obj2<rendering::skin_preview_gpu>::vftable;
                FUN_18063ab10(pauVar20 + 1,0,0xc0);
                FUN_1803f9e50(pauVar20 + 1);
              }
              uVar35 = uVar35 | 0x40;
              pauVar1 = pauVar20 + 1;
              local_758._8_8_ = pauVar20;
              local_758._0_8_ = pauVar1;
              local_9f0 = uVar35;
              local_9e8 = uVar35;
              cVar10 = FUN_1803e9120(pauVar1,lVar25,local_9c0);
              pauVar27 = pauVar20;
              if (cVar10 != '\0') {
                pauVar27 = (undefined1 (*) [16])0x0;
                *(undefined1 (**) [16])(param_1 + 0x90) = pauVar1;
                plVar22 = *(longlong **)(param_1 + 0x92);
                *(undefined1 (**) [16])(param_1 + 0x92) = pauVar20;
                if (plVar22 != (longlong *)0x0) {
                  LOCK();
                  plVar28 = plVar22 + 1;
                  lVar29 = *plVar28;
                  *(int *)plVar28 = (int)*plVar28 + -1;
                  UNLOCK();
                  if ((int)lVar29 == 1) {
                    (**(code **)*plVar22)(plVar22);
                    LOCK();
                    piVar33 = (int *)((longlong)plVar22 + 0xc);
                    iVar12 = *piVar33;
                    *piVar33 = *piVar33 + -1;
                    UNLOCK();
                    if (iVar12 == 1) {
                      (**(code **)(*plVar22 + 8))(plVar22);
                    }
                  }
                }
                *(undefined1 *)(param_1 + 0x94) = 1;
              }
              if (pauVar27 != (undefined1 (*) [16])0x0) {
                LOCK();
                piVar33 = (int *)(*pauVar27 + 8);
                iVar12 = *piVar33;
                *piVar33 = *piVar33 + -1;
                UNLOCK();
                if (iVar12 == 1) {
                  (*(code *)**(undefined8 **)*pauVar27)(pauVar27);
                  LOCK();
                  piVar33 = (int *)(*pauVar27 + 0xc);
                  iVar12 = *piVar33;
                  *piVar33 = *piVar33 + -1;
                  UNLOCK();
                  if (iVar12 == 1) {
                    (**(code **)(*(longlong *)*pauVar27 + 8))(pauVar27);
                  }
                }
              }
            }
            uStack_730 = uStack_6d0;
            _local_740 = CONCAT44(local_9c8 + -4,local_9d8);
            plStack_738 = (longlong *)&DAT_100000001;
            uStack_728 = uStack_6c8 & 0xffffffff;
            uVar34 = 8;
            if ((char)param_1[0x94] != '\0') {
              uVar34 = 0x28;
            }
            local_718 = 0;
            local_720 = (ulonglong)uVar34;
            if (local_9f7 == 0) {
              pcVar5 = *(code **)(*(longlong *)lVar25 + 0x28);
              plVar22 = *(longlong **)(param_1 + 0xb0);
              if (plVar22 != (longlong *)0x0) {
                param_1[0xb0] = 0;
                param_1[0xb1] = 0;
                (**(code **)(*plVar22 + 0x10))();
              }
              iVar12 = (*pcVar5)(lVar25,&local_740,0,param_1 + 0xb0);
              if (-1 < iVar12) {
                pcVar5 = *(code **)(*(longlong *)lVar25 + 0x38);
                plVar22 = *(longlong **)(param_1 + 0xb2);
                if (plVar22 != (longlong *)0x0) {
                  param_1[0xb2] = 0;
                  param_1[0xb3] = 0;
                  (**(code **)(*plVar22 + 0x10))();
                }
                iVar12 = (*pcVar5)(lVar25,*(undefined8 *)(param_1 + 0xb0),0,param_1 + 0xb2);
                if (-1 < iVar12) goto LAB_1803f33bf;
              }
LAB_1803f371b:
LAB_1803f371e:
              FUN_1803f2680(param_1);
              goto LAB_1803f4e9f;
            }
LAB_1803f33bf:
            plStack_708 = plStack_738;
            uStack_700 = uStack_730;
            uStack_6f8 = (undefined4)uStack_728;
            local_710 = 0x400000008;
            uStack_6f4 = 3;
            uStack_6f0 = 0;
            uStack_6ec = 0x20000;
            if ((local_9f6 != 0) || (local_9f5 != 0)) {
              local_710 = CONCAT44(local_9c8,local_9d8);
            }
            if ((char)param_1[0x94] != '\0') {
              local_710 = 0x4400000040;
            }
            local_788 = (longlong *)0x0;
            local_6e8 = local_718;
            if (param_1 + 0xb4 != param_1 + 0xea) {
              plVar22 = (longlong *)(param_1 + 0xb6);
              do {
                if (local_9f7 == 0) {
                  pcVar5 = *(code **)(*(longlong *)lVar25 + 0x28);
                  plVar28 = (longlong *)plVar22[-1];
                  if (plVar28 != (longlong *)0x0) {
                    plVar22[-1] = 0;
                    (**(code **)(*plVar28 + 0x10))();
                  }
                  iVar12 = (*pcVar5)(lVar25,&local_740,0,plVar22 + -1);
                  if (-1 < iVar12) {
                    pcVar5 = *(code **)(*(longlong *)lVar25 + 0x38);
                    plVar28 = (longlong *)plVar22[1];
                    if (plVar28 != (longlong *)0x0) {
                      plVar22[1] = 0;
                      (**(code **)(*plVar28 + 0x10))();
                    }
                    iVar12 = (*pcVar5)(lVar25,plVar22[-1],0,plVar22 + 1);
                    if (-1 < iVar12) goto LAB_1803f350a;
                  }
LAB_1803f3715:
                  param_1 = local_978;
                  goto LAB_1803f371e;
                }
LAB_1803f350a:
                pcVar5 = *(code **)(*(longlong *)lVar25 + 0x28);
                plVar28 = (longlong *)*plVar22;
                if (plVar28 != (longlong *)0x0) {
                  *plVar22 = 0;
                  (**(code **)(*plVar28 + 0x10))();
                }
                iVar12 = (*pcVar5)(lVar25,&local_710,0,plVar22);
                if (iVar12 < 0) goto LAB_1803f3715;
                pcVar5 = *(code **)(*(longlong *)lVar25 + 0xc0);
                plVar28 = (longlong *)plVar22[3];
                if (plVar28 != (longlong *)0x0) {
                  plVar22[3] = 0;
                  (**(code **)(*plVar28 + 0x10))();
                }
                iVar12 = (*pcVar5)(lVar25,&local_788);
                if (iVar12 < 0) goto LAB_1803f3715;
                plVar28 = plVar22 + 8;
                plVar22 = plVar22 + 9;
              } while (plVar28 != (longlong *)(param_1 + 0xea));
            }
            param_1 = local_978;
            if (((char)local_978[0x94] != '\0') &&
               (plVar22 = (longlong *)(local_978 + 0xea), (longlong *)(local_978 + 0xb4) != plVar22)
               ) {
              plVar28 = (longlong *)(local_978 + 0xba);
              do {
                pcVar5 = *(code **)(*(longlong *)lVar25 + 0x48);
                plVar32 = (longlong *)*plVar28;
                if (plVar32 != (longlong *)0x0) {
                  *plVar28 = 0;
                  (**(code **)(*plVar32 + 0x10))();
                }
                iVar12 = (*pcVar5)(lVar25,plVar28[-3],0,plVar28);
                if (iVar12 < 0) goto LAB_1803f371b;
                plVar32 = plVar28 + 6;
                plVar28 = plVar28 + 9;
              } while (plVar32 != plVar22);
            }
            *(longlong *)(param_1 + 0x96) = local_920;
            *(longlong *)(param_1 + 0x98) = lStack_918;
            *(longlong *)(param_1 + 0x9a) = lStack_910;
            *(ulonglong *)(param_1 + 0x9c) = uStack_908;
            *(ulonglong *)(param_1 + 0x9e) = local_900;
            *(ulonglong *)(param_1 + 0xa0) = uStack_8f8;
            *(ulonglong *)(param_1 + 0xa2) = local_8f0;
            param_1[0x6c] = 0;
            param_1[0x6d] = 0;
            *(ULONGLONG *)(param_1 + 0x88) = local_9e0 + 2000;
            UVar16 = local_9e0;
            bVar11 = local_9f7;
          }
          if (*(longlong **)(param_1 + 0x68) != local_990) {
            *(longlong **)(param_1 + 0x68) = local_990;
            param_1[0x6a] = 0;
            param_1[0x6b] = 0;
            param_1[0x6c] = 0;
            param_1[0x6d] = 0;
            *(ULONGLONG *)(param_1 + 0x88) = UVar16 + 2000;
          }
          local_9f8 = '\0';
          local_998 = (longlong *)(param_1 + 0xb4);
          plVar22 = (longlong *)(param_1 + 0xea);
          local_788 = plVar22;
          if (local_998 != plVar22) {
            local_9c4 = local_79f;
            local_958 = local_7f8;
            local_940 = local_894;
            auVar43 = ZEXT464(0x3c800000);
            do {
              plVar32 = local_998;
              plVar28 = local_9c0;
              if ((char)local_998[8] != '\0') {
                local_a48 = (undefined **)CONCAT44(local_a48._4_4_,1);
                auVar43 = ZEXT1664(auVar43._0_16_);
                iVar12 = (**(code **)(*local_9c0 + 0xe8))(local_9c0,local_998[4],0,0);
                if (iVar12 == 0) {
                  if ((longlong *)plVar32[5] != local_990) {
                    *(undefined1 *)(plVar32 + 8) = 0;
                    goto LAB_1803f42ad;
                  }
                  local_8b0 = (undefined1  [16])0x0;
                  local_a40 = (longlong *)local_8b0;
                  local_a48 = (undefined **)CONCAT44(local_a48._4_4_,0x100000);
                  iVar14 = (**(code **)(*plVar28 + 0x70))(plVar28,plVar32[1]);
                  iVar12 = local_9a0;
                  if (iVar14 < 0) goto LAB_1803f42ad;
                  lVar25 = (ulonglong)(uint)(local_8b0._8_4_ * 2) + local_8b0._0_8_;
                  uVar34 = (int)local_990 * -0x61c8864f;
                  if ((longlong *)plVar32[5] == local_990) {
                    iVar24 = (uint)*(byte *)(lVar25 + 8 + (ulonglong)local_9e4 * 2) -
                             (uVar34 & 0xff);
                    iVar14 = -iVar24;
                    if (iVar14 < 0) {
                      iVar14 = iVar24;
                    }
                    if (3 < iVar14) goto LAB_1803f39a3;
                    iVar24 = (uint)*(byte *)(lVar25 + 9) - (uVar34 >> 8 & 0xff);
                    iVar14 = -iVar24;
                    if (iVar14 < 0) {
                      iVar14 = iVar24;
                    }
                    if (3 < iVar14) goto LAB_1803f39a3;
                    uVar21 = (ulonglong)local_9e4 ^ 1;
                    iVar24 = (uint)*(byte *)(lVar25 + 8 + uVar21 * 2) - (uVar34 >> 0x10 & 0xff);
                    iVar14 = -iVar24;
                    if (iVar14 < 0) {
                      iVar14 = iVar24;
                    }
                    if (3 < iVar14) goto LAB_1803f39a3;
                    iVar24 = *(byte *)(lVar25 + 0x18 + (ulonglong)local_9e4 * 2) - 0x2f;
                    iVar14 = -iVar24;
                    if (iVar14 < 0) {
                      iVar14 = iVar24;
                    }
                    if (3 < iVar14) goto LAB_1803f39a3;
                    iVar24 = (uint)*(byte *)(lVar25 + 0x19) - (uVar34 >> 0x18);
                    iVar14 = -iVar24;
                    if (iVar14 < 0) {
                      iVar14 = iVar24;
                    }
                    if (3 < iVar14) goto LAB_1803f39a3;
                    iVar24 = *(byte *)(lVar25 + 0x18 + uVar21 * 2) - 0x89;
                    iVar14 = -iVar24;
                    if (iVar14 < 0) {
                      iVar14 = iVar24;
                    }
                    if (3 < iVar14) goto LAB_1803f39a3;
                    local_9ec = 1;
                    if ((local_9c4 != '\0') && (bVar11 == 0)) {
                      iVar14 = local_9a8 + 4;
                      uVar34 = local_9d8 + local_9a0;
                      plVar32 = (longlong *)(ulonglong)uVar34;
                      iVar24 = local_9c8 + local_9a8;
                      if (DAT_180c7df28 == (undefined8 *)0x0) {
                        local_8e8 = "tier0.dll:g_pMemAlloc";
                        local_8e0 = 0x15;
                        DAT_180c7df28 = (undefined8 *)FUN_180451750(&local_8e8);
                      }
                      local_928 = (undefined1 (*) [16])
                                  (**(code **)(*(longlong *)*DAT_180c7df28 + 8))
                                            ((longlong *)*DAT_180c7df28,0x28);
                      local_970._0_8_ = local_928;
                      if (local_928 == (undefined1 (*) [16])0x0) {
                        local_928 = (undefined1 (*) [16])0x0;
                      }
                      else {
                        *local_928 = (undefined1  [16])0x0;
                        *(undefined4 *)(*local_928 + 8) = 1;
                        *(undefined4 *)(*local_928 + 0xc) = 1;
                        *(undefined ***)*local_928 =
                             std::_Ref_count_obj2<rendering::skin_preview::zoom_region_const_>::
                             vftable;
                        *(int *)local_928[1] = iVar12;
                        *(int *)(local_928[1] + 4) = iVar14;
                        *(uint *)(local_928[1] + 8) = uVar34;
                        *(int *)(local_928[1] + 0xc) = iVar24;
                        *(ULONGLONG *)local_928[2] = local_9e0 + 200;
                      }
                      local_9f0 = uVar35 | 0x80;
                      local_930 = local_928 + 1;
                      local_9e8 = local_9f0;
                      FUN_1803c9920(param_1 + 0x100,&local_930);
                    }
                  }
                  else {
LAB_1803f39a3:
                    local_9ec = 0;
                  }
                  bVar30 = local_9f6;
                  lVar25 = (ulonglong)(uint)(local_8b0._8_4_ * 4) + local_8b0._0_8_;
                  local_970._0_8_ = lVar25;
                  uVar21 = (ulonglong)plVar32 & 0xffffffffffffff00;
                  local_9cc = (uint)uVar21;
                  local_768 = 0;
                  bVar11 = local_9ec;
                  if (local_9ec == 0) {
LAB_1803f3d91:
                    uVar21 = 0;
                    auVar44 = ZEXT1664(local_778);
                    auVar48 = ZEXT464((uint)local_778._0_4_);
                    auVar47 = ZEXT464((uint)local_778._4_4_);
                    auVar46 = ZEXT464((uint)local_778._8_4_);
                    auVar45 = ZEXT464((uint)local_778._12_4_);
                  }
                  else {
                    if ((char)param_1[0x94] == '\0') {
LAB_1803f3d4a:
                      auVar44 = ZEXT1664(local_778);
LAB_1803f3d52:
                      iVar12 = local_9d8;
                      if (local_9f5 != 0) {
                        if ((char)param_1[0x94] == '\0') {
                          local_9b6 = (undefined1)local_780[0];
                          uVar23 = (undefined1)(local_780[0] >> 0x10);
                          local_9b8 = uVar23;
                          if (local_9e4 != 0) {
                            local_9b8 = local_9b6;
                            local_9b6 = uVar23;
                          }
                          local_9b7 = (undefined1)(local_780[0] >> 8);
                          local_a40 = (longlong *)(param_1 + 0xf0);
                          local_a38 = (longlong *)&local_9b8;
                          local_a48 = (undefined **)(param_1 + 0xea);
                          bVar11 = FUN_1803e7c80(lVar25,local_9d8);
                          if (bVar11 == 0) {
                            uVar21 = (ulonglong)local_9cc;
                            goto LAB_1803f4064;
                          }
                          if (bVar30 == 0) {
                            auVar39 = auVar44._0_16_;
                            auVar42 = vshufps_avx(auVar39,auVar39,0xff);
                            auVar45 = ZEXT1664(auVar42);
                            auVar42 = vshufps_avx(auVar39,auVar39,0xaa);
                            auVar46 = ZEXT1664(auVar42);
                            auVar42 = vshufps_avx(auVar39,auVar39,0x55);
                            auVar47 = ZEXT1664(auVar42);
                            auVar48 = ZEXT1664(auVar39);
                            uVar21 = (ulonglong)local_9cc;
                            goto LAB_1803f3db9;
                          }
                          local_a48 = (undefined **)CONCAT44(local_a48._4_4_,iVar12 * 4);
                          pauVar20 = (undefined1 (*) [16])
                                     FUN_1803eaee0(local_970,*(undefined **)(param_1 + 0xea));
                          local_778 = *pauVar20;
                          auVar44 = ZEXT1664(local_778);
                          bVar11 = pauVar20[1][0];
                          uVar21 = (ulonglong)bVar11;
                          local_9cc = (uint)bVar11;
                        }
                        if (bVar11 == 0) goto LAB_1803f4064;
                      }
                      iVar12 = local_9d8;
                      if ((bVar30 != 0) && (local_9f5 == 0)) {
                        iVar14 = local_9c8 + -4;
                        local_a38 = (longlong *)(&DAT_180c7c340 + (ulonglong)(*param_1 - 4U) * 0x30)
                        ;
                        local_a40 = (longlong *)(&DAT_180c7c308 + (ulonglong)(*param_1 - 4U) * 0x18)
                        ;
                        local_a48 = (undefined **)CONCAT44(local_a48._4_4_,local_8b0._8_4_);
                        FUN_1803ea320(local_778,lVar25);
                        bVar11 = local_768;
                        if (local_768 != 0) {
                          auVar41._0_4_ = (float)(int)local_778._0_4_ / (float)iVar12;
                          auVar41._4_8_ = SUB128(ZEXT812(0),4);
                          auVar41._12_4_ = 0;
                          auVar42 = ZEXT416((uint)((float)(int)local_778._4_4_ / (float)iVar14));
                          auVar39._0_4_ = (float)(int)local_778._8_4_ / (float)iVar12;
                          auVar39._4_12_ = SUB1612(ZEXT816(0),4);
                          auVar40 = ZEXT416((uint)((float)(int)local_778._12_4_ / (float)iVar14));
                          auVar48 = ZEXT1664(auVar41);
                          auVar47 = ZEXT1664(auVar42);
                          auVar46 = ZEXT1664(auVar39);
                          auVar45 = ZEXT1664(auVar40);
                          auVar42 = vinsertps_avx(auVar41,auVar42,0x10);
                          auVar42 = vinsertps_avx(auVar42,auVar39,0x20);
                          local_778 = vinsertps_avx(auVar42,auVar40,0x30);
                          auVar44 = ZEXT1664(local_778);
                          if ((char)uVar21 == '\0') {
                            uVar21 = CONCAT71((int7)(uVar21 >> 8),1);
                            local_9cc = (uint)uVar21;
                          }
                          goto LAB_1803f3db9;
                        }
                      }
                    }
                    else {
                      if (local_9f6 == 0) {
                        local_9d0 = 0;
                        iVar12 = 0;
                        uVar34 = 0x40;
                        uVar36 = 0x40;
                        local_9d4 = 0;
                        uVar37 = 0;
                        uVar35 = 0;
                        while( true ) {
                          uVar15 = 0;
                          do {
                            uVar21 = (ulonglong)(uVar15 * 4 + 3 + (uVar37 + 4) * local_8b0._8_4_);
                            iVar12 = iVar12 + (uint)(*(byte *)(uVar21 + local_8b0._0_8_) < 9);
                            if (0xf < *(byte *)(uVar21 + local_8b0._0_8_)) {
                              local_9d0 = local_9d0 + 1;
                              if (uVar15 < uVar34) {
                                uVar34 = uVar15;
                              }
                              if (uVar37 < uVar36) {
                                uVar36 = uVar37;
                              }
                              if (uVar35 < uVar15 + 1) {
                                uVar35 = uVar15 + 1;
                              }
                              if (local_9d4 < uVar37 + 1) {
                                local_9d4 = uVar37 + 1;
                              }
                            }
                            uVar15 = uVar15 + 1;
                          } while (uVar15 < 0x40);
                          uVar15 = 0;
                          do {
                            bVar11 = *(byte *)((ulonglong)
                                               (uVar15 * 4 + 3 + (uVar37 + 5) * local_8b0._8_4_) +
                                              local_8b0._0_8_);
                            iVar12 = iVar12 + (uint)(bVar11 < 9);
                            if (0xf < bVar11) {
                              local_9d0 = local_9d0 + 1;
                              if (uVar15 < uVar34) {
                                uVar34 = uVar15;
                              }
                              if (uVar37 + 1 < uVar36) {
                                uVar36 = uVar37 + 1;
                              }
                              if (uVar35 < uVar15 + 1) {
                                uVar35 = uVar15 + 1;
                              }
                              if (local_9d4 < uVar37 + 2) {
                                local_9d4 = uVar37 + 2;
                              }
                            }
                            uVar15 = uVar15 + 1;
                          } while (uVar15 < 0x40);
                          uVar15 = 0;
                          do {
                            bVar11 = *(byte *)((ulonglong)
                                               (uVar15 * 4 + 3 + (uVar37 + 6) * local_8b0._8_4_) +
                                              local_8b0._0_8_);
                            iVar12 = iVar12 + (uint)(bVar11 < 9);
                            if (0xf < bVar11) {
                              local_9d0 = local_9d0 + 1;
                              if (uVar15 < uVar34) {
                                uVar34 = uVar15;
                              }
                              if (uVar37 + 2 < uVar36) {
                                uVar36 = uVar37 + 2;
                              }
                              if (uVar35 < uVar15 + 1) {
                                uVar35 = uVar15 + 1;
                              }
                              if (local_9d4 < uVar37 + 3) {
                                local_9d4 = uVar37 + 3;
                              }
                            }
                            uVar15 = uVar15 + 1;
                          } while (uVar15 < 0x40);
                          local_988._0_4_ = uVar35;
                          uVar35 = 0;
                          do {
                            bVar11 = *(byte *)((ulonglong)
                                               (uVar35 * 4 + 3 + (uVar37 + 7) * local_8b0._8_4_) +
                                              local_8b0._0_8_);
                            iVar12 = iVar12 + (uint)(bVar11 < 9);
                            uVar15 = local_988._0_4_;
                            if (0xf < bVar11) {
                              local_9d0 = local_9d0 + 1;
                              if (uVar35 < uVar34) {
                                uVar34 = uVar35;
                              }
                              if (uVar37 + 3 < uVar36) {
                                uVar36 = uVar37 + 3;
                              }
                              if ((uint)local_988._0_4_ < uVar35 + 1) {
                                uVar15 = uVar35 + 1;
                              }
                              local_988._0_4_ = uVar15;
                              if (local_9d4 < uVar37 + 4) {
                                local_9d4 = uVar37 + 4;
                              }
                            }
                            uVar35 = uVar35 + 1;
                          } while (uVar35 < 0x40);
                          uVar37 = uVar37 + 4;
                          if (0x3f < uVar37) break;
                          uVar35 = local_988._0_4_;
                        }
                        if ((iVar12 == 0) || (local_9d0 == 0)) {
                          bVar11 = 0;
                          goto LAB_1803f3d91;
                        }
                        bVar11 = 1;
                        fVar49 = auVar43._0_4_;
                        local_978[0xfc] = (int)((float)uVar34 * fVar49);
                        local_978[0xfd] = (int)((float)uVar36 * fVar49);
                        local_978[0xfe] = (int)((float)uVar15 * fVar49);
                        local_978[0xff] = (int)((float)local_9d4 * fVar49);
                        uVar21 = 0;
                        local_9cc = 0;
                        param_1 = local_978;
                        goto LAB_1803f3d4a;
                      }
                      local_a48 = (undefined **)CONCAT44(local_a48._4_4_,local_8b0._8_4_);
                      pauVar20 = (undefined1 (*) [16])FUN_1803eaee0(local_970,lVar25);
                      local_778 = *pauVar20;
                      auVar44 = ZEXT1664(local_778);
                      local_9cc = *(uint *)pauVar20[1];
                      uVar21 = (ulonglong)local_9cc;
                      bVar11 = (byte)local_9cc;
                      if (bVar11 != 0) goto LAB_1803f3d52;
                    }
LAB_1803f4064:
                    auVar39 = auVar44._0_16_;
                    auVar42 = vshufps_avx(auVar39,auVar39,0xff);
                    auVar45 = ZEXT1664(auVar42);
                    auVar42 = vshufps_avx(auVar39,auVar39,0xaa);
                    auVar46 = ZEXT1664(auVar42);
                    auVar42 = vshufps_avx(auVar39,auVar39,0x55);
                    auVar47 = ZEXT1664(auVar42);
                    auVar48 = ZEXT1664(auVar39);
                  }
LAB_1803f3db9:
                  param_1 = local_978;
                  local_988 = (undefined1  [16])0x0;
                  if ((bVar11 == 0) || ((char)uVar21 == '\0')) {
                    local_988._8_8_ = (longlong *)0x0;
                    local_988._0_8_ = (longlong *)0x0;
                    UVar16 = local_9e0;
                    plVar22 = (longlong *)local_988._8_8_;
                    plVar28 = (longlong *)local_988._0_8_;
                    uVar35 = local_9f0;
                  }
                  else {
                    lVar25 = (longlong)local_998 + (-0x2d0 - (longlong)local_978);
                    lVar25 = lVar25 / 0x12 + (lVar25 >> 0x3f);
                    lVar25 = ((lVar25 >> 2) - (lVar25 >> 0x3f)) + (ulonglong)(*local_978 - 4) * 3;
                    if (*(longlong *)(&DAT_180c7c3a8 + lVar25 * 0x10) != 0) {
                      LOCK();
                      piVar33 = (int *)(*(longlong *)(&DAT_180c7c3a8 + lVar25 * 0x10) + 8);
                      *piVar33 = *piVar33 + 1;
                      UNLOCK();
                    }
                    local_970._0_8_ = *(undefined8 *)(&DAT_180c7c3a0 + lVar25 * 0x10);
                    plVar32 = *(longlong **)(&DAT_180c7c3a8 + lVar25 * 0x10);
                    local_970._8_8_ = plVar32;
                    if ((local_970._0_8_ == 0) ||
                       (*(longlong *)(local_970._0_8_ + 8) != local_998[7])) {
                      pauVar20 = (undefined1 (*) [16])FUN_1803f74d0();
                      uVar35 = local_9f0 | 8;
                    }
                    else {
                      pauVar20 = (undefined1 (*) [16])FUN_1803f8b70();
                      uVar35 = local_9f0 | 4;
                    }
                    plVar6 = plStack_708;
                    plVar28 = *(longlong **)*pauVar20;
                    plVar22 = *(longlong **)(*pauVar20 + 8);
                    local_988 = *pauVar20;
                    *(undefined8 *)*pauVar20 = 0;
                    *(undefined8 *)(*pauVar20 + 8) = 0;
                    local_9f0 = uVar35;
                    local_9e8 = uVar35;
                    if ((uVar35 & 8) != 0) {
                      uVar35 = uVar35 & 0xfffffff7;
                      local_9f0 = uVar35;
                      local_9e8 = uVar35;
                      if (plStack_708 != (longlong *)0x0) {
                        LOCK();
                        plVar2 = plStack_708 + 1;
                        lVar25 = *plVar2;
                        *(int *)plVar2 = (int)*plVar2 + -1;
                        UNLOCK();
                        if ((int)lVar25 == 1) {
                          (**(code **)*plStack_708)(plStack_708);
                          LOCK();
                          piVar33 = (int *)((longlong)plVar6 + 0xc);
                          iVar12 = *piVar33;
                          *piVar33 = *piVar33 + -1;
                          UNLOCK();
                          if (iVar12 == 1) {
                            (**(code **)(*plVar6 + 8))(plVar6);
                          }
                        }
                      }
                    }
                    plVar6 = plStack_738;
                    auVar39 = auVar46._0_16_;
                    auVar42 = auVar45._0_16_;
                    auVar41 = auVar48._0_16_;
                    auVar40 = auVar47._0_16_;
                    if ((uVar35 & 4) != 0) {
                      uVar35 = uVar35 & 0xfffffffb;
                      local_9f0 = uVar35;
                      local_9e8 = uVar35;
                      if (plStack_738 != (longlong *)0x0) {
                        LOCK();
                        plVar2 = plStack_738 + 1;
                        lVar25 = *plVar2;
                        *(int *)plVar2 = (int)*plVar2 + -1;
                        UNLOCK();
                        if ((int)lVar25 == 1) {
                          (**(code **)*plStack_738)(plStack_738);
                          auVar39 = auVar46._0_16_;
                          auVar42 = auVar45._0_16_;
                          auVar41 = auVar48._0_16_;
                          auVar40 = auVar47._0_16_;
                          LOCK();
                          piVar33 = (int *)((longlong)plVar6 + 0xc);
                          iVar12 = *piVar33;
                          *piVar33 = *piVar33 + -1;
                          UNLOCK();
                          if (iVar12 == 1) {
                            (**(code **)(*plVar6 + 8))(plVar6);
                            auVar39 = auVar46._0_16_;
                            auVar42 = auVar45._0_16_;
                            auVar41 = auVar48._0_16_;
                            auVar40 = auVar47._0_16_;
                          }
                        }
                      }
                    }
                    UVar16 = local_9e0;
                    plVar28[1] = local_998[7];
                    *(int *)((longlong)plVar28 + 0x14) = local_9a4;
                    *(int *)(plVar28 + 2) = param_1[4];
                    *plVar28 = local_9e0 + 1000;
                    local_8c0 = CONCAT31(local_8c0._1_3_,1);
                    auVar40 = vunpcklps_avx(auVar41,auVar40);
                    *(longlong *)((longlong)plVar28 + 0x15c) = auVar40._0_8_;
                    *(undefined4 *)((longlong)plVar28 + 0x164) = local_8c0;
                    local_8b4 = CONCAT31(local_8b4._1_3_,1);
                    auVar42 = vunpcklps_avx(auVar39,auVar42);
                    plVar28[0x2d] = auVar42._0_8_;
                    *(undefined4 *)(plVar28 + 0x2e) = local_8b4;
                    if (plVar32 != (longlong *)0x0) {
                      LOCK();
                      plVar6 = plVar32 + 1;
                      lVar25 = *plVar6;
                      *(int *)plVar6 = (int)*plVar6 + -1;
                      UNLOCK();
                      if ((int)lVar25 == 1) {
                        (**(code **)*plVar32)(plVar32);
                        LOCK();
                        piVar33 = (int *)((longlong)plVar32 + 0xc);
                        iVar12 = *piVar33;
                        *piVar33 = *piVar33 + -1;
                        UNLOCK();
                        if (iVar12 == 1) {
                          (**(code **)(*plVar32 + 8))(plVar32);
                        }
                      }
                    }
                  }
                  plVar32 = local_998;
                  (**(code **)(*local_9c0 + 0x78))();
                  bVar30 = local_9ec;
                  if ((ulonglong)plVar32[6] <= *(ulonglong *)(param_1 + 0x72)) {
                    *(undefined1 *)(plVar32 + 8) = 0;
                    if (plVar22 != (longlong *)0x0) goto LAB_1803f426f;
LAB_1803f42a8:
                    uVar35 = local_9f0;
                    goto LAB_1803f42ad;
                  }
                  *(longlong *)(param_1 + 0x72) = plVar32[6];
                  if (bVar11 == 0) {
                    if (local_9ec == 0) {
                      local_970._0_16_ = (undefined1  [16])0x0;
                      FUN_1803c9920();
                    }
                    if (local_9f7 != 0) {
                      param_1[0x6a] = 0;
                      param_1[0x6b] = 0;
                    }
                    *(longlong *)(param_1 + 0x82) = *(longlong *)(param_1 + 0x82) + 1;
                    if (((local_9f6 == 0) || (local_9f5 != 0)) || (bVar30 == 0)) {
                      bVar8 = false;
                      if (bVar30 != 0) goto LAB_1803f486e;
LAB_1803f487b:
                      lVar25 = 0;
                    }
                    else {
                      bVar8 = true;
                      if (param_1[4] != 0) goto LAB_1803f487b;
LAB_1803f486e:
                      lVar25 = 4000;
                    }
                    if (local_9f4 != 0) {
                      if ((local_9f5 == 0) && (local_9f6 == 0)) {
                        UVar16 = local_9e0;
                        goto LAB_1803f4991;
                      }
                      if ((local_958 == (undefined1 (*) [16])0x0) &&
                         ((ulonglong)(lVar25 + *(longlong *)(param_1 + 0x88)) <= local_9e0)) {
                        *(ULONGLONG *)(param_1 + 0x88) = local_9e0 + 2000;
                        if (bVar8) {
                          local_9f8 = '\x01';
                        }
                        else {
                          *(undefined1 *)(param_1 + 10) = 1;
                          if (bVar30 == 0) {
                            DAT_180c70e22 = 1;
                          }
                          FUN_18063ab10(local_6a8,0,0x600);
                          local_a38 = (longlong *)0x18081a090;
                          if (bVar30 != 0) {
                            local_a38 = (longlong *)0x180819ee0;
                          }
                          local_a40 = local_990;
                          local_a48 = (undefined **)CONCAT44(local_a48._4_4_,*param_1);
                          FUN_18015ad60(local_6a8,0x600,0xffffffffffffffff,
                                        "slot=%u generation=%llu reason=%s action=recreate_owned_panel"
                                       );
                          local_a48 = &PTR_180700558;
                          if ((char)local_6a8[0] != '\0') {
                            local_a48 = (undefined **)&DAT_1806bcfc0;
                          }
                          local_a40 = (longlong *)local_6a8;
                          FUN_1800f6900(2);
                        }
                      }
                    }
                    UVar16 = local_9e0;
                  }
                  else {
                    local_9f8 = '\0';
                    *(ULONGLONG *)(param_1 + 0x88) = UVar16 + 2000;
                    *(longlong *)(param_1 + 0x84) = *(longlong *)(param_1 + 0x84) + 1;
                    *(ULONGLONG *)(param_1 + 0x86) = UVar16;
                    *(longlong *)(param_1 + 0xa4) = plVar32[7];
                    if (*param_1 - 4U < 2) {
                      if (plVar28 == (longlong *)0x0) {
                        lVar25 = ((longlong)plVar32 + (-0x2d0 - (longlong)param_1)) / 0x48 +
                                 (ulonglong)(*param_1 - 4U) * 3;
                        if (*(longlong *)(&DAT_180c7c3a8 + lVar25 * 0x10) != 0) {
                          LOCK();
                          piVar33 = (int *)(*(longlong *)(&DAT_180c7c3a8 + lVar25 * 0x10) + 8);
                          *piVar33 = *piVar33 + 1;
                          UNLOCK();
                        }
                        local_8d0 = *(longlong **)(&DAT_180c7c3a8 + lVar25 * 0x10);
                        puVar38 = &local_8d8;
                        uVar35 = uVar35 | 0x20;
                        plVar28 = *(longlong **)(&DAT_180c7c3a0 + lVar25 * 0x10);
                      }
                      else {
                        if (plVar22 != (longlong *)0x0) {
                          LOCK();
                          *(int *)(plVar22 + 1) = (int)plVar22[1] + 1;
                          UNLOCK();
                        }
                        local_950._8_8_ = plVar22;
                        puVar38 = (undefined8 *)local_950;
                        uVar35 = uVar35 | 0x10;
                      }
                      plVar6 = (longlong *)puVar38[1];
                      *puVar38 = 0;
                      puVar38[1] = 0;
                      plVar32 = local_8d0;
                      local_9f0 = uVar35;
                      local_9e8 = uVar35;
                      if ((uVar35 & 0x20) != 0) {
                        uVar35 = uVar35 & 0xffffffdf;
                        local_9f0 = uVar35;
                        local_9e8 = uVar35;
                        if (local_8d0 != (longlong *)0x0) {
                          LOCK();
                          plVar2 = local_8d0 + 1;
                          lVar25 = *plVar2;
                          *(int *)plVar2 = (int)*plVar2 + -1;
                          UNLOCK();
                          if ((int)lVar25 == 1) {
                            (**(code **)*local_8d0)(local_8d0);
                            LOCK();
                            piVar33 = (int *)((longlong)plVar32 + 0xc);
                            iVar12 = *piVar33;
                            *piVar33 = *piVar33 + -1;
                            UNLOCK();
                            if (iVar12 == 1) {
                              (**(code **)(*plVar32 + 8))(plVar32);
                            }
                          }
                        }
                      }
                      if ((uVar35 & 0x10) != 0) {
                        local_9f0 = uVar35 & 0xffffffef;
                        uVar4 = local_950._8_8_;
                        local_9e8 = local_9f0;
                        if ((longlong *)local_950._8_8_ != (longlong *)0x0) {
                          LOCK();
                          plVar32 = (longlong *)(local_950._8_8_ + 8);
                          lVar25 = *plVar32;
                          *(int *)plVar32 = (int)*plVar32 + -1;
                          UNLOCK();
                          if ((int)lVar25 == 1) {
                            (*(code *)**(undefined8 **)local_950._8_8_)(local_950._8_8_);
                            LOCK();
                            piVar33 = (int *)(uVar4 + 0xc);
                            iVar12 = *piVar33;
                            *piVar33 = *piVar33 + -1;
                            UNLOCK();
                            if (iVar12 == 1) {
                              (**(code **)(*(longlong *)uVar4 + 8))(uVar4);
                            }
                          }
                        }
                      }
                      plVar32 = local_998;
                      if ((plVar28 != (longlong *)0x0) &&
                         (lVar25 = local_998[7], plVar28[1] == lVar25)) {
                        iVar12 = *param_1;
                        if (plVar6 != (longlong *)0x0) {
                          LOCK();
                          *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
                          UNLOCK();
                        }
                        local_758._8_8_ = plVar6;
                        local_758._0_8_ = plVar28;
                        FUN_1803c9920(&DAT_180c62960 +
                                      ((ulonglong)(iVar12 * 0x10 - 0x40) +
                                      (ulonglong)((uint)lVar25 & 0xf)) * 0x10,local_758);
                      }
                      if (plVar6 != (longlong *)0x0) {
                        LOCK();
                        plVar28 = plVar6 + 1;
                        lVar25 = *plVar28;
                        *(int *)plVar28 = (int)*plVar28 + -1;
                        UNLOCK();
                        if ((int)lVar25 == 1) {
                          (**(code **)*plVar6)(plVar6);
                          LOCK();
                          piVar33 = (int *)((longlong)plVar6 + 0xc);
                          iVar12 = *piVar33;
                          *piVar33 = *piVar33 + -1;
                          UNLOCK();
                          if (iVar12 == 1) {
                            (**(code **)(*plVar6 + 8))(plVar6);
                          }
                        }
                      }
                      UVar16 = local_9e0;
                    }
                    plVar28 = local_990;
                    *(longlong *)(param_1 + 0x80) = *(longlong *)(param_1 + 0x80) + 1;
                    if (*(longlong **)(param_1 + 0x6a) != local_990) {
                      FUN_18063ab10(local_6a8,0,0x600);
                      local_a38 = plVar28;
                      local_a40 = (longlong *)CONCAT44(local_a40._4_4_,local_940);
                      local_a48 = (undefined **)CONCAT44(local_a48._4_4_,local_9a4);
                      FUN_18015ad60(local_6a8,0x600,0xffffffffffffffff,
                                    "definition=%d paint=%d generation=%llu source=native_panel");
                      local_a48 = &PTR_180700558;
                      if ((char)local_6a8[0] != '\0') {
                        local_a48 = (undefined **)&DAT_1806bcfc0;
                      }
                      local_a40 = (longlong *)local_6a8;
                      FUN_1800f6900(0);
                    }
                    plVar6 = local_9c0;
                    *(longlong **)(param_1 + 0x6a) = plVar28;
                    if (local_9f6 == 0) {
                      if (local_9f5 != 0) goto LAB_1803f46df;
                    }
                    else {
                      if (local_9f5 == 0) {
                        local_a48 = *(undefined ***)
                                     (&DAT_180c7c308 + (ulonglong)(*param_1 - 4) * 0x18);
                      }
                      else {
LAB_1803f46df:
                        if ((char)param_1[0x94] != '\0') goto LAB_1803f4712;
                        local_a48 = *(undefined ***)(param_1 + 0xea);
                      }
                      local_a38 = (longlong *)((ulonglong)local_a38 & 0xffffffff00000000);
                      local_a40 = (longlong *)CONCAT44(local_a40._4_4_,local_9d8 * 4);
                      (**(code **)(*local_9c0 + 0x180))(local_9c0,*plVar32);
                    }
LAB_1803f4712:
                    if (local_9f7 == 0) {
                      (**(code **)(*plVar6 + 0x178))(plVar6,*(undefined8 *)(param_1 + 0xb0));
                    }
                    auVar42 = auVar44._0_16_;
                    if ((local_9e3 == '\0') || (local_9f7 != 0)) {
LAB_1803f4991:
                    }
                    else {
                      plVar28 = *(longlong **)(param_1 + 0xb2);
                      if (*(longlong **)(param_1 + 0x104) != plVar28) {
                        if (plVar28 != (longlong *)0x0) {
                          (**(code **)(*plVar28 + 8))(plVar28);
                        }
                        auVar42 = auVar44._0_16_;
                        plVar6 = *(longlong **)(param_1 + 0x104);
                        *(longlong **)(param_1 + 0x104) = plVar28;
                        if (plVar6 != (longlong *)0x0) {
                          (**(code **)(*plVar6 + 0x10))();
                          auVar42 = auVar44._0_16_;
                        }
                      }
                      *(ULONGLONG *)(param_1 + 0x106) = local_9e0 + 60000;
                      UVar16 = local_9e0;
                      if ((char)local_9cc == '\0') {
                        if (local_9f5 != 0) {
                          *(undefined8 *)(param_1 + 0x108) = *(undefined8 *)(param_1 + 0xfc);
                          *(undefined8 *)(param_1 + 0x10a) = *(undefined8 *)(param_1 + 0xfe);
                          goto LAB_1803f47eb;
                        }
                      }
                      else {
                        *(undefined1 (*) [16])(param_1 + 0x108) = auVar42;
LAB_1803f47eb:
                        if ((char)param_1[0x10c] == '\0') {
                          *(undefined1 *)(param_1 + 0x10c) = 1;
                        }
                      }
                    }
                  }
                  *(undefined1 *)(plVar32 + 8) = 0;
                  if (plVar22 != (longlong *)0x0) {
LAB_1803f426f:
                    LOCK();
                    plVar28 = plVar22 + 1;
                    lVar25 = *plVar28;
                    *(int *)plVar28 = (int)*plVar28 + -1;
                    UNLOCK();
                    if ((int)lVar25 == 1) {
                      (**(code **)*plVar22)(plVar22);
                      LOCK();
                      piVar33 = (int *)((longlong)plVar22 + 0xc);
                      iVar12 = *piVar33;
                      *piVar33 = *piVar33 + -1;
                      UNLOCK();
                      if (iVar12 == 1) {
                        (**(code **)(*plVar22 + 8))(plVar22);
                      }
                    }
                    goto LAB_1803f42a8;
                  }
                  uVar35 = local_9f0;
                }
                else {
LAB_1803f42ad:
                }
                plVar22 = local_788;
                local_998 = plVar32;
              }
              local_998 = local_998 + 9;
              if (local_998 == plVar22) goto code_r0x0001803f42ca;
              bVar11 = local_9f7;
            } while( true );
          }
          piVar33 = param_1 + 0xb4;
          goto LAB_1803f49f9;
        }
      }
    }
  }
  FUN_1803f2680(param_1);
LAB_1803f4ed2:
  plVar22 = local_760;
  if (local_760 != (longlong *)0x0) {
    local_760 = (longlong *)0x0;
    (**(code **)(*plVar22 + 0x10))();
  }
LAB_1803f4f80:
  FUN_18015c010(local_7c8);
  FUN_18015c010(local_820);
  FUN_18015c010(local_888);
code_r0x0001803f42ca:
  if (local_9f8 == '\0') {
    piVar33 = param_1 + 0xb4;
    do {
      if ((char)piVar33[0x10] == '\0') break;
      piVar33 = piVar33 + 0x12;
    } while (piVar33 != param_1 + 0xea);
LAB_1803f49f9:
    plVar22 = local_9c0;
    if ((piVar33 != param_1 + 0xea) && (*(ulonglong *)(param_1 + 0x6c) <= UVar16)) {
      _local_740 = CONCAT44(local_9a8 + 4,local_9a0);
      uVar21 = 0;
      plStack_738 = (longlong *)((ulonglong)(uint)(local_9d8 + local_9a0) << 0x20);
      uStack_730 = CONCAT44(1,local_9c8 + local_9a8);
      if ((char)param_1[0x94] == '\0') {
        if (local_9f7 == 0) {
          local_a28 = &local_740;
          local_a30 = 0;
          local_a38 = local_760;
          local_a40 = (longlong *)((ulonglong)local_a40._4_4_ << 0x20);
          local_a48 = (undefined **)((ulonglong)local_a48 & 0xffffffff00000000);
          (**(code **)(*local_9c0 + 0x170))(local_9c0,*(undefined8 *)piVar33,0,0);
          goto LAB_1803f4ab7;
        }
      }
      else {
        local_a38 = *(longlong **)(piVar33 + 2);
        local_a40 = (longlong *)CONCAT44(local_a40._4_4_,local_780[0]);
        local_a48 = *(undefined ***)(piVar33 + 4);
        cVar10 = FUN_1803e9590(*(undefined8 *)(param_1 + 0x90),local_760,&local_740,
                               *(undefined8 *)(piVar33 + 6));
        if (cVar10 == '\0') goto LAB_1803f4e9f;
        plVar22 = local_9c0;
LAB_1803f4ab7:
      }
      bVar11 = local_9f6;
      if (((local_9f6 == 0) && (local_9f5 == 0)) || (bVar8 = true, (char)param_1[0x94] != '\0')) {
        bVar8 = false;
      }
      local_710 = CONCAT44(local_9a8,local_9a0);
      iVar12 = 8;
      if (bVar8) {
        iVar12 = local_9d8;
      }
      plStack_708 = (longlong *)((ulonglong)(uint)(iVar12 + local_9a0) << 0x20);
      iVar12 = 4;
      if (bVar8) {
        iVar12 = local_9c8;
      }
      uStack_700 = CONCAT44(1,iVar12 + local_9a8);
      local_a28 = (int *)&local_710;
      local_a30 = 0;
      local_a38 = local_760;
      local_a40 = (longlong *)((ulonglong)local_a40 & 0xffffffff00000000);
      local_a48 = (undefined **)((ulonglong)local_a48 & 0xffffffff00000000);
      (**(code **)(*plVar22 + 0x170))(plVar22,*(undefined8 *)(piVar33 + 2),0,0);
      (**(code **)(*plVar22 + 0xe0))(plVar22,*(undefined8 *)(piVar33 + 8));
      local_780[0] = 0;
      iVar12 = (**(code **)(*local_938 + 0x88))(local_938,local_780);
      if (iVar12 < 0) {
        if (bVar11 != 0) {
          uVar21 = *(longlong *)(param_1 + 0x70) + 1U | 0x8000000000000000;
        }
      }
      else {
        uVar21 = (ulonglong)local_780[0] + 1;
      }
      *(ulonglong *)(piVar33 + 0xe) = uVar21;
      if (*param_1 - 4U < 2) {
        lVar25 = (longlong)piVar33 + (-0x2d0 - (longlong)param_1);
        lVar25 = lVar25 / 0x12 + (lVar25 >> 0x3f);
        lVar25 = ((lVar25 >> 2) - (lVar25 >> 0x3f)) + (ulonglong)(*param_1 - 4U) * 3;
        *(undefined8 *)(&DAT_180c7c3a0 + lVar25 * 0x10) = 0;
        plVar22 = *(longlong **)(&DAT_180c7c3a8 + lVar25 * 0x10);
        *(undefined8 *)(&DAT_180c7c3a8 + lVar25 * 0x10) = 0;
        if (plVar22 != (longlong *)0x0) {
          LOCK();
          plVar28 = plVar22 + 1;
          lVar29 = *plVar28;
          *(int *)plVar28 = (int)*plVar28 + -1;
          UNLOCK();
          if ((int)lVar29 == 1) {
            (**(code **)*plVar22)(plVar22);
            LOCK();
            piVar3 = (int *)((longlong)plVar22 + 0xc);
            iVar12 = *piVar3;
            *piVar3 = *piVar3 + -1;
            UNLOCK();
            if (iVar12 == 1) {
              (**(code **)(*plVar22 + 8))(plVar22);
            }
          }
        }
        lVar29 = (ulonglong)(*param_1 - 4) * 0x10;
        local_950 = (undefined1  [16])0x0;
        puVar38 = (undefined8 *)(&DAT_180c62948 + lVar29);
        plVar22 = (longlong *)FUN_180113860(puVar38);
        puVar7 = *(ulonglong **)(&DAT_180c62940 + lVar29);
        local_950._8_8_ = plVar22;
        local_950._0_8_ = puVar7;
        if (plVar22 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar22 + 1) = (int)plVar22[1] + 1;
          UNLOCK();
        }
        LOCK();
        uVar4 = *puVar38;
        *puVar38 = plVar22;
        UNLOCK();
        if (((byte)uVar4 & 3) == 2) {
          FUN_1805fa36c(puVar38);
        }
        if (((puVar7 != (ulonglong *)0x0) && ((int)puVar7[2] == param_1[4])) &&
           ((*(int *)((longlong)puVar7 + 0x14) == local_9a4 && (local_9e0 < *puVar7)))) {
          local_758 = (undefined1  [16])0x0;
          FUN_1803f8b70(local_758,puVar7);
          *(undefined8 *)(local_758._0_8_ + 8) = *(undefined8 *)(piVar33 + 0xe);
          *(undefined8 *)(&DAT_180c7c3a0 + lVar25 * 0x10) = local_758._0_8_;
          plVar28 = *(longlong **)(&DAT_180c7c3a8 + lVar25 * 0x10);
          *(undefined8 *)(&DAT_180c7c3a8 + lVar25 * 0x10) = local_758._8_8_;
          if (plVar28 != (longlong *)0x0) {
            LOCK();
            plVar32 = plVar28 + 1;
            lVar25 = *plVar32;
            *(int *)plVar32 = (int)*plVar32 + -1;
            UNLOCK();
            if ((int)lVar25 == 1) {
              (**(code **)*plVar28)(plVar28);
              LOCK();
              piVar3 = (int *)((longlong)plVar28 + 0xc);
              iVar12 = *piVar3;
              *piVar3 = *piVar3 + -1;
              UNLOCK();
              if (iVar12 == 1) {
                (**(code **)(*plVar28 + 8))(plVar28);
              }
            }
          }
        }
        if (plVar22 != (longlong *)0x0) {
          LOCK();
          plVar28 = plVar22 + 1;
          lVar25 = *plVar28;
          *(int *)plVar28 = (int)*plVar28 + -1;
          UNLOCK();
          if ((int)lVar25 == 1) {
            (**(code **)*plVar22)(plVar22);
            LOCK();
            piVar3 = (int *)((longlong)plVar22 + 0xc);
            iVar12 = *piVar3;
            *piVar3 = *piVar3 + -1;
            UNLOCK();
            if (iVar12 == 1) {
              (**(code **)(*plVar22 + 8))(plVar22);
            }
          }
        }
        UVar16 = local_9e0;
      }
      lVar25 = 0;
      *(undefined1 *)(piVar33 + 0x10) = 1;
      *(longlong **)(piVar33 + 10) = local_990;
      *(longlong *)(param_1 + 0x70) = *(longlong *)(param_1 + 0x70) + 1;
      *(undefined8 *)(piVar33 + 0xc) = *(undefined8 *)(param_1 + 0x70);
      if (local_9f6 != 0) {
        if ((local_9f5 == 0) || ((char)param_1[0x94] != '\0')) {
          lVar25 = 0x10;
        }
        else {
          lVar25 = 0x21;
        }
      }
      *(ULONGLONG *)(param_1 + 0x6c) = lVar25 + UVar16;
    }
  }
  else {
    iVar12 = FUN_1805f68d0(param_1 + 0xc);
    if (iVar12 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1805f6d44(5);
    }
    if (param_1[0x1f] == 0x7fffffff) {
      param_1[0x1f] = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
      FUN_1805f6d44(6);
    }
    *(undefined1 *)((longlong)param_1 + 0x252) = 1;
    FUN_1805f68fc(param_1 + 0xc);
    FUN_18063ab10(local_6a8,0,0x600);
    local_a40 = local_990;
    local_a48 = (undefined **)CONCAT44(local_a48._4_4_,*param_1);
    FUN_18015ad60(local_6a8,0x600,0xffffffffffffffff,
                  "slot=%u generation=%llu reason=neutral_silhouette mode=keyed");
    local_a48 = &PTR_180700558;
    if ((char)local_6a8[0] != '\0') {
      local_a48 = (undefined **)&DAT_1806bcfc0;
    }
    local_a40 = (longlong *)local_6a8;
    FUN_1800f6900(1,local_a40,"SkinPreview","PLAYER_PREVIEW_CAPTURE_FALLBACK");
  }
LAB_1803f4e9f:
  plVar22 = local_748;
  if (local_748 != (longlong *)0x0) {
    local_748 = (longlong *)0x0;
    (**(code **)(*plVar22 + 0x10))();
  }
  goto LAB_1803f4ed2;
}



