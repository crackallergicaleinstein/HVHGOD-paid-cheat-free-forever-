// FUN_18061fb50 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18061fb50 */

longlong FUN_18061fb50(longlong param_1)

{
  int iVar1;
  ulonglong uVar2;
  longlong lVar3;
  
  if (((param_1 == 0) || (uVar2 = FUN_18061eea0(param_1,0x55), 0x54 < uVar2)) ||
     (lVar3 = _malloc_base(uVar2 * 2 + 2), lVar3 == 0)) {
    return 0;
  }
  iVar1 = FUN_18062f9c0();
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  return lVar3;
}



