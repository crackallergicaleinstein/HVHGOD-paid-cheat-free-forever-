// FUN_1801aa860 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801aa860 */

void FUN_1801aa860(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)*param_1;
  *(undefined8 *)puVar1[1] = 0;
  puVar1 = (undefined8 *)*puVar1;
  while (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined8 *)*puVar1;
    FUN_1801b2a20(puVar1 + 0x69);
    FUN_18015c010(puVar1 + 0xb);
    FUN_1804547d0(puVar1,0x378);
    puVar1 = puVar2;
  }
  FUN_1804547d0(*param_1,0x378);
  return;
}



