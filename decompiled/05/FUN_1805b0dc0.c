// FUN_1805b0dc0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805b0dc0 */

int FUN_1805b0dc0(undefined8 *param_1,undefined4 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  int local_res8 [2];
  
  param_1[6] = param_3;
  uVar1 = FUN_18057ad10(param_3,8,0,param_2,0,local_res8);
  param_1[4] = uVar1;
  if (local_res8[0] == 0) {
    uVar1 = FUN_18057ad10(param_3,4,0,param_2,0,local_res8);
    param_1[5] = uVar1;
    if (local_res8[0] == 0) {
      *(undefined4 *)((longlong)param_1 + 0x1c) = param_2;
      *(undefined4 *)(param_1 + 3) = 0xdeadbeef;
      *param_1 = 0;
      param_1[2] = 0;
      param_1[1] = 0;
      param_1[7] = FUN_1805b0dc0;
      param_1[8] = FUN_1805b0fa0;
      param_1[9] = FUN_1805b0ea0;
      param_1[10] = FUN_1805b0fb0;
      return 0;
    }
  }
  FUN_18057abd0(param_3,param_1[4]);
  param_1[4] = 0;
  return local_res8[0];
}



