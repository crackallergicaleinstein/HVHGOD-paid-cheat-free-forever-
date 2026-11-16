// FUN_1804207a0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804207a0 */

int FUN_1804207a0(byte *param_1,byte *param_2,int param_3,int param_4)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  ushort uVar6;
  byte *pbVar7;
  byte *pbVar8;
  byte *pbVar9;
  byte *pbVar10;
  byte *pbVar11;
  longlong lVar12;
  byte *pbVar13;
  byte *pbVar14;
  ulonglong uVar15;
  uint uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  byte local_68;
  byte bStack_67;
  byte bStack_66;
  byte bStack_65;
  byte bStack_64;
  byte bStack_63;
  byte bStack_62;
  byte bStack_61;
  
  if ((param_1 == (byte *)0x0) || (param_4 < 0)) {
    return -1;
  }
  pbVar9 = param_1 + param_3;
  pbVar1 = param_2 + param_4;
  if (param_4 == 0) {
    if ((param_3 == 1) && (*param_1 == 0)) {
      return 0;
    }
  }
  else if (param_3 != 0) {
    pbVar8 = param_1;
    pbVar14 = param_2;
    if ((ulonglong)(longlong)param_4 < 0x40) goto LAB_180420b60;
LAB_180420830:
    bVar2 = *pbVar8;
    uVar16 = (uint)bVar2;
    pbVar7 = pbVar8 + 1;
    uVar17 = (ulonglong)(bVar2 >> 4);
    if (uVar17 == 0xf) {
      pbVar13 = pbVar9 + -0xf;
      if (pbVar13 <= pbVar7) goto LAB_180420e63;
      uVar17 = (ulonglong)*pbVar7;
      pbVar7 = pbVar8 + 2;
      if (pbVar13 < pbVar7) goto LAB_180420e63;
      if (uVar17 == 0xff) {
        do {
          bVar3 = *pbVar7;
          pbVar7 = pbVar7 + 1;
          uVar17 = uVar17 + bVar3;
          if (pbVar13 < pbVar7) goto LAB_180420e63;
        } while (bVar3 == 0xff);
      }
      if (uVar17 == 0xffffffffffffffff) goto LAB_180420e63;
      uVar17 = uVar17 + 0xf;
      pbVar13 = pbVar14 + uVar17;
      if ((pbVar13 < pbVar14) || (pbVar8 = pbVar7 + uVar17, pbVar8 < pbVar7)) goto LAB_180420e63;
      if (pbVar1 + -0x20 < pbVar13) goto LAB_180420c61;
      if (pbVar9 + -0x20 < pbVar8) goto LAB_180420c61;
      lVar12 = (longlong)pbVar14 - (longlong)pbVar7;
      do {
        uVar5 = *(undefined8 *)(pbVar7 + 8);
        *(undefined8 *)(pbVar7 + lVar12) = *(undefined8 *)pbVar7;
        *(undefined8 *)(pbVar7 + lVar12 + 8) = uVar5;
        uVar5 = *(undefined8 *)(pbVar7 + 0x18);
        *(undefined8 *)(pbVar7 + lVar12 + 0x10) = *(undefined8 *)(pbVar7 + 0x10);
        *(undefined8 *)(pbVar7 + lVar12 + 0x10 + 8) = uVar5;
        pbVar7 = pbVar7 + 0x20;
      } while (pbVar7 + lVar12 < pbVar13);
    }
    else {
      if (pbVar9 + -0x11 < pbVar7) goto LAB_180420c61;
      uVar5 = *(undefined8 *)(pbVar8 + 9);
      pbVar8 = pbVar7 + uVar17;
      *(undefined8 *)pbVar14 = *(undefined8 *)pbVar7;
      *(undefined8 *)(pbVar14 + 8) = uVar5;
      pbVar13 = pbVar14 + uVar17;
    }
    uVar6 = FUN_180420790(pbVar8);
    uVar15 = (ulonglong)uVar6;
    pbVar10 = pbVar13 + -uVar15;
    pbVar7 = pbVar8 + 2;
    if ((ulonglong)(bVar2 & 0xf) == 0xf) {
      uVar18 = (ulonglong)*pbVar7;
      pbVar7 = pbVar8 + 3;
      if (pbVar9 + -4 < pbVar7) goto LAB_180420e63;
      if (uVar18 == 0xff) {
        uVar18 = 0xff;
        do {
          bVar2 = *pbVar7;
          pbVar7 = pbVar7 + 1;
          uVar18 = uVar18 + bVar2;
          if (pbVar9 + -4 < pbVar7) goto LAB_180420e63;
        } while (bVar2 == 0xff);
      }
      if (uVar18 == 0xffffffffffffffff) goto LAB_180420e63;
      uVar18 = uVar18 + 0x13;
      if (pbVar13 + uVar18 < pbVar13) goto LAB_180420e63;
      if (pbVar1 + -0x40 <= pbVar13 + uVar18) goto LAB_180420d14;
      if (pbVar10 < param_2) goto LAB_180420e63;
    }
    else {
      uVar18 = (ulonglong)(bVar2 & 0xf) + 4;
      pbVar14 = pbVar13 + uVar18;
      if (pbVar1 + -0x40 <= pbVar14) goto LAB_180420d14;
      if (pbVar10 < param_2) goto LAB_180420e63;
      if (7 < uVar15) {
        *(undefined8 *)pbVar13 = *(undefined8 *)pbVar10;
        *(undefined8 *)(pbVar13 + 8) = *(undefined8 *)(pbVar10 + 8);
        *(undefined2 *)(pbVar13 + 0x10) = *(undefined2 *)(pbVar10 + 0x10);
        pbVar8 = pbVar7;
        goto LAB_180420830;
      }
    }
    pbVar14 = pbVar13 + uVar18;
    pbVar8 = pbVar7;
    if (uVar15 < 0x10) {
      if (uVar15 == 1) {
        bStack_64 = *pbVar10;
        bStack_63 = bStack_64;
        bStack_62 = bStack_64;
        bStack_61 = bStack_64;
LAB_180420ae2:
        uVar5 = CONCAT17(bStack_61,
                         CONCAT16(bStack_62,
                                  CONCAT15(bStack_63,
                                           CONCAT14(bStack_64,
                                                    CONCAT13(bStack_61,
                                                             CONCAT12(bStack_62,
                                                                      CONCAT11(bStack_63,bStack_64))
                                                            )))));
        *(undefined8 *)pbVar13 = uVar5;
        pbVar13 = pbVar13 + 8;
        uVar17 = (ulonglong)(pbVar14 + (7 - (longlong)pbVar13)) >> 3;
        if (pbVar14 < pbVar13) {
          uVar17 = 0;
        }
        if (uVar17 != 0) {
          for (; uVar17 != 0; uVar17 = uVar17 - 1) {
            *(undefined8 *)pbVar13 = uVar5;
            pbVar13 = pbVar13 + 8;
          }
        }
      }
      else {
        if (uVar15 == 2) {
          local_68 = (byte)*(undefined2 *)pbVar10;
          bStack_67 = (byte)((ushort)*(undefined2 *)pbVar10 >> 8);
          bStack_62 = local_68;
          bStack_61 = bStack_67;
          bStack_64 = local_68;
          bStack_63 = bStack_67;
          goto LAB_180420ae2;
        }
        if (uVar15 == 4) {
          uVar4 = *(undefined4 *)pbVar10;
          local_68 = (byte)uVar4;
          bStack_67 = (byte)((uint)uVar4 >> 8);
          bStack_66 = (byte)((uint)uVar4 >> 0x10);
          bStack_65 = (byte)((uint)uVar4 >> 0x18);
          bStack_64 = local_68;
          bStack_63 = bStack_67;
          bStack_62 = bStack_66;
          bStack_61 = bStack_65;
          goto LAB_180420ae2;
        }
        if (uVar15 < 8) {
          pbVar13[0] = 0;
          pbVar13[1] = 0;
          pbVar13[2] = 0;
          pbVar13[3] = 0;
          *pbVar13 = *pbVar10;
          pbVar13[1] = pbVar10[1];
          pbVar13[2] = pbVar10[2];
          pbVar13[3] = pbVar10[3];
          uVar16 = *(uint *)(&DAT_1807115c0 + uVar15 * 4);
          *(undefined4 *)(pbVar13 + 4) = *(undefined4 *)(pbVar10 + uVar16);
          pbVar7 = pbVar10 + uVar16 + -(longlong)*(int *)(&DAT_1807115e8 + uVar15 * 4);
        }
        else {
          pbVar7 = pbVar10 + 8;
          *(undefined8 *)pbVar13 = *(undefined8 *)pbVar10;
        }
        pbVar13 = pbVar13 + 8;
        lVar12 = (longlong)pbVar7 - (longlong)pbVar13;
        do {
          *(undefined8 *)pbVar13 = *(undefined8 *)(pbVar13 + lVar12);
          pbVar13 = pbVar13 + 8;
        } while (pbVar13 < pbVar14);
      }
    }
    else {
      lVar12 = (longlong)pbVar13 - (longlong)pbVar10;
      do {
        uVar5 = *(undefined8 *)(pbVar10 + 8);
        *(undefined8 *)(pbVar10 + lVar12) = *(undefined8 *)pbVar10;
        *(undefined8 *)(pbVar10 + lVar12 + 8) = uVar5;
        uVar5 = *(undefined8 *)(pbVar10 + 0x18);
        *(undefined8 *)(pbVar10 + lVar12 + 0x10) = *(undefined8 *)(pbVar10 + 0x10);
        *(undefined8 *)(pbVar10 + lVar12 + 0x10 + 8) = uVar5;
        pbVar10 = pbVar10 + 0x20;
      } while (pbVar10 + lVar12 < pbVar14);
    }
    goto LAB_180420830;
  }
  return -1;
