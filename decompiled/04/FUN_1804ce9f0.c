// FUN_1804ce9f0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804ce9f0 */

void FUN_1804ce9f0(longlong param_1)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined4 *puVar3;
  
  puVar1 = (undefined4 *)0x0;
  if (*(longlong *)(param_1 + 0x27a8) != 0) {
    puVar1 = (undefined4 *)(*(longlong *)(param_1 + 0x27a8) + 4);
  }
  while (puVar1 != (undefined4 *)0x0) {
    if ((*(byte *)((longlong)puVar1 + 0xe) & 4) != 0) {
      lVar2 = FUN_1804bbfd0(*puVar1);
      if (lVar2 != 0) {
        FUN_1804bc060(lVar2,puVar1);
      }
      *(byte *)((longlong)puVar1 + 0xe) = *(byte *)((longlong)puVar1 + 0xe) & 0xfb;
    }
    puVar3 = (undefined4 *)((longlong)(int)puVar1[-1] + (longlong)puVar1);
    puVar1 = (undefined4 *)0x0;
    if (puVar3 != (undefined4 *)
                  (*(longlong *)(param_1 + 0x27a8) + 4 + (longlong)*(int *)(param_1 + 0x27a0))) {
      puVar1 = puVar3;
    }
  }
  return;
}



