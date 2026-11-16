// FUN_1801b0ec0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801b0ec0 */

void FUN_1801b0ec0(longlong *param_1,ulonglong param_2)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  lVar1 = *param_1;
  lVar2 = param_1[1];
  uVar6 = lVar2 - lVar1;
  if (param_2 < uVar6) {
    param_1[1] = lVar1 + param_2;
  }
  else if (uVar6 < param_2) {
    uVar3 = param_1[2] - lVar1;
    if (uVar3 < param_2) {
      if (0x7fffffffffffffff < param_2) {
                    /* WARNING: Subroutine does not return */
        FUN_1801136f0();
      }
      uVar5 = 0x7fffffffffffffff;
      if ((uVar3 <= 0x7fffffffffffffff - (uVar3 >> 1)) &&
         (uVar5 = uVar3 + (uVar3 >> 1), uVar5 < param_2)) {
        uVar5 = param_2;
      }
      lVar2 = FUN_18015bca0(uVar5);
      FUN_18063ab10(uVar6 + lVar2,0,param_2 - uVar6);
      FUN_18063aed0(lVar2);
      lVar1 = *param_1;
      if (lVar1 != 0) {
        lVar4 = lVar1;
        if ((0xfff < (ulonglong)(param_1[2] - lVar1)) &&
           (lVar4 = *(longlong *)(lVar1 + -8), 0x1f < (lVar1 - lVar4) - 8U)) {
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
        FUN_1804547d0(lVar4);
      }
      *param_1 = lVar2;
      param_1[1] = param_2 + lVar2;
      param_1[2] = uVar5 + lVar2;
    }
    else {
      FUN_18063ab10(lVar2,0,param_2 - uVar6);
      param_1[1] = (param_2 - uVar6) + lVar2;
    }
  }
  return;
}



