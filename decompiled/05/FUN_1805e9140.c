// FUN_1805e9140 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805e9140 */

ulonglong FUN_1805e9140(longlong param_1,longlong param_2,ulonglong *param_3,longlong *param_4,
                       longlong param_5,longlong param_6,longlong param_7,ulonglong param_8)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  
  uVar1 = *param_3;
  uVar7 = param_3[1];
  uVar2 = param_3[2];
  lVar4 = *param_4;
  lVar5 = uVar1 + param_1;
  uVar3 = uVar7 + uVar1;
  if ((ulonglong)(param_2 - param_1) < uVar3) {
    return 0xffffffffffffffba;
  }
  if ((ulonglong)(param_5 - lVar4) < uVar1) {
LAB_1805e924d:
    uVar3 = 0xffffffffffffffec;
  }
  else {
    FUN_1805e9410(param_1,param_2 + -0x20,lVar4,uVar1,0);
    *param_4 = uVar1 + lVar4;
    lVar4 = lVar5 - uVar2;
    if ((ulonglong)(lVar5 - param_6) < uVar2) {
      if ((ulonglong)(lVar5 - param_7) < uVar2) goto LAB_1805e924d;
      lVar4 = (lVar5 - uVar2) + (param_8 - param_6);
      if (lVar4 + uVar7 <= param_8) {
        FUN_18063aed0(lVar5,lVar4,uVar7);
        return uVar3;
      }
      lVar6 = param_8 - lVar4;
      FUN_18063aed0(lVar5,lVar4,lVar6);
      lVar5 = lVar5 + lVar6;
      uVar7 = uVar7 - lVar6;
      lVar4 = param_6;
    }
    FUN_1805e9410(lVar5,param_2 + -0x20,lVar4,uVar7,1);
  }
  return uVar3;
}



