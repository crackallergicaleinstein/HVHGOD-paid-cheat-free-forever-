// FUN_18044e4e0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18044e4e0 */

void FUN_18044e4e0(longlong *param_1)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  
  if (((*param_1 != 0) && (param_1[2] != 0)) && (cVar2 = FUN_18044e300(), cVar2 != '\0')) {
    iVar3 = FUN_1805f68d0(&DAT_1808e4e40);
    lVar1 = DAT_180c62bd0;
    if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1805f6d44(5);
    }
    if (DAT_1808e4e8c == 0x7fffffff) {
      DAT_1808e4e8c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
      FUN_1805f6d44(6);
    }
    lVar4 = thunk_FUN_1805f8160(DAT_180c62bc8,DAT_180c62bd0,param_1);
    if ((lVar4 != lVar1) && (lVar4 = FUN_1805f9ee0(lVar4,lVar1,param_1), lVar4 != lVar1)) {
      lVar5 = DAT_180c62bd0 - lVar1;
      FUN_18063aed0(lVar4,lVar1,lVar5);
      DAT_180c62bd0 = lVar5 + lVar4;
    }
    FUN_1805f68fc(&DAT_1808e4e40);
    if (param_1[2] != 0) {
      FUN_18044d6a0();
    }
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[9] = 0;
    param_1[10] = 0;
    *(undefined1 *)(param_1 + 0xb) = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
    *(undefined1 (*) [16])(param_1 + 7) = (undefined1  [16])0x0;
  }
  return;
}



