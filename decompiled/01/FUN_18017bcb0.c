// FUN_18017bcb0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18017bcb0 */

undefined1 (*) [16] FUN_18017bcb0(longlong *param_1,undefined8 *param_2,undefined8 *param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 (*pauVar7) [16];
  longlong lVar8;
  undefined1 (*pauVar9) [16];
  undefined8 *puVar10;
  ulonglong uVar11;
  undefined1 (*pauVar12) [16];
  undefined1 (*pauVar13) [16];
  ulonglong uVar14;
  
  lVar2 = *param_1;
  lVar8 = param_1[1] - lVar2 >> 5;
  if (lVar8 == 0x7ffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    FUN_1801136f0();
  }
  uVar1 = lVar8 + 1;
  uVar11 = param_1[2] - lVar2 >> 5;
  if (0x7ffffffffffffff - (uVar11 >> 1) < uVar11) {
    uVar14 = 0x7ffffffffffffff;
  }
  else {
    uVar11 = (uVar11 >> 1) + uVar11;
    uVar14 = uVar1;
    if (uVar1 <= uVar11) {
      uVar14 = uVar11;
    }
    if (0x7ffffffffffffff < uVar14) {
                    /* WARNING: Subroutine does not return */
      FUN_18015bc80();
    }
  }
  pauVar9 = (undefined1 (*) [16])FUN_18015bca0(uVar14 << 5);
  pauVar13 = (undefined1 (*) [16])(*pauVar9 + ((longlong)param_2 - lVar2 & 0xffffffffffffffe0));
  *pauVar13 = (undefined1  [16])0x0;
  *(undefined8 *)pauVar13[1] = 0;
  *(undefined8 *)(pauVar13[1] + 8) = 0;
  uVar4 = param_3[1];
  uVar5 = param_3[2];
  uVar6 = param_3[3];
  *(undefined8 *)*pauVar13 = *param_3;
  *(undefined8 *)(*pauVar13 + 8) = uVar4;
  *(undefined8 *)pauVar13[1] = uVar5;
  *(undefined8 *)(pauVar13[1] + 8) = uVar6;
  *(undefined1 *)param_3 = 0;
  param_3[2] = 0;
  param_3[3] = 0xf;
  puVar3 = (undefined8 *)param_1[1];
  puVar10 = (undefined8 *)*param_1;
  pauVar7 = pauVar9;
  if (param_2 == puVar3) {
    for (; puVar10 != puVar3; puVar10 = puVar10 + 4) {
      *pauVar7 = (undefined1  [16])0x0;
      *(undefined8 *)pauVar7[1] = 0;
      *(undefined8 *)(pauVar7[1] + 8) = 0;
      uVar4 = puVar10[1];
      uVar5 = puVar10[2];
      uVar6 = puVar10[3];
      *(undefined8 *)*pauVar7 = *puVar10;
      *(undefined8 *)(*pauVar7 + 8) = uVar4;
      *(undefined8 *)pauVar7[1] = uVar5;
      *(undefined8 *)(pauVar7[1] + 8) = uVar6;
      *(undefined1 *)puVar10 = 0;
      puVar10[2] = 0;
      puVar10[3] = 0xf;
      pauVar7 = pauVar7 + 2;
    }
  }
  else {
    for (; puVar10 != param_2; puVar10 = puVar10 + 4) {
      *pauVar7 = (undefined1  [16])0x0;
      *(undefined8 *)pauVar7[1] = 0;
      *(undefined8 *)(pauVar7[1] + 8) = 0;
      uVar4 = puVar10[1];
      uVar5 = puVar10[2];
      uVar6 = puVar10[3];
      *(undefined8 *)*pauVar7 = *puVar10;
      *(undefined8 *)(*pauVar7 + 8) = uVar4;
      *(undefined8 *)pauVar7[1] = uVar5;
      *(undefined8 *)(pauVar7[1] + 8) = uVar6;
      *(undefined1 *)puVar10 = 0;
      puVar10[2] = 0;
      puVar10[3] = 0xf;
      pauVar7 = pauVar7 + 2;
    }
    puVar3 = (undefined8 *)param_1[1];
    pauVar7 = pauVar13;
    for (; param_2 != puVar3; param_2 = param_2 + 4) {
      pauVar12 = pauVar7 + 2;
      *pauVar12 = (undefined1  [16])0x0;
      *(undefined8 *)pauVar7[3] = 0;
      *(undefined8 *)(pauVar7[3] + 8) = 0;
      uVar4 = param_2[1];
      uVar5 = param_2[2];
      uVar6 = param_2[3];
      *(undefined8 *)*pauVar12 = *param_2;
      *(undefined8 *)(pauVar7[2] + 8) = uVar4;
      *(undefined8 *)pauVar7[3] = uVar5;
      *(undefined8 *)(pauVar7[3] + 8) = uVar6;
      *(undefined1 *)param_2 = 0;
      param_2[2] = 0;
      param_2[3] = 0xf;
      pauVar7 = pauVar12;
    }
  }
  FUN_180157360(param_1,pauVar9,uVar1,uVar14);
  return pauVar13;
}



