// FUN_18017a7a0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18017a7a0 */

void FUN_18017a7a0(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  if (*(longlong *)(param_1 + 8) != 0) {
    lVar1 = *(longlong *)(param_1 + 0x20);
    for (lVar2 = *(longlong *)(param_1 + 0x18); lVar2 != lVar1; lVar2 = lVar2 + 0x168) {
      FUN_180152210(lVar2);
    }
    lVar1 = *(longlong *)(param_1 + 8);
    lVar2 = lVar1;
    if ((0xfff < (ulonglong)(*(longlong *)(param_1 + 0x10) * 0x168)) &&
       (lVar2 = *(longlong *)(lVar1 + -8), 0x1f < (lVar1 - lVar2) - 8U)) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    FUN_1804547d0(lVar2);
  }
  return;
}



