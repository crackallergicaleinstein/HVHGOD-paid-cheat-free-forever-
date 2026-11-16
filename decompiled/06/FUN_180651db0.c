// FUN_180651db0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180651db0 */

void FUN_180651db0(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x60) & 1) != 0) {
    *(uint *)(param_2 + 0x60) = *(uint *)(param_2 + 0x60) & 0xfffffffe;
    FUN_18018f700(param_2 + 0x108);
  }
  return;
}



