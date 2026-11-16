// FUN_18064d448 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18064d448 */

void FUN_18064d448(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0xbc) & 1) != 0) {
    *(uint *)(param_2 + 0xbc) = *(uint *)(param_2 + 0xbc) & 0xfffffffe;
    thunk_FUN_18015c010(param_2 + 400);
  }
  return;
}