LAB_180420d14:
  if (pbVar10 < param_2) {
LAB_180420e63:
    return ((int)param_1 - (int)pbVar7) + -1;
  }
  pbVar14 = pbVar13 + uVar18;
  if (uVar15 < 8) {
    pbVar13[0] = 0;
    pbVar13[1] = 0;
    pbVar13[2] = 0;
    pbVar13[3] = 0;
    *pbVar13 = *pbVar10;
    pbVar13[1] = pbVar10[1];
    pbVar13[2] = pbVar10[2];
    pbVar13[3] = pbVar10[3];
    uVar16 = *(uint *)(&DAT_1807115c0 + uVar15 * 4);
    *(undefined4 *)(pbVar13 + 4) = *(undefined4 *)(pbVar10 + uVar16);
    pbVar11 = pbVar10 + uVar16 + -(longlong)*(int *)(&DAT_1807115e8 + uVar15 * 4);
  }
  else {
    pbVar11 = pbVar10 + 8;
    *(undefined8 *)pbVar13 = *(undefined8 *)pbVar10;
  }
  pbVar10 = pbVar13 + 8;
  pbVar8 = pbVar7;
  if (pbVar1 + -0xc < pbVar14) {
    pbVar13 = pbVar1 + -7;
    if (pbVar1 + -5 < pbVar14) goto LAB_180420e63;
    if (pbVar10 < pbVar13) {
      pbVar7 = pbVar10;
      do {
        *(undefined8 *)pbVar7 = *(undefined8 *)(pbVar7 + ((longlong)pbVar11 - (longlong)pbVar10));
        pbVar7 = pbVar7 + 8;
      } while (pbVar7 < pbVar13);
      pbVar11 = pbVar11 + ((longlong)pbVar13 - (longlong)pbVar10);
      pbVar10 = pbVar13;
    }
    for (; pbVar10 < pbVar14; pbVar10 = pbVar10 + 1) {
      bVar2 = *pbVar11;
      pbVar11 = pbVar11 + 1;
      *pbVar10 = bVar2;
    }
  }
  else {
    *(undefined8 *)pbVar10 = *(undefined8 *)pbVar11;
    if (0x10 < uVar18) {
      pbVar7 = pbVar13 + 0x10;
      do {
        *(undefined8 *)pbVar7 =
             *(undefined8 *)(pbVar7 + (longlong)(pbVar11 + (8 - (longlong)(pbVar13 + 0x10))));
        pbVar7 = pbVar7 + 8;
      } while (pbVar7 < pbVar14);
    }
  }
