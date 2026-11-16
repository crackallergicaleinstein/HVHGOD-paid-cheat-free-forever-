// FUN_1801bc660 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801bc660 */

longlong FUN_1801bc660(longlong *param_1,undefined4 *param_2)

{
  ulonglong uVar1;
  undefined4 *puVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  undefined4 *puVar7;
  longlong lVar8;
  longlong lVar9;
  
  puVar7 = (undefined4 *)param_1[1];
  if (puVar7 != (undefined4 *)param_1[2]) {
    *puVar7 = *param_2;
    lVar8 = param_1[1];
    param_1[1] = lVar8 + 4;
    return lVar8;
  }
  lVar8 = (longlong)puVar7 - *param_1 >> 2;
  if (lVar8 == 0x3fffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    FUN_1801136f0();
  }
  uVar4 = param_1[2] - *param_1 >> 2;
  uVar1 = lVar8 + 1;
  if (0x3fffffffffffffff - (uVar4 >> 1) < uVar4) {
    uVar5 = 0x3fffffffffffffff;
  }
  else {
    uVar4 = (uVar4 >> 1) + uVar4;
    uVar5 = uVar1;
    if (uVar1 <= uVar4) {
      uVar5 = uVar4;
    }
    if (0x3fffffffffffffff < uVar5) {
                    /* WARNING: Subroutine does not return */
      FUN_18015bc80();
    }
  }
  lVar3 = FUN_18015bca0(uVar5 * 4);
  *(undefined4 *)(lVar3 + lVar8 * 4) = *param_2;
  puVar2 = (undefined4 *)*param_1;
  lVar8 = lVar3 + lVar8 * 4;
  if (puVar7 == (undefined4 *)param_1[1]) {
    lVar9 = param_1[1] - (longlong)puVar2;
    lVar6 = lVar3;
    puVar7 = puVar2;
  }
  else {
    FUN_18063aed0(lVar3,puVar2,(longlong)puVar7 - (longlong)puVar2);
    lVar6 = lVar8 + 4;
    lVar9 = param_1[1] - (longlong)puVar7;
  }
  FUN_18063aed0(lVar6,puVar7,lVar9);
  lVar6 = *param_1;
  if (lVar6 != 0) {
    FUN_18015bf60(lVar6,param_1[2] - lVar6 & 0xfffffffffffffffc);
  }
  *param_1 = lVar3;
  param_1[1] = lVar3 + uVar1 * 4;
  param_1[2] = lVar3 + uVar5 * 4;
  return lVar8;
}



