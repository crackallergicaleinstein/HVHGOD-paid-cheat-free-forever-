// FUN_1804392c0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804392c0 */

undefined8 * FUN_1804392c0(longlong *param_1,undefined8 *param_2,undefined8 *param_3)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined8 *puVar10;
  longlong lVar11;
  
  lVar11 = *param_1;
  lVar6 = param_1[1] - lVar11 >> 3;
  uVar9 = 0x1fffffffffffffff;
  if (lVar6 == 0x1fffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    FUN_1801136f0();
  }
  uVar1 = lVar6 + 1;
  uVar8 = param_1[2] - lVar11 >> 3;
  if (uVar8 <= 0x1fffffffffffffff - (uVar8 >> 1)) {
    uVar8 = (uVar8 >> 1) + uVar8;
    uVar9 = uVar1;
    if (uVar1 <= uVar8) {
      uVar9 = uVar8;
    }
    if (0x1fffffffffffffff < uVar9) {
                    /* WARNING: Subroutine does not return */
      FUN_18015bc80();
    }
  }
  puVar7 = (undefined8 *)FUN_18015bca0(uVar9 * 8);
  puVar2 = puVar7 + ((longlong)param_2 - lVar11 >> 3);
  uVar3 = *param_3;
  *param_3 = 0;
  *puVar2 = uVar3;
  puVar4 = (undefined8 *)param_1[1];
  puVar10 = (undefined8 *)*param_1;
  puVar5 = puVar7;
  if (param_2 == puVar4) {
    for (; puVar10 != puVar4; puVar10 = puVar10 + 1) {
      uVar3 = *puVar10;
      *puVar10 = 0;
      *puVar5 = uVar3;
      puVar5 = puVar5 + 1;
    }
  }
  else {
    for (; puVar10 != param_2; puVar10 = puVar10 + 1) {
      uVar3 = *puVar10;
      *puVar10 = 0;
      *puVar5 = uVar3;
      puVar5 = puVar5 + 1;
    }
    puVar4 = (undefined8 *)param_1[1];
    puVar10 = puVar2;
    for (; param_2 != puVar4; param_2 = param_2 + 1) {
      puVar10 = puVar10 + 1;
      uVar3 = *param_2;
      *param_2 = 0;
      *puVar10 = uVar3;
    }
  }
  lVar11 = *param_1;
  if (lVar11 != 0) {
    lVar6 = param_1[1];
    for (; lVar11 != lVar6; lVar11 = lVar11 + 8) {
      FUN_180438c70(lVar11);
    }
    lVar11 = *param_1;
    lVar6 = lVar11;
    if ((0xfff < (param_1[2] - lVar11 & 0xfffffffffffffff8U)) &&
       (lVar6 = *(longlong *)(lVar11 + -8), 0x1f < (lVar11 - lVar6) - 8U)) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    FUN_1804547d0(lVar6);
  }
  *param_1 = (longlong)puVar7;
  param_1[1] = (longlong)(puVar7 + uVar1);
  param_1[2] = (longlong)(puVar7 + uVar9);
  return puVar2;
}



