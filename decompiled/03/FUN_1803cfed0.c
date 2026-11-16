// FUN_1803cfed0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1803cfed0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1803cfed0(undefined8 *param_1,longlong *param_2)

{
  LPCSTR lpMultiByteStr;
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  int cchWideChar;
  int iVar3;
  BOOL BVar4;
  HANDLE hFile;
  LPCWSTR lpFileName;
  WCHAR *lpWideCharStr;
  undefined1 auStackY_c8 [32];
  DWORD local_88 [2];
  undefined1 local_80 [16];
  longlong lStack_70;
  ulonglong uStack_68;
  LARGE_INTEGER local_60;
  WCHAR local_58;
  undefined6 uStack_56;
  undefined8 uStack_50;
  longlong lStack_48;
  ulonglong uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_1808d5f00 ^ (ulonglong)auStackY_c8;
  if (*param_2 != param_2[1]) {
    param_2[1] = *param_2;
  }
  lpMultiByteStr = (LPCSTR)*param_1;
  if (param_1[1] != 0) {
    iVar3 = (int)param_1[1];
    cchWideChar = MultiByteToWideChar(0xfde9,8,lpMultiByteStr,iVar3,(LPWSTR)0x0,0);
    if (0 < cchWideChar) {
      FUN_18017cee0(&local_58,(longlong)cchWideChar,0);
      lpWideCharStr = &local_58;
      if (7 < uStack_40) {
        lpWideCharStr = (LPWSTR)CONCAT62(uStack_56,local_58);
      }
      iVar3 = MultiByteToWideChar(0xfde9,8,lpMultiByteStr,iVar3,lpWideCharStr,cchWideChar);
      if (iVar3 == cchWideChar) {
        local_80._2_6_ = uStack_56;
        local_80._0_2_ = local_58;
        local_80._8_8_ = uStack_50;
        lStack_70 = lStack_48;
        uStack_68 = uStack_40;
        lStack_48 = 0;
        uStack_40 = 7;
        local_58 = L'\0';
        FUN_18015b930(&local_58);
      }
      else {
        lStack_70 = 0;
        uStack_68 = 7;
        local_80._2_14_ = SUB1614((undefined1  [16])0x0,2);
        auVar1._14_2_ = 0;
        auVar1._0_14_ = local_80._2_14_;
        local_80 = auVar1 << 0x10;
        FUN_18015b930(&local_58);
      }
      goto LAB_1803cffef;
    }
  }
  lStack_70 = 0;
  uStack_68 = 7;
  local_80._2_14_ = SUB1614((undefined1  [16])0x0,2);
  auVar2._14_2_ = 0;
  auVar2._0_14_ = local_80._2_14_;
  local_80 = auVar2 << 0x10;
LAB_1803cffef:
  if (lStack_70 != 0) {
    lpFileName = (LPCWSTR)local_80;
    if (7 < uStack_68) {
      lpFileName = (LPCWSTR)local_80._0_8_;
    }
    hFile = CreateFileW(lpFileName,0x80000000,7,(LPSECURITY_ATTRIBUTES)0x0,3,0x8000080,(HANDLE)0x0);
    if (hFile != (HANDLE)0xffffffffffffffff) {
      local_60.QuadPart = 0;
      BVar4 = GetFileSizeEx(hFile,&local_60);
      if (((BVar4 == 0) || (local_60.QuadPart < 1)) || (0x800000 < (ulonglong)local_60.s)) {
        CloseHandle(hFile);
      }
      else {
        FUN_1801b0ec0(param_2);
        local_88[0] = 0;
        BVar4 = ReadFile(hFile,(LPVOID)*param_2,(int)param_2[1] - (int)(LPVOID)*param_2,local_88,
                         (LPOVERLAPPED)0x0);
        CloseHandle(hFile);
        if (((BVar4 == 0) || ((ulonglong)local_88[0] != param_2[1] - *param_2)) &&
           (*param_2 != param_2[1])) {
          param_2[1] = *param_2;
        }
      }
    }
  }
  FUN_18015b930(local_80);
}



