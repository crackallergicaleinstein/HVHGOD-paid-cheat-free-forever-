// FUN_1804f2a20 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804f2a20 */

void FUN_1804f2a20(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  lVar1 = DAT_180bb8ae8;
  if ((*(byte *)(param_1 + 4) & 2) == 0) {
    iVar4 = 0;
    if (0 < *(int *)(param_1 + 0x6c)) {
      do {
        *(short *)((longlong)iVar4 * 0x78 + 0x5a + *(longlong *)(param_1 + 0x18)) = (short)iVar4;
        *(short *)(*(longlong *)(param_1 + 0x28) + (longlong)iVar4 * 2) = (short)iVar4;
        iVar4 = iVar4 + 1;
      } while (iVar4 < *(int *)(param_1 + 0x6c));
      return;
    }
  }
  else {
    FUN_1804d0ea0(DAT_180bb8ae8 + 0x2ad0,*(int *)(param_1 + 0x6c) << 4);
    lVar1 = *(longlong *)(lVar1 + 0x2ad8);
    iVar5 = 0;
    iVar4 = *(int *)(param_1 + 0x6c);
    iVar3 = 0;
    if (0 < iVar4) {
      do {
        lVar2 = (longlong)iVar3;
        *(short *)(lVar1 + lVar2 * 0x10) = (short)iVar3;
        iVar3 = iVar3 + 1;
        *(longlong *)(lVar1 + 8 + lVar2 * 0x10) = param_1;
        iVar4 = *(int *)(param_1 + 0x6c);
      } while (iVar3 < iVar4);
    }
    if (1 < (ulonglong)(longlong)iVar4) {
      FUN_1806192c0(lVar1,(longlong)iVar4,0x10,FUN_1804f29d0);
    }
    iVar4 = 0;
    if (0 < *(int *)(param_1 + 0x6c)) {
      do {
        *(short *)((longlong)*(short *)(lVar1 + (longlong)iVar4 * 0x10) * 0x78 + 0x5a +
                  *(longlong *)(param_1 + 0x18)) = (short)iVar4;
        iVar4 = iVar4 + 1;
      } while (iVar4 < *(int *)(param_1 + 0x6c));
      if (0 < *(int *)(param_1 + 0x6c)) {
        do {
          *(short *)(*(longlong *)(param_1 + 0x28) +
                    (longlong)
                    *(short *)((longlong)iVar5 * 0x78 + 0x5a + *(longlong *)(param_1 + 0x18)) * 2) =
               (short)iVar5;
          iVar5 = iVar5 + 1;
        } while (iVar5 < *(int *)(param_1 + 0x6c));
      }
    }
  }
  return;
}



