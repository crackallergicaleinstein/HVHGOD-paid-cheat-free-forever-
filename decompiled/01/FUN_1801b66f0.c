// FUN_1801b66f0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801b66f0 */

void FUN_1801b66f0(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  *(undefined8 *)param_2[1] = 0;
  puVar2 = (undefined8 *)*param_2;
  while (puVar2 != (undefined8 *)0x0) {
    puVar1 = (undefined8 *)*puVar2;
    FUN_1801959b0(puVar2 + 0x14);
    FUN_18015b930(puVar2 + 0xc);
    FUN_18015c010(puVar2 + 7);
    FUN_18015c010(puVar2 + 3);
    FUN_1804547d0(puVar2,0x1b8);
    puVar2 = puVar1;
  }
  return;
}



