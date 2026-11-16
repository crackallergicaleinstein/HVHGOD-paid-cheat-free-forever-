// FUN_1801b64b0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801b64b0 */

undefined8 * FUN_1801b64b0(longlong *param_1,undefined8 *param_2,undefined8 *param_3)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  
  lVar3 = *param_1;
  lVar6 = param_1[1] - lVar3 >> 3;
  uVar9 = 0x1fffffffffffffff;
  if (lVar6 == 0x1fffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    FUN_1801136f0();
  }
  uVar1 = lVar6 + 1;
  uVar8 = param_1[2] - lVar3 >> 3;
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
  puVar2 = puVar7 + ((longlong)param_2 - lVar3 >> 3);
  uVar4 = *param_3;
  *param_3 = 0xffffffffffffffff;
  *puVar2 = uVar4;
  puVar11 = (undefined8 *)param_1[1];
  puVar10 = (undefined8 *)*param_1;
  puVar5 = puVar7;
  if (param_2 == puVar11) {
    for (; puVar10 != puVar11; puVar10 = puVar10 + 1) {
      uVar4 = *puVar10;
      *puVar10 = 0xffffffffffffffff;
      *puVar5 = uVar4;
      puVar5 = puVar5 + 1;
    }
  }
  else {
    for (; puVar10 != param_2; puVar10 = puVar10 + 1) {
      uVar4 = *puVar10;
      *puVar10 = 0xffffffffffffffff;
      *puVar5 = uVar4;
      puVar5 = puVar5 + 1;
    }
    puVar11 = (undefined8 *)param_1[1];
    puVar10 = puVar2;
    for (; param_2 != puVar11; param_2 = param_2 + 1) {
      puVar10 = puVar10 + 1;
      uVar4 = *param_2;
      *param_2 = 0xffffffffffffffff;
      *puVar10 = uVar4;
    }
  }
  puVar11 = (undefined8 *)*param_1;
  if (puVar11 != (undefined8 *)0x0) {
    puVar10 = (undefined8 *)param_1[1];
    for (; puVar11 != puVar10; puVar11 = puVar11 + 1) {
      FUN_1805fb444(*puVar11);
    }
    lVar3 = *param_1;
    lVar6 = lVar3;
    if ((0xfff < (param_1[2] - lVar3 & 0xfffffffffffffff8U)) &&
       (lVar6 = *(longlong *)(lVar3 + -8), 0x1f < (lVar3 - lVar6) - 8U)) {
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



