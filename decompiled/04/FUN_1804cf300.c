// FUN_1804cf300 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804cf300 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1804cf300(undefined8 param_1,longlong param_2,longlong param_3)

{
  HWND pHVar1;
  HIMC pHVar2;
  undefined1 auStack_78 [32];
  tagCANDIDATEFORM local_58;
  tagCOMPOSITIONFORM local_38;
  ulonglong local_18;
  
  local_18 = DAT_1808d5f00 ^ (ulonglong)auStack_78;
  pHVar1 = *(HWND *)(param_2 + 0x38);
  if ((pHVar1 != (HWND)0x0) && (pHVar2 = ImmGetContext(pHVar1), pHVar2 != (HIMC)0x0)) {
    local_38.ptCurrentPos.x = (LONG)*(float *)(param_3 + 4);
    local_38.ptCurrentPos.y = (LONG)*(float *)(param_3 + 8);
    local_38.rcArea.left = 0;
    local_38.rcArea.top = 0;
    local_38.rcArea.right = 0;
    local_38.rcArea.bottom = 0;
    local_38.dwStyle = 0x20;
    ImmSetCompositionWindow(pHVar2,&local_38);
    local_58.ptCurrentPos.x = (LONG)*(float *)(param_3 + 4);
    local_58.ptCurrentPos.y = (LONG)*(float *)(param_3 + 8);
    local_58.dwIndex = 0;
    local_58.rcArea.left = 0;
    local_58.rcArea.top = 0;
    local_58.rcArea.right = 0;
    local_58.rcArea.bottom = 0;
    local_58.dwStyle = 0x40;
    ImmSetCandidateWindow(pHVar2,&local_58);
    ImmReleaseContext(pHVar1,pHVar2);
  }
}



