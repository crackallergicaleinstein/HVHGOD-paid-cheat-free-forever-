// FUN_1803e1070 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1803e1070 */

void FUN_1803e1070(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  short sVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  
  sVar1 = thunk_FUN_180624430(param_2);
  fVar4 = (float)param_2;
  if (sVar1 < 1) {
    sVar1 = thunk_FUN_180624430(param_3);
    fVar3 = (float)param_3;
    if (sVar1 < 1) {
      iVar2 = FUN_1805f68d0(&DAT_1808edc30);
      if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1805f6d44(5);
      }
      if (DAT_1808edc7c == 0x7fffffff) {
        DAT_1808edc7c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
        FUN_1805f6d44(6);
      }
      DAT_1808edc80 = fVar4 + DAT_1808edc80;
      DAT_1808edc84 = fVar3 + DAT_1808edc84;
      FUN_1805f68fc(&DAT_1808edc30);
    }
  }
  return;
}



