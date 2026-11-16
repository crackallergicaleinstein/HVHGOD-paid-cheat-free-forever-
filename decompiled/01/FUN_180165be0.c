// FUN_180165be0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180165be0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180165be0(undefined1 (*param_1) [16],undefined8 *param_2)

{
  LPCSTR lpMultiByteStr;
  int cbMultiByte;
  int cchWideChar;
  LPWSTR lpWideCharStr;
  undefined1 auStackY_88 [32];
  WCHAR local_48;
  undefined6 uStack_46;
  undefined8 uStack_40;
  undefined8 uStack_38;
  ulonglong uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_1808d5f00 ^ (ulonglong)auStackY_88;
  if (param_2[1] == 0) {
    *param_1 = (undefined1  [16])0x0;
    *(undefined8 *)param_1[1] = 0;
    *(undefined8 *)(param_1[1] + 8) = 7;
    *(undefined2 *)*param_1 = 0;
  }
  else {
    cbMultiByte = (int)param_2[1];
    lpMultiByteStr = (LPCSTR)*param_2;
    cchWideChar = MultiByteToWideChar(0xfde9,8,lpMultiByteStr,cbMultiByte,(LPWSTR)0x0,0);
    if (cchWideChar == 0) {
      *param_1 = (undefined1  [16])0x0;
      *(undefined8 *)param_1[1] = 0;
      *(undefined8 *)(param_1[1] + 8) = 7;
      *(undefined2 *)*param_1 = 0;
    }
    else {
      FUN_18017cee0(&local_48,(longlong)cchWideChar,0);
      lpWideCharStr = &local_48;
      if (7 < uStack_30) {
        lpWideCharStr = (LPWSTR)CONCAT62(uStack_46,local_48);
      }
      MultiByteToWideChar(0xfde9,8,lpMultiByteStr,cbMultiByte,lpWideCharStr,cchWideChar);
      *(ulonglong *)*param_1 = CONCAT62(uStack_46,local_48);
      *(undefined8 *)(*param_1 + 8) = uStack_40;
      *(undefined8 *)param_1[1] = uStack_38;
      *(ulonglong *)(param_1[1] + 8) = uStack_30;
      uStack_38 = 0;
      uStack_30 = 7;
      local_48 = L'\0';
      FUN_18015b930(&local_48);
    }
  }
}



