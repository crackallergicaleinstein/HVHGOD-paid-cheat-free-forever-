// FUN_180232910 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180232910 */

undefined8 * FUN_180232910(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  *(undefined2 *)(param_1 + 2) = *(undefined2 *)(param_2 + 2);
  FUN_1801a4ee0(param_1 + 3,param_2 + 3);
  *(undefined4 *)(param_1 + 0x21) = *(undefined4 *)(param_2 + 0x21);
  *(undefined4 *)((longlong)param_1 + 0x10c) = *(undefined4 *)((longlong)param_2 + 0x10c);
  *(undefined1 *)(param_1 + 0x22) = *(undefined1 *)(param_2 + 0x22);
  *(undefined1 *)((longlong)param_1 + 0x111) = *(undefined1 *)((longlong)param_2 + 0x111);
  param_1[0x23] = param_2[0x23];
  *(undefined1 *)(param_1 + 0x24) = *(undefined1 *)(param_2 + 0x24);
  return param_1;
}



