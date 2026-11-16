// FUN_18065a8bc - decompiled reference (Ghidra). Not original source, does not compile.

/* 18065a8bc */

void FUN_18065a8bc(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 100) & 1) != 0) {
    *(uint *)(param_2 + 100) = *(uint *)(param_2 + 100) & 0xfffffffe;
    thunk_FUN_18015c010(param_2 + 0x80);
  }
  return;
}



