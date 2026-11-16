// FUN_1801bafa0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801bafa0 */

void FUN_1801bafa0(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  if (*(longlong *)(param_1 + 8) != 0) {
    lVar1 = *(longlong *)(param_1 + 0x20);
    for (lVar2 = *(longlong *)(param_1 + 0x18); lVar2 != lVar1; lVar2 = lVar2 + 0x48) {
      FUN_18015c010(lVar2 + 0x20);
      FUN_18015c010(lVar2);
    }
    lVar1 = *(longlong *)(param_1 + 8);
    lVar2 = lVar1;
    if ((0xfff < (ulonglong)(*(longlong *)(param_1 + 0x10) * 0x48)) &&
       (lVar2 = *(longlong *)(lVar1 + -8), 0x1f < (lVar1 - lVar2) - 8U)) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    FUN_1804547d0(lVar2);
  }
  return;
}



