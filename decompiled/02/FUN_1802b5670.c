// FUN_1802b5670 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802b5670 */

void FUN_1802b5670(longlong *param_1,longlong param_2,undefined8 param_3,ulonglong param_4)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  lVar1 = *param_1;
  lVar4 = param_1[1];
  if (param_4 != 0) {
    if ((ulonglong)(param_1[2] - lVar4 >> 3) < param_4) {
      lVar5 = lVar4 - lVar1 >> 3;
      uVar3 = 0x1fffffffffffffff;
      if (0x1fffffffffffffffU - lVar5 < param_4) {
                    /* WARNING: Subroutine does not return */
        FUN_1801136f0();
      }
      uVar7 = param_4 + lVar5;
      uVar6 = param_1[2] - lVar1 >> 3;
      if (uVar6 <= 0x1fffffffffffffff - (uVar6 >> 1)) {
        uVar6 = (uVar6 >> 1) + uVar6;
        uVar3 = uVar7;
        if (uVar7 <= uVar6) {
          uVar3 = uVar6;
        }
        if (0x1fffffffffffffff < uVar3) {
                    /* WARNING: Subroutine does not return */
          FUN_18015bc80();
        }
      }
      lVar5 = FUN_18015bca0(uVar3 * 8);
      lVar2 = param_2 - lVar1 >> 3;
      FUN_18063aed0(lVar5 + lVar2 * 8,param_3,param_4 * 8);
      if ((param_4 == 1) && (param_2 == lVar4)) {
        lVar4 = lVar5;
        param_2 = lVar1;
      }
      else {
        FUN_18063aed0(lVar5,lVar1,param_2 - lVar1);
        lVar4 = lVar5 + (lVar2 + param_4) * 8;
      }
      FUN_18063aed0(lVar4,param_2);
      lVar1 = *param_1;
      if (lVar1 != 0) {
        lVar4 = lVar1;
        if ((0xfff < (param_1[2] - lVar1 & 0xfffffffffffffff8U)) &&
           (lVar4 = *(longlong *)(lVar1 + -8), 0x1f < (lVar1 - lVar4) - 8U)) {
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
        FUN_1804547d0(lVar4);
      }
      *param_1 = lVar5;
      param_1[1] = lVar5 + uVar7 * 8;
      param_1[2] = uVar3 * 8 + lVar5;
    }
    else {
      lVar1 = param_4 * 8;
      uVar3 = lVar4 - param_2 >> 3;
      if (param_4 < uVar3) {
        lVar5 = lVar4 + param_4 * -8;
        FUN_18063aed0(lVar4,lVar5,lVar1);
        param_1[1] = lVar4 + (lVar1 >> 3) * 8;
        lVar5 = lVar5 - param_2;
        FUN_18063aed0(lVar4 - lVar5,param_2,lVar5);
        FUN_18063aed0(param_2,param_3,lVar1);
      }
      else {
        FUN_18063aed0(lVar1 + param_2);
        param_1[1] = lVar1 + param_2 + uVar3 * 8;
        FUN_18063aed0(param_2,param_3,lVar1);
      }
    }
  }
  return;
}



