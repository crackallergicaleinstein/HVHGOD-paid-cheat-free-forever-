// FUN_180387340 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180387340 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Exceeded maximum restarts with more pending */

undefined8 * FUN_180387340(undefined8 *param_1,longlong param_2)

{
  uint uVar1;
  HMODULE pHVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  uVar1 = DAT_180c70e68;
  *param_1 = 0;
  if ((uVar1 & 1) == 0) {
    DAT_180c70e68 = uVar1 | 1;
    pHVar2 = GetModuleHandleW(L"user32.dll");
    DAT_180c70e70 = GetProcAddress(pHVar2,"GetWindowDpiAwarenessContext");
  }
  if ((param_2 != 0) && (DAT_180c70e70 != (FARPROC)0x0)) {
    if ((DAT_180c70e50 & 1) == 0) {
      DAT_180c70e50 = DAT_180c70e50 | 1;
      pHVar2 = GetModuleHandleW(L"user32.dll");
      DAT_180c70e58 = GetProcAddress(pHVar2,"SetThreadDpiAwarenessContext");
    }
    if ((DAT_180c70e58 != (FARPROC)0x0) && (lVar3 = (*DAT_180c70e70)(param_2), lVar3 != 0)) {
      if ((DAT_180c70e50 & 1) == 0) {
        DAT_180c70e50 = DAT_180c70e50 | 1;
        pHVar2 = GetModuleHandleW(L"user32.dll");
        DAT_180c70e58 = GetProcAddress(pHVar2,"SetThreadDpiAwarenessContext");
      }
      uVar4 = (*DAT_180c70e58)(lVar3);
      *param_1 = uVar4;
    }
  }
  return param_1;
}



