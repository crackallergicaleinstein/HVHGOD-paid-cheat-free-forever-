// FUN_1805f3380 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805f3380 */

ulonglong FUN_1805f3380(longlong param_1,byte *param_2,ulonglong param_3)

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
  undefined8 in_stack_ffffffffffffffb8;
  undefined4 uVar13;
  undefined1 local_38 [8];
  int local_30;
  longlong local_28;
  longlong local_20;
  
  uVar13 = (undefined4)((ulonglong)in_stack_ffffffffffffffb8 >> 0x20);
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
      if (*(int *)(param_1 + 0x5468) == 0) {
        return 0xffffffffffffffe2;
      }
      uVar10 = (param_2[1] & 3) * 0x100 + (uint)param_2[2];
      uVar9 = (ulonglong)((uint)(param_2[1] >> 2) + (uVar8 & 0xf) * 0x40);
      uVar7 = (ulonglong)uVar10 + 3;
      if (param_3 < uVar7) {
        return 0xffffffffffffffec;
      }
      if ((char)((uint)*(undefined4 *)(param_1 + 0x140c) >> 8) != '\x01') {
        return 0xffffffffffffffec;
      }
      uVar5 = FUN_1805f1480(local_38,param_2 + 3,uVar10);
      if (0xffffffffffffff88 < uVar5) {
        return 0xffffffffffffffec;
      }
      lVar6 = param_1 + 0x5500;
      FUN_1805ea8e0(lVar6,local_38,lVar6 + uVar9,param_1 + 0x1410,
                    CONCAT44(uVar13,(uint)*(byte *)(param_1 + 0x140e)));
      if (local_28 != local_20) {
        return 0xffffffffffffffec;
      }
      if (local_30 == 0x40) {
        *(longlong *)(param_1 + 0x54d8) = lVar6;
        *(ulonglong *)(param_1 + 0x54f8) = uVar9;
        *(undefined8 *)(uVar9 + 0x5500 + param_1) = 0;
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
          goto LAB_1805f3434;
        }
        if (uVar10 == 3) {
          uVar7 = (ulonglong)(((uint)param_2[1] + (uVar8 & 0xf) * 0x100) * 0x100 + (uint)param_2[2])
          ;
          if (param_3 < 4) {
            return 0xffffffffffffffec;
          }
          goto LAB_1805f3434;
        }
      }
      uVar10 = 1;
      uVar7 = (ulonglong)(bVar3 & 0x1f);
LAB_1805f3434:
      if (uVar7 < 0x20001) {
        FUN_18063ab10(param_1 + 0x5500,param_2[uVar10],uVar7 + 8);
        *(longlong *)(param_1 + 0x54d8) = param_1 + 0x5500;
        *(ulonglong *)(param_1 + 0x54f8) = uVar7;
        return (ulonglong)(uVar10 + 1);
      }
      return 0xffffffffffffffec;
    }
    uVar11 = bVar3 >> 4 & 3;
    if (((bVar3 >> 4 & 3) != 0) && (uVar11 != 1)) {
      if (uVar11 == 2) {
        uVar7 = (ulonglong)((uint)param_2[1] + (uVar10 & 0xf) * 0x100);
        goto LAB_1805f34bb;
      }
      if (uVar11 == 3) {
        uVar7 = (ulonglong)(((uint)param_2[1] + (uVar8 & 0xf) * 0x100) * 0x100 + (uint)param_2[2]);
        goto LAB_1805f34bb;
      }
    }
    uVar11 = 1;
    uVar7 = (ulonglong)(bVar3 & 0x1f);
LAB_1805f34bb:
    uVar5 = (ulonglong)uVar11;
    uVar9 = uVar5 + uVar7;
    if (uVar9 + 8 <= param_3) {
      *(ulonglong *)(param_1 + 0x54f8) = uVar7;
      *(byte **)(param_1 + 0x54d8) = param_2 + uVar5;
      return uVar9;
    }
    if (param_3 < uVar9) {
      return 0xffffffffffffffec;
    }
    FUN_18063aed0(param_1 + 0x5500,param_2 + uVar5,uVar7);
    *(longlong *)(param_1 + 0x54d8) = param_1 + 0x5500;
    *(ulonglong *)(param_1 + 0x54f8) = uVar7;
    *(undefined8 *)(param_1 + 0x5500 + uVar7) = 0;
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
      goto LAB_1805f36c3;
    }
    if (bVar4 == 3) {
      uVar10 = ((uVar10 & 0xf) * 0x100 + (uint)param_2[1]) * 0x40 + (uint)(param_2[2] >> 2);
      uVar7 = (ulonglong)(((param_2[2] & 3) * 0x100 + (uint)param_2[3]) * 0x100 + (uint)param_2[4]);
      lVar6 = 5;
      goto LAB_1805f36c3;
    }
  }
  bVar12 = bVar3 & 0x10;
  uVar10 = (uVar8 & 0xf) * 0x40 + (uint)(param_2[1] >> 2);
  uVar7 = (ulonglong)((param_2[1] & 3) * 0x100 + (uint)param_2[2]);
  lVar6 = 3;
LAB_1805f36c3:
  uVar9 = (ulonglong)uVar10;
  if ((uVar9 < 0x20001) && (uVar7 + lVar6 <= param_3)) {
    lVar1 = param_1 + 0x5500;
    if (bVar12 == 0) {
      if (uVar9 == 0) {
        uVar5 = 0xffffffffffffffba;
      }
      else if ((uVar7 < uVar9) && (1 < uVar7)) {
        lVar2 = ((uVar7 << 4) / uVar9) * 0x18;
        uVar8 = (uVar10 >> 8) * *(int *)(&DAT_18068900c + lVar2) + *(int *)(&DAT_180689008 + lVar2);
        if ((uVar8 >> 3) + uVar8 <
            (uVar10 >> 8) * *(int *)(&DAT_180689004 + lVar2) + *(int *)(&DAT_180689000 + lVar2)) {
          uVar5 = FUN_1805f2470();
        }
        else {
          uVar5 = FUN_1805f1e60(param_1 + 0x140c,lVar1,uVar9,param_2 + lVar6,uVar7);
        }
      }
      else {
        uVar5 = 0xffffffffffffffec;
      }
    }
    else {
      uVar5 = FUN_1805f1d90(param_1 + 0x140c,lVar1,uVar10,param_2 + lVar6,uVar7);
    }
    if (uVar5 < 0xffffffffffffff89) {
      *(longlong *)(param_1 + 0x54d8) = lVar1;
      *(ulonglong *)(param_1 + 0x54f8) = uVar9;
      *(undefined4 *)(param_1 + 0x5468) = 1;
      *(undefined8 *)(uVar9 + 0x5500 + param_1) = 0;
      return uVar7 + lVar6;
    }
  }
  return 0xffffffffffffffec;
}



