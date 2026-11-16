// FUN_1802e9ec0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802e9ec0 */

undefined8 * FUN_1802e9ec0(longlong *param_1,longlong param_2)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  lVar4 = *param_1;
  lVar6 = param_1[1] - lVar4 >> 7;
  if (lVar6 == 0x1ffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    FUN_1801baf80();
  }
  uVar7 = lVar6 + 1;
  uVar2 = param_1[2] - lVar4 >> 7;
  if (0x1ffffffffffffff - (uVar2 >> 1) < uVar2) {
    uVar8 = 0x1ffffffffffffff;
  }
  else {
    uVar2 = (uVar2 >> 1) + uVar2;
    uVar8 = uVar7;
    if (uVar7 <= uVar2) {
      uVar8 = uVar2;
    }
    if (0x1ffffffffffffff < uVar8) {
                    /* WARNING: Subroutine does not return */
      FUN_18015bc80();
    }
  }
  puVar1 = (undefined8 *)FUN_18015bca0(uVar8 * 0x80);
  puVar5 = (undefined8 *)((param_2 - lVar4 & 0xffffffffffffff80U) + (longlong)puVar1);
  *puVar5 = 0;
  puVar5[1] = 0;
  puVar5[2] = 0;
  puVar5[3] = 0;
  puVar5[4] = 0;
  puVar5[5] = 0;
  puVar5[6] = 0;
  puVar5[7] = 0;
  puVar5[8] = 0;
  puVar5[9] = 0;
  puVar5[10] = 0;
  puVar5[0xb] = 0;
  puVar5[0xc] = 0;
  puVar5[0xd] = 0;
  puVar5[0xe] = 0;
  puVar5[0xf] = 0;
  lVar4 = *param_1;
  puVar3 = puVar1;
  if (param_2 != param_1[1]) {
    FUN_18063aed0(puVar1,lVar4,param_2 - lVar4);
    puVar3 = puVar5 + 0x10;
    lVar4 = param_2;
  }
  FUN_18063aed0(puVar3,lVar4);
  lVar4 = *param_1;
  if (lVar4 != 0) {
    lVar6 = lVar4;
    if ((0xfff < (param_1[2] - lVar4 & 0xffffffffffffff80U)) &&
       (lVar6 = *(longlong *)(lVar4 + -8), 0x1f < (lVar4 - lVar6) - 8U)) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    FUN_1804547d0(lVar6);
  }
  *param_1 = (longlong)puVar1;
  param_1[1] = (longlong)(puVar1 + uVar7 * 0x10);
  param_1[2] = (longlong)(puVar1 + uVar8 * 0x10);
  return puVar5;
}



