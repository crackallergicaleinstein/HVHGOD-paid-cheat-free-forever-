// FUN_180663680 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180663680 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180663680(void)

{
  longlong lVar1;
  longlong lVar2;
  
  if (DAT_180c62c90 != 0) {
    lVar1 = DAT_180c62c98;
    for (lVar2 = DAT_180c62c90; lVar2 != lVar1; lVar2 = lVar2 + 0x28) {
      FUN_18015c010(lVar2);
    }
    lVar2 = DAT_180c62c90;
    if ((0xfff < (ulonglong)(((DAT_180c62ca0 - DAT_180c62c90) / 0x28) * 0x28)) &&
       (lVar2 = *(longlong *)(DAT_180c62c90 + -8), 0x1f < (DAT_180c62c90 - lVar2) - 8U)) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    FUN_1804547d0(lVar2);
    DAT_180c62c90 = 0;
    _DAT_180c62c98 = (undefined1  [16])0x0;
  }
  return;
}



