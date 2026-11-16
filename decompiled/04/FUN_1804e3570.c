// FUN_1804e3570 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804e3570 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1804e3570(longlong param_1,longlong param_2)

{
  short sVar1;
  undefined4 uVar2;
  short *psVar3;
  short *psVar4;
  char cVar5;
  int iVar6;
  undefined8 uVar7;
  longlong lVar8;
  int iVar9;
  longlong lVar10;
  undefined8 *puVar11;
  int iVar12;
  undefined8 extraout_XMM0_Qa;
  undefined1 auStack_68 [40];
  undefined8 *local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_1808d5f00 ^ (ulonglong)auStack_68;
  if (*(longlong *)(param_1 + 0xa0) == 0) {
    FUN_1804e7950();
  }
  local_38 = *(int *)(param_1 + 0x68);
  iVar9 = 0;
  if (*(char *)(param_2 + 0x35) == '\0') {
    local_40 = (undefined8 *)FUN_1804b8110(0x50);
    if (local_40 == (undefined8 *)0x0) {
      local_40 = (undefined8 *)0x0;
    }
    else {
      *local_40 = 0;
      local_40[1] = 0;
      local_40[2] = 0;
      local_40[3] = 0;
      local_40[4] = 0;
      local_40[5] = 0;
      local_40[6] = 0;
      local_40[7] = 0;
      *(undefined1 (*) [16])(local_40 + 8) = (undefined1  [16])0x0;
      *(undefined4 *)(local_40 + 9) = 0x3f800000;
    }
    iVar6 = *(int *)(param_1 + 0x8c);
    *(int *)(param_1 + 0x8c) = iVar6 + 1;
    uVar2 = *(undefined4 *)(param_2 + 0x78);
    *(int *)(local_40 + 3) = iVar6;
    *(undefined4 *)(local_40 + 2) = uVar2;
    *(undefined4 *)((longlong)local_40 + 0x1c) = *(undefined4 *)(param_2 + 0x3c);
    *(undefined4 *)((longlong)local_40 + 0x14) = *(undefined4 *)(param_2 + 0x70);
    FUN_1804d0160(param_1 + 0x68,&local_40);
    puVar11 = local_40;
  }
  else {
    puVar11 = *(undefined8 **)(param_2 + 0x80);
    if (puVar11 == (undefined8 *)0x0) {
      puVar11 = *(undefined8 **)(*(longlong *)(param_1 + 0x70) + -8 + (longlong)local_38 * 8);
    }
    FUN_1804e6a30(param_1,puVar11);
  }
  FUN_1804ebd30(param_1 + 0x78,param_2);
  lVar10 = *(longlong *)(param_1 + 0x80) + -0xa0 + (longlong)*(int *)(param_1 + 0x78) * 0xa0;
  if (*(longlong *)(lVar10 + 0x80) == 0) {
    *(undefined8 **)(lVar10 + 0x80) = puVar11;
  }
  iVar6 = *(int *)((longlong)puVar11 + 0x24);
  if (*(int *)(puVar11 + 4) == iVar6) {
    iVar12 = *(int *)(puVar11 + 4) + 1;
    if (iVar6 == 0) {
      iVar6 = 8;
    }
    else {
      iVar6 = iVar6 / 2 + iVar6;
    }
    if (iVar12 < iVar6) {
      iVar12 = iVar6;
    }
    FUN_1804d0a80(puVar11 + 4,iVar12);
  }
  *(longlong *)(puVar11[5] + (longlong)*(int *)(puVar11 + 4) * 8) = lVar10;
  *(int *)(puVar11 + 4) = *(int *)(puVar11 + 4) + 1;
  FUN_1804e41b0(param_1);
  psVar3 = *(short **)(lVar10 + 0x48);
  if (psVar3 != (short *)0x0) {
    sVar1 = *psVar3;
    psVar4 = psVar3;
    while (sVar1 != 0) {
      psVar4 = psVar4 + 1;
      iVar9 = iVar9 + 1;
      sVar1 = *psVar4;
    }
    lVar8 = (longlong)(iVar9 + 1) * 2;
    uVar7 = FUN_1804b8110(lVar8);
    uVar7 = FUN_18063aed0(uVar7,psVar3,lVar8);
    *(undefined8 *)(lVar10 + 0x48) = uVar7;
  }
  lVar8 = *(longlong *)(lVar10 + 0x88);
  if (lVar8 == 0) {
    lVar8 = *(longlong *)(param_1 + 0xa8);
  }
  if ((*(code **)(lVar8 + 0x18) == (code *)0x0) ||
     (cVar5 = (**(code **)(lVar8 + 0x18))(param_1,lVar10), cVar5 != '\0')) {
    FUN_1804e5b10(param_1,puVar11,lVar10);
    if (local_38 == 0) {
      FUN_1804e3db0(param_1,0,puVar11);
    }
  }
  else {
    FUN_1804e5c10(extraout_XMM0_Qa,lVar10);
    *(int *)(param_1 + 0x78) = *(int *)(param_1 + 0x78) + -1;
    *(int *)(puVar11 + 4) = *(int *)(puVar11 + 4) + -1;
    if (*(char *)(lVar10 + 0x35) == '\0') {
      FUN_1804eb800(puVar11);
      *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + -1;
    }
  }
}



