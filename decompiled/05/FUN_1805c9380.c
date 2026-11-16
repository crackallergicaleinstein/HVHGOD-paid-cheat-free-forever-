// FUN_1805c9380 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805c9380 */

undefined2 FUN_1805c9380(longlong param_1,int param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  uint uVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x18);
  uVar3 = param_2 - (uint)CONCAT11(*(undefined1 *)(lVar1 + 6),*(undefined1 *)(lVar1 + 7));
  if (uVar3 < CONCAT11(*(undefined1 *)(lVar1 + 8),*(undefined1 *)(lVar1 + 9))) {
    uVar2 = (ulonglong)(uVar3 * 2);
    return CONCAT11(*(undefined1 *)(uVar2 + lVar1 + 10),*(undefined1 *)(uVar2 + 1 + lVar1 + 10));
  }
  return 0;
}



