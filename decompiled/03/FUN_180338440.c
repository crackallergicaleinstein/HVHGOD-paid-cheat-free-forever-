// FUN_180338440 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180338440 */

undefined8 * FUN_180338440(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  longlong lVar8;
  
  lVar5 = param_2 - DAT_180bda1c0;
  lVar4 = (DAT_180bda1c8 - DAT_180bda1c0) / 0x1c;
  if (lVar4 == 0x924924924924924) {
                    /* WARNING: Subroutine does not return */
    FUN_1801baf80();
  }
  uVar1 = lVar4 + 1;
  uVar2 = (DAT_180bda1d0 - DAT_180bda1c0) / 0x1c;
  if (0x924924924924924 - (uVar2 >> 1) < uVar2) {
    uVar6 = 0x924924924924924;
  }
  else {
    uVar2 = (uVar2 >> 1) + uVar2;
    uVar6 = uVar1;
    if (uVar1 <= uVar2) {
      uVar6 = uVar2;
    }
    if (0x924924924924924 < uVar6) {
                    /* WARNING: Subroutine does not return */
      FUN_18015bc80();
    }
  }
  lVar4 = FUN_18015bca0(uVar6 * 0x1c);
  puVar7 = (undefined8 *)((lVar5 / 0x1c) * 0x1c + lVar4);
  uVar3 = param_3[1];
  *puVar7 = *param_3;
  puVar7[1] = uVar3;
  puVar7[2] = param_3[2];
  *(undefined4 *)(puVar7 + 3) = *(undefined4 *)(param_3 + 3);
  if (param_2 == DAT_180bda1c8) {
    lVar8 = DAT_180bda1c8 - DAT_180bda1c0;
    lVar5 = lVar4;
    param_2 = DAT_180bda1c0;
  }
  else {
    FUN_18063aed0(lVar4,DAT_180bda1c0,param_2 - DAT_180bda1c0);
    lVar8 = DAT_180bda1c8 - param_2;
    lVar5 = (longlong)puVar7 + 0x1c;
  }
  FUN_18063aed0(lVar5,param_2,lVar8);
  if (DAT_180bda1c0 != 0) {
    lVar5 = DAT_180bda1c0;
    if ((0xfff < (ulonglong)(((DAT_180bda1d0 - DAT_180bda1c0) / 0x1c) * 0x1c)) &&
       (lVar5 = *(longlong *)(DAT_180bda1c0 + -8), 0x1f < (DAT_180bda1c0 - lVar5) - 8U)) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    FUN_1804547d0(lVar5);
  }
  DAT_180bda1c0 = lVar4;
  DAT_180bda1c8 = uVar1 * 0x1c + lVar4;
  DAT_180bda1d0 = uVar6 * 0x1c + lVar4;
  return puVar7;
}



