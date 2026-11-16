// FUN_1806527d1 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1806527d1 */

void FUN_1806527d1(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 100) & 8) != 0) {
    *(uint *)(param_2 + 100) = *(uint *)(param_2 + 100) & 0xfffffff7;
    thunk_FUN_18015c010(param_2 + 0xa0);
  }
  return;
}



