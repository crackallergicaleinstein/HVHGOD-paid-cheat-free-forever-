// FUN_1801da9b0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801da9b0 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_1801da9b0(longlong param_1,undefined1 *param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  
  puVar2 = *(undefined8 **)(param_1 + 0x20);
  if (param_2 == param_3) {
    *(undefined8 **)(param_1 + 0x20) = puVar2;
    return;
  }
  do {
    uVar1 = *param_2;
    if ((ulonglong)puVar2[3] < puVar2[2] + 1) {
      (**(code **)*puVar2)(puVar2);
    }
    param_2 = param_2 + 1;
    *(undefined1 *)(puVar2[1] + puVar2[2]) = uVar1;
    puVar2[2] = puVar2[2] + 1;
  } while (param_2 != param_3);
  *(undefined8 **)(param_1 + 0x20) = puVar2;
  return;
}



