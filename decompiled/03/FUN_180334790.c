// FUN_180334790 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180334790 */

void FUN_180334790(longlong *param_1,ulonglong param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  lVar1 = *param_1;
  if ((ulonglong)((param_1[2] - lVar1) / 0x28) < param_2) {
    if (0x666666666666666 < param_2) {
                    /* WARNING: Subroutine does not return */
      FUN_1801136f0();
    }
    lVar2 = param_1[1];
    uVar3 = FUN_18015bca0(param_2 * 0x28);
    FUN_18063aed0(uVar3,*param_1,param_1[1] - *param_1);
    FUN_180338920(param_1,uVar3,(lVar2 - lVar1) / 0x28,param_2);
  }
  return;
}



