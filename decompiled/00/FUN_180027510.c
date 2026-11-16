// FUN_180027510 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180027510 */

ulonglong * FUN_180027510(ulonglong *param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uVar3 = param_3 - param_2;
  if (uVar3 != 0) {
    if ((longlong)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1801136f0();
    }
    if (uVar3 < 0x1000) {
      uVar2 = FUN_180454770(uVar3);
    }
    else {
      lVar1 = FUN_180454770(uVar3 + 0x27);
      uVar2 = lVar1 + 0x27U & 0xffffffffffffffe0;
      *(longlong *)(uVar2 - 8) = lVar1;
    }
    *param_1 = uVar2;
    param_1[1] = uVar2;
    param_1[2] = uVar2 + uVar3;
    FUN_18063aed0(uVar2,param_2,uVar3);
    param_1[1] = uVar2 + uVar3;
  }
  return param_1;
}



