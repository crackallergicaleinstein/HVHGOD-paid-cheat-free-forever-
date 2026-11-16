// FUN_1805b6d90 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805b6d90 */

void FUN_1805b6d90(longlong param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                  uint param_7)

{
  int *piVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int local_res8;
  int iStackX_c;
  int local_res10 [2];
  int local_res18 [2];
  int local_res20 [2];
  uint uVar4;
  int *piVar5;
  int local_58;
  int iStack_54;
  int local_50;
  int iStack_4c;
  int local_48;
  int iStack_44;
  
  FUN_1805b6b20(param_1,*(undefined4 *)(param_1 + 0x4920),*(undefined4 *)(param_1 + 0x4924),param_2,
                param_3,local_res10,local_res18);
  piVar5 = local_res20;
  uVar4 = param_7;
  FUN_1805b6b20(param_1,param_4,param_5,param_6,param_7,piVar5,&local_res8);
  piVar1 = (int *)(*(longlong *)(param_1 + 8) + 0x20);
  *piVar1 = *piVar1 + ((param_5 - param_3 >> 0x10) * (param_2 >> 0x10) -
                      (param_4 - param_2 >> 0x10) * (param_3 >> 0x10));
  local_58 = *(int *)(param_1 + 0x4920) + local_res10[0];
  iStack_54 = *(int *)(param_1 + 0x4924) + local_res18[0];
  local_50 = local_res10[0] + param_2;
  iStack_4c = local_res18[0] + param_3;
  uVar2 = CONCAT44(iStack_4c,local_50);
  local_48 = local_res20[0] + param_4;
  iStack_44 = local_res8 + param_5;
  uVar3 = CONCAT44(iStack_54,local_58);
  iStackX_c = local_res8 + param_7;
  local_res8 = local_res20[0] + param_6;
  if (*(char *)(param_1 + 0x48d7) != '\0') {
    FUN_1805b7300(param_1,uVar3);
    *(undefined1 *)(param_1 + 0x48d7) = 0;
    *(undefined1 *)(param_1 + 0x48d4) = 1;
    *(undefined8 *)(param_1 + 0x4918) = uVar2;
  }
  if (*(char *)(param_1 + 0x4938) != '\0') {
    FUN_1805b73c0(param_1,param_1 + 0x10,&local_58,uVar2,uVar4 & 0xffffff00);
    uVar3 = CONCAT44(iStack_54,local_58);
  }
  *(ulonglong *)(param_1 + 0x4950) = CONCAT44(iStack_44,local_48);
  *(ulonglong *)(param_1 + 0x4958) = CONCAT44(iStackX_c,local_res8);
  *(undefined1 *)(param_1 + 0x4938) = 1;
  *(undefined4 *)(param_1 + 0x493c) = 4;
  *(undefined8 *)(param_1 + 0x4940) = uVar3;
  *(undefined8 *)(param_1 + 0x4948) = uVar2;
  if (*(char *)(*(longlong *)(param_1 + 0x48e8) + 9) != '\0') {
    FUN_1805b7910(param_1 + 0x10,*(undefined8 *)(param_1 + 0x48d8),*(undefined8 *)(param_1 + 0x48e0)
                  ,*(longlong *)(param_1 + 0x48e8),*(undefined4 *)(param_1 + 0x48f0),
                  (ulonglong)piVar5 & 0xffffffffffffff00);
  }
  *(uint *)(param_1 + 0x4924) = param_7;
  *(int *)(param_1 + 0x4920) = param_6;
  return;
}



