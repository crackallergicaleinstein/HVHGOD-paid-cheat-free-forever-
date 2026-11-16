// FUN_180185d40 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180185d40 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180185d40(undefined8 *param_1,LPVOID param_2,ulonglong param_3)

{
  BOOL BVar1;
  DWORD nNumberOfBytesToRead;
  undefined1 auStackY_68 [32];
  DWORD local_38 [2];
  ulonglong local_30;
  
  local_30 = DAT_1808d5f00 ^ (ulonglong)auStackY_68;
  while( true ) {
    if (param_3 == 0) {
    }
    local_38[0] = 0;
    nNumberOfBytesToRead = (DWORD)param_3;
    if (0xffffffff < param_3) {
      nNumberOfBytesToRead = 0xffffffff;
    }
    BVar1 = ReadFile((HANDLE)*param_1,param_2,nNumberOfBytesToRead,local_38,(LPOVERLAPPED)0x0);
    if (BVar1 == 0) break;
    if (local_38[0] != nNumberOfBytesToRead) {
    }
    param_2 = (LPVOID)((longlong)param_2 + (ulonglong)local_38[0]);
    param_3 = param_3 - local_38[0];
  }
}



