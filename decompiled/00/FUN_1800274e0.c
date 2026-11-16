// FUN_1800274e0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1800274e0 */

ulonglong FUN_1800274e0(ulonglong *param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined4 *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar9;
  
  puVar1 = (undefined4 *)param_1[1];
  if (puVar1 != (undefined4 *)param_1[2]) {
    *puVar1 = *param_2;
    *(undefined8 *)(puVar1 + 2) = *param_3;
    uVar2 = param_1[1];
    param_1[1] = uVar2 + 0x10;
    return uVar2;
  }
  uVar2 = *param_1;
  uVar8 = ((longlong)(param_1[1] - uVar2) >> 4) + 1;
  uVar5 = (longlong)(param_1[2] - uVar2) >> 4;
  uVar3 = (uVar5 >> 1) + uVar5;
  if (uVar3 <= uVar8) {
    uVar3 = uVar8;
  }
  if (0xfffffffffffffff - (uVar5 >> 1) < uVar5) {
    uVar3 = 0xfffffffffffffff;
  }
  if (uVar3 >> 0x3c != 0) {
LAB_1800488c8:
                    /* WARNING: Subroutine does not return */
    FUN_18015bc80();
  }
  lVar9 = uVar3 * 0x10;
  if (uVar3 == 0) {
    uVar3 = 0;
  }
  else if (uVar3 < 0x100) {
    uVar3 = FUN_180454770(lVar9);
  }
  else {
    if (0xffffffffffffffd < uVar3) goto LAB_1800488c8;
    lVar4 = FUN_180454770(lVar9 + 0x27);
    uVar3 = lVar4 + 0x27U & 0xffffffffffffffe0;
    *(longlong *)(uVar3 - 8) = lVar4;
  }
  uVar5 = (longlong)puVar1 + (uVar3 - uVar2);
  *(undefined4 *)((longlong)puVar1 + (uVar3 - uVar2)) = *param_2;
  *(undefined8 *)((longlong)puVar1 + ((uVar3 + 8) - uVar2)) = *param_3;
  if (puVar1 == (undefined4 *)param_1[1]) {
    FUN_18063aed0(uVar3);
    uVar2 = *param_1;
  }
  else {
    FUN_18063aed0(uVar3,*param_1,(longlong)puVar1 - *param_1);
    FUN_18063aed0(uVar5 + 0x10,puVar1);
    uVar2 = *param_1;
  }
  if (uVar2 != 0) {
    uVar7 = param_1[2] - uVar2;
    uVar6 = uVar2;
    if (0xfff < uVar7) {
      uVar6 = *(ulonglong *)(uVar2 - 8);
      if (0x1f < (uVar2 - 8) - uVar6) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      uVar7 = uVar7 + 0x27;
    }
    FUN_1804547d0(uVar6,uVar7);
  }
  *param_1 = uVar3;
  param_1[1] = uVar8 * 0x10 + uVar3;
  param_1[2] = lVar9 + uVar3;
  return uVar5;
}



