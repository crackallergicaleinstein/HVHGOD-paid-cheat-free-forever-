// FUN_1802ebc20 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802ebc20 */

undefined8 * FUN_1802ebc20(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  
  lVar4 = *param_1;
  lVar7 = (param_2 - lVar4) / 6 + (param_2 - lVar4 >> 0x3f);
  lVar5 = (param_1[1] - lVar4) / 0xc;
  if (lVar5 == 0x1555555555555555) {
                    /* WARNING: Subroutine does not return */
    FUN_1801136f0();
  }
  uVar1 = lVar5 + 1;
  uVar3 = (param_1[2] - lVar4) / 0xc;
  if (0x1555555555555555 - (uVar3 >> 1) < uVar3) {
    uVar6 = 0x1555555555555555;
  }
  else {
    uVar3 = (uVar3 >> 1) + uVar3;
    uVar6 = uVar1;
    if (uVar1 <= uVar3) {
      uVar6 = uVar3;
    }
    if (0x1555555555555555 < uVar6) {
                    /* WARNING: Subroutine does not return */
      FUN_18015bc80();
    }
  }
  lVar5 = FUN_18015bca0(uVar6 * 0xc);
  puVar2 = (undefined8 *)(lVar5 + ((lVar7 >> 1) - (lVar7 >> 0x3f)) * 0xc);
  *puVar2 = *param_3;
  *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(param_3 + 1);
  lVar4 = *param_1;
  if (param_2 == param_1[1]) {
    lVar8 = param_1[1] - lVar4;
    lVar7 = lVar5;
    param_2 = lVar4;
  }
  else {
    FUN_18063aed0(lVar5,lVar4,param_2 - lVar4);
    lVar8 = param_1[1] - param_2;
    lVar7 = (longlong)puVar2 + 0xc;
  }
  FUN_18063aed0(lVar7,param_2,lVar8);
  lVar4 = *param_1;
  if (lVar4 != 0) {
    lVar7 = lVar4;
    if ((0xfff < (ulonglong)(((param_1[2] - lVar4) / 0xc) * 0xc)) &&
       (lVar7 = *(longlong *)(lVar4 + -8), 0x1f < (lVar4 - lVar7) - 8U)) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    FUN_1804547d0(lVar7);
  }
  *param_1 = lVar5;
  param_1[1] = lVar5 + uVar1 * 0xc;
  param_1[2] = uVar6 * 0xc + lVar5;
  return puVar2;
}



