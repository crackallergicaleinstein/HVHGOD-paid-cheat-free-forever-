// FUN_18063c589 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18063c589 */

void FUN_18063c589(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 0x40) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xffffffbf;
    _eh_vector_destructor_iterator_((void *)(param_2 + 0x60),0x18,2,FUN_1800aab30);
  }
  return;
}



