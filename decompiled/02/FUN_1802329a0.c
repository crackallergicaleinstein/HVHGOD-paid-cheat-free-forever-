// FUN_1802329a0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802329a0 */

undefined2 * FUN_1802329a0(undefined2 *param_1,undefined2 *param_2)

{
  *param_1 = *param_2;
  FUN_1801a4ee0(param_1 + 4,param_2 + 4);
  *(undefined4 *)(param_1 + 0x7c) = *(undefined4 *)(param_2 + 0x7c);
  *(undefined4 *)(param_1 + 0x7e) = *(undefined4 *)(param_2 + 0x7e);
  *(undefined8 *)(param_1 + 0x80) = *(undefined8 *)(param_2 + 0x80);
  *(undefined1 *)(param_1 + 0x84) = *(undefined1 *)(param_2 + 0x84);
  *(undefined1 *)((longlong)param_1 + 0x109) = *(undefined1 *)((longlong)param_2 + 0x109);
  *(undefined1 *)(param_1 + 0x85) = *(undefined1 *)(param_2 + 0x85);
  return param_1;
}



