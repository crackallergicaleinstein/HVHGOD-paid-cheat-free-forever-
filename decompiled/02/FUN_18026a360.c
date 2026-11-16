// FUN_18026a360 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18026a360 */

void FUN_18026a360(float *param_1,float *param_2,float *param_3,longlong param_4,longlong param_5,
                  float *param_6,longlong param_7,undefined1 param_8)

{
  float *pfVar1;
  undefined8 *puVar2;
  float *pfVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  float *pfVar7;
  float *pfVar8;
  longlong lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  if ((param_4 <= param_5) && (param_4 <= param_7)) {
    lVar6 = (longlong)param_2 - (longlong)param_1;
    FUN_18063aed0(param_6,param_1,lVar6);
    uVar10 = *(undefined8 *)(param_2 + 2);
    pfVar8 = (float *)((longlong)param_6 + lVar6 + -0x10);
    *(undefined8 *)param_1 = *(undefined8 *)param_2;
    *(undefined8 *)(param_1 + 2) = uVar10;
    param_2 = param_2 + 4;
    pfVar3 = param_1 + 4;
    pfVar7 = param_6;
    do {
      pfVar1 = pfVar3 + 4;
      if (*pfVar7 <= *param_2) {
        uVar10 = *(undefined8 *)pfVar7;
        uVar11 = *(undefined8 *)(pfVar7 + 2);
        pfVar7 = pfVar7 + 4;
        *(undefined8 *)pfVar3 = uVar10;
        *(undefined8 *)(pfVar3 + 2) = uVar11;
        if (pfVar7 == pfVar8) {
          uVar10 = *(undefined8 *)pfVar8;
          uVar11 = *(undefined8 *)((longlong)param_6 + lVar6 + -8);
          FUN_18063aed0(pfVar1,param_2,(longlong)param_3 - (longlong)param_2);
          puVar2 = (undefined8 *)(((longlong)param_3 - (longlong)param_2) + (longlong)pfVar1);
          *puVar2 = uVar10;
          puVar2[1] = uVar11;
          return;
        }
      }
      else {
        uVar10 = *(undefined8 *)param_2;
        uVar11 = *(undefined8 *)(param_2 + 2);
        param_2 = param_2 + 4;
        *(undefined8 *)pfVar3 = uVar10;
        *(undefined8 *)(pfVar3 + 2) = uVar11;
        if (param_2 == param_3) {
          FUN_18063aed0(pfVar1,pfVar7,(longlong)param_6 + (lVar6 - (longlong)pfVar7));
          return;
        }
      }
      pfVar3 = pfVar1;
    } while( true );
  }
  if (param_7 < param_5) {
    if (param_5 < param_4) {
      lVar6 = param_5 >> 1;
      uVar4 = (longlong)param_2 - (longlong)param_1 >> 4;
      pfVar3 = param_2 + lVar6 * 4;
      pfVar8 = param_1;
      if (0 < (longlong)uVar4) {
        do {
          uVar5 = uVar4 >> 1;
          if (pfVar8[uVar5 * 4] <= *pfVar3) {
            pfVar8 = pfVar8 + uVar5 * 4 + 4;
            uVar5 = uVar4 + (-1 - uVar5);
          }
          uVar4 = uVar5;
        } while (0 < (longlong)uVar5);
      }
      lVar9 = (longlong)pfVar8 - (longlong)param_1 >> 4;
    }
    else {
      lVar9 = param_4 >> 1;
      uVar4 = (longlong)param_3 - (longlong)param_2 >> 4;
      pfVar8 = param_1 + lVar9 * 4;
      pfVar3 = param_2;
      if (0 < (longlong)uVar4) {
        do {
          uVar5 = uVar4 >> 1;
          if (pfVar3[uVar5 * 4] < *pfVar8) {
            pfVar3 = pfVar3 + uVar5 * 4 + 4;
            uVar5 = uVar4 + (-1 - uVar5);
          }
          uVar4 = uVar5;
        } while (0 < (longlong)uVar5);
      }
      lVar6 = (longlong)pfVar3 - (longlong)param_2 >> 4;
    }
    FUN_18026b190(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,pfVar8,pfVar3,
                  lVar9,lVar6);
    return;
  }
  FUN_18063aed0(param_6,param_2,(longlong)param_3 - (longlong)param_2);
  uVar10 = *(undefined8 *)(param_2 + -2);
  *(undefined8 *)(param_3 + -4) = *(undefined8 *)(param_2 + -4);
  *(undefined8 *)(param_3 + -2) = uVar10;
  pfVar3 = (float *)((longlong)param_6 + ((longlong)param_3 - (longlong)param_2) + -0x10);
  param_2 = param_2 + -8;
  pfVar8 = param_3 + -4;
  while( true ) {
    while( true ) {
      pfVar7 = pfVar8;
      pfVar8 = pfVar7 + -4;
      if (*pfVar3 < *param_2) break;
      uVar10 = *(undefined8 *)pfVar3;
      uVar11 = *(undefined8 *)(pfVar3 + 2);
      pfVar3 = pfVar3 + -4;
      *(undefined8 *)pfVar8 = uVar10;
      *(undefined8 *)(pfVar7 + -2) = uVar11;
      if (param_6 == pfVar3) {
        uVar10 = *(undefined8 *)(param_2 + 2);
        *(undefined8 *)(pfVar7 + -8) = *(undefined8 *)param_2;
        *(undefined8 *)(pfVar7 + -6) = uVar10;
        FUN_18063aed0((longlong)(pfVar7 + -8) - ((longlong)param_2 - (longlong)param_1),param_1);
        uVar10 = *(undefined8 *)(param_6 + 2);
        *(undefined8 *)param_1 = *(undefined8 *)param_6;
        *(undefined8 *)(param_1 + 2) = uVar10;
        return;
      }
    }
    uVar10 = *(undefined8 *)(param_2 + 2);
    *(undefined8 *)pfVar8 = *(undefined8 *)param_2;
    *(undefined8 *)(pfVar7 + -2) = uVar10;
    if (param_1 == param_2) break;
    param_2 = param_2 + -4;
  }
  uVar10 = *(undefined8 *)(pfVar3 + 2);
  *(undefined8 *)(pfVar7 + -8) = *(undefined8 *)pfVar3;
  *(undefined8 *)(pfVar7 + -6) = uVar10;
  FUN_18063aed0((longlong)(pfVar7 + -8) - ((longlong)pfVar3 - (longlong)param_6),param_6,
                (longlong)pfVar3 - (longlong)param_6);
  return;
}



