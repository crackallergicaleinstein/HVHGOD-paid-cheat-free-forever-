// FUN_1805f3b70 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805f3b70 */

ulonglong FUN_1805f3b70(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                       ulonglong param_5)

{
  byte bVar1;
  ulonglong uVar2;
  longlong lVar3;
  byte *pbVar4;
  ulonglong uVar5;
  uint uVar6;
  longlong lVar7;
  ulonglong uVar8;
  
  param_3 = param_2 + param_3;
  if (7 < param_5) {
    bVar1 = *(byte *)(param_4 + 4);
    lVar3 = (ulonglong)(bVar1 >> 6) * 8;
    if (((bVar1 & 0x20) == 0) || (lVar7 = 6, *(longlong *)(&DAT_1806891a0 + lVar3) != 0)) {
      lVar7 = 5;
    }
    uVar2 = (ulonglong)(~(uint)bVar1 >> 5 & 1) +
            *(longlong *)(&DAT_1806891c0 + (ulonglong)(bVar1 & 3) * 8) +
            *(longlong *)(&DAT_1806891a0 + lVar3) + lVar7;
    if (0xffffffffffffff88 < uVar2) {
      return uVar2;
    }
    if (uVar2 + 3 <= param_5) {
      lVar3 = FUN_1805f3310(param_1,param_4,uVar2);
      if (lVar3 != 0) {
        return 0xffffffffffffffec;
      }
      lVar7 = param_5 - uVar2;
      lVar3 = param_2;
      for (pbVar4 = (byte *)(uVar2 + param_4); 2 < (param_4 + param_5) - (longlong)pbVar4;
          pbVar4 = pbVar4 + uVar5) {
        bVar1 = *pbVar4 >> 6;
        uVar6 = (uint)pbVar4[1] * 0x100 + (*pbVar4 & 7) * 0x10000 + (uint)pbVar4[2];
        uVar2 = 0;
        if (bVar1 == 2) {
          uVar2 = (ulonglong)uVar6;
        }
        if (bVar1 == 3) {
          uVar5 = 0;
        }
        else {
          uVar5 = 1;
          if (bVar1 != 2) {
            uVar5 = (ulonglong)uVar6;
          }
        }
        pbVar4 = pbVar4 + 3;
        uVar8 = lVar7 - 3;
        if (uVar8 < uVar5) {
          return 0xffffffffffffffb8;
        }
        if (bVar1 == 0) {
          if (uVar5 < 0x20000) {
            uVar2 = FUN_1805f3380(param_1,pbVar4,uVar5);
            if (uVar2 < 0xffffffffffffff89) {
              uVar2 = FUN_1805f3df0(param_1,lVar3,param_3 - lVar3,pbVar4 + uVar2,uVar5 - uVar2);
            }
          }
          else {
            uVar2 = 0xffffffffffffffb8;
          }
        }
        else if (bVar1 == 1) {
          if ((ulonglong)(param_3 - lVar3) < uVar5) {
            uVar2 = 0xffffffffffffffba;
          }
          else {
            if (uVar5 != 0) {
              FUN_18063aed0(lVar3,pbVar4,uVar5);
            }
            uVar2 = uVar5;
          }
        }
        else {
          if (bVar1 != 2) {
            if (bVar1 != 3) {
              return 0xffffffffffffffff;
            }
            if (uVar8 == 0) {
              return lVar3 - param_2;
            }
            return 0xffffffffffffffb8;
          }
          if ((ulonglong)(param_3 - lVar3) < uVar2) {
            uVar2 = 0xffffffffffffffba;
          }
          else if ((int)uVar2 != 0) {
            FUN_18063ab10(lVar3,*pbVar4,uVar2);
          }
        }
        if (0xffffffffffffff88 < uVar2) {
          return uVar2;
        }
        if (*(int *)(param_1 + 0x5458) != 0) {
          FUN_1805e41b0(param_1 + 0x5470,lVar3,uVar2);
        }
        lVar3 = lVar3 + uVar2;
        lVar7 = uVar8 - uVar5;
      }
    }
  }
  return 0xffffffffffffffb8;
}



