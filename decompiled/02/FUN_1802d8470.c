// FUN_1802d8470 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802d8470 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1802d8470(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  char cVar3;
  longlong lVar4;
  int iVar5;
  int *****pppppiVar6;
  uint uVar7;
  undefined1 *puVar8;
  char *pcVar9;
  undefined8 uVar10;
  undefined1 auStack_828 [32];
  undefined **local_808;
  char **local_800;
  undefined4 local_7f8;
  undefined4 local_7f0;
  uint local_7e8;
  double local_7e0;
  undefined4 local_7d8;
  char **local_7c8;
  undefined8 *local_7c0;
  char **local_7b8;
  undefined1 *puStack_7b0;
  char *local_7a8;
  undefined8 local_7a0;
  undefined1 local_798 [16];
  undefined1 local_788 [16];
  undefined8 local_778;
  undefined8 local_770;
  undefined8 local_768;
  undefined8 local_760;
  longlong local_758;
  undefined8 local_750;
  undefined4 local_748;
  undefined4 local_744;
  char *local_738;
  undefined8 local_730;
  int *****local_728;
  char *local_718;
  undefined8 local_710;
  undefined1 *local_708;
  undefined8 local_700;
  undefined1 local_6f8 [32];
  undefined1 local_6d8 [16];
  undefined8 local_6c8;
  ulonglong local_6c0;
  int *****local_6b8 [2];
  longlong local_6a8;
  ulonglong local_6a0;
  undefined8 *****local_698 [2];
  undefined8 local_688;
  ulonglong local_680;
  undefined8 *****local_678 [2];
  undefined8 local_668;
  ulonglong local_660;
  undefined8 *****local_658 [2];
  undefined8 local_648;
  ulonglong local_640;
  char *local_638;
  undefined8 local_630;
  undefined8 *****local_628;
  undefined8 local_620;
  char *local_618;
  undefined8 local_610;
  longlong local_608;
  longlong local_600;
  char *local_5f8;
  undefined8 local_5f0;
  char **local_5e8;
  undefined8 local_5e0;
  char *local_5d8;
  undefined8 local_5d0;
  undefined8 *****local_5c8;
  undefined8 local_5c0;
  char *local_5b8;
  undefined8 local_5b0;
  undefined8 *****local_5a8;
  undefined8 local_5a0;
  undefined8 local_598 [172];
  ulonglong local_38;
  
  local_38 = DAT_1808d5f00 ^ (ulonglong)auStack_828;
  local_7a8 = (char *)((ulonglong)local_7a8 & 0xffffffff00000000);
  FUN_18063ab10(&local_638,0,0x600);
  local_7e0 = (double)*(float *)((longlong)param_2 + 0x4c);
  local_7d8 = *(undefined4 *)((longlong)param_2 + 0x1c);
  local_7e8 = (uint)*(byte *)(param_2 + 4);
  local_7f0 = *(undefined4 *)(param_2 + 3);
  local_7f8 = *(undefined4 *)((longlong)param_2 + 0x14);
  local_800 = (char **)CONCAT44(local_800._4_4_,*(undefined4 *)(param_2 + 2));
  local_808 = (undefined **)param_2[1];
  puVar8 = (undefined1 *)0xffffffffffffffff;
  FUN_18015ad60(&local_638,0x600,0xffffffffffffffff,
                "target=0x%llx damage=%d health_left=%d hitgroup=%d matched_aimbot=%d expected_damage=%.2f expected_hitgroup=%d"
               );
  local_808 = &PTR_180700558;
  if ((char)local_638 != '\0') {
    local_808 = (undefined **)&DAT_1806bcfc0;
  }
  local_800 = &local_638;
  uVar10 = FUN_1800f6900(1);
  FUN_1802d7110(uVar10,local_658,*param_2);
  FUN_18015bea0(local_678,*(undefined4 *)(param_2 + 2));
  uVar10 = FUN_18015bea0(local_698,*(undefined4 *)((longlong)param_2 + 0x14));
  lVar4 = FUN_1803db490(uVar10,*(undefined4 *)(param_2 + 3));
  local_5e8 = (char **)(param_2 + 10);
  local_7c8 = local_5e8;
  if (0xf < (ulonglong)param_2[0xd]) {
    local_7c8 = (char **)*local_5e8;
  }
  local_7c0 = (undefined8 *)param_2[0xc];
  cVar3 = FUN_1802cccd0(&local_7c8);
  pcVar9 = "logevents_damagedealt_other";
  if (cVar3 != '\0') {
    pcVar9 = "logevents_damagedealt_gun";
  }
  local_7a8 = local_6d8;
  local_6c8 = 0;
  local_6c0 = 0xf;
  local_6d8._1_15_ = SUB1615((undefined1  [16])0x0,1);
  auVar1[0xf] = 0;
  auVar1._0_15_ = local_6d8._1_15_;
  local_6d8 = auVar1 << 8;
  local_638 = "target";
  local_630 = 6;
  local_628 = local_658;
  if (0xf < local_640) {
    local_628 = local_658[0];
  }
  local_620 = local_648;
  local_618 = "hitgroup";
  local_610 = 8;
  local_600 = -1;
  do {
    local_600 = local_600 + 1;
  } while (*(char *)(lVar4 + local_600) != '\0');
  local_5f8 = "weapon";
  local_5f0 = 6;
  if (0xf < (ulonglong)param_2[0xd]) {
    local_5e8 = (char **)*local_5e8;
  }
  local_5e0 = param_2[0xc];
  local_5d8 = "damage";
  local_5d0 = 6;
  local_5c8 = local_678;
  if (0xf < local_660) {
    local_5c8 = local_678[0];
  }
  local_5c0 = local_668;
  local_5b8 = "health_left";
  local_5b0 = 0xb;
  local_5a8 = local_698;
  if (0xf < local_680) {
    local_5a8 = local_698[0];
  }
  local_5a0 = local_688;
  do {
    puVar8 = puVar8 + 1;
  } while (*(char *)((longlong)pcVar9 + (longlong)puVar8) != '\0');
  local_7c8 = &local_638;
  local_7c0 = local_598;
  local_7b8 = (char **)pcVar9;
  puStack_7b0 = puVar8;
  local_608 = lVar4;
  uVar10 = FUN_1802c8120(local_798,&local_7b8,&local_7c8);
  local_808 = (undefined **)local_6d8;
  FUN_1802d0f20(local_808,uVar10,0,pcVar9);
  if ((*(char *)(param_2 + 4) == '\0') ||
     ((*(int *)((longlong)param_2 + 0x1c) == *(int *)(param_2 + 3) &&
      ((*(int *)((longlong)param_2 + 0x14) < 1 ||
       (*(float *)((longlong)param_2 + 0x4c) <= (float)*(int *)(param_2 + 2) + 1.0))))))
  goto LAB_1802d8a41;
  local_750 = FUN_1803db490();
  local_778 = 0xb000000000000000;
  local_770 = 0xb000000000000008;
  local_748 = *(undefined4 *)(param_2 + 2);
  local_768 = 0x1000000000000010;
  local_744 = *(undefined4 *)((longlong)param_2 + 0x4c);
  local_760 = 0x7000000000000014;
  local_7c8 = (char **)0x4;
  local_7c0 = &local_778;
  local_7b8 = (char **)0x1807d46b0;
  puStack_7b0 = (undefined1 *)0x38;
  local_758 = lVar4;
  FUN_1801d97f0(local_6d8,&local_7b8,&local_7c8);
  local_7a8 = (char *)CONCAT44(local_7a8._4_4_,4);
  if (param_2[7] == 0) {
    local_798 = (undefined1  [16])0x0;
    local_788 = (undefined1  [16])0x0;
    FUN_18015ba30(local_798,"unknown",7);
    puVar8 = local_798;
    uVar7 = 5;
  }
  else {
    puVar8 = (undefined1 *)FUN_18015b360(local_6f8);
    uVar7 = 6;
  }
  local_7a8 = (char *)CONCAT44(local_7a8._4_4_,uVar7);
  FUN_18015b360(local_6b8,puVar8);
  if ((uVar7 & 2) != 0) {
    uVar7 = uVar7 & 0xfffffffd;
    FUN_18015c010(local_6f8);
  }
  if ((uVar7 & 1) != 0) {
    FUN_18015c010(local_798);
  }
  pppppiVar6 = (int *****)local_6b8;
  if (0xf < local_6a0) {
    pppppiVar6 = local_6b8[0];
  }
  if (local_6a8 == 7) {
    iVar5 = *(int *)pppppiVar6 + -0x6e6b6e75;
    if ((iVar5 == 0) && (iVar5 = *(ushort *)((longlong)pppppiVar6 + 4) - 0x776f, iVar5 == 0)) {
      iVar5 = *(byte *)((longlong)pppppiVar6 + 6) - 0x6e;
    }
    if (iVar5 != 0) goto LAB_1802d8938;
  }
  else {
LAB_1802d8938:
    FUN_18015b2a0(local_6d8,", inferred from client evidence",0x1f);
  }
  local_7c8 = (char **)local_798;
  local_788 = ZEXT816(0xf) << 0x40;
  local_798._1_15_ = SUB1615((undefined1  [16])0x0,1);
  auVar2[0xf] = 0;
  auVar2._0_15_ = local_798._1_15_;
  local_798 = auVar2 << 8;
  local_738 = "reason";
  local_730 = 6;
  local_728 = (int *****)local_6b8;
  if (0xf < local_6a0) {
    local_728 = local_6b8[0];
  }
  local_718 = "additional";
  local_710 = 10;
  local_708 = local_6d8;
  if (0xf < local_6c0) {
    local_708 = (undefined1 *)local_6d8._0_8_;
  }
  local_700 = local_6c8;
  local_7b8 = &local_738;
  puStack_7b0 = local_6f8;
  local_7a8 = "logevents_mismatchedshot";
  local_7a0 = 0x18;
  uVar10 = FUN_1802c8120(&local_778,&local_7a8,&local_7b8);
  local_808 = (undefined **)local_798;
  FUN_1802d0f20(local_808,uVar10,3,"logevents_mismatchedshot");
  FUN_18015c010(local_6b8);
  FUN_18015c010(local_6d8);
LAB_1802d8a41:
  FUN_18015c010(local_698);
  FUN_18015c010(local_678);
  FUN_18015c010(local_658);
}



