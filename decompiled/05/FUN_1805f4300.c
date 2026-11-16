// FUN_1805f4300 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805f4300 */

ulonglong FUN_1805f4300(undefined8 *param_1,longlong param_2,ulonglong *param_3,longlong *param_4,
                       longlong param_5,undefined8 *param_6,longlong param_7,undefined1 *param_8)

{
  undefined8 *puVar1;
  undefined1 uVar2;
  uint uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  undefined1 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  longlong lVar13;
  
  uVar4 = *param_3;
  puVar9 = (undefined8 *)(param_2 - 8);
  uVar5 = param_3[1];
  puVar12 = (undefined8 *)(uVar4 + (longlong)param_1);
  puVar11 = (undefined8 *)*param_4;
  uVar6 = param_3[2];
  uVar8 = uVar5 + uVar4;
  puVar1 = (undefined8 *)((longlong)param_1 + uVar8);
  lVar13 = (longlong)puVar11 + uVar4;
  if (((ulonglong)(param_2 - (longlong)param_1) < uVar4 + 8) ||
     ((ulonglong)(param_2 - (longlong)param_1) < uVar8)) {
    return 0xffffffffffffffba;
  }
  if ((ulonglong)(param_5 - (longlong)puVar11) < uVar4) {
LAB_1805f4515:
    uVar8 = 0xffffffffffffffec;
  }
  else {
    do {
      uVar7 = *puVar11;
      puVar11 = puVar11 + 1;
      *param_1 = uVar7;
      param_1 = param_1 + 1;
    } while (param_1 < puVar12);
    *param_4 = lVar13;
    puVar11 = (undefined8 *)((longlong)puVar12 - uVar6);
    if ((ulonglong)((longlong)puVar12 - (longlong)param_6) < uVar6) {
      if ((ulonglong)((longlong)puVar12 - param_7) < uVar6) goto LAB_1805f4515;
      puVar10 = (undefined1 *)
                ((longlong)((longlong)puVar12 - uVar6) + ((longlong)param_8 - (longlong)param_6));
      if (puVar10 + uVar5 <= param_8) {
        FUN_18063aed0(puVar12,puVar10,uVar5);
        return uVar8;
      }
      lVar13 = (longlong)param_8 - (longlong)puVar10;
      FUN_18063aed0(puVar12,puVar10,lVar13);
      puVar12 = (undefined8 *)((longlong)puVar12 + lVar13);
      param_3[1] = uVar5 - lVar13;
      if ((puVar9 < puVar12) || (puVar11 = param_6, uVar5 - lVar13 < 3)) {
        if (puVar12 < puVar1) {
          do {
            uVar2 = *(undefined1 *)param_6;
            param_6 = (undefined8 *)((longlong)param_6 + 1);
            *(undefined1 *)puVar12 = uVar2;
            puVar12 = (undefined8 *)((longlong)puVar12 + 1);
          } while (puVar12 < puVar1);
          return uVar8;
        }
        goto LAB_1805f4525;
      }
    }
    if (uVar6 < 8) {
      *(undefined1 *)puVar12 = *(undefined1 *)puVar11;
      *(undefined1 *)((longlong)puVar12 + 1) = *(undefined1 *)((longlong)puVar11 + 1);
      *(undefined1 *)((longlong)puVar12 + 2) = *(undefined1 *)((longlong)puVar11 + 2);
      *(undefined1 *)((longlong)puVar12 + 3) = *(undefined1 *)((longlong)puVar11 + 3);
      uVar3 = *(uint *)(&DAT_180689668 + uVar6 * 4);
      *(undefined4 *)((longlong)puVar12 + 4) = *(undefined4 *)((longlong)puVar11 + (ulonglong)uVar3)
      ;
      puVar11 = (undefined8 *)
                ((longlong)((longlong)puVar11 + (ulonglong)uVar3) -
                (longlong)*(int *)(&DAT_180689688 + uVar6 * 4));
    }
    else {
      *puVar12 = *puVar11;
    }
    puVar12 = puVar12 + 1;
    puVar11 = puVar11 + 1;
    if ((undefined8 *)(param_2 + -0xd) < puVar1) {
      if (puVar12 < puVar9) {
        lVar13 = (longlong)puVar11 - (longlong)puVar12;
        do {
          *puVar12 = *(undefined8 *)(lVar13 + (longlong)puVar12);
          puVar12 = puVar12 + 1;
        } while (puVar12 < puVar9);
        puVar11 = (undefined8 *)(lVar13 + (longlong)puVar9);
        puVar12 = puVar9;
      }
      if (puVar12 < puVar1) {
        do {
          uVar2 = *(undefined1 *)puVar11;
          puVar11 = (undefined8 *)((longlong)puVar11 + 1);
          *(undefined1 *)puVar12 = uVar2;
          puVar12 = (undefined8 *)((longlong)puVar12 + 1);
        } while (puVar12 < puVar1);
        return uVar8;
      }
    }
    else {
      puVar9 = (undefined8 *)((param_3[1] - 8) + (longlong)puVar12);
      lVar13 = (longlong)puVar11 - (longlong)puVar12;
      do {
        *puVar12 = *(undefined8 *)(lVar13 + (longlong)puVar12);
        puVar12 = puVar12 + 1;
      } while (puVar12 < puVar9);
    }
  }
LAB_1805f4525:
  return uVar8;
}



