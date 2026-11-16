// FUN_180165d20 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180165d20 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180165d20(undefined1 (*param_1) [16],undefined8 *param_2)

{
  LPCWSTR lpWideCharStr;
  int cchWideChar;
  int cbMultiByte;
  LPSTR lpMultiByteStr;
  undefined1 auStackY_98 [32];
  CHAR local_48;
  undefined7 uStack_47;
  undefined8 uStack_40;
  undefined8 uStack_38;
  ulonglong uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_1808d5f00 ^ (ulonglong)auStackY_98;
  if (param_2[1] == 0) {
    *param_1 = (undefined1  [16])0x0;
    *(undefined8 *)param_1[1] = 0;
    *(undefined8 *)(param_1[1] + 8) = 0xf;
    (*param_1)[0] = 0;
  }
  else {
    cchWideChar = (int)param_2[1];
    lpWideCharStr = (LPCWSTR)*param_2;
    cbMultiByte = WideCharToMultiByte(0xfde9,0,lpWideCharStr,cchWideChar,(LPSTR)0x0,0,(LPCSTR)0x0,
                                      (LPBOOL)0x0);
    FUN_18015ae30(&local_48,(longlong)cbMultiByte,0);
    lpMultiByteStr = &local_48;
    if (0xf < uStack_30) {
      lpMultiByteStr = (LPSTR)CONCAT71(uStack_47,local_48);
    }
    WideCharToMultiByte(0xfde9,0,lpWideCharStr,cchWideChar,lpMultiByteStr,cbMultiByte,(LPCSTR)0x0,
                        (LPBOOL)0x0);
    *(ulonglong *)*param_1 = CONCAT71(uStack_47,local_48);
    *(undefined8 *)(*param_1 + 8) = uStack_40;
    *(undefined8 *)param_1[1] = uStack_38;
    *(ulonglong *)(param_1[1] + 8) = uStack_30;
    uStack_38 = 0;
    uStack_30 = 0xf;
    local_48 = '\0';
    FUN_18015c010(&local_48);
  }
}



