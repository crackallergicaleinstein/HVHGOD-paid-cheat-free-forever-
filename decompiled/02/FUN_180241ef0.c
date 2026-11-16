// FUN_180241ef0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180241ef0 */

undefined8 * FUN_180241ef0(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong lVar8;
  
  lVar4 = *param_1;
  lVar6 = (param_2 - lVar4) / 6 + (param_2 - lVar4 >> 0x3f);
  lVar5 = (param_1[1] - lVar4) / 0xc;
  if (lVar5 == 0x1555555555555555) {
                    /* WARNING: Subroutine does not return */
    FUN_1801136f0();
  }
  uVar1 = lVar5 + 1;
  uVar3 = (param_1[2] - lVar4) / 0xc;
  if (0x1555555555555555 - (uVar3 >> 1) < uVar3) {
    uVar7 = 0x1555555555555555;
  }
  else {
    uVar3 = (uVar3 >> 1) + uVar3;
    uVar7 = uVar1;
    if (uVar1 <= uVar3) {
      uVar7 = uVar3;
    }
    if (0x1555555555555555 < uVar7) {
                    /* WARNING: Subroutine does not return */
      FUN_18015bc80();
    }
  }
  lVar5 = FUN_18015bca0(uVar7 * 0xc);
  puVar2 = (undefined8 *)(lVar5 + ((lVar6 >> 1) - (lVar6 >> 0x3f)) * 0xc);
  *puVar2 = *param_3;
  *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(param_3 + 1);
  lVar4 = *param_1;
  if (param_2 == param_1[1]) {
    lVar8 = param_1[1] - lVar4;
    lVar6 = lVar5;
    param_2 = lVar4;
  }
  else {
    FUN_18063aed0(lVar5,lVar4,param_2 - lVar4);
    lVar8 = param_1[1] - param_2;
    lVar6 = (longlong)puVar2 + 0xc;
  }
  FUN_18063aed0(lVar6,param_2,lVar8);
  FUN_180242190(param_1,lVar5,uVar1,uVar7);
  return puVar2;
}



