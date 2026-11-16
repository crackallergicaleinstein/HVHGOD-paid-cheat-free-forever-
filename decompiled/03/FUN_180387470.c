// FUN_180387470 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180387470 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_180387470(longlong *param_1)

{
  HMODULE hModule;
  
  if (*param_1 != 0) {
    if ((DAT_180c70e50 & 1) == 0) {
      DAT_180c70e50 = DAT_180c70e50 | 1;
      hModule = GetModuleHandleW(L"user32.dll");
      DAT_180c70e58 = GetProcAddress(hModule,"SetThreadDpiAwarenessContext");
      (*DAT_180c70e58)(*param_1);
      return;
    }
    (*DAT_180c70e58)(*param_1);
  }
  return;
}



