// FUN_1805e46e0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805e46e0 */

ulonglong FUN_1805e46e0(longlong param_1,uint *param_2,ulonglong param_3,longlong param_4,
                       ulonglong param_5,int param_6)

{
  longlong *plVar1;
  uint uVar2;
  byte bVar3;
  uint uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  byte bVar8;
  byte bVar9;
  longlong lVar10;
  byte *pbVar11;
  uint uVar12;
  longlong lVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  bool bVar16;
  undefined8 in_stack_ffffffffffffffb0;
  
  if (param_3 < 2) {
    return 0xffffffffffffffec;
  }
  bVar9 = (byte)*param_2;
  uVar12 = 0x20000;
  bVar3 = bVar9 & 3;
  if (*(int *)(param_1 + 0x75e0) == 0) {
    uVar4 = 0x20000;
  }
  else {
    uVar4 = *(uint *)(param_1 + 0x74f8);
  }
  uVar5 = (ulonglong)uVar4;
  if ((bVar9 & 3) == 0) {
    uVar7 = param_5;
    if (uVar5 < param_5) {
      uVar7 = uVar5;
    }
    bVar3 = bVar9 >> 2 & 3;
    if ((bVar9 >> 2 & 3) != 0) {
      if (bVar3 == 1) {
        lVar13 = 2;
        uVar6 = (ulonglong)(ushort)((ushort)*param_2 >> 4);
        goto LAB_1805e4c08;
      }
      if ((bVar3 != 2) && (bVar3 == 3)) {
        lVar13 = 3;
        if (param_3 < 3) {
          return 0xffffffffffffffec;
        }
        uVar6 = (ulonglong)(uint3)((uint3)*param_2 >> 4);
        goto LAB_1805e4c08;
      }
    }
    lVar13 = 1;
    uVar6 = (ulonglong)(bVar9 >> 3);
LAB_1805e4c08:
    if ((uVar6 != 0) && (param_4 == 0)) {
      return 0xffffffffffffffba;
    }
    if (uVar5 < uVar6) {
      return 0xffffffffffffffec;
    }
    if (uVar7 < uVar6) {
      return 0xffffffffffffffba;
    }
    FUN_1805e4380(param_1,param_4,param_5,uVar6,param_6,uVar7,1);
    uVar5 = uVar6 + lVar13;
    if (uVar5 + 0x20 <= param_3) {
      *(ulonglong *)(param_1 + 0x75c8) = uVar6;
      *(byte **)(param_1 + 0x75a8) = (byte *)(lVar13 + (longlong)param_2);
      *(undefined4 *)(param_1 + 0x76b0) = 0;
      *(byte **)(param_1 + 0x76a8) = (byte *)(uVar5 + (longlong)param_2);
      return uVar5;
    }
    if (param_3 < uVar5) {
      return 0xffffffffffffffec;
    }
    pbVar11 = (byte *)(lVar13 + (longlong)param_2);
    lVar13 = *(longlong *)(param_1 + 0x76a0);
    if (*(int *)(param_1 + 0x76b0) == 2) {
      FUN_18063aed0(lVar13,pbVar11,uVar6 - 0x10000);
      pbVar11 = (byte *)((longlong)param_2 + (uVar5 - 0x10000));
      lVar13 = param_1 + 0x76b4;
      uVar7 = 0x10000;
    }
    else {
      uVar7 = uVar6;
    }
    FUN_18063aed0(lVar13,pbVar11,uVar7);
    *(undefined8 *)(param_1 + 0x75a8) = *(undefined8 *)(param_1 + 0x76a0);
    *(ulonglong *)(param_1 + 0x75c8) = uVar6;
    return uVar5;
  }
  if (bVar3 == 1) {
    uVar7 = param_5;
    if (uVar5 < param_5) {
      uVar7 = uVar5;
    }
    bVar3 = bVar9 >> 2 & 3;
    if ((bVar9 >> 2 & 3) != 0) {
      if (bVar3 == 1) {
        lVar13 = 2;
        if (param_3 < 3) {
          return 0xffffffffffffffec;
        }
        uVar6 = (ulonglong)(ushort)((ushort)*param_2 >> 4);
        goto LAB_1805e4afa;
      }
      if ((bVar3 != 2) && (bVar3 == 3)) {
        lVar13 = 3;
        if (param_3 < 4) {
          return 0xffffffffffffffec;
        }
        uVar6 = (ulonglong)(uint3)((uint3)*param_2 >> 4);
        goto LAB_1805e4afa;
      }
    }
    lVar13 = 1;
    uVar6 = (ulonglong)(bVar9 >> 3);
LAB_1805e4afa:
    if ((uVar6 != 0) && (param_4 == 0)) {
      return 0xffffffffffffffba;
    }
    if (uVar5 < uVar6) {
      return 0xffffffffffffffec;
    }
    if (uVar7 < uVar6) {
      return 0xffffffffffffffba;
    }
    FUN_1805e4380(param_1,param_4,param_5,uVar6,param_6,uVar7,1);
    lVar10 = *(longlong *)(param_1 + 0x76a0);
    bVar9 = *(byte *)(lVar13 + (longlong)param_2);
    if (*(int *)(param_1 + 0x76b0) == 2) {
      FUN_18063ab10(lVar10,bVar9,uVar6 - 0x10000);
      bVar9 = *(byte *)(lVar13 + (longlong)param_2);
      lVar10 = param_1 + 0x76b4;
      uVar5 = 0x10000;
    }
    else {
      uVar5 = uVar6;
    }
    FUN_18063ab10(lVar10,bVar9,uVar5);
    *(undefined8 *)(param_1 + 0x75a8) = *(undefined8 *)(param_1 + 0x76a0);
    *(ulonglong *)(param_1 + 0x75c8) = uVar6;
    return lVar13 + 1;
  }
  if (bVar3 != 2) {
    if (bVar3 != 3) {
      return 0xffffffffffffffec;
    }
    if (*(int *)(param_1 + 30000) == 0) {
      return 0xffffffffffffffe2;
    }
  }
  if (param_3 < 5) {
    return 0xffffffffffffffec;
  }
  uVar6 = 0;
  uVar4 = *param_2;
  bVar9 = bVar9 >> 2;
  bVar8 = bVar9 & 3;
  bVar16 = false;
  uVar7 = param_5;
  if (uVar5 < param_5) {
    uVar7 = uVar5;
  }
  uVar2 = -(uint)(*(int *)(param_1 + 0x7614) != 0);
  if (((bVar9 & 3) == 0) || (bVar8 == 1)) {
LAB_1805e480c:
    bVar16 = (bVar9 & 3) == 0;
    lVar13 = 3;
    uVar14 = (ulonglong)(uVar4 >> 4 & 0x3ff);
    uVar15 = (ulonglong)(uVar4 >> 0xe & 0x3ff);
  }
  else if (bVar8 == 2) {
    uVar14 = (ulonglong)(uVar4 >> 4 & 0x3fff);
    lVar13 = 4;
    uVar15 = (ulonglong)(uVar4 >> 0x12);
  }
  else {
    if (bVar8 != 3) goto LAB_1805e480c;
    uVar14 = (ulonglong)(uVar4 >> 4 & 0x3ffff);
    lVar13 = 5;
    uVar15 = (ulonglong)(byte)param_2[1] * 0x400 + (ulonglong)(uVar4 >> 0x16);
  }
  if ((uVar14 != 0) && (param_4 == 0)) {
    return 0xffffffffffffffba;
  }
  if (uVar5 < uVar14) {
    return 0xffffffffffffffec;
  }
  if ((!bVar16) && (uVar14 < 6)) {
    return 0xffffffffffffffe8;
  }
  if (param_3 < uVar15 + lVar13) {
    return 0xffffffffffffffec;
  }
  if (uVar7 < uVar14) {
    return 0xffffffffffffffba;
  }
  if (*(int *)(param_1 + 0x75e0) != 0) {
    uVar12 = *(uint *)(param_1 + 0x74f8);
  }
  if (param_6 == 0) {
    lVar10 = uVar12 + uVar14;
    if (lVar10 + 0x40U < param_5) {
      lVar10 = lVar10 + 0x20 + param_4;
      *(undefined4 *)(param_1 + 0x76b0) = 1;
      param_4 = param_4 + 0x20 + (ulonglong)uVar12;
      goto LAB_1805e48fc;
    }
  }
  if (uVar14 < 0x10001) {
    *(undefined4 *)(param_1 + 0x76b0) = 0;
    lVar10 = param_1 + 0x76b4 + uVar14;
    param_4 = param_1 + 0x76b4;
  }
  else {
    lVar10 = uVar7 + param_4;
    *(undefined4 *)(param_1 + 0x76b0) = 2;
    param_4 = (uVar7 - uVar14) + param_4;
  }
LAB_1805e48fc:
  *(longlong *)(param_1 + 0x76a0) = param_4;
  plVar1 = (longlong *)(param_1 + 0x76a0);
  *(longlong *)(param_1 + 0x76a8) = lVar10;
  if ((*(int *)(param_1 + 0x75fc) != 0) && (0x300 < uVar14)) {
    do {
      uVar6 = uVar6 + 0x40;
    } while (uVar6 < 0x4004);
  }
  if (bVar3 == 3) {
    if (bVar16) {
      uVar5 = FUN_1805de8d0();
    }
    else {
      uVar5 = FUN_1805e2910(*plVar1,uVar14,(byte *)(lVar13 + (longlong)param_2),uVar15,
                            *(undefined8 *)(param_1 + 0x18),
                            CONCAT44((int)((ulonglong)in_stack_ffffffffffffffb0 >> 0x20),uVar2) &
                            0xffffffff00000010);
    }
  }
  else if (bVar16) {
    uVar5 = FUN_1805ddec0();
  }
  else {
    uVar5 = FUN_1805e2800(param_1 + 0x2838,*plVar1,uVar14,(byte *)(lVar13 + (longlong)param_2),
                          uVar15,param_1 + 0x6abc,0xa00,uVar2 & 0x10);
  }
  if (*(int *)(param_1 + 0x76b0) == 2) {
    FUN_18063aed0(param_1 + 0x76b4,*(longlong *)(param_1 + 0x76a8) + -0x10000,0x10000);
    FUN_18063aed0(*plVar1 + 0xffe0,*plVar1,uVar14 - 0x10000);
    *plVar1 = *plVar1 + 0xffe0;
    *(longlong *)(param_1 + 0x76a8) = *(longlong *)(param_1 + 0x76a8) + -0x20;
  }
  if (0xffffffffffffff88 < uVar5) {
    return 0xffffffffffffffec;
  }
  *(longlong *)(param_1 + 0x75a8) = *plVar1;
  *(ulonglong *)(param_1 + 0x75c8) = uVar14;
  *(undefined4 *)(param_1 + 30000) = 1;
  if (bVar3 == 2) {
    *(longlong *)(param_1 + 0x18) = param_1 + 0x2838;
  }
  return uVar15 + lVar13;
}



