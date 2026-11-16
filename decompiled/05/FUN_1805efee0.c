// FUN_1805efee0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805efee0 */

ulonglong FUN_1805efee0(longlong param_1,byte *param_2,ulonglong param_3)

{
  longlong lVar1;
  longlong lVar2;
  byte bVar3;
  byte bVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  byte bVar12;
  int iVar13;
  
  if (param_3 < 3) {
    return 0xffffffffffffffec;
  }
  bVar3 = *param_2;
  uVar9 = (uint)bVar3;
  bVar12 = bVar3 >> 6;
  uVar11 = (uint)bVar3;
  if (bVar12 != 0) {
    if (bVar12 == 1) {
      if ((bVar3 & 0x30) != 0x10) {
        return 0xffffffffffffffec;
      }
      if (*(int *)(param_1 + 0x5458) == 0) {
        return 0xffffffffffffffe2;
      }
      uVar9 = (param_2[1] & 3) * 0x100 + (uint)param_2[2];
      uVar8 = (ulonglong)((uint)(param_2[1] >> 2) + (uVar11 & 0xf) * 0x40);
      uVar7 = (ulonglong)uVar9 + 3;
      if (param_3 < uVar7) {
        return 0xffffffffffffffec;
      }
      uVar5 = FUN_1805eea80(param_1 + 0x5470,uVar8,param_2 + 3,uVar9,param_1 + 0x140c);
      if (uVar5 < 0xffffffffffffff89) {
        *(longlong *)(param_1 + 0x5460) = param_1 + 0x5470;
        *(ulonglong *)(param_1 + 0x5468) = uVar8;
        *(undefined8 *)(uVar8 + 0x5470 + param_1) = 0;
        return uVar7;
      }
      return 0xffffffffffffffec;
    }
    if (bVar12 != 2) {
      if (bVar12 != 3) {
        return 0xffffffffffffffec;
      }
      uVar9 = bVar3 >> 4 & 3;
      if (((bVar3 >> 4 & 3) != 0) && (uVar9 != 1)) {
        if (uVar9 == 2) {
          uVar7 = (ulonglong)((uint)param_2[1] + (uVar11 & 0xf) * 0x100);
          goto LAB_1805eff9c;
        }
        if (uVar9 == 3) {
          uVar7 = (ulonglong)
                  (((uint)param_2[1] + (uVar11 & 0xf) * 0x100) * 0x100 + (uint)param_2[2]);
          if (param_3 < 4) {
            return 0xffffffffffffffec;
          }
          goto LAB_1805eff9c;
        }
      }
      uVar9 = 1;
      uVar7 = (ulonglong)(bVar3 & 0x1f);
LAB_1805eff9c:
      if (uVar7 < 0x20001) {
        FUN_18063ab10(param_1 + 0x5470,param_2[uVar9],uVar7 + 8);
        *(longlong *)(param_1 + 0x5460) = param_1 + 0x5470;
        *(ulonglong *)(param_1 + 0x5468) = uVar7;
        return (ulonglong)(uVar9 + 1);
      }
      return 0xffffffffffffffec;
    }
    uVar10 = bVar3 >> 4 & 3;
    if (((bVar3 >> 4 & 3) != 0) && (uVar10 != 1)) {
      if (uVar10 == 2) {
        uVar7 = (ulonglong)((uint)param_2[1] + (uVar9 & 0xf) * 0x100);
        goto LAB_1805f0023;
      }
      if (uVar10 == 3) {
        uVar7 = (ulonglong)(((uint)param_2[1] + (uVar11 & 0xf) * 0x100) * 0x100 + (uint)param_2[2]);
        goto LAB_1805f0023;
      }
    }
    uVar10 = 1;
    uVar7 = (ulonglong)(bVar3 & 0x1f);
LAB_1805f0023:
    uVar5 = (ulonglong)uVar10;
    uVar8 = uVar5 + uVar7;
    if (uVar8 + 8 <= param_3) {
      *(ulonglong *)(param_1 + 0x5468) = uVar7;
      *(byte **)(param_1 + 0x5460) = param_2 + uVar5;
      return uVar8;
    }
    if (param_3 < uVar8) {
      return 0xffffffffffffffec;
    }
    FUN_18063aed0(param_1 + 0x5470,param_2 + uVar5,uVar7);
    *(longlong *)(param_1 + 0x5460) = param_1 + 0x5470;
    *(ulonglong *)(param_1 + 0x5468) = uVar7;
    *(undefined8 *)(param_1 + 0x5470 + uVar7) = 0;
    return uVar8;
  }
  bVar12 = 0;
  if (param_3 < 5) {
    return 0xffffffffffffffec;
  }
  bVar4 = bVar3 >> 4 & 3;
  if (((bVar3 >> 4 & 3) != 0) && (bVar4 != 1)) {
    if (bVar4 == 2) {
      uVar8 = (ulonglong)((uint)(param_2[2] >> 6) + ((uVar9 & 0xf) * 0x100 + (uint)param_2[1]) * 4);
      uVar7 = (ulonglong)((param_2[2] & 0x3f) * 0x100 + (uint)param_2[3]);
      lVar6 = 4;
      goto LAB_1805f01e5;
    }
    if (bVar4 == 3) {
      uVar8 = (ulonglong)
              (((uVar9 & 0xf) * 0x100 + (uint)param_2[1]) * 0x40 + (uint)(param_2[2] >> 2));
      uVar7 = (ulonglong)(((param_2[2] & 3) * 0x100 + (uint)param_2[3]) * 0x100 + (uint)param_2[4]);
      lVar6 = 5;
      goto LAB_1805f01e5;
    }
  }
  bVar12 = bVar3 & 0x10;
  uVar8 = (ulonglong)((uVar11 & 0xf) * 0x40 + (uint)(param_2[1] >> 2));
  uVar7 = (ulonglong)((param_2[1] & 3) * 0x100 + (uint)param_2[2]);
  lVar6 = 3;
LAB_1805f01e5:
  if ((uVar8 < 0x20001) && (uVar7 + lVar6 <= param_3)) {
    param_2 = param_2 + lVar6;
    lVar1 = param_1 + 0x5470;
    if (bVar12 == 0) {
      if ((int)uVar8 == 0) {
        uVar5 = 0xffffffffffffffba;
      }
      else if (uVar8 < uVar7) {
        uVar5 = 0xffffffffffffffec;
      }
      else {
        uVar5 = uVar8;
        if (uVar7 == uVar8) {
          FUN_18063aed0(lVar1,param_2,uVar8);
        }
        else if (uVar7 == 1) {
          FUN_18063ab10(lVar1,*param_2,uVar8);
        }
        else {
          iVar13 = (int)(uVar8 >> 8);
          lVar2 = ((uVar7 << 4) / uVar8) * 0x18;
          uVar9 = iVar13 * *(int *)(&DAT_18068899c + lVar2) + *(int *)(&DAT_180688998 + lVar2);
          uVar5 = (**(code **)((longlong)&PTR_FUN_180688b10 +
                              (ulonglong)
                              (-(uint)((uVar9 >> 4) + uVar9 <
                                      (uint)(iVar13 * *(int *)(&DAT_180688994 + lVar2) +
                                            *(int *)(&DAT_180688990 + lVar2))) & 8)))
                            (lVar1,uVar8,param_2,uVar7);
        }
      }
    }
    else {
      uVar5 = FUN_1805ee990(lVar1,uVar8,param_2,uVar7);
    }
    if (uVar5 < 0xffffffffffffff89) {
      *(longlong *)(param_1 + 0x5460) = lVar1;
      *(ulonglong *)(param_1 + 0x5468) = uVar8;
      *(undefined8 *)(uVar8 + 0x5470 + param_1) = 0;
      return uVar7 + lVar6;
    }
  }
  return 0xffffffffffffffec;
}



