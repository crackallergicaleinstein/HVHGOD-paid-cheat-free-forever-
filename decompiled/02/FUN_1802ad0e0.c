// FUN_1802ad0e0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802ad0e0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1802ad0e0(ulonglong *param_1,ulonglong param_2,ulonglong param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined1 auStack_488 [32];
  ulonglong *local_468;
  undefined1 local_458 [64];
  undefined1 local_418 [936];
  undefined1 local_70 [40];
  ulonglong local_48;
  
  local_48 = DAT_1808d5f00 ^ (ulonglong)auStack_488;
  lVar3 = param_3 - 0x408;
  uVar8 = ((longlong)(param_3 - param_2) / 0x408 >> 1) * 0x408 + param_2;
  lVar2 = (longlong)(lVar3 - param_2) / 0x408;
  uVar5 = param_2;
  local_468 = param_1;
  if (0x28 < lVar2) {
    lVar2 = lVar2 + 1 >> 3;
    uVar5 = lVar2 * 0x408 + param_2;
    FUN_1802aebc0(param_2,uVar5,lVar2 * 0x810 + param_2);
    FUN_1802aebc0(uVar8 + lVar2 * -0x408,uVar8,lVar2 * 0x408 + uVar8);
    lVar3 = lVar3 + lVar2 * -0x408;
    FUN_1802aebc0((param_3 - 0x408) + lVar2 * -0x810,lVar3);
  }
  FUN_1802aebc0(uVar5,uVar8,lVar3);
  uVar5 = uVar8 + 0x408;
  for (; param_2 < uVar8; uVar8 = uVar8 - 0x408) {
    if ((*(float *)(uVar8 + 0x2c) < *(float *)(uVar8 - 0x3dc)) ||
       (*(float *)(uVar8 - 0x3dc) < *(float *)(uVar8 + 0x2c))) break;
  }
  uVar6 = uVar5;
  uVar7 = uVar8;
  if (uVar5 < param_3) {
    do {
      uVar6 = uVar5;
      if ((*(float *)(uVar8 + 0x2c) < *(float *)(uVar5 + 0x2c)) ||
         (*(float *)(uVar5 + 0x2c) < *(float *)(uVar8 + 0x2c))) break;
      uVar5 = uVar5 + 0x408;
      uVar6 = uVar5;
    } while (uVar5 < param_3);
  }
joined_r0x0001802ad238:
  do {
    uVar1 = uVar7;
    if (param_3 <= uVar5) {
joined_r0x0001802ad2ad:
      for (; param_2 < uVar7; uVar7 = uVar7 - 0x408) {
        uVar4 = uVar1 - 0x408;
        if (*(float *)(uVar1 - 0x3dc) <= *(float *)(uVar8 + 0x2c)) {
          if (*(float *)(uVar1 - 0x3dc) < *(float *)(uVar8 + 0x2c)) break;
          uVar8 = uVar8 - 0x408;
          if (uVar8 != uVar4) {
            FUN_1802a6a40(local_458,uVar8);
            FUN_1802aceb0(uVar8,uVar4);
            FUN_1802aceb0(uVar4,local_458);
            FUN_18015c010(local_70);
            FUN_18015c010(local_418);
          }
        }
        uVar1 = uVar4;
      }
      if (uVar7 == param_2) {
        if (uVar5 == param_3) {
          *local_468 = uVar8;
          local_468[1] = uVar6;
        }
        if (uVar6 != uVar5) {
          FUN_1802a6a40(local_458,uVar8);
          FUN_1802aceb0(uVar8,uVar6);
          FUN_1802aceb0(uVar6,local_458);
          FUN_18015c010(local_70);
          FUN_18015c010(local_418);
        }
        FUN_1802a6a40(local_458,uVar8);
        FUN_1802aceb0(uVar8,uVar5);
        FUN_1802aceb0(uVar5,local_458);
        FUN_18015c010(local_70);
        FUN_18015c010(local_418);
        uVar8 = uVar8 + 0x408;
        uVar5 = uVar5 + 0x408;
        uVar6 = uVar6 + 0x408;
      }
      else {
        uVar7 = uVar7 - 0x408;
        if (uVar5 == param_3) {
          uVar8 = uVar8 - 0x408;
          if (uVar7 != uVar8) {
            FUN_1802a6a40(local_458,uVar7);
            FUN_1802aceb0(uVar7,uVar8);
            FUN_1802aceb0(uVar8,local_458);
            FUN_18015c010(local_70);
            FUN_18015c010(local_418);
          }
          uVar6 = uVar6 - 0x408;
          FUN_1802a6a40(local_458,uVar8);
          FUN_1802aceb0(uVar8,uVar6);
          FUN_1802aceb0(uVar6,local_458);
          FUN_18015c010(local_70);
          FUN_18015c010(local_418);
        }
        else {
          FUN_1802a6a40(local_458,uVar5);
          FUN_1802aceb0(uVar5,uVar7);
          FUN_1802aceb0(uVar7,local_458);
          FUN_18015c010(local_70);
          FUN_18015c010(local_418);
          uVar5 = uVar5 + 0x408;
        }
      }
      goto joined_r0x0001802ad238;
    }
    if (*(float *)(uVar8 + 0x2c) <= *(float *)(uVar5 + 0x2c)) {
      if (*(float *)(uVar8 + 0x2c) < *(float *)(uVar5 + 0x2c)) goto joined_r0x0001802ad2ad;
      if (uVar6 != uVar5) {
        FUN_1802a6a40(local_458,uVar6);
        FUN_1802aceb0(uVar6,uVar5);
        FUN_1802aceb0(uVar5,local_458);
        FUN_18015c010(local_70);
        FUN_18015c010(local_418);
      }
      uVar6 = uVar6 + 0x408;
    }
    uVar5 = uVar5 + 0x408;
  } while( true );
}



