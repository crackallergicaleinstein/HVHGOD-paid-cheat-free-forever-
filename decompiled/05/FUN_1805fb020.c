// FUN_1805fb020 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805fb020 */

undefined8 FUN_1805fb020(UINT param_1,LPCWSTR param_2,int param_3,LPSTR param_4,int param_5)

{
  int local_18;
  DWORD DStack_14;
  
  local_18 = WideCharToMultiByte(param_1,0x400,param_2,param_3,param_4,param_5,(LPCSTR)0x0,
                                 (LPBOOL)0x0);
  if (local_18 == 0) {
    DStack_14 = GetLastError();
  }
  else {
    DStack_14 = 0;
  }
  if (DStack_14 == 0x3ec) {
    local_18 = WideCharToMultiByte(param_1,0,param_2,param_3,param_4,param_5,(LPCSTR)0x0,(LPBOOL)0x0
                                  );
    if (local_18 == 0) {
      DStack_14 = GetLastError();
    }
    else {
      DStack_14 = 0;
    }
  }
  return CONCAT44(DStack_14,local_18);
}



