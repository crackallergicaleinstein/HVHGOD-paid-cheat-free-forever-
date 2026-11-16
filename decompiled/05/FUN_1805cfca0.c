// FUN_1805cfca0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805cfca0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1805cfca0(longlong param_1,undefined8 param_2,uint *param_3)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  undefined1 auStack_b8 [32];
  uint *local_98;
  undefined8 local_90;
  undefined4 local_88;
  ulonglong local_48;
  
  local_48 = DAT_1808d5f00 ^ (ulonglong)auStack_b8;
  lVar4 = *(longlong *)(param_1 + 8);
  uVar1 = param_3[2];
  local_88 = 1;
  param_3[2] = uVar1 * 3;
  *param_3 = *param_3 / 3;
  local_98 = param_3;
  local_90 = param_2;
  FUN_180576690(param_2,-*(int *)(lVar4 + 0x15c),*(undefined4 *)(lVar4 + 0x158));
  iVar5 = (**(code **)(param_1 + 0x68))(*(undefined8 *)(param_1 + 0x60),&local_98);
  iVar2 = *(int *)(lVar4 + 0x158);
  uVar3 = *(undefined4 *)(lVar4 + 0x15c);
  if (iVar5 == 0) {
    *(longlong *)(param_3 + 4) = *(longlong *)(param_3 + 4) + (longlong)(int)uVar1;
    FUN_180576690(param_2,*(int *)(lVar4 + 0x15c) - *(int *)(lVar4 + 0x164),
                  *(int *)(lVar4 + 0x160) - *(int *)(lVar4 + 0x158));
    iVar5 = (**(code **)(param_1 + 0x68))(*(undefined8 *)(param_1 + 0x60),&local_98);
    iVar2 = *(int *)(lVar4 + 0x160);
    uVar3 = *(undefined4 *)(lVar4 + 0x164);
    lVar6 = *(longlong *)(param_3 + 4) - (longlong)(int)uVar1;
    *(longlong *)(param_3 + 4) = lVar6;
    if (iVar5 == 0) {
      *(longlong *)(param_3 + 4) = (int)(uVar1 * 2) + lVar6;
      FUN_180576690(param_2,*(int *)(lVar4 + 0x164) - *(int *)(lVar4 + 0x16c),
                    *(int *)(lVar4 + 0x168) - *(int *)(lVar4 + 0x160));
      (**(code **)(param_1 + 0x68))(*(undefined8 *)(param_1 + 0x60),&local_98);
      iVar2 = *(int *)(lVar4 + 0x168);
      uVar3 = *(undefined4 *)(lVar4 + 0x16c);
      *(longlong *)(param_3 + 4) = *(longlong *)(param_3 + 4) - (longlong)(int)(uVar1 * 2);
    }
  }
  FUN_180576690(param_2,uVar3,-iVar2);
  param_3[2] = (int)param_3[2] / 3;
  *param_3 = *param_3 * 3;
}



