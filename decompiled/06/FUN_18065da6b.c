// FUN_18065da6b - decompiled reference (Ghidra). Not original source, does not compile.

/* 18065da6b */

void FUN_18065da6b(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 0x800) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfffff7ff;
    thunk_FUN_18015c010(param_2 + 0x148);
  }
  return;
}



