// FUN_1801aac60 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801aac60 */

void FUN_1801aac60(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)*param_1;
  *(undefined8 *)puVar1[1] = 0;
  puVar1 = (undefined8 *)*puVar1;
  while (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined8 *)*puVar1;
    FUN_18015c010(puVar1 + 2);
    FUN_1804547d0(puVar1,0x38);
    puVar1 = puVar2;
  }
  FUN_1804547d0(*param_1,0x38);
  return;
}



