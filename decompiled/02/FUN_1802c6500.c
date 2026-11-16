// FUN_1802c6500 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802c6500 */

ulonglong * FUN_1802c6500(ulonglong *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  float *pfVar9;
  longlong lVar10;
  float *pfVar11;
  longlong lVar12;
  longlong lVar13;
  float *pfVar14;
  
  pfVar8 = param_2 + ((longlong)param_3 - (longlong)param_2 >> 5) * 4;
  lVar12 = (longlong)param_3 + (-0x10 - (longlong)param_2) >> 4;
  if (lVar12 < 0x29) {
    FUN_1802c6a30(param_2,pfVar8,param_3 + -4);
  }
  else {
    lVar13 = lVar12 + 1 >> 3;
    lVar12 = lVar13 * 0x10;
    lVar10 = lVar13 * 0x20;
    FUN_1802c6a30(param_2,param_2 + lVar13 * 4,param_2 + lVar13 * 8);
    FUN_1802c6a30((longlong)pfVar8 - lVar12,pfVar8,lVar12 + (longlong)pfVar8);
    lVar12 = (longlong)param_3 + (-0x10 - lVar12);
    FUN_1802c6a30((longlong)param_3 + (-0x10 - lVar10),lVar12,param_3 + -4);
    FUN_1802c6a30(param_2 + lVar13 * 4,pfVar8,lVar12);
  }
  pfVar6 = pfVar8 + 4;
  if (param_2 < pfVar8) {
    fVar2 = *pfVar8;
    do {
      pfVar7 = pfVar8 + -4;
      fVar1 = *pfVar7;
      if ((fVar2 < fVar1) || (fVar1 < fVar2)) break;
      pfVar8 = pfVar7;
      fVar2 = fVar1;
    } while (param_2 < pfVar7);
  }
  if (pfVar6 < param_3) {
    do {
      if ((*pfVar8 < *pfVar6) || (*pfVar6 < *pfVar8)) break;
      pfVar6 = pfVar6 + 4;
    } while (pfVar6 < param_3);
  }
  pfVar7 = pfVar6;
  pfVar14 = pfVar8;
LAB_1802c6620:
  pfVar5 = pfVar14;
  pfVar9 = pfVar6;
  if (pfVar6 < param_3) {
    if (0x3f < ((longlong)param_3 + (0xf - (longlong)pfVar6) & 0xfffffffffffffff0U)) {
      pfVar11 = pfVar6 + 4;
      do {
        fVar2 = *pfVar6;
        if (*pfVar8 <= fVar2) {
          pfVar9 = pfVar6;
          if (*pfVar8 < fVar2) goto joined_r0x0001802c67b1;
          if (pfVar7 != pfVar6) {
            fVar1 = *pfVar7;
            *pfVar7 = fVar2;
            uVar3 = *(undefined8 *)(pfVar11 + -2);
            *pfVar6 = fVar1;
            uVar4 = *(undefined8 *)(pfVar7 + 2);
            *(undefined8 *)(pfVar7 + 2) = uVar3;
            *(undefined8 *)(pfVar11 + -2) = uVar4;
          }
          pfVar7 = pfVar7 + 4;
        }
        fVar2 = *pfVar11;
        if (*pfVar8 <= fVar2) {
          pfVar9 = pfVar11;
          if (*pfVar8 < fVar2) goto joined_r0x0001802c67b1;
          if (pfVar7 != pfVar11) {
            fVar1 = *pfVar7;
            *pfVar7 = fVar2;
            *pfVar11 = fVar1;
            uVar3 = *(undefined8 *)(pfVar7 + 2);
            *(undefined8 *)(pfVar7 + 2) = *(undefined8 *)(pfVar11 + 2);
            *(undefined8 *)(pfVar11 + 2) = uVar3;
          }
          pfVar7 = pfVar7 + 4;
        }
        pfVar9 = pfVar11 + 4;
        fVar2 = *pfVar9;
        if (*pfVar8 <= fVar2) {
          if (*pfVar8 < fVar2) goto joined_r0x0001802c67b1;
          if (pfVar7 != pfVar9) {
            fVar1 = *pfVar7;
            *pfVar7 = fVar2;
            *pfVar9 = fVar1;
            uVar3 = *(undefined8 *)(pfVar7 + 2);
            *(undefined8 *)(pfVar7 + 2) = *(undefined8 *)(pfVar11 + 6);
            *(undefined8 *)(pfVar11 + 6) = uVar3;
          }
          pfVar7 = pfVar7 + 4;
        }
        pfVar9 = pfVar11 + 8;
        fVar2 = *pfVar9;
        if (*pfVar8 <= fVar2) {
          if (*pfVar8 < fVar2) goto joined_r0x0001802c67b1;
          if (pfVar7 != pfVar9) {
            fVar1 = *pfVar7;
            *pfVar7 = fVar2;
            *pfVar9 = fVar1;
            uVar3 = *(undefined8 *)(pfVar7 + 2);
            *(undefined8 *)(pfVar7 + 2) = *(undefined8 *)(pfVar11 + 10);
            *(undefined8 *)(pfVar11 + 10) = uVar3;
          }
          pfVar7 = pfVar7 + 4;
        }
        pfVar6 = pfVar6 + 0x10;
        pfVar11 = pfVar11 + 0x10;
      } while (pfVar6 < param_3 + -0xc);
    }
    for (; pfVar9 = pfVar6, pfVar6 < param_3; pfVar6 = pfVar6 + 4) {
      fVar2 = *pfVar6;
      if (*pfVar8 <= fVar2) {
        if (*pfVar8 < fVar2) break;
        if (pfVar7 != pfVar6) {
          fVar1 = *pfVar7;
          *pfVar7 = fVar2;
          *pfVar6 = fVar1;
          uVar3 = *(undefined8 *)(pfVar7 + 2);
          *(undefined8 *)(pfVar7 + 2) = *(undefined8 *)(pfVar6 + 2);
          *(undefined8 *)(pfVar6 + 2) = uVar3;
        }
        pfVar7 = pfVar7 + 4;
      }
    }
  }
joined_r0x0001802c67b1:
  do {
    pfVar6 = pfVar9;
    if (pfVar5 <= param_2) break;
    pfVar11 = pfVar14 + -4;
    fVar2 = *pfVar11;
    pfVar9 = pfVar8;
    if (fVar2 <= *pfVar8) {
      if (fVar2 < *pfVar8) break;
      pfVar9 = pfVar8 + -4;
      if (pfVar9 != pfVar11) {
        fVar1 = *pfVar9;
        *pfVar9 = fVar2;
        *pfVar11 = fVar1;
        uVar3 = *(undefined8 *)(pfVar8 + -2);
        *(undefined8 *)(pfVar8 + -2) = *(undefined8 *)(pfVar14 + -2);
        *(undefined8 *)(pfVar14 + -2) = uVar3;
      }
    }
    pfVar8 = pfVar9;
    pfVar5 = pfVar5 + -4;
    pfVar14 = pfVar11;
    pfVar9 = pfVar6;
  } while( true );
  if (pfVar5 == param_2) {
    if (pfVar6 == param_3) {
      *param_1 = (ulonglong)pfVar8;
      param_1[1] = (ulonglong)pfVar7;
      return param_1;
    }
    if (pfVar7 != pfVar6) {
      fVar2 = *pfVar8;
      *pfVar8 = *pfVar7;
      *pfVar7 = fVar2;
      uVar3 = *(undefined8 *)(pfVar8 + 2);
      *(undefined8 *)(pfVar8 + 2) = *(undefined8 *)(pfVar7 + 2);
      *(undefined8 *)(pfVar7 + 2) = uVar3;
    }
    fVar2 = *pfVar8;
    *pfVar8 = *pfVar6;
    *pfVar6 = fVar2;
    uVar3 = *(undefined8 *)(pfVar8 + 2);
    *(undefined8 *)(pfVar8 + 2) = *(undefined8 *)(pfVar6 + 2);
    *(undefined8 *)(pfVar6 + 2) = uVar3;
    pfVar6 = pfVar6 + 4;
    pfVar7 = pfVar7 + 4;
    pfVar8 = pfVar8 + 4;
    pfVar14 = pfVar5;
  }
  else {
    pfVar14 = pfVar5 + -4;
    if (pfVar6 == param_3) {
      pfVar9 = pfVar8 + -4;
      if (pfVar14 != pfVar9) {
        fVar2 = *pfVar14;
        *pfVar14 = *pfVar9;
        *pfVar9 = fVar2;
        uVar3 = *(undefined8 *)(pfVar5 + -2);
        *(undefined8 *)(pfVar5 + -2) = *(undefined8 *)(pfVar8 + -2);
        *(undefined8 *)(pfVar8 + -2) = uVar3;
      }
      fVar2 = *pfVar9;
      *pfVar9 = pfVar7[-4];
      pfVar7[-4] = fVar2;
      uVar3 = *(undefined8 *)(pfVar8 + -2);
      *(undefined8 *)(pfVar8 + -2) = *(undefined8 *)(pfVar7 + -2);
      *(undefined8 *)(pfVar7 + -2) = uVar3;
      pfVar7 = pfVar7 + -4;
      pfVar8 = pfVar9;
    }
    else {
      fVar2 = *pfVar6;
      *pfVar6 = *pfVar14;
      *pfVar14 = fVar2;
      uVar3 = *(undefined8 *)(pfVar6 + 2);
      *(undefined8 *)(pfVar6 + 2) = *(undefined8 *)(pfVar5 + -2);
      pfVar6 = pfVar6 + 4;
      *(undefined8 *)(pfVar5 + -2) = uVar3;
    }
  }
  goto LAB_1802c6620;
}



