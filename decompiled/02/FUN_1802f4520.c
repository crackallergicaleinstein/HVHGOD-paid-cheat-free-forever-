// FUN_1802f4520 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802f4520 */

undefined4 * FUN_1802f4520(longlong *param_1,longlong param_2,undefined4 *param_3)

{
  ulonglong uVar1;
  undefined4 *puVar2;
  longlong lVar3;
  undefined4 *puVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined4 *puVar7;
  longlong lVar8;
  
  lVar8 = *param_1;
  lVar3 = param_1[1] - lVar8 >> 2;
  if (lVar3 == 0x3fffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    FUN_1801136f0();
  }
  uVar1 = lVar3 + 1;
  uVar5 = param_1[2] - lVar8 >> 2;
  if (0x3fffffffffffffff - (uVar5 >> 1) < uVar5) {
    uVar6 = 0x3fffffffffffffff;
  }
  else {
    uVar5 = (uVar5 >> 1) + uVar5;
    uVar6 = uVar1;
    if (uVar1 <= uVar5) {
      uVar6 = uVar5;
    }
    if (0x3fffffffffffffff < uVar6) {
                    /* WARNING: Subroutine does not return */
      FUN_18015bc80();
    }
  }
  puVar4 = (undefined4 *)FUN_18015bca0(uVar6 * 4);
  puVar2 = puVar4 + (param_2 - lVar8 >> 2);
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
    if ((0xfff < (param_1[2] - lVar8 & 0xfffffffffffffffcU)) &&
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



