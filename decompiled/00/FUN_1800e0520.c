// FUN_1800e0520 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1800e0520 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1800e0520(longlong param_1,longlong param_2,int param_3,int param_4)

{
  undefined1 *puVar1;
  longlong lVar2;
  char cVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  char *pcVar6;
  undefined8 uVar7;
  longlong lVar9;
  longlong lVar8;
  double dVar10;
  undefined1 auStack_d8 [32];
  char local_b8;
  undefined7 uStack_b7;
  longlong lStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined1 local_98 [32];
  char *local_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_1808d5f00 ^ (ulonglong)auStack_d8;
  lStack_b0 = -1;
  do {
    lStack_b0 = lStack_b0 + 1;
  } while (*(char *)(param_2 + lStack_b0) != '\0');
  local_38 = (char *)0x0;
  local_30 = 0;
  local_b8 = (char)param_2;
  uStack_b7 = (undefined7)((ulonglong)param_2 >> 8);
  local_78 = "scope overlay";
  uStack_70 = 0xd;
  uVar4 = FUN_1800aa290(&local_78,&local_b8);
  FUN_18015abc0(&local_38,0xc,&DAT_1806bbf8c,uVar4);
  local_58 = (undefined1  [16])0x0;
  local_48 = (undefined1  [16])0x0;
  lVar9 = -1;
  do {
    lVar8 = lVar9 + 1;
    lVar2 = lVar9 + 0x11;
    lVar9 = lVar8;
  } while (local_48[lVar2] != '\0');
  FUN_18015ba30(local_58,&local_38,lVar8);
  local_78 = (char *)0x0;
  uStack_70 = 0;
  uStack_68 = 0;
  uStack_60 = 0;
  FUN_1800f4160(*(undefined8 *)(param_1 + 8),&local_78,local_58);
  puVar1 = *(undefined1 **)(param_1 + 8);
  local_b8 = (char)puVar1;
  uStack_b7 = (undefined7)((ulonglong)puVar1 >> 8);
  lStack_b0 = 0;
  uStack_a8 = 0;
  local_a0 = 0x8000000000000000;
  switch(*puVar1) {
  case 0:
  case 3:
  case 4:
  case 5:
  case 6:
  case 7:
  case 8:
  case 9:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*puVar1) {
    case 1:
      goto switchD_1800e064c_caseD_1;
    case 2:
      goto switchD_1800e064c_caseD_2;
    }
  default:
    local_a0 = 1;
    break;
  case 1:
switchD_1800e064c_caseD_1:
    lStack_b0 = **(longlong **)(puVar1 + 8);
    break;
  case 2:
switchD_1800e064c_caseD_2:
    uStack_a8 = *(undefined8 *)(*(longlong *)(puVar1 + 8) + 8);
  }
  cVar3 = FUN_1800e6ca0(&local_78,&local_b8);
  if (cVar3 == '\0') {
    pcVar6 = (char *)FUN_1800f34a0(&local_78);
    if ((*pcVar6 == '\x05') || (*pcVar6 == '\x06')) {
      uVar7 = FUN_1800f34a0(&local_78);
      dVar10 = (double)FUN_1800ea420(uVar7);
      if (0.0 <= dVar10) {
        uVar7 = FUN_1800f34a0(&local_78);
        dVar10 = (double)FUN_1800ea420(uVar7);
        if (dVar10 <= (double)param_4) goto LAB_1800e07c8;
      }
    }
    local_38 = &local_b8;
    local_b8 = '\0';
    uStack_b7 = 0;
    lStack_b0 = 0;
    FUN_1801409d0(&lStack_b0,0);
    local_b8 = '\x05';
    lStack_b0 = (longlong)param_3;
    pcVar6 = (char *)FUN_1800f3560(&local_78);
    cVar3 = *pcVar6;
    *pcVar6 = local_b8;
    lVar9 = *(longlong *)(pcVar6 + 8);
    *(longlong *)(pcVar6 + 8) = lStack_b0;
    local_b8 = cVar3;
    lStack_b0 = lVar9;
    FUN_1801409d0(&lStack_b0,cVar3);
  }
  else if (**(char **)(param_1 + 0x10) == '\0') {
    local_78 = &local_b8;
    local_b8 = '\0';
    uStack_b7 = 0;
    lStack_b0 = 0;
    FUN_1801409d0(&lStack_b0,0);
    local_b8 = '\x05';
    uVar7 = *(undefined8 *)(param_1 + 8);
    lStack_b0 = (longlong)param_3;
    uVar5 = FUN_18015b360(local_98,local_58);
    pcVar6 = (char *)FUN_1800f43d0(uVar7,uVar5);
    cVar3 = *pcVar6;
    *pcVar6 = local_b8;
    lVar9 = *(longlong *)(pcVar6 + 8);
    *(longlong *)(pcVar6 + 8) = lStack_b0;
    local_b8 = cVar3;
    lStack_b0 = lVar9;
    FUN_1801409d0(&lStack_b0,cVar3);
  }
LAB_1800e07c8:
  FUN_18015c010(local_58);
}



