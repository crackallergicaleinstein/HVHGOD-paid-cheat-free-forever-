// FUN_1802698e0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802698e0 */

void FUN_1802698e0(ulonglong *param_1,int *param_2,int *param_3,longlong param_4)

{
  bool bVar1;
  longlong lVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  int *piVar8;
  int iVar9;
  int *piVar10;
  int *piVar11;
  float fVar12;
  float fVar13;
  
  piVar11 = param_2 + ((longlong)param_3 - (longlong)param_2 >> 3);
  lVar2 = (longlong)param_3 + (-4 - (longlong)param_2) >> 2;
  if (lVar2 < 0x29) {
    fVar12 = (float)FUN_18026af70(param_2,piVar11,param_3 + -1);
  }
  else {
    lVar2 = lVar2 + 1 >> 3;
    FUN_18026af70(param_2,param_2 + lVar2,param_2 + lVar2 * 2);
    FUN_18026af70(piVar11 + -lVar2,piVar11,piVar11 + lVar2,param_4);
    FUN_18026af70(param_3 + lVar2 * -2 + -1,param_3 + (-1 - lVar2),param_3 + -1,param_4);
    fVar12 = (float)FUN_18026af70(param_2 + lVar2,piVar11,param_3 + (-1 - lVar2),param_4);
  }
  piVar8 = piVar11 + 1;
  if (param_2 < piVar11) {
    iVar5 = *piVar11;
    lVar2 = **(longlong **)(param_4 + 8);
    while( true ) {
      lVar6 = (longlong)piVar11[-1];
      piVar10 = piVar11 + -1;
      iVar9 = iVar5;
      fVar13 = (float)FUN_18025e030(fVar12,lVar6 * 0x98 + lVar2);
      iVar5 = (int)lVar6;
      fVar12 = (float)FUN_18025e030(fVar13,(longlong)iVar9 * 0x98 + lVar2);
      if (fVar13 == fVar12) {
        bVar1 = iVar5 < iVar9;
      }
      else {
        bVar1 = fVar12 < fVar13;
      }
      if (bVar1) break;
      if (fVar12 == fVar13) {
        bVar1 = iVar9 < iVar5;
      }
      else {
        bVar1 = fVar13 < fVar12;
      }
      if ((bVar1) || (piVar11 = piVar10, piVar10 <= param_2)) break;
    }
  }
  piVar10 = piVar8;
  piVar3 = piVar11;
  if (piVar8 < param_3) {
    lVar6 = (longlong)*piVar11;
    lVar2 = **(longlong **)(param_4 + 8);
    fVar12 = (float)FUN_18025e030(fVar12,lVar6 * 0x98 + lVar2);
    fVar13 = fVar12;
    while( true ) {
      lVar7 = (longlong)*piVar8;
      fVar12 = (float)FUN_18025e030(fVar12,lVar7 * 0x98 + lVar2);
      if (fVar12 == fVar13) {
        bVar1 = (int)lVar7 < (int)lVar6;
      }
      else {
        bVar1 = fVar13 < fVar12;
      }
      piVar10 = piVar8;
      if (bVar1) break;
      if (fVar13 == fVar12) {
        bVar1 = (int)lVar6 < (int)lVar7;
      }
      else {
        bVar1 = fVar12 < fVar13;
      }
      if ((bVar1) || (piVar8 = piVar8 + 1, piVar10 = piVar8, param_3 <= piVar8)) break;
    }
  }
joined_r0x000180269aba:
  do {
    piVar4 = piVar3;
    if (param_3 <= piVar10) {
joined_r0x000180269b41:
      for (; param_2 < piVar3; piVar3 = piVar3 + -1) {
        piVar4 = piVar4 + -1;
        iVar5 = *piVar4;
        iVar9 = *piVar11;
        lVar2 = **(longlong **)(param_4 + 8);
        fVar13 = (float)FUN_18025e030(fVar12,(longlong)iVar5 * 0x98 + lVar2);
        fVar12 = (float)FUN_18025e030(fVar13,(longlong)iVar9 * 0x98 + lVar2);
        if (fVar13 == fVar12) {
          bVar1 = iVar5 < iVar9;
        }
        else {
          bVar1 = fVar12 < fVar13;
        }
        if (!bVar1) {
          if (fVar12 == fVar13) {
            bVar1 = iVar9 < iVar5;
          }
          else {
            bVar1 = fVar13 < fVar12;
          }
          if (bVar1) break;
          piVar11 = piVar11 + -1;
          if (piVar11 != piVar4) {
            iVar9 = *piVar11;
            *piVar11 = iVar5;
            *piVar4 = iVar9;
          }
        }
      }
      if (piVar3 == param_2) {
        if (piVar10 == param_3) {
          *param_1 = (ulonglong)piVar11;
          param_1[1] = (ulonglong)piVar8;
          return;
        }
        if (piVar8 != piVar10) {
          iVar5 = *piVar11;
          *piVar11 = *piVar8;
          *piVar8 = iVar5;
        }
        iVar5 = *piVar11;
        piVar8 = piVar8 + 1;
        *piVar11 = *piVar10;
        piVar11 = piVar11 + 1;
        *piVar10 = iVar5;
        piVar10 = piVar10 + 1;
      }
      else {
        piVar3 = piVar3 + -1;
        if (piVar10 == param_3) {
          piVar11 = piVar11 + -1;
          if (piVar3 != piVar11) {
            iVar5 = *piVar3;
            *piVar3 = *piVar11;
            *piVar11 = iVar5;
          }
          piVar4 = piVar8 + -1;
          piVar8 = piVar8 + -1;
          iVar5 = *piVar11;
          *piVar11 = *piVar4;
          *piVar8 = iVar5;
        }
        else {
          iVar5 = *piVar10;
          *piVar10 = *piVar3;
          *piVar3 = iVar5;
          piVar10 = piVar10 + 1;
        }
      }
      goto joined_r0x000180269aba;
    }
    iVar5 = *piVar11;
    iVar9 = *piVar10;
    lVar2 = **(longlong **)(param_4 + 8);
    fVar13 = (float)FUN_18025e030(fVar12,(longlong)iVar5 * 0x98 + lVar2);
    fVar12 = (float)FUN_18025e030(fVar13,(longlong)iVar9 * 0x98 + lVar2);
    if (fVar13 == fVar12) {
      bVar1 = iVar5 < iVar9;
    }
    else {
      bVar1 = fVar12 < fVar13;
    }
    if (!bVar1) {
      if (fVar12 == fVar13) {
        bVar1 = iVar9 < iVar5;
      }
      else {
        bVar1 = fVar13 < fVar12;
      }
      if (bVar1) goto joined_r0x000180269b41;
      if (piVar8 != piVar10) {
        iVar5 = *piVar8;
        *piVar8 = iVar9;
        *piVar10 = iVar5;
      }
      piVar8 = piVar8 + 1;
    }
    piVar10 = piVar10 + 1;
  } while( true );
}



