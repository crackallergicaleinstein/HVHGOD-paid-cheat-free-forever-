// FUN_1802ad770 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802ad770 */

longlong FUN_1802ad770(longlong *param_1,longlong param_2,undefined8 param_3,undefined4 *param_4)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  
  lVar3 = *param_1;
  lVar7 = (param_1[1] - lVar3) / 0x28;
  if (lVar7 == 0x666666666666666) {
                    /* WARNING: Subroutine does not return */
    FUN_1801136f0();
  }
  uVar1 = lVar7 + 1;
  uVar2 = (param_1[2] - lVar3) / 0x28;
  if (0x666666666666666 - (uVar2 >> 1) < uVar2) {
    uVar6 = 0x666666666666666;
  }
  else {
    uVar2 = (uVar2 >> 1) + uVar2;
    uVar6 = uVar1;
    if (uVar1 <= uVar2) {
      uVar6 = uVar2;
    }
    if (0x666666666666666 < uVar6) {
                    /* WARNING: Subroutine does not return */
      FUN_18015bc80();
    }
  }
  lVar4 = FUN_18015bca0(uVar6 * 0x28);
  lVar3 = lVar4 + ((param_2 - lVar3) / 0x28) * 0x28;
  FUN_18015b360(lVar3,param_3);
  *(undefined4 *)(lVar3 + 0x20) = *param_4;
  lVar7 = param_1[1];
  lVar5 = *param_1;
  lVar8 = lVar4;
  if (param_2 != lVar7) {
    FUN_1802ae280(*param_1,param_2,lVar4);
    lVar7 = param_1[1];
    lVar5 = param_2;
    lVar8 = lVar3 + 0x28;
  }
  FUN_1802ae280(lVar5,lVar7,lVar8);
  lVar7 = *param_1;
  if (lVar7 != 0) {
    lVar5 = param_1[1];
    for (; lVar7 != lVar5; lVar7 = lVar7 + 0x28) {
      FUN_18015c010(lVar7);
    }
    lVar7 = *param_1;
    lVar5 = lVar7;
    if ((0xfff < (ulonglong)(((param_1[2] - lVar7) / 0x28) * 0x28)) &&
       (lVar5 = *(longlong *)(lVar7 + -8), 0x1f < (lVar7 - lVar5) - 8U)) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    FUN_1804547d0(lVar5);
  }
  *param_1 = lVar4;
  param_1[1] = lVar4 + uVar1 * 0x28;
  param_1[2] = uVar6 * 0x28 + lVar4;
  return lVar3;
}



