// FUN_1801b9c10 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801b9c10 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1801b9c10(undefined8 param_1,longlong param_2,longlong *param_3,longlong *param_4,
                  longlong param_5)

{
  bool bVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  char cVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  longlong *plVar9;
  ulonglong uVar10;
  longlong *plVar11;
  longlong *plVar12;
  uint uVar13;
  undefined1 auStack_a8 [32];
  byte local_88 [8];
  longlong *local_80;
  undefined4 local_78;
  undefined2 local_74;
  undefined1 local_72;
  longlong *local_70;
  ushort local_68;
  byte bStack_66;
  undefined4 uStack_65;
  int iStack_61;
  byte bStack_5d;
  char local_5c;
  ushort local_58;
  byte bStack_56;
  undefined4 uStack_55;
  undefined1 uStack_51;
  undefined4 uStack_50;
  undefined2 uStack_4c;
  undefined1 uStack_4a;
  char local_49;
  ulonglong local_48;
  
  local_48 = DAT_1808d5f00 ^ (ulonglong)auStack_a8;
  lVar7 = *param_3;
  if (lVar7 == 0) goto LAB_1801ba03c;
  local_70 = param_3;
  lVar6 = FUN_18017ea70();
  local_80 = (longlong *)0x0;
  *(int *)(lVar6 + 4) = *(int *)(lVar6 + 4) + 1;
  cVar5 = FUN_1804514f0(&local_80,lVar7,8);
  plVar9 = local_70;
  if (cVar5 != '\0') {
    plVar9 = local_80;
  }
  lVar7 = FUN_18017ea70();
  if (*(int *)(lVar7 + 4) != 0) {
    *(int *)(lVar7 + 4) = *(int *)(lVar7 + 4) + -1;
  }
  plVar12 = (longlong *)0x0;
  if (cVar5 != '\0') {
    plVar12 = plVar9;
  }
  if ((plVar12 != DAT_1808d7e78) || (DAT_1808d7e80 == 0)) {
    DAT_1808d7e80 = 0;
    DAT_1808d7e84 = 0;
    DAT_1808d7e78 = plVar12;
    lVar7 = FUN_18017ea70();
    *(int *)(lVar7 + 4) = *(int *)(lVar7 + 4) + 1;
    if (plVar12 + 0x58 == (longlong *)0x0) {
      bVar1 = false;
    }
    else {
      local_80 = (longlong *)0x0;
      cVar5 = FUN_1804514f0(&local_80,plVar12 + 0x58,8);
      if (cVar5 == '\0') {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
    }
    plVar9 = local_80;
    lVar7 = FUN_18017ea70();
    if (*(int *)(lVar7 + 4) != 0) {
      *(int *)(lVar7 + 4) = *(int *)(lVar7 + 4) + -1;
    }
    plVar11 = (longlong *)0x0;
    if (bVar1) {
      plVar11 = plVar9;
    }
    lVar7 = FUN_18017ea70();
    *(int *)(lVar7 + 4) = *(int *)(lVar7 + 4) + 1;
    if (plVar12 + 0x5a == (longlong *)0x0) {
      bVar1 = false;
    }
    else {
      local_80 = (longlong *)0x0;
      cVar5 = FUN_1804514f0(&local_80,plVar12 + 0x5a,8);
      if (cVar5 == '\0') {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
    }
    plVar9 = local_80;
    lVar7 = FUN_18017ea70();
    if (*(int *)(lVar7 + 4) != 0) {
      *(int *)(lVar7 + 4) = *(int *)(lVar7 + 4) + -1;
    }
    plVar12 = (longlong *)0x0;
    if (bVar1) {
      plVar12 = plVar9;
    }
    if ((((plVar11 < param_4) ||
         (param_5 - 0xfU < (ulonglong)((longlong)plVar11 - (longlong)param_4))) ||
        (plVar12 < param_4)) ||
       (param_5 - 0xfU < (ulonglong)((longlong)plVar12 - (longlong)param_4))) goto LAB_1801ba03c;
    lVar7 = FUN_18017ea70();
    *(int *)(lVar7 + 4) = *(int *)(lVar7 + 4) + 1;
    if (plVar11 == (longlong *)0x0) {
LAB_1801b9dff:
      local_5c = '\0';
    }
    else {
      local_80 = (longlong *)0x0;
      local_78 = 0;
      cVar5 = FUN_1804514f0(&local_80,plVar11,0xc);
      if (cVar5 == '\0') goto LAB_1801b9dff;
      local_68 = (ushort)local_80;
      bStack_66 = (byte)((ulonglong)local_80 >> 0x10);
      uStack_65 = (undefined4)((ulonglong)local_80 >> 0x18);
      iStack_61._0_1_ = (undefined1)((ulonglong)local_80 >> 0x38);
      iStack_61._1_3_ = (undefined3)local_78;
      bStack_5d = (byte)((uint)local_78 >> 0x18);
      local_5c = '\x01';
    }
    lVar7 = FUN_18017ea70();
    if (*(int *)(lVar7 + 4) != 0) {
      *(int *)(lVar7 + 4) = *(int *)(lVar7 + 4) + -1;
    }
    lVar7 = FUN_18017ea70();
    *(int *)(lVar7 + 4) = *(int *)(lVar7 + 4) + 1;
    if (plVar12 == (longlong *)0x0) {
LAB_1801b9e6f:
      local_49 = '\0';
    }
    else {
      local_80 = (longlong *)0x0;
      local_78 = 0;
      local_74 = 0;
      local_72 = 0;
      cVar5 = FUN_1804514f0(&local_80,plVar12,0xf);
      if (cVar5 == '\0') goto LAB_1801b9e6f;
      uStack_50 = local_78;
      uStack_4c = local_74;
      uStack_4a = local_72;
      local_58 = (ushort)local_80;
      bStack_56 = (byte)((ulonglong)local_80 >> 0x10);
      uStack_55 = (undefined4)((ulonglong)local_80 >> 0x18);
      uStack_51 = (undefined1)((ulonglong)local_80 >> 0x38);
      local_49 = '\x01';
    }
    lVar7 = FUN_18017ea70();
    if (*(int *)(lVar7 + 4) != 0) {
      *(int *)(lVar7 + 4) = *(int *)(lVar7 + 4) + -1;
    }
    if ((local_5c == '\0') || (local_49 == '\0')) goto LAB_1801ba03c;
    iVar8 = local_68 - 0xb60f;
    if (iVar8 == 0) {
      iVar8 = bStack_66 - 0x81;
    }
    if (iVar8 != 0) goto LAB_1801ba03c;
    iVar8 = iStack_61 + -0x124d0f6;
    if (iVar8 == 0) {
      iVar8 = bStack_5d - 0xc3;
    }
    if (iVar8 != 0) goto LAB_1801ba03c;
    iVar8 = local_58 - 0xbf0f;
    if (iVar8 == 0) {
      iVar8 = bStack_56 - 0x81;
    }
    if ((iVar8 != 0) ||
       (local_80 = (longlong *)0xc30124d0f602e8c1,
       CONCAT17(uStack_4a,CONCAT25(uStack_4c,CONCAT41(uStack_50,uStack_51))) != -0x3cfedb2f09fd173f)
       ) goto LAB_1801ba03c;
    lVar7 = FUN_18017ea70();
    *(int *)(lVar7 + 4) = *(int *)(lVar7 + 4) + 1;
    if ((longlong)plVar11 + 3 == 0) {
      bVar1 = false;
    }
    else {
      local_80 = (longlong *)((ulonglong)local_80 & 0xffffffff00000000);
      cVar5 = FUN_1804514f0(&local_80,(longlong)plVar11 + 3,4);
      if (cVar5 == '\0') {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
    }
    uVar3 = (uint)local_80;
    lVar7 = FUN_18017ea70();
    if (*(int *)(lVar7 + 4) != 0) {
      *(int *)(lVar7 + 4) = *(int *)(lVar7 + 4) + -1;
    }
    if ((!bVar1) || (0xf00 < uVar3 - 0x100)) goto LAB_1801ba03c;
    lVar7 = FUN_18017ea70();
    *(int *)(lVar7 + 4) = *(int *)(lVar7 + 4) + 1;
    bVar1 = false;
    if ((longlong)plVar12 + 3 != 0) {
      local_80 = (longlong *)((ulonglong)local_80 & 0xffffffff00000000);
      cVar5 = FUN_1804514f0(&local_80,(longlong)plVar12 + 3,4);
      if (cVar5 == '\0') {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
    }
    uVar4 = (uint)local_80;
    lVar7 = FUN_18017ea70();
    if (*(int *)(lVar7 + 4) != 0) {
      *(int *)(lVar7 + 4) = *(int *)(lVar7 + 4) + -1;
    }
    uVar13 = 0;
    if (bVar1) {
      uVar13 = uVar4;
    }
    if (uVar3 != uVar13) goto LAB_1801ba03c;
    DAT_1808d7e80 = uVar3;
  }
  uVar10 = (ulonglong)DAT_1808d7e80;
  lVar7 = *local_70;
  lVar6 = FUN_18017ea70();
  *(int *)(lVar6 + 4) = *(int *)(lVar6 + 4) + 1;
  bVar1 = false;
  if (uVar10 + lVar7 != 0) {
    local_88[0] = 0;
    cVar5 = FUN_1804514f0(local_88,uVar10 + lVar7,1);
    if (cVar5 == '\0') {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
  }
  bVar2 = local_88[0];
  lVar7 = FUN_18017ea70();
  if (*(int *)(lVar7 + 4) != 0) {
    *(int *)(lVar7 + 4) = *(int *)(lVar7 + 4) + -1;
  }
  if (bVar1) {
    *(undefined1 *)(param_2 + 1) = 1;
    *(bool *)param_2 = (bVar2 & 5) == 0;
  }
LAB_1801ba03c:
  *(undefined1 *)(param_2 + 1) = 0;
}



