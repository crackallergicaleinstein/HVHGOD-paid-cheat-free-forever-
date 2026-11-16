// FUN_1805ed490 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805ed490 */

ulonglong FUN_1805ed490(longlong param_1,longlong param_2,longlong param_3,int *param_4,
                       ulonglong param_5)

{
  byte bVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  byte *pbVar7;
  
  if (7 < param_5) {
    if (*param_4 != -0x2d04adb) {
      return 0xfffffffffffffff6;
    }
    *(undefined8 *)(param_1 + 0x6838) = 5;
    pbVar7 = (byte *)((longlong)param_4 + 5);
    lVar4 = param_5 - 5;
    uVar2 = FUN_1805ec2d0(param_1,param_4,5);
    lVar6 = param_2;
    if (0xffffffffffffff88 < uVar2) {
      return uVar2;
    }
    for (; 2 < (longlong)param_4 + (param_5 - (longlong)pbVar7); pbVar7 = pbVar7 + uVar2) {
      bVar1 = *pbVar7 >> 6;
      if (bVar1 == 3) {
        uVar2 = 0;
      }
      else if (bVar1 == 2) {
        uVar2 = 1;
      }
      else {
        uVar2 = (ulonglong)((uint6)CONCAT21(CONCAT11(*pbVar7,pbVar7[1]),pbVar7[2]) & 0x7ffff);
      }
      pbVar7 = pbVar7 + 3;
      uVar5 = lVar4 - 3;
      if (uVar5 < uVar2) {
        return 0xffffffffffffffb8;
      }
      if (bVar1 == 0) {
        if (uVar2 < 0x20000) {
          uVar3 = FUN_1805ec340(param_1,pbVar7,uVar2);
          if (uVar3 < 0xffffffffffffff89) {
            uVar3 = FUN_1805ed1a0(param_1,lVar6,(param_3 + param_2) - lVar6,pbVar7 + uVar3,
                                  uVar2 - uVar3);
          }
        }
        else {
          uVar3 = 0xffffffffffffffb8;
        }
      }
      else if (bVar1 == 1) {
        if (lVar6 == 0) {
          uVar3 = 0xffffffffffffffba;
        }
        else if ((ulonglong)((param_3 + param_2) - lVar6) < uVar2) {
          uVar3 = 0xffffffffffffffba;
        }
        else {
          FUN_18063aed0(lVar6,pbVar7,uVar2);
          uVar3 = uVar2;
        }
      }
      else {
        if ((bVar1 == 2) || (bVar1 != 3)) {
          return 0xffffffffffffffff;
        }
        uVar3 = 0;
        if (uVar5 != 0) {
          return 0xffffffffffffffb8;
        }
      }
      if (uVar2 == 0) {
        return lVar6 - param_2;
      }
      if (0xffffffffffffff88 < uVar3) {
        return uVar3;
      }
      lVar6 = lVar6 + uVar3;
      lVar4 = uVar5 - uVar2;
    }
  }
  return 0xffffffffffffffb8;
}



