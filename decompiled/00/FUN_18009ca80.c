// FUN_18009ca80 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18009ca80 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18009ca80(void)

{
  DWORD DVar1;
  HRSRC hResInfo;
  HGLOBAL hResData;
  LPVOID pvVar2;
  
  hResInfo = FindResourceW((HMODULE)&switchD_180442a42::caseD_4,(LPCWSTR)0x1fa6,(LPCWSTR)0xa);
  if (hResInfo == (HRSRC)0x0) {
    _DAT_180bbb260 = hResInfo;
    _DAT_180bbb268 = hResInfo;
    return;
  }
  hResData = LoadResource((HMODULE)&switchD_180442a42::caseD_4,hResInfo);
  pvVar2 = LockResource(hResData);
  DVar1 = SizeofResource((HMODULE)&switchD_180442a42::caseD_4,hResInfo);
  _DAT_180bbb260 = pvVar2;
  _DAT_180bbb268 = (HRSRC)(ulonglong)DVar1;
  return;
}



