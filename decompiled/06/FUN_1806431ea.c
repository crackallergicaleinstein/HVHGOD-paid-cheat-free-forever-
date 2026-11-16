// FUN_1806431ea - decompiled reference (Ghidra). Not original source, does not compile.

/* 1806431ea */

void FUN_1806431ea(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x74) & 0x1000) != 0) {
    *(uint *)(param_2 + 0x74) = *(uint *)(param_2 + 0x74) & 0xffffefff;
    _eh_vector_destructor_iterator_((void *)(param_2 + 0x4d0),0x18,1,FUN_1800aab30);
  }
  return;
}



