// FUN_180158310 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180158310 */

undefined1 (*) [16] FUN_180158310(longlong *param_1,undefined8 *param_2,undefined1 *param_3)

{
  ulonglong uVar1;
  undefined1 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined1 (*pauVar7) [16];
  longlong lVar8;
  undefined8 *puVar9;
  undefined1 (*pauVar10) [16];
  undefined8 *puVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  undefined8 local_48;
  
  lVar3 = *param_1;
  lVar8 = param_1[1] - lVar3 >> 4;
  if (lVar8 == 0xfffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    FUN_1801136f0();
  }
  uVar1 = lVar8 + 1;
  uVar12 = param_1[2] - lVar3 >> 4;
  if (0xfffffffffffffff - (uVar12 >> 1) < uVar12) {
    uVar13 = 0xfffffffffffffff;
  }
  else {
    uVar12 = (uVar12 >> 1) + uVar12;
    uVar13 = uVar1;
    if (uVar1 <= uVar12) {
      uVar13 = uVar12;
    }
    if (0xfffffffffffffff < uVar13) {
                    /* WARNING: Subroutine does not return */
      FUN_18015bc80();
    }
  }
  puVar9 = (undefined8 *)FUN_18015bca0(uVar13 << 4);
  pauVar10 = (undefined1 (*) [16])
             ((longlong)puVar9 + ((longlong)param_2 - lVar3 & 0xfffffffffffffff0U));
  *pauVar10 = (undefined1  [16])0x0;
  uVar2 = *param_3;
  FUN_1801409d0(*pauVar10 + 8,(*pauVar10)[0]);
  (*pauVar10)[0] = 4;
  local_48 = CONCAT71((int7)((ulonglong)param_3 >> 8),uVar2);
  *(undefined8 *)(*pauVar10 + 8) = local_48;
  puVar4 = (undefined8 *)param_1[1];
  puVar11 = (undefined8 *)*param_1;
  puVar6 = puVar9;
  if (param_2 == puVar4) {
    for (; puVar11 != puVar4; puVar11 = puVar11 + 2) {
      uVar5 = puVar11[1];
      *puVar6 = *puVar11;
      puVar6[1] = uVar5;
      *(undefined1 *)puVar11 = 0;
      puVar11[1] = 0;
      puVar6 = puVar6 + 2;
    }
  }
  else {
    for (; puVar11 != param_2; puVar11 = puVar11 + 2) {
      uVar5 = puVar11[1];
      *puVar6 = *puVar11;
      puVar6[1] = uVar5;
      *(undefined1 *)puVar11 = 0;
      puVar11[1] = 0;
      puVar6 = puVar6 + 2;
    }
    puVar4 = (undefined8 *)param_1[1];
    pauVar7 = pauVar10;
    for (; param_2 != puVar4; param_2 = param_2 + 2) {
      uVar5 = param_2[1];
      *(undefined8 *)pauVar7[1] = *param_2;
      *(undefined8 *)(pauVar7[1] + 8) = uVar5;
      *(undefined1 *)param_2 = 0;
      param_2[1] = 0;
      pauVar7 = pauVar7 + 1;
    }
  }
  FUN_180156b10(param_1,puVar9,uVar1,uVar13);
  return pauVar10;
}



