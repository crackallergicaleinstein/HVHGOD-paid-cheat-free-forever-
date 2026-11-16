// FUN_1804e6b90 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804e6b90 */

void FUN_1804e6b90(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar3 = *(undefined8 **)(param_1 + 0x98);
  puVar1 = puVar3 + *(int *)(param_1 + 0x90);
  for (; puVar3 != puVar1; puVar3 = puVar3 + 1) {
    puVar2 = (undefined8 *)*puVar3;
    if (puVar2[3] == param_1) {
      *puVar2 = *(undefined8 *)(param_1 + 0x5c);
      puVar2[1] = *(longlong *)(param_1 + 0xa0) + 0xfc;
      puVar2[2] = *(longlong *)(param_1 + 0xa0) + 0x3dc;
    }
  }
  return;
}



