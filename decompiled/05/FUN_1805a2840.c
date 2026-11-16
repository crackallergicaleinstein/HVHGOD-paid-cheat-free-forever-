// FUN_1805a2840 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805a2840 */

uint FUN_1805a2840(undefined4 *param_1,undefined8 *param_2,undefined4 param_3,undefined8 param_4,
                  int param_5,int param_6,undefined8 *param_7,longlong param_8)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  bool bVar9;
  longlong local_98 [2];
  undefined8 *local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  int local_54;
  undefined4 *local_50;
  undefined8 local_48;
  
  lVar2 = param_8;
  lVar8 = 0;
  local_98[0] = 0;
  lVar1 = *(longlong *)(param_8 + 0x2f8);
  bVar9 = (param_6 - 0x3000U & 0xffffefff) == 0;
  uVar6 = 0x60;
  if (bVar9) {
    uVar6 = 0x201;
  }
  local_88 = (undefined8 *)*param_7;
  local_80 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  local_48 = 0;
  local_54 = param_6;
  local_50 = param_1;
  local_68 = FUN_18057ac40(*local_88,8,0,uVar6,0,&param_8);
  uVar4 = (uint)param_8;
  if ((uint)param_8 != 0) goto LAB_1805a2b60;
  uStack_60 = local_68;
  local_58 = uVar6;
  FUN_18063ab10(param_1,0,0xb8);
  param_1[8] = 0x32ff9c;
  uVar6 = 0x30;
  if (bVar9) {
    uVar6 = 0x201;
  }
  param_1[10] = 2;
  param_1[0x2d] = uVar6;
  param_1[0xb] = 0x10000;
  param_1[0xe] = 0x10000;
  param_1[0x26] = 0x2210;
  *param_1 = 0xffff;
  param_1[1] = 0xffff;
  param_1[2] = 0xffff;
  param_1[3] = 0xffff;
  param_1[4] = 0xffff;
  param_1[5] = 0xffff;
  param_1[0x1f] = 0xffff;
  param_1[0x20] = 0xffff;
  param_1[0x21] = 0xffff;
  param_1[0x2a] = 0xffff;
  if (*(int *)(param_2 + 2) == 0) {
    uVar4 = FUN_1805788b0(param_4,*(undefined4 *)(param_2 + 3));
    if ((uVar4 != 0) ||
       (uVar4 = FUN_180577d80(param_4,*(undefined4 *)((longlong)param_2 + 0x1c),local_98),
       uVar4 != 0)) goto LAB_1805a2b60;
    uVar4 = *(uint *)((longlong)param_2 + 0x1c);
LAB_1805a29fd:
    if (local_98[0] != 0) {
      lVar8 = (ulonglong)uVar4 + local_98[0];
    }
    uVar4 = FUN_1805a17b0(&local_88,local_98[0],lVar8);
  }
  else {
    uVar4 = FUN_1805a07c0(param_2,param_3,local_98,&param_8);
    if (uVar4 == 0) {
      uVar4 = (uint)param_8;
      goto LAB_1805a29fd;
    }
  }
  if (*(int *)(param_2 + 2) == 0) {
    uVar7 = param_4;
LAB_1805a2a2f:
    FUN_180578860(uVar7,local_98);
  }
  else if (param_2[5] == 0) {
    uVar7 = *param_2;
    goto LAB_1805a2a2f;
  }
  if (((uVar4 == 0) && (param_1[0x20] == 0xffff)) &&
     (uVar4 = FUN_18059c640(param_7,param_1,0,0), uVar4 == 0)) {
    if (!bVar9) {
      iVar5 = *(int *)(*(longlong *)(lVar2 + 0xd0) + 0x5c);
      if (iVar5 == -1) {
        lVar2 = *(longlong *)(lVar2 + 0x90);
        param_1[0xb0] = *(undefined4 *)(lVar2 + 0x60);
        iVar5 = *(int *)(lVar2 + 0x60);
        if (iVar5 != 0) {
          do {
            iVar5 = (**(code **)(lVar1 + 0x28))(iVar5);
            *(int *)(lVar2 + 0x60) = iVar5;
          } while (iVar5 < 0);
        }
      }
      else {
        param_1[0xb0] = iVar5;
        lVar8 = *(longlong *)(lVar2 + 0xd0);
        if (*(int *)(lVar8 + 0x5c) != 0) {
          do {
            lVar3 = *(longlong *)(lVar2 + 0xd0);
            uVar6 = (**(code **)(lVar1 + 0x28))(*(undefined4 *)(lVar8 + 0x5c));
            *(undefined4 *)(lVar3 + 0x5c) = uVar6;
            lVar8 = *(longlong *)(lVar2 + 0xd0);
          } while (*(int *)(lVar8 + 0x5c) < 0);
        }
      }
      if (param_1[0xb0] == 0) {
        param_1[0xb0] = param_1[0x84];
      }
    }
    if (((param_1[0x85] != 0) &&
        (uVar4 = FUN_1805788b0(param_4,param_1[0x1c] + param_1[0x85] + param_5), uVar4 == 0)) &&
       (uVar4 = FUN_1805a0cb0(param_1 + 0xa2,param_4,1,bVar9), uVar4 == 0)) {
      uVar4 = FUN_1805a0a50(param_1 + 0xa2,param_1 + 0xae,0,0);
    }
  }
LAB_1805a2b60:
  FUN_18057abd0(*local_88,local_68);
  return uVar4;
}



