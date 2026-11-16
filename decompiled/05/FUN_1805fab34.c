// FUN_1805fab34 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805fab34 */

void FUN_1805fab34(longlong param_1)

{
  int iVar1;
  longlong *plVar2;
  undefined *puVar3;
  longlong lVar4;
  
  puVar3 = &DAT_180bb13a0;
  iVar1 = FUN_1805f68d0(&DAT_1808d5f80);
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(5);
  }
  if (DAT_1808d5fcc == 0x7fffffff) {
    DAT_1808d5fcc = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(6);
  }
  do {
    lVar4 = 0;
    iVar1 = *(int *)(puVar3 + 800);
    if (iVar1 != 0) {
      plVar2 = (longlong *)(puVar3 + 0x10);
      do {
        if (0x13 < lVar4) break;
        if (*plVar2 == param_1) {
          *plVar2 = 0;
          *(int *)(puVar3 + 800) = *(int *)(puVar3 + 800) + -1;
          iVar1 = *(int *)(puVar3 + 800);
        }
        lVar4 = lVar4 + 1;
        plVar2 = plVar2 + 5;
      } while (iVar1 != 0);
    }
    puVar3 = *(undefined **)(puVar3 + 0x328);
    if (puVar3 == (undefined *)0x0) {
      FUN_1805f68fc(&DAT_1808d5f80);
      return;
    }
  } while( true );
}



