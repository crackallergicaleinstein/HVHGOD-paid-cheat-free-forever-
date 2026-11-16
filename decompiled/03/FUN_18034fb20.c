// FUN_18034fb20 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18034fb20 */

void FUN_18034fb20(longlong *param_1,ulonglong param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  lVar1 = *param_1;
  if ((ulonglong)((param_1[2] - lVar1) / 0xe8) < param_2) {
    if (0x11a7b9611a7b961 < param_2) {
                    /* WARNING: Subroutine does not return */
      FUN_1801baf80();
    }
    lVar2 = param_1[1];
    uVar3 = FUN_18015bca0(param_2 * 0xe8);
    FUN_18063aed0(uVar3,*param_1,param_1[1] - *param_1);
    FUN_180352510(param_1,uVar3,(lVar2 - lVar1) / 0xe8,param_2);
  }
  return;
}



