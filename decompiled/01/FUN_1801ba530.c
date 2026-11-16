// FUN_1801ba530 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801ba530 */

void FUN_1801ba530(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  if (*(longlong *)(param_1 + 8) != 0) {
    *(undefined8 *)(*(longlong *)(param_1 + 0x18) + 8) = 0;
    **(undefined8 **)(param_1 + 0x10) = 0;
    puVar2 = *(undefined8 **)(param_1 + 0x18);
    while (puVar2 != (undefined8 *)0x0) {
      puVar1 = (undefined8 *)*puVar2;
      FUN_1804547d0(puVar2,0x18);
      puVar2 = puVar1;
    }
  }
  return;
}



