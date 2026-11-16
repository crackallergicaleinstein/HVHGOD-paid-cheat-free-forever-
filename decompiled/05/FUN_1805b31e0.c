// FUN_1805b31e0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805b31e0 */

undefined8 FUN_1805b31e0(longlong param_1,byte *param_2,ulonglong param_3)

{
  ulonglong *puVar1;
  byte bVar2;
  bool bVar3;
  longlong lVar4;
  int *piVar5;
  ulonglong uVar6;
  int iVar7;
  ulonglong uVar8;
  uint uVar9;
  ulonglong uVar10;
  byte *pbVar11;
  ulonglong *puVar12;
  ulonglong *puVar13;
  uint *puVar14;
  byte *pbVar15;
  byte *pbVar16;
  
  puVar1 = (ulonglong *)(param_1 + 0x4b8);
  *(ulonglong **)(param_1 + 0x650) = puVar1;
  *(longlong *)(param_1 + 0x4b0) = param_1 + 0xb0;
  pbVar11 = param_2 + (param_3 & 0xffffffff);
  bVar3 = false;
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(byte **)(param_1 + 0x4c0) = param_2;
  *(byte **)(param_1 + 0x4c8) = pbVar11;
  *puVar1 = (ulonglong)param_2;
  puVar13 = puVar1;
  if (pbVar11 <= param_2) {
LAB_1805b355e:
    return 0xa0;
  }
  do {
    uVar8 = 0;
    bVar2 = *param_2;
    puVar14 = *(uint **)(param_1 + 0x4b0);
    pbVar15 = param_2 + 1;
    switch(bVar2) {
    case 1:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 0xe:
    case 0xf:
    case 0x15:
    case 0x16:
    case 0x1e:
    case 0x1f:
      goto LAB_1805b355e;
    default:
      if (bVar2 < 0x20) {
        return 0xa0;
      }
      if (bVar2 < 0xf7) {
        uVar6 = (ulonglong)(bVar2 - 0x8b);
        pbVar16 = pbVar15;
      }
      else {
        pbVar16 = param_2 + 2;
        if (pbVar11 < pbVar16) {
          return 0xa0;
        }
        if (bVar2 < 0xfb) {
          uVar6 = (ulonglong)((*pbVar15 - 0xf694) + (uint)bVar2 * 0x100);
        }
        else {
          uVar6 = (ulonglong)(((uint)bVar2 * -0x100 + 0xfa94) - (uint)*pbVar15);
        }
      }
LAB_1805b3349:
      uVar10 = uVar8;
      pbVar15 = pbVar16;
      if (!bVar3) {
        uVar9 = (int)uVar6 << 0x10;
        goto LAB_1805b3351;
      }
      goto LAB_1805b32d9;
    case 10:
      uVar10 = 0x16;
      break;
    case 0xb:
      uVar10 = 0x18;
      break;
    case 0xc:
      if (pbVar11 <= pbVar15) {
        return 0xa0;
      }
      bVar2 = *pbVar15;
      pbVar15 = param_2 + 2;
      if (bVar2 == 7) {
        uVar10 = 4;
      }
      else {
        if (bVar2 != 0xc) {
          return 0xa0;
        }
        uVar10 = 0x14;
      }
      break;
    case 0xd:
      uVar10 = 2;
      break;
    case 0xff:
      pbVar16 = param_2 + 5;
      if (pbVar16 <= pbVar11) {
        uVar9 = CONCAT31(CONCAT21(CONCAT11(*pbVar15,param_2[2]),param_2[3]),param_2[4]);
        uVar6 = (ulonglong)uVar9;
        if (uVar9 + 32000 < 0xfa01) goto LAB_1805b3349;
        if (!bVar3) {
          bVar3 = true;
LAB_1805b3351:
          lVar4 = (longlong)puVar14 + (-0xb0 - param_1) >> 2;
          pbVar15 = pbVar16;
          goto LAB_1805b32f2;
        }
      }
      goto LAB_1805b355e;
    }
    uVar6 = uVar8;
    if ((bVar3) && ((int)uVar10 != 0x14)) {
      return 0xa0;
    }
LAB_1805b32d9:
    uVar9 = (uint)uVar6;
    lVar4 = (longlong)puVar14 + (-0xb0 - param_1) >> 2;
    iVar7 = (int)uVar10;
    if (iVar7 == 0) {
LAB_1805b32f2:
      if (0xff < lVar4) {
        return 0xa0;
      }
      *puVar14 = uVar9;
      puVar14 = puVar14 + 1;
    }
    else {
      if (lVar4 < *(int *)(&UNK_180675150 + uVar10 * 4)) {
        return 0xa1;
      }
      puVar14 = puVar14 + -(longlong)*(int *)(&UNK_180675150 + uVar10 * 4);
      if (iVar7 == 2) {
        *(undefined4 *)(param_1 + 0x58) = 1;
        *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + *puVar14;
        *(uint *)(param_1 + 0x40) = puVar14[1];
        *(undefined4 *)(param_1 + 0x44) = 0;
        return 0;
      }
      if (iVar7 == 4) {
        *(undefined4 *)(param_1 + 0x58) = 1;
        *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + *puVar14;
        *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + puVar14[1];
        *(uint *)(param_1 + 0x40) = puVar14[2];
        *(uint *)(param_1 + 0x44) = puVar14[3];
        return 0;
      }
      if (iVar7 == 0x14) {
        uVar9 = FUN_180573310(*puVar14,puVar14[1]);
        *puVar14 = uVar9;
        puVar14 = puVar14 + 1;
        bVar3 = false;
      }
      else if (iVar7 == 0x16) {
        iVar7 = (int)*(short *)((longlong)puVar14 + 2);
        if (*(longlong *)(param_1 + 0x688) != 0) {
          piVar5 = (int *)FUN_18057a3d0();
          if (piVar5 == (int *)0x0) {
            return 0xa0;
          }
          iVar7 = *piVar5;
        }
        if (iVar7 < 0) {
          return 0xa0;
        }
        if (*(int *)(param_1 + 0x674) <= iVar7) {
          return 0xa0;
        }
        if (0x17f < (longlong)puVar13 + (-0x4b8 - param_1)) {
          return 0xa0;
        }
        *puVar13 = (ulonglong)pbVar15;
        puVar12 = puVar13 + 3;
        lVar4 = (longlong)iVar7;
        uVar8 = *(ulonglong *)(*(longlong *)(param_1 + 0x678) + lVar4 * 8);
        puVar13[4] = uVar8;
        if (*(longlong *)(param_1 + 0x680) == 0) {
          iVar7 = *(int *)(param_1 + 0x670);
          if (iVar7 < 0) {
            iVar7 = 0;
          }
          uVar8 = uVar8 + (longlong)iVar7;
          puVar13[4] = uVar8;
          uVar6 = *(ulonglong *)(*(longlong *)(param_1 + 0x678) + 8 + lVar4 * 8);
        }
        else {
          uVar6 = *(uint *)(*(longlong *)(param_1 + 0x680) + lVar4 * 4) + uVar8;
        }
        puVar13[5] = uVar6;
        *puVar12 = uVar8;
        if (uVar8 == 0) {
          return 0xa0;
        }
        *(ulonglong **)(param_1 + 0x650) = puVar12;
        pbVar15 = (byte *)puVar13[4];
        pbVar11 = (byte *)puVar13[5];
        puVar13 = puVar12;
      }
      else {
        if (iVar7 != 0x18) {
          return 0xa0;
        }
        if (puVar13 <= puVar1) {
          return 0xa0;
        }
        pbVar15 = (byte *)puVar13[-3];
        pbVar11 = (byte *)puVar13[-1];
        *(ulonglong **)(param_1 + 0x650) = puVar13 + -3;
        puVar13 = puVar13 + -3;
      }
    }
    *(uint **)(param_1 + 0x4b0) = puVar14;
    if (pbVar11 <= pbVar15) {
      return 0xa0;
    }
    param_2 = pbVar15;
  } while( true );
}



