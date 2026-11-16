// FUN_180299470 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180299470 */

void FUN_180299470(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  if (lVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x18);
    for (; lVar1 != lVar2; lVar1 = lVar1 + 0x1088) {
      FUN_1800efed0(lVar1 + 0x50);
      FUN_1801bd3e0(lVar1 + 0x28);
    }
    lVar1 = *(longlong *)(param_1 + 0x10);
    lVar2 = lVar1;
    if ((0xfff < (ulonglong)(((*(longlong *)(param_1 + 0x20) - lVar1) / 0x1088) * 0x1088)) &&
       (lVar2 = *(longlong *)(lVar1 + -8), 0x1f < (lVar1 - lVar2) - 8U)) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    FUN_1804547d0(lVar2);
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  return;
}



