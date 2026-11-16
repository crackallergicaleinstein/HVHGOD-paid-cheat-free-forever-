// FUN_1801ee0f0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801ee0f0 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1801ee0f0(LPCWSTR ***param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  int iVar3;
  int *piVar4;
  bool bVar5;
  char cVar6;
  byte bVar7;
  undefined1 auVar8 [16];
  undefined1 uVar9;
  char cVar10;
  byte bVar11;
  DWORD DVar12;
  BOOL BVar13;
  HANDLE pvVar14;
  ULONGLONG UVar15;
  undefined8 uVar16;
  undefined8 *puVar17;
  undefined8 uVar18;
  LPCWSTR ***ppppWVar19;
  longlong lVar20;
  longlong lVar21;
  longlong *plVar22;
  longlong lVar23;
  ULONGLONG UVar24;
  uint uVar25;
  uint uVar26;
  undefined8 uVar27;
  undefined1 auStack_a58 [32];
  undefined **local_a38;
  char *local_a30;
  longlong local_a28;
  undefined8 local_a20;
  longlong local_a18;
  longlong local_a10;
  byte local_a08;
  char local_a07;
  uint local_a04;
  undefined1 local_9f8 [16];
  ULONGLONG local_9e8;
  LPCWSTR ***local_9e0;
  int *local_9d8 [2];
  undefined1 local_9c8 [2] [16];
  char *local_9a8;
  undefined8 local_9a0;
  undefined1 local_998 [16];
  undefined8 local_988;
  undefined8 local_980 [2];
  undefined8 local_970;
  ULONGLONG local_968;
  LPCWSTR ***local_960;
  longlong *local_958;
  LPCWSTR ***local_950;
  undefined1 local_948;
  undefined7 uStack_947;
  undefined1 local_940 [24];
  undefined1 local_928 [16];
  undefined8 local_918;
  undefined1 local_910 [24];
  undefined1 local_8f8 [16];
  undefined8 local_8e8;
  undefined1 local_8e0 [8];
  undefined1 local_8d8 [8];
  undefined1 local_8d0 [24];
  undefined1 local_8b8 [16];
  undefined8 local_8a8;
  LPCWSTR ***local_8a0;
  longlong *local_898;
  undefined1 local_890 [16];
  undefined8 local_880;
  undefined8 local_878;
  undefined1 *local_868;
  undefined1 *local_860;
  undefined1 *local_858;
  undefined1 *local_850;
  undefined1 *local_848;
  LPCWSTR ***local_840;
  undefined1 *local_838;
  undefined1 *local_830;
  undefined1 *local_828;
  undefined1 *local_820;
  undefined1 *local_818;
  undefined1 *local_810;
  undefined1 *local_808;
  undefined1 *local_800;
  undefined1 *local_7f8;
  undefined1 *local_7f0;
  undefined1 *local_7e8;
  HANDLE *local_7e0;
  undefined1 local_7d8 [8];
  undefined1 local_7d0 [24];
  undefined1 *local_7b8;
  ULONGLONG *local_7b0;
  char *local_7a8;
  undefined8 local_7a0;
  undefined1 local_798 [16];
  undefined8 local_788;
  undefined1 local_780 [16];
  undefined8 local_770;
  undefined1 local_768 [16];
  undefined8 local_758;
  undefined1 local_750 [16];
  undefined8 local_740;
  undefined1 local_738 [16];
  undefined1 local_728 [24];
  undefined1 local_710 [16];
  undefined8 local_700;
  undefined1 local_6f8 [16];
  undefined8 local_6e8;
  undefined1 local_6e0 [16];
  undefined8 local_6d0;
  undefined1 local_6c8 [16];
  undefined8 local_6b8;
  undefined1 local_6b0 [16];
  undefined8 local_6a0;
  HANDLE local_698;
  byte local_690;
  LPCWSTR ***local_688 [3];
  ulonglong local_670;
  undefined1 local_668 [16];
  longlong local_658;
  int iStack_64c;
  char local_648;
  undefined7 uStack_647;
  undefined1 local_640 [8];
  byte abStack_638 [16];
  undefined1 local_628 [24];
  undefined1 local_610 [24];
  undefined1 local_5f8 [80];
  undefined1 local_5a8 [8];
  undefined **local_5a0 [171];
  ulonglong local_48;
  
  local_48 = DAT_1808d5f00 ^ (ulonglong)auStack_a58;
  local_a04 = 0;
  local_9e0 = param_1;
  local_960 = param_1;
  local_958 = param_2;
  local_8a0 = param_1;
  local_898 = param_2;
  pvVar14 = GetCurrentThread();
  SetThreadPriority(pvVar14,0x10000);
  local_890 = (undefined1  [16])0x0;
  local_880 = 0;
  local_878 = 0;
  FUN_180159e60(local_890,L"characters",10);
  uVar25 = 0x300;
  local_a04 = 0x300;
  FUN_1800a7e60(local_688,param_1,local_890);
  FUN_18015b930(local_890);
  local_950 = (LPCWSTR ***)local_688;
  ppppWVar19 = (LPCWSTR ***)local_688;
  if (7 < local_670) {
    ppppWVar19 = local_688[0];
  }
  DVar12 = GetFileAttributesW((LPCWSTR)ppppWVar19);
  if ((DVar12 == 0xffffffff) || ((DVar12 & 0x410) != 0x10)) {
    local_a08 = 0;
  }
  else {
    local_a08 = 1;
  }
  ppppWVar19 = (LPCWSTR ***)local_688;
  if (local_a08 == 0) {
    ppppWVar19 = param_1;
  }
  if ((LPCWSTR **)0x7 < ppppWVar19[3]) {
    ppppWVar19 = (LPCWSTR ***)*ppppWVar19;
  }
  local_690 = local_a08;
  pvVar14 = FindFirstChangeNotificationW((LPCWSTR)ppppWVar19,(uint)local_a08,0x13);
  UVar24 = 0;
  local_a07 = '\x01';
  do {
    cVar10 = local_a07;
    local_698 = pvVar14;
LAB_1801ee270:
    do {
      if ((*param_2 != 0) && ((*(uint *)(*param_2 + 4) & 1) != 0)) {
        if (pvVar14 != (HANDLE)0xffffffffffffffff) {
          FindCloseChangeNotification(pvVar14);
        }
        pvVar14 = GetCurrentThread();
        SetThreadPriority(pvVar14,0x20000);
        LOCK();
        DAT_180bb93ae = 0;
        UNLOCK();
        FUN_18015b930(local_688);
        piVar4 = (int *)*param_2;
        if (piVar4 != (int *)0x0) {
          LOCK();
          iVar3 = *piVar4;
          *piVar4 = *piVar4 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            if (DAT_180c7df30 == (undefined8 *)0x0) {
              local_9a8 = "tier0.dll:g_pMemAlloc";
              local_9a0 = 0x15;
              DAT_180c7df30 = (undefined8 *)FUN_180451750(&local_9a8);
            }
            (**(code **)(*(longlong *)*DAT_180c7df30 + 0x18))((longlong *)*DAT_180c7df30,piVar4);
          }
        }
      }
      UVar15 = GetTickCount64();
      cVar6 = DAT_1808da689;
      if (cVar10 == '\0') {
        LOCK();
        DAT_1808da689 = '\0';
        UNLOCK();
        if ((cVar6 == '\0') && ((UVar24 == 0 || (UVar15 < UVar24 + 0x5dc)))) {
          if (pvVar14 != (HANDLE)0xffffffffffffffff) {
            DVar12 = WaitForSingleObject(pvVar14,0xfa);
            if (DVar12 == 0) {
              UVar24 = GetTickCount64();
              BVar13 = FindNextChangeNotification(pvVar14);
              if (BVar13 == 0) {
                FindCloseChangeNotification(pvVar14);
                pvVar14 = (HANDLE)0xffffffffffffffff;
                local_698 = (HANDLE)0xffffffffffffffff;
              }
              goto LAB_1801ee270;
            }
            if (DVar12 != 0xffffffff) goto LAB_1801ee270;
            FindCloseChangeNotification(pvVar14);
          }
          ppppWVar19 = local_950;
          if (7 < local_670) {
            ppppWVar19 = local_688[0];
          }
          DVar12 = GetFileAttributesW((LPCWSTR)ppppWVar19);
          if ((DVar12 == 0xffffffff) || ((DVar12 & 0x410) != 0x10)) {
            local_a08 = 0;
          }
          else {
            local_a08 = 1;
          }
          ppppWVar19 = (LPCWSTR ***)local_688;
          if (local_a08 == 0) {
            ppppWVar19 = local_9e0;
          }
          if ((LPCWSTR **)0x7 < ppppWVar19[3]) {
            ppppWVar19 = (LPCWSTR ***)*ppppWVar19;
          }
          local_690 = local_a08;
          pvVar14 = FindFirstChangeNotificationW((LPCWSTR)ppppWVar19,(uint)local_a08,0x13);
          cVar10 = local_a07;
          local_698 = pvVar14;
          if (pvVar14 == (HANDLE)0xffffffffffffffff) {
            local_9e8 = 0xfa;
            FUN_1801a7270(&local_9e8);
          }
          goto LAB_1801ee270;
        }
      }
      else {
        LOCK();
        UNLOCK();
      }
      DAT_1808da689 = '\0';
      local_a07 = '\0';
      local_9e8 = 0;
      LOCK();
      DAT_180bb93af = 1;
      UNLOCK();
      local_968 = GetTickCount64();
      local_9f8 = (undefined1  [16])0x0;
      local_9d8[0] = (int *)*param_2;
      if (local_9d8[0] != (int *)0x0) {
        LOCK();
        *local_9d8[0] = *local_9d8[0] + 1;
        UNLOCK();
      }
      uVar16 = FUN_1801ec0c0(&local_648,local_960,local_9d8);
      if (DAT_180c7df28 == (undefined8 *)0x0) {
        local_7a8 = "tier0.dll:g_pMemAlloc";
        local_7a0 = 0x15;
        DAT_180c7df28 = (undefined8 *)FUN_180451750(&local_7a8);
      }
      plVar22 = (longlong *)
                (**(code **)(*(longlong *)*DAT_180c7df28 + 8))((longlong *)*DAT_180c7df28,0xd8);
      local_9c8[0]._0_8_ = plVar22;
      if (plVar22 == (longlong *)0x0) {
        plVar22 = (longlong *)0x0;
      }
      else {
        *(undefined4 *)(plVar22 + 1) = 1;
        *(undefined4 *)((longlong)plVar22 + 0xc) = 1;
        *plVar22 = (longlong)
                   std::_Ref_count_obj2<features::changer::custom_agents::catalog>::vftable;
        FUN_1801eda50(plVar22 + 2,uVar16);
      }
      local_9f8._8_8_ = plVar22;
      local_9f8._0_8_ = plVar22 + 2;
      local_a04 = uVar25 | 0x40;
      FUN_18015c010(local_5a8);
      FUN_180186810(local_5f8);
      FUN_1801f32f0(local_610);
      FUN_1801f3390(local_628);
      FUN_18015b930(&local_648);
      if ((plVar22[0x18] == 0) && ((*param_2 == 0 || ((*(uint *)(*param_2 + 4) & 1) == 0)))) {
        uVar9 = 1;
      }
      else {
        uVar9 = 0;
      }
      *(undefined1 *)(plVar22 + 0x1a) = uVar9;
      if ((*param_2 == 0) || (uVar26 = uVar25 | 0x40, (*(uint *)(*param_2 + 4) & 1) == 0)) {
        lVar23 = 0;
        local_9c8[0] = (undefined1  [16])0x0;
        FUN_1800f4e90(local_8e0,local_9c8,0,2);
        uVar26 = uVar25 | 0xc0;
        lVar21 = plVar22[10];
        local_a04 = uVar26;
        for (lVar20 = plVar22[9]; lVar20 != lVar21; lVar20 = lVar20 + 0xd8) {
          lVar23 = lVar23 + (ulonglong)*(byte *)(lVar20 + 0xc0);
          FUN_1800e60e0(local_998,&DAT_1806bc068);
          FUN_1800e64d0(local_980,lVar20);
          local_970 = 0;
          local_7b8 = local_998;
          local_7b0 = &local_968;
          FUN_1800f4e90(local_798,&local_7b8,1,2);
          local_788 = 0;
          FUN_1800e60e0(local_940,"resource");
          FUN_1800e64d0(local_928,lVar20 + 0x40);
          local_918 = 0;
          local_858 = local_940;
          local_850 = local_910;
          FUN_1800f4e90(local_780,&local_858,1,2);
          local_770 = 0;
          FUN_1800e60e0(local_8d0,"ready");
          local_8b8 = ZEXT816(0);
          uVar9 = *(undefined1 *)(lVar20 + 0xc0);
          FUN_1801409d0(local_8b8 + 8,0);
          local_8b8[0] = 4;
          auVar8 = local_8b8;
          local_8b8._9_7_ = uStack_947;
          local_8b8[8] = uVar9;
          local_8b8._0_8_ = auVar8._0_8_;
          local_8a8 = 0;
          local_848 = local_8d0;
          local_840 = (LPCWSTR ***)&local_8a0;
          local_948 = uVar9;
          FUN_1800f4e90(local_768,&local_848,1,2);
          local_758 = 0;
          FUN_1800e60e0(local_910,"missing");
          FUN_1800e64d0(local_8f8,lVar20 + 0x60);
          local_8e8 = 0;
          local_838 = local_910;
          local_830 = local_8e0;
          FUN_1800f4e90(local_750,&local_838,1,2);
          local_740 = 0;
          local_828 = local_798;
          local_820 = local_738;
          FUN_1800f3aa0(local_8e0,&local_828);
          _eh_vector_destructor_iterator_(local_798,0x18,4,FUN_1800aab30);
          _eh_vector_destructor_iterator_(local_910,0x18,2,FUN_1800aab30);
          _eh_vector_destructor_iterator_(local_8d0,0x18,2,FUN_1800aab30);
          _eh_vector_destructor_iterator_(local_940,0x18,2,FUN_1800aab30);
          _eh_vector_destructor_iterator_(local_998,0x18,2,FUN_1800aab30);
        }
        FUN_1800a8ec0(local_668);
        if (local_658 == 0) {
LAB_1801ee9de:
          bVar5 = false;
        }
        else {
          local_998 = (undefined1  [16])0x0;
          local_988 = 0;
          local_980[0] = 0;
          FUN_180159e60(local_998,L"Logs/Skins/Agents",0x11);
          local_a04 = uVar25 | 0xcd;
          uVar16 = FUN_1800a7e60(local_8d0,local_668,local_998);
          uVar26 = uVar25 | 0xcf;
          local_a04 = uVar26;
          cVar10 = FUN_1800a9120(uVar16);
          if (cVar10 == '\0') goto LAB_1801ee9de;
          bVar5 = true;
        }
        if ((uVar26 & 2) != 0) {
          uVar26 = uVar26 & 0xfffffffd;
          local_a04 = uVar26;
          FUN_18015b930(local_8d0);
        }
        if ((uVar26 & 1) != 0) {
          uVar26 = uVar26 & 0xfffffffe;
          local_a04 = uVar26;
          FUN_18015b930(local_998);
        }
        if (bVar5) {
          FUN_18063ab10(&local_648,0,0x108);
          local_998 = (undefined1  [16])0x0;
          local_988 = 0;
          local_980[0] = 0;
          FUN_180159e60(local_998,L"Logs/Skins/Agents/custom-agent-catalog.json",0x2b);
          uVar26 = uVar26 | 0x30;
          local_a04 = uVar26;
          uVar16 = FUN_1800a7e60(local_8d0,local_668,local_998);
          FUN_1800e6fe0(&local_648,uVar16,0x10);
          FUN_18015b930(local_8d0);
          FUN_18015b930(local_998);
          lVar20 = CONCAT71(uStack_647,local_648);
          if ((abStack_638[*(int *)(lVar20 + 4)] & 6) == 0) {
            FUN_1800e60e0(local_798,"agents");
            FUN_1800f4a50(local_780,local_8e0);
            local_770 = 0;
            local_868 = local_798;
            local_860 = local_768;
            FUN_1800f4e90(local_6f8,&local_868,1,2);
            local_6e8 = 0;
            FUN_1800e60e0(local_910,"excluded");
            local_8f8 = ZEXT816(0);
            uVar27 = local_9f8._0_8_;
            uVar16 = *(undefined8 *)(local_9f8._0_8_ + 0x90);
            FUN_1801409d0(local_8f8 + 8,0);
            local_8f8[0] = 6;
            local_8f8._8_8_ = uVar16;
            local_8e8 = 0;
            local_818 = local_910;
            local_810 = local_8e0;
            FUN_1800f4e90(local_6e0,&local_818,1,2);
            local_6d0 = 0;
            FUN_1800e60e0(local_940,"elapsed_ms");
            UVar24 = GetTickCount64();
            lVar20 = UVar24 - local_968;
            local_928 = ZEXT816(0);
            FUN_1801409d0(local_928 + 8,0);
            local_928[0] = 6;
            local_928._8_8_ = lVar20;
            local_918 = 0;
            local_808 = local_940;
            local_800 = local_910;
            FUN_1800f4e90(local_6c8,&local_808,1,2);
            local_6b8 = 0;
            FUN_1800e60e0(local_728,"error");
            FUN_1800e64d0(local_710,uVar27 + 0xa0);
            local_700 = 0;
            local_7f8 = local_728;
            local_7f0 = local_6f8;
            FUN_1800f4e90(local_6b0,&local_7f8,1,2);
            local_6a0 = 0;
            local_7e8 = local_6f8;
            local_7e0 = &local_698;
            uVar16 = FUN_1800f4e90(local_7d8,&local_7e8,1,2);
            local_a30 = (char *)((ulonglong)local_a30 & 0xffffffff00000000);
            puVar17 = (undefined8 *)FUN_1800f4710(uVar16,local_9c8,2);
            puVar1 = puVar17 + 2;
            if (0xf < (ulonglong)puVar17[3]) {
              puVar17 = (undefined8 *)*puVar17;
            }
            FUN_1800f7160(&local_648,puVar17,*puVar1);
            FUN_18015c010(local_9c8);
            FUN_1801409d0(local_7d0,local_7d8[0]);
            _eh_vector_destructor_iterator_(local_6f8,0x18,4,FUN_1800aab30);
            _eh_vector_destructor_iterator_(local_728,0x18,2,FUN_1800aab30);
            _eh_vector_destructor_iterator_(local_940,0x18,2,FUN_1800aab30);
            _eh_vector_destructor_iterator_(local_910,0x18,2,FUN_1800aab30);
            _eh_vector_destructor_iterator_(local_798,0x18,2,FUN_1800aab30);
            lVar20 = CONCAT71(uStack_647,local_648);
          }
          *(undefined ***)(local_640 + (longlong)*(int *)(lVar20 + 4) + -8) =
               std::basic_ofstream<char,std::char_traits<char>_>::vftable;
          iVar3 = *(int *)(CONCAT71(uStack_647,local_648) + 4);
          *(int *)(local_640 + (longlong)iVar3 + -0xc) = iVar3 + -0xa8;
          FUN_1800f63e0(local_640);
          *(undefined ***)(local_640 + (longlong)*(int *)(CONCAT71(uStack_647,local_648) + 4) + -8)
               = std::basic_ostream<char,std::char_traits<char>_>::vftable;
          iVar3 = *(int *)(CONCAT71(uStack_647,local_648) + 4);
          *(int *)(local_640 + (longlong)iVar3 + -0xc) = iVar3 + -0x10;
          local_5a0[0] = std::ios_base::vftable;
          std::ios_base::_Ios_base_dtor((ios_base *)local_5a0);
        }
        uVar16 = local_9f8._0_8_;
        plVar22 = (longlong *)(local_9f8._0_8_ + 0xa0);
        if (0xf < *(ulonglong *)(local_9f8._0_8_ + 0xb8)) {
          plVar22 = (longlong *)*plVar22;
        }
        UVar24 = GetTickCount64();
        lVar21 = UVar24 - local_968;
        lVar20 = *(longlong *)(uVar16 + 0x40) - *(longlong *)(uVar16 + 0x38);
        lVar20 = lVar20 / 0x36 + (lVar20 >> 0x3f);
        lVar20 = (lVar20 >> 2) - (lVar20 >> 0x3f);
        FUN_18063ab10(&local_648,0,0x600);
        local_a28 = lVar20 - lVar23;
        local_a20 = *(undefined8 *)(local_9f8._0_8_ + 0x90);
        local_a38 = (undefined **)lVar20;
        local_a30 = (char *)lVar23;
        local_a18 = lVar21;
        local_a10 = (longlong)plVar22;
        FUN_18015ad60(&local_648,0x600,0xffffffffffffffff,
                      "agents=%zu ready=%zu blocked=%zu excluded=%zu elapsed_ms=%llu error=%s");
        local_a38 = &PTR_180700558;
        if (local_648 != '\0') {
          local_a38 = (undefined **)&DAT_1806bcfc0;
        }
        local_a30 = &local_648;
        FUN_1800f6900(1);
        uVar27 = local_9f8._0_8_;
        local_9c8[0] = local_9f8;
        local_9f8 = (undefined1  [16])0x0;
        uVar18 = FUN_180113860(&DAT_180bb9388);
        uVar16 = DAT_180bb9388;
        local_9c8[0]._0_8_ = DAT_180bb9380;
        auVar8 = local_9c8[0];
        LOCK();
        DAT_180bb9388 = local_9c8[0]._8_8_;
        UNLOCK();
        DAT_180bb9380 = uVar27;
        if (((byte)uVar16 & 3) == 2) {
          local_9c8[0] = auVar8;
          FUN_1805fa36c(&DAT_180bb9388);
        }
        local_9c8[0]._8_8_ = uVar18;
        FUN_1800efed0(local_9c8);
        FUN_18015b930(local_668);
        FUN_1801409d0(local_8d8,local_8e0[0]);
        plVar22 = (longlong *)local_9f8._8_8_;
        param_2 = local_958;
      }
      uVar25 = uVar26;
      if (plVar22 != (longlong *)0x0) {
        LOCK();
        plVar2 = plVar22 + 1;
        lVar20 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar20 == 1) {
          (**(code **)*plVar22)(plVar22);
          LOCK();
          piVar4 = (int *)((longlong)plVar22 + 0xc);
          iVar3 = *piVar4;
          *piVar4 = *piVar4 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*plVar22 + 8))(plVar22);
          }
        }
      }
      UVar24 = local_9e8;
      bVar7 = local_a08;
      LOCK();
      DAT_180bb93af = 0;
      UNLOCK();
      ppppWVar19 = (LPCWSTR ***)local_688;
      if (7 < local_670) {
        ppppWVar19 = local_688[0];
      }
      DVar12 = GetFileAttributesW((LPCWSTR)ppppWVar19);
      if ((DVar12 == 0xffffffff) || ((DVar12 & 0x410) != 0x10)) {
        bVar11 = 0;
      }
      else {
        bVar11 = 1;
      }
      cVar10 = local_a07;
    } while (bVar11 == bVar7);
    if (pvVar14 != (HANDLE)0xffffffffffffffff) {
      FindCloseChangeNotification(pvVar14);
    }
    ppppWVar19 = local_950;
    if (7 < local_670) {
      ppppWVar19 = local_688[0];
    }
    DVar12 = GetFileAttributesW((LPCWSTR)ppppWVar19);
    if ((DVar12 == 0xffffffff) || ((DVar12 & 0x410) != 0x10)) {
      local_a08 = 0;
    }
    else {
      local_a08 = 1;
    }
    ppppWVar19 = (LPCWSTR ***)local_688;
    if (local_a08 == 0) {
      ppppWVar19 = local_9e0;
    }
    if ((LPCWSTR **)0x7 < ppppWVar19[3]) {
      ppppWVar19 = (LPCWSTR ***)*ppppWVar19;
    }
    local_690 = local_a08;
    pvVar14 = FindFirstChangeNotificationW((LPCWSTR)ppppWVar19,(uint)local_a08,0x13);
  } while( true );
}



