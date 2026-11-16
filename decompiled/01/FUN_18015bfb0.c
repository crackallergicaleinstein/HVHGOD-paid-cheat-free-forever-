// FUN_18015bfb0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18015bfb0 */

void FUN_18015bfb0(undefined8 param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  
  lVar1 = param_2;
  if ((0xfff < param_3 + 1U) && (lVar1 = *(longlong *)(param_2 + -8), 0x1f < (param_2 - lVar1) - 8U)
     ) {
                    /* WARNING: Subroutine does not return */
    _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  FUN_1804547d0(lVar1);
  return;
}



