// FUN_1805dd590 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805dd590 */

void FUN_1805dd590(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  
  *(undefined4 *)(param_1 + 0xebf) = *(undefined4 *)(param_2 + 0x6ab4);
  param_1[0xe99] = *(longlong *)(param_2 + 8);
  param_1[0xe9a] = *(longlong *)(param_2 + 8);
  lVar1 = *(longlong *)(param_2 + 0x10) + *(longlong *)(param_2 + 8);
  param_1[0xe9b] = lVar1;
  param_1[0xe98] = lVar1;
  if (*(int *)(param_2 + 0x6ab8) == 0) {
    param_1[0xea6] = 0;
    return;
  }
  *(undefined4 *)(param_1 + 0xea6) = 1;
  *param_1 = param_2 + 0x18;
  *(undefined4 *)((longlong)param_1 + 0x7534) = 1;
  param_1[1] = param_2 + 0x1828;
  param_1[2] = param_2 + 0x1020;
  param_1[3] = param_2 + 0x2830;
  *(undefined4 *)((longlong)param_1 + 0x683c) = *(undefined4 *)(param_2 + 0x6834);
  *(undefined4 *)(param_1 + 0xd08) = *(undefined4 *)(param_2 + 0x6838);
  *(undefined4 *)((longlong)param_1 + 0x6844) = *(undefined4 *)(param_2 + 0x683c);
  return;
}



