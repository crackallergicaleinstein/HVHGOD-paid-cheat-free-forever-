// FUN_18054c430 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18054c430 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18054c430(undefined8 param_1,int param_2,undefined8 param_3,ulonglong param_4)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  ULONGLONG UVar5;
  undefined1 auStack_d8 [32];
  longlong local_b8;
  undefined8 local_a8;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined *local_78;
  undefined1 local_70 [24];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  ulonglong local_38;
  
  local_38 = DAT_1808d5f00 ^ (ulonglong)auStack_d8;
  local_78 = &DAT_1808e6940;
  iVar1 = FUN_1805f68d0(&DAT_1808e6940);
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(5);
  }
  if (DAT_1808e698c == 0x7fffffff) {
    DAT_1808e698c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(6);
  }
  if (DAT_180c62ff0 == 0) goto LAB_18054c4ec;
  DAT_180bb8ae8 = DAT_180c62ff0;
  local_b8 = DAT_180c62ff0 + 0x28;
  FUN_180505fc0(param_1,param_2,param_3,param_4);
  if (param_2 == 8) {
    DAT_180c62f48 = (undefined1 *)0x0;
    DAT_180c62fe0 = (int *)0x0;
    DAT_1808e4f84 = -1;
    DAT_180bbecdf = '\0';
    DAT_180bbecde = 0;
    lVar3 = FUN_180439770();
    *(undefined8 *)(lVar3 + 0x420) = 0;
    goto LAB_18054c4ec;
  }
  if ((((DAT_180c62f48 == (undefined1 *)0x0) && (DAT_180c62fe0 == (int *)0x0)) &&
      (DAT_1808e4f84 < 0)) || (DAT_180bbecdf != '\0')) goto LAB_18054c4ec;
  if ((param_2 - 0x100U & 0xfffffffb) == 0) {
    if ((param_4 >> 0x1e & 1) != 0) goto LAB_18054c4ec;
    iVar1 = (int)param_3;
LAB_18054c5a2:
    if (iVar1 == 0) goto LAB_18054c4ec;
  }
  else {
    if (param_2 == 0x20b) {
      iVar1 = ((short)((ulonglong)param_3 >> 0x10) != 1) + 5;
      goto LAB_18054c5a2;
    }
    if (param_2 == 0x201) {
      iVar1 = 1;
    }
    else if (param_2 == 0x207) {
      iVar1 = 4;
    }
    else {
      if (param_2 != 0x204) goto LAB_18054c4ec;
      iVar1 = 2;
    }
  }
  if (iVar1 == 0x1b) {
    iVar1 = 0;
  }
  if (DAT_180c62f48 == (undefined1 *)0x0) {
    if (DAT_180c62fe0 == (int *)0x0) {
      iVar2 = FUN_1805f68d0(&DAT_1808da600);
      if (iVar2 != 0) {
LAB_18054c791:
                    /* WARNING: Subroutine does not return */
        FUN_1805f6d44(5);
      }
      if (DAT_1808da64c == 0x7fffffff) {
LAB_18054c77c:
        DAT_1808da64c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
        FUN_1805f6d44(6);
      }
      local_58 = _DAT_1808da650;
      uStack_50 = uRam00000001808da658;
      local_a8 = DAT_1808da660;
      FUN_1805f68fc(&DAT_1808da600);
      local_48 = local_a8;
      *(int *)(local_70 + (longlong)DAT_1808e4f84 * 4 + 0x18) = iVar1;
      local_98 = local_58;
      uStack_90 = uStack_50;
      local_88 = local_48;
      puVar4 = (undefined8 *)FUN_18015c2e0(local_70,&local_98);
      local_98 = *puVar4;
      uStack_90 = puVar4[1];
      local_a8 = puVar4[2];
      local_88 = local_a8;
      local_58 = local_98;
      uStack_50 = uStack_90;
      iVar1 = FUN_1805f68d0(&DAT_1808da600);
      if (iVar1 != 0) goto LAB_18054c791;
      if (DAT_1808da64c == 0x7fffffff) goto LAB_18054c77c;
      iVar1 = memcmp(&local_98,&DAT_1808da650,0x18);
      if (iVar1 != 0) {
        _DAT_1808da650 = local_58;
        uRam00000001808da658 = uStack_50;
        DAT_1808da660 = local_a8;
        FUN_18015c470();
        DAT_180bb904c = 1;
        DAT_180bbe8b8 = DAT_180bbe8b8 + 1;
        UVar5 = GetTickCount64();
        DAT_180bbe8b0 = UVar5 + 600;
      }
      FUN_1805f68fc(&DAT_1808da600);
    }
    else {
      *DAT_180c62fe0 = iVar1;
    }
  }
  else {
    *(int *)(DAT_180c62f48 + 8) = iVar1;
    DAT_180c62f48[0x10] = *DAT_180c62f48;
  }
  DAT_180c62f48 = (undefined1 *)0x0;
  DAT_180c62fe0 = (int *)0x0;
  DAT_1808e4f84 = -1;
  DAT_180bbecdf = '\0';
  DAT_180bbecde = 0;
  lVar3 = FUN_180439770();
  *(undefined8 *)(lVar3 + 0x420) = 0;
  DAT_180bbecde = 1;
  lVar3 = FUN_180439770();
  *(undefined8 *)(lVar3 + 0x420) = 1;
LAB_18054c4ec:
  FUN_1805f68fc(&DAT_1808e6940);
}



