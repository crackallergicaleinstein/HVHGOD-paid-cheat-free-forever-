// FUN_1801b6770 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801b6770 */

void FUN_1801b6770(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  *(undefined8 *)param_2[1] = 0;
  puVar2 = (undefined8 *)*param_2;
  while (puVar2 != (undefined8 *)0x0) {
    puVar1 = (undefined8 *)*puVar2;
    FUN_180195770(puVar2 + 6);
    FUN_18015c010(puVar2 + 2);
    FUN_1804547d0(puVar2,0x170);
    puVar2 = puVar1;
  }
  return;
}



