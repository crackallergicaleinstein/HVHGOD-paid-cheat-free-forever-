// FUN_180299fb0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180299fb0 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

undefined8 * FUN_180299fb0(longlong *param_1,undefined8 *param_2,undefined8 *param_3)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  int *piVar3;
  ulonglong uVar4;
  int iVar5;
  longlong *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  longlong lVar10;
  undefined8 *puVar11;
  ulonglong uVar12;
  undefined8 *puVar13;
  longlong lVar14;
  undefined8 *puVar15;
  longlong lVar16;
  undefined8 *puVar17;
  
  lVar10 = *param_1;
  lVar14 = ((longlong)param_2 - lVar10) / 6 + ((longlong)param_2 - lVar10 >> 0x3f);
  lVar16 = (param_1[1] - lVar10) / 0x30;
  if (lVar16 == 0x555555555555555) {
                    /* WARNING: Subroutine does not return */
    FUN_1801136f0();
  }
  uVar1 = lVar16 + 1;
  uVar4 = (param_1[2] - lVar10) / 0x30;
  if (0x555555555555555 - (uVar4 >> 1) < uVar4) {
    uVar12 = 0x555555555555555;
  }
  else {
    uVar4 = (uVar4 >> 1) + uVar4;
    uVar12 = uVar1;
    if (uVar1 <= uVar4) {
      uVar12 = uVar4;
    }
    if (0x555555555555555 < uVar12) {
                    /* WARNING: Subroutine does not return */
      FUN_18015bc80();
    }
  }
  lVar10 = FUN_18015bca0(uVar12 * 0x30);
  puVar17 = (undefined8 *)(((lVar14 >> 3) - (lVar14 >> 0x3f)) * 0x30 + lVar10);
  uVar7 = param_3[1];
  uVar8 = param_3[2];
  uVar9 = param_3[3];
  *puVar17 = *param_3;
  puVar17[1] = uVar7;
  puVar17[2] = uVar8;
  puVar17[3] = uVar9;
  puVar17[4] = 0;
  puVar17[5] = 0;
  puVar17[4] = param_3[4];
  puVar17[5] = param_3[5];
  param_3[4] = 0;
  param_3[5] = 0;
  puVar15 = (undefined8 *)param_1[1];
  puVar11 = (undefined8 *)*param_1;
  if (param_2 == puVar15) {
    if (puVar11 != puVar15) {
      puVar13 = (undefined8 *)(lVar10 + 0x28);
      do {
        uVar7 = puVar11[1];
        uVar8 = puVar11[2];
        uVar9 = puVar11[3];
        puVar13[-5] = *puVar11;
        puVar13[-4] = uVar7;
        puVar13[-3] = uVar8;
        puVar13[-2] = uVar9;
        puVar13[-1] = 0;
        *puVar13 = 0;
        puVar13[-1] = puVar11[4];
        *puVar13 = puVar11[5];
        puVar11[4] = 0;
        puVar11[5] = 0;
        puVar13 = puVar13 + 6;
        puVar11 = puVar11 + 6;
      } while (puVar11 != puVar15);
    }
  }
  else {
    if (puVar11 != param_2) {
      puVar15 = (undefined8 *)(lVar10 + 0x28);
      do {
        uVar7 = puVar11[1];
        uVar8 = puVar11[2];
        uVar9 = puVar11[3];
        puVar15[-5] = *puVar11;
        puVar15[-4] = uVar7;
        puVar15[-3] = uVar8;
        puVar15[-2] = uVar9;
        puVar15[-1] = 0;
        *puVar15 = 0;
        puVar15[-1] = puVar11[4];
        *puVar15 = puVar11[5];
        puVar11[4] = 0;
        puVar11[5] = 0;
        puVar15 = puVar15 + 6;
        puVar11 = puVar11 + 6;
      } while (puVar11 != param_2);
    }
    puVar15 = (undefined8 *)param_1[1];
    if (param_2 != puVar15) {
      puVar13 = param_2 + 5;
      puVar11 = puVar17;
      do {
        uVar7 = puVar13[-4];
        uVar8 = puVar13[-3];
        uVar9 = puVar13[-2];
        puVar11[6] = puVar13[-5];
        puVar11[7] = uVar7;
        puVar11[8] = uVar8;
        puVar11[9] = uVar9;
        puVar11[10] = 0;
        puVar11[0xb] = 0;
        puVar11[10] = puVar13[-1];
        puVar11[0xb] = *puVar13;
        puVar13[-1] = 0;
        *puVar13 = 0;
        puVar2 = puVar13 + 1;
        puVar13 = puVar13 + 6;
        puVar11 = puVar11 + 6;
      } while (puVar2 != puVar15);
    }
  }
  lVar16 = *param_1;
  if (lVar16 != 0) {
    lVar14 = param_1[1];
    for (; lVar16 != lVar14; lVar16 = lVar16 + 0x30) {
      plVar6 = *(longlong **)(lVar16 + 0x28);
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        piVar3 = (int *)((longlong)plVar6 + 0xc);
        iVar5 = *piVar3;
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          (**(code **)(*plVar6 + 8))();
        }
      }
    }
    lVar16 = *param_1;
    lVar14 = lVar16;
    if ((0xfff < (ulonglong)(((param_1[2] - lVar16) / 0x30) * 0x30)) &&
       (lVar14 = *(longlong *)(lVar16 + -8), 0x1f < (lVar16 - lVar14) - 8U)) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    FUN_1804547d0(lVar14);
  }
  *param_1 = lVar10;
  param_1[1] = uVar1 * 0x30 + lVar10;
  param_1[2] = uVar12 * 0x30 + lVar10;
  return puVar17;
}



