// FUN_180339310 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180339310 */

undefined8 *
FUN_180339310(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,longlong param_4,
             longlong param_5,undefined8 param_6,longlong param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  longlong lVar12;
  
  if (param_4 == 0) {
    return param_3;
  }
  if (param_5 == 0) {
    return param_1;
  }
  if ((param_5 < param_4) || (param_7 < param_4)) {
    if (param_7 < param_5) {
      if (param_1 != param_2) {
        if (param_2 == param_3) {
          param_3 = param_1;
        }
        else {
          puVar10 = param_2;
          puVar11 = param_1;
          do {
            puVar9 = puVar10 + -5;
            if (puVar11 == puVar9) break;
            uVar2 = *puVar11;
            uVar3 = puVar11[1];
            uVar4 = puVar11[2];
            uVar5 = puVar11[3];
            uVar1 = puVar11[4];
            uVar6 = puVar10[-4];
            uVar7 = puVar10[-3];
            uVar8 = puVar10[-2];
            *puVar11 = *puVar9;
            puVar11[1] = uVar6;
            puVar11[2] = uVar7;
            puVar11[3] = uVar8;
            puVar11[4] = puVar10[-1];
            puVar11 = puVar11 + 5;
            *puVar9 = uVar2;
            puVar10[-4] = uVar3;
            puVar10[-3] = uVar4;
            puVar10[-2] = uVar5;
            puVar10[-1] = uVar1;
            puVar10 = puVar9;
          } while (puVar11 != puVar9);
          puVar10 = param_3;
          puVar11 = param_2;
          do {
            puVar9 = puVar10 + -5;
            if (puVar11 == puVar9) break;
            uVar2 = *puVar11;
            uVar3 = puVar11[1];
            uVar4 = puVar11[2];
            uVar5 = puVar11[3];
            uVar1 = puVar11[4];
            uVar6 = puVar10[-4];
            uVar7 = puVar10[-3];
            uVar8 = puVar10[-2];
            *puVar11 = *puVar9;
            puVar11[1] = uVar6;
            puVar11[2] = uVar7;
            puVar11[3] = uVar8;
            puVar11[4] = puVar10[-1];
            puVar11 = puVar11 + 5;
            *puVar9 = uVar2;
            puVar10[-4] = uVar3;
            puVar10[-3] = uVar4;
            puVar10[-2] = uVar5;
            puVar10[-1] = uVar1;
            puVar10 = puVar9;
          } while (puVar11 != puVar9);
          puVar10 = param_3;
          puVar11 = param_1;
          if (param_1 != param_3) {
            do {
              puVar9 = puVar10 + -5;
              if (puVar11 == puVar9) break;
              uVar2 = *puVar11;
              uVar3 = puVar11[1];
              uVar4 = puVar11[2];
              uVar5 = puVar11[3];
              uVar1 = puVar11[4];
              uVar6 = puVar10[-4];
              uVar7 = puVar10[-3];
              uVar8 = puVar10[-2];
              *puVar11 = *puVar9;
              puVar11[1] = uVar6;
              puVar11[2] = uVar7;
              puVar11[3] = uVar8;
              puVar11[4] = puVar10[-1];
              puVar11 = puVar11 + 5;
              *puVar9 = uVar2;
              puVar10[-4] = uVar3;
              puVar10[-3] = uVar4;
              puVar10[-2] = uVar5;
              puVar10[-1] = uVar1;
              puVar10 = puVar9;
            } while (puVar11 != puVar9);
          }
          param_3 = param_1 + (((longlong)param_3 - (longlong)param_2) / 0x28) * 5;
        }
      }
    }
    else {
      lVar12 = (longlong)param_3 - (longlong)param_2;
      FUN_18063aed0(param_6,param_2,lVar12);
      FUN_18063aed0((longlong)param_3 - ((longlong)param_2 - (longlong)param_1),param_1,
                    (longlong)param_2 - (longlong)param_1);
      FUN_18063aed0(param_1,param_6,lVar12);
      param_3 = (undefined8 *)(lVar12 + (longlong)param_1);
    }
  }
  else {
    FUN_18063aed0(param_6,param_1,(longlong)param_2 - (longlong)param_1);
    FUN_18063aed0(param_1,param_2,(longlong)param_3 - (longlong)param_2);
    param_3 = (undefined8 *)(((longlong)param_3 - (longlong)param_2) + (longlong)param_1);
    FUN_18063aed0(param_3,param_6,(longlong)param_2 - (longlong)param_1);
  }
  return param_3;
}



