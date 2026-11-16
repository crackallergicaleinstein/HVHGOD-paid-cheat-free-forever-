// FUN_1803bad50 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1803bad50 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1803bad50(undefined8 param_1,longlong param_2,longlong *param_3,ulonglong param_4,
                  longlong param_5,undefined8 param_6)

{
  bool bVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  char cVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  uint uVar11;
  ulonglong uVar12;
  ulonglong local_res20;
  undefined1 auStack_c8 [32];
  byte local_a8 [8];
  ulonglong local_a0;
  undefined4 local_98;
  undefined2 local_94;
  undefined1 local_92;
  ulonglong local_90;
  ushort local_88;
  byte bStack_86;
  undefined4 uStack_85;
  int iStack_81;
  byte bStack_7d;
  char local_7c;
  ushort local_78;
  byte bStack_76;
  undefined4 uStack_75;
  undefined1 uStack_71;
  undefined4 uStack_70;
  undefined2 uStack_6c;
  undefined1 uStack_6a;
  char local_69;
  undefined8 local_68;
  ulonglong *local_60;
  ulonglong *local_58;
  undefined8 *local_50;
  undefined *local_48;
  ulonglong local_40;
  
  local_40 = DAT_1808d5f00 ^ (ulonglong)auStack_c8;
  lVar7 = *param_3;
  if (lVar7 == 0) goto LAB_1803bb1e4;
  local_res20 = param_4;
  lVar6 = FUN_18017ea70();
  local_a0 = 0;
  *(int *)(lVar6 + 4) = *(int *)(lVar6 + 4) + 1;
  cVar5 = FUN_1804514f0(&local_a0,lVar7,8);
  uVar9 = local_90;
  if (cVar5 != '\0') {
    uVar9 = local_a0;
  }
  lVar7 = FUN_18017ea70();
  if (*(int *)(lVar7 + 4) != 0) {
    *(int *)(lVar7 + 4) = *(int *)(lVar7 + 4) + -1;
  }
  local_90 = 0;
  if (cVar5 != '\0') {
    local_90 = uVar9;
  }
  if ((local_90 != DAT_18090b978) || (DAT_18090b980 == 0)) {
    lVar7 = local_90 + 0x2c0;
    DAT_18090b980 = 0;
    DAT_18090b984 = '\0';
    DAT_18090b978 = local_90;
    lVar6 = FUN_18017ea70();
    *(int *)(lVar6 + 4) = *(int *)(lVar6 + 4) + 1;
    if (lVar7 == 0) {
      bVar1 = false;
      uVar9 = local_90;
    }
    else {
      local_a0 = 0;
      cVar5 = FUN_1804514f0(&local_a0,lVar7,8);
      if (cVar5 == '\0') {
        bVar1 = false;
        uVar9 = local_90;
      }
      else {
        bVar1 = true;
        uVar9 = local_a0;
      }
    }
    lVar7 = FUN_18017ea70();
    uVar12 = local_90;
    if (*(int *)(lVar7 + 4) != 0) {
      *(int *)(lVar7 + 4) = *(int *)(lVar7 + 4) + -1;
    }
    uVar10 = 0;
    if (bVar1) {
      uVar10 = uVar9;
    }
    lVar7 = FUN_18017ea70();
    *(int *)(lVar7 + 4) = *(int *)(lVar7 + 4) + 1;
    if (uVar12 + 0x2d0 == 0) {
      bVar1 = false;
      uVar9 = local_90;
    }
    else {
      local_a0 = 0;
      cVar5 = FUN_1804514f0(&local_a0,uVar12 + 0x2d0,8);
      if (cVar5 == '\0') {
        bVar1 = false;
        uVar9 = local_90;
      }
      else {
        bVar1 = true;
        uVar9 = local_a0;
      }
    }
    lVar7 = FUN_18017ea70();
    if (*(int *)(lVar7 + 4) != 0) {
      *(int *)(lVar7 + 4) = *(int *)(lVar7 + 4) + -1;
    }
    uVar12 = 0;
    if (bVar1) {
      uVar12 = uVar9;
    }
    if ((((uVar10 < local_res20) || (param_5 - 0xfU < uVar10 - local_res20)) ||
        (uVar12 < local_res20)) || (param_5 - 0xfU < uVar12 - local_res20)) goto LAB_1803bb1e4;
    lVar7 = FUN_18017ea70();
    *(int *)(lVar7 + 4) = *(int *)(lVar7 + 4) + 1;
    if (uVar10 == 0) {
LAB_1803baf60:
      local_7c = '\0';
    }
    else {
      local_a0 = 0;
      local_98 = 0;
      cVar5 = FUN_1804514f0(&local_a0,uVar10,0xc);
      if (cVar5 == '\0') goto LAB_1803baf60;
      local_88 = (ushort)local_a0;
      bStack_86 = (byte)(local_a0 >> 0x10);
      uStack_85 = (undefined4)(local_a0 >> 0x18);
      iStack_81._0_1_ = (undefined1)(local_a0 >> 0x38);
      iStack_81._1_3_ = (undefined3)local_98;
      bStack_7d = (byte)((uint)local_98 >> 0x18);
      local_7c = '\x01';
    }
    lVar7 = FUN_18017ea70();
    if (*(int *)(lVar7 + 4) != 0) {
      *(int *)(lVar7 + 4) = *(int *)(lVar7 + 4) + -1;
    }
    lVar7 = FUN_18017ea70();
    *(int *)(lVar7 + 4) = *(int *)(lVar7 + 4) + 1;
    if (uVar12 == 0) {
LAB_1803bafd0:
      local_69 = '\0';
    }
    else {
      local_a0 = 0;
      local_98 = 0;
      local_94 = 0;
      local_92 = 0;
      cVar5 = FUN_1804514f0(&local_a0,uVar12,0xf);
      if (cVar5 == '\0') goto LAB_1803bafd0;
      uStack_70 = local_98;
      uStack_6c = local_94;
      uStack_6a = local_92;
      local_78 = (ushort)local_a0;
      bStack_76 = (byte)(local_a0 >> 0x10);
      uStack_75 = (undefined4)(local_a0 >> 0x18);
      uStack_71 = (undefined1)(local_a0 >> 0x38);
      local_69 = '\x01';
    }
    lVar7 = FUN_18017ea70();
    if (*(int *)(lVar7 + 4) != 0) {
      *(int *)(lVar7 + 4) = *(int *)(lVar7 + 4) + -1;
    }
    if ((local_7c == '\0') || (local_69 == '\0')) goto LAB_1803bb1e4;
    iVar8 = local_88 - 0xb60f;
    if (iVar8 == 0) {
      iVar8 = bStack_86 - 0x81;
    }
    if (iVar8 != 0) goto LAB_1803bb1e4;
    iVar8 = iStack_81 + -0x124d0f6;
    if (iVar8 == 0) {
      iVar8 = bStack_7d - 0xc3;
    }
    if (iVar8 != 0) goto LAB_1803bb1e4;
    iVar8 = local_78 - 0xbf0f;
    if (iVar8 == 0) {
      iVar8 = bStack_76 - 0x81;
    }
    if ((iVar8 != 0) ||
       (local_a0 = 0xc30124d0f602e8c1,
       CONCAT17(uStack_6a,CONCAT25(uStack_6c,CONCAT41(uStack_70,uStack_71))) != -0x3cfedb2f09fd173f)
       ) goto LAB_1803bb1e4;
    lVar7 = FUN_18017ea70();
    *(int *)(lVar7 + 4) = *(int *)(lVar7 + 4) + 1;
    if (uVar10 + 3 == 0) {
      bVar1 = false;
    }
    else {
      local_a0 = local_a0 & 0xffffffff00000000;
      cVar5 = FUN_1804514f0(&local_a0,uVar10 + 3,4);
      if (cVar5 == '\0') {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
    }
    uVar3 = (uint)local_a0;
    lVar7 = FUN_18017ea70();
    if (*(int *)(lVar7 + 4) != 0) {
      *(int *)(lVar7 + 4) = *(int *)(lVar7 + 4) + -1;
    }
    if ((!bVar1) || (0xf00 < uVar3 - 0x100)) goto LAB_1803bb1e4;
    lVar7 = FUN_18017ea70();
    *(int *)(lVar7 + 4) = *(int *)(lVar7 + 4) + 1;
    bVar1 = false;
    if (uVar12 + 3 != 0) {
      local_a0 = local_a0 & 0xffffffff00000000;
      cVar5 = FUN_1804514f0(&local_a0,uVar12 + 3,4);
      if (cVar5 == '\0') {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
    }
    uVar4 = (uint)local_a0;
    lVar7 = FUN_18017ea70();
    if (*(int *)(lVar7 + 4) != 0) {
      *(int *)(lVar7 + 4) = *(int *)(lVar7 + 4) + -1;
    }
    uVar11 = 0;
    if (bVar1) {
      uVar11 = uVar4;
    }
    if (uVar3 != uVar11) goto LAB_1803bb1e4;
    DAT_18090b980 = uVar3;
  }
  if (DAT_18090b984 == '\0') {
    local_68 = param_6;
    local_60 = &local_90;
    local_58 = &local_res20;
    local_50 = &param_5;
    local_48 = &DAT_18090b910;
    cVar5 = FUN_1803bb240(&local_68,0x57,1);
    if ((cVar5 == '\0') || (cVar5 = FUN_1803bb240(&local_68,0x59,3), cVar5 == '\0')) {
      DAT_18090b984 = '\0';
      goto LAB_1803bb1e4;
    }
    DAT_18090b984 = '\x01';
  }
  uVar9 = (ulonglong)DAT_18090b980;
  lVar7 = *param_3;
  lVar6 = FUN_18017ea70();
  *(int *)(lVar6 + 4) = *(int *)(lVar6 + 4) + 1;
  bVar1 = false;
  if (uVar9 + lVar7 != 0) {
    local_a8[0] = 0;
    cVar5 = FUN_1804514f0(local_a8,uVar9 + lVar7,1);
    if (cVar5 == '\0') {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
  }
  bVar2 = local_a8[0];
  lVar7 = FUN_18017ea70();
  if (*(int *)(lVar7 + 4) != 0) {
    *(int *)(lVar7 + 4) = *(int *)(lVar7 + 4) + -1;
  }
  if (bVar1) {
    *(undefined1 *)(param_2 + 1) = 1;
    *(bool *)param_2 = (bVar2 & 0xf) == 0;
  }
LAB_1803bb1e4:
  *(undefined1 *)(param_2 + 1) = 0;
}



