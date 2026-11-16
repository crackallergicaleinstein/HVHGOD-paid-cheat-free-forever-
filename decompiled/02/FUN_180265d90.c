// FUN_180265d90 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180265d90 */

void FUN_180265d90(longlong *param_1,ulonglong param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  if ((ulonglong)((param_1[2] - *param_1) / 0xc) < param_2) {
    if (0x1555555555555555 < param_2) {
                    /* WARNING: Subroutine does not return */
      FUN_1801136f0();
    }
    lVar2 = param_1[1] - *param_1;
    lVar2 = lVar2 / 6 + (lVar2 >> 0x3f);
    uVar1 = FUN_18015bca0(param_2 * 0xc);
    FUN_18063aed0(uVar1,*param_1,param_1[1] - *param_1);
    FUN_180242190(param_1,uVar1,(lVar2 >> 1) - (lVar2 >> 0x3f),param_2);
  }
  return;
}



