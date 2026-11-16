// FUN_18009cb10 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18009cb10 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18009cb10(void)

{
  DWORD DVar1;
  HRSRC hResInfo;
  HGLOBAL hResData;
  LPVOID pvVar2;
  
  hResInfo = FindResourceW((HMODULE)&switchD_180442a42::caseD_4,(LPCWSTR)0x1fa7,(LPCWSTR)0xa);
  if (hResInfo == (HRSRC)0x0) {
    _DAT_180bbb250 = hResInfo;
    _DAT_180bbb258 = hResInfo;
    return;
  }
  hResData = LoadResource((HMODULE)&switchD_180442a42::caseD_4,hResInfo);
  pvVar2 = LockResource(hResData);
  DVar1 = SizeofResource((HMODULE)&switchD_180442a42::caseD_4,hResInfo);
  _DAT_180bbb250 = pvVar2;
  _DAT_180bbb258 = (HRSRC)(ulonglong)DVar1;
  return;
}



