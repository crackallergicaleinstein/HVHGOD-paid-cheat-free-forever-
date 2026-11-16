// FUN_1802318f0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802318f0 */

longlong FUN_1802318f0(longlong *param_1,longlong param_2,undefined8 param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *local_68;
  undefined8 local_60;
  ulonglong local_58;
  longlong local_50;
  longlong local_48;
  
  lVar6 = *param_1;
  lVar8 = (param_1[1] - lVar6) / 0x110;
  if (lVar8 == 0xf0f0f0f0f0f0f0) {
                    /* WARNING: Subroutine does not return */
    FUN_1801136f0();
  }
  uVar1 = lVar8 + 1;
  uVar2 = (param_1[2] - lVar6) / 0x110;
  if (0xf0f0f0f0f0f0f0 - (uVar2 >> 1) < uVar2) {
    uVar5 = 0xf0f0f0f0f0f0f0;
  }
  else {
    uVar2 = (uVar2 >> 1) + uVar2;
    uVar5 = uVar1;
    if (uVar1 <= uVar2) {
      uVar5 = uVar2;
    }
    if (0xf0f0f0f0f0f0f0 < uVar5) {
                    /* WARNING: Subroutine does not return */
      FUN_18015bc80();
    }
  }
  lVar4 = FUN_18015bca0(uVar5 * 0x110);
  lVar9 = ((param_2 - lVar6) / 0x110) * 0x110 + lVar4;
  lVar6 = lVar9 + 0x110;
  local_68 = param_1;
  local_58 = uVar5;
  local_48 = lVar6;
  FUN_1802329a0(lVar9,param_3);
  lVar8 = param_1[1];
  lVar7 = *param_1;
  local_50 = lVar9;
  lVar3 = lVar4;
  if (param_2 == lVar8) {
    for (; lVar7 != lVar8; lVar7 = lVar7 + 0x110) {
      FUN_1802329a0(lVar3,lVar7);
      lVar3 = lVar3 + 0x110;
    }
  }
  else {
    for (; lVar7 != param_2; lVar7 = lVar7 + 0x110) {
      FUN_1802329a0(lVar3,lVar7);
      lVar3 = lVar3 + 0x110;
    }
    lVar8 = param_1[1];
    local_50 = lVar4;
    if (param_2 != lVar8) {
      do {
        FUN_1802329a0(lVar6,param_2);
        lVar6 = lVar6 + 0x110;
        param_2 = param_2 + 0x110;
      } while (param_2 != lVar8);
    }
  }
  local_60 = 0;
  FUN_180232790(param_1,lVar4,uVar1,uVar5);
  FUN_1802326f0(&local_68);
  return lVar9;
}



