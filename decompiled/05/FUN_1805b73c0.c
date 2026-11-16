// FUN_1805b73c0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805b73c0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1805b73c0(longlong param_1,longlong param_2,int *param_3,undefined8 param_4,char param_5)

{
  int iVar1;
  undefined8 uVar2;
  char cVar3;
  longlong lVar4;
  int *piVar5;
  undefined1 auStack_c8 [32];
  undefined8 *local_a8;
  undefined8 *local_a0;
  undefined8 local_98;
  int *local_90;
  undefined8 local_88;
  undefined8 local_80;
  int local_78;
  int iStack_74;
  undefined1 local_70 [8];
  undefined8 local_68;
  int local_60;
  ulonglong local_58;
  
  local_58 = DAT_1808d5f00 ^ (ulonglong)auStack_c8;
  local_98 = 0;
  cVar3 = '\0';
  local_90 = (int *)(param_1 + 0x4958);
  if (*(int *)(param_1 + 0x493c) == 2) {
    lVar4 = param_1 + 0x4940;
    piVar5 = (int *)(param_1 + 0x4948);
  }
  else {
    lVar4 = param_1 + 0x4950;
    piVar5 = local_90;
  }
  local_88 = param_4;
  if ((*piVar5 != *param_3) || (piVar5[1] != param_3[1])) {
    local_a0 = &local_98;
    local_a8 = &local_88;
    cVar3 = FUN_1805b68c0(param_1,lVar4,piVar5,param_3);
    if (cVar3 != '\0') {
      *(undefined8 *)piVar5 = local_98;
    }
  }
  uVar2 = local_98;
  local_80 = *(undefined8 *)(param_1 + 0x4928);
  iVar1 = *(int *)(param_1 + 0x493c);
  if (iVar1 == 2) {
    local_60 = 2;
    lVar4 = param_1 + 0x1838;
    if (param_5 == '\0') {
      lVar4 = param_2;
    }
    local_a8 = (undefined8 *)CONCAT44(local_a8._4_4_,*(undefined4 *)(param_1 + 0x494c));
    FUN_1805b6fa0(param_1,lVar4,&local_78,*(undefined4 *)(param_1 + 0x4948));
    if (((int)local_80 != local_78) || (local_80._4_4_ != iStack_74)) {
      (**(code **)(*(longlong *)(param_1 + 8) + 8))(*(longlong *)(param_1 + 8),&local_80);
      local_68 = CONCAT44(iStack_74,local_78);
      goto LAB_1805b7571;
    }
  }
  else if (iVar1 == 4) {
    local_a8._0_4_ = *(undefined4 *)(param_1 + 0x494c);
    local_60 = iVar1;
    FUN_1805b6fa0(param_1,param_2,&local_78,*(undefined4 *)(param_1 + 0x4948));
    local_a8._0_4_ = *(undefined4 *)(param_1 + 0x4954);
    FUN_1805b6fa0(param_1,param_2,local_70,*(undefined4 *)(param_1 + 0x4950));
    local_a8 = (undefined8 *)CONCAT44(local_a8._4_4_,*(undefined4 *)(param_1 + 0x495c));
    FUN_1805b6fa0(param_1,param_2,&local_68,*local_90);
    (**(code **)(*(longlong *)(param_1 + 8) + 0x18))(*(longlong *)(param_1 + 8),&local_80);
LAB_1805b7571:
    *(undefined8 *)(param_1 + 0x4928) = local_68;
  }
  if (cVar3 == '\0') {
    if (param_5 != '\0') goto LAB_1805b7591;
  }
  else {
    if (param_5 == '\0') goto LAB_1805b75f8;
LAB_1805b7591:
    param_2 = param_1 + 0x1838;
  }
  local_a8 = (undefined8 *)CONCAT44(local_a8._4_4_,param_3[1]);
  FUN_1805b6fa0(param_1,param_2,&local_78,*param_3);
  if ((local_78 != *(int *)(param_1 + 0x4928)) || (iStack_74 != *(int *)(param_1 + 0x492c))) {
    local_80 = *(undefined8 *)(param_1 + 0x4928);
    local_60 = 2;
    (**(code **)(*(longlong *)(param_1 + 8) + 8))(*(longlong *)(param_1 + 8),&local_80);
    *(ulonglong *)(param_1 + 0x4928) = CONCAT44(iStack_74,local_78);
  }
  if (cVar3 == '\0') {
  }
LAB_1805b75f8:
  *(undefined8 *)param_3 = uVar2;
}



