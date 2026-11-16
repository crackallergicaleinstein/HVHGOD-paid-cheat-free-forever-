// FUN_18009cba0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18009cba0 */

void FUN_18009cba0(void)

{
  HRSRC hResInfo;
  HGLOBAL hResData;
  
  hResInfo = FindResourceW((HMODULE)&switchD_180442a42::caseD_4,(LPCWSTR)0x1fa8,(LPCWSTR)0xa);
  if (hResInfo == (HRSRC)0x0) {
    return;
  }
  hResData = LoadResource((HMODULE)&switchD_180442a42::caseD_4,hResInfo);
  LockResource(hResData);
                    /* WARNING: Could not recover jumptable at 0x00018009cbee. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  SizeofResource((HMODULE)&switchD_180442a42::caseD_4,hResInfo);
  return;
}



