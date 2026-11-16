// FUN_1801aaa90 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801aaa90 */

void FUN_1801aaa90(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)*param_1;
  *(undefined8 *)puVar1[1] = 0;
  puVar1 = (undefined8 *)*puVar1;
  while (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined8 *)*puVar1;
    FUN_1801bcc10(puVar1 + 3);
    FUN_1804547d0(puVar1,0x30);
    puVar1 = puVar2;
  }
  FUN_1804547d0(*param_1,0x30);
  return;
}



