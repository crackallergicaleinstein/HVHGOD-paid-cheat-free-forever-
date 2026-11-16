// FUN_1805fbbd8 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805fbbd8 */

DWORD FUN_1805fbbd8(LPCWSTR param_1,LPCWSTR param_2)

{
  BOOL BVar1;
  DWORD DVar2;
  
  BVar1 = MoveFileExW(param_1,param_2,3);
  if (BVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001805fbbf7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    DVar2 = GetLastError();
    return DVar2;
  }
  return 0;
}



