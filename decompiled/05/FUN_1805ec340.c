// FUN_1805ec340 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805ec340 */

ulonglong FUN_1805ec340(longlong param_1,byte *param_2,ulonglong param_3)

{
  longlong lVar1;
  longlong lVar2;
  byte bVar3;
  byte bVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  uint uVar8;
  ulonglong uVar9;
  uint uVar10;
  uint uVar11;
  byte bVar12;
  
  if (param_3 < 3) {
    return 0xffffffffffffffec;
  }
  bVar3 = *param_2;
  uVar10 = (uint)bVar3;
  bVar12 = bVar3 >> 6;
  uVar8 = (uint)bVar3;
  if (bVar12 != 0) {
    if (bVar12 == 1) {
      if ((bVar3 & 0x30) != 0x10) {
        return 0xffffffffffffffec;
      }
      if (*(int *)(param_1 + 0x6870) == 0) {
        return 0xffffffffffffffe2;
      }
      uVar10 = (param_2[1] & 3) * 0x100 + (uint)param_2[2];
      uVar9 = (ulonglong)((uint)(param_2[1] >> 2) + (uVar8 & 0xf) * 0x40);
      uVar7 = (ulonglong)uVar10 + 3;
      if (param_3 < uVar7) {
        return 0xffffffffffffffec;
      }
      uVar5 = FUN_1805eacd0(param_1 + 0x6888,uVar9,param_2 + 3,uVar10,param_1 + 0x280c);
      if (uVar5 < 0xffffffffffffff89) {
        *(longlong *)(param_1 + 0x6878) = param_1 + 0x6888;
        *(ulonglong *)(param_1 + 0x6880) = uVar9;
        *(undefined8 *)(uVar9 + 0x6888 + param_1) = 0;
        return uVar7;
      }
      return 0xffffffffffffffec;
    }
    if (bVar12 != 2) {
      if (bVar12 != 3) {
        return 0xffffffffffffffec;
      }
      uVar10 = bVar3 >> 4 & 3;
      if (((bVar3 >> 4 & 3) != 0) && (uVar10 != 1)) {
        if (uVar10 == 2) {
          uVar7 = (ulonglong)((uint)param_2[1] + (uVar8 & 0xf) * 0x100);
          goto LAB_1805ec3fc;
        }
        if (uVar10 == 3) {
          uVar7 = (ulonglong)(((uint)param_2[1] + (uVar8 & 0xf) * 0x100) * 0x100 + (uint)param_2[2])
          ;
          if (param_3 < 4) {
            return 0xffffffffffffffec;
          }
          goto LAB_1805ec3fc;
        }
      }
      uVar10 = 1;
      uVar7 = (ulonglong)(bVar3 & 0x1f);
LAB_1805ec3fc:
      if (uVar7 < 0x20001) {
        FUN_18063ab10(param_1 + 0x6888,param_2[uVar10],uVar7 + 8);
        *(longlong *)(param_1 + 0x6878) = param_1 + 0x6888;
        *(ulonglong *)(param_1 + 0x6880) = uVar7;
        return (ulonglong)(uVar10 + 1);
      }
      return 0xffffffffffffffec;
    }
    uVar11 = bVar3 >> 4 & 3;
    if (((bVar3 >> 4 & 3) != 0) && (uVar11 != 1)) {
      if (uVar11 == 2) {
        uVar7 = (ulonglong)((uint)param_2[1] + (uVar10 & 0xf) * 0x100);
        goto LAB_1805ec483;
      }
      if (uVar11 == 3) {
        uVar7 = (ulonglong)(((uint)param_2[1] + (uVar8 & 0xf) * 0x100) * 0x100 + (uint)param_2[2]);
        goto LAB_1805ec483;
      }
    }
    uVar11 = 1;
    uVar7 = (ulonglong)(bVar3 & 0x1f);
LAB_1805ec483:
    uVar5 = (ulonglong)uVar11;
    uVar9 = uVar5 + uVar7;
    if (uVar9 + 8 <= param_3) {
      *(ulonglong *)(param_1 + 0x6880) = uVar7;
      *(byte **)(param_1 + 0x6878) = param_2 + uVar5;
      return uVar9;
    }
    if (param_3 < uVar9) {
      return 0xffffffffffffffec;
    }
    FUN_18063aed0(param_1 + 0x6888,param_2 + uVar5,uVar7);
    *(longlong *)(param_1 + 0x6878) = param_1 + 0x6888;
    *(ulonglong *)(param_1 + 0x6880) = uVar7;
    *(undefined8 *)(param_1 + 0x6888 + uVar7) = 0;
    return uVar9;
  }
  bVar12 = 0;
  if (param_3 < 5) {
    return 0xffffffffffffffec;
  }
  bVar4 = bVar3 >> 4 & 3;
  if (((bVar3 >> 4 & 3) != 0) && (bVar4 != 1)) {
    if (bVar4 == 2) {
      uVar10 = (uint)(param_2[2] >> 6) + ((uVar10 & 0xf) * 0x100 + (uint)param_2[1]) * 4;
      uVar7 = (ulonglong)((param_2[2] & 0x3f) * 0x100 + (uint)param_2[3]);
      lVar6 = 4;
      goto LAB_1805ec645;
    }
    if (bVar4 == 3) {
      uVar10 = ((uVar10 & 0xf) * 0x100 + (uint)param_2[1]) * 0x40 + (uint)(param_2[2] >> 2);
      uVar7 = (ulonglong)(((param_2[2] & 3) * 0x100 + (uint)param_2[3]) * 0x100 + (uint)param_2[4]);
      lVar6 = 5;
      goto LAB_1805ec645;
    }
  }
  bVar12 = bVar3 & 0x10;
  uVar10 = (uVar8 & 0xf) * 0x40 + (uint)(param_2[1] >> 2);
  uVar7 = (ulonglong)((param_2[1] & 3) * 0x100 + (uint)param_2[2]);
  lVar6 = 3;
LAB_1805ec645:
  uVar9 = (ulonglong)uVar10;
  if ((uVar9 < 0x20001) && (uVar7 + lVar6 <= param_3)) {
    param_2 = param_2 + lVar6;
    lVar1 = param_1 + 0x6888;
    if (bVar12 == 0) {
      if (uVar9 == 0) {
        uVar5 = 0xffffffffffffffba;
      }
      else if (uVar7 < uVar9) {
        if (uVar7 == 1) {
          FUN_18063ab10(lVar1,*param_2,uVar9);
          uVar5 = uVar9;
        }
        else {
          lVar2 = ((uVar7 << 4) / uVar9) * 0x18;
          uVar8 = (uVar10 >> 8) * *(int *)(&DAT_18068872c + lVar2) +
                  *(int *)(&DAT_180688728 + lVar2);
          uVar5 = (**(code **)((longlong)&PTR_FUN_1806888a0 +
                              (ulonglong)
                              (-(uint)((uVar8 >> 4) + uVar8 <
                                      (uVar10 >> 8) * *(int *)(&DAT_180688724 + lVar2) +
                                      *(int *)(&DAT_180688720 + lVar2)) & 8)))
                            (lVar1,uVar9,param_2,uVar7);
        }
      }
      else {
        uVar5 = 0xffffffffffffffec;
      }
    }
    else {
      uVar5 = FUN_1805eabe0(lVar1,uVar9,param_2,uVar7);
    }
    if (uVar5 < 0xffffffffffffff89) {
      *(longlong *)(param_1 + 0x6878) = lVar1;
      *(ulonglong *)(param_1 + 0x6880) = uVar9;
      *(undefined8 *)(uVar9 + 0x6888 + param_1) = 0;
      return uVar7 + lVar6;
    }
  }
  return 0xffffffffffffffec;
}



