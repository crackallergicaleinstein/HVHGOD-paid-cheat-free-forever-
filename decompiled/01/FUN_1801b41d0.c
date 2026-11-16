// FUN_1801b41d0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801b41d0 */

undefined8 * FUN_1801b41d0(longlong *param_1,longlong param_2)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  
  lVar4 = *param_1;
  lVar5 = param_1[1] - lVar4 >> 4;
  if (lVar5 == 0xfffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    FUN_1801136f0();
  }
  uVar6 = lVar5 + 1;
  uVar2 = param_1[2] - lVar4 >> 4;
  if (0xfffffffffffffff - (uVar2 >> 1) < uVar2) {
    uVar7 = 0xfffffffffffffff;
  }
  else {
    uVar2 = (uVar2 >> 1) + uVar2;
    uVar7 = uVar6;
    if (uVar6 <= uVar2) {
      uVar7 = uVar2;
    }
    if (0xfffffffffffffff < uVar7) {
                    /* WARNING: Subroutine does not return */
      FUN_18015bc80();
    }
  }
  puVar1 = (undefined8 *)FUN_18015bca0(uVar7 * 0x10);
  puVar8 = (undefined8 *)((param_2 - lVar4 & 0xfffffffffffffff0U) + (longlong)puVar1);
  *puVar8 = 0;
  puVar8[1] = 0;
  lVar4 = *param_1;
  puVar3 = puVar1;
  if (param_2 != param_1[1]) {
    FUN_18063aed0(puVar1,lVar4,param_2 - lVar4);
    puVar3 = puVar8 + 2;
    lVar4 = param_2;
  }
  FUN_18063aed0(puVar3,lVar4);
  lVar4 = *param_1;
  if (lVar4 != 0) {
    lVar5 = lVar4;
    if ((0xfff < (param_1[2] - lVar4 & 0xfffffffffffffff0U)) &&
       (lVar5 = *(longlong *)(lVar4 + -8), 0x1f < (lVar4 - lVar5) - 8U)) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    FUN_1804547d0(lVar5);
  }
  *param_1 = (longlong)puVar1;
  param_1[1] = (longlong)(puVar1 + uVar6 * 2);
  param_1[2] = (longlong)(puVar1 + uVar7 * 2);
  return puVar8;
}



