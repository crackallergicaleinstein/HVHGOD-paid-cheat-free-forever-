// FUN_180658dac - decompiled reference (Ghidra). Not original source, does not compile.

/* 180658dac */

void FUN_180658dac(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x58) & 1) != 0) {
    *(uint *)(param_2 + 0x58) = *(uint *)(param_2 + 0x58) & 0xfffffffe;
    thunk_FUN_18015c010(param_2 + 0x128);
  }
  return;
}



