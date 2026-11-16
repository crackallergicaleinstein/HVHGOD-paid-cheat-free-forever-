// FUN_1803f9660 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1803f9660 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1803f9660(longlong param_1,longlong param_2,longlong *param_3,longlong *param_4,
                  longlong param_5)

{
  uint uVar1;
  bool bVar2;
  byte bVar3;
  uint uVar4;
  char cVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong *plVar11;
  uint uVar12;
  undefined1 auStack_a8 [32];
  byte local_88 [8];
  longlong *local_80;
  undefined4 local_78;
  undefined2 local_74;
  undefined1 local_72;
  longlong *local_70;
  longlong local_68;
  ushort local_60;
  byte bStack_5e;
  undefined4 uStack_5d;
  int iStack_59;
  byte bStack_55;
  char local_54;
  ushort local_50;
  byte bStack_4e;
  undefined4 uStack_4d;
  undefined1 uStack_49;
  undefined4 uStack_48;
  undefined2 uStack_44;
  undefined1 uStack_42;
  char local_41;
  ulonglong local_40;
  
  local_40 = DAT_1808d5f00 ^ (ulonglong)auStack_a8;
  lVar7 = *param_3;
  if (lVar7 == 0) goto LAB_1803f9a7c;
  local_70 = param_3;
  local_68 = param_1;
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
  plVar11 = (longlong *)0x0;
  if (cVar5 != '\0') {
    plVar11 = plVar9;
  }
  if ((plVar11 != *(longlong **)(param_1 + 0x68)) || (uVar1 = *(uint *)(param_1 + 0x70), uVar1 == 0)
     ) {
    *(longlong **)(param_1 + 0x68) = plVar11;
    *(undefined4 *)(param_1 + 0x70) = 0;
    *(undefined1 *)(param_1 + 0x74) = 0;
    lVar7 = FUN_18017ea70();
    *(int *)(lVar7 + 4) = *(int *)(lVar7 + 4) + 1;
    if (plVar11 + 0x58 == (longlong *)0x0) {
      bVar2 = false;
    }
    else {
      local_80 = (longlong *)0x0;
      cVar5 = FUN_1804514f0(&local_80,plVar11 + 0x58,8);
      if (cVar5 == '\0') {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
    }
    plVar9 = local_80;
    lVar7 = FUN_18017ea70();
    if (*(int *)(lVar7 + 4) != 0) {
      *(int *)(lVar7 + 4) = *(int *)(lVar7 + 4) + -1;
    }
    plVar10 = (longlong *)0x0;
    if (bVar2) {
      plVar10 = plVar9;
    }
    lVar7 = FUN_18017ea70();
    *(int *)(lVar7 + 4) = *(int *)(lVar7 + 4) + 1;
    if (plVar11 + 0x5a == (longlong *)0x0) {
      bVar2 = false;
    }
    else {
      local_80 = (longlong *)0x0;
      cVar5 = FUN_1804514f0(&local_80,plVar11 + 0x5a,8);
      if (cVar5 == '\0') {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
    }
    plVar9 = local_80;
    lVar7 = FUN_18017ea70();
    if (*(int *)(lVar7 + 4) != 0) {
      *(int *)(lVar7 + 4) = *(int *)(lVar7 + 4) + -1;
    }
    plVar11 = (longlong *)0x0;
    if (bVar2) {
      plVar11 = plVar9;
    }
    if ((((plVar10 < param_4) ||
         (param_5 - 0xfU < (ulonglong)((longlong)plVar10 - (longlong)param_4))) ||
        (plVar11 < param_4)) ||
       (param_5 - 0xfU < (ulonglong)((longlong)plVar11 - (longlong)param_4))) goto LAB_1803f9a7c;
    lVar7 = FUN_18017ea70();
    *(int *)(lVar7 + 4) = *(int *)(lVar7 + 4) + 1;
    if (plVar10 == (longlong *)0x0) {
LAB_1803f983e:
      local_54 = '\0';
    }
    else {
      local_80 = (longlong *)0x0;
      local_78 = 0;
      cVar5 = FUN_1804514f0(&local_80,plVar10,0xc);
      if (cVar5 == '\0') goto LAB_1803f983e;
      local_60 = (ushort)local_80;
      bStack_5e = (byte)((ulonglong)local_80 >> 0x10);
      uStack_5d = (undefined4)((ulonglong)local_80 >> 0x18);
      iStack_59._0_1_ = (undefined1)((ulonglong)local_80 >> 0x38);
      iStack_59._1_3_ = (undefined3)local_78;
      bStack_55 = (byte)((uint)local_78 >> 0x18);
      local_54 = '\x01';
    }
    lVar7 = FUN_18017ea70();
    if (*(int *)(lVar7 + 4) != 0) {
      *(int *)(lVar7 + 4) = *(int *)(lVar7 + 4) + -1;
    }
    lVar7 = FUN_18017ea70();
    *(int *)(lVar7 + 4) = *(int *)(lVar7 + 4) + 1;
    if (plVar11 == (longlong *)0x0) {
LAB_1803f98ae:
      local_41 = '\0';
    }
    else {
      local_80 = (longlong *)0x0;
      local_78 = 0;
      local_74 = 0;
      local_72 = 0;
      cVar5 = FUN_1804514f0(&local_80,plVar11,0xf);
      if (cVar5 == '\0') goto LAB_1803f98ae;
      uStack_48 = local_78;
      uStack_44 = local_74;
      uStack_42 = local_72;
      local_50 = (ushort)local_80;
      bStack_4e = (byte)((ulonglong)local_80 >> 0x10);
      uStack_4d = (undefined4)((ulonglong)local_80 >> 0x18);
      uStack_49 = (undefined1)((ulonglong)local_80 >> 0x38);
      local_41 = '\x01';
    }
    lVar7 = FUN_18017ea70();
    if (*(int *)(lVar7 + 4) != 0) {
      *(int *)(lVar7 + 4) = *(int *)(lVar7 + 4) + -1;
    }
    if ((local_54 == '\0') || (local_41 == '\0')) goto LAB_1803f9a7c;
    iVar8 = local_60 - 0xb60f;
    if (iVar8 == 0) {
      iVar8 = bStack_5e - 0x81;
    }
    if (iVar8 != 0) goto LAB_1803f9a7c;
    iVar8 = iStack_59 + -0x124d0f6;
    if (iVar8 == 0) {
      iVar8 = bStack_55 - 0xc3;
    }
    if (iVar8 != 0) goto LAB_1803f9a7c;
    iVar8 = local_50 - 0xbf0f;
    if (iVar8 == 0) {
      iVar8 = bStack_4e - 0x81;
    }
    if ((iVar8 != 0) ||
       (local_80 = (longlong *)0xc30124d0f602e8c1,
       CONCAT17(uStack_42,CONCAT25(uStack_44,CONCAT41(uStack_48,uStack_49))) != -0x3cfedb2f09fd173f)
       ) goto LAB_1803f9a7c;
    lVar7 = FUN_18017ea70();
    *(int *)(lVar7 + 4) = *(int *)(lVar7 + 4) + 1;
    if ((longlong)plVar10 + 3 == 0) {
      bVar2 = false;
    }
    else {
      local_80 = (longlong *)((ulonglong)local_80 & 0xffffffff00000000);
      cVar5 = FUN_1804514f0(&local_80,(longlong)plVar10 + 3,4);
      if (cVar5 == '\0') {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
    }
    uVar1 = (uint)local_80;
    lVar7 = FUN_18017ea70();
    if (*(int *)(lVar7 + 4) != 0) {
      *(int *)(lVar7 + 4) = *(int *)(lVar7 + 4) + -1;
    }
    if ((!bVar2) || (0xf00 < uVar1 - 0x100)) goto LAB_1803f9a7c;
    lVar7 = FUN_18017ea70();
    *(int *)(lVar7 + 4) = *(int *)(lVar7 + 4) + 1;
    bVar2 = false;
    if ((longlong)plVar11 + 3 != 0) {
      local_80 = (longlong *)((ulonglong)local_80 & 0xffffffff00000000);
      cVar5 = FUN_1804514f0(&local_80,(longlong)plVar11 + 3,4);
      if (cVar5 == '\0') {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
    }
    uVar4 = (uint)local_80;
    lVar7 = FUN_18017ea70();
    if (*(int *)(lVar7 + 4) != 0) {
      *(int *)(lVar7 + 4) = *(int *)(lVar7 + 4) + -1;
    }
    uVar12 = 0;
    if (bVar2) {
      uVar12 = uVar4;
    }
    if (uVar1 != uVar12) goto LAB_1803f9a7c;
    *(uint *)(local_68 + 0x70) = uVar1;
  }
  lVar7 = *local_70;
  lVar6 = FUN_18017ea70();
  *(int *)(lVar6 + 4) = *(int *)(lVar6 + 4) + 1;
  bVar2 = false;
  if ((ulonglong)uVar1 + lVar7 != 0) {
    local_88[0] = 0;
    cVar5 = FUN_1804514f0(local_88,(ulonglong)uVar1 + lVar7,1);
    if (cVar5 == '\0') {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
  }
  bVar3 = local_88[0];
  lVar7 = FUN_18017ea70();
  if (*(int *)(lVar7 + 4) != 0) {
    *(int *)(lVar7 + 4) = *(int *)(lVar7 + 4) + -1;
  }
  if (bVar2) {
    *(undefined1 *)(param_2 + 1) = 1;
    *(bool *)param_2 = (bVar3 & 5) == 0;
  }
LAB_1803f9a7c:
  *(undefined1 *)(param_2 + 1) = 0;
}



