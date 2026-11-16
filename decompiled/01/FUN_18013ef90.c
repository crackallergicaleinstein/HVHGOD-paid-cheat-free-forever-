// FUN_18013ef90 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18013ef90 */

void FUN_18013ef90(longlong *param_1,undefined8 *param_2,ulonglong param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  puVar6 = (undefined8 *)*param_1;
  uVar2 = param_1[2] - (longlong)puVar6 >> 5;
  if (param_3 <= uVar2) {
    puVar4 = (undefined8 *)param_1[1];
    uVar2 = (longlong)puVar4 - (longlong)puVar6 >> 5;
    if (param_3 <= uVar2) {
      puVar4 = puVar6 + param_3 * 4;
      for (; param_3 != 0; param_3 = param_3 - 1) {
        if (puVar6 != param_2) {
          puVar5 = param_2;
          if (0xf < (ulonglong)param_2[3]) {
            puVar5 = (undefined8 *)*param_2;
          }
          FUN_180113930(puVar6,puVar5,param_2[2]);
        }
        puVar6 = puVar6 + 4;
        param_2 = param_2 + 4;
      }
      puVar6 = (undefined8 *)param_1[1];
      for (puVar5 = puVar4; puVar5 != puVar6; puVar5 = puVar5 + 4) {
        FUN_18015c010(puVar5);
      }
      param_1[1] = (longlong)puVar4;
      return;
    }
    if (puVar6 != puVar4) {
      do {
        if (puVar6 != param_2) {
          puVar4 = param_2;
          if (0xf < (ulonglong)param_2[3]) {
            puVar4 = (undefined8 *)*param_2;
          }
          FUN_180113930(puVar6,puVar4,param_2[2]);
        }
        puVar6 = puVar6 + 4;
        param_2 = param_2 + 4;
        puVar4 = (undefined8 *)param_1[1];
      } while (puVar6 != puVar4);
    }
    lVar1 = FUN_18014fba0(param_2,param_3 - uVar2,puVar4,param_1);
    param_1[1] = lVar1;
    return;
  }
  if (0x7ffffffffffffff < param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_1801136f0();
  }
  if (0x7ffffffffffffff - (uVar2 >> 1) < uVar2) {
    uVar2 = 0x7ffffffffffffff;
  }
  else {
    uVar2 = uVar2 + (uVar2 >> 1);
    if (uVar2 < param_3) {
      uVar2 = param_3;
    }
  }
  if (puVar6 != (undefined8 *)0x0) {
    puVar4 = (undefined8 *)param_1[1];
    for (; puVar6 != puVar4; puVar6 = puVar6 + 4) {
      FUN_18015c010(puVar6);
    }
    lVar1 = *param_1;
    lVar3 = lVar1;
    if ((0xfff < (param_1[2] - lVar1 & 0xffffffffffffffe0U)) &&
       (lVar3 = *(longlong *)(lVar1 + -8), 0x1f < (lVar1 - lVar3) - 8U)) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    FUN_1804547d0(lVar3);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  if (0x7ffffffffffffff < uVar2) {
                    /* WARNING: Subroutine does not return */
    FUN_18015bc80();
  }
  lVar1 = FUN_18015bca0(uVar2 * 0x20);
  *param_1 = lVar1;
  param_1[1] = lVar1;
  param_1[2] = uVar2 * 0x20 + lVar1;
  lVar1 = FUN_18014fba0(param_2,param_3,lVar1,param_1);
  param_1[1] = lVar1;
  return;
}



