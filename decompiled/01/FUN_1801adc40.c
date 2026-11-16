// FUN_1801adc40 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801adc40 */

void FUN_1801adc40(longlong *param_1,longlong param_2,undefined8 param_3,ulonglong param_4)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  
  lVar5 = *param_1;
  lVar3 = param_1[1];
  if (param_4 != 0) {
    if ((ulonglong)(param_1[2] - lVar3) < param_4) {
      lVar7 = lVar3 - lVar5;
      if (0x7fffffffffffffffU - lVar7 < param_4) {
                    /* WARNING: Subroutine does not return */
        FUN_1801136f0();
      }
      uVar8 = param_4 + lVar7;
      uVar2 = param_1[2] - lVar5;
      uVar4 = 0x7fffffffffffffff;
      if ((uVar2 <= 0x7fffffffffffffff - (uVar2 >> 1)) &&
         (uVar4 = (uVar2 >> 1) + uVar2, uVar4 < uVar8)) {
        uVar4 = uVar8;
      }
      lVar1 = FUN_18015bca0(uVar4);
      lVar6 = param_2 - lVar5;
      FUN_18063aed0(lVar1 + lVar6,param_3,param_4);
      if ((param_4 == 1) && (param_2 == lVar3)) {
        lVar3 = lVar1;
        param_2 = lVar5;
      }
      else {
        FUN_18063aed0(lVar1,lVar5,lVar6);
        lVar7 = lVar3 - param_2;
        lVar3 = param_4 + lVar6 + lVar1;
      }
      FUN_18063aed0(lVar3,param_2,lVar7);
      FUN_1801413a0(param_1,lVar1,uVar8,uVar4);
    }
    else {
      uVar8 = lVar3 - param_2;
      if (param_4 < uVar8) {
        FUN_18063aed0(lVar3,lVar3 - param_4,param_4);
        param_1[1] = param_4 + lVar3;
        lVar5 = (lVar3 - param_4) - param_2;
        FUN_18063aed0(lVar3 - lVar5,param_2,lVar5);
        FUN_18063aed0(param_2,param_3,param_4);
      }
      else {
        FUN_18063aed0(param_4 + param_2,param_2,uVar8);
        param_1[1] = param_4 + param_2 + uVar8;
        FUN_18063aed0(param_2,param_3,param_4);
      }
    }
  }
  return;
}



