// FUN_180158170 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180158170 */

undefined1 (*) [16] FUN_180158170(longlong *param_1,undefined8 *param_2,undefined8 *param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 (*pauVar6) [16];
  longlong lVar7;
  undefined8 *puVar8;
  undefined1 (*pauVar9) [16];
  undefined8 *puVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  
  lVar2 = *param_1;
  lVar7 = param_1[1] - lVar2 >> 4;
  if (lVar7 == 0xfffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    FUN_1801136f0();
  }
  uVar1 = lVar7 + 1;
  uVar11 = param_1[2] - lVar2 >> 4;
  if (0xfffffffffffffff - (uVar11 >> 1) < uVar11) {
    uVar12 = 0xfffffffffffffff;
  }
  else {
    uVar11 = (uVar11 >> 1) + uVar11;
    uVar12 = uVar1;
    if (uVar1 <= uVar11) {
      uVar12 = uVar11;
    }
    if (0xfffffffffffffff < uVar12) {
                    /* WARNING: Subroutine does not return */
      FUN_18015bc80();
    }
  }
  puVar8 = (undefined8 *)FUN_18015bca0(uVar12 << 4);
  pauVar9 = (undefined1 (*) [16])
            ((longlong)puVar8 + ((longlong)param_2 - lVar2 & 0xfffffffffffffff0U));
  *pauVar9 = (undefined1  [16])0x0;
  uVar3 = *param_3;
  FUN_1801409d0(*pauVar9 + 8,(*pauVar9)[0]);
  (*pauVar9)[0] = 5;
  *(undefined8 *)(*pauVar9 + 8) = uVar3;
  puVar4 = (undefined8 *)param_1[1];
  puVar10 = (undefined8 *)*param_1;
  puVar5 = puVar8;
  if (param_2 == puVar4) {
    for (; puVar10 != puVar4; puVar10 = puVar10 + 2) {
      uVar3 = puVar10[1];
      *puVar5 = *puVar10;
      puVar5[1] = uVar3;
      *(undefined1 *)puVar10 = 0;
      puVar10[1] = 0;
      puVar5 = puVar5 + 2;
    }
  }
  else {
    for (; puVar10 != param_2; puVar10 = puVar10 + 2) {
      uVar3 = puVar10[1];
      *puVar5 = *puVar10;
      puVar5[1] = uVar3;
      *(undefined1 *)puVar10 = 0;
      puVar10[1] = 0;
      puVar5 = puVar5 + 2;
    }
    puVar4 = (undefined8 *)param_1[1];
    pauVar6 = pauVar9;
    for (; param_2 != puVar4; param_2 = param_2 + 2) {
      uVar3 = param_2[1];
      *(undefined8 *)pauVar6[1] = *param_2;
      *(undefined8 *)(pauVar6[1] + 8) = uVar3;
      *(undefined1 *)param_2 = 0;
      param_2[1] = 0;
      pauVar6 = pauVar6 + 1;
    }
  }
  FUN_180156b10(param_1,puVar8,uVar1,uVar12);
  return pauVar9;
}



