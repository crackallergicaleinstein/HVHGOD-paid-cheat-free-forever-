// FUN_180210ef0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180210ef0 */

undefined8 * FUN_180210ef0(undefined8 *param_1,short *param_2,short *param_3)

{
  short sVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  short *psVar6;
  char cVar7;
  longlong lVar8;
  short *psVar9;
  int *piVar10;
  short *psVar11;
  short *psVar12;
  short *psVar13;
  short *psVar14;
  bool bVar15;
  bool bVar16;
  
  psVar14 = param_2 + ((longlong)param_3 - (longlong)param_2 >> 4) * 4;
  lVar8 = (longlong)param_3 + (-8 - (longlong)param_2) >> 3;
  if (lVar8 < 0x29) {
    psVar11 = param_3 + -4;
    psVar9 = param_2;
  }
  else {
    lVar8 = lVar8 + 1 >> 3;
    FUN_180212c40(param_2,param_2 + lVar8 * 4,param_2 + lVar8 * 8);
    FUN_180212c40(psVar14 + lVar8 * -4,psVar14,psVar14 + lVar8 * 4);
    psVar11 = param_3 + lVar8 * -4 + -4;
    FUN_180212c40(param_3 + lVar8 * -8 + -4,psVar11,param_3 + -4);
    psVar9 = param_2 + lVar8 * 4;
  }
  FUN_180212c40(psVar9,psVar14,psVar11);
  psVar9 = psVar14 + 4;
  if (param_2 < psVar14) {
    piVar10 = (int *)(psVar14 + -2);
    do {
      sVar1 = *psVar14;
      sVar2 = (short)piVar10[-1];
      bVar16 = SBORROW2(sVar2,sVar1);
      bVar15 = (short)(sVar2 - sVar1) < 0;
      if (sVar2 == sVar1) {
        iVar3 = piVar10[2];
        iVar4 = *piVar10;
        bVar16 = SBORROW4(iVar4,iVar3);
        bVar15 = iVar4 - iVar3 < 0;
        if (iVar4 != iVar3) goto LAB_180210fcc;
        cVar7 = '\0';
      }
      else {
LAB_180210fcc:
        cVar7 = -1;
        if (bVar16 == bVar15) {
          cVar7 = '\x01';
        }
      }
      if (cVar7 < '\0') break;
      bVar16 = SBORROW2(sVar1,sVar2);
      bVar15 = (short)(sVar1 - sVar2) < 0;
      if (sVar1 == sVar2) {
        iVar3 = *piVar10;
        iVar4 = piVar10[2];
        bVar16 = SBORROW4(iVar4,iVar3);
        bVar15 = iVar4 - iVar3 < 0;
        if (iVar4 != iVar3) goto LAB_180210fe9;
        cVar7 = '\0';
      }
      else {
LAB_180210fe9:
        cVar7 = -1;
        if (bVar16 == bVar15) {
          cVar7 = '\x01';
        }
      }
      if (cVar7 < '\0') break;
      psVar14 = psVar14 + -4;
      piVar10 = piVar10 + -2;
    } while (param_2 < psVar14);
  }
  psVar13 = psVar9;
  psVar11 = psVar14;
  if (psVar9 < param_3) {
    sVar1 = *psVar14;
    do {
      sVar2 = *psVar9;
      bVar16 = SBORROW2(sVar2,sVar1);
      bVar15 = (short)(sVar2 - sVar1) < 0;
      if (sVar2 == sVar1) {
        iVar3 = *(int *)(psVar14 + 2);
        iVar4 = *(int *)(psVar9 + 2);
        bVar16 = SBORROW4(iVar4,iVar3);
        bVar15 = iVar4 - iVar3 < 0;
        if (iVar4 != iVar3) goto LAB_180211027;
        cVar7 = '\0';
      }
      else {
LAB_180211027:
        cVar7 = -1;
        if (bVar16 == bVar15) {
          cVar7 = '\x01';
        }
      }
      psVar13 = psVar9;
      if (cVar7 < '\0') break;
      bVar16 = SBORROW2(sVar1,sVar2);
      bVar15 = (short)(sVar1 - sVar2) < 0;
      if (sVar1 == sVar2) {
        iVar3 = *(int *)(psVar9 + 2);
        iVar4 = *(int *)(psVar14 + 2);
        bVar16 = SBORROW4(iVar4,iVar3);
        bVar15 = iVar4 - iVar3 < 0;
        if (iVar4 != iVar3) goto LAB_180211046;
        cVar7 = '\0';
      }
      else {
LAB_180211046:
        cVar7 = -1;
        if (bVar16 == bVar15) {
          cVar7 = '\x01';
        }
      }
      if ((cVar7 < '\0') || (psVar9 = psVar9 + 4, psVar13 = psVar9, param_3 <= psVar9)) break;
    } while( true );
  }
joined_r0x000180211064:
  do {
    psVar6 = psVar11;
    if (param_3 <= psVar9) {
joined_r0x0001802110d7:
      for (; param_2 < psVar11; psVar11 = psVar11 + -4) {
        psVar12 = psVar6 + -4;
        sVar1 = *psVar14;
        sVar2 = *psVar12;
        bVar16 = SBORROW2(sVar2,sVar1);
        bVar15 = (short)(sVar2 - sVar1) < 0;
        if (sVar2 == sVar1) {
          iVar3 = *(int *)(psVar14 + 2);
          iVar4 = *(int *)(psVar6 + -2);
          bVar16 = SBORROW4(iVar4,iVar3);
          bVar15 = iVar4 - iVar3 < 0;
          if (iVar4 != iVar3) goto LAB_1802110fc;
          cVar7 = '\0';
        }
        else {
LAB_1802110fc:
          cVar7 = -1;
          if (bVar16 == bVar15) {
            cVar7 = '\x01';
          }
        }
        if (-1 < cVar7) {
          bVar16 = SBORROW2(sVar1,sVar2);
          bVar15 = (short)(sVar1 - sVar2) < 0;
          if (sVar1 == sVar2) {
            iVar3 = *(int *)(psVar6 + -2);
            iVar4 = *(int *)(psVar14 + 2);
            bVar16 = SBORROW4(iVar4,iVar3);
            bVar15 = iVar4 - iVar3 < 0;
            if (iVar4 != iVar3) goto LAB_18021111c;
            cVar7 = '\0';
          }
          else {
LAB_18021111c:
            cVar7 = -1;
            if (bVar16 == bVar15) {
              cVar7 = '\x01';
            }
          }
          if (cVar7 < '\0') break;
          psVar14 = psVar14 + -4;
          if (psVar14 != psVar12) {
            uVar5 = *(undefined8 *)psVar14;
            *(undefined8 *)psVar14 = *(undefined8 *)psVar12;
            *(undefined8 *)psVar12 = uVar5;
          }
        }
        psVar6 = psVar12;
      }
      if (psVar11 == param_2) {
        if (psVar9 == param_3) {
          *param_1 = psVar14;
          param_1[1] = psVar13;
          return param_1;
        }
        if (psVar13 != psVar9) {
          uVar5 = *(undefined8 *)psVar14;
          *(undefined8 *)psVar14 = *(undefined8 *)psVar13;
          *(undefined8 *)psVar13 = uVar5;
        }
        uVar5 = *(undefined8 *)psVar14;
        *(undefined8 *)psVar14 = *(undefined8 *)psVar9;
        psVar14 = psVar14 + 4;
        *(undefined8 *)psVar9 = uVar5;
        psVar9 = psVar9 + 4;
        psVar13 = psVar13 + 4;
      }
      else {
        psVar11 = psVar11 + -4;
        if (psVar9 == param_3) {
          psVar14 = psVar14 + -4;
          if (psVar11 != psVar14) {
            uVar5 = *(undefined8 *)psVar11;
            *(undefined8 *)psVar11 = *(undefined8 *)psVar14;
            *(undefined8 *)psVar14 = uVar5;
          }
          uVar5 = *(undefined8 *)psVar14;
          *(undefined8 *)psVar14 = *(undefined8 *)(psVar13 + -4);
          *(undefined8 *)(psVar13 + -4) = uVar5;
          psVar13 = psVar13 + -4;
        }
        else {
          uVar5 = *(undefined8 *)psVar9;
          *(undefined8 *)psVar9 = *(undefined8 *)psVar11;
          psVar9 = psVar9 + 4;
          *(undefined8 *)psVar11 = uVar5;
        }
      }
      goto joined_r0x000180211064;
    }
    sVar1 = *psVar9;
    sVar2 = *psVar14;
    bVar16 = SBORROW2(sVar2,sVar1);
    bVar15 = (short)(sVar2 - sVar1) < 0;
    if (sVar2 == sVar1) {
      iVar3 = *(int *)(psVar9 + 2);
      iVar4 = *(int *)(psVar14 + 2);
      bVar16 = SBORROW4(iVar4,iVar3);
      bVar15 = iVar4 - iVar3 < 0;
      if (iVar4 != iVar3) goto LAB_18021108b;
      cVar7 = '\0';
    }
    else {
LAB_18021108b:
      cVar7 = -1;
      if (bVar16 == bVar15) {
        cVar7 = '\x01';
      }
    }
    if (-1 < cVar7) {
      bVar16 = SBORROW2(sVar1,sVar2);
      bVar15 = (short)(sVar1 - sVar2) < 0;
      if (sVar1 == sVar2) {
        iVar3 = *(int *)(psVar14 + 2);
        iVar4 = *(int *)(psVar9 + 2);
        bVar16 = SBORROW4(iVar4,iVar3);
        bVar15 = iVar4 - iVar3 < 0;
        if (iVar4 != iVar3) goto LAB_1802110aa;
        cVar7 = '\0';
      }
      else {
LAB_1802110aa:
        cVar7 = -1;
        if (bVar16 == bVar15) {
          cVar7 = '\x01';
        }
      }
      if (cVar7 < '\0') goto joined_r0x0001802110d7;
      if (psVar13 != psVar9) {
        uVar5 = *(undefined8 *)psVar13;
        *(undefined8 *)psVar13 = *(undefined8 *)psVar9;
        *(undefined8 *)psVar9 = uVar5;
      }
      psVar13 = psVar13 + 4;
    }
    psVar9 = psVar9 + 4;
  } while( true );
}



