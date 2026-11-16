// FUN_180658a00 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180658a00 */

void FUN_180658a00(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x80) & 4) != 0) {
    *(uint *)(param_2 + 0x80) = *(uint *)(param_2 + 0x80) & 0xfffffffb;
    FUN_1800efed0(param_2 + 0x328);
  }
  return;
}



