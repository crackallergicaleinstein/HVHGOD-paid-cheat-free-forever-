// FUN_18043e930 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18043e930 */

void FUN_18043e930(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)*param_1;
  *(undefined8 *)puVar1[1] = 0;
  puVar1 = (undefined8 *)*puVar1;
  while (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined8 *)*puVar1;
    FUN_180182bf0(puVar1 + 0xf);
    FUN_180182bf0(puVar1 + 7);
    FUN_1804547d0(puVar1,0xb8);
    puVar1 = puVar2;
  }
  FUN_1804547d0(*param_1,0xb8);
  return;
}



