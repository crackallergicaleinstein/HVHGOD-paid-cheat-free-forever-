// FUN_180001080 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180001080 */

void FUN_180001080(void)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  
  if (0xf < DAT_1808d4038) {
    lVar1 = CONCAT71(DAT_1808d4020._1_7_,(undefined1)DAT_1808d4020);
    uVar2 = DAT_1808d4038 + 1;
    lVar3 = lVar1;
    if (0xfff < uVar2) {
      lVar3 = *(longlong *)(lVar1 + -8);
      if (0x1f < (ulonglong)((lVar1 + -8) - lVar3)) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      uVar2 = DAT_1808d4038 + 0x28;
    }
    FUN_1804547d0(lVar3,uVar2);
  }
  DAT_1808d4030 = 0;
  DAT_1808d4038 = 0xf;
  DAT_1808d4020._0_1_ = 0;
  return;
}



