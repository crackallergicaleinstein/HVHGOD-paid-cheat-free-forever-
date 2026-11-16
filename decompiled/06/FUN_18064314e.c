// FUN_18064314e - decompiled reference (Ghidra). Not original source, does not compile.

/* 18064314e */

void FUN_18064314e(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x74) & 0x100) != 0) {
    *(uint *)(param_2 + 0x74) = *(uint *)(param_2 + 0x74) & 0xfffffeff;
    _eh_vector_destructor_iterator_((void *)(param_2 + 0x118),0x18,1,FUN_1800aab30);
  }
  return;
}



