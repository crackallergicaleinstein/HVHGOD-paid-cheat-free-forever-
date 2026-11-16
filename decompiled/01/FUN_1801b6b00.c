// FUN_1801b6b00 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801b6b00 */

void FUN_1801b6b00(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  *(undefined8 *)param_2[1] = 0;
  puVar2 = (undefined8 *)*param_2;
  while (puVar2 != (undefined8 *)0x0) {
    puVar1 = (undefined8 *)*puVar2;
    FUN_180113710(puVar2 + 6);
    FUN_18015c010(puVar2 + 2);
    FUN_1804547d0(puVar2,0x48);
    puVar2 = puVar1;
  }
  return;
}



