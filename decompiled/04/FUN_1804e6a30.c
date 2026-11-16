// FUN_1804e6a30 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804e6a30 */

void FUN_1804e6a30(longlong param_1,longlong param_2)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  
  lVar1 = *(longlong *)(param_1 + 0xa0);
  if ((lVar1 != 0) && (uVar4 = 0, 0 < *(int *)(lVar1 + 0xc0))) {
    do {
      uVar2 = uVar4 & 0x1f;
      uVar3 = uVar4;
      if ((int)uVar4 < 0) {
        uVar3 = uVar4 + 0x1f;
        uVar2 = uVar2 - 0x20;
      }
      lVar5 = *(longlong *)(*(longlong *)(lVar1 + 0xd0) + (longlong)((int)uVar3 >> 5) * 8) +
              (longlong)(int)uVar2 * 0x68;
      if (((*(int *)(lVar5 + 0x50) <= *(int *)(*(longlong *)(param_1 + 0xa0) + 0xa4)) &&
          (*(longlong *)(lVar5 + 0x58) == param_2)) && ((*(uint *)(lVar5 + 0x4c) & 0x4000000) == 0))
      {
        FUN_1804e67c0(param_1,param_2);
      }
      uVar4 = uVar4 + 1;
    } while ((int)uVar4 < *(int *)(lVar1 + 0xc0));
  }
  return;
}



