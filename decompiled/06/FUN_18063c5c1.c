// FUN_18063c5c1 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18063c5c1 */

void FUN_18063c5c1(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 0x100) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffeff;
    _eh_vector_destructor_iterator_((void *)(param_2 + 0x130),0x18,2,FUN_1800aab30);
  }
  return;
}



