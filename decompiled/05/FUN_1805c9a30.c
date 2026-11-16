// FUN_1805c9a30 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805c9a30 */

undefined8 FUN_1805c9a30(longlong param_1,longlong param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  uint uVar3;
  uint uVar4;
  
  if (*(ulonglong *)(param_2 + 0x108) < param_1 + 0x14U) {
    FUN_18057bd80(param_2,8);
  }
  puVar1 = (undefined1 *)(param_1 + 0x13);
  uVar4 = CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)(param_1 + 4),*(undefined1 *)(param_1 + 5)),
                            *(undefined1 *)(param_1 + 6)),*(undefined1 *)(param_1 + 7));
  uVar3 = CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)(param_1 + 0x10),*(undefined1 *)(param_1 + 0x11)
                                    ),*(undefined1 *)(param_1 + 0x12)),*puVar1);
  if ((((uint)((int)*(undefined8 *)(param_2 + 0x108) - (int)param_1) < uVar4) || (uVar4 < 0x14)) ||
     (uVar4 - 0x14 >> 1 < uVar3)) {
    FUN_18057bd80(param_2,8);
  }
  if (0 < *(int *)(param_2 + 0x110)) {
    for (; uVar3 != 0; uVar3 = uVar3 - 1) {
      puVar2 = puVar1 + 1;
      puVar1 = puVar1 + 2;
      if (*(uint *)(param_2 + 0x120) <= (uint)CONCAT11(*puVar2,*puVar1)) {
        FUN_18057bd80(param_2,0x10);
      }
    }
  }
  return 0;
}



