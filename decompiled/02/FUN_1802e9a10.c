// FUN_1802e9a10 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802e9a10 */

undefined1 *
FUN_1802e9a10(longlong *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  ulonglong uVar1;
  undefined1 (*pauVar2) [16];
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 (*pauVar8) [16];
  longlong lVar9;
  undefined1 (*pauVar10) [16];
  undefined8 *puVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  undefined1 *puVar14;
  longlong *plVar15;
  undefined1 (*pauVar16) [16];
  undefined1 (*pauVar17) [16];
  undefined1 (*pauVar18) [16];
  
  lVar3 = *param_1;
  lVar9 = param_1[1] - lVar3 >> 5;
  if (lVar9 == 0x7ffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    FUN_1801136f0();
  }
  uVar1 = lVar9 + 1;
  uVar12 = param_1[2] - lVar3 >> 5;
  if (0x7ffffffffffffff - (uVar12 >> 1) < uVar12) {
    uVar13 = 0x7ffffffffffffff;
  }
  else {
    uVar12 = (uVar12 >> 1) + uVar12;
    uVar13 = uVar1;
    if (uVar1 <= uVar12) {
      uVar13 = uVar12;
    }
    if (0x7ffffffffffffff < uVar13) {
                    /* WARNING: Subroutine does not return */
      FUN_18015bc80();
    }
  }
  pauVar10 = (undefined1 (*) [16])FUN_18015bca0(uVar13 << 5);
  puVar14 = *pauVar10 + ((longlong)param_2 - lVar3 & 0xffffffffffffffe0);
  pauVar2 = (undefined1 (*) [16])(puVar14 + 0x20);
  plVar15 = param_1;
  pauVar16 = pauVar10;
  uVar12 = uVar13;
  pauVar17 = pauVar2;
  pauVar18 = pauVar2;
  FUN_1802ec710(puVar14,*param_3,*param_4);
  puVar4 = (undefined8 *)param_1[1];
  puVar11 = (undefined8 *)*param_1;
  pauVar8 = pauVar10;
  if (param_2 == puVar4) {
    for (; puVar11 != puVar4; puVar11 = puVar11 + 4) {
      *pauVar8 = (undefined1  [16])0x0;
      *(undefined8 *)pauVar8[1] = 0;
      *(undefined8 *)(pauVar8[1] + 8) = 0;
      uVar5 = puVar11[1];
      uVar6 = puVar11[2];
      uVar7 = puVar11[3];
      *(undefined8 *)*pauVar8 = *puVar11;
      *(undefined8 *)(*pauVar8 + 8) = uVar5;
      *(undefined8 *)pauVar8[1] = uVar6;
      *(undefined8 *)(pauVar8[1] + 8) = uVar7;
      *(undefined1 *)puVar11 = 0;
      puVar11[2] = 0;
      puVar11[3] = 0xf;
      pauVar8 = pauVar8 + 2;
    }
  }
  else {
    for (; puVar11 != param_2; puVar11 = puVar11 + 4) {
      *pauVar8 = (undefined1  [16])0x0;
      *(undefined8 *)pauVar8[1] = 0;
      *(undefined8 *)(pauVar8[1] + 8) = 0;
      uVar5 = puVar11[1];
      uVar6 = puVar11[2];
      uVar7 = puVar11[3];
      *(undefined8 *)*pauVar8 = *puVar11;
      *(undefined8 *)(*pauVar8 + 8) = uVar5;
      *(undefined8 *)pauVar8[1] = uVar6;
      *(undefined8 *)(pauVar8[1] + 8) = uVar7;
      *(undefined1 *)puVar11 = 0;
      puVar11[2] = 0;
      puVar11[3] = 0xf;
      pauVar8 = pauVar8 + 2;
    }
    puVar4 = (undefined8 *)param_1[1];
    for (; param_2 != puVar4; param_2 = param_2 + 4) {
      *pauVar2 = (undefined1  [16])0x0;
      *(undefined8 *)pauVar2[1] = 0;
      *(undefined8 *)(pauVar2[1] + 8) = 0;
      uVar5 = param_2[1];
      uVar6 = param_2[2];
      uVar7 = param_2[3];
      *(undefined8 *)*pauVar2 = *param_2;
      *(undefined8 *)(*pauVar2 + 8) = uVar5;
      *(undefined8 *)pauVar2[1] = uVar6;
      *(undefined8 *)(pauVar2[1] + 8) = uVar7;
      *(undefined1 *)param_2 = 0;
      param_2[2] = 0;
      param_2[3] = 0xf;
      pauVar2 = pauVar2 + 2;
    }
  }
  FUN_180157360(param_1,pauVar10,uVar1,uVar13,puVar14,plVar15,pauVar16,uVar12,pauVar17,pauVar18);
  return puVar14;
}



