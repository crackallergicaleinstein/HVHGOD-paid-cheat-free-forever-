// FUN_180176b20 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180176b20 */

longlong * FUN_180176b20(longlong *param_1,ulonglong param_2)

{
  longlong lVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (param_2 != 0) {
    if (0x7fffffffffffffff < param_2) {
                    /* WARNING: Subroutine does not return */
      FUN_1801136f0();
    }
    lVar1 = FUN_18015bca0(param_2);
    *param_1 = lVar1;
    param_1[2] = lVar1 + param_2;
    FUN_18063ab10(lVar1,0,param_2);
    param_1[1] = lVar1 + param_2;
  }
  return param_1;
}



