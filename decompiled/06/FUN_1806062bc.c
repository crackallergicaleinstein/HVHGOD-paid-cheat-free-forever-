// FUN_1806062bc - decompiled reference (Ghidra). Not original source, does not compile.

/* 1806062bc */

void FUN_1806062bc(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  bool bVar3;
  
  lVar2 = FUN_180606ee8();
  if (param_1 == *(longlong *)(lVar2 + 0x58)) {
    lVar2 = FUN_180606ee8();
    lVar2 = *(longlong *)(lVar2 + 0x58);
    while (lVar2 != 0) {
      lVar1 = *(longlong *)(lVar2 + 8);
      bVar3 = param_1 == lVar2;
      lVar2 = lVar1;
      if (bVar3) {
        lVar2 = FUN_180606ee8();
        *(longlong *)(lVar2 + 0x58) = lVar1;
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  abort();
}



