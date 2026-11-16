// FUN_180289b90 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180289b90 */

undefined1 (*) [16] FUN_180289b90(longlong *param_1,undefined8 *param_2,undefined8 *param_3)

{
  ulonglong uVar1;
  undefined1 (*pauVar2) [16];
  ulonglong uVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 (*pauVar8) [16];
  longlong lVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  ulonglong uVar13;
  undefined1 (*pauVar14) [16];
  
  lVar4 = *param_1;
  lVar9 = (param_1[1] - lVar4) / 0x28;
  if (lVar9 == 0x666666666666666) {
                    /* WARNING: Subroutine does not return */
    FUN_1801136f0();
  }
  uVar1 = lVar9 + 1;
  uVar3 = (param_1[2] - lVar4) / 0x28;
  if (0x666666666666666 - (uVar3 >> 1) < uVar3) {
    uVar13 = 0x666666666666666;
  }
  else {
    uVar3 = (uVar3 >> 1) + uVar3;
    uVar13 = uVar1;
    if (uVar1 <= uVar3) {
      uVar13 = uVar3;
    }
    if (0x666666666666666 < uVar13) {
                    /* WARNING: Subroutine does not return */
      FUN_18015bc80();
    }
  }
  lVar9 = FUN_18015bca0(uVar13 * 0x28);
  pauVar2 = (undefined1 (*) [16])(lVar9 + (((longlong)param_2 - lVar4) / 0x28) * 0x28);
  *pauVar2 = (undefined1  [16])0x0;
  *(undefined8 *)pauVar2[1] = 0;
  *(undefined8 *)(pauVar2[1] + 8) = 0;
  uVar5 = param_3[1];
  uVar6 = param_3[2];
  uVar7 = param_3[3];
  *(undefined8 *)*pauVar2 = *param_3;
  *(undefined8 *)(*pauVar2 + 8) = uVar5;
  *(undefined8 *)pauVar2[1] = uVar6;
  *(undefined8 *)(pauVar2[1] + 8) = uVar7;
  *(undefined1 *)param_3 = 0;
  param_3[2] = 0;
  param_3[3] = 0xf;
  *(undefined8 *)pauVar2[2] = param_3[4];
  puVar12 = (undefined8 *)param_1[1];
  puVar10 = (undefined8 *)*param_1;
  if (param_2 == puVar12) {
    if (puVar10 != puVar12) {
      puVar11 = (undefined8 *)(lVar9 + 0x18);
      do {
        *(undefined1 (*) [16])(puVar11 + -3) = (undefined1  [16])0x0;
        puVar11[-1] = 0;
        *puVar11 = 0;
        uVar5 = puVar10[1];
        uVar6 = puVar10[2];
        uVar7 = puVar10[3];
        puVar11[-3] = *puVar10;
        puVar11[-2] = uVar5;
        puVar11[-1] = uVar6;
        *puVar11 = uVar7;
        *(undefined1 *)puVar10 = 0;
        puVar10[2] = 0;
        puVar10[3] = 0xf;
        puVar11[1] = puVar10[4];
        puVar11 = puVar11 + 5;
        puVar10 = puVar10 + 5;
      } while (puVar10 != puVar12);
    }
  }
  else {
    if (puVar10 != param_2) {
      puVar12 = (undefined8 *)(lVar9 + 0x18);
      do {
        *(undefined1 (*) [16])(puVar12 + -3) = (undefined1  [16])0x0;
        puVar12[-1] = 0;
        *puVar12 = 0;
        uVar5 = puVar10[1];
        uVar6 = puVar10[2];
        uVar7 = puVar10[3];
        puVar12[-3] = *puVar10;
        puVar12[-2] = uVar5;
        puVar12[-1] = uVar6;
        *puVar12 = uVar7;
        *(undefined1 *)puVar10 = 0;
        puVar10[2] = 0;
        puVar10[3] = 0xf;
        puVar12[1] = puVar10[4];
        puVar12 = puVar12 + 5;
        puVar10 = puVar10 + 5;
      } while (puVar10 != param_2);
    }
    puVar12 = (undefined8 *)param_1[1];
    pauVar8 = pauVar2;
    for (; param_2 != puVar12; param_2 = param_2 + 5) {
      pauVar14 = (undefined1 (*) [16])(pauVar8[2] + 8);
      *pauVar14 = (undefined1  [16])0x0;
      *(undefined8 *)(pauVar8[3] + 8) = 0;
      *(undefined8 *)pauVar8[4] = 0;
      uVar5 = param_2[1];
      uVar6 = param_2[2];
      uVar7 = param_2[3];
      *(undefined8 *)*pauVar14 = *param_2;
      *(undefined8 *)pauVar8[3] = uVar5;
      *(undefined8 *)(pauVar8[3] + 8) = uVar6;
      *(undefined8 *)pauVar8[4] = uVar7;
      *(undefined1 *)param_2 = 0;
      param_2[2] = 0;
      param_2[3] = 0xf;
      *(undefined8 *)(pauVar8[4] + 8) = param_2[4];
      pauVar8 = pauVar14;
    }
  }
  FUN_180289eb0(param_1,lVar9,uVar1,uVar13);
  return pauVar2;
}



