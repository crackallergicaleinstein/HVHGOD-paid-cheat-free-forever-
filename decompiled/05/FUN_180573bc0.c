// FUN_180573bc0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180573bc0 */

void FUN_180573bc0(longlong param_1)

{
  short *psVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  
  if (param_1 != 0) {
    lVar3 = 0;
    iVar4 = 0;
    if (*(short *)(param_1 + 0x60) != 0) {
      lVar2 = 0;
      do {
        lVar2 = lVar2 + 2;
        iVar4 = iVar4 + 1;
        psVar1 = (short *)(*(longlong *)(param_1 + 0x78) + -2 + lVar2);
        *psVar1 = *psVar1 + *(short *)(param_1 + 0x1a);
      } while (iVar4 < (int)(uint)*(ushort *)(param_1 + 0x60));
    }
    *(short *)(param_1 + 0x1a) = *(short *)(param_1 + 0x1a) + *(short *)(param_1 + 0x62);
    *(short *)(param_1 + 0x18) = *(short *)(param_1 + 0x18) + *(short *)(param_1 + 0x60);
    *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + *(int *)(param_1 + 0x98);
    *(undefined4 *)(param_1 + 0x98) = 0;
    *(short *)(param_1 + 0x60) = 0;
    *(undefined2 *)(param_1 + 0x62) = 0;
    FUN_180573c80(param_1);
    if (*(longlong *)(param_1 + 0x58) != 0) {
      lVar3 = (ulonglong)*(uint *)(param_1 + 0x50) * 0x20 + *(longlong *)(param_1 + 0x58);
    }
    *(longlong *)(param_1 + 0xa0) = lVar3;
  }
  return;
}



