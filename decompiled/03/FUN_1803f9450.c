// FUN_1803f9450 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1803f9450 */

void FUN_1803f9450(longlong *param_1,ulonglong param_2)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  if (0x7fffffffffffffff < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1801136f0();
  }
  lVar1 = *param_1;
  uVar3 = param_1[2] - lVar1;
  uVar4 = 0x7fffffffffffffff;
  if ((uVar3 <= 0x7fffffffffffffff - (uVar3 >> 1)) &&
     (uVar4 = uVar3 + (uVar3 >> 1), uVar4 < param_2)) {
    uVar4 = param_2;
  }
  if (lVar1 != 0) {
    lVar2 = lVar1;
    if ((0xfff < uVar3) && (lVar2 = *(longlong *)(lVar1 + -8), 0x1f < (lVar1 - lVar2) - 8U)) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    FUN_1804547d0(lVar2);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  lVar1 = FUN_18015bca0(uVar4);
  *param_1 = lVar1;
  param_1[1] = lVar1;
  param_1[2] = lVar1 + uVar4;
  return;
}



