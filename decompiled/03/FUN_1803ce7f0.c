// FUN_1803ce7f0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1803ce7f0 */

void FUN_1803ce7f0(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    lVar2 = param_1[1];
    for (; lVar1 != lVar2; lVar1 = lVar1 + 0x58) {
      FUN_18015c010(lVar1 + 0x20);
      FUN_18015c010(lVar1);
    }
    lVar1 = *param_1;
    lVar2 = lVar1;
    if ((0xfff < (ulonglong)(((param_1[2] - lVar1) / 0x58) * 0x58)) &&
       (lVar2 = *(longlong *)(lVar1 + -8), 0x1f < (lVar1 - lVar2) - 8U)) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    FUN_1804547d0(lVar2);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}



