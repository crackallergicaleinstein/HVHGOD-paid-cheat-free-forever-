// FUN_1800274b0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1800274b0 */

ulonglong FUN_1800274b0(ulonglong *param_1,undefined4 *param_2,undefined2 *param_3)

{
  ulonglong uVar1;
  undefined4 *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  
  puVar2 = (undefined4 *)param_1[1];
  if (puVar2 != (undefined4 *)param_1[2]) {
    *puVar2 = *param_2;
    *(undefined2 *)(puVar2 + 1) = *param_3;
    uVar3 = param_1[1];
    param_1[1] = uVar3 + 8;
    return uVar3;
  }
  uVar3 = *param_1;
  uVar9 = ((longlong)(param_1[1] - uVar3) >> 3) + 1;
  uVar4 = (longlong)(param_1[2] - uVar3) >> 3;
  uVar8 = (uVar4 >> 1) + uVar4;
  if (uVar8 <= uVar9) {
    uVar8 = uVar9;
  }
  if (0x1fffffffffffffff - (uVar4 >> 1) < uVar4) {
    uVar8 = 0x1fffffffffffffff;
  }
  if (uVar8 >> 0x3d != 0) {
LAB_180048726:
                    /* WARNING: Subroutine does not return */
    FUN_18015bc80();
  }
  if (uVar8 == 0) {
    uVar4 = 0;
  }
  else if (uVar8 < 0x200) {
    uVar4 = FUN_180454770(uVar8 * 8);
  }
  else {
    if (0x1ffffffffffffffb < uVar8) goto LAB_180048726;
    lVar5 = FUN_180454770(uVar8 * 8 + 0x27);
    uVar4 = lVar5 + 0x27U & 0xffffffffffffffe0;
    *(longlong *)(uVar4 - 8) = lVar5;
  }
  uVar1 = (longlong)puVar2 + (uVar4 - uVar3);
  *(undefined4 *)((longlong)puVar2 + (uVar4 - uVar3)) = *param_2;
  *(undefined2 *)((longlong)puVar2 + ((uVar4 + 4) - uVar3)) = *param_3;
  if (puVar2 == (undefined4 *)param_1[1]) {
    FUN_18063aed0(uVar4);
    uVar3 = *param_1;
  }
  else {
    FUN_18063aed0(uVar4,*param_1,(longlong)puVar2 - *param_1);
    FUN_18063aed0(uVar1 + 8,puVar2);
    uVar3 = *param_1;
  }
  if (uVar3 != 0) {
    uVar7 = param_1[2] - uVar3;
    uVar6 = uVar3;
    if (0xfff < uVar7) {
      uVar6 = *(ulonglong *)(uVar3 - 8);
      if (0x1f < (uVar3 - 8) - uVar6) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      uVar7 = uVar7 + 0x27;
    }
    FUN_1804547d0(uVar6,uVar7);
  }
  *param_1 = uVar4;
  param_1[1] = uVar4 + uVar9 * 8;
  param_1[2] = uVar4 + uVar8 * 8;
  return uVar1;
}



