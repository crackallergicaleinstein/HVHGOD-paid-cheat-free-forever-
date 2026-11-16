// FUN_18061f528 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18061f528 */

__acrt_ptd * FUN_18061f528(void)

{
  DWORD dwErrCode;
  BOOL BVar1;
  __acrt_ptd *lpFlsData;
  
  dwErrCode = GetLastError();
  BVar1 = FlsSetValue(DAT_1808d72d0,(PVOID)0xffffffffffffffff);
  if (BVar1 != 0) {
    lpFlsData = (__acrt_ptd *)_calloc_base(1);
    if (lpFlsData != (__acrt_ptd *)0x0) {
      BVar1 = FlsSetValue(DAT_1808d72d0,lpFlsData);
      if (BVar1 == 0) {
        FlsSetValue(DAT_1808d72d0,(PVOID)0x0);
        FUN_180621380(lpFlsData);
        lpFlsData = (__acrt_ptd *)0x0;
      }
      else {
        construct_ptd_array(lpFlsData);
        FUN_180621380(0);
      }
      SetLastError(dwErrCode);
      return lpFlsData;
    }
    FlsSetValue(DAT_1808d72d0,(PVOID)0x0);
    FUN_180621380(0);
  }
  SetLastError(dwErrCode);
  return (__acrt_ptd *)0x0;
}