LAB_180420b60:
  while( true ) {
    pbVar7 = pbVar8 + 1;
    uVar16 = (uint)*pbVar8;
    uVar17 = (ulonglong)(*pbVar8 >> 4);
    if (uVar17 == 0xf) break;
    if (pbVar9 + -0x10 <= pbVar7 || pbVar1 + -0x20 < pbVar14) goto LAB_180420c61;
    uVar5 = *(undefined8 *)(pbVar8 + 9);
    *(undefined8 *)pbVar14 = *(undefined8 *)pbVar7;
    *(undefined8 *)(pbVar14 + 8) = uVar5;
    pbVar13 = pbVar14 + uVar17;
    uVar18 = (ulonglong)(uVar16 & 0xf);
    uVar6 = FUN_180420790(pbVar7 + uVar17,uVar16,0);
    uVar15 = (ulonglong)uVar6;
    pbVar10 = pbVar13 + -uVar15;
    pbVar7 = pbVar7 + uVar17 + 2;
    if (uVar18 == 0xf) goto LAB_180420cc0;
    if ((uVar15 < 8) || (pbVar10 < param_2)) goto LAB_180420d10;
    *(undefined8 *)pbVar13 = *(undefined8 *)pbVar10;
    *(undefined8 *)(pbVar13 + 8) = *(undefined8 *)(pbVar10 + 8);
    *(undefined2 *)(pbVar13 + 0x10) = *(undefined2 *)(pbVar10 + 0x10);
    pbVar14 = pbVar13 + uVar18 + 4;
    pbVar8 = pbVar7;
  }
  pbVar13 = pbVar9 + -0xf;
  if (pbVar13 <= pbVar7) goto LAB_180420e63;
  uVar17 = (ulonglong)*pbVar7;
  pbVar7 = pbVar8 + 2;
  if (pbVar13 < pbVar7) goto LAB_180420e63;
  if (uVar17 == 0xff) {
    do {
      bVar2 = *pbVar7;
      pbVar7 = pbVar7 + 1;
      uVar17 = uVar17 + bVar2;
      if (pbVar13 < pbVar7) goto LAB_180420e63;
    } while (bVar2 == 0xff);
  }
  if (((uVar17 == 0xffffffffffffffff) || (uVar17 = uVar17 + 0xf, pbVar14 + uVar17 < pbVar14)) ||
     (pbVar7 + uVar17 < pbVar7)) goto LAB_180420e63;
