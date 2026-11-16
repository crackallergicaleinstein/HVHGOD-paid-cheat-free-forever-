// FUN_180211c30 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180211c30 */

void FUN_180211c30(longlong *param_1,ulonglong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  if (0x7fffffffffffffff < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1801136f0();
  }
  lVar1 = param_1[1];
  lVar2 = *param_1;
  uVar4 = param_1[2] - *param_1;
  uVar5 = 0x7fffffffffffffff;
  if ((uVar4 <= 0x7fffffffffffffff - (uVar4 >> 1)) &&
     (uVar5 = (uVar4 >> 1) + uVar4, uVar5 < param_2)) {
    uVar5 = param_2;
  }
  lVar3 = FUN_18015bca0(uVar5);
  FUN_18063ab10(lVar3 + (lVar1 - lVar2),0,param_2 - (lVar1 - lVar2));
  FUN_18063aed0(lVar3,*param_1,param_1[1] - *param_1);
  FUN_1801413a0(param_1,lVar3,param_2,uVar5);
  return;
}



