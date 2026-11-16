// FUN_18013f3b0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18013f3b0 */

void FUN_18013f3b0(longlong *param_1,ulonglong param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  longlong lVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  ulonglong uVar9;
  undefined1 *puVar10;
  undefined8 *puVar11;
  
  lVar6 = *param_1;
  puVar7 = (undefined1 *)param_1[1];
  uVar9 = (longlong)puVar7 - lVar6 >> 4;
  if (param_2 < uVar9) {
    puVar8 = (undefined1 *)(param_2 * 0x10 + lVar6);
    for (puVar10 = puVar8; puVar10 != puVar7; puVar10 = puVar10 + 0x10) {
      FUN_1800aab30(puVar10);
    }
    param_1[1] = (longlong)puVar8;
    return;
  }
  if (uVar9 < param_2) {
    uVar5 = param_1[2] - lVar6 >> 4;
    if (uVar5 < param_2) {
      if (0xfffffffffffffff < param_2) {
                    /* WARNING: Subroutine does not return */
        FUN_1801136f0();
      }
      if (0xfffffffffffffff - (uVar5 >> 1) < uVar5) {
        uVar5 = 0xfffffffffffffff;
      }
      else {
        uVar5 = uVar5 + (uVar5 >> 1);
        if (uVar5 < param_2) {
          uVar5 = param_2;
        }
        else if (0xfffffffffffffff < uVar5) {
                    /* WARNING: Subroutine does not return */
          FUN_18015bc80();
        }
      }
      puVar3 = (undefined8 *)FUN_18015bca0(uVar5 << 4);
      puVar11 = puVar3 + uVar9 * 2;
      for (lVar6 = param_2 - uVar9; lVar6 != 0; lVar6 = lVar6 + -1) {
        *(undefined1 *)puVar11 = 0;
        FUN_180111d10(puVar11 + 1,0);
        puVar11 = puVar11 + 2;
      }
      puVar1 = (undefined8 *)param_1[1];
      puVar11 = puVar3;
      for (puVar4 = (undefined8 *)*param_1; puVar4 != puVar1; puVar4 = puVar4 + 2) {
        uVar2 = puVar4[1];
        *puVar11 = *puVar4;
        puVar11[1] = uVar2;
        *(undefined1 *)puVar4 = 0;
        puVar4[1] = 0;
        puVar11 = puVar11 + 2;
      }
      FUN_180156b10(param_1,puVar3,param_2,uVar5);
      return;
    }
    for (lVar6 = param_2 - uVar9; lVar6 != 0; lVar6 = lVar6 + -1) {
      *puVar7 = 0;
      FUN_180111d10(puVar7 + 8,0);
      puVar7 = puVar7 + 0x10;
    }
    param_1[1] = (longlong)puVar7;
  }
  return;
}



