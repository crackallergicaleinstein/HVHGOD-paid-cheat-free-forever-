// FUN_18063bbd8 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18063bbd8 */

void FUN_18063bbd8(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 0x20) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xffffffdf;
    thunk_FUN_18015c010(*(undefined8 *)(param_2 + 0x68));
  }
  return;
}



