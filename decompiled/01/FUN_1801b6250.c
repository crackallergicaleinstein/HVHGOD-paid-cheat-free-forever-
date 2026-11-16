// FUN_1801b6250 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801b6250 */

undefined8 * FUN_1801b6250(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  longlong lVar8;
  
  lVar8 = *param_1;
  lVar3 = param_1[1] - lVar8 >> 3;
  if (lVar3 == 0x1fffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    FUN_1801136f0();
  }
  uVar1 = lVar3 + 1;
  uVar5 = param_1[2] - lVar8 >> 3;
  if (0x1fffffffffffffff - (uVar5 >> 1) < uVar5) {
    uVar6 = 0x1fffffffffffffff;
  }
  else {
    uVar5 = (uVar5 >> 1) + uVar5;
    uVar6 = uVar1;
    if (uVar1 <= uVar5) {
      uVar6 = uVar5;
    }
    if (0x1fffffffffffffff < uVar6) {
                    /* WARNING: Subroutine does not return */
      FUN_18015bc80();
    }
  }
  puVar4 = (undefined8 *)FUN_18015bca0(uVar6 * 8);
  puVar2 = puVar4 + (param_2 - lVar8 >> 3);
  *puVar2 = *param_3;
  lVar8 = *param_1;
  puVar7 = puVar4;
  if (param_2 != param_1[1]) {
    FUN_18063aed0(puVar4,lVar8,param_2 - lVar8);
    puVar7 = puVar2 + 1;
    lVar8 = param_2;
  }
  FUN_18063aed0(puVar7,lVar8);
  lVar8 = *param_1;
  if (lVar8 != 0) {
    lVar3 = lVar8;
    if ((0xfff < (param_1[2] - lVar8 & 0xfffffffffffffff8U)) &&
       (lVar3 = *(longlong *)(lVar8 + -8), 0x1f < (lVar8 - lVar3) - 8U)) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    FUN_1804547d0(lVar3);
  }
  *param_1 = (longlong)puVar4;
  param_1[1] = (longlong)(puVar4 + uVar1);
  param_1[2] = (longlong)(puVar4 + uVar6);
  return puVar2;
}



