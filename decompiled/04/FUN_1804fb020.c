// FUN_1804fb020 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804fb020 */

void FUN_1804fb020(longlong param_1,uint param_2)

{
  FUN_1804f99f0(param_1,*(undefined8 *)(param_1 + 8),param_2);
  param_2 = param_2 & 0xffbfffff;
  *(undefined1 *)(param_1 + 0x70) = 1;
  *(undefined4 *)(param_1 + 0x6c) = 0xbe99999a;
  if ((param_2 == 0x200000) ||
     ((param_2 - 0x200004 < 9 && ((0x125U >> (param_2 - 0x200004 & 0x1f) & 1) != 0)))) {
    *(undefined1 *)(param_1 + 0x77) = 0;
  }
  else if ((param_2 - 0x200001 < 0xd) && ((0x10d1U >> (param_2 - 0x200001 & 0x1f) & 1) != 0)) {
    *(undefined1 *)(param_1 + 0x77) = 1;
    return;
  }
  return;
}



