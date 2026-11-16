// FUN_180577e80 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180577e80 */

undefined4 FUN_180577e80(longlong param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = *(undefined4 **)(param_1 + 0x38);
  if ((longlong)puVar1 + 3U < *(ulonglong *)(param_1 + 0x40)) {
    uVar2 = *puVar1;
    *(undefined4 **)(param_1 + 0x38) = puVar1 + 1;
    return uVar2;
  }
  *(undefined4 **)(param_1 + 0x38) = puVar1;
  return 0;
}



