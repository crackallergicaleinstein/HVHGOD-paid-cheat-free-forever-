// FUN_1805faa30 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805faa30 */

void FUN_1805faa30(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  int iVar2;
  DWORD DVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined *puVar6;
  
  puVar6 = &DAT_180bb13a0;
  iVar2 = FUN_1805f68d0(&DAT_1808d5f80);
  if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(5);
  }
  if (DAT_1808d5fcc == 0x7fffffff) {
    DAT_1808d5fcc = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(6);
  }
  do {
    do {
      if (*(int *)(puVar6 + 800) != 0x14) {
        lVar4 = 0;
        plVar5 = (longlong *)(puVar6 + 0x10);
        goto LAB_1805faab5;
      }
      puVar1 = (undefined8 *)(puVar6 + 0x328);
      puVar6 = (undefined *)*puVar1;
    } while (puVar6 != (undefined *)0x0);
    puVar6 = (undefined *)_calloc_base(1,0x330);
    *puVar1 = puVar6;
  } while (puVar6 != (undefined *)0x0);
  goto LAB_1805faaed;
  while( true ) {
    lVar4 = lVar4 + 1;
    plVar5 = plVar5 + 5;
    if (0x13 < lVar4) break;
LAB_1805faab5:
    if (*plVar5 == 0) {
      DVar3 = GetCurrentThreadId();
      *(DWORD *)(puVar6 + lVar4 * 0x28 + 8) = DVar3;
      *(undefined8 *)(puVar6 + lVar4 * 0x28 + 0x10) = param_2;
      *(undefined8 *)(puVar6 + lVar4 * 0x28 + 0x18) = param_1;
      *(undefined8 *)(puVar6 + lVar4 * 0x28 + 0x20) = param_3;
      *(int *)(puVar6 + 800) = *(int *)(puVar6 + 800) + 1;
      break;
    }
  }
LAB_1805faaed:
  FUN_1805f68fc(&DAT_1808d5f80);
  return;
}



