// FUN_1804d3150 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804d3150 */

int FUN_1804d3150(longlong param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  
  if ((*(int *)(param_1 + 0x14) <= param_2) || (1 < *(int *)(param_1 + 0x3c))) {
    return -1;
  }
  lVar1 = *(longlong *)(param_1 + 8);
  if (*(int *)(param_1 + 0x3c) == 0) {
    lVar2 = (longlong)(param_2 * 2) + (longlong)*(int *)(param_1 + 0x18);
    iVar3 = (uint)CONCAT11(*(undefined1 *)(lVar2 + lVar1),*(undefined1 *)(lVar2 + 1 + lVar1)) * 2;
    iVar4 = (uint)CONCAT11(*(undefined1 *)(lVar2 + 2 + lVar1),*(undefined1 *)(lVar2 + 3 + lVar1)) *
            2;
  }
  else {
    lVar2 = (longlong)(param_2 * 4) + (longlong)*(int *)(param_1 + 0x18);
    iVar3 = CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)(lVar2 + lVar1),
                                       *(undefined1 *)(lVar2 + 1 + lVar1)),
                              *(undefined1 *)(lVar2 + 2 + lVar1)),*(undefined1 *)(lVar2 + 3 + lVar1)
                    );
    iVar4 = CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)(lVar2 + 4 + lVar1),
                                       *(undefined1 *)(lVar2 + 5 + lVar1)),
                              *(undefined1 *)(lVar2 + 6 + lVar1)),*(undefined1 *)(lVar2 + 7 + lVar1)
                    );
  }
  iVar3 = *(int *)(param_1 + 0x20) + iVar3;
  if (iVar3 == *(int *)(param_1 + 0x20) + iVar4) {
    iVar3 = -1;
  }
  return iVar3;
}



