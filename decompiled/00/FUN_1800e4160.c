// FUN_1800e4160 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1800e4160 */

void FUN_1800e4160(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x18);
  if (lVar1 != 0) {
    lVar2 = lVar1;
    if ((0xfff < (*(longlong *)(param_1 + 0x28) - lVar1 & 0xfffffffffffffff8U)) &&
       (lVar2 = *(longlong *)(lVar1 + -8), 0x1f < (lVar1 - lVar2) - 8U)) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    FUN_1804547d0(lVar2);
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
    *(undefined8 *)(param_1 + 0x28) = 0;
  }
  FUN_18013ef30();
  FUN_1804547d0(*(undefined8 *)(param_1 + 8),0x50);
  return;
}



