// FUN_18063caf0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18063caf0 */

void FUN_18063caf0(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x70) & 1) != 0) {
    *(uint *)(param_2 + 0x70) = *(uint *)(param_2 + 0x70) & 0xfffffffe;
    FUN_1800b4300(*(undefined8 *)(param_2 + 0x108));
  }
  return;
}



