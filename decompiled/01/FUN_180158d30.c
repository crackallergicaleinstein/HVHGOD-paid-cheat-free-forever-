// FUN_180158d30 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180158d30 */

void FUN_180158d30(longlong *param_1,ulonglong param_2,int *param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  int *piVar5;
  
  lVar3 = *param_1;
  piVar5 = (int *)param_1[1];
  uVar4 = (longlong)piVar5 - lVar3 >> 2;
  if (param_2 < uVar4) {
    param_1[1] = lVar3 + param_2 * 4;
    return;
  }
  if (uVar4 < param_2) {
    uVar2 = param_1[2] - lVar3 >> 2;
    if (uVar2 < param_2) {
      if (0x3fffffffffffffff < param_2) {
                    /* WARNING: Subroutine does not return */
        FUN_1801136f0();
      }
      if (0x3fffffffffffffff - (uVar2 >> 1) < uVar2) {
        uVar2 = 0x3fffffffffffffff;
      }
      else {
        uVar2 = uVar2 + (uVar2 >> 1);
        if (uVar2 < param_2) {
          uVar2 = param_2;
        }
        else if (0x3fffffffffffffff < uVar2) {
                    /* WARNING: Subroutine does not return */
          FUN_18015bc80();
        }
      }
      lVar1 = FUN_18015bca0(uVar2 * 4);
      piVar5 = (int *)(lVar1 + uVar4 * 4);
      lVar3 = param_2 - uVar4;
      if (*param_3 == 0) {
        FUN_18063ab10(piVar5,0,lVar3 * 4);
      }
      else {
        for (; lVar3 != 0; lVar3 = lVar3 + -1) {
          *piVar5 = *param_3;
          piVar5 = piVar5 + 1;
        }
      }
      FUN_18063aed0(lVar1,*param_1,param_1[1] - *param_1);
      FUN_180158f30(param_1,lVar1,param_2,uVar2);
      return;
    }
    lVar3 = param_2 - uVar4;
    if (*param_3 == 0) {
      FUN_18063ab10(piVar5,0,lVar3 * 4);
      piVar5 = piVar5 + lVar3;
    }
    else {
      for (; lVar3 != 0; lVar3 = lVar3 + -1) {
        *piVar5 = *param_3;
        piVar5 = piVar5 + 1;
      }
    }
    param_1[1] = (longlong)piVar5;
  }
  return;
}



