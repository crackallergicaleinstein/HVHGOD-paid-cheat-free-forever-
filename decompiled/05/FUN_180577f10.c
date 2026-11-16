// FUN_180577f10 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180577f10 */

undefined2 FUN_180577f10(longlong param_1)

{
  undefined2 *puVar1;
  undefined2 uVar2;
  
  puVar1 = *(undefined2 **)(param_1 + 0x38);
  if ((longlong)puVar1 + 1U < *(ulonglong *)(param_1 + 0x40)) {
    uVar2 = *puVar1;
    *(undefined2 **)(param_1 + 0x38) = puVar1 + 1;
    return uVar2;
  }
  *(undefined2 **)(param_1 + 0x38) = puVar1;
  return 0;
}



