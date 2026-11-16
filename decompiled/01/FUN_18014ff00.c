// FUN_18014ff00 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18014ff00 */

longlong *
FUN_18014ff00(longlong *param_1,ulonglong param_2,undefined8 param_3,longlong param_4,
             undefined8 param_5,longlong param_6)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  lVar3 = param_1[2];
  if (0x7fffffffffffffffU - lVar3 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_18015bb70();
  }
  uVar7 = param_2 + lVar3 | 0xf;
  uVar4 = param_1[3];
  uVar8 = 0x7fffffffffffffff;
  if (((uVar7 < 0x8000000000000000) && (uVar4 <= 0x7fffffffffffffff - (uVar4 >> 1))) &&
     (uVar1 = uVar4 + (uVar4 >> 1), uVar8 = uVar7, uVar7 < uVar1)) {
    uVar8 = uVar1;
  }
  lVar6 = FUN_18015bca0(uVar8 + 1);
  param_1[3] = uVar8;
  param_1[2] = param_2 + lVar3;
  lVar2 = param_4 + lVar6;
  if (uVar4 < 0x10) {
    FUN_18063aed0(lVar6,param_1,param_4);
    FUN_18063aed0(lVar2,param_5,param_6);
    FUN_18063aed0(lVar2 + param_6,param_4 + (longlong)param_1,(lVar3 - param_4) + 1);
  }
  else {
    lVar5 = *param_1;
    FUN_18063aed0(lVar6,lVar5,param_4);
    FUN_18063aed0(lVar2,param_5,param_6);
    FUN_18063aed0(lVar2 + param_6,lVar5 + param_4,(lVar3 - param_4) + 1);
    FUN_18015bfb0(param_1,lVar5,uVar4);
  }
  *param_1 = lVar6;
  return param_1;
}



