// FUN_18065f7fc - decompiled reference (Ghidra). Not original source, does not compile.

/* 18065f7fc */

void FUN_18065f7fc(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x68) & 2) != 0) {
    *(uint *)(param_2 + 0x68) = *(uint *)(param_2 + 0x68) & 0xfffffffd;
    thunk_FUN_18015c010(param_2 + 0x70);
  }
  return;
}



