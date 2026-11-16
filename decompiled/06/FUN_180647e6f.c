// FUN_180647e6f - decompiled reference (Ghidra). Not original source, does not compile.

/* 180647e6f */

void FUN_180647e6f(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 0x400) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffbff;
    thunk_FUN_18015c010(param_2 + 0x178);
  }
  return;
}



