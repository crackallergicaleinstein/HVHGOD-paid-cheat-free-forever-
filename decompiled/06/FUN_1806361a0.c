// FUN_1806361a0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1806361a0 */

ulonglong FUN_1806361a0(longlong param_1)

{
  ulonglong uVar1;
  PIMAGE_SECTION_HEADER p_Var2;
  
  uVar1 = FUN_1806361f0(0x180000000);
  if ((int)uVar1 != 0) {
    p_Var2 = _FindPESection((PBYTE)&switchD_180442a42::caseD_4,param_1 - 0x180000000);
    uVar1 = 0;
    if (p_Var2 != (PIMAGE_SECTION_HEADER)0x0) {
      uVar1 = (ulonglong)(~p_Var2->Characteristics >> 0x1f);
    }
  }
  return uVar1;
}



