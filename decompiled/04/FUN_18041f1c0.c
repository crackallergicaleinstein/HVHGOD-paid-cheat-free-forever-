// FUN_18041f1c0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18041f1c0 */

int FUN_18041f1c0(void)

{
  char cVar1;
  int iVar2;
  DWORD DVar3;
  
  iVar2 = FUN_18041d780();
  if (iVar2 == 0) {
    FUN_180380f20();
    SetEvent(DAT_180c62b78);
  }
  else {
    while ((DAT_180bb8ad0 & 1) == 0) {
      cVar1 = FUN_18003b060();
      if (((cVar1 == '\0') || (DAT_180bb9040 == (HANDLE)0x0)) ||
         (DVar3 = WaitForSingleObject(DAT_180bb9040,0), DVar3 != 0x102)) {
        FUN_18041f290();
        break;
      }
      Sleep(0x19);
    }
    while (cVar1 = FUN_18041f3b0(), cVar1 == '\0') {
      Sleep(0xfa);
    }
  }
  if (DAT_180bbec8c != '\0') {
    CoUninitialize();
    DAT_180bbec8c = '\0';
  }
  return iVar2;
}



