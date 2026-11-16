// FUN_1803874e0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1803874e0 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x0001803875af) */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_1803874e0(float *param_1,HWND param_2)

{
  longlong lVar1;
  BOOL BVar2;
  HMODULE hModule;
  float fVar3;
  float fVar4;
  undefined1 auStack_48 [32];
  longlong local_28;
  tagRECT local_20;
  ulonglong local_10;
  
  local_10 = DAT_1808d5f00 ^ (ulonglong)auStack_48;
  local_28 = 0;
  FUN_180387340(&local_28);
  local_20.left = 0;
  local_20.top = 0;
  local_20.right = 0;
  local_20.bottom = 0;
  if (((param_2 == (HWND)0x0) || (BVar2 = IsIconic(param_2), BVar2 != 0)) ||
     (BVar2 = GetClientRect(param_2,&local_20), BVar2 == 0)) {
    param_1[0] = 0.0;
    param_1[1] = 0.0;
    param_1[2] = 0.0;
    param_1[3] = 0.0;
  }
  else if (DAT_180c70e60 == 1) {
    param_1[0] = 0.0;
    param_1[1] = 0.0;
    param_1[2] = 0.0;
    param_1[3] = 0.0;
  }
  else {
    if (DAT_180c70e60 == 0) {
      fVar3 = (float)(local_20.right - local_20.left);
      fVar4 = (float)(local_20.bottom - local_20.top);
    }
    else {
      fVar3 = (float)(DAT_180c70e60 >> 0x20);
      fVar4 = (float)(DAT_180c70e60 & 0xffffffff);
    }
    *param_1 = (float)(local_20.right - local_20.left);
    param_1[1] = (float)(local_20.bottom - local_20.top);
    param_1[2] = fVar3;
    param_1[3] = fVar4;
  }
  lVar1 = local_28;
  if (local_28 != 0) {
    if ((DAT_180c70e50 & 1) == 0) {
      DAT_180c70e50 = DAT_180c70e50 | 1;
      hModule = GetModuleHandleW(L"user32.dll");
      DAT_180c70e58 = GetProcAddress(hModule,"SetThreadDpiAwarenessContext");
    }
    (*DAT_180c70e58)(lVar1);
  }
}



