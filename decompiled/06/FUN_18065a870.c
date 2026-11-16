// FUN_18065a870 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18065a870 */

void FUN_18065a870(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x60) & 1) != 0) {
    *(uint *)(param_2 + 0x60) = *(uint *)(param_2 + 0x60) & 0xfffffffe;
    thunk_FUN_18015c010(param_2 + 0x90);
  }
  return;
}



