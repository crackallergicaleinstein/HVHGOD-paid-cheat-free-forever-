// FUN_18015bf60 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18015bf60 */

void FUN_18015bf60(longlong param_1,ulonglong param_2)

{
  longlong lVar1;
  
  lVar1 = param_1;
  if ((0xfff < param_2) && (lVar1 = *(longlong *)(param_1 + -8), 0x1f < (param_1 - lVar1) - 8U)) {
                    /* WARNING: Subroutine does not return */
    _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  FUN_1804547d0(lVar1);
  return;
}



