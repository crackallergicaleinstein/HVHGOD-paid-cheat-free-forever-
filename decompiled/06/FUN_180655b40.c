// FUN_180655b40 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180655b40 */

void FUN_180655b40(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 1) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffffe;
    FUN_1801b3410(*(undefined8 *)(param_2 + 0xf0));
  }
  return;
}



