// FUN_180268a40 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180268a40 */

undefined8 * FUN_180268a40(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  
  lVar4 = *param_1;
  lVar6 = (param_1[1] - lVar4) / 0x14;
  if (lVar6 == 0xccccccccccccccc) {
                    /* WARNING: Subroutine does not return */
    FUN_1801136f0();
  }
  uVar1 = lVar6 + 1;
  uVar3 = (param_1[2] - lVar4) / 0x14;
  if (0xccccccccccccccc - (uVar3 >> 1) < uVar3) {
    uVar7 = 0xccccccccccccccc;
  }
  else {
    uVar3 = (uVar3 >> 1) + uVar3;
    uVar7 = uVar1;
    if (uVar1 <= uVar3) {
      uVar7 = uVar3;
    }
    if (0xccccccccccccccc < uVar7) {
                    /* WARNING: Subroutine does not return */
      FUN_18015bc80();
    }
  }
  lVar6 = FUN_18015bca0(uVar7 * 0x14);
  puVar2 = (undefined8 *)(lVar6 + ((param_2 - lVar4) / 0x14) * 0x14);
  uVar5 = param_3[1];
  *puVar2 = *param_3;
  puVar2[1] = uVar5;
  *(undefined4 *)(puVar2 + 2) = *(undefined4 *)(param_3 + 2);
  lVar4 = *param_1;
  if (param_2 == param_1[1]) {
    lVar9 = param_1[1] - lVar4;
    lVar8 = lVar6;
    param_2 = lVar4;
  }
  else {
    FUN_18063aed0(lVar6,lVar4,param_2 - lVar4);
    lVar9 = param_1[1] - param_2;
    lVar8 = (longlong)puVar2 + 0x14;
  }
  FUN_18063aed0(lVar8,param_2,lVar9);
  lVar4 = *param_1;
  if (lVar4 != 0) {
    lVar8 = lVar4;
    if ((0xfff < (ulonglong)(((param_1[2] - lVar4) / 0x14) * 0x14)) &&
       (lVar8 = *(longlong *)(lVar4 + -8), 0x1f < (lVar4 - lVar8) - 8U)) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    FUN_1804547d0(lVar8);
  }
  *param_1 = lVar6;
  param_1[1] = lVar6 + uVar1 * 0x14;
  param_1[2] = uVar7 * 0x14 + lVar6;
  return puVar2;
}



