// FUN_18009c9f0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18009c9f0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18009c9f0(void)

{
  DWORD DVar1;
  HRSRC hResInfo;
  HGLOBAL hResData;
  LPVOID pvVar2;
  
  hResInfo = FindResourceW((HMODULE)&switchD_180442a42::caseD_4,(LPCWSTR)0x1fa5,(LPCWSTR)0xa);
  if (hResInfo == (HRSRC)0x0) {
    _DAT_180bbb270 = hResInfo;
    _DAT_180bbb278 = hResInfo;
    return;
  }
  hResData = LoadResource((HMODULE)&switchD_180442a42::caseD_4,hResInfo);
  pvVar2 = LockResource(hResData);
  DVar1 = SizeofResource((HMODULE)&switchD_180442a42::caseD_4,hResInfo);
  _DAT_180bbb270 = pvVar2;
  _DAT_180bbb278 = (HRSRC)(ulonglong)DVar1;
  return;
}



