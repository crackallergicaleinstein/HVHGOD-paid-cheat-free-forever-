// FUN_180269700 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180269700 */

undefined8 *
FUN_180269700(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,longlong param_4,
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
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  longlong lVar15;
  
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
          puVar13 = param_2;
          puVar14 = param_1;
          do {
            puVar12 = puVar13 + -8;
            if (puVar14 == puVar12) break;
            uVar1 = *puVar14;
            uVar2 = puVar14[1];
            uVar3 = puVar14[2];
            uVar4 = puVar14[3];
            uVar5 = puVar14[4];
            uVar6 = puVar14[5];
            uVar7 = puVar14[6];
            uVar8 = puVar14[7];
            uVar9 = puVar13[-7];
            uVar10 = puVar13[-6];
            uVar11 = puVar13[-5];
            *puVar14 = *puVar12;
            puVar14[1] = uVar9;
            puVar14[2] = uVar10;
            puVar14[3] = uVar11;
            uVar9 = puVar13[-3];
            uVar10 = puVar13[-2];
            uVar11 = puVar13[-1];
            puVar14[4] = puVar13[-4];
            puVar14[5] = uVar9;
            puVar14[6] = uVar10;
            puVar14[7] = uVar11;
            puVar14 = puVar14 + 8;
            *puVar12 = uVar1;
            puVar13[-7] = uVar2;
            puVar13[-6] = uVar3;
            puVar13[-5] = uVar4;
            puVar13[-4] = uVar5;
            puVar13[-3] = uVar6;
            puVar13[-2] = uVar7;
            puVar13[-1] = uVar8;
            puVar13 = puVar12;
          } while (puVar14 != puVar12);
          puVar13 = param_3;
          puVar14 = param_2;
          do {
            puVar12 = puVar13 + -8;
            if (puVar14 == puVar12) break;
            uVar1 = *puVar14;
            uVar2 = puVar14[1];
            uVar3 = puVar14[2];
            uVar4 = puVar14[3];
            uVar5 = puVar14[4];
            uVar6 = puVar14[5];
            uVar7 = puVar14[6];
            uVar8 = puVar14[7];
            uVar9 = puVar13[-7];
            uVar10 = puVar13[-6];
            uVar11 = puVar13[-5];
            *puVar14 = *puVar12;
            puVar14[1] = uVar9;
            puVar14[2] = uVar10;
            puVar14[3] = uVar11;
            uVar9 = puVar13[-3];
            uVar10 = puVar13[-2];
            uVar11 = puVar13[-1];
            puVar14[4] = puVar13[-4];
            puVar14[5] = uVar9;
            puVar14[6] = uVar10;
            puVar14[7] = uVar11;
            puVar14 = puVar14 + 8;
            *puVar12 = uVar1;
            puVar13[-7] = uVar2;
            puVar13[-6] = uVar3;
            puVar13[-5] = uVar4;
            puVar13[-4] = uVar5;
            puVar13[-3] = uVar6;
            puVar13[-2] = uVar7;
            puVar13[-1] = uVar8;
            puVar13 = puVar12;
          } while (puVar14 != puVar12);
          puVar13 = param_3;
          puVar14 = param_1;
          if (param_1 != param_3) {
            do {
              puVar12 = puVar13 + -8;
              if (puVar14 == puVar12) break;
              uVar1 = *puVar14;
              uVar2 = puVar14[1];
              uVar3 = puVar14[2];
              uVar4 = puVar14[3];
              uVar5 = puVar14[4];
              uVar6 = puVar14[5];
              uVar7 = puVar14[6];
              uVar8 = puVar14[7];
              uVar9 = puVar13[-7];
              uVar10 = puVar13[-6];
              uVar11 = puVar13[-5];
              *puVar14 = *puVar12;
              puVar14[1] = uVar9;
              puVar14[2] = uVar10;
              puVar14[3] = uVar11;
              uVar9 = puVar13[-3];
              uVar10 = puVar13[-2];
              uVar11 = puVar13[-1];
              puVar14[4] = puVar13[-4];
              puVar14[5] = uVar9;
              puVar14[6] = uVar10;
              puVar14[7] = uVar11;
              puVar14 = puVar14 + 8;
              *puVar12 = uVar1;
              puVar13[-7] = uVar2;
              puVar13[-6] = uVar3;
              puVar13[-5] = uVar4;
              puVar13[-4] = uVar5;
              puVar13[-3] = uVar6;
              puVar13[-2] = uVar7;
              puVar13[-1] = uVar8;
              puVar13 = puVar12;
            } while (puVar14 != puVar12);
          }
          param_3 = (undefined8 *)
                    (((longlong)param_3 - (longlong)param_2 & 0xffffffffffffffc0U) +
                    (longlong)param_1);
        }
      }
    }
    else {
      lVar15 = (longlong)param_3 - (longlong)param_2;
      FUN_18063aed0(param_6,param_2,lVar15);
      FUN_18063aed0((longlong)param_3 - ((longlong)param_2 - (longlong)param_1),param_1,
                    (longlong)param_2 - (longlong)param_1);
      FUN_18063aed0(param_1,param_6,lVar15);
      param_3 = (undefined8 *)(lVar15 + (longlong)param_1);
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



