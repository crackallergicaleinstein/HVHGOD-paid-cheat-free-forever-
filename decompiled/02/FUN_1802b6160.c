// FUN_1802b6160 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802b6160 */

undefined8 * FUN_1802b6160(undefined8 *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  longlong lVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  longlong lVar9;
  float *pfVar10;
  float *pfVar11;
  
  pfVar10 = param_2 + ((longlong)param_3 - (longlong)param_2 >> 4) * 2;
  lVar3 = (longlong)param_3 + (-8 - (longlong)param_2) >> 3;
  if (lVar3 < 0x29) {
    pfVar5 = param_3 + -2;
    pfVar4 = param_2;
  }
  else {
    lVar3 = lVar3 + 1 >> 3;
    lVar9 = lVar3 * 0x10;
    pfVar4 = param_2 + lVar3 * 2;
    lVar3 = FUN_1802b6980(param_2,pfVar4,param_2 + lVar3 * 4);
    lVar3 = FUN_1802b6980((longlong)pfVar10 - lVar3,pfVar10,lVar3 + (longlong)pfVar10);
    pfVar5 = (float *)((longlong)param_3 + (-8 - lVar3));
    FUN_1802b6980((longlong)param_3 + (-8 - lVar9),pfVar5,param_3 + -2);
  }
  FUN_1802b6980(pfVar4,pfVar10,pfVar5);
  pfVar4 = pfVar10 + 2;
  if (param_2 < pfVar10) {
    fVar2 = *pfVar10;
    do {
      fVar1 = pfVar10[-2];
      if ((fVar1 < fVar2) ||
         ((((fVar1 == fVar2 && (pfVar10[-1] < pfVar10[1])) || (fVar2 < fVar1)) ||
          ((fVar2 == fVar1 && (pfVar10[1] < pfVar10[-1])))))) break;
      pfVar10 = pfVar10 + -2;
      fVar2 = fVar1;
    } while (param_2 < pfVar10);
  }
  pfVar5 = pfVar4;
  pfVar7 = pfVar10;
  if (pfVar4 < param_3) {
    fVar2 = *pfVar10;
    while (((fVar1 = *pfVar4, pfVar5 = pfVar4, fVar2 <= fVar1 &&
            ((fVar1 != fVar2 || (pfVar10[1] <= pfVar4[1])))) && (fVar1 <= fVar2))) {
      if (((fVar2 == fVar1) && (pfVar10[1] < pfVar4[1])) ||
         (pfVar4 = pfVar4 + 2, pfVar5 = pfVar4, param_3 <= pfVar4)) break;
    }
  }
joined_r0x0001802b62c3:
  do {
    pfVar8 = pfVar7;
    if (param_3 <= pfVar4) {
joined_r0x0001802b633e:
      for (; param_2 < pfVar7; pfVar7 = pfVar7 + -2) {
        pfVar6 = pfVar8 + -2;
        fVar2 = *pfVar10;
        fVar1 = *pfVar6;
        pfVar11 = pfVar10;
        if ((fVar2 <= fVar1) && ((fVar1 != fVar2 || (pfVar10[1] <= pfVar8[-1])))) {
          if ((fVar2 < fVar1) || ((fVar2 == fVar1 && (pfVar10[1] < pfVar8[-1])))) break;
          pfVar11 = pfVar10 + -2;
          if (pfVar11 != pfVar6) {
            fVar2 = *pfVar11;
            fVar1 = pfVar10[-1];
            *(undefined8 *)pfVar11 = *(undefined8 *)pfVar6;
            *pfVar6 = fVar2;
            pfVar8[-1] = fVar1;
          }
        }
        pfVar8 = pfVar6;
        pfVar10 = pfVar11;
      }
      if (pfVar7 == param_2) {
        if (pfVar4 == param_3) {
          *param_1 = pfVar10;
          param_1[1] = pfVar5;
          return param_1;
        }
        if (pfVar5 != pfVar4) {
          fVar2 = *pfVar10;
          fVar1 = pfVar10[1];
          *(undefined8 *)pfVar10 = *(undefined8 *)pfVar5;
          *pfVar5 = fVar2;
          pfVar5[1] = fVar1;
        }
        fVar2 = *pfVar10;
        fVar1 = pfVar10[1];
        *(undefined8 *)pfVar10 = *(undefined8 *)pfVar4;
        *pfVar4 = fVar2;
        pfVar4[1] = fVar1;
        pfVar4 = pfVar4 + 2;
        pfVar5 = pfVar5 + 2;
        pfVar10 = pfVar10 + 2;
      }
      else {
        pfVar8 = pfVar7 + -2;
        if (pfVar4 == param_3) {
          pfVar11 = pfVar10 + -2;
          if (pfVar8 != pfVar11) {
            fVar2 = *pfVar8;
            fVar1 = pfVar7[-1];
            *(undefined8 *)pfVar8 = *(undefined8 *)pfVar11;
            *pfVar11 = fVar2;
            pfVar10[-1] = fVar1;
          }
          fVar2 = *pfVar11;
          fVar1 = pfVar10[-1];
          *(undefined8 *)pfVar11 = *(undefined8 *)(pfVar5 + -2);
          pfVar5[-2] = fVar2;
          pfVar5[-1] = fVar1;
          pfVar5 = pfVar5 + -2;
          pfVar10 = pfVar11;
          pfVar7 = pfVar8;
        }
        else {
          fVar2 = *pfVar4;
          fVar1 = pfVar4[1];
          *(undefined8 *)pfVar4 = *(undefined8 *)pfVar8;
          *pfVar8 = fVar2;
          pfVar7[-1] = fVar1;
          pfVar4 = pfVar4 + 2;
          pfVar7 = pfVar8;
        }
      }
      goto joined_r0x0001802b62c3;
    }
    fVar2 = *pfVar4;
    fVar1 = *pfVar10;
    if ((fVar2 <= fVar1) && ((fVar1 != fVar2 || (pfVar4[1] <= pfVar10[1])))) {
      if ((fVar2 < fVar1) || ((fVar2 == fVar1 && (pfVar4[1] < pfVar10[1]))))
      goto joined_r0x0001802b633e;
      if (pfVar5 != pfVar4) {
        fVar2 = *pfVar5;
        fVar1 = pfVar5[1];
        *(undefined8 *)pfVar5 = *(undefined8 *)pfVar4;
        *pfVar4 = fVar2;
        pfVar4[1] = fVar1;
      }
      pfVar5 = pfVar5 + 2;
    }
    pfVar4 = pfVar4 + 2;
  } while( true );
}



