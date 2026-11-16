// FUN_1803d6510 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1803d6510 */

undefined8 * FUN_1803d6510(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  longlong lVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  undefined8 *puVar11;
  longlong lVar12;
  
  lVar12 = (longlong)param_2 - (longlong)DAT_180b0df98;
  lVar7 = (longlong)DAT_180b0dfa0 - (longlong)DAT_180b0df98 >> 3;
  if (lVar7 == 0x1fffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    FUN_1801136f0();
  }
  uVar1 = lVar7 + 1;
  uVar9 = (longlong)DAT_180b0dfa8 - (longlong)DAT_180b0df98 >> 3;
  if (0x1fffffffffffffff - (uVar9 >> 1) < uVar9) {
    uVar10 = 0x1fffffffffffffff;
  }
  else {
    uVar9 = (uVar9 >> 1) + uVar9;
    uVar10 = uVar1;
    if (uVar1 <= uVar9) {
      uVar10 = uVar9;
    }
    if (0x1fffffffffffffff < uVar10) {
                    /* WARNING: Subroutine does not return */
      FUN_18015bc80();
    }
  }
  puVar8 = (undefined8 *)FUN_18015bca0(uVar10 * 8);
  puVar2 = puVar8 + (lVar12 >> 3);
  uVar3 = *param_3;
  *param_3 = 0;
  *puVar2 = uVar3;
  puVar6 = DAT_180b0dfa0;
  puVar11 = puVar8;
  puVar5 = DAT_180b0df98;
  if (param_2 == DAT_180b0dfa0) {
    for (; puVar5 != puVar6; puVar5 = puVar5 + 1) {
      uVar3 = *puVar5;
      *puVar5 = 0;
      *puVar11 = uVar3;
      puVar11 = puVar11 + 1;
    }
  }
  else {
    while( true ) {
      puVar4 = puVar2;
      DAT_180b0dfa0 = puVar6;
      if (puVar5 == param_2) break;
      uVar3 = *puVar5;
      *puVar5 = 0;
      *puVar11 = uVar3;
      puVar11 = puVar11 + 1;
      puVar5 = puVar5 + 1;
      puVar6 = DAT_180b0dfa0;
    }
    for (; param_2 != puVar6; param_2 = param_2 + 1) {
      uVar3 = *param_2;
      *param_2 = 0;
      puVar4[1] = uVar3;
      puVar4 = puVar4 + 1;
    }
  }
  puVar5 = DAT_180b0dfa0;
  puVar11 = DAT_180b0df98;
  if (DAT_180b0df98 != (undefined8 *)0x0) {
    for (; puVar11 != puVar5; puVar11 = puVar11 + 1) {
      FUN_1801bced0(puVar11);
    }
    puVar11 = DAT_180b0df98;
    if ((0xfff < ((longlong)DAT_180b0dfa8 - (longlong)DAT_180b0df98 & 0xfffffffffffffff8U)) &&
       (puVar11 = (undefined8 *)DAT_180b0df98[-1],
       0x1f < (ulonglong)((longlong)DAT_180b0df98 + (-8 - (longlong)puVar11)))) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    FUN_1804547d0(puVar11);
  }
  DAT_180b0df98 = puVar8;
  DAT_180b0dfa0 = puVar8 + uVar1;
  DAT_180b0dfa8 = puVar8 + uVar10;
  return puVar2;
}



