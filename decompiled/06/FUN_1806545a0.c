// FUN_1806545a0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1806545a0 */

void FUN_1806545a0(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 100) & 1) != 0) {
    *(uint *)(param_2 + 100) = *(uint *)(param_2 + 100) & 0xfffffffe;
    thunk_FUN_18015c010(param_2 + 0xd0);
  }
  return;
}



