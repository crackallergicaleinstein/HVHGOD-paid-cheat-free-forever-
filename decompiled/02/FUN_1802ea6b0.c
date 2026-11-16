// FUN_1802ea6b0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802ea6b0 */

longlong FUN_1802ea6b0(longlong *param_1,longlong param_2,undefined8 param_3)

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
  lVar4 = (param_1[1] - lVar3) / 0x13d0;
  if (lVar4 == 0xcebcf8bb5b416) {
                    /* WARNING: Subroutine does not return */
    FUN_1801136f0();
  }
  uVar1 = lVar4 + 1;
  uVar2 = (param_1[2] - lVar3) / 0x13d0;
  if (0xcebcf8bb5b416 - (uVar2 >> 1) < uVar2) {
    uVar6 = 0xcebcf8bb5b416;
  }
  else {
    uVar2 = (uVar2 >> 1) + uVar2;
    uVar6 = uVar1;
    if (uVar1 <= uVar2) {
      uVar6 = uVar2;
    }
    if (0xcebcf8bb5b416 < uVar6) {
                    /* WARNING: Subroutine does not return */
      FUN_18015bc80();
    }
  }
  lVar4 = FUN_18015bca0(uVar6 * 0x13d0);
  lVar7 = ((param_2 - lVar3) / 0x13d0) * 0x13d0 + lVar4;
  FUN_18063aed0(lVar7,param_3,0x13d0);
  lVar3 = *param_1;
  if (param_2 == param_1[1]) {
    lVar8 = param_1[1] - lVar3;
    lVar5 = lVar4;
    param_2 = lVar3;
  }
  else {
    FUN_18063aed0(lVar4,lVar3,param_2 - lVar3);
    lVar8 = param_1[1] - param_2;
    lVar5 = lVar7 + 0x13d0;
  }
  FUN_18063aed0(lVar5,param_2,lVar8);
  FUN_1802ec240(param_1,lVar4,uVar1,uVar6);
  return lVar7;
}



