// FUN_18044f370 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18044f370 */

undefined8 * FUN_18044f370(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  longlong lVar8;
  
  lVar8 = param_2 - (longlong)DAT_180c62bc8;
  lVar3 = (longlong)DAT_180c62bd0 - (longlong)DAT_180c62bc8 >> 3;
  if (lVar3 == 0x1fffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    FUN_1801136f0();
  }
  uVar1 = lVar3 + 1;
  uVar5 = (longlong)DAT_180c62bd8 - (longlong)DAT_180c62bc8 >> 3;
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
  puVar2 = puVar4 + (lVar8 >> 3);
  *puVar2 = *param_3;
  puVar7 = puVar4;
  lVar3 = (longlong)DAT_180c62bc8;
  if ((undefined8 *)param_2 != DAT_180c62bd0) {
    FUN_18063aed0(puVar4,DAT_180c62bc8,param_2 - (longlong)DAT_180c62bc8);
    puVar7 = puVar2 + 1;
    lVar3 = param_2;
  }
  FUN_18063aed0(puVar7,lVar3);
  if (DAT_180c62bc8 != (undefined8 *)0x0) {
    if ((0xfff < ((longlong)DAT_180c62bd8 - (longlong)DAT_180c62bc8 & 0xfffffffffffffff8U)) &&
       (0x1f < ((longlong)DAT_180c62bc8 - *(longlong *)((longlong)DAT_180c62bc8 + -8)) - 8U)) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    FUN_1804547d0();
  }
  DAT_180c62bc8 = puVar4;
  DAT_180c62bd0 = puVar4 + uVar1;
  DAT_180c62bd8 = puVar4 + uVar6;
  return puVar2;
}



