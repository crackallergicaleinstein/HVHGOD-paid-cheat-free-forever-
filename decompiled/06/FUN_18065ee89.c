// FUN_18065ee89 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18065ee89 */

void FUN_18065ee89(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 0x40) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xffffffbf;
    thunk_FUN_18015c010(param_2 + 0xd8);
  }
  return;
}



