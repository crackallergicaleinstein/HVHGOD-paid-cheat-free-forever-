// FUN_18056f840 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18056f840 */

void FUN_18056f840(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  *(undefined8 *)param_2[1] = 0;
  puVar2 = (undefined8 *)*param_2;
  while (puVar2 != (undefined8 *)0x0) {
    puVar1 = (undefined8 *)*puVar2;
    FUN_18015c010(puVar2 + 0x46);
    FUN_18015c010(puVar2 + 0x42);
    FUN_18015c010(puVar2 + 0x27);
    FUN_18015c010(puVar2 + 9);
    FUN_18015c010(puVar2 + 2);
    FUN_1804547d0(puVar2,0x278);
    puVar2 = puVar1;
  }
  return;
}



