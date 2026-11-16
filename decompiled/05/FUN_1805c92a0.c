// FUN_1805c92a0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805c92a0 */

undefined8 FUN_1805c92a0(longlong param_1,longlong param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  uint uVar3;
  uint uVar4;
  
  if (*(ulonglong *)(param_2 + 0x108) < param_1 + 10U) {
    FUN_18057bd80(param_2,8);
  }
  puVar1 = (undefined1 *)(param_1 + 9);
  uVar3 = (uint)CONCAT11(*(undefined1 *)(param_1 + 2),*(undefined1 *)(param_1 + 3));
  uVar4 = (uint)CONCAT11(*(undefined1 *)(param_1 + 8),*puVar1);
  if ((*(ulonglong *)(param_2 + 0x108) < (ulonglong)uVar3 + param_1) || (uVar3 < uVar4 * 2 + 10)) {
    FUN_18057bd80(param_2,8);
  }
  if (0 < *(int *)(param_2 + 0x110)) {
    for (; uVar4 != 0; uVar4 = uVar4 - 1) {
      puVar2 = puVar1 + 1;
      puVar1 = puVar1 + 2;
      if (*(uint *)(param_2 + 0x120) <= (uint)CONCAT11(*puVar2,*puVar1)) {
        FUN_18057bd80(param_2,0x10);
      }
    }
  }
  return 0;
}



