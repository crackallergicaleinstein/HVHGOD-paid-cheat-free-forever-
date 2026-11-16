// FUN_18026b910 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18026b910 */

undefined4 * FUN_18026b910(longlong *param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined4 *puVar3;
  ulonglong uVar4;
  undefined4 *puVar5;
  ulonglong uVar6;
  longlong lVar7;
  ulonglong uVar8;
  
  lVar2 = *param_1;
  lVar7 = param_1[1] - lVar2 >> 2;
  if (lVar7 == 0x3fffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    FUN_1801136f0();
  }
  uVar8 = lVar7 + 1;
  uVar4 = param_1[2] - lVar2 >> 2;
  if (0x3fffffffffffffff - (uVar4 >> 1) < uVar4) {
    uVar6 = 0x3fffffffffffffff;
  }
  else {
    uVar4 = (uVar4 >> 1) + uVar4;
    uVar6 = uVar8;
    if (uVar8 <= uVar4) {
      uVar6 = uVar4;
    }
    if (0x3fffffffffffffff < uVar6) {
                    /* WARNING: Subroutine does not return */
      FUN_18015bc80();
    }
  }
  puVar3 = (undefined4 *)FUN_18015bca0(uVar6 * 4);
  puVar1 = puVar3 + (param_2 - lVar2 >> 2);
  *puVar1 = *param_3;
  lVar2 = *param_1;
  if (param_2 == param_1[1]) {
    lVar7 = param_1[1] - lVar2;
    puVar5 = puVar3;
    param_2 = lVar2;
  }
  else {
    FUN_18063aed0(puVar3,lVar2,param_2 - lVar2);
    lVar7 = param_1[1] - param_2;
    puVar5 = puVar1 + 1;
  }
  FUN_18063aed0(puVar5,param_2,lVar7);
  FUN_180158f30(param_1,puVar3,uVar8,uVar6);
  return puVar1;
}



