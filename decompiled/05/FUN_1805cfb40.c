// FUN_1805cfb40 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805cfb40 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1805cfb40(longlong param_1,undefined8 param_2,int *param_3)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined1 auStack_b8 [32];
  longlong local_98;
  int local_90;
  undefined1 local_78 [8];
  undefined8 local_70;
  undefined4 local_68;
  code *local_60;
  longlong *local_40;
  undefined8 local_38;
  int local_30;
  int local_2c;
  ulonglong local_28;
  
  local_28 = DAT_1808d5f00 ^ (ulonglong)auStack_b8;
  lVar1 = *(longlong *)(param_1 + 8);
  local_90 = param_3[2];
  piVar4 = (int *)(lVar1 + 0x158);
  local_98 = *(longlong *)(param_3 + 4);
  local_68 = 3;
  local_60 = FUN_1805cfa50;
  local_40 = &local_98;
  local_38 = 0;
  local_30 = param_3[1];
  local_2c = *param_3;
  if (-1 < local_90) {
    local_98 = (ulonglong)(uint)((local_2c + -1) * local_90) + local_98;
  }
  local_70 = param_2;
  FUN_180576690(param_2,-*piVar4,-*(int *)(lVar1 + 0x15c));
  iVar2 = (**(code **)(param_1 + 0x68))(*(undefined8 *)(param_1 + 0x60),local_78);
  iVar3 = *piVar4;
  uVar5 = *(undefined4 *)(lVar1 + 0x15c);
  if (iVar2 == 0) {
    local_98 = local_98 + 1;
    FUN_180576690(param_2,*piVar4 - *(int *)(lVar1 + 0x160),
                  *(int *)(lVar1 + 0x15c) - *(int *)(lVar1 + 0x164));
    iVar2 = (**(code **)(param_1 + 0x68))(*(undefined8 *)(param_1 + 0x60),local_78);
    iVar3 = *(int *)(lVar1 + 0x160);
    uVar5 = *(undefined4 *)(lVar1 + 0x164);
    if (iVar2 == 0) {
      local_98 = local_98 + 1;
      FUN_180576690(param_2,*(int *)(lVar1 + 0x160) - *(int *)(lVar1 + 0x168),
                    *(int *)(lVar1 + 0x164) - *(int *)(lVar1 + 0x16c));
      (**(code **)(param_1 + 0x68))(*(undefined8 *)(param_1 + 0x60),local_78);
      iVar3 = *(int *)(lVar1 + 0x168);
      uVar5 = *(undefined4 *)(lVar1 + 0x16c);
    }
  }
  FUN_180576690(param_2,iVar3,uVar5);
}



