// FUN_180290660 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180290660 */

void FUN_180290660(longlong param_1)

{
  undefined1 (*pauVar1) [16];
  undefined1 (*pauVar2) [16];
  undefined1 (*pauVar3) [16];
  int iVar4;
  
  iVar4 = FUN_1805f68d0(&DAT_180b8e3d0);
  if (iVar4 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(5);
  }
  if (DAT_180b8e41c == 0x7fffffff) {
    DAT_180b8e41c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(6);
  }
  pauVar1 = *(undefined1 (**) [16])(param_1 + 8);
  for (pauVar2 = *(undefined1 (**) [16])*pauVar1; pauVar2 != pauVar1;
      pauVar2 = *(undefined1 (**) [16])*pauVar2) {
    pauVar3 = pauVar2;
    while (pauVar3 = pauVar3 + 2, pauVar3 != pauVar2 + 10) {
      FUN_180291a50(pauVar3);
    }
    pauVar2[10] = (undefined1  [16])0x0;
  }
  FUN_180297dc0(param_1);
  FUN_1805f68fc(&DAT_180b8e3d0);
  return;
}



