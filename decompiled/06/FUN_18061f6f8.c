// FUN_18061f6f8 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18061f6f8 */

PVOID FUN_18061f6f8(void)

{
  DWORD dwErrCode;
  PVOID pvVar1;
  PVOID pvVar2;
  
  pvVar2 = (PVOID)0x0;
  if (DAT_180bb202c == '\0') {
    dwErrCode = GetLastError();
    if (DAT_1808d72d0 == 0xffffffff) {
      pvVar1 = (PVOID)0x0;
    }
    else {
      pvVar1 = FlsGetValue(DAT_1808d72d0);
    }
    if (pvVar1 != (PVOID)0xffffffffffffffff) {
      if (pvVar1 == (PVOID)0x0) {
        pvVar1 = (PVOID)FUN_18061f528();
      }
      pvVar2 = pvVar1;
    }
    SetLastError(dwErrCode);
  }
  else {
    if (DAT_1808d72d0 == 0xffffffff) {
      pvVar1 = (PVOID)0x0;
    }
    else {
      pvVar1 = (PVOID)FUN_1806218c0();
    }
    if (pvVar1 != (PVOID)0xffffffffffffffff) {
      if (pvVar1 == (PVOID)0x0) {
        pvVar1 = (PVOID)FUN_18061f528();
      }
      pvVar2 = pvVar1;
    }
  }
  return pvVar2;
}



