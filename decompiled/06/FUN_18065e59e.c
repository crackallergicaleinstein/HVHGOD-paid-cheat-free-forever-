// FUN_18065e59e - decompiled reference (Ghidra). Not original source, does not compile.

/* 18065e59e */

void FUN_18065e59e(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 1) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffffe;
    FUN_1800aab30(*(undefined8 *)(param_2 + 0x1d8));
  }
  return;
}



