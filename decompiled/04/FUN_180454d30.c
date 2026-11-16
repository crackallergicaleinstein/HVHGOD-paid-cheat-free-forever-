// FUN_180454d30 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180454d30 */

undefined8 * FUN_180454d30(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  
  uVar8 = param_2 - (longlong)DAT_180c62c20;
  lVar5 = (longlong)DAT_180c62c28 - (longlong)DAT_180c62c20 >> 4;
  if (lVar5 == 0xfffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    FUN_1801136f0();
  }
  uVar6 = lVar5 + 1;
  uVar3 = (longlong)DAT_180c62c30 - (longlong)DAT_180c62c20 >> 4;
  if (0xfffffffffffffff - (uVar3 >> 1) < uVar3) {
    uVar7 = 0xfffffffffffffff;
  }
  else {
    uVar3 = (uVar3 >> 1) + uVar3;
    uVar7 = uVar6;
    if (uVar6 <= uVar3) {
      uVar7 = uVar3;
    }
    if (0xfffffffffffffff < uVar7) {
                    /* WARNING: Subroutine does not return */
      FUN_18015bc80();
    }
  }
  puVar2 = (undefined8 *)FUN_18015bca0(uVar7 * 0x10);
  puVar9 = (undefined8 *)((uVar8 & 0xfffffffffffffff0) + (longlong)puVar2);
  uVar1 = param_3[1];
  *puVar9 = *param_3;
  puVar9[1] = uVar1;
  puVar4 = puVar2;
  lVar5 = (longlong)DAT_180c62c20;
  if ((undefined8 *)param_2 != DAT_180c62c28) {
    FUN_18063aed0(puVar2,DAT_180c62c20,param_2 - (longlong)DAT_180c62c20);
    puVar4 = puVar9 + 2;
    lVar5 = param_2;
  }
  FUN_18063aed0(puVar4,lVar5);
  if (DAT_180c62c20 != (undefined8 *)0x0) {
    lVar5 = (longlong)DAT_180c62c20;
    if ((0xfff < ((longlong)DAT_180c62c30 - (longlong)DAT_180c62c20 & 0xfffffffffffffff0U)) &&
       (lVar5 = *(longlong *)((longlong)DAT_180c62c20 + -8),
       0x1f < ((longlong)DAT_180c62c20 - lVar5) - 8U)) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    FUN_1804547d0(lVar5);
  }
  DAT_180c62c20 = puVar2;
  DAT_180c62c28 = puVar2 + uVar6 * 2;
  DAT_180c62c30 = puVar2 + uVar7 * 2;
  return puVar9;
}



