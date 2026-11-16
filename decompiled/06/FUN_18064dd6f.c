// FUN_18064dd6f - decompiled reference (Ghidra). Not original source, does not compile.

/* 18064dd6f */

void FUN_18064dd6f(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 0x20) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xffffffdf;
    thunk_FUN_18015c010(param_2 + 0x98);
  }
  return;
}



