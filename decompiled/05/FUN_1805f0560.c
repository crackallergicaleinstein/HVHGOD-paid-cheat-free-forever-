// FUN_1805f0560 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805f0560 */

ulonglong FUN_1805f0560(longlong param_1,longlong param_2,longlong param_3,byte *param_4,
                       ulonglong param_5)

{
  byte bVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  byte *pbVar7;
  
  if (7 < param_5) {
    uVar4 = *(longlong *)(&DAT_180688d60 + (ulonglong)(param_4[4] >> 6) * 8) + 5;
    if (0xffffffffffffff88 < uVar4) {
      return uVar4;
    }
    if (*(longlong *)(&DAT_180688d60 + (ulonglong)(param_4[4] >> 6) * 8) + 8U <= param_5) {
      lVar2 = FUN_1805f1260(param_1 + 0x5440,param_4,uVar4);
      uVar5 = param_5;
      lVar6 = param_2;
      pbVar7 = param_4;
      if (lVar2 != 0) {
        return 0xffffffffffffffec;
      }
      while( true ) {
        pbVar7 = pbVar7 + uVar4;
        lVar2 = uVar5 - uVar4;
        if (param_4 + (param_5 - (longlong)pbVar7) < (byte *)0x3) break;
        bVar1 = *pbVar7 >> 6;
        if (bVar1 == 3) {
          uVar4 = 0;
        }
        else if (bVar1 == 2) {
          uVar4 = 1;
        }
        else {
          uVar4 = (ulonglong)((uint6)CONCAT21(CONCAT11(*pbVar7,pbVar7[1]),pbVar7[2]) & 0x7ffff);
        }
        pbVar7 = pbVar7 + 3;
        uVar5 = lVar2 - 3;
        if (uVar5 < uVar4) {
          return 0xffffffffffffffb8;
        }
        if (bVar1 == 0) {
          if (uVar4 < 0x20000) {
            uVar3 = FUN_1805efee0(param_1,pbVar7,uVar4);
            if (uVar3 < 0xffffffffffffff89) {
              uVar3 = FUN_1805f0750(param_1,lVar6,(param_3 + param_2) - lVar6,pbVar7 + uVar3,
                                    uVar4 - uVar3);
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
          else if ((ulonglong)((param_3 + param_2) - lVar6) < uVar4) {
            uVar3 = 0xffffffffffffffba;
          }
          else {
            FUN_18063aed0(lVar6,pbVar7,uVar4);
            uVar3 = uVar4;
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
        if (uVar4 == 0) {
          return lVar6 - param_2;
        }
        if (0xffffffffffffff88 < uVar3) {
          return uVar3;
        }
        lVar6 = lVar6 + uVar3;
      }
    }
  }
  return 0xffffffffffffffb8;
}



