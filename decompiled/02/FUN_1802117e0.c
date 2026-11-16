// FUN_1802117e0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802117e0 */

undefined1 * FUN_1802117e0(longlong *param_1,undefined8 *param_2,undefined8 param_3)

{
  ulonglong uVar1;
  undefined1 (*pauVar2) [16];
  undefined1 *puVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 (*pauVar9) [16];
  longlong lVar10;
  undefined1 (*pauVar11) [16];
  undefined8 *puVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  longlong *plVar15;
  undefined1 (*pauVar16) [16];
  undefined1 (*pauVar17) [16];
  undefined1 (*pauVar18) [16];
  
  lVar4 = *param_1;
  lVar10 = param_1[1] - lVar4 >> 5;
  if (lVar10 == 0x7ffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    FUN_1801136f0();
  }
  uVar1 = lVar10 + 1;
  uVar13 = param_1[2] - lVar4 >> 5;
  if (0x7ffffffffffffff - (uVar13 >> 1) < uVar13) {
    uVar14 = 0x7ffffffffffffff;
  }
  else {
    uVar13 = (uVar13 >> 1) + uVar13;
    uVar14 = uVar1;
    if (uVar1 <= uVar13) {
      uVar14 = uVar13;
    }
    if (0x7ffffffffffffff < uVar14) {
                    /* WARNING: Subroutine does not return */
      FUN_18015bc80();
    }
  }
  pauVar11 = (undefined1 (*) [16])FUN_18015bca0(uVar14 << 5);
  puVar3 = *pauVar11 + ((longlong)param_2 - lVar4 & 0xffffffffffffffe0);
  pauVar2 = (undefined1 (*) [16])(puVar3 + 0x20);
  plVar15 = param_1;
  pauVar16 = pauVar11;
  uVar13 = uVar14;
  pauVar17 = pauVar2;
  pauVar18 = pauVar2;
  FUN_18015b360(puVar3,param_3);
  puVar5 = (undefined8 *)param_1[1];
  puVar12 = (undefined8 *)*param_1;
  pauVar9 = pauVar11;
  if (param_2 == puVar5) {
    for (; puVar12 != puVar5; puVar12 = puVar12 + 4) {
      *pauVar9 = (undefined1  [16])0x0;
      *(undefined8 *)pauVar9[1] = 0;
      *(undefined8 *)(pauVar9[1] + 8) = 0;
      uVar6 = puVar12[1];
      uVar7 = puVar12[2];
      uVar8 = puVar12[3];
      *(undefined8 *)*pauVar9 = *puVar12;
      *(undefined8 *)(*pauVar9 + 8) = uVar6;
      *(undefined8 *)pauVar9[1] = uVar7;
      *(undefined8 *)(pauVar9[1] + 8) = uVar8;
      *(undefined1 *)puVar12 = 0;
      puVar12[2] = 0;
      puVar12[3] = 0xf;
      pauVar9 = pauVar9 + 2;
    }
  }
  else {
    for (; puVar12 != param_2; puVar12 = puVar12 + 4) {
      *pauVar9 = (undefined1  [16])0x0;
      *(undefined8 *)pauVar9[1] = 0;
      *(undefined8 *)(pauVar9[1] + 8) = 0;
      uVar6 = puVar12[1];
      uVar7 = puVar12[2];
      uVar8 = puVar12[3];
      *(undefined8 *)*pauVar9 = *puVar12;
      *(undefined8 *)(*pauVar9 + 8) = uVar6;
      *(undefined8 *)pauVar9[1] = uVar7;
      *(undefined8 *)(pauVar9[1] + 8) = uVar8;
      *(undefined1 *)puVar12 = 0;
      puVar12[2] = 0;
      puVar12[3] = 0xf;
      pauVar9 = pauVar9 + 2;
    }
    puVar5 = (undefined8 *)param_1[1];
    for (; param_2 != puVar5; param_2 = param_2 + 4) {
      *pauVar2 = (undefined1  [16])0x0;
      *(undefined8 *)pauVar2[1] = 0;
      *(undefined8 *)(pauVar2[1] + 8) = 0;
      uVar6 = param_2[1];
      uVar7 = param_2[2];
      uVar8 = param_2[3];
      *(undefined8 *)*pauVar2 = *param_2;
      *(undefined8 *)(*pauVar2 + 8) = uVar6;
      *(undefined8 *)pauVar2[1] = uVar7;
      *(undefined8 *)(pauVar2[1] + 8) = uVar8;
      *(undefined1 *)param_2 = 0;
      param_2[2] = 0;
      param_2[3] = 0xf;
      pauVar2 = pauVar2 + 2;
    }
  }
  FUN_180157360(param_1,pauVar11,uVar1,uVar14,plVar15,pauVar16,uVar13,pauVar17,pauVar18);
  return puVar3;
}



