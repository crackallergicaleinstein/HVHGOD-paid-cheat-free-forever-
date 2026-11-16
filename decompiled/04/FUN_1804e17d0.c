// FUN_1804e17d0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804e17d0 */

void FUN_1804e17d0(int *param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < param_1[2]) {
    do {
      lVar2 = (longlong)iVar3 * 0x20;
      if (iVar3 == *param_1) {
        puVar1 = (undefined8 *)(lVar2 + *(longlong *)(param_1 + 4));
        *puVar1 = 0;
        puVar1[1] = 0;
        puVar1[2] = 0;
        puVar1[3] = 0;
      }
      FUN_1804aeee0(*(longlong *)(param_1 + 4) + lVar2);
      FUN_1804aeee0(*(longlong *)(param_1 + 4) + 0x10 + lVar2);
      iVar3 = iVar3 + 1;
    } while (iVar3 < param_1[2]);
  }
  *param_1 = 0;
  param_1[1] = 1;
  FUN_1804aeee0(param_1 + 2);
  return;
}



