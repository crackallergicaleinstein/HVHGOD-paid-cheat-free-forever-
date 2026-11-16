// FUN_1802c62a0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802c62a0 */

void FUN_1802c62a0(float *param_1,float *param_2,longlong param_3,undefined1 param_4)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float *pfVar6;
  ulonglong uVar7;
  longlong lVar8;
  float *pfVar9;
  longlong lVar10;
  float *local_28;
  float *pfStack_20;
  
  uVar7 = (longlong)param_2 - (longlong)param_1;
  while( true ) {
    if ((longlong)(uVar7 & 0xfffffffffffffff0) < 0x201) {
      pfVar9 = param_1;
      if (param_1 != param_2) {
        while (pfVar6 = pfVar9 + 4, pfVar6 != param_2) {
          fVar3 = *pfVar6;
          fVar4 = pfVar9[6];
          fVar5 = pfVar9[7];
          if (fVar3 <= *param_1) {
            fVar2 = *pfVar9;
            pfVar1 = pfVar6;
            while (fVar2 < fVar3) {
              *pfVar1 = fVar2;
              *(undefined8 *)(pfVar1 + 2) = *(undefined8 *)(pfVar9 + 2);
              fVar2 = pfVar9[-4];
              pfVar1 = pfVar9;
              pfVar9 = pfVar9 + -4;
            }
            *pfVar1 = fVar3;
            pfVar1[2] = fVar4;
            pfVar1[3] = fVar5;
            pfVar9 = pfVar6;
          }
          else {
            if (pfVar6 != param_1) {
              pfVar9 = pfVar9 + 6;
              do {
                pfVar1 = pfVar9 + -6;
                pfVar9[-2] = pfVar9[-6];
                *(undefined8 *)pfVar9 = *(undefined8 *)(pfVar9 + -4);
                pfVar9 = pfVar9 + -4;
              } while (pfVar1 != param_1);
            }
            *param_1 = fVar3;
            param_1[2] = fVar4;
            param_1[3] = fVar5;
            pfVar9 = pfVar6;
          }
        }
      }
      return;
    }
    if (param_3 < 1) break;
    FUN_1802c6500(&local_28,param_1,param_2,param_4);
    pfVar6 = pfStack_20;
    pfVar9 = local_28;
    param_3 = (param_3 >> 1) + (param_3 >> 2);
    if ((longlong)((longlong)local_28 - (longlong)param_1 & 0xfffffffffffffff0U) <
        (longlong)((longlong)param_2 - (longlong)pfStack_20 & 0xfffffffffffffff0U)) {
      FUN_1802c62a0(param_1,local_28,param_3,param_4);
      pfVar9 = param_2;
      param_1 = pfVar6;
    }
    else {
      FUN_1802c62a0(pfStack_20,param_2,param_3,param_4);
    }
    uVar7 = (longlong)pfVar9 - (longlong)param_1;
    param_2 = pfVar9;
  }
  lVar10 = (longlong)param_2 - (longlong)param_1 >> 4;
  lVar8 = (longlong)param_2 - (longlong)param_1 >> 5;
  if (0 < lVar8) {
    pfVar9 = param_1 + lVar8 * 4;
    do {
      local_28 = *(float **)(pfVar9 + -4);
      pfStack_20 = *(float **)(pfVar9 + -2);
      lVar8 = lVar8 + -1;
      FUN_1802c6910(param_1,lVar8,lVar10,&local_28,param_4);
      pfVar9 = pfVar9 + -4;
    } while (0 < lVar8);
  }
  if (lVar10 < 2) {
    return;
  }
  param_2 = param_2 + -4;
  do {
    if (0x1f < (longlong)((0x10 - (longlong)param_1) + (longlong)param_2 & 0xfffffffffffffff0U)) {
      local_28 = *(float **)param_2;
      pfStack_20 = *(float **)(param_2 + 2);
      *param_2 = *param_1;
      *(undefined8 *)(param_2 + 2) = *(undefined8 *)(param_1 + 2);
      FUN_1802c6910(param_1,0,(longlong)param_2 - (longlong)param_1 >> 4,&local_28,param_4);
    }
    param_2 = param_2 + -4;
  } while (0x1f < (longlong)((0x10 - (longlong)param_1) + (longlong)param_2 & 0xfffffffffffffff0U));
  return;
}



