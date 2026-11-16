// FUN_1803d2900 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1803d2900 */

void FUN_1803d2900(longlong *param_1,ulonglong param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  lVar1 = *param_1;
  if ((ulonglong)(param_1[2] - lVar1 >> 2) < param_2) {
    if (0x3fffffffffffffff < param_2) {
                    /* WARNING: Subroutine does not return */
      FUN_1801136f0();
    }
    lVar2 = param_1[1];
    uVar3 = FUN_18015bca0(param_2 * 4);
    FUN_18063aed0(uVar3,*param_1,param_1[1] - *param_1);
    FUN_180158f30(param_1,uVar3,lVar2 - lVar1 >> 2,param_2);
  }
  return;
}



