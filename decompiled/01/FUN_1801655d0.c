// FUN_1801655d0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801655d0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1801655d0(undefined1 (*param_1) [16],int param_2)

{
  BOOL BVar1;
  int iVar2;
  HANDLE ProcessHandle;
  longlong lVar3;
  undefined8 uVar4;
  wchar_t *pwVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined1 auStackY_178 [32];
  undefined1 local_138 [16];
  undefined8 local_128;
  undefined8 local_120;
  undefined1 local_118 [16];
  undefined8 local_108;
  undefined8 local_100;
  undefined1 local_f8 [16];
  undefined8 local_e8;
  undefined8 local_e0;
  undefined1 local_d8 [16];
  undefined8 local_c8;
  undefined8 local_c0;
  undefined1 local_b8 [32];
  undefined1 local_98 [32];
  HANDLE local_78;
  HLOCAL local_70;
  undefined1 (*local_68) [16];
  DWORD local_60 [2];
  undefined1 local_58 [16];
  longlong local_48;
  undefined1 local_40 [32];
  ulonglong local_20;
  
  local_20 = DAT_1808d5f00 ^ (ulonglong)auStackY_178;
  local_78 = (HANDLE)0x0;
  local_68 = param_1;
  ProcessHandle = GetCurrentProcess();
  BVar1 = OpenProcessToken(ProcessHandle,8,&local_78);
  if (BVar1 == 0) {
    *(undefined8 *)*param_1 = 0;
    *(undefined8 *)(*param_1 + 8) = 0;
    *(undefined8 *)param_1[1] = 0;
    *(undefined8 *)(param_1[1] + 8) = 0;
    *param_1 = (undefined1  [16])0x0;
    *(undefined8 *)param_1[1] = 0;
    *(undefined8 *)(param_1[1] + 8) = 7;
    *(undefined2 *)*param_1 = 0;
  }
  local_60[0] = 0;
  GetTokenInformation(local_78,TokenUser,(LPVOID)0x0,0,local_60);
  uVar8 = (ulonglong)local_60[0];
  local_58 = (undefined1  [16])0x0;
  local_48 = 0;
  if (local_60[0] != 0) {
    lVar3 = FUN_18015bca0(local_60[0]);
    local_58._0_8_ = lVar3;
    lVar7 = lVar3 + uVar8;
    local_48 = lVar7;
    FUN_18063ab10(lVar3,0,uVar8);
    local_58._8_8_ = lVar7;
  }
  BVar1 = GetTokenInformation(local_78,TokenUser,(LPVOID)local_58._0_8_,local_60[0],local_60);
  CloseHandle(local_78);
  local_70 = (HLOCAL)0x0;
  if (BVar1 != 0) {
    iVar2 = ConvertSidToStringSidW(*(undefined8 *)local_58._0_8_,&local_70);
    if (iVar2 != 0) {
      local_68 = (undefined1 (*) [16])0x0;
      iVar2 = SHGetKnownFolderPath(&DAT_1806fff70,0,0,&local_68);
      if (-1 < iVar2) {
        if (param_2 == 0) {
LAB_1801657a9:
          pwVar5 = L"Configuration";
        }
        else if (param_2 == 1) {
          pwVar5 = L"Identity";
        }
        else if (param_2 == 2) {
          pwVar5 = L"Offsets";
        }
        else {
          if (param_2 != 3) goto LAB_1801657a9;
          pwVar5 = L"Synchronization";
        }
        lVar7 = -1;
        do {
          lVar7 = lVar7 + 1;
        } while (pwVar5[lVar7] != L'\0');
        local_d8 = (undefined1  [16])0x0;
        local_c8 = 0;
        local_c0 = 0;
        FUN_180159e60(local_d8);
        lVar7 = -1;
        do {
          lVar7 = lVar7 + 1;
        } while (*(short *)((longlong)local_70 + lVar7 * 2) != 0);
        local_f8 = (undefined1  [16])0x0;
        local_e8 = 0;
        local_e0 = 0;
        FUN_180159e60(local_f8);
        local_118 = (undefined1  [16])0x0;
        local_108 = 0;
        local_100 = 0;
        FUN_180159e60(local_118,L"HVHGOD Secure Bridge",0x14);
        lVar7 = -1;
        do {
          lVar6 = lVar7 + 1;
          lVar3 = lVar7 * 2;
          lVar7 = lVar6;
        } while (*(short *)(*local_68 + lVar3 + 2) != 0);
        local_138 = (undefined1  [16])0x0;
        local_128 = 0;
        local_120 = 0;
        FUN_180159e60(local_138,local_68,lVar6);
        uVar4 = FUN_1800a7e60(local_98,local_138,local_118);
        uVar4 = FUN_1800a7e60(local_b8,uVar4,local_f8);
        FUN_1800a7e60(local_40,uVar4,local_d8);
        FUN_18015b930(local_b8);
        FUN_18015b930(local_98);
        FUN_18015b930(local_138);
        FUN_18015b930(local_118);
        FUN_18015b930(local_f8);
        FUN_18015b930(local_d8);
        LocalFree(local_70);
        CoTaskMemFree(local_68);
        FUN_1800f5370(param_1,local_40);
        FUN_18015b930(local_40);
        goto LAB_180165747;
      }
      LocalFree(local_70);
    }
  }
  *(undefined8 *)*param_1 = 0;
  *(undefined8 *)(*param_1 + 8) = 0;
  *(undefined8 *)param_1[1] = 0;
  *(undefined8 *)(param_1[1] + 8) = 0;
  *param_1 = (undefined1  [16])0x0;
  *(undefined8 *)param_1[1] = 0;
  *(undefined8 *)(param_1[1] + 8) = 7;
  *(undefined2 *)*param_1 = 0;
LAB_180165747:
  FUN_180113710(local_58);
}



