// FUN_1805c8350 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805c8350 */

undefined1 FUN_1805c8350(longlong param_1,uint param_2)

{
  if (param_2 < 0x100) {
    return *(undefined1 *)((ulonglong)(param_2 + 6) + *(longlong *)(param_1 + 0x18));
  }
  return 0;
}



