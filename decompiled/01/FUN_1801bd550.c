// FUN_1801bd550 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801bd550 */

void FUN_1801bd550(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_1 + 0x20);
  if (lVar2 != 0) {
    do {
      lVar2 = lVar2 + -1;
      *(longlong *)(param_1 + 0x20) = lVar2;
    } while (lVar2 != 0);
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  if (*(longlong *)(param_1 + 8) != 0) {
    lVar2 = *(longlong *)(param_1 + 0x10);
    while (0 < lVar2) {
      lVar2 = lVar2 + -1;
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 8) + lVar2 * 8);
      if (lVar1 != 0) {
        if (0x1f < (lVar1 - *(longlong *)(lVar1 + -8)) - 8U) goto LAB_1801bd61a;
        FUN_1804547d0(*(longlong *)(lVar1 + -8),0x23e7);
      }
    }
    lVar2 = *(longlong *)(param_1 + 8);
    lVar1 = lVar2;
    if ((0xfff < (ulonglong)(*(longlong *)(param_1 + 0x10) * 8)) &&
       (lVar1 = *(longlong *)(lVar2 + -8), 0x1f < (lVar2 - lVar1) - 8U)) {
LAB_1801bd61a:
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    FUN_1804547d0(lVar1);
    *(undefined8 *)(param_1 + 8) = 0;
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
  return;
}



