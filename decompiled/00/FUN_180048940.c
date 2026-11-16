// FUN_180048940 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180048940 */

void FUN_180048940(longlong *param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  uVar1 = param_1[3];
  if (0xf < uVar1) {
    lVar2 = *param_1;
    uVar3 = uVar1 + 1;
    lVar4 = lVar2;
    if (0xfff < uVar3) {
      lVar4 = *(longlong *)(lVar2 + -8);
      if (0x1f < (ulonglong)((lVar2 + -8) - lVar4)) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      uVar3 = uVar1 + 0x28;
    }
    FUN_1804547d0(lVar4,uVar3);
  }
  param_1[2] = 0;
  param_1[3] = 0xf;
  *(undefined1 *)param_1 = 0;
  return;
}



