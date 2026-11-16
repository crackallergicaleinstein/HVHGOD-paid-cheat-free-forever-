// FUN_18041d780 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18041d780 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18041d780(longlong param_1)

{
  undefined4 uVar1;
  undefined1 auVar2 [16];
  longlong lVar3;
  undefined1 uVar4;
  char cVar5;
  int iVar6;
  HRESULT HVar7;
  DWORD DVar8;
  BOOL BVar9;
  HANDLE hObject;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  undefined **ppuVar13;
  HMODULE pHVar14;
  longlong lVar15;
  longlong *plVar16;
  ULONGLONG UVar17;
  ULONGLONG UVar18;
  LPCSTR lpModuleName;
  uint uVar19;
  undefined **ppuVar20;
  byte bVar21;
  uint uVar22;
  char *pcVar23;
  longlong lVar24;
  bool bVar25;
  undefined8 extraout_XMM0_Qa;
  undefined1 auStack_968 [32];
  undefined8 local_948;
  undefined8 local_940;
  char *local_938;
  undefined1 local_928 [16];
  undefined8 local_918;
  undefined8 local_910;
  undefined8 local_908 [2];
  undefined1 local_8f8 [16];
  undefined1 local_8e8 [16];
  undefined1 local_8d8 [16];
  undefined8 local_8c8;
  undefined8 local_8c0;
  undefined8 local_8b8;
  undefined4 local_8b0;
  undefined1 local_8a8 [32];
  undefined1 local_888 [32];
  char local_868;
  undefined1 local_860 [16];
  longlong local_850;
  undefined4 local_838;
  undefined1 local_834 [4];
  DWORD local_830;
  undefined1 local_80c [2004];
  ulonglong local_38;
  
  local_38 = DAT_1808d5f00 ^ (ulonglong)auStack_968;
  FUN_1800a8bb0(local_860);
  hObject = (HANDLE)CreateToolhelp32Snapshot(2,0);
  if (hObject == (HANDLE)0xffffffffffffffff) {
    bVar25 = true;
  }
  else {
    FUN_18063ab10(local_834,0,0x234);
    local_838 = 0x238;
    iVar6 = Process32FirstW(hObject,&local_838);
    bVar25 = iVar6 == 0;
    while (iVar6 != 0) {
      DVar8 = GetCurrentProcessId();
      if (local_830 != DVar8) {
        iVar6 = FUN_180615da0(local_80c,L"cs2.exe");
        if (iVar6 == 0) {
          bVar25 = true;
          break;
        }
      }
      iVar6 = Process32NextW(hObject,&local_838);
    }
    CloseHandle(hObject);
  }
  bVar21 = bVar25 ^ 1;
  local_8b8 = 0;
  local_8b0 = 0;
  if ((local_850 != 0) && (bVar21 != 0)) {
    local_8d8 = (undefined1  [16])0x0;
    local_8c8 = 0;
    local_8c0 = 0;
    FUN_180159e60(local_8d8,L"CS2 Runtime",0xb);
    uVar10 = FUN_1800a7e60(local_888,local_860,local_8d8);
    local_928 = (undefined1  [16])0x0;
    local_918 = 0;
    local_910 = 0;
    FUN_180159e60(local_928,L"Runtime",7);
    uVar11 = FUN_1800a7e60(local_8f8,local_860,local_928);
    FUN_18041a390(uVar11,uVar10,&local_8b8,0);
    FUN_18015b930(local_8f8);
    FUN_18015b930(local_928);
    FUN_18015b930(local_888);
    FUN_18015b930(local_8d8);
  }
  puVar12 = (undefined8 *)FUN_18041a610(local_908,local_860,bVar21);
  local_8d8._0_8_ = *puVar12;
  uVar1 = *(undefined4 *)(puVar12 + 1);
  FUN_18041c930(bVar21);
  FUN_18036be20(local_888);
  FUN_18015b930(local_888);
  if (bVar21 != 0) {
    uVar10 = FUN_1800a8ff0(local_888);
    FUN_18041b5e0(uVar10);
    FUN_18015b930(local_888);
    if (local_850 != 0) {
      local_928 = (undefined1  [16])0x0;
      local_918 = 0;
      local_910 = 0;
      FUN_180159e60(local_928,L"Runtime/Internal/Logs",0x15);
      uVar10 = FUN_1800a7e60(local_888,local_860,local_928);
      FUN_18041b5e0(uVar10);
      FUN_18015b930(local_888);
      FUN_18015b930(local_928);
      local_8f8 = (undefined1  [16])0x0;
      local_8e8 = ZEXT816(0);
      FUN_180159e60(local_8f8,L"Internal/Recovery/Legacy",0x18);
      local_928 = (undefined1  [16])0x0;
      local_918 = 0;
      local_910 = 0;
      FUN_180159e60(local_928,L"CS2 Runtime",0xb);
      uVar10 = FUN_1800a7e60(local_8a8,local_860,local_928);
      uVar10 = FUN_1800a7e60(local_888,uVar10,local_8f8);
      FUN_18041b5e0(uVar10);
      FUN_18015b930(local_888);
      FUN_18015b930(local_8a8);
      FUN_18015b930(local_928);
      FUN_18015b930(local_8f8);
      local_8f8 = (undefined1  [16])0x0;
      local_8e8 = ZEXT816(0);
      FUN_180159e60(local_8f8,L"Logs/hvhgods_init.log",0x15);
      uVar10 = FUN_1800a7e60(local_8a8,local_860,local_8f8);
      FUN_18041b1b0(uVar10);
      FUN_18015b930(local_8a8);
      FUN_18015b930(local_8f8);
      local_8f8 = (undefined1  [16])0x0;
      local_8e8 = ZEXT816(0);
      FUN_180159e60(local_8f8,L"Logs/hvhgods_init.previous.log",0x1e);
      uVar10 = FUN_1800a7e60(local_8a8,local_860,local_8f8);
      FUN_18041b1b0(uVar10);
      FUN_18015b930(local_8a8);
      FUN_18015b930(local_8f8);
    }
  }
  FUN_18041d5d0(param_1,1);
  FUN_18063ab10(&local_838,0,0x600);
  local_940 = (char *)CONCAT44(local_940._4_4_,DAT_180c7d898);
  local_948 = (char *)CONCAT44(local_948._4_4_,(uint)(DAT_180c7d8a0 != 0));
  local_938 = (char *)param_1;
  FUN_18015ad60(&local_838,0x600,0xffffffffffffffff,"registered=%d entries=%lu image=0x%llx");
  ppuVar20 = &PTR_180700558;
  ppuVar13 = &PTR_180700558;
  if ((char)local_838 != '\0') {
    ppuVar13 = (undefined **)&DAT_1806bcfc0;
  }
  local_940 = (char *)&local_838;
  local_948 = (char *)ppuVar13;
  FUN_1800f6900(1);
  FUN_18063ab10(&local_838,0,0x600);
  local_938 = (char *)CONCAT44(local_938._4_4_,local_8b0);
  local_940 = (char *)CONCAT44(local_940._4_4_,(bVar21 ^ 1) + local_8b8._4_4_);
  local_948 = (char *)CONCAT44(local_948._4_4_,(undefined4)local_8b8);
  FUN_18015ad60(&local_838,0x600,0xffffffffffffffff,"moved=%u deferred=%u rejected=%u");
  ppuVar13 = &PTR_180700558;
  if ((char)local_838 != '\0') {
    ppuVar13 = (undefined **)&DAT_1806bcfc0;
  }
  local_940 = (char *)&local_838;
  local_948 = (char *)ppuVar13;
  FUN_1800f6900(1);
  FUN_18063ab10(&local_838,0,0x600);
  local_948 = s_uninitialized_1808d7d90;
  local_940 = (char *)param_1;
  FUN_18015ad60(&local_838,0x600,0xffffffffffffffff,"operation=%s state=thread_started module=0x%p")
  ;
  ppuVar13 = &PTR_180700558;
  if ((char)local_838 != '\0') {
    ppuVar13 = (undefined **)&DAT_1806bcfc0;
  }
  local_940 = (char *)&local_838;
  local_948 = (char *)ppuVar13;
  FUN_1800f6900(1);
  FUN_1800aa120("stage: thread start");
  DAT_180c62ba0 = SetUnhandledExceptionFilter(FUN_18041d410);
  DAT_180c62ba8 = AddVectoredExceptionHandler(1,FUN_18041d180);
  if (DAT_180c62ba8 == (PVOID)0x0) {
    GetLastError();
    FUN_180420530();
  }
  else {
    FUN_1800a9e50(1);
  }
  FUN_1800aa120();
  HVar7 = CoInitializeEx((LPVOID)0x0,0);
  DAT_180bbec8c = (byte)((uint)HVar7 >> 0x1f) ^ 1;
  if (HVar7 < 0) {
    FUN_18063ab10(&local_838,0,0x800);
    local_948 = (char *)CONCAT44(local_948._4_4_,HVar7);
    FUN_18015ad60(&local_838,0x800,0xffffffffffffffff,"CoInitializeEx failed; hresult=0x%08lX");
    FUN_1800a9e50(2,&local_838);
  }
  FUN_1800aa120("stage: loader bridge");
  FUN_18063ab10(&local_838,0,0x600);
  local_938 = (char *)CONCAT44(local_938._4_4_,uVar1);
  local_940 = (char *)CONCAT44(local_940._4_4_,local_8d8._4_4_);
  local_948 = (char *)CONCAT44(local_948._4_4_,local_8d8._0_4_);
  FUN_18015ad60(&local_838,0x600,0xffffffffffffffff,
                "moved=%u deferred=%u rejected=%u unknown_files=preserved external=untouched");
  ppuVar13 = &PTR_180700558;
  if ((char)local_838 != '\0') {
    ppuVar13 = (undefined **)&DAT_1806bcfc0;
  }
  local_940 = (char *)&local_838;
  local_948 = (char *)ppuVar13;
  FUN_1800f6900(1);
  cVar5 = FUN_180001950(param_1);
  if (cVar5 == '\0') {
    FUN_180001480();
    local_938 = "Mapped runtime code does not match the verified delivery.";
  }
  else {
    cVar5 = FUN_1800e4230();
    if (cVar5 != '\0') {
      FUN_1800aa120("stage: config");
      FUN_18041c340();
      FUN_1800e1d10();
      local_8e8 = ZEXT816(7) << 0x40;
      lVar15 = 0;
      local_8f8._2_14_ = SUB1614((undefined1  [16])0x0,2);
      auVar2._14_2_ = 0;
      auVar2._0_14_ = local_8f8._2_14_;
      local_8f8 = auVar2 << 0x10;
      FUN_18015c540(local_8f8);
      FUN_18015b930(local_8f8);
      FUN_1800e4880(1);
      puVar12 = (undefined8 *)FUN_18016b790(&DAT_180bb8af0,local_8a8,&DAT_180bb8eb0);
      local_8d8._0_8_ = puVar12;
      if (0xf < (ulonglong)puVar12[3]) {
        local_8d8._0_8_ = *puVar12;
      }
      local_8d8._8_8_ = puVar12[2];
      FUN_18041cb40(local_8d8);
      FUN_18015c010(local_8a8);
      FUN_1800aa120("stage: regions");
      plVar16 = DAT_180c62c28;
      local_8d8._8_4_ = *(uint *)((longlong)*(int *)(param_1 + 0x3c) + 0x50 + param_1);
      local_8d8._0_8_ = param_1;
      local_8d8._12_4_ = 0;
      if (DAT_180c62c28 == DAT_180c62c30) {
        FUN_180454d30((ulonglong)(uint)local_8d8._8_4_,DAT_180c62c28,local_8d8);
      }
      else {
        *DAT_180c62c28 = param_1;
        plVar16[1] = (ulonglong)(uint)local_8d8._8_4_;
        DAT_180c62c28 = DAT_180c62c28 + 2;
      }
      FUN_1800aa120("stage: logging");
      FUN_1800aa120("stage: logging console begin");
      FUN_18044f500();
      FUN_1800aa120("stage: logging console ready");
      FUN_1800aa120("stage: logging popup begin");
      cVar5 = FUN_180450a80();
      if (cVar5 == '\0') {
        FUN_1800a9e50(2,"popup logging unavailable; continuing with file diagnostics");
      }
      FUN_1800aa120("stage: logging popup complete");
      FUN_1800aa120("stage: integrity");
      FUN_1800aa120("stage: integrity checks begin");
      FUN_1800aa120("stage: integrity checks ready");
      FUN_1800aa120("stage: threadpool begin");
      if (DAT_180c7dfa8 == (HMODULE)0x0) {
        local_8f8 = (undefined1  [16])0x0;
        local_8e8 = (undefined1  [16])0x0;
        FUN_18015ba30(local_8f8,"tier0.dll",9);
        lpModuleName = local_8f8;
        if (0xf < (ulonglong)local_8e8._8_8_) {
          lpModuleName = (LPCSTR)local_8f8._0_8_;
        }
        pHVar14 = GetModuleHandleA(lpModuleName);
        thunk_FUN_18015c010(local_8f8);
        if (pHVar14 != (HMODULE)0x0) {
          DAT_180c7dfa8 = pHVar14;
          goto LAB_18041e02a;
        }
LAB_18041f014:
        local_938 = "failed to initialize thread pool.";
      }
      else {
LAB_18041e02a:
        pHVar14 = DAT_180c7dfa8;
        if (DAT_180c7dfb0 == (longlong *)0x0) {
          local_8d8._8_8_ = 0x17;
          local_8d8._0_8_ = "tier0.dll:g_pThreadPool";
          DAT_180c7dfb0 = (longlong *)FUN_180451750(local_8d8);
        }
        DAT_180c7dfc0 = *DAT_180c7dfb0;
        if (DAT_180c7dfc0 == 0) goto LAB_18041f014;
        local_908[0] = 0xa05181ee77d57a06;
        local_8d8._8_8_ = 0x626f4a6e6f6974;
        local_8d8._0_8_ = 0x636e754664745343;
        lVar24 = -1;
        do {
          local_928._8_8_ = lVar24 + 1;
          lVar3 = lVar24 + 1;
          lVar24 = local_928._8_8_;
        } while (local_8d8[lVar3] != '\0');
        local_928._0_8_ = local_8d8;
        DAT_180c7dfb8 = FUN_180453d10(pHVar14,local_928);
        if (DAT_180c7dfb8 == 0) goto LAB_18041f014;
        FUN_1800aa120("stage: threadpool ready");
        FUN_1800aa120("stage: steam http begin");
        if (DAT_180c7df58 == 0) {
          local_928._8_8_ = 0x27;
          local_928._0_8_ = "steam_api64.dll:SteamAPI_SteamHTTP_v003";
          DAT_180c7df58 = FUN_180451750(local_928);
          if (DAT_180c7df58 != 0) goto LAB_18041e178;
          DAT_180c7df68 = lVar15;
        }
        else {
LAB_18041e178:
          DAT_180c7df68 = (*(code *)DAT_180c7df58)();
        }
        if (DAT_180c7df60 == 0) {
          local_928._8_8_ = 0x28;
          local_928._0_8_ = "steam_api64.dll:SteamAPI_SteamUtils_v010";
          DAT_180c7df60 = FUN_180451750(local_928);
          if (DAT_180c7df60 != 0) goto LAB_18041e1c1;
        }
        else {
LAB_18041e1c1:
          lVar15 = (*(code *)DAT_180c7df60)();
        }
        _DAT_180c7df70 = lVar15;
        if ((DAT_180c7df68 == 0) || (lVar15 == 0)) {
          local_938 = "failed to initialize steam http.";
        }
        else {
          FUN_1800aa120("stage: steam http ready");
          FUN_1800aa120("stage: steam friends begin");
          if (DAT_180c7df50 == 0) {
            local_928._8_8_ = 0x2a;
            local_928._0_8_ = "steam_api64.dll:SteamAPI_SteamFriends_v018";
            DAT_180c7df50 = FUN_180451750(local_928);
            if (DAT_180c7df50 == 0) {
              DAT_180c7df48 = 0;
              local_938 = "failed to initialize steam friends.";
              goto LAB_18041f01b;
            }
          }
          DAT_180c7df48 = (*(code *)DAT_180c7df50)();
          if (DAT_180c7df48 == 0) {
            local_938 = "failed to initialize steam friends.";
          }
          else {
            FUN_1800aa120("stage: steam friends ready");
            FUN_1800aa120("stage: steam user begin");
            if (DAT_180c7df80 == 0) {
              local_928._8_8_ = 0x27;
              local_928._0_8_ = "steam_api64.dll:SteamAPI_SteamUser_v023";
              DAT_180c7df80 = FUN_180451750(local_928);
              if (DAT_180c7df80 == 0) {
                _DAT_180c7df78 = 0;
                local_938 = "failed to initialize steam user.";
                goto LAB_18041f01b;
              }
            }
            _DAT_180c7df78 = (*(code *)DAT_180c7df80)();
            if (_DAT_180c7df78 == 0) {
              local_938 = "failed to initialize steam user.";
            }
            else {
              FUN_1800aa120("stage: steam user ready");
              FUN_1800aa120("stage: steam utils begin");
              if (DAT_180c7df98 == 0) {
                local_928._8_8_ = 0x28;
                local_928._0_8_ = "steam_api64.dll:SteamAPI_SteamUtils_v010";
                DAT_180c7df98 = FUN_180451750(local_928);
                if (DAT_180c7df98 == 0) {
                  DAT_180c7df90 = 0;
                  local_938 = "failed to initialize steam utils.";
                  goto LAB_18041f01b;
                }
              }
              DAT_180c7df90 = (*(code *)DAT_180c7df98)();
              if (DAT_180c7df90 == 0) {
                local_938 = "failed to initialize steam utils.";
              }
              else {
                FUN_1800aa120("stage: steam utils ready");
                FUN_1800aa120("stage: addresses");
                DVar8 = GetCurrentProcessId();
                FUN_18063ab10(&local_838,0,0x600);
                local_940 = (char *)CONCAT44(local_940._4_4_,DVar8);
                local_948 = s_uninitialized_1808d7d90;
                FUN_18015ad60(&local_838,0x600,0xffffffffffffffff,
                              "operation=%s process=cs2.exe pid=%lu");
                ppuVar13 = &PTR_180700558;
                if ((char)local_838 != '\0') {
                  ppuVar13 = (undefined **)&DAT_1806bcfc0;
                }
                local_940 = (char *)&local_838;
                local_948 = (char *)ppuVar13;
                FUN_1800f6900(1);
                DVar8 = GetCurrentProcessId();
                FUN_18063ab10(&local_838,0,0x600);
                local_940 = (char *)CONCAT44(local_940._4_4_,DVar8);
                local_948 = s_uninitialized_1808d7d90;
                FUN_18015ad60(&local_838,0x600,0xffffffffffffffff,"operation=%s pid=%lu");
                ppuVar13 = &PTR_180700558;
                if ((char)local_838 != '\0') {
                  ppuVar13 = (undefined **)&DAT_1806bcfc0;
                }
                local_940 = (char *)&local_838;
                local_948 = (char *)ppuVar13;
                FUN_1800f6900(1);
                FUN_1800aa120("stage: addresses modules begin");
                cVar5 = FUN_18044bd30();
                if (cVar5 == '\0') {
                  DVar8 = GetCurrentProcessId();
                  FUN_18063ab10(&local_838,0,0x600);
                  local_948 = (char *)CONCAT44(local_948._4_4_,DVar8);
                  FUN_18015ad60(&local_838,0x600,0xffffffffffffffff,
                                "process=cs2.exe pid=%lu state=modules_unavailable");
                  ppuVar13 = &PTR_180700558;
                  if ((char)local_838 != '\0') {
                    ppuVar13 = (undefined **)&DAT_1806bcfc0;
                  }
                  local_940 = (char *)&local_838;
                  local_948 = (char *)ppuVar13;
                  FUN_1800f6900(3);
                  DVar8 = GetCurrentProcessId();
                  FUN_18063ab10(&local_838,0,0x600);
                  local_948 = (char *)CONCAT44(local_948._4_4_,DVar8);
                  FUN_18015ad60(&local_838,0x600,0xffffffffffffffff,
                                "pid=%lu state=modules_unavailable");
                  if ((char)local_838 != '\0') {
                    ppuVar20 = (undefined **)&DAT_1806bcfc0;
                  }
                  local_940 = (char *)&local_838;
                  local_948 = (char *)ppuVar20;
                  FUN_1800f6900(3);
                  local_938 = "failed to initialize module addresses.";
                }
                else {
                  DVar8 = GetCurrentProcessId();
                  FUN_18063ab10(&local_838,0,0x600);
                  local_948 = (char *)CONCAT44(local_948._4_4_,DVar8);
                  FUN_18015ad60(&local_838,0x600,0xffffffffffffffff,
                                "process=cs2.exe pid=%lu state=modules_ready");
                  ppuVar13 = &PTR_180700558;
                  if ((char)local_838 != '\0') {
                    ppuVar13 = (undefined **)&DAT_1806bcfc0;
                  }
                  local_940 = (char *)&local_838;
                  local_948 = (char *)ppuVar13;
                  FUN_1800f6900(1);
                  DVar8 = GetCurrentProcessId();
                  FUN_18063ab10(&local_838,0,0x600);
                  local_948 = (char *)CONCAT44(local_948._4_4_,DVar8);
                  FUN_18015ad60(&local_838,0x600,0xffffffffffffffff,
                                "previous_pid=0 current_pid=%lu reason=initial_attach");
                  ppuVar13 = &PTR_180700558;
                  if ((char)local_838 != '\0') {
                    ppuVar13 = (undefined **)&DAT_1806bcfc0;
                  }
                  local_940 = (char *)&local_838;
                  local_948 = (char *)ppuVar13;
                  FUN_1800f6900(1);
                  DVar8 = GetCurrentProcessId();
                  FUN_18063ab10(&local_838,0,0x600);
                  local_948 = (char *)CONCAT44(local_948._4_4_,DVar8);
                  FUN_18015ad60(&local_838,0x600,0xffffffffffffffff,"pid=%lu state=modules_ready");
                  ppuVar13 = &PTR_180700558;
                  if ((char)local_838 != '\0') {
                    ppuVar13 = (undefined **)&DAT_1806bcfc0;
                  }
                  local_940 = (char *)&local_838;
                  local_948 = (char *)ppuVar13;
                  FUN_1800f6900(1);
                  DVar8 = GetCurrentProcessId();
                  FUN_18063ab10(&local_838,0,0x600);
                  local_948 = (char *)CONCAT44(local_948._4_4_,DVar8);
                  FUN_18015ad60(&local_838,0x600,0xffffffffffffffff,
                                "previous_pid=0 current_pid=%lu reason=initial_attach");
                  ppuVar13 = &PTR_180700558;
                  if ((char)local_838 != '\0') {
                    ppuVar13 = (undefined **)&DAT_1806bcfc0;
                  }
                  local_940 = (char *)&local_838;
                  local_948 = (char *)ppuVar13;
                  FUN_1800f6900(1);
                  FUN_1800aa120("stage: addresses modules ready");
                  FUN_1800aa120("stage: addresses globals begin");
                  cVar5 = FUN_18044a8e0();
                  if (cVar5 == '\0') {
                    local_938 = "failed to initialize global addresses.";
                  }
                  else {
                    FUN_1800aa120("stage: addresses globals ready");
                    FUN_1800aa120("stage: addresses functions begin");
                    cVar5 = FUN_180449ea0(&DAT_180c709f0,&DAT_180c70980);
                    if (cVar5 == '\0') {
                      local_938 = "failed to initialize function addresses.";
                    }
                    else {
                      FUN_1800aa120("stage: addresses functions ready");
                      FUN_1800aa120("stage: systems");
                      FUN_1800aa120("stage: systems materials begin");
                      cVar5 = FUN_1803e4ad0();
                      if (cVar5 == '\0') {
                        local_938 = "failed to initialize materials system.";
                      }
                      else {
                        FUN_1800aa120("stage: systems materials ready");
                        FUN_1800aa120("stage: systems events begin");
                        cVar5 = FUN_1803d49f0();
                        if (cVar5 == '\0') {
                          local_938 = "failed to initialize event system.";
                        }
                        else {
                          FUN_1800aa120("stage: systems events ready");
                          FUN_1800aa120("stage: systems icons begin");
                          FUN_1803dcda0(&DAT_180cc9270);
                          FUN_1803dcc50(&DAT_180cc92f0);
                          FUN_1803dccd0(&DAT_180cc92b0);
                          pcVar23 = "+BF^";
                          do {
                            lVar15 = *(longlong *)(pcVar23 + 8);
                            plVar16 = (longlong *)FUN_1803dd2a0(&DAT_180cc92b0,local_928,pcVar23);
                            lVar24 = -1;
                            do {
                              lVar24 = lVar24 + 1;
                            } while (*(char *)(lVar15 + lVar24) != '\0');
                            FUN_180113930(*plVar16 + 0x18,lVar15);
                            pcVar23 = pcVar23 + 0x10;
                          } while (pcVar23 !=
                                   "<!-- kv3 encoding:text:version{e21c7f3c-8a33-41c5-9977-a76d3a32aa0d}\n            format:generic:version{7412167c-06e9-4698-aff2-e63eb59037e7} -->\n            {\n                shader = \"csgo_effects.vfx\"\n                F_TRANSLUCENT = 1\n                F_ADDITIVE_BLEND = 0\n                F_RENDER_BACKFACES = 0\n                F_DISABLE_Z_BUFFERING = 0\n                F_DISABLE_Z_PREPASS = 1\n                F_DISABLE_Z_WRITE = 1\n                F_DO_NOT_CAST_SHADOWS = 1\n                g_vColorTint = [1.0, 1.0, 1.0, 1.0]\n                g_flOpacityScale = 1.0\n                g_flColorBoost = 1.0\n                g_flFresnelExponent = 0.80\n                g_flFresnelFalloff = 1.0\n                g_flFresnelMin = 1.00\n                g_flFresnelMax = 0.50\n                g_tColor = resource:\"materials/dev/primary_white_color_tga_21186c76.vtex\"\n                g_tMask1 = resource:\"materials/default/default_mask_tga_344101f8.vtex\"\n                g_tMask2 = resource:\"materials/default/default_mask_tga_344101f8.vtex\"\n                g_tMask3 = resource:\"materials/default/default_mask_tga_344101f8.vtex\"\n            }"
                                  );
                          FUN_1801d8420(local_888);
                          if (local_868 == '\0') {
                            local_928._8_8_ = 0x2b;
                            local_928._0_8_ = "[icons] CS2 content directory was not found";
                            FUN_18020e620(local_928);
                            if (local_868 == '\0') goto LAB_18041e916;
                            FUN_18015b930(local_888);
                            local_938 = "failed to initialize vpk parse system.";
                          }
                          else {
                            local_8f8 = (undefined1  [16])0x0;
                            local_8e8 = ZEXT816(0);
                            FUN_180159e60(local_8f8,L"pak01_dir.vpk",0xd);
                            uVar10 = FUN_1800a7e60(local_8a8,local_888,local_8f8);
                            cVar5 = FUN_1803dba10(extraout_XMM0_Qa,uVar10);
                            FUN_18015b930(local_8a8);
                            FUN_18015b930(local_8f8);
                            if (local_868 != '\0') {
                              FUN_18015b930(local_888);
                            }
                            if (cVar5 == '\0') {
LAB_18041e916:
                              local_938 = "failed to initialize vpk parse system.";
                            }
                            else {
                              FUN_1800aa120("stage: systems icons ready");
                              FUN_1800aa120("stage: systems model preview begin");
                              DAT_180c71968 = 1;
                              _DAT_180c71970 = 0;
                              local_928._8_8_ = 0x1b;
                              local_928._0_8_ = "[model_preview] initialized";
                              FUN_18020e620(local_928);
                              FUN_1800aa120("stage: systems model preview ready");
                              FUN_1800aa120("stage: econ");
                              FUN_1800aa120("stage: econ item system begin");
                              cVar5 = FUN_180207540(&DAT_180cc9bb0);
                              if (cVar5 == '\0') {
                                local_938 = "failed to initialize econ item system.";
                              }
                              else {
                                FUN_1800aa120("stage: econ item system ready");
                                FUN_1800aa120("stage: hooks");
                                FUN_1800aa120("stage: hooks utility begin");
                                cVar5 = FUN_1803b0bd0();
                                if (cVar5 == '\0') {
                                  local_938 = "failed to initialize utility hooks.";
                                }
                                else {
                                  FUN_1800aa120("stage: hooks utility ready");
                                  FUN_1800aa120("stage: hooks cheat begin");
                                  cVar5 = FUN_1803790c0();
                                  if (cVar5 == '\0') {
                                    FUN_18063ab10(&local_838,0,0x600);
                                    local_948 = s_uninitialized_1808d7d90;
                                    FUN_18015ad60(&local_838,0x600,0xffffffffffffffff,
                                                  "operation=%s reason=cheat_hooks_unavailable");
                                    ppuVar13 = &PTR_180700558;
                                    if ((char)local_838 != '\0') {
                                      ppuVar13 = (undefined **)&DAT_1806bcfc0;
                                    }
                                    local_940 = (char *)&local_838;
                                    local_948 = (char *)ppuVar13;
                                    FUN_1800f6900(3);
                                    FUN_18063ab10(&local_838,0,0x600);
                                    local_948 = s_uninitialized_1808d7d90;
                                    FUN_18015ad60(&local_838,0x600,0xffffffffffffffff,
                                                  "operation=%s reason=cheat_hooks_unavailable");
                                    if ((char)local_838 != '\0') {
                                      ppuVar20 = (undefined **)&DAT_1806bcfc0;
                                    }
                                    local_940 = (char *)&local_838;
                                    local_948 = (char *)ppuVar20;
                                    FUN_1800f6900(3);
                                    local_938 = "failed to initialize cheat hooks.";
                                  }
                                  else {
                                    FUN_1800aa120("stage: hooks cheat ready");
                                    FUN_1800aa120("stage: cvars");
                                    FUN_1800aa120("stage: cvars unlock begin");
                                    cVar5 = FUN_18044cc90();
                                    if (cVar5 == '\0') {
                                      local_938 = "failed to unlock hidden cvars.";
                                    }
                                    else {
                                      FUN_1800aa120("stage: cvars unlock ready");
                                      FUN_1800aa120("stage: skyboxes begin");
                                      FUN_18036c6a0();
                                      FUN_1800aa120("stage: skyboxes ready");
                                      FUN_18063ab10(&local_838,0,0x600);
                                      local_948 = s_uninitialized_1808d7d90;
                                      FUN_18015ad60(&local_838,0x600,0xffffffffffffffff,
                                                    "operation=%s state=activating_hooks");
                                      ppuVar13 = &PTR_180700558;
                                      if ((char)local_838 != '\0') {
                                        ppuVar13 = (undefined **)&DAT_1806bcfc0;
                                      }
                                      local_940 = (char *)&local_838;
                                      local_948 = (char *)ppuVar13;
                                      FUN_1800f6900(1);
                                      FUN_18063ab10(&local_838,0,0x600);
                                      local_948 = s_uninitialized_1808d7d90;
                                      FUN_18015ad60(&local_838,0x600,0xffffffffffffffff,
                                                    "operation=%s state=activating_hooks");
                                      ppuVar13 = &PTR_180700558;
                                      if ((char)local_838 != '\0') {
                                        ppuVar13 = (undefined **)&DAT_1806bcfc0;
                                      }
                                      local_940 = (char *)&local_838;
                                      local_948 = (char *)ppuVar13;
                                      FUN_1800f6900(1);
                                      uVar4 = DAT_1808d9bd8;
                                      DAT_180c70e20 = 0;
                                      DAT_1808d9bd8 = 1;
                                      FUN_180378230(uVar4,1,"runtime_activated");
                                      DAT_180c70b40 = 1;
                                      FUN_1800aa120("stage: cheat detours active");
                                      FUN_1800aa120("stage: render and input readiness");
                                      UVar17 = GetTickCount64();
                                      while ((DAT_180c70e20 == 0 &&
                                             (UVar18 = GetTickCount64(), UVar18 < UVar17 + 8000))) {
                                        Sleep(10);
                                      }
                                      if ((DAT_180c70e21 != 0) && (DAT_180c70e20 != 0)) {
                                        FUN_18063ab10(&local_838,0,0x600);
                                        local_948 = s_uninitialized_1808d7d90;
                                        FUN_18015ad60(&local_838,0x600,0xffffffffffffffff,
                                                      "operation=%s state=hooks_active");
                                        ppuVar13 = &PTR_180700558;
                                        if ((char)local_838 != '\0') {
                                          ppuVar13 = (undefined **)&DAT_1806bcfc0;
                                        }
                                        local_940 = (char *)&local_838;
                                        local_948 = (char *)ppuVar13;
                                        FUN_1800f6900(1);
                                        FUN_18063ab10(&local_838,0,0x600);
                                        local_948 = s_uninitialized_1808d7d90;
                                        FUN_18015ad60(&local_838,0x600,0xffffffffffffffff,
                                                      "operation=%s state=hooks_active");
                                        ppuVar13 = &PTR_180700558;
                                        if ((char)local_838 != '\0') {
                                          ppuVar13 = (undefined **)&DAT_1806bcfc0;
                                        }
                                        local_940 = (char *)&local_838;
                                        local_948 = (char *)ppuVar13;
                                        FUN_1800f6900(1);
                                        BVar9 = SetEvent(DAT_180c62b68);
                                        if ((BVar9 == 0) ||
                                           (BVar9 = SetEvent(DAT_180c62b70), BVar9 == 0)) {
                                          DVar8 = GetLastError();
                                          ResetEvent(DAT_180c62b68);
                                          DAT_180c70b40 = 0;
                                          DAT_180c70e20 = 0;
                                          FUN_1803d1ad0();
                                          DAT_180c70e21 = 0;
                                          FUN_18063ab10(&local_838,0,0x600);
                                          local_940 = (char *)CONCAT44(local_940._4_4_,DVar8);
                                          local_948 = s_uninitialized_1808d7d90;
                                          FUN_18015ad60(&local_838,0x600,0xffffffffffffffff,
                                                                                                                
                                                  "operation=%s step=loader_signal win32_error=%lu")
                                          ;
                                          if ((char)local_838 != '\0') {
                                            ppuVar20 = (undefined **)&DAT_1806bcfc0;
                                          }
                                          local_940 = (char *)&local_838;
                                          local_948 = (char *)ppuVar20;
                                          uVar10 = FUN_1800f6900(3);
                                          FUN_180420530(uVar10,
                                                  "failed to signal loader initialization event; win32_error=%lu"
                                                  ,DVar8);
                                        }
                                        else {
                                          FUN_1800aa120("stage: done");
                                          FUN_18063ab10(&local_838,0,0x600);
                                          local_948 = s_uninitialized_1808d7d90;
                                          FUN_18015ad60(&local_838,0x600,0xffffffffffffffff,
                                                                                                                
                                                  "operation=%s state=loader_signaled core=validated events=ready render_input=ready world=deferred_until_map"
                                                  );
                                          ppuVar13 = &PTR_180700558;
                                          if ((char)local_838 != '\0') {
                                            ppuVar13 = (undefined **)&DAT_1806bcfc0;
                                          }
                                          local_940 = (char *)&local_838;
                                          local_948 = (char *)ppuVar13;
                                          FUN_1800f6900(1);
                                          FUN_18063ab10(&local_838,0,0x600);
                                          local_938 = "46abdc405729fb40dc0824ff08d3cae4e97ab678";
                                          local_940 = "0.1.411";
                                          local_948 = s_uninitialized_1808d7d90;
                                          FUN_18015ad60(&local_838,0x600,0xffffffffffffffff,
                                                        "operation=%s version=%s build=%s");
                                          ppuVar13 = &PTR_180700558;
                                          if ((char)local_838 != '\0') {
                                            ppuVar13 = (undefined **)&DAT_1806bcfc0;
                                          }
                                          local_940 = (char *)&local_838;
                                          local_948 = (char *)ppuVar13;
                                          FUN_1800f6900(1);
                                          FUN_18063ab10(&local_838,0,0x600);
                                          local_938 = "46abdc405729fb40dc0824ff08d3cae4e97ab678";
                                          local_940 = "0.1.411";
                                          local_948 = s_uninitialized_1808d7d90;
                                          FUN_18015ad60(&local_838,0x600,0xffffffffffffffff,
                                                        "operation=%s version=%s build=%s");
                                          if ((char)local_838 != '\0') {
                                            ppuVar20 = (undefined **)&DAT_1806bcfc0;
                                          }
                                          local_940 = (char *)&local_838;
                                          local_948 = (char *)ppuVar20;
                                          FUN_1800f6900(1);
                                        }
                                        goto LAB_18041f02d;
                                      }
                                      uVar22 = (uint)DAT_180c70e20;
                                      uVar19 = (uint)DAT_180c70e21;
                                      DAT_180c70b40 = 0;
                                      DAT_180c70e20 = 0;
                                      FUN_1803d1ad0();
                                      DAT_180c70e21 = 0;
                                      FUN_18063ab10(&local_838,0,0x600);
                                      local_940 = (char *)CONCAT44(local_940._4_4_,uVar22);
                                      local_948 = (char *)CONCAT44(local_948._4_4_,uVar19);
                                      FUN_18015ad60(&local_838,0x600,0xffffffffffffffff,
                                                                                                        
                                                  "events=%d render_input=%d timeout_ms=8000 action=inactive_restart_required"
                                                  );
                                      if ((char)local_838 != '\0') {
                                        ppuVar20 = (undefined **)&DAT_1806bcfc0;
                                      }
                                      local_940 = (char *)&local_838;
                                      local_948 = (char *)ppuVar20;
                                      FUN_1800f6900(3);
                                      local_938 = 
                                      "render/input runtime did not become ready; restart CS2 before retrying."
                                      ;
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
LAB_18041f01b:
      local_948 = s_uninitialized_1808d7d90;
      FUN_1804205c0();
      goto LAB_18041f02d;
    }
    FUN_1800e47e0();
    FUN_180001480();
    local_938 = "failed to authorize the HVHGODS loader/API bridge.";
  }
  local_948 = s_uninitialized_1808d7d90;
  FUN_1804205c0();
LAB_18041f02d:
  FUN_18015b930(local_860);
}



