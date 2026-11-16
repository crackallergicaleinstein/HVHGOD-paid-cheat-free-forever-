// FUN_180494440 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180494440 */

undefined1 (*) [16]
FUN_180494440(undefined8 param_1,undefined8 *param_2,longlong *param_3,longlong *param_4)

{
  ulonglong uVar1;
  undefined1 (*pauVar2) [16];
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 (*pauVar7) [16];
  undefined1 (*pauVar8) [16];
  undefined8 *puVar9;
  undefined8 *puVar10;
  longlong lVar11;
  undefined1 (*pauVar12) [16];
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  undefined8 *puVar16;
  undefined1 (*pauVar17) [16];
  undefined1 (*pauVar18) [16];
  undefined1 (*pauVar19) [16];
  
  uVar15 = (longlong)param_2 - (longlong)DAT_180c62d18;
  lVar11 = (longlong)DAT_180c62d20 - (longlong)DAT_180c62d18 >> 5;
  if (lVar11 == 0x7ffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    FUN_1801136f0();
  }
  uVar1 = lVar11 + 1;
  uVar13 = DAT_180c62d28 - (longlong)DAT_180c62d18 >> 5;
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
  pauVar12 = (undefined1 (*) [16])FUN_18015bca0(uVar14 << 5);
  pauVar2 = (undefined1 (*) [16])(*pauVar12 + (uVar15 & 0xffffffffffffffe0));
  pauVar7 = pauVar2 + 2;
  puVar16 = &DAT_180c62d18;
  lVar11 = *param_4;
  lVar3 = *param_3;
  *pauVar2 = (undefined1  [16])0x0;
  *(undefined8 *)pauVar2[1] = 0;
  *(undefined8 *)(pauVar2[1] + 8) = 0;
  pauVar17 = pauVar12;
  uVar15 = uVar14;
  pauVar18 = pauVar7;
  pauVar19 = pauVar7;
  if (lVar3 == lVar11) {
    *(undefined8 *)(pauVar2[1] + 8) = 0xf;
    (*pauVar2)[0] = 0;
  }
  else {
    FUN_18015ba30(pauVar2,lVar3,lVar11 - lVar3);
  }
  puVar10 = DAT_180c62d20;
  pauVar8 = pauVar12;
  puVar9 = DAT_180c62d18;
  if (param_2 == DAT_180c62d20) {
    for (; puVar9 != puVar10; puVar9 = puVar9 + 4) {
      *pauVar8 = (undefined1  [16])0x0;
      *(undefined8 *)pauVar8[1] = 0;
      *(undefined8 *)(pauVar8[1] + 8) = 0;
      uVar4 = puVar9[1];
      uVar5 = puVar9[2];
      uVar6 = puVar9[3];
      *(undefined8 *)*pauVar8 = *puVar9;
      *(undefined8 *)(*pauVar8 + 8) = uVar4;
      *(undefined8 *)pauVar8[1] = uVar5;
      *(undefined8 *)(pauVar8[1] + 8) = uVar6;
      *(undefined1 *)puVar9 = 0;
      puVar9[2] = 0;
      puVar9[3] = 0xf;
      pauVar8 = pauVar8 + 2;
    }
  }
  else {
    for (; DAT_180c62d20 = puVar10, puVar9 != param_2; puVar9 = puVar9 + 4) {
      *pauVar8 = (undefined1  [16])0x0;
      *(undefined8 *)pauVar8[1] = 0;
      *(undefined8 *)(pauVar8[1] + 8) = 0;
      uVar4 = puVar9[1];
      uVar5 = puVar9[2];
      uVar6 = puVar9[3];
      *(undefined8 *)*pauVar8 = *puVar9;
      *(undefined8 *)(*pauVar8 + 8) = uVar4;
      *(undefined8 *)pauVar8[1] = uVar5;
      *(undefined8 *)(pauVar8[1] + 8) = uVar6;
      *(undefined1 *)puVar9 = 0;
      puVar9[2] = 0;
      puVar9[3] = 0xf;
      pauVar8 = pauVar8 + 2;
      puVar10 = DAT_180c62d20;
    }
    for (; param_2 != puVar10; param_2 = param_2 + 4) {
      *pauVar7 = (undefined1  [16])0x0;
      *(undefined8 *)pauVar7[1] = 0;
      *(undefined8 *)(pauVar7[1] + 8) = 0;
      uVar4 = param_2[1];
      uVar5 = param_2[2];
      uVar6 = param_2[3];
      *(undefined8 *)*pauVar7 = *param_2;
      *(undefined8 *)(*pauVar7 + 8) = uVar4;
      *(undefined8 *)pauVar7[1] = uVar5;
      *(undefined8 *)(pauVar7[1] + 8) = uVar6;
      *(undefined1 *)param_2 = 0;
      param_2[2] = 0;
      param_2[3] = 0xf;
      pauVar7 = pauVar7 + 2;
    }
  }
  FUN_180157360(&DAT_180c62d18,pauVar12,uVar1,uVar14,puVar16,pauVar17,uVar15,pauVar18,pauVar19);
  return pauVar2;
}



