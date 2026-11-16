// FUN_18059bbf0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18059bbf0 */

int FUN_18059bbf0(byte *param_1,int param_2)

{
  byte bVar1;
  int *piVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  
  piVar2 = *(int **)(param_1 + 0x10);
  if (param_2 <= *piVar2) {
    return **(int **)(param_1 + 8) << 0x10;
  }
  bVar1 = *param_1;
  iVar5 = 1;
  if (1 < bVar1) {
    lVar3 = 1;
    do {
      if (param_2 <= piVar2[lVar3]) {
        lVar4 = (longlong)iVar5;
        lVar3 = lVar4 * 4 + -4;
        iVar5 = FUN_1805753e0(param_2 - piVar2[lVar4 + -1],
                              *(int *)(lVar4 * 4 + *(longlong *)(param_1 + 8)) -
                              *(int *)(lVar3 + *(longlong *)(param_1 + 8)),
                              piVar2[lVar4] - piVar2[lVar4 + -1]);
        return (iVar5 + *(int *)(*(longlong *)(param_1 + 8) + lVar3)) * 0x10000;
      }
      iVar5 = iVar5 + 1;
      lVar3 = lVar3 + 1;
    } while (lVar3 < (longlong)(ulonglong)bVar1);
  }
  return *(int *)(*(longlong *)(param_1 + 8) + -4 + (ulonglong)bVar1 * 4) << 0x10;
}



