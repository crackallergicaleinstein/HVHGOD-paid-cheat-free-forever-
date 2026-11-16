// FUN_18057e1f0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18057e1f0 */

undefined8 FUN_18057e1f0(longlong param_1,longlong param_2)

{
  *(longlong *)(param_1 + 0x1180) = param_2;
  *(undefined4 *)(param_1 + 0x1178) = *(undefined4 *)(param_2 + 0x24);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x14);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 0x1c);
  return 0;
}



