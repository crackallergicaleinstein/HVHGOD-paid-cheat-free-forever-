// FUN_1802adec0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802adec0 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_1802adec0(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  
  *(undefined8 *)param_2[1] = 0;
  puVar3 = (undefined8 *)*param_2;
  while (puVar3 != (undefined8 *)0x0) {
    puVar1 = (undefined8 *)*puVar3;
    plVar2 = (longlong *)puVar3[3];
    if (plVar2 != (longlong *)0x0) {
      puVar3[3] = 0;
      (**(code **)(*plVar2 + 0x10))();
    }
    FUN_1804547d0(puVar3,0x28);
    puVar3 = puVar1;
  }
  return;
}



