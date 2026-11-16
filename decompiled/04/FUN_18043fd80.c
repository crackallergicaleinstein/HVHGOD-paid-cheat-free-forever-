// FUN_18043fd80 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18043fd80 */

longlong *
FUN_18043fd80(longlong *param_1,ulonglong param_2,undefined8 param_3,longlong param_4,
             longlong param_5,char param_6)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong lVar7;
  
  lVar2 = param_1[2];
  if (0x7fffffffffffffffU - lVar2 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_18015bb70();
  }
  uVar5 = param_2 + lVar2 | 0xf;
  uVar3 = param_1[3];
  uVar6 = 0x7fffffffffffffff;
  if ((uVar5 < 0x8000000000000000) && (uVar3 <= 0x7fffffffffffffff - (uVar3 >> 1))) {
    uVar1 = uVar3 + (uVar3 >> 1);
    uVar6 = uVar5;
    if (uVar5 < uVar1) {
      uVar6 = uVar1;
    }
  }
  lVar4 = FUN_18015bca0(uVar6 + 1);
  param_1[3] = uVar6;
  param_1[2] = param_2 + lVar2;
  lVar7 = param_4 + lVar4;
  if (uVar3 < 0x10) {
    FUN_18063aed0(lVar4,param_1,param_4);
    FUN_18063ab10(lVar7,(int)param_6,param_5);
    FUN_18063aed0(param_5 + lVar7,param_4 + (longlong)param_1,(lVar2 - param_4) + 1);
  }
  else {
    lVar2 = *param_1;
    FUN_18063aed0(lVar4,lVar2,param_4);
    FUN_18063ab10(lVar7,(int)param_6,param_5);
    FUN_18063aed0(param_5 + lVar7,lVar2 + param_4);
    lVar7 = lVar2;
    if ((0xfff < uVar3 + 1) && (lVar7 = *(longlong *)(lVar2 + -8), 0x1f < (lVar2 - lVar7) - 8U)) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    FUN_1804547d0(lVar7);
  }
  *param_1 = lVar4;
  return param_1;
}



