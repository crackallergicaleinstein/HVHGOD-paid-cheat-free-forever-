// FUN_1802aa790 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802aa790 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1802aa790(longlong param_1,longlong param_2,longlong param_3,undefined1 param_4)

{
  float *pfVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  float fVar7;
  undefined1 auStack_4a8 [32];
  undefined1 local_488;
  longlong local_478;
  longlong local_470;
  undefined1 local_468 [44];
  float local_43c;
  undefined1 local_428 [936];
  undefined1 local_80 [40];
  ulonglong local_58;
  
  local_58 = DAT_1808d5f00 ^ (ulonglong)auStack_4a8;
  lVar2 = param_2 - param_1;
  while( true ) {
    if (lVar2 < 0x8508) {
      lVar2 = param_1;
      if (param_1 != param_2) {
        while (lVar6 = lVar2 + 0x408, lVar6 != param_2) {
          lVar4 = lVar6;
          FUN_1802a6a40(local_468,lVar6);
          lVar3 = lVar6;
          if (local_43c <= *(float *)(param_1 + 0x2c)) {
            lVar5 = lVar4;
            fVar7 = local_43c;
            if (*(float *)(lVar2 + 0x2c) < local_43c) {
              do {
                lVar4 = lVar3 + -0x408;
                FUN_1802aceb0(lVar5,lVar4);
                pfVar1 = (float *)(lVar3 + -0x7e4);
                lVar5 = lVar4;
                lVar3 = lVar4;
              } while (*pfVar1 < fVar7);
            }
          }
          else {
            while (lVar3 != param_1) {
              FUN_1802aceb0(lVar3,lVar3 + -0x408);
              lVar3 = lVar3 + -0x408;
            }
            lVar4 = param_1;
          }
          FUN_1802aceb0(lVar4,local_468);
          FUN_18015c010(local_80);
          FUN_18015c010(local_428);
          lVar2 = lVar6;
        }
      }
    }
    if (param_3 < 1) break;
    FUN_1802ad0e0(&local_478,param_1,param_2,param_4);
    lVar2 = local_470;
    lVar6 = local_478;
    param_3 = (param_3 >> 1) + (param_3 >> 2);
    lVar3 = (param_2 - local_470) / 0x102 + (param_2 - local_470 >> 0x3f);
    if ((local_478 - param_1) / 0x408 < (lVar3 >> 2) - (lVar3 >> 0x3f)) {
      FUN_1802aa790(param_1,local_478,param_3,param_4);
      lVar6 = param_2;
      param_1 = lVar2;
    }
    else {
      FUN_1802aa790(local_470,param_2,param_3,param_4);
    }
    lVar2 = lVar6 - param_1;
    param_2 = lVar6;
  }
  lVar2 = (param_2 - param_1) / 0x102 + (param_2 - param_1 >> 0x3f);
  lVar6 = (lVar2 >> 2) - (lVar2 >> 0x3f);
  lVar2 = lVar6 >> 1;
  if (0 < lVar2) {
    lVar3 = lVar2 * 0x408 + param_1;
    do {
      lVar3 = lVar3 + -0x408;
      lVar2 = lVar2 + -1;
      FUN_1802a6a40(local_468,lVar3);
      local_488 = param_4;
      FUN_1802ae160(param_1,lVar2,lVar6,local_468);
      FUN_18015c010(local_80);
      FUN_18015c010(local_428);
    } while (0 < lVar2);
  }
  if (lVar6 < 2) {
  }
  param_2 = param_2 + -0x408;
  do {
    if (1 < ((0x408 - param_1) + param_2) / 0x408) {
      FUN_1802a6a40(local_468,param_2);
      FUN_1802aceb0(param_2,param_1);
      local_488 = param_4;
      FUN_1802ae160(param_1,0,(param_2 - param_1) / 0x408,local_468);
      FUN_18015c010(local_80);
      FUN_18015c010(local_428);
    }
    param_2 = param_2 + -0x408;
  } while (0x80f < (0x408 - param_1) + param_2);
}



