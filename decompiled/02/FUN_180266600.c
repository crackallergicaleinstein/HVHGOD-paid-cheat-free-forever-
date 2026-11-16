// FUN_180266600 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180266600 */

undefined8 * FUN_180266600(undefined8 *param_1,undefined8 *param_2,longlong param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int *piVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  float fVar13;
  float fVar14;
  undefined8 uVar15;
  undefined1 local_60 [16];
  undefined8 local_50;
  longlong local_48;
  undefined8 *local_40;
  
  if ((param_1 != param_2) && (puVar12 = param_1 + 4, puVar12 != param_2)) {
    puVar11 = param_1 + 6;
    local_40 = param_2;
    do {
      plVar8 = param_1 + 1;
      uVar1 = *puVar12;
      uVar2 = puVar11[1];
      puVar11[1] = 0;
      uVar3 = *puVar11;
      *puVar11 = 0;
      piVar4 = (int *)puVar11[-1];
      puVar11[-1] = 0;
      local_60._8_8_ = uVar3;
      local_60._0_8_ = piVar4;
      local_48 = (longlong)*piVar4 * 0x98 + **(longlong **)(param_3 + 8);
      local_50 = uVar2;
      fVar13 = (float)FUN_18025e110(uVar3,local_48);
      uVar15 = FUN_18025e110();
      puVar6 = puVar12;
      if ((float)uVar15 <= fVar13) {
        fVar13 = (float)FUN_18025e110(uVar15,local_48);
        fVar14 = (float)FUN_18025e110();
        puVar6 = puVar11 + -6;
        puVar9 = puVar12;
        puVar10 = puVar12;
        if (fVar13 < fVar14) {
          do {
            puVar10 = puVar6;
            uVar15 = FUN_1802668f0(puVar9,puVar10);
            fVar13 = (float)FUN_18025e110(uVar15,(longlong)*piVar4 * 0x98 +
                                                 **(longlong **)(param_3 + 8));
            fVar14 = (float)FUN_18025e110();
            puVar6 = puVar10 + -4;
            puVar9 = puVar10;
          } while (fVar13 < fVar14);
        }
        *puVar10 = uVar1;
        plVar8 = puVar10 + 1;
        if (plVar8 != (longlong *)local_60) {
          lVar5 = *plVar8;
          if (lVar5 != 0) {
            lVar7 = lVar5;
            if ((0xfff < (puVar10[3] - lVar5 & 0xfffffffffffffffcU)) &&
               (lVar7 = *(longlong *)(lVar5 + -8), 0x1f < (lVar5 - lVar7) - 8U)) goto LAB_1802668d1;
            FUN_1804547d0(lVar7);
            puVar10[2] = 0;
          }
          *plVar8 = (longlong)piVar4;
          puVar10[2] = uVar3;
          puVar10[3] = uVar2;
          goto LAB_180266877;
        }
      }
      else {
        for (; puVar6 != param_1; puVar6 = puVar6 + -4) {
          FUN_1802668f0(puVar6);
        }
        *param_1 = uVar1;
        if (plVar8 != (longlong *)local_60) {
          lVar5 = *plVar8;
          if (lVar5 != 0) {
            lVar7 = lVar5;
            if ((0xfff < (param_1[3] - lVar5 & 0xfffffffffffffffcU)) &&
               (lVar7 = *(longlong *)(lVar5 + -8), 0x1f < (lVar5 - lVar7) - 8U)) {
LAB_1802668d1:
                    /* WARNING: Subroutine does not return */
              _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
            }
            FUN_1804547d0(lVar7);
            param_1[2] = 0;
          }
          *plVar8 = (longlong)piVar4;
          param_1[2] = uVar3;
          param_1[3] = uVar2;
LAB_180266877:
          local_50 = 0;
          local_60 = (undefined1  [16])0x0;
        }
      }
      FUN_180159650(local_60);
      puVar12 = puVar12 + 4;
      puVar11 = puVar11 + 4;
      param_2 = local_40;
    } while (puVar12 != local_40);
  }
  return param_2;
}



