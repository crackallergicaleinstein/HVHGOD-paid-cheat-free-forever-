// FUN_1802aa590 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802aa590 */

void FUN_1802aa590(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 local_18 [2];
  
  if (*(ulonglong *)(param_1 + 0x10) != 0) {
    puVar1 = *(undefined8 **)(param_1 + 8);
    if (*(ulonglong *)(param_1 + 0x10) < *(ulonglong *)(param_1 + 0x38) >> 3) {
      FUN_1802acd00(param_1,*puVar1,puVar1);
      return;
    }
    *(undefined8 *)puVar1[1] = 0;
    puVar1 = (undefined8 *)*puVar1;
    while (puVar1 != (undefined8 *)0x0) {
      puVar2 = (undefined8 *)*puVar1;
      FUN_1804547d0(puVar1,0x30);
      puVar1 = puVar2;
    }
    *(undefined8 *)*(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_1 + 8);
    *(longlong *)(*(longlong *)(param_1 + 8) + 8) = *(longlong *)(param_1 + 8);
    *(undefined8 *)(param_1 + 0x10) = 0;
    local_18[0] = *(undefined8 *)(param_1 + 8);
    FUN_1800f9880(*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20),local_18);
  }
  return;
}



