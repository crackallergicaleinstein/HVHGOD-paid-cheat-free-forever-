// FUN_18044d4a0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18044d4a0 */

undefined8 * FUN_18044d4a0(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  longlong lVar8;
  longlong lVar9;
  
  lVar8 = (param_2 - (longlong)DAT_180c62bb0) / 6 + (param_2 - (longlong)DAT_180c62bb0 >> 0x3f);
  lVar9 = ((longlong)DAT_180c62bb8 - (longlong)DAT_180c62bb0) / 0x18;
  if (lVar9 == 0xaaaaaaaaaaaaaaa) {
                    /* WARNING: Subroutine does not return */
    FUN_1801baf80();
  }
  uVar1 = lVar9 + 1;
  uVar3 = ((longlong)DAT_180c62bc0 - (longlong)DAT_180c62bb0) / 0x18;
  if (0xaaaaaaaaaaaaaaa - (uVar3 >> 1) < uVar3) {
    uVar6 = 0xaaaaaaaaaaaaaaa;
  }
  else {
    uVar3 = (uVar3 >> 1) + uVar3;
    uVar6 = uVar1;
    if (uVar1 <= uVar3) {
      uVar6 = uVar3;
    }
    if (0xaaaaaaaaaaaaaaa < uVar6) {
                    /* WARNING: Subroutine does not return */
      FUN_18015bc80();
    }
  }
  puVar5 = (undefined8 *)FUN_18015bca0(uVar6 * 0x18);
  puVar2 = puVar5 + ((lVar8 >> 2) - (lVar8 >> 0x3f)) * 3;
  uVar4 = param_3[1];
  *puVar2 = *param_3;
  puVar2[1] = uVar4;
  puVar2[2] = param_3[2];
  if ((undefined8 *)param_2 == DAT_180c62bb8) {
    lVar9 = (longlong)DAT_180c62bb8 - (longlong)DAT_180c62bb0;
    puVar7 = puVar5;
    param_2 = (longlong)DAT_180c62bb0;
  }
  else {
    FUN_18063aed0(puVar5,DAT_180c62bb0,param_2 - (longlong)DAT_180c62bb0);
    lVar9 = (longlong)DAT_180c62bb8 - param_2;
    puVar7 = puVar2 + 3;
  }
  FUN_18063aed0(puVar7,param_2,lVar9);
  if (DAT_180c62bb0 != (undefined8 *)0x0) {
    lVar9 = (longlong)DAT_180c62bb0;
    if ((0xfff < (ulonglong)((((longlong)DAT_180c62bc0 - (longlong)DAT_180c62bb0) / 0x18) * 0x18))
       && (lVar9 = *(longlong *)((longlong)DAT_180c62bb0 + -8),
          0x1f < ((longlong)DAT_180c62bb0 - lVar9) - 8U)) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    FUN_1804547d0(lVar9);
  }
  DAT_180c62bb0 = puVar5;
  DAT_180c62bb8 = puVar5 + uVar1 * 3;
  DAT_180c62bc0 = puVar5 + uVar6 * 3;
  return puVar2;
}



