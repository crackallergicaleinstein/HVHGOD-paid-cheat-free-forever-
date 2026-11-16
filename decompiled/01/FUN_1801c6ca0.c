// FUN_1801c6ca0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801c6ca0 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_1801c6ca0(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  
  *(undefined8 *)param_2[1] = 0;
  puVar3 = (undefined8 *)*param_2;
  while (puVar3 != (undefined8 *)0x0) {
    puVar1 = (undefined8 *)*puVar3;
    plVar2 = (longlong *)puVar3[6];
    if (plVar2 != (longlong *)0x0) {
      puVar3[6] = 0;
      (**(code **)(*plVar2 + 0x10))();
    }
    FUN_18015c010(puVar3 + 2);
    FUN_1804547d0(puVar3,0x48);
    puVar3 = puVar1;
  }
  return;
}



