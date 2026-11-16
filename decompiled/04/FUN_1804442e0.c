// FUN_1804442e0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804442e0 */

undefined8 FUN_1804442e0(longlong param_1,longlong param_2)

{
  if (*(ulonglong *)(param_1 + 0x20) <
      (ulonglong)(*(longlong *)(param_2 + 0x18) + -1 + *(longlong *)(param_1 + 0x18))) {
    return 0x80100009;
  }
  FUN_18063aed0(*(longlong *)(param_1 + 0x18) + *(longlong *)(param_1 + 0x38) + -1,
                *(undefined8 *)(param_2 + 0x38),*(longlong *)(param_2 + 0x18) + -1);
  *(longlong *)(param_1 + 0x18) = *(longlong *)(param_1 + 0x18) + *(longlong *)(param_2 + 0x18) + -1
  ;
  *(undefined1 *)(*(longlong *)(param_1 + 0x18) + -1 + *(longlong *)(param_1 + 0x38)) = 0;
  return 0x100000;
}



