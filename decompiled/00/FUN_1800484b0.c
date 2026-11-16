// FUN_1800484b0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1800484b0 */

void FUN_1800484b0(ulonglong *param_1,ulonglong *param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  uVar8 = *param_2;
  if (uVar8 >> 0x3c != 0) {
LAB_180048590:
                    /* WARNING: Subroutine does not return */
    FUN_18015bc80();
  }
  uVar1 = *param_1;
  uVar2 = param_1[1];
  if (uVar8 == 0) {
    uVar8 = 0;
  }
  else if (uVar8 < 0x100) {
    uVar8 = FUN_180454770(uVar8 * 0x10);
  }
  else {
    if (0xffffffffffffffd < uVar8) goto LAB_180048590;
    lVar5 = FUN_180454770(uVar8 * 0x10 + 0x27);
    uVar8 = lVar5 + 0x27U & 0xffffffffffffffe0;
    *(longlong *)(uVar8 - 8) = lVar5;
  }
  FUN_18063aed0(uVar8);
  uVar3 = *param_2;
  uVar4 = *param_1;
  if (uVar4 != 0) {
    uVar7 = param_1[2] - uVar4;
    uVar6 = uVar4;
    if (0xfff < uVar7) {
      uVar6 = *(ulonglong *)(uVar4 - 8);
      if (0x1f < (uVar4 - 8) - uVar6) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      uVar7 = uVar7 + 0x27;
    }
    FUN_1804547d0(uVar6,uVar7);
  }
  *param_1 = uVar8;
  param_1[1] = (uVar2 - uVar1) + uVar8;
  param_1[2] = uVar3 * 0x10 + uVar8;
  return;
}



