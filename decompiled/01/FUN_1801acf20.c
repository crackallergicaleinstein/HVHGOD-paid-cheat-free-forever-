// FUN_1801acf20 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801acf20 */

void FUN_1801acf20(longlong *param_1,ulonglong param_2)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  lVar2 = *param_1;
  lVar1 = param_1[1];
  uVar5 = lVar1 - lVar2;
  if (param_2 < uVar5) {
    param_1[1] = lVar2 + param_2;
  }
  else if (uVar5 < param_2) {
    uVar3 = param_1[2] - lVar2;
    if (uVar3 < param_2) {
      if (0x7fffffffffffffff < param_2) {
                    /* WARNING: Subroutine does not return */
        FUN_1801136f0();
      }
      uVar4 = 0x7fffffffffffffff;
      if ((uVar3 <= 0x7fffffffffffffff - (uVar3 >> 1)) &&
         (uVar4 = uVar3 + (uVar3 >> 1), uVar4 < param_2)) {
        uVar4 = param_2;
      }
      lVar2 = FUN_18015bca0(uVar4);
      FUN_18063ab10(uVar5 + lVar2,0,param_2 - uVar5);
      FUN_18063aed0(lVar2,*param_1,param_1[1] - *param_1);
      FUN_1801413a0(param_1,lVar2,param_2,uVar4);
    }
    else {
      FUN_18063ab10(lVar1,0,param_2 - uVar5);
      param_1[1] = (param_2 - uVar5) + lVar1;
    }
  }
  return;
}



