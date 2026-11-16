// FUN_1801200b0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801200b0 */

longlong FUN_1801200b0(longlong *param_1,longlong param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  
  lVar5 = *param_1;
  lVar7 = (param_1[1] - lVar5) / 0x70;
  uVar6 = 0x249249249249249;
  if (lVar7 == 0x249249249249249) {
                    /* WARNING: Subroutine does not return */
    FUN_1801136f0();
  }
  uVar1 = lVar7 + 1;
  uVar2 = (param_1[2] - lVar5) / 0x70;
  if (uVar2 <= 0x249249249249249 - (uVar2 >> 1)) {
    uVar2 = (uVar2 >> 1) + uVar2;
    uVar6 = uVar1;
    if (uVar1 <= uVar2) {
      uVar6 = uVar2;
    }
    if (0x249249249249249 < uVar6) {
                    /* WARNING: Subroutine does not return */
      FUN_18015bc80();
    }
  }
  lVar4 = FUN_18015bca0(uVar6 * 0x70);
  lVar8 = ((param_2 - lVar5) / 0x70) * 0x70 + lVar4;
  FUN_1801417a0();
  lVar5 = param_1[1];
  lVar7 = *param_1;
  lVar3 = lVar4;
  if (param_2 == lVar5) {
    for (; lVar7 != lVar5; lVar7 = lVar7 + 0x70) {
      FUN_1800aa610(lVar3,lVar7);
      lVar3 = lVar3 + 0x70;
    }
  }
  else {
    for (; lVar7 != param_2; lVar7 = lVar7 + 0x70) {
      FUN_1800aa610(lVar3,lVar7);
      lVar3 = lVar3 + 0x70;
    }
    lVar5 = param_1[1];
    lVar7 = lVar8;
    if (param_2 != lVar5) {
      do {
        FUN_1800aa610(lVar7 + 0x70,param_2);
        param_2 = param_2 + 0x70;
        lVar7 = lVar7 + 0x70;
      } while (param_2 != lVar5);
    }
  }
  lVar5 = *param_1;
  if (lVar5 != 0) {
    lVar7 = param_1[1];
    for (; lVar5 != lVar7; lVar5 = lVar5 + 0x70) {
      FUN_180111b90(lVar5 + 0x58);
      FUN_18015c010(lVar5 + 0x38);
      FUN_18015c010(lVar5 + 0x18);
    }
    lVar5 = *param_1;
    lVar7 = lVar5;
    if ((0xfff < (ulonglong)(((param_1[2] - lVar5) / 0x70) * 0x70)) &&
       (lVar7 = *(longlong *)(lVar5 + -8), 0x1f < (lVar5 - lVar7) - 8U)) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    FUN_1804547d0(lVar7);
  }
  *param_1 = lVar4;
  param_1[1] = uVar1 * 0x70 + lVar4;
  param_1[2] = uVar6 * 0x70 + lVar4;
  return lVar8;
}



