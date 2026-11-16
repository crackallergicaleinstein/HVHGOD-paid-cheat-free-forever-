// FUN_1802eaa70 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802eaa70 */

undefined8 * FUN_1802eaa70(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong lVar8;
  
  lVar6 = param_2 - DAT_180cc99c0;
  lVar5 = (DAT_180cc99c8 - DAT_180cc99c0) / 0x14;
  if (lVar5 == 0xccccccccccccccc) {
                    /* WARNING: Subroutine does not return */
    FUN_1801136f0();
  }
  uVar1 = lVar5 + 1;
  uVar3 = (DAT_180cc99d0 - DAT_180cc99c0) / 0x14;
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
  lVar5 = FUN_18015bca0(uVar7 * 0x14);
  puVar2 = (undefined8 *)(lVar5 + (lVar6 / 0x14) * 0x14);
  uVar4 = param_3[1];
  *puVar2 = *param_3;
  puVar2[1] = uVar4;
  *(undefined4 *)(puVar2 + 2) = *(undefined4 *)(param_3 + 2);
  if (param_2 == DAT_180cc99c8) {
    lVar8 = DAT_180cc99c8 - DAT_180cc99c0;
    lVar6 = lVar5;
    param_2 = DAT_180cc99c0;
  }
  else {
    FUN_18063aed0(lVar5,DAT_180cc99c0,param_2 - DAT_180cc99c0);
    lVar8 = DAT_180cc99c8 - param_2;
    lVar6 = (longlong)puVar2 + 0x14;
  }
  FUN_18063aed0(lVar6,param_2,lVar8);
  if (DAT_180cc99c0 != 0) {
    lVar6 = DAT_180cc99c0;
    if ((0xfff < (ulonglong)(((DAT_180cc99d0 - DAT_180cc99c0) / 0x14) * 0x14)) &&
       (lVar6 = *(longlong *)(DAT_180cc99c0 + -8), 0x1f < (DAT_180cc99c0 - lVar6) - 8U)) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    FUN_1804547d0(lVar6);
  }
  DAT_180cc99c0 = lVar5;
  DAT_180cc99c8 = lVar5 + uVar1 * 0x14;
  DAT_180cc99d0 = uVar7 * 0x14 + lVar5;
  return puVar2;
}



