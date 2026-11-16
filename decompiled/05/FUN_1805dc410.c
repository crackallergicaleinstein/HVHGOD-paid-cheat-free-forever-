// FUN_1805dc410 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805dc410 */

undefined8 FUN_1805dc410(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_2 != 0) {
    lVar1 = FUN_1800efe90(param_2);
    lVar2 = FUN_1805dd580(param_2);
    *(uint *)((longlong)param_1 + 0x75fc) = (uint)(param_1[0xe9b] != lVar2 + lVar1);
  }
  lVar1 = 1;
  if ((int)param_1[0xeb3] == 0) {
    lVar1 = 5;
  }
  *(undefined8 *)((longlong)param_1 + 0x752c) = 0;
  param_1[0xe9c] = lVar1;
  *(undefined4 *)(param_1 + 0x507) = 0xc00000c;
  param_1[0xea3] = 0;
  param_1[0xea4] = 0;
  param_1[0xe98] = 0;
  param_1[0xe99] = 0;
  param_1[0xe9a] = 0;
  param_1[0xe9b] = 0;
  *(undefined4 *)((longlong)param_1 + 0x7534) = 0;
  *(undefined4 *)(param_1 + 0xebf) = 0;
  *(undefined4 *)(param_1 + 0xea5) = 3;
  *(undefined4 *)(param_1 + 0xebc) = 1;
  *(undefined8 *)((longlong)param_1 + 0x683c) = 0x400000001;
  *(undefined4 *)((longlong)param_1 + 0x6844) = 8;
  *param_1 = (longlong)(param_1 + 4);
  param_1[1] = (longlong)(param_1 + 0x306);
  param_1[2] = (longlong)(param_1 + 0x205);
  param_1[3] = (longlong)(param_1 + 0x507);
  if (param_2 != 0) {
    FUN_1805dd590(param_1,param_2);
  }
  return 0;
}



