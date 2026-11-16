// FUN_18021b9b0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18021b9b0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18021b9b0(undefined8 param_1,uint param_2,uint param_3,longlong param_4,ushort param_5)

{
  bool bVar1;
  longlong *plVar2;
  uint *puVar3;
  undefined8 uVar4;
  ushort uVar5;
  char cVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  uint *puVar11;
  ushort uVar12;
  longlong lVar13;
  uint uVar14;
  undefined1 auStack_6d8 [32];
  undefined **local_6b8;
  char *local_6b0;
  longlong local_6a8;
  uint local_6a0;
  uint local_698;
  ushort local_688 [2];
  char local_684;
  longlong local_680;
  uint local_678;
  uint uStack_674;
  longlong lStack_670;
  ushort local_668;
  undefined6 uStack_666;
  longlong local_660;
  longlong local_658;
  char local_648 [1544];
  ulonglong local_40;
  
  local_40 = DAT_1808d5f00 ^ (ulonglong)auStack_6d8;
  if ((param_2 != 2) && (param_2 != 3)) {
  }
  if ((int)param_3 < 0) {
  }
  if (0x39 < (int)param_3) {
  }
  lVar13 = DAT_180cca0d8 + 0x90 + (longlong)(int)((param_2 * 0x3a + param_3) * 0x10);
  if (lVar13 == 0) {
  }
  local_658 = param_4;
  lVar8 = FUN_18017ea70();
  *(int *)(lVar8 + 4) = *(int *)(lVar8 + 4) + 1;
  local_680 = 0;
  local_684 = FUN_1804514f0(&local_680,lVar13,8);
  lVar8 = local_660;
  if (local_684 != '\0') {
    lVar8 = local_680;
  }
  lVar9 = FUN_18017ea70();
  if (*(int *)(lVar9 + 4) != 0) {
    *(int *)(lVar9 + 4) = *(int *)(lVar9 + 4) + -1;
  }
  lVar9 = lVar13 + 8;
  local_660 = lVar9;
  lVar10 = FUN_18017ea70();
  *(int *)(lVar10 + 4) = *(int *)(lVar10 + 4) + 1;
  bVar1 = false;
  if (lVar9 != 0) {
    local_688[0] = 0;
    cVar6 = FUN_1804514f0(local_688,lVar9,2);
    if (cVar6 == '\0') {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
  }
  uVar5 = local_688[0];
  lVar9 = FUN_18017ea70();
  if (*(int *)(lVar9 + 4) != 0) {
    *(int *)(lVar9 + 4) = *(int *)(lVar9 + 4) + -1;
  }
  puVar3 = DAT_180cca028;
  if (local_684 == '\0') {
  }
  if (!bVar1) {
  }
  puVar11 = DAT_180cca020;
  if (DAT_180cca020 == DAT_180cca028) {
LAB_18021bafc:
    local_668 = uVar5;
    if (DAT_180cca028 == DAT_180cca030) {
      local_678 = param_2;
      uStack_674 = param_3;
      lStack_670 = lVar8;
      FUN_180231380(&DAT_180cca020,DAT_180cca028,&local_678);
    }
    else {
      *(ulonglong *)DAT_180cca028 = CONCAT44(param_3,param_2);
      *(longlong *)(puVar3 + 2) = lVar8;
      *(ulonglong *)(puVar3 + 4) = CONCAT62(uStack_666,uVar5);
      DAT_180cca028 = DAT_180cca028 + 6;
      local_678 = param_2;
      uStack_674 = param_3;
      lStack_670 = lVar8;
    }
  }
  else {
    do {
      if ((*puVar11 == param_2) && (puVar11[1] == param_3)) break;
      puVar11 = puVar11 + 6;
    } while (puVar11 != DAT_180cca028);
    if (puVar11 == DAT_180cca028) goto LAB_18021bafc;
    iVar7 = FUN_1805f68d0(&DAT_180cc9e50);
    if (iVar7 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1805f6d44(5);
    }
    plVar2 = DAT_180cca000;
    if (DAT_180cc9e9c == 0x7fffffff) {
      DAT_180cc9e9c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
      FUN_1805f6d44(6);
    }
    for (; plVar2 != DAT_180cca008; plVar2 = plVar2 + 0x25) {
      if (*plVar2 == lVar8) {
        FUN_1805f68fc(&DAT_180cc9e50);
        goto LAB_18021bbcc;
      }
    }
    FUN_1805f68fc(&DAT_180cc9e50);
    local_668 = uVar5;
    *(ulonglong *)puVar11 = CONCAT44(param_3,param_2);
    *(longlong *)(puVar11 + 2) = lVar8;
    *(ulonglong *)(puVar11 + 4) = CONCAT62(uStack_666,uVar5);
    local_678 = param_2;
    uStack_674 = param_3;
    lStack_670 = lVar8;
  }
LAB_18021bbcc:
  uVar4 = DAT_180cca0f8;
  lVar8 = DAT_180cca0d8;
  cVar6 = FUN_1804513c0(DAT_180cca0f8,1,2);
  if (cVar6 == '\0') {
  }
  lVar9 = FUN_18017ea70();
  *(int *)(lVar9 + 4) = *(int *)(lVar9 + 4) + 1;
  local_6b0 = (char *)CONCAT62(local_6b0._2_6_,param_5);
  local_6b8 = (undefined **)local_658;
  cVar6 = FUN_18022fed0(uVar4,lVar8,param_2 & 0xffff,param_3 & 0xffff);
  lVar8 = FUN_18017ea70();
  if (*(int *)(lVar8 + 4) != 0) {
    *(int *)(lVar8 + 4) = *(int *)(lVar8 + 4) + -1;
  }
  if (cVar6 == '\0') {
  }
  lVar8 = FUN_18017ea70();
  *(int *)(lVar8 + 4) = *(int *)(lVar8 + 4) + 1;
  local_680 = 0;
  cVar6 = FUN_1804514f0(&local_680,lVar13,8);
  lVar13 = local_660;
  if (cVar6 != '\0') {
    lVar13 = local_680;
  }
  lVar9 = FUN_18017ea70();
  lVar8 = local_658;
  if (*(int *)(lVar9 + 4) != 0) {
    *(int *)(lVar9 + 4) = *(int *)(lVar9 + 4) + -1;
  }
  lVar9 = 0;
  if (cVar6 != '\0') {
    lVar9 = lVar13;
  }
  if (lVar9 == local_658) {
    lVar13 = FUN_18017ea70();
    *(int *)(lVar13 + 4) = *(int *)(lVar13 + 4) + 1;
    if (local_660 == 0) {
      bVar1 = false;
    }
    else {
      local_688[0] = 0;
      cVar6 = FUN_1804514f0(local_688,local_660,2);
      if (cVar6 == '\0') {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
    }
    uVar5 = local_688[0];
    lVar13 = FUN_18017ea70();
    if (*(int *)(lVar13 + 4) != 0) {
      *(int *)(lVar13 + 4) = *(int *)(lVar13 + 4) + -1;
    }
    uVar12 = 0;
    if (bVar1) {
      uVar12 = uVar5;
    }
    if (uVar12 == param_5) {
      uVar14 = 1;
      goto LAB_18021bd08;
    }
  }
  uVar14 = 0;
LAB_18021bd08:
  FUN_18063ab10(local_648,0,0x600);
  local_6a0 = (uint)param_5;
  local_6a8 = lVar8;
  local_6b0 = (char *)CONCAT44(local_6b0._4_4_,param_3);
  local_6b8 = (undefined **)CONCAT44(local_6b8._4_4_,param_2);
  local_698 = uVar14;
  FUN_18015ad60(local_648,0x600,0xffffffffffffffff,
                "team=%d slot=%d id=%llu definition=%u readback=%d scope=local");
  local_6b8 = &PTR_180700558;
  if (local_648[0] != '\0') {
    local_6b8 = (undefined **)&DAT_1806bcfc0;
  }
  local_6b0 = local_648;
  FUN_1800f6900((uVar14 ^ 1) + 1,local_6b8,"Inventory","LOADOUT_EQUIP");
}



