// FUN_180642cc6 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180642cc6 */

void FUN_180642cc6(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x74) & 8) != 0) {
    *(uint *)(param_2 + 0x74) = *(uint *)(param_2 + 0x74) & 0xfffffff7;
    _eh_vector_destructor_iterator_((void *)(param_2 + 0x480),0x18,1,FUN_1800aab30);
  }
  return;
}



