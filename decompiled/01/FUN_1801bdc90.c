// FUN_1801bdc90 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801bdc90 */

longlong * FUN_1801bdc90(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)(param_1 + 0x68);
  if (0xf < *(ulonglong *)(param_1 + 0x80)) {
    plVar1 = (longlong *)*plVar1;
  }
  return plVar1;
}



