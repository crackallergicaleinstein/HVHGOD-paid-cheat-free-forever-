// FUN_180606f04 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180606f04 */

longlong FUN_180606f04(void)

{
  DWORD dwErrCode;
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (DAT_1808d70d0 == -1) {
    lVar2 = 0;
  }
  else {
    dwErrCode = GetLastError();
    lVar3 = __vcrt_FlsGetValue(DAT_1808d70d0);
    lVar2 = 0;
    if (lVar3 != -1) {
      if (lVar3 == 0) {
        iVar1 = __vcrt_FlsSetValue(DAT_1808d70d0);
        if (iVar1 != 0) {
          lVar3 = _calloc_base(1);
          if ((lVar3 == 0) || (iVar1 = __vcrt_FlsSetValue(DAT_1808d70d0,lVar3), iVar1 == 0)) {
            __vcrt_FlsSetValue(DAT_1808d70d0,0);
            lVar4 = lVar3;
          }
          else {
            *(undefined4 *)(lVar3 + 0x78) = 0xfffffffe;
            lVar4 = 0;
            lVar2 = lVar3;
          }
          thunk_FUN_180621380(lVar4);
        }
      }
      else {
        lVar2 = lVar3;
      }
    }
    SetLastError(dwErrCode);
  }
  return lVar2;
}



