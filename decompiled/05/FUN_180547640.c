// FUN_180547640 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180547640 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_180547640(void)

{
  int iVar1;
  HMONITOR pHVar2;
  HDC hdc;
  undefined1 auStack_78 [48];
  undefined4 local_48;
  undefined4 local_44;
  uint local_40;
  int local_3c;
  ulonglong local_38;
  
  local_38 = DAT_1808d5f00 ^ (ulonglong)auStack_78;
  local_44 = 0x40000000;
  local_48 = 0x3f400000;
  pHVar2 = MonitorFromWindow(*(HWND *)(**(longlong **)(DAT_180bb8ae8 + 0x2030) + 0x38),2);
  local_40 = 0x60;
  local_3c = 0x60;
  iVar1 = FUN_180506c30();
  if (iVar1 != 0) {
    if ((DAT_180cd703c & 1) == 0) {
      DAT_180cd703c = DAT_180cd703c | 1;
      DAT_180cd7040 = LoadLibraryA("shcore.dll");
    }
    if ((DAT_180c7dff8 != (FARPROC)0x0) ||
       ((DAT_180cd7040 != (HMODULE)0x0 &&
        (DAT_180c7dff8 = GetProcAddress(DAT_180cd7040,"GetDpiForMonitor"),
        DAT_180c7dff8 != (FARPROC)0x0)))) {
      (*DAT_180c7dff8)(pHVar2,0,&local_40,&local_3c);
    }
  }
  hdc = GetDC((HWND)0x0);
  local_40 = GetDeviceCaps(hdc,0x58);
  local_3c = GetDeviceCaps(hdc,0x5a);
  ReleaseDC((HWND)0x0,hdc);
}



