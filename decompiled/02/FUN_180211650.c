// FUN_180211650 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180211650 */

longlong FUN_180211650(longlong *param_1,longlong param_2,undefined8 param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  
  lVar7 = *param_1;
  lVar4 = (param_2 - lVar7) / 0x26 + (param_2 - lVar7 >> 0x3f);
  lVar8 = (param_1[1] - lVar7) / 0x98;
  if (lVar8 == 0x1af286bca1af286) {
                    /* WARNING: Subroutine does not return */
    FUN_1801136f0();
  }
  uVar1 = lVar8 + 1;
  uVar2 = (param_1[2] - lVar7) / 0x98;
  if (0x1af286bca1af286 - (uVar2 >> 1) < uVar2) {
    uVar6 = 0x1af286bca1af286;
  }
  else {
    uVar2 = (uVar2 >> 1) + uVar2;
    uVar6 = uVar1;
    if (uVar1 <= uVar2) {
      uVar6 = uVar2;
    }
    if (0x1af286bca1af286 < uVar6) {
                    /* WARNING: Subroutine does not return */
      FUN_18015bc80();
    }
  }
  lVar3 = FUN_18015bca0(uVar6 * 0x98);
  lVar5 = ((lVar4 >> 2) - (lVar4 >> 0x3f)) * 0x98 + lVar3;
  lVar7 = lVar5 + 0x98;
  FUN_180212a10(lVar5,param_3,lVar7);
  lVar8 = param_1[1];
  lVar4 = *param_1;
  lVar9 = lVar3;
  if (param_2 == lVar8) {
    if (lVar4 != lVar8) {
      do {
        FUN_180212a10(lVar3);
        lVar3 = lVar3 + 0x98;
        lVar4 = lVar4 + 0x98;
      } while (lVar4 != lVar8);
    }
  }
  else {
    for (; lVar4 != param_2; lVar4 = lVar4 + 0x98) {
      FUN_180212a10(lVar3);
      lVar3 = lVar3 + 0x98;
    }
    lVar8 = param_1[1];
    if (param_2 != lVar8) {
      do {
        FUN_180212a10(lVar7,param_2);
        lVar7 = lVar7 + 0x98;
        param_2 = param_2 + 0x98;
      } while (param_2 != lVar8);
    }
  }
  FUN_180212130(param_1,lVar9,uVar1,uVar6);
  return lVar5;
}



