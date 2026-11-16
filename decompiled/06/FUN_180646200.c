// FUN_180646200 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180646200 */

void FUN_180646200(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 8) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffff7;
    thunk_FUN_18015c010(*(undefined8 *)(param_2 + 0x38));
  }
  return;
}



