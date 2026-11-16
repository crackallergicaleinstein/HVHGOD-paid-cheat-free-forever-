// FUN_18064a162 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18064a162 */

void FUN_18064a162(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x48) & 8) != 0) {
    *(uint *)(param_2 + 0x48) = *(uint *)(param_2 + 0x48) & 0xfffffff7;
    FUN_180195860(param_2 + 0x910);
  }
  return;
}



