// FUN_1806489d6 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1806489d6 */

void FUN_1806489d6(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x28) & 0x10) != 0) {
    *(uint *)(param_2 + 0x28) = *(uint *)(param_2 + 0x28) & 0xffffffef;
    thunk_FUN_18015c010(param_2 + 0x248);
  }
  return;
}



