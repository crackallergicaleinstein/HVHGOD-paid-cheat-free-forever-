// FUN_180372440 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180372440 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180372440(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  int iVar1;
  char in_stack_00000038;
  uint uStack_c;
  
  iVar1 = FUN_1805f68d0(&DAT_1808e4860);
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(5);
  }
  if (DAT_1808e48ac == 0x7fffffff) {
    DAT_1808e48ac = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(6);
  }
  if ((((*param_3 != 0) && (param_3[1] != 0)) && (param_3[2] != 0)) &&
     ((ulonglong)param_3[2] < 0x400001)) {
    if (((DAT_1808e48b0 != *param_3) || (DAT_1808e48b8 != param_3[1])) ||
       (DAT_1808e48c8 != (int)param_3[3])) {
      FUN_1801ac870(&DAT_1808e48d0);
      DAT_1808e491c = '\0';
    }
    DAT_1808e48b0 = *param_3;
    DAT_1808e48b8 = param_3[1];
    DAT_1808e48c0 = param_3[2];
    _DAT_1808e48c8 = param_3[3];
    FUN_1803725a0();
    if ((in_stack_00000038 != '\0') && (DAT_1808e491c == '\0')) {
      FUN_1801ac870(&DAT_1808e48d0);
      _DAT_1808e48c8 = (ulonglong)uStack_c << 0x20;
      DAT_1808e48b0 = 0;
      DAT_1808e48b8 = 0;
      DAT_1808e48c0 = 0;
    }
  }
  FUN_1805f68fc(&DAT_1808e4860);
  return;
}



