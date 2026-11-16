// FUN_1805ed9c0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805ed9c0 */

ulonglong FUN_1805ed9c0(undefined8 *param_1,undefined8 *param_2,ulonglong *param_3,
                       ulonglong *param_4,ulonglong param_5,undefined8 *param_6,longlong param_7,
                       undefined1 *param_8)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  undefined1 uVar3;
  int iVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  undefined8 *puVar10;
  undefined1 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  longlong lVar14;
  
  uVar5 = *param_3;
  puVar10 = param_2 + -1;
  uVar6 = param_3[1];
  puVar13 = (undefined8 *)(uVar5 + (longlong)param_1);
  uVar9 = uVar6 + uVar5;
  puVar12 = (undefined8 *)*param_4;
  puVar1 = (undefined8 *)(uVar9 + (longlong)param_1);
  uVar7 = param_3[2];
  uVar2 = (longlong)puVar12 + uVar5;
  if ((ulonglong)((longlong)param_2 - (longlong)param_1) < uVar9) {
LAB_1805edbf0:
    uVar9 = 0xffffffffffffffba;
  }
  else {
    if (uVar5 <= param_5 - (longlong)puVar12) {
      if ((puVar10 < puVar13) || (param_2 < puVar1)) goto LAB_1805edbf0;
      if (uVar2 <= param_5) {
        do {
          uVar8 = *puVar12;
          puVar12 = puVar12 + 1;
          *param_1 = uVar8;
          param_1 = param_1 + 1;
        } while (param_1 < puVar13);
        *param_4 = uVar2;
        puVar12 = (undefined8 *)((longlong)puVar13 - uVar7);
        if (uVar7 <= (ulonglong)((longlong)puVar13 - (longlong)param_6)) {
LAB_1805edb1b:
          if (uVar7 < 8) {
            *(undefined1 *)puVar13 = *(undefined1 *)puVar12;
            *(undefined1 *)((longlong)puVar13 + 1) = *(undefined1 *)((longlong)puVar12 + 1);
            *(undefined1 *)((longlong)puVar13 + 2) = *(undefined1 *)((longlong)puVar12 + 2);
            *(undefined1 *)((longlong)puVar13 + 3) = *(undefined1 *)((longlong)puVar12 + 3);
            iVar4 = *(int *)(&DAT_180688940 + uVar7 * 4);
            *(undefined4 *)((longlong)puVar13 + 4) =
                 *(undefined4 *)((longlong)puVar12 + (longlong)iVar4);
            puVar12 = (undefined8 *)
                      (((longlong)puVar12 + (longlong)iVar4) -
                      (longlong)*(int *)(&DAT_180688960 + uVar7 * 4));
          }
          else {
            *puVar13 = *puVar12;
          }
          puVar13 = puVar13 + 1;
          puVar12 = puVar12 + 1;
          if ((undefined8 *)((longlong)param_2 - 0xcU) < puVar1) {
            if (puVar13 < puVar10) {
              lVar14 = (longlong)puVar12 - (longlong)puVar13;
              do {
                *puVar13 = *(undefined8 *)(lVar14 + (longlong)puVar13);
                puVar13 = puVar13 + 1;
              } while (puVar13 < puVar10);
              puVar12 = (undefined8 *)(lVar14 + (longlong)puVar10);
              puVar13 = puVar10;
            }
            if (puVar13 < puVar1) {
              do {
                uVar3 = *(undefined1 *)puVar12;
                puVar12 = (undefined8 *)((longlong)puVar12 + 1);
                *(undefined1 *)puVar13 = uVar3;
                puVar13 = (undefined8 *)((longlong)puVar13 + 1);
              } while (puVar13 < puVar1);
              return uVar9;
            }
          }
          else {
            puVar10 = (undefined8 *)((param_3[1] - 8) + (longlong)puVar13);
            lVar14 = (longlong)puVar12 - (longlong)puVar13;
            do {
              *puVar13 = *(undefined8 *)(lVar14 + (longlong)puVar13);
              puVar13 = puVar13 + 1;
            } while (puVar13 < puVar10);
          }
          return uVar9;
        }
        if (uVar7 <= (ulonglong)((longlong)puVar13 - param_7)) {
          puVar11 = (undefined1 *)
                    ((longlong)((longlong)puVar13 - uVar7) + ((longlong)param_8 - (longlong)param_6)
                    );
          if (puVar11 + uVar6 <= param_8) {
            FUN_18063aed0(puVar13,puVar11,uVar6);
            return uVar9;
          }
          lVar14 = (longlong)param_8 - (longlong)puVar11;
          FUN_18063aed0(puVar13,puVar11,lVar14);
          puVar13 = (undefined8 *)((longlong)puVar13 + lVar14);
          param_3[1] = uVar6 - lVar14;
          if ((puVar10 < puVar13) || (puVar12 = param_6, uVar6 - lVar14 < 4)) {
            if (puVar1 <= puVar13) {
              return uVar9;
            }
            do {
              uVar3 = *(undefined1 *)param_6;
              param_6 = (undefined8 *)((longlong)param_6 + 1);
              *(undefined1 *)puVar13 = uVar3;
              puVar13 = (undefined8 *)((longlong)puVar13 + 1);
            } while (puVar13 < puVar1);
            return uVar9;
          }
          goto LAB_1805edb1b;
        }
      }
    }
    uVar9 = 0xffffffffffffffec;
  }
  return uVar9;
}



