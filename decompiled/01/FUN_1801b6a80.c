// FUN_1801b6a80 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801b6a80 */

void FUN_1801b6a80(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  *(undefined8 *)param_2[1] = 0;
  puVar3 = (undefined8 *)*param_2;
  while (puVar3 != (undefined8 *)0x0) {
    puVar1 = (undefined8 *)*puVar3;
    FUN_1801bd550(puVar3 + 3);
    uVar2 = puVar3[3];
    puVar3[3] = 0;
    FUN_1804547d0(uVar2,0x10);
    FUN_1804547d0(puVar3,0x40);
    puVar3 = puVar1;
  }
  return;
}



