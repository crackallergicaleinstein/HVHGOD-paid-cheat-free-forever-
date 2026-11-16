// FUN_18041fca0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18041fca0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void entry(HMODULE param_1,int param_2,longlong param_3)

{
  char cVar1;
  DWORD DVar2;
  BOOL BVar3;
  int iVar4;
  HMODULE hModule;
  FARPROC lpBaseAddress;
  HANDLE pvVar5;
  char *lpOutputString;
  undefined8 extraout_XMM0_Qa;
  undefined8 uVar6;
  undefined1 auStackY_1f8 [32];
  longlong local_1c8;
  SIZE_T local_1c0;
  CHAR local_1b8 [96];
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  CHAR local_f8 [96];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_1808d5f00 ^ (ulonglong)auStackY_1f8;
  if (param_2 == 1) {
    local_1b8[0] = '\0';
    local_1b8[1] = '\0';
    local_1b8[2] = '\0';
    local_1b8[3] = '\0';
    local_1b8[4] = '\0';
    local_1b8[5] = '\0';
    local_1b8[6] = '\0';
    local_1b8[7] = '\0';
    local_1b8[8] = '\0';
    local_1b8[9] = '\0';
    local_1b8[10] = '\0';
    local_1b8[0xb] = '\0';
    local_1b8[0xc] = '\0';
    local_1b8[0xd] = '\0';
    local_1b8[0xe] = '\0';
    local_1b8[0xf] = '\0';
    local_1b8[0x10] = '\0';
    local_1b8[0x11] = '\0';
    local_1b8[0x12] = '\0';
    local_1b8[0x13] = '\0';
    local_1b8[0x14] = '\0';
    local_1b8[0x15] = '\0';
    local_1b8[0x16] = '\0';
    local_1b8[0x17] = '\0';
    local_1b8[0x18] = '\0';
    local_1b8[0x19] = '\0';
    local_1b8[0x1a] = '\0';
    local_1b8[0x1b] = '\0';
    local_1b8[0x1c] = '\0';
    local_1b8[0x1d] = '\0';
    local_1b8[0x1e] = '\0';
    local_1b8[0x1f] = '\0';
    local_1b8[0x20] = '\0';
    local_1b8[0x21] = '\0';
    local_1b8[0x22] = '\0';
    local_1b8[0x23] = '\0';
    local_1b8[0x24] = '\0';
    local_1b8[0x25] = '\0';
    local_1b8[0x26] = '\0';
    local_1b8[0x27] = '\0';
    local_1b8[0x28] = '\0';
    local_1b8[0x29] = '\0';
    local_1b8[0x2a] = '\0';
    local_1b8[0x2b] = '\0';
    local_1b8[0x2c] = '\0';
    local_1b8[0x2d] = '\0';
    local_1b8[0x2e] = '\0';
    local_1b8[0x2f] = '\0';
    local_1b8[0x30] = '\0';
    local_1b8[0x31] = '\0';
    local_1b8[0x32] = '\0';
    local_1b8[0x33] = '\0';
    local_1b8[0x34] = '\0';
    local_1b8[0x35] = '\0';
    local_1b8[0x36] = '\0';
    local_1b8[0x37] = '\0';
    local_1b8[0x38] = '\0';
    local_1b8[0x39] = '\0';
    local_1b8[0x3a] = '\0';
    local_1b8[0x3b] = '\0';
    local_1b8[0x3c] = '\0';
    local_1b8[0x3d] = '\0';
    local_1b8[0x3e] = '\0';
    local_1b8[0x3f] = '\0';
    local_1b8[0x40] = '\0';
    local_1b8[0x41] = '\0';
    local_1b8[0x42] = '\0';
    local_1b8[0x43] = '\0';
    local_1b8[0x44] = '\0';
    local_1b8[0x45] = '\0';
    local_1b8[0x46] = '\0';
    local_1b8[0x47] = '\0';
    local_1b8[0x48] = '\0';
    local_1b8[0x49] = '\0';
    local_1b8[0x4a] = '\0';
    local_1b8[0x4b] = '\0';
    local_1b8[0x4c] = '\0';
    local_1b8[0x4d] = '\0';
    local_1b8[0x4e] = '\0';
    local_1b8[0x4f] = '\0';
    local_1b8[0x50] = '\0';
    local_1b8[0x51] = '\0';
    local_1b8[0x52] = '\0';
    local_1b8[0x53] = '\0';
    local_1b8[0x54] = '\0';
    local_1b8[0x55] = '\0';
    local_1b8[0x56] = '\0';
    local_1b8[0x57] = '\0';
    local_1b8[0x58] = '\0';
    local_1b8[0x59] = '\0';
    local_1b8[0x5a] = '\0';
    local_1b8[0x5b] = '\0';
    local_1b8[0x5c] = '\0';
    local_1b8[0x5d] = '\0';
    local_1b8[0x5e] = '\0';
    local_1b8[0x5f] = '\0';
    GetCurrentProcessId();
    FUN_18015ad60(local_1b8,0x60,0xffffffffffffffff,"Local\\HVHGOD_INTERNAL_RUNTIME_%lu");
    DAT_180c62b98 = CreateMutexA((LPSECURITY_ATTRIBUTES)0x0,0,local_1b8);
    if (DAT_180c62b98 == (HANDLE)0x0) {
      lpOutputString = "HVHGOD runtime ownership mutex could not be created.";
    }
    else {
      DVar2 = GetLastError();
      if (DVar2 != 0xb7) {
        DAT_180bbec8d = 1;
        hModule = GetModuleHandleW(L"tier0.dll");
        if (hModule == (HMODULE)0x0) {
          local_1c8 = 0;
          local_1c0 = 0;
        }
        else {
          lpBaseAddress = GetProcAddress(hModule,"g_pMemAlloc");
          local_1c8 = 0;
          local_1c0 = 0;
          if (lpBaseAddress != (FARPROC)0x0) {
            pvVar5 = GetCurrentProcess();
            BVar3 = ReadProcessMemory(pvVar5,lpBaseAddress,&local_1c8,8,&local_1c0);
            if (((BVar3 != 0) && (local_1c0 == 8)) && (local_1c8 != 0)) {
              if (param_3 == 0) {
                FUN_18041fb10();
                if (DAT_180c62b80 != (HANDLE)0x0) {
                  CloseHandle(DAT_180c62b80);
                  DAT_180c62b80 = (HANDLE)0x0;
                }
                CloseHandle(DAT_180c62b98);
                DAT_180bbec8d = 0;
                DAT_180c62b98 = (HANDLE)0x0;
              }
              cVar1 = FUN_18041ce80(param_1);
              if (cVar1 == '\0') {
                FUN_18041fb10();
                if (DAT_180c62b80 != (HANDLE)0x0) {
                  CloseHandle(DAT_180c62b80);
                  DAT_180c62b80 = (HANDLE)0x0;
                }
                CloseHandle(DAT_180c62b98);
                DAT_180bbec8d = 0;
                DAT_180c62b98 = (HANDLE)0x0;
              }
              iVar4 = thunk_FUN_1805f61a8(param_1,1,param_3);
              if (iVar4 == 0) {
                FUN_18041d110();
                FUN_18041fb10();
                if (DAT_180c62b80 != (HANDLE)0x0) {
                  CloseHandle(DAT_180c62b80);
                  DAT_180c62b80 = (HANDLE)0x0;
                }
                CloseHandle(DAT_180c62b98);
                DAT_180bbec8d = 0;
                DAT_180c62b98 = (HANDLE)0x0;
              }
              DisableThreadLibraryCalls(param_1);
              local_158 = 0;
              uStack_150 = 0;
              uStack_148 = 0;
              uStack_140 = 0;
              local_138 = 0;
              uStack_130 = 0;
              uStack_128 = 0;
              uStack_120 = 0;
              local_118 = 0;
              uStack_110 = 0;
              uStack_108 = 0;
              uStack_100 = 0;
              GetCurrentProcessId();
              FUN_18015ad60(&local_158,0x60,0xffffffffffffffff,"Local\\HVHGOD_INTERNAL_STOPPING_%lu"
                           );
              DAT_180c62b80 = CreateEventA((LPSECURITY_ATTRIBUTES)0x0,1,0,(LPCSTR)&local_158);
              if (DAT_180c62b80 != (HANDLE)0x0) {
                ResetEvent(DAT_180c62b80);
                DAT_180c62b68 =
                     CreateEventA((LPSECURITY_ATTRIBUTES)0x0,1,0,"HVHGOD_INTERNAL_LOADED");
                if (DAT_180c62b68 == (HANDLE)0x0) {
                  FUN_18041d5d0(param_1);
                  DVar2 = GetLastError();
                  FUN_180420530(extraout_XMM0_Qa,
                                "failed to create loader initialization event; win32_error=%lu",
                                DVar2);
                }
                else {
                  DVar2 = WaitForSingleObject(DAT_180c62b68,0);
                  if (DVar2 == 0) {
                    FUN_18041d5d0(param_1,0);
                    GetCurrentProcessId();
                    FUN_1804206a0(2,"Initialization","DUPLICATE_RUNTIME_REJECTED",
                                  "operation=%s pid=%lu reason=legacy_runtime_ready_event");
                    CloseHandle(DAT_180c62b68);
                    DAT_180c62b68 = (HANDLE)0x0;
                  }
                  else {
                    ResetEvent(DAT_180c62b68);
                    local_f8[0] = '\0';
                    local_f8[1] = '\0';
                    local_f8[2] = '\0';
                    local_f8[3] = '\0';
                    local_f8[4] = '\0';
                    local_f8[5] = '\0';
                    local_f8[6] = '\0';
                    local_f8[7] = '\0';
                    local_f8[8] = '\0';
                    local_f8[9] = '\0';
                    local_f8[10] = '\0';
                    local_f8[0xb] = '\0';
                    local_f8[0xc] = '\0';
                    local_f8[0xd] = '\0';
                    local_f8[0xe] = '\0';
                    local_f8[0xf] = '\0';
                    local_f8[0x10] = '\0';
                    local_f8[0x11] = '\0';
                    local_f8[0x12] = '\0';
                    local_f8[0x13] = '\0';
                    local_f8[0x14] = '\0';
                    local_f8[0x15] = '\0';
                    local_f8[0x16] = '\0';
                    local_f8[0x17] = '\0';
                    local_f8[0x18] = '\0';
                    local_f8[0x19] = '\0';
                    local_f8[0x1a] = '\0';
                    local_f8[0x1b] = '\0';
                    local_f8[0x1c] = '\0';
                    local_f8[0x1d] = '\0';
                    local_f8[0x1e] = '\0';
                    local_f8[0x1f] = '\0';
                    local_f8[0x20] = '\0';
                    local_f8[0x21] = '\0';
                    local_f8[0x22] = '\0';
                    local_f8[0x23] = '\0';
                    local_f8[0x24] = '\0';
                    local_f8[0x25] = '\0';
                    local_f8[0x26] = '\0';
                    local_f8[0x27] = '\0';
                    local_f8[0x28] = '\0';
                    local_f8[0x29] = '\0';
                    local_f8[0x2a] = '\0';
                    local_f8[0x2b] = '\0';
                    local_f8[0x2c] = '\0';
                    local_f8[0x2d] = '\0';
                    local_f8[0x2e] = '\0';
                    local_f8[0x2f] = '\0';
                    local_f8[0x30] = '\0';
                    local_f8[0x31] = '\0';
                    local_f8[0x32] = '\0';
                    local_f8[0x33] = '\0';
                    local_f8[0x34] = '\0';
                    local_f8[0x35] = '\0';
                    local_f8[0x36] = '\0';
                    local_f8[0x37] = '\0';
                    local_f8[0x38] = '\0';
                    local_f8[0x39] = '\0';
                    local_f8[0x3a] = '\0';
                    local_f8[0x3b] = '\0';
                    local_f8[0x3c] = '\0';
                    local_f8[0x3d] = '\0';
                    local_f8[0x3e] = '\0';
                    local_f8[0x3f] = '\0';
                    local_f8[0x40] = '\0';
                    local_f8[0x41] = '\0';
                    local_f8[0x42] = '\0';
                    local_f8[0x43] = '\0';
                    local_f8[0x44] = '\0';
                    local_f8[0x45] = '\0';
                    local_f8[0x46] = '\0';
                    local_f8[0x47] = '\0';
                    local_f8[0x48] = '\0';
                    local_f8[0x49] = '\0';
                    local_f8[0x4a] = '\0';
                    local_f8[0x4b] = '\0';
                    local_f8[0x4c] = '\0';
                    local_f8[0x4d] = '\0';
                    local_f8[0x4e] = '\0';
                    local_f8[0x4f] = '\0';
                    local_f8[0x50] = '\0';
                    local_f8[0x51] = '\0';
                    local_f8[0x52] = '\0';
                    local_f8[0x53] = '\0';
                    local_f8[0x54] = '\0';
                    local_f8[0x55] = '\0';
                    local_f8[0x56] = '\0';
                    local_f8[0x57] = '\0';
                    local_f8[0x58] = '\0';
                    local_f8[0x59] = '\0';
                    local_f8[0x5a] = '\0';
                    local_f8[0x5b] = '\0';
                    local_f8[0x5c] = '\0';
                    local_f8[0x5d] = '\0';
                    local_f8[0x5e] = '\0';
                    local_f8[0x5f] = '\0';
                    local_98 = 0;
                    uStack_90 = 0;
                    uStack_88 = 0;
                    uStack_80 = 0;
                    local_78 = 0;
                    uStack_70 = 0;
                    uStack_68 = 0;
                    uStack_60 = 0;
                    local_58 = 0;
                    uStack_50 = 0;
                    uStack_48 = 0;
                    uStack_40 = 0;
                    GetCurrentProcessId();
                    FUN_18015ad60(local_f8,0x60,0xffffffffffffffff,
                                  "Local\\HVHGOD_INTERNAL_READY_%lu");
                    GetCurrentProcessId();
                    FUN_18015ad60(&local_98,0x60,0xffffffffffffffff,
                                  "Local\\HVHGOD_INTERNAL_START_FAILED_%lu");
                    DAT_180c62b70 = CreateEventA((LPSECURITY_ATTRIBUTES)0x0,1,0,local_f8);
                    DAT_180c62b78 = CreateEventA((LPSECURITY_ATTRIBUTES)0x0,1,0,(LPCSTR)&local_98);
                    if ((DAT_180c62b70 == (HANDLE)0x0) || (DAT_180c62b78 == (HANDLE)0x0)) {
                      FUN_18041d5d0(param_1,0);
                      FUN_1800e5f30(3,"Initialization","INITIALIZATION_FAILURE",
                                    "operation=%s step=create_process_events");
                    }
                    else {
                      ResetEvent(DAT_180c62b70);
                      ResetEvent(DAT_180c62b78);
                      cVar1 = FUN_1800012b0(param_3);
                      if (cVar1 != '\0') {
                        DAT_180c62b90 = param_1;
                        pvVar5 = CreateThread((LPSECURITY_ATTRIBUTES)0x0,0,FUN_18041f1c0,param_1,0,
                                              (LPDWORD)0x0);
                        if (pvVar5 != (HANDLE)0x0) {
                          DAT_180c62b88 = pvVar5;
                        }
                        DVar2 = GetLastError();
                        FUN_18041d5d0(param_1,0);
                        uVar6 = FUN_1804206a0(3,"Initialization","INITIALIZATION_FAILURE",
                                              "operation=%s step=create_thread win32_error=%lu");
                        FUN_180420530(uVar6,
                                      "failed to create initialization thread; win32_error=%lu",
                                      DVar2);
                      }
                    }
                  }
                }
              }
              FUN_18041fbb0(param_1,param_3);
            }
          }
        }
        OutputDebugStringA("HVHGOD runtime allocator dependency is unavailable.");
        FUN_18041fb10();
        if (DAT_180c62b80 != (HANDLE)0x0) {
          CloseHandle(DAT_180c62b80);
          DAT_180c62b80 = (HANDLE)0x0;
        }
        CloseHandle(DAT_180c62b98);
        DAT_180c62b98 = (HANDLE)0x0;
        DAT_180bbec8d = 0;
        FUN_18041fa90(param_1,param_3);
      }
      CloseHandle(DAT_180c62b98);
      lpOutputString = "DUPLICATE_RUNTIME_REJECTED: another runtime owns this process.";
    }
    DAT_180c62b98 = (HANDLE)0x0;
    OutputDebugStringA(lpOutputString);
    FUN_18041fa90(param_1,param_3);
  }
}



