// FUN_1806602da - decompiled reference (Ghidra). Not original source, does not compile.

/* 1806602da */

void FUN_1806602da(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 8) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffff7;
    FUN_1805fca24(param_2 + 0x30);
  }
  return;
}



