// FUN_18062a510 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18062a510 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18062a510(char *param_1,char *param_2,longlong *param_3)

{
  byte bVar1;
  char *pcVar2;
  int iVar3;
  BOOL BVar4;
  HANDLE hFindFile;
  LPCWSTR lpFileName;
  char *pcVar5;
  longlong lVar6;
  longlong lVar7;
  byte bVar8;
  undefined8 uVar9;
  ulonglong uVar10;
  undefined1 auStackY_378 [32];
  undefined1 local_348 [8];
  ulonglong local_340;
  undefined8 local_338;
  undefined8 local_330;
  LPCWSTR local_328;
  undefined8 local_320;
  undefined8 local_318;
  char local_310;
  longlong local_308;
  longlong local_300;
  char local_2f0;
  longlong local_2e8;
  longlong local_2e0;
  char local_2d0;
  undefined8 local_2c8;
  undefined8 local_2c0;
  char *local_2b8;
  undefined8 local_2b0;
  undefined8 local_2a8;
  char local_2a0;
  _WIN32_FIND_DATAW local_298;
  ulonglong local_48;
  
  local_48 = DAT_1808d5f00 ^ (ulonglong)auStackY_378;
  while ((param_2 != param_1 &&
         ((0x2d < (byte)(*param_2 - 0x2fU) ||
          ((0x200000000801U >> ((longlong)(char)(*param_2 - 0x2fU) & 0x3fU) & 1) == 0))))) {
    param_2 = (char *)FUN_180634bf8(param_1);
  }
  if ((*param_2 == ':') && (param_2 != param_1 + 1)) {
    FUN_18062a38c(param_1,0,0,param_3);
  }
  else {
    bVar8 = *param_2 - 0x2f;
    if ((0x2d < bVar8) || (bVar1 = 1, (0x200000000801U >> ((longlong)(char)bVar8 & 0x3fU) & 1) == 0)
       ) {
      bVar1 = 0;
    }
    uVar10 = -(ulonglong)bVar1 & (ulonglong)(param_2 + (1 - (longlong)param_1));
    local_340 = uVar10;
    FUN_18063ab10(&local_298,0,0x250);
    local_338 = 0;
    local_330 = 0;
    local_328 = (LPCWSTR)0x0;
    local_320 = 0;
    local_318 = 0;
    local_310 = '\0';
    _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_308,(__crt_locale_pointers *)0x0);
    if (*(int *)(local_300 + 0xc) == 0xfde9) {
      if (local_2f0 != '\0') {
        *(uint *)(local_308 + 0x3a8) = *(uint *)(local_308 + 0x3a8) & 0xfffffffd;
      }
      uVar9 = 0xfde9;
    }
    else {
      iVar3 = FUN_1806216f4();
      if (iVar3 == 0) {
        if (local_2f0 != '\0') {
          *(uint *)(local_308 + 0x3a8) = *(uint *)(local_308 + 0x3a8) & 0xfffffffd;
        }
        uVar9 = 1;
      }
      else {
        if (local_2f0 != '\0') {
          *(uint *)(local_308 + 0x3a8) = *(uint *)(local_308 + 0x3a8) & 0xfffffffd;
        }
        uVar9 = 0;
      }
    }
    iVar3 = FUN_18061e9f8(param_1,&local_338,local_348,uVar9);
    lpFileName = local_328;
    if (iVar3 != 0) {
      lpFileName = (LPCWSTR)0x0;
    }
    hFindFile = FindFirstFileExW(lpFileName,FindExInfoStandard,&local_298,FindExSearchNameMatch,
                                 (LPVOID)0x0,0);
    if (hFindFile == (HANDLE)0xffffffffffffffff) {
      FUN_18062a38c(param_1,0,0,param_3);
      if (local_310 != '\0') {
        FUN_180621380(local_328);
      }
    }
    else {
      lVar7 = param_3[1] - *param_3 >> 3;
      do {
        uVar9 = 0;
        local_2c8 = 0;
        local_2c0 = 0;
        local_2b8 = (char *)0x0;
        local_2b0 = 0;
        local_2a8 = 0;
        local_2a0 = '\0';
        _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_2e8,(__crt_locale_pointers *)0x0);
        if (*(int *)(local_2e0 + 0xc) == 0xfde9) {
          if (local_2d0 != '\0') {
            *(uint *)(local_2e8 + 0x3a8) = *(uint *)(local_2e8 + 0x3a8) & 0xfffffffd;
          }
          uVar9 = 0xfde9;
        }
        else {
          iVar3 = FUN_1806216f4();
          if (iVar3 == 0) {
            if (local_2d0 != '\0') {
              *(uint *)(local_2e8 + 0x3a8) = *(uint *)(local_2e8 + 0x3a8) & 0xfffffffd;
            }
            uVar9 = 1;
          }
          else if (local_2d0 != '\0') {
            *(uint *)(local_2e8 + 0x3a8) = *(uint *)(local_2e8 + 0x3a8) & 0xfffffffd;
          }
        }
        iVar3 = FUN_180629fa4(local_298.cFileName,&local_2c8,local_348,uVar9);
        pcVar2 = local_2b8;
        pcVar5 = local_2b8;
        if (iVar3 != 0) {
          pcVar5 = (char *)0x0;
        }
        if ((*pcVar5 == '.') && ((pcVar5[1] == '\0' || ((pcVar5[1] == '.' && (pcVar5[2] == '\0')))))
           ) {
          if (local_2a0 != '\0') {
            FUN_180621380(local_2b8);
          }
        }
        else {
          iVar3 = FUN_18062a38c(pcVar5,param_1,uVar10,param_3);
          if (iVar3 != 0) {
            if (local_2a0 != '\0') {
              FUN_180621380(pcVar2);
            }
            FindClose(hFindFile);
            if (local_310 == '\0') {
            }
            FUN_180621380(local_328);
          }
          if (local_2a0 != '\0') {
            FUN_180621380(pcVar2);
          }
          uVar10 = local_340;
        }
        BVar4 = FindNextFileW(hFindFile,&local_298);
      } while (BVar4 != 0);
      lVar6 = param_3[1] - *param_3 >> 3;
      if (lVar7 != lVar6) {
        FUN_1806192c0(*param_3 + lVar7 * 8,lVar6 - lVar7,8,FUN_180629f90);
      }
      FindClose(hFindFile);
      if (local_310 != '\0') {
        FUN_180621380(local_328);
      }
    }
  }
}



