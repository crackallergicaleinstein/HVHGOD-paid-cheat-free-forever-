// FUN_18015ac60 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18015ac60 */

longlong * FUN_18015ac60(longlong *param_1,longlong *param_2,ulonglong param_3,ulonglong param_4)

{
  ulonglong uVar1;
  
  if ((ulonglong)param_1[1] < param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_18015ac40();
  }
  uVar1 = param_1[1] - param_3;
  *param_2 = *param_1 + param_3;
  if (uVar1 < param_4) {
    param_4 = uVar1;
  }
  param_2[1] = param_4;
  return param_2;
}



