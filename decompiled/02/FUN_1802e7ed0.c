// FUN_1802e7ed0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802e7ed0 */

void FUN_1802e7ed0(longlong *param_1,longlong param_2,undefined8 param_3,ulonglong param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  
  lVar6 = *param_1;
  lVar4 = param_1[1];
  if (param_4 != 0) {
    if ((ulonglong)((param_1[2] - lVar4) / 0x18) < param_4) {
      lVar7 = lVar4 - lVar6;
      if (0xaaaaaaaaaaaaaaaU - lVar7 / 0x18 < param_4) {
                    /* WARNING: Subroutine does not return */
        FUN_1801136f0();
      }
      uVar9 = param_4 + lVar7 / 0x18;
      uVar1 = (param_1[2] - lVar6) / 0x18;
      if (0xaaaaaaaaaaaaaaa - (uVar1 >> 1) < uVar1) {
        uVar8 = 0xaaaaaaaaaaaaaaa;
      }
      else {
        uVar1 = (uVar1 >> 1) + uVar1;
        uVar8 = uVar9;
        if (uVar9 <= uVar1) {
          uVar8 = uVar1;
        }
        if (0xaaaaaaaaaaaaaaa < uVar8) {
                    /* WARNING: Subroutine does not return */
          FUN_18015bc80();
        }
      }
      lVar2 = FUN_18015bca0(uVar8 * 0x18);
      lVar3 = param_2 - lVar6;
      lVar5 = lVar3 / 6 + (lVar3 >> 0x3f);
      lVar5 = (lVar5 >> 2) - (lVar5 >> 0x3f);
      FUN_18063aed0(lVar2 + lVar5 * 0x18,param_3,param_4 * 0x18);
      if ((param_4 == 1) && (param_2 == lVar4)) {
        lVar4 = lVar2;
        param_2 = lVar6;
      }
      else {
        FUN_18063aed0(lVar2,lVar6,lVar3);
        lVar7 = lVar4 - param_2;
        lVar4 = lVar2 + (lVar5 + param_4) * 0x18;
      }
      FUN_18063aed0(lVar4,param_2,lVar7);
      FUN_1802eb940(param_1,lVar2,uVar9,uVar8);
    }
    else {
      lVar7 = param_4 * 0x18;
      lVar6 = (lVar4 - param_2) / 6 + (lVar4 - param_2 >> 0x3f);
      uVar9 = (lVar6 >> 2) - (lVar6 >> 0x3f);
      if (param_4 < uVar9) {
        lVar6 = lVar4 + param_4 * -0x18;
        FUN_18063aed0(lVar4,lVar6,lVar7);
        param_1[1] = lVar4 + (lVar7 / 0x18) * 0x18;
        lVar6 = lVar6 - param_2;
        FUN_18063aed0(lVar4 - lVar6,param_2,lVar6);
        FUN_18063aed0(param_2,param_3,lVar7);
      }
      else {
        FUN_18063aed0(lVar7 + param_2,param_2);
        param_1[1] = lVar7 + param_2 + uVar9 * 0x18;
        FUN_18063aed0(param_2,param_3,lVar7);
      }
    }
  }
  return;
}



