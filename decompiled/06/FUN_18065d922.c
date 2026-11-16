// FUN_18065d922 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18065d922 */

void FUN_18065d922(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 0x80) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xffffff7f;
    thunk_FUN_18015c010(param_2 + 0x1370);
  }
  return;
}



