// FUN_180111910 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180111910 */

void FUN_180111910(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x20);
  if (lVar1 != 0) {
    do {
      lVar1 = *(longlong *)
               (*(longlong *)(param_1 + 8) +
               (lVar1 + *(longlong *)(param_1 + 0x18) + -1 & *(longlong *)(param_1 + 0x10) - 1U) * 8
               );
      FUN_18015b930(lVar1 + 0x50);
      FUN_1801409d0(lVar1 + 0x48,*(undefined1 *)(lVar1 + 0x40));
      FUN_18015c010(lVar1 + 0x20);
      FUN_18015c010(lVar1);
      lVar1 = *(longlong *)(param_1 + 0x20) + -1;
      *(longlong *)(param_1 + 0x20) = lVar1;
    } while (lVar1 != 0);
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  if (*(longlong *)(param_1 + 8) != 0) {
    lVar1 = *(longlong *)(param_1 + 0x10);
    while (0 < lVar1) {
      lVar1 = lVar1 + -1;
      lVar2 = *(longlong *)(*(longlong *)(param_1 + 8) + lVar1 * 8);
      if (lVar2 != 0) {
        FUN_1804547d0(lVar2,0x70);
      }
    }
    lVar1 = *(longlong *)(param_1 + 8);
    lVar2 = lVar1;
    if ((0xfff < (ulonglong)(*(longlong *)(param_1 + 0x10) * 8)) &&
       (lVar2 = *(longlong *)(lVar1 + -8), 0x1f < (lVar1 - lVar2) - 8U)) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    FUN_1804547d0(lVar2);
    *(undefined8 *)(param_1 + 8) = 0;
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
  return;
}



