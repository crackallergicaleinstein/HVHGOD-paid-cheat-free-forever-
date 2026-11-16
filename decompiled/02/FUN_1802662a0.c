// FUN_1802662a0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802662a0 */

void FUN_1802662a0(longlong *param_1,ulonglong param_2)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  lVar2 = *param_1;
  lVar1 = param_1[1];
  uVar4 = lVar1 - lVar2 >> 2;
  if (param_2 < uVar4) {
    param_1[1] = lVar2 + param_2 * 4;
  }
  else if (uVar4 < param_2) {
    uVar3 = param_1[2] - lVar2 >> 2;
    if (uVar3 < param_2) {
      if (0x3fffffffffffffff < param_2) {
                    /* WARNING: Subroutine does not return */
        FUN_1801136f0();
      }
      if (0x3fffffffffffffff - (uVar3 >> 1) < uVar3) {
        uVar3 = 0x3fffffffffffffff;
      }
      else {
        uVar3 = uVar3 + (uVar3 >> 1);
        if (uVar3 < param_2) {
          uVar3 = param_2;
        }
        else if (0x3fffffffffffffff < uVar3) {
                    /* WARNING: Subroutine does not return */
          FUN_18015bc80();
        }
      }
      lVar2 = FUN_18015bca0(uVar3 * 4);
      FUN_18063ab10(lVar2 + uVar4 * 4,0,(param_2 - uVar4) * 4);
      FUN_18063aed0(lVar2,*param_1,param_1[1] - *param_1);
      FUN_180158f30(param_1,lVar2,param_2,uVar3);
    }
    else {
      lVar2 = (param_2 - uVar4) * 4;
      FUN_18063ab10(lVar1,0,lVar2);
      param_1[1] = lVar2 + lVar1;
    }
  }
  return;
}



