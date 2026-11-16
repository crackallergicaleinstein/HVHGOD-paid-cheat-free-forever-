// FUN_1802eafb0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802eafb0 */

undefined8 * FUN_1802eafb0(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong lVar9;
  undefined8 *puVar10;
  longlong lVar11;
  
  lVar3 = *param_1;
  lVar9 = (param_2 - lVar3) / 0x26 + (param_2 - lVar3 >> 0x3f);
  lVar7 = (param_1[1] - lVar3) / 0x4c;
  if (lVar7 == 0x35e50d79435e50d) {
                    /* WARNING: Subroutine does not return */
    FUN_1801136f0();
  }
  uVar1 = lVar7 + 1;
  uVar2 = (param_1[2] - lVar3) / 0x4c;
  if (0x35e50d79435e50d - (uVar2 >> 1) < uVar2) {
    uVar8 = 0x35e50d79435e50d;
  }
  else {
    uVar2 = (uVar2 >> 1) + uVar2;
    uVar8 = uVar1;
    if (uVar1 <= uVar2) {
      uVar8 = uVar2;
    }
    if (0x35e50d79435e50d < uVar8) {
                    /* WARNING: Subroutine does not return */
      FUN_18015bc80();
    }
  }
  lVar7 = FUN_18015bca0(uVar8 * 0x4c);
  puVar10 = (undefined8 *)(((lVar9 >> 1) - (lVar9 >> 0x3f)) * 0x4c + lVar7);
  uVar4 = param_3[1];
  uVar5 = param_3[2];
  uVar6 = param_3[3];
  *puVar10 = *param_3;
  puVar10[1] = uVar4;
  puVar10[2] = uVar5;
  puVar10[3] = uVar6;
  uVar4 = param_3[5];
  uVar5 = param_3[6];
  uVar6 = param_3[7];
  puVar10[4] = param_3[4];
  puVar10[5] = uVar4;
  puVar10[6] = uVar5;
  puVar10[7] = uVar6;
  puVar10[8] = param_3[8];
  *(undefined4 *)(puVar10 + 9) = *(undefined4 *)(param_3 + 9);
  lVar3 = *param_1;
  if (param_2 == param_1[1]) {
    lVar11 = param_1[1] - lVar3;
    lVar9 = lVar7;
    param_2 = lVar3;
  }
  else {
    FUN_18063aed0(lVar7,lVar3,param_2 - lVar3);
    lVar11 = param_1[1] - param_2;
    lVar9 = (longlong)puVar10 + 0x4c;
  }
  FUN_18063aed0(lVar9,param_2,lVar11);
  lVar3 = *param_1;
  if (lVar3 != 0) {
    lVar9 = lVar3;
    if ((0xfff < (ulonglong)(((param_1[2] - lVar3) / 0x4c) * 0x4c)) &&
       (lVar9 = *(longlong *)(lVar3 + -8), 0x1f < (lVar3 - lVar9) - 8U)) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    FUN_1804547d0(lVar9);
  }
  *param_1 = lVar7;
  param_1[1] = uVar1 * 0x4c + lVar7;
  param_1[2] = uVar8 * 0x4c + lVar7;
  return puVar10;
}



