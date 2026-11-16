// FUN_1805e9280 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805e9280 */

ulonglong FUN_1805e9280(ulonglong param_1,longlong param_2,undefined8 param_3,ulonglong *param_4,
                       ulonglong *param_5,longlong param_6,longlong param_7,longlong param_8,
                       ulonglong param_9)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  
  uVar2 = *param_4;
  uVar8 = param_4[1];
  uVar3 = param_4[2];
  uVar4 = *param_5;
  lVar6 = uVar2 + param_1;
  uVar1 = uVar8 + uVar2;
  if (uVar1 <= param_2 - param_1) {
    if (param_6 - uVar4 < uVar2) {
      return 0xffffffffffffffec;
    }
    if ((param_1 <= uVar4) || (uVar4 + uVar2 <= param_1)) {
      FUN_1805e95d0(param_1,uVar4);
      *param_5 = uVar4 + uVar2;
      lVar5 = lVar6 - uVar3;
      if ((ulonglong)(lVar6 - param_7) < uVar3) {
        if ((ulonglong)(lVar6 - param_8) < uVar3) {
          return 0xffffffffffffffec;
        }
        lVar5 = (lVar6 - uVar3) + (param_9 - param_7);
        if (lVar5 + uVar8 <= param_9) {
          FUN_18063aed0(lVar6,lVar5,uVar8);
          return uVar1;
        }
        lVar7 = param_9 - lVar5;
        FUN_18063aed0(lVar6,lVar5,lVar7);
        lVar6 = lVar6 + lVar7;
        uVar8 = uVar8 - lVar7;
        lVar5 = param_7;
      }
      FUN_1805e9410(lVar6,param_3,lVar5,uVar8,1);
      return uVar1;
    }
  }
  return 0xffffffffffffffba;
}



