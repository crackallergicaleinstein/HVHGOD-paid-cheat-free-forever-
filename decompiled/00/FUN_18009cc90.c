// FUN_18009cc90 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18009cc90 */

void FUN_18009cc90(void)

{
  DWORD DVar1;
  HRSRC hResInfo;
  HGLOBAL hResData;
  LPVOID pvVar2;
  
  hResInfo = FindResourceW((HMODULE)&switchD_180442a42::caseD_4,(LPCWSTR)0x1faa,(LPCWSTR)0xa);
  if (hResInfo == (HRSRC)0x0) {
    DAT_180bbb280 = hResInfo;
    DAT_180bbb288 = hResInfo;
    return;
  }
  hResData = LoadResource((HMODULE)&switchD_180442a42::caseD_4,hResInfo);
  pvVar2 = LockResource(hResData);
  DVar1 = SizeofResource((HMODULE)&switchD_180442a42::caseD_4,hResInfo);
  DAT_180bbb280 = pvVar2;
  DAT_180bbb288 = (HRSRC)(ulonglong)DVar1;
  return;
}



