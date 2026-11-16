// FUN_18064f1fc - decompiled reference (Ghidra). Not original source, does not compile.

/* 18064f1fc */

void FUN_18064f1fc(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x88) & 1) != 0) {
    *(uint *)(param_2 + 0x88) = *(uint *)(param_2 + 0x88) & 0xfffffffe;
    FUN_1801d6990(param_2 + 0x1f0);
  }
  return;
}



