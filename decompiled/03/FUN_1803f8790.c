// FUN_1803f8790 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1803f8790 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1803f8790(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  size_t _Size;
  bool bVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  longlong lVar9;
  undefined8 *_Buf2;
  ulonglong uVar10;
  longlong lVar11;
  ulonglong uVar12;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  byte local_60 [8];
  undefined1 local_58 [32];
  undefined4 local_38;
  undefined2 local_34;
  ulonglong local_30;
  
  local_30 = DAT_1808d5f00 ^ (ulonglong)auStack_88;
  plVar6 = (longlong *)FUN_1801b55b0(local_58);
  plVar1 = plVar6 + 2;
  if (0xf < (ulonglong)plVar6[3]) {
    plVar6 = (longlong *)*plVar6;
  }
  if (*plVar1 != 0xc) {
LAB_1803f8b2f:
    FUN_18015c010(local_58);
  }
  lVar11 = *plVar6 + -0x4d6e696b53485648;
  if (lVar11 == 0) {
    lVar11 = (ulonglong)*(uint *)(plVar6 + 1) - 0x6c65646f;
  }
  FUN_18015c010(local_58);
  if (lVar11 != 0) {
  }
  lVar11 = FUN_18017ea70();
  *(int *)(lVar11 + 4) = *(int *)(lVar11 + 4) + 1;
  bVar2 = false;
  if (param_2 + 0x18 != 0) {
    local_68 = 0;
    cVar3 = FUN_1804514f0(&local_68,param_2 + 0x18,8);
    if (cVar3 == '\0') {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
  }
  uVar12 = local_68;
  lVar11 = FUN_18017ea70();
  if (*(int *)(lVar11 + 4) != 0) {
    *(int *)(lVar11 + 4) = *(int *)(lVar11 + 4) + -1;
  }
  uVar8 = 0;
  if (bVar2) {
    uVar8 = uVar12;
  }
  puVar7 = (undefined8 *)FUN_1801b55b0(local_58,uVar8);
  _Buf2 = puVar7;
  if (0xf < (ulonglong)puVar7[3]) {
    _Buf2 = (undefined8 *)*puVar7;
  }
  _Size = (*(undefined8 **)(param_1 + 8))[1];
  if ((_Size != puVar7[2]) ||
     (((_Size != 0 &&
       (iVar4 = memcmp((void *)**(undefined8 **)(param_1 + 8),_Buf2,_Size), iVar4 != 0)) ||
      (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x60) == 0)))) goto LAB_1803f8b2f;
  lVar11 = FUN_18017ea70();
  *(int *)(lVar11 + 4) = *(int *)(lVar11 + 4) + 1;
  if (uVar8 + 0x18 == 0) {
    bVar2 = false;
  }
  else {
    local_68 = 0;
    cVar3 = FUN_1804514f0(&local_68,uVar8 + 0x18,8);
    if (cVar3 == '\0') {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
  }
  uVar12 = local_68;
  lVar11 = FUN_18017ea70();
  if (*(int *)(lVar11 + 4) != 0) {
    *(int *)(lVar11 + 4) = *(int *)(lVar11 + 4) + -1;
  }
  uVar8 = 0;
  if (bVar2) {
    uVar8 = uVar12;
  }
  if (uVar8 != *(ulonglong *)(*(longlong *)(param_1 + 0x10) + 0x60)) goto LAB_1803f8b2f;
  FUN_18015c010(local_58);
  lVar11 = FUN_18017ea70();
  *(int *)(lVar11 + 4) = *(int *)(lVar11 + 4) + 1;
  if (param_2 + 8 == 0) {
    bVar2 = false;
  }
  else {
    local_68 = 0;
    cVar3 = FUN_1804514f0(&local_68,param_2 + 8,8);
    if (cVar3 == '\0') {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
  }
  uVar12 = local_68;
  lVar11 = FUN_18017ea70();
  if (*(int *)(lVar11 + 4) != 0) {
    *(int *)(lVar11 + 4) = *(int *)(lVar11 + 4) + -1;
  }
  if (bVar2) {
    lVar11 = FUN_18017ea70();
    *(int *)(lVar11 + 4) = *(int *)(lVar11 + 4) + 1;
    if (uVar12 == 0) goto LAB_1803f89b5;
    local_68 = 0;
    cVar3 = FUN_1804514f0(&local_68,uVar12,8);
    if (cVar3 == '\0') goto LAB_1803f89b5;
    bVar2 = true;
  }
  else {
    uVar12 = 0;
    lVar11 = FUN_18017ea70();
    *(int *)(lVar11 + 4) = *(int *)(lVar11 + 4) + 1;
LAB_1803f89b5:
    bVar2 = false;
  }
  uVar8 = local_68;
  lVar11 = FUN_18017ea70();
  if (*(int *)(lVar11 + 4) != 0) {
    *(int *)(lVar11 + 4) = *(int *)(lVar11 + 4) + -1;
  }
  if ((bVar2) && (uVar8 != 0)) {
    lVar11 = FUN_18017ea70();
    local_68 = 0;
    *(int *)(lVar11 + 4) = *(int *)(lVar11 + 4) + 1;
    cVar3 = FUN_1804514f0(&local_68,uVar8,8);
    uVar8 = local_68;
    lVar11 = FUN_18017ea70();
    if (*(int *)(lVar11 + 4) != 0) {
      *(int *)(lVar11 + 4) = *(int *)(lVar11 + 4) + -1;
    }
    uVar10 = 0;
    if (cVar3 != '\0') {
      uVar10 = uVar8;
    }
    if (uVar10 != 0) {
      lVar11 = FUN_18017ea70();
      *(int *)(lVar11 + 4) = *(int *)(lVar11 + 4) + 1;
      local_68 = local_68 & 0xffffff0000000000;
      cVar3 = FUN_1804514f0(&local_68,uVar10,5);
      local_38 = (undefined4)local_68;
      if (cVar3 == '\0') {
        local_68._0_6_ = (uint6)(uint5)local_68;
      }
      else {
        local_68._0_6_ = CONCAT15(1,(uint5)local_68);
      }
      lVar11 = FUN_18017ea70();
      if (*(int *)(lVar11 + 4) != 0) {
        *(int *)(lVar11 + 4) = *(int *)(lVar11 + 4) + -1;
      }
      goto LAB_1803f8a7a;
    }
  }
  local_38 = (undefined4)local_68;
  local_68._0_6_ = (uint6)(uint5)local_68;
LAB_1803f8a7a:
  local_34 = local_68._4_2_;
  if (local_68._5_1_ == '\0') {
  }
  local_60[0] = 0x48;
  local_60[1] = 0x8b;
  local_60[2] = 0x41;
  local_60[3] = 8;
  local_60[4] = 0xc3;
  lVar11 = 0;
  do {
    lVar9 = lVar11 + 1;
    if (local_58[lVar11 + 0x20] != local_60[lVar11]) {
      uVar5 = -(uint)((byte)local_58[lVar11 + 0x20] < local_60[lVar11]) | 1;
      goto LAB_1803f8acd;
    }
    lVar11 = lVar9;
  } while (lVar9 != 5);
  uVar5 = 0;
LAB_1803f8acd:
  if (uVar5 != 0) {
  }
  lVar11 = FUN_18017ea70();
  *(int *)(lVar11 + 4) = *(int *)(lVar11 + 4) + 1;
  if (uVar12 + 8 != 0) {
    local_68 = 0;
    FUN_1804514f0(&local_68,uVar12 + 8,8);
  }
  lVar11 = FUN_18017ea70();
  if (*(int *)(lVar11 + 4) == 0) {
  }
  *(int *)(lVar11 + 4) = *(int *)(lVar11 + 4) + -1;
}



