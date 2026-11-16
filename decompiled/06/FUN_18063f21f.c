// FUN_18063f21f - decompiled reference (Ghidra). Not original source, does not compile.

/* 18063f21f */

void FUN_18063f21f(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 1) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffffe;
    FUN_1800aab30(*(undefined8 *)(param_2 + 0x188));
  }
  return;
}