LAB_180420c61:
  pbVar13 = pbVar14 + uVar17;
  if ((pbVar1 + -0xc < pbVar13) || (pbVar9 + -8 < pbVar7 + uVar17)) {
    if ((pbVar7 + uVar17 == pbVar9) && (pbVar13 <= pbVar1)) {
      FUN_18063aed0(pbVar14,pbVar7,uVar17);
      return (int)pbVar14 + ((int)uVar17 - (int)param_2);
    }
    goto LAB_180420e63;
  }
  lVar12 = (longlong)pbVar7 - (longlong)pbVar14;
  do {
    *(undefined8 *)pbVar14 = *(undefined8 *)(pbVar14 + lVar12);
    pbVar14 = pbVar14 + 8;
  } while (pbVar14 < pbVar13);
  uVar6 = FUN_180420790();
  uVar15 = (ulonglong)uVar6;
  pbVar7 = pbVar7 + uVar17 + 2;
  pbVar10 = pbVar13 + -uVar15;
  uVar18 = (ulonglong)(uVar16 & 0xf);
  if (uVar18 == 0xf) {
LAB_180420cc0:
    uVar17 = (ulonglong)*pbVar7;
    pbVar7 = pbVar7 + 1;
    if (pbVar9 + -4 < pbVar7) goto LAB_180420e63;
    if (uVar17 == 0xff) {
      do {
        bVar2 = *pbVar7;
        pbVar7 = pbVar7 + 1;
        uVar17 = uVar17 + bVar2;
        if (pbVar9 + -4 < pbVar7) goto LAB_180420e63;
      } while (bVar2 == 0xff);
    }
    if ((uVar17 == 0xffffffffffffffff) || (uVar18 = uVar18 + uVar17, pbVar13 + uVar18 < pbVar13))
    goto LAB_180420e63;
  }
LAB_180420d10:
  uVar18 = uVar18 + 4;
  goto LAB_180420d14;
}



