// FUN_1802cb7a0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802cb7a0 */

void FUN_1802cb7a0(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  FUN_1800f0160(param_1 + 0x18);
  puVar1 = *(undefined8 **)(param_1 + 8);
  *(undefined8 *)puVar1[1] = 0;
  puVar1 = (undefined8 *)*puVar1;
  while (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined8 *)*puVar1;
    FUN_1804547d0(puVar1,0x40);
    puVar1 = puVar2;
  }
  FUN_1804547d0(*(undefined8 *)(param_1 + 8),0x40);
  return;
}



