// FUN_18064318e - decompiled reference (Ghidra). Not original source, does not compile.

/* 18064318e */

void FUN_18064318e(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x74) & 0x200) != 0) {
    *(uint *)(param_2 + 0x74) = *(uint *)(param_2 + 0x74) & 0xfffffdff;
    FUN_1800aab30(param_2 + 0x3b0);
  }
  return;
}



