// FUN_1802aa1b0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802aa1b0 */

void FUN_1802aa1b0(longlong *param_1,ulonglong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar1 = *param_1;
  if ((ulonglong)(param_1[2] - lVar1 >> 3) < param_2) {
    if (0x1fffffffffffffff < param_2) {
                    /* WARNING: Subroutine does not return */
      FUN_1801136f0();
    }
    lVar2 = param_1[1];
    lVar4 = FUN_18015bca0(param_2 * 8);
    FUN_18063aed0(lVar4);
    lVar3 = *param_1;
    if (lVar3 != 0) {
      lVar5 = lVar3;
      if ((0xfff < (param_1[2] - lVar3 & 0xfffffffffffffff8U)) &&
         (lVar5 = *(longlong *)(lVar3 + -8), 0x1f < (lVar3 - lVar5) - 8U)) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      FUN_1804547d0(lVar5);
    }
    *param_1 = lVar4;
    param_1[1] = lVar4 + (lVar2 - lVar1 >> 3) * 8;
    param_1[2] = param_2 * 8 + lVar4;
  }
  return;
}



