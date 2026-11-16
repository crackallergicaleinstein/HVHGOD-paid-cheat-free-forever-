// FUN_180157e20 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180157e20 */

undefined1 (*) [16] FUN_180157e20(longlong *param_1,undefined8 *param_2,undefined8 *param_3)

{
  ulonglong uVar1;
  undefined1 (*pauVar2) [16];
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 (*pauVar6) [16];
  longlong lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  undefined8 uVar12;
  
  lVar3 = *param_1;
  lVar7 = param_1[1] - lVar3 >> 4;
  if (lVar7 == 0xfffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    FUN_1801136f0();
  }
  uVar1 = lVar7 + 1;
  uVar10 = param_1[2] - lVar3 >> 4;
  if (0xfffffffffffffff - (uVar10 >> 1) < uVar10) {
    uVar11 = 0xfffffffffffffff;
  }
  else {
    uVar10 = (uVar10 >> 1) + uVar10;
    uVar11 = uVar1;
    if (uVar1 <= uVar10) {
      uVar11 = uVar10;
    }
    if (0xfffffffffffffff < uVar11) {
                    /* WARNING: Subroutine does not return */
      FUN_18015bc80();
    }
  }
  puVar8 = (undefined8 *)FUN_18015bca0(uVar11 << 4);
  pauVar2 = (undefined1 (*) [16])
            (((longlong)param_2 - lVar3 & 0xfffffffffffffff0U) + (longlong)puVar8);
  *pauVar2 = (undefined1  [16])0x0;
  uVar12 = *param_3;
  FUN_1801409d0(*pauVar2 + 8,(*pauVar2)[0]);
  (*pauVar2)[0] = 7;
  *(undefined8 *)(*pauVar2 + 8) = uVar12;
  puVar4 = (undefined8 *)param_1[1];
  puVar9 = (undefined8 *)*param_1;
  puVar5 = puVar8;
  if (param_2 == puVar4) {
    for (; puVar9 != puVar4; puVar9 = puVar9 + 2) {
      uVar12 = puVar9[1];
      *puVar5 = *puVar9;
      puVar5[1] = uVar12;
      *(undefined1 *)puVar9 = 0;
      puVar9[1] = 0;
      puVar5 = puVar5 + 2;
    }
  }
  else {
    for (; puVar9 != param_2; puVar9 = puVar9 + 2) {
      uVar12 = puVar9[1];
      *puVar5 = *puVar9;
      puVar5[1] = uVar12;
      *(undefined1 *)puVar9 = 0;
      puVar9[1] = 0;
      puVar5 = puVar5 + 2;
    }
    puVar4 = (undefined8 *)param_1[1];
    pauVar6 = pauVar2;
    for (; param_2 != puVar4; param_2 = param_2 + 2) {
      uVar12 = param_2[1];
      *(undefined8 *)pauVar6[1] = *param_2;
      *(undefined8 *)(pauVar6[1] + 8) = uVar12;
      *(undefined1 *)param_2 = 0;
      param_2[1] = 0;
      pauVar6 = pauVar6 + 1;
    }
  }
  FUN_180156b10(param_1,puVar8,uVar1,uVar11);
  return pauVar2;
}



