// FUN_1805a46a0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805a46a0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1805a46a0(undefined1 *param_1,undefined8 param_2)

{
  byte bVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong lVar8;
  byte *pbVar9;
  undefined1 *puVar10;
  uint uVar11;
  int iVar12;
  ulonglong uVar13;
  undefined4 *puVar14;
  uint uVar15;
  int iVar16;
  longlong lVar17;
  uint uVar18;
  int iVar19;
  ulonglong uVar20;
  code *pcVar21;
  undefined1 auStack_768 [32];
  int local_748;
  undefined1 local_744;
  uint local_740;
  longlong local_738;
  longlong local_730;
  byte *local_728;
  uint local_720;
  undefined8 local_718;
  undefined1 local_708 [808];
  undefined1 *local_3e0;
  ulonglong local_328;
  int local_320;
  int local_31c;
  undefined1 local_318 [720];
  ulonglong local_48;
  
  local_48 = DAT_1808d5f00 ^ (ulonglong)auStack_768;
  lVar2 = *(longlong *)(param_1 + 8);
  uVar11 = 0;
  local_740 = (uint)param_2;
  local_738 = 0;
  local_744 = 0;
  local_328 = *(ulonglong *)(lVar2 + 0x1e8);
  local_748 = 0;
  uVar3 = *(undefined8 *)(lVar2 + 0x98);
  local_730 = *(longlong *)(lVar2 + 0xe0);
  plVar4 = *(longlong **)(*(longlong *)(lVar2 + 0xd0) + 0x50);
  local_718 = uVar3;
  if (plVar4 != (longlong *)0x0) {
    local_748 = (**(code **)*plVar4)(plVar4[1],param_2,&local_728);
    if ((local_748 == 0) && (uVar18 = *(uint *)(lVar2 + 0x1a4), uVar18 <= local_720)) {
      uVar15 = 0;
      pbVar9 = local_728;
      for (uVar11 = uVar18; uVar11 != 0; uVar11 = uVar11 - 1) {
        bVar1 = *pbVar9;
        pbVar9 = pbVar9 + 1;
        uVar15 = uVar15 << 8 | (uint)bVar1;
      }
      if (uVar15 < *(uint *)(lVar2 + 0x1b0)) {
        uVar18 = local_720 - uVar18;
        local_738 = FUN_18057abe0(uVar3,uVar18,&local_748);
        if (local_748 == 0) {
          FUN_18063aed0(local_738,local_728 + *(uint *)(lVar2 + 0x1a4),uVar18);
        }
        (**(code **)(*plVar4 + 8))(plVar4[1],&local_728);
        lVar8 = local_738;
        if (local_748 != 0) goto LAB_1805a4b38;
        goto LAB_1805a494f;
      }
      local_748 = 9;
    }
    lVar8 = 0;
    goto LAB_1805a4b38;
  }
  pbVar9 = *(byte **)(lVar2 + 0x1e8);
  iVar16 = *(int *)(lVar2 + 0x1a4) + *(int *)(lVar2 + 0x1a8);
  local_728 = pbVar9;
  iVar19 = FUN_1805788b0(pbVar9,local_740 * iVar16 + *(int *)(lVar2 + 0x1a0) +
                                *(int *)(lVar2 + 0x1c0));
  if ((iVar19 == 0) && (iVar19 = FUN_180577bf0(pbVar9,iVar16 * 2), iVar19 == 0)) {
    uVar18 = *(uint *)(lVar2 + 0x1a4);
    uVar20 = (ulonglong)uVar18;
    uVar15 = 0;
    pbVar9 = *(byte **)(pbVar9 + 0x38);
    uVar13 = uVar20;
    while (uVar18 != 0) {
      bVar1 = *pbVar9;
      pbVar9 = pbVar9 + 1;
      uVar15 = uVar15 << 8 | (uint)bVar1;
      uVar18 = (int)uVar13 - 1;
      uVar13 = (ulonglong)uVar18;
    }
    iVar16 = *(int *)(lVar2 + 0x1a8);
    iVar12 = iVar16;
    if (iVar16 == 0) {
      uVar18 = 0;
    }
    else {
      do {
        bVar1 = *pbVar9;
        pbVar9 = pbVar9 + 1;
        uVar11 = uVar11 << 8 | (uint)bVar1;
        iVar12 = iVar12 + -1;
      } while (iVar12 != 0);
      pbVar9 = pbVar9 + uVar20;
      uVar18 = 0;
      do {
        bVar1 = *pbVar9;
        pbVar9 = pbVar9 + 1;
        uVar18 = uVar18 << 8 | (uint)bVar1;
        iVar16 = iVar16 + -1;
      } while (iVar16 != 0);
    }
    if (uVar15 < *(uint *)(lVar2 + 0x1b0)) {
      if (*(uint *)(local_728 + 8) < uVar18) {
        iVar19 = 9;
        FUN_180577d30();
      }
      else {
        if (uVar18 < uVar11) {
          iVar19 = 9;
        }
        FUN_180577d30();
      }
    }
    else {
      iVar19 = 9;
      FUN_180577d30();
    }
  }
  else {
    uVar15 = local_740;
    uVar18 = local_740;
    uVar11 = local_740;
  }
  local_748 = iVar19;
  if ((iVar19 != 0) || (uVar18 = uVar18 - uVar11, uVar18 == 0)) {
    lVar8 = local_738;
    goto LAB_1805a4b38;
  }
  lVar8 = FUN_18057abe0(local_718,uVar18,&local_748);
  if ((local_748 != 0) ||
     (local_748 = FUN_180578190(local_328,*(int *)(lVar2 + 0x1c0) + uVar11,lVar8,uVar18),
     local_748 != 0)) goto LAB_1805a4b38;
  local_748 = 0;
LAB_1805a494f:
  puVar14 = (undefined4 *)((ulonglong)uVar15 * 0x10 + *(longlong *)(lVar2 + 0x1d0));
  *(undefined4 *)(param_1 + 0x674) = *puVar14;
  uVar3 = *(undefined8 *)(puVar14 + 2);
  *(undefined8 *)(param_1 + 0x680) = 0;
  *(undefined8 *)(param_1 + 0x688) = 0;
  *(undefined8 *)(param_1 + 0x678) = uVar3;
  lVar17 = (ulonglong)uVar15 * 0xfc + *(longlong *)(lVar2 + 0x1b8);
  uVar5 = *(undefined4 *)(lVar17 + 0xdc);
  uVar6 = *(undefined4 *)(lVar17 + 0xe0);
  uVar7 = *(undefined4 *)(lVar17 + 0xe4);
  *(undefined4 *)(param_1 + 0x690) = *(undefined4 *)(lVar17 + 0xd8);
  *(undefined4 *)(param_1 + 0x694) = uVar5;
  *(undefined4 *)(param_1 + 0x698) = uVar6;
  *(undefined4 *)(param_1 + 0x69c) = uVar7;
  *(undefined8 *)(param_1 + 0x6a0) = *(undefined8 *)(lVar17 + 0xe8);
  uVar11 = *(uint *)(lVar17 + 4);
  uVar13 = (ulonglong)uVar11;
  *(uint *)(param_1 + 0x670) = uVar11;
  if ((int)uVar11 < 0) {
    uVar13 = 0;
  }
  else {
    if (uVar18 < uVar11) {
      local_748 = 9;
      goto LAB_1805a4b38;
    }
    (**(code **)(local_730 + 0x20))(lVar8,uVar18,0x10ea);
  }
  iVar19 = uVar18 - (int)uVar13;
  if (param_1[0x5e] == '\0') {
    (**(code **)(local_730 + 0x30))(local_708,param_1,1);
    (**(code **)(local_730 + 0x38))(lVar2,lVar17,local_318);
    lVar2 = local_730;
    local_3e0 = local_318;
    local_748 = (**(code **)(*(longlong *)(local_730 + 0x18) + 0x18))
                          (local_708,uVar13 + lVar8,iVar19);
    if ((char)local_748 == -0x5c) {
      puVar10 = local_708;
      local_744 = 1;
      *(undefined1 *)(*(longlong *)(param_1 + 0x10) + 0xf8) = 0;
      pcVar21 = *(code **)(*(longlong *)(lVar2 + 0x18) + 0x18);
      goto LAB_1805a4a7b;
    }
  }
  else {
    pcVar21 = *(code **)(*(longlong *)(local_730 + 0x18) + 0x10);
    puVar10 = param_1;
LAB_1805a4a7b:
    local_748 = (*pcVar21)(puVar10,uVar13 + lVar8,iVar19);
  }
  if (((local_748 == 0) && (plVar4 != (longlong *)0x0)) && (*(longlong *)(*plVar4 + 0x10) != 0)) {
    iVar19 = FUN_1805778f0(*(undefined4 *)(param_1 + 0x38));
    local_328 = (ulonglong)(uint)(iVar19 >> 0x10);
    local_320 = FUN_1805778f0(*(undefined4 *)(param_1 + 0x40));
    local_320 = local_320 >> 0x10;
    local_31c = FUN_1805778f0(*(undefined4 *)(param_1 + 0x44));
    local_31c = local_31c >> 0x10;
    local_748 = (**(code **)(*plVar4 + 0x10))(plVar4[1],local_740,0,&local_328);
    *(int *)(param_1 + 0x38) = (int)local_328 << 0x10;
    *(int *)(param_1 + 0x40) = local_320 << 0x10;
    *(int *)(param_1 + 0x44) = local_31c << 0x10;
  }
LAB_1805a4b38:
  FUN_18057abd0(local_718,lVar8);
  *(undefined1 *)(*(longlong *)(param_1 + 0x10) + 0xf9) = local_744;
}



