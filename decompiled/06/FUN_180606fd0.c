// FUN_180606fd0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180606fd0 */

/* Library Function - Single Match
    __vcrt_getptd_noinit
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

longlong __vcrt_getptd_noinit(void)

{
  DWORD dwErrCode;
  longlong lVar1;
  
  if (DAT_1808d70d0 == -1) {
    lVar1 = 0;
  }
  else {
    dwErrCode = GetLastError();
    lVar1 = __vcrt_FlsGetValue(DAT_1808d70d0);
    SetLastError(dwErrCode);
    if (lVar1 == -1) {
      lVar1 = 0;
    }
  }
  return lVar1;
}



