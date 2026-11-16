// FUN_180254650 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180254650 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180254650(undefined8 param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  short sVar6;
  int iVar7;
  ulonglong uVar8;
  undefined4 *puVar9;
  int *piVar10;
  char *pcVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  longlong *plVar15;
  longlong lVar16;
  float fVar17;
  undefined1 auVar18 [64];
  float fVar19;
  undefined1 auVar20 [64];
  float fVar21;
  undefined1 auStack_708 [32];
  undefined **local_6e8;
  char *local_6e0;
  int local_6d8;
  char *local_6d0;
  char *local_6c8;
  char *local_6c0;
  undefined8 local_6b8;
  undefined8 local_6b0;
  undefined8 local_6a8;
  longlong *local_698;
  undefined8 *local_690;
  float local_688;
  float local_684;
  float local_680;
  float local_67c;
  float local_678;
  float local_674;
  longlong local_670;
  char local_668 [1536];
  ulonglong local_68;
  
  local_68 = DAT_1808d5f00 ^ (ulonglong)auStack_708;
  if (DAT_180b8e622 == '\0') {
  }
  local_698 = &local_670;
  local_690 = &DAT_180b8e5b8;
  local_670 = param_2;
  if (param_2 == 0) {
    FUN_180254bf0(&local_698,"command");
  }
  *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) | 1;
  lVar2 = *(longlong *)(param_2 + 0x40);
  lVar12 = 0;
  if (lVar2 != 0) {
    lVar12 = lVar2 + 0x10;
  }
  if (lVar12 == 0) {
    FUN_180254bf0(&local_698,&DAT_1807cfce0);
  }
  if (DAT_180b8e624 == '\0') {
    piVar10 = (int *)(param_2 + 0x4c);
  }
  else {
    piVar10 = (int *)(param_2 + 0x50);
  }
  iVar1 = *piVar10;
  if ((iVar1 < 0) || (*(int *)(param_2 + 0x30) <= iVar1)) {
    FUN_180254bf0(&local_698,"history_index");
  }
  lVar16 = *(longlong *)(*(longlong *)(param_2 + 0x38) + 8 + (longlong)iVar1 * 8);
  lVar14 = 0;
  if (lVar16 != 0) {
    lVar14 = lVar16 + 0x10;
  }
  if (lVar14 == 0) {
LAB_180254bb5:
    FUN_180254bf0(&local_698,"angles_missing");
  }
  lVar16 = 0;
  if (*(longlong *)(lVar14 + 8) != 0) {
    lVar16 = *(longlong *)(lVar14 + 8) + 0x10;
  }
  lVar13 = 0;
  if (*(longlong *)(lVar12 + 0x30) != 0) {
    lVar13 = *(longlong *)(lVar12 + 0x30) + 0x10;
  }
  if ((lVar16 == 0) || (lVar13 == 0)) goto LAB_180254bb5;
  auVar18 = ZEXT464(*(uint *)(lVar16 + 0x10));
  auVar20 = ZEXT464(*(uint *)(lVar16 + 0xc));
  fVar21 = *(float *)(lVar16 + 8);
  sVar6 = thunk_FUN_180624430(fVar21);
  if ((0 < sVar6) ||
     ((((sVar6 = thunk_FUN_180624430(auVar20._0_8_), 0 < sVar6 ||
        (sVar6 = thunk_FUN_180624430(auVar18._0_8_), 0 < sVar6)) ||
       (sVar6 = thunk_FUN_180624430(*(undefined4 *)(lVar13 + 8)), iVar5 = DAT_180b8e604, 0 < sVar6))
      || (((*(uint *)(lVar13 + 0xc) & 0x7f800000) == 0x7f800000 ||
          ((*(uint *)(lVar13 + 0x10) & 0x7f800000) == 0x7f800000)))))) {
    pcVar11 = "angles_non_finite";
    goto LAB_18025496d;
  }
  bVar3 = false;
  if (DAT_180b8e5e0 != '\0') {
    if (((((DAT_180b8e5e8 != *(longlong *)(param_2 + 8)) || (iVar1 != DAT_180b8e5f0)) ||
         ((*(int *)(lVar14 + 0x58) != (int)DAT_180b8e5fc ||
          (((*(float *)(lVar14 + 0x5c) != DAT_180b8e5fc._4_4_ ||
            (*(int *)(lVar14 + 0x50) != DAT_180b8e5f4)) ||
           (*(float *)(lVar14 + 0x54) != DAT_180b8e5f8)))))) ||
        ((fVar21 != DAT_180b8e608 || (fVar19 = auVar20._0_4_, fVar19 != DAT_180b8e60c)))) ||
       (fVar17 = auVar18._0_4_, fVar17 != DAT_180b8e610)) {
      pcVar11 = "gun_history_changed";
      goto LAB_18025496d;
    }
    if (DAT_180b8e5e1 != '\0') {
      local_67c = DAT_180b8e614 + fVar21;
      local_674 = fVar17 + DAT_180b8e61c;
      local_678 = fVar19 + DAT_180b8e618;
      local_688 = fVar17;
      local_684 = fVar19;
      local_680 = fVar21;
      iVar7 = FUN_180274ef0();
      if (iVar7 != iVar5) {
        pcVar11 = "no_spread_seed_changed";
        goto LAB_18025496d;
      }
      param_2 = local_670;
    }
  }
  bVar4 = false;
  if (DAT_180b8e623 == '\0') {
    uVar8 = 1;
    if (DAT_180b8e624 != '\0') {
      uVar8 = 0x800;
    }
    if (param_2 == 0) goto LAB_180254ab6;
    *(ulonglong *)(param_2 + 0x60) = *(ulonglong *)(param_2 + 0x60) | uVar8;
    *(ulonglong *)(param_2 + 0x68) = *(ulonglong *)(param_2 + 0x68) | uVar8;
    *(ulonglong *)(param_2 + 0x70) = *(ulonglong *)(param_2 + 0x70) & ~uVar8;
LAB_180254ab2:
    param_2 = local_670;
LAB_180254ab6:
    FUN_18063ab10(local_668,0,0x600);
    local_6c8 = "false";
    local_6c0 = "false";
    local_6d0 = "primary";
    if (bVar4) {
      local_6c0 = "true";
    }
    if (bVar3) {
      local_6c8 = "true";
    }
    if (DAT_180b8e624 != '\0') {
      local_6d0 = "secondary";
    }
    puVar9 = (undefined4 *)&DAT_00000044;
    if (lVar2 != 0) {
      puVar9 = (undefined4 *)(lVar2 + 0x54);
    }
    local_6a8 = *(undefined8 *)(param_2 + 0x70);
    local_6b0 = *(undefined8 *)(param_2 + 0x68);
    local_6b8 = *(undefined8 *)(param_2 + 0x60);
    local_6e0 = (char *)CONCAT44(local_6e0._4_4_,*puVar9);
    local_6e8 = *(undefined ***)(param_2 + 8);
    local_6d8 = iVar1;
    FUN_18015ad60(local_668,0x600,0xffffffffffffffff,
                  "command=%lld client_tick=%d history=%d attack=%s subtick_press=%s subtick_release=%s value=0x%llx changed=0x%llx scroll=0x%llx"
                 );
    local_6e8 = &PTR_180700558;
    if (local_668[0] != '\0') {
      local_6e8 = (undefined **)&DAT_1806bcfc0;
    }
    local_6e0 = local_668;
    FUN_1800f6900(0);
  }
  piVar10 = (int *)&DAT_00000010;
  if (lVar2 != 0) {
    piVar10 = (int *)(lVar2 + 0x20);
  }
  lVar16 = (longlong)*piVar10;
  if (0 < lVar16) {
    plVar15 = *(longlong **)(lVar12 + 0x18);
    do {
      plVar15 = plVar15 + 1;
      lVar12 = 0;
      if (*plVar15 != 0) {
        lVar12 = *plVar15 + 0x10;
      }
      if ((lVar12 != 0) && (*(longlong *)(lVar12 + 8) == 1)) {
        if ((bVar3) || (*(char *)(lVar12 + 0x10) != '\0')) {
          bVar3 = true;
        }
        if ((bVar4) || (*(char *)(lVar12 + 0x10) == '\0')) {
          bVar4 = true;
        }
      }
      lVar16 = lVar16 + -1;
    } while (lVar16 != 0);
    if ((bVar3) && (bVar4)) {
      bVar3 = true;
      bVar4 = true;
      if (param_2 == 0) goto LAB_180254ab6;
      *(ulonglong *)(param_2 + 0x60) = *(ulonglong *)(param_2 + 0x60) & 0xfffffffffffffffe;
      *(ulonglong *)(param_2 + 0x68) = *(ulonglong *)(param_2 + 0x68) | 1;
      *(ulonglong *)(param_2 + 0x70) = *(ulonglong *)(param_2 + 0x70) & 0xfffffffffffffffe;
      goto LAB_180254ab2;
    }
  }
  pcVar11 = "subtick_pulse";
LAB_18025496d:
  FUN_180254bf0(&local_698,pcVar11);
}



