// FUN_1805fb424 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805fb424 */

DWORD FUN_1805fb424(HANDLE param_1,LPWIN32_FIND_DATAW param_2)

{
  BOOL BVar1;
  DWORD DVar2;
  
  BVar1 = FindNextFileW(param_1,param_2);
  if (BVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001805fb43d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    DVar2 = GetLastError();
    return DVar2;
  }
  return 0;
}



