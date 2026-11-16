// FUN_1805fbcec - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805fbcec */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_1805fbcec(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  for (puVar2 = *(undefined8 **)(param_1 + 0x38); puVar2 != (undefined8 *)0x0;
      puVar2 = (undefined8 *)*puVar2) {
    (*(code *)puVar2[2])(0,param_1,*(undefined4 *)(puVar2 + 1));
  }
  puVar2 = *(undefined8 **)(param_1 + 0x30);
  while (puVar2 != (undefined8 *)0x0) {
    puVar1 = (undefined8 *)*puVar2;
    FUN_1804547d0(puVar2,0x18);
    puVar2 = puVar1;
  }
  *(undefined8 *)(param_1 + 0x30) = 0;
  puVar2 = *(undefined8 **)(param_1 + 0x38);
  while (puVar2 != (undefined8 *)0x0) {
    puVar1 = (undefined8 *)*puVar2;
    FUN_1804547d0(puVar2,0x18);
    puVar2 = puVar1;
  }
  *(undefined8 *)(param_1 + 0x38) = 0;
  return;
}



