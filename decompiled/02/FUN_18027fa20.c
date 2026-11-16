// FUN_18027fa20 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18027fa20 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18027fa20(undefined8 *param_1,int *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  undefined1 auStack_68 [40];
  int *local_40;
  int local_38;
  int local_34;
  undefined8 local_30;
  undefined1 local_28 [16];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_1808d5f00 ^ (ulonglong)auStack_68;
  local_38 = *(int *)*param_1;
  local_34 = *(int *)param_1[1];
  local_30 = 0;
  local_28 = (undefined1  [16])0x0;
  local_18 = 0;
  local_40 = param_2;
  FUN_1801acf20(local_28,(longlong)*(int *)param_1[1] * (longlong)*(int *)*param_1);
  uVar3 = local_18;
  uVar4 = 0;
  uVar2 = local_28._8_8_;
  uVar1 = local_28._0_8_;
  if (local_28._8_8_ != local_28._0_8_) {
    do {
      *(undefined1 *)(local_28._0_8_ + uVar4) =
           *(undefined1 *)(*(longlong *)param_1[2] + 3 + uVar4 * 4);
      uVar4 = uVar4 + 1;
    } while (uVar4 < (ulonglong)(local_28._8_8_ - local_28._0_8_));
  }
  *param_2 = local_38;
  param_2[1] = local_34;
  param_2[2] = (int)local_30;
  param_2[3] = local_30._4_4_;
  local_18 = 0;
  local_28 = ZEXT816(0);
  *(undefined8 *)(param_2 + 4) = uVar1;
  *(undefined8 *)(param_2 + 6) = uVar2;
  *(undefined8 *)(param_2 + 8) = uVar3;
  FUN_180113710(local_28);
}



