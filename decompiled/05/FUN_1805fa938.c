// FUN_1805fa938 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805fa938 */

void FUN_1805fa938(void)

{
  DWORD DVar1;
  int iVar2;
  undefined *puVar3;
  longlong lVar4;
  longlong *plVar5;
  
  puVar3 = &DAT_180bb13a0;
  DVar1 = GetCurrentThreadId();
  iVar2 = FUN_1805f68d0(&DAT_1808d5f80);
  if (iVar2 != 0) {
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
    iVar2 = *(int *)(puVar3 + 800);
    if (iVar2 != 0) {
      plVar5 = (longlong *)(puVar3 + 0x10);
      do {
        if (0x13 < lVar4) break;
        if ((*plVar5 != 0) && (*(DWORD *)(plVar5 + -1) == DVar1)) {
          if ((undefined4 *)plVar5[2] != (undefined4 *)0x0) {
            *(undefined4 *)plVar5[2] = 1;
          }
          FUN_1805f68fc(*plVar5);
          FUN_1805f6a54(plVar5[1]);
          *plVar5 = 0;
          *(int *)(puVar3 + 800) = *(int *)(puVar3 + 800) + -1;
          iVar2 = *(int *)(puVar3 + 800);
        }
        lVar4 = lVar4 + 1;
        plVar5 = plVar5 + 5;
      } while (iVar2 != 0);
    }
    puVar3 = *(undefined **)(puVar3 + 0x328);
    if (puVar3 == (undefined *)0x0) {
      FUN_1805f68fc(&DAT_1808d5f80);
      return;
    }
  } while( true );
}



