// FUN_18019c2a0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18019c2a0 */

void FUN_18019c2a0(longlong param_1)

{
  char cVar1;
  int iVar2;
  ULONGLONG UVar3;
  longlong lVar4;
  undefined1 local_28 [8];
  undefined *local_20;
  
  iVar2 = DAT_180bb85c8;
  if (DAT_180bb85c8 == 0) {
    UVar3 = GetTickCount64();
    if (UVar3 < DAT_180bb85c0) {
      return;
    }
    local_20 = &DAT_1808d89f0;
    iVar2 = FUN_1805f68d0(&DAT_1808d89f0);
    if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1805f6d44(5);
    }
    if (DAT_1808d8a3c == 0x7fffffff) {
      DAT_1808d8a3c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
      FUN_1805f6d44(6);
    }
    if ((DAT_180bb85c8 == 0) && (DAT_180bb85c0 <= UVar3)) {
      DAT_180bb85c8 = FUN_1804174b0("C_CSPlayerPawn",0x22bae6fd);
      if (DAT_180bb85c8 == 0) {
        DAT_180bb85c0 = UVar3 + 1000;
      }
      else {
        DAT_180bb85c0 = 0xffffffffffffffff;
      }
    }
    iVar2 = DAT_180bb85c8;
    FUN_1805f68fc(&DAT_1808d89f0);
    if (iVar2 == 0) {
      return;
    }
  }
  local_28[0] = 1;
  cVar1 = FUN_1804513c0(iVar2 + param_1,1,1);
  if (cVar1 != '\0') {
    lVar4 = FUN_18017ea70();
    *(int *)(lVar4 + 4) = *(int *)(lVar4 + 4) + 1;
    cVar1 = FUN_1801ad7b0(iVar2 + param_1,local_28);
    lVar4 = FUN_18017ea70();
    if (*(int *)(lVar4 + 4) != 0) {
      *(int *)(lVar4 + 4) = *(int *)(lVar4 + 4) + -1;
    }
    if ((cVar1 != '\0') && (param_1 != 0)) {
      lVar4 = FUN_18017ea70();
      *(int *)(lVar4 + 4) = *(int *)(lVar4 + 4) + 1;
      FUN_1801aebc0(param_1);
      lVar4 = FUN_18017ea70();
      if (*(int *)(lVar4 + 4) != 0) {
        *(int *)(lVar4 + 4) = *(int *)(lVar4 + 4) + -1;
      }
    }
  }
  return;
}



