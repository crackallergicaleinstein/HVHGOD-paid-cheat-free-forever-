// FUN_180412b50 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180412b50 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000180412dbe) */

void FUN_180412b50(undefined8 param_1,longlong param_2,longlong *param_3,longlong param_4)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  ULONGLONG UVar5;
  longlong lVar6;
  undefined *puVar7;
  longlong lVar8;
  undefined1 auStack_698 [32];
  undefined **local_678;
  char *local_670;
  undefined *local_668;
  undefined *local_660;
  char local_648 [1536];
  ulonglong local_48;
  
  local_48 = DAT_1808d5f00 ^ (ulonglong)auStack_698;
  local_660 = &DAT_180b8e1c8;
  iVar3 = FUN_1805f68d0(&DAT_180b8e1c8);
  if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(5);
  }
  if (DAT_180b8e214 == 0x7fffffff) {
    DAT_180b8e214 = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(6);
  }
  if (((((param_2 == 0) || ((*(byte *)(param_2 + 0x20) & 1) == 0)) || (param_3[1] == 0)) ||
      ((*param_3 == 0 || (*(longlong *)(param_4 + 0x38) == 0)))) ||
     (piVar4 = (int *)FUN_180415e00(), *piVar4 != 0)) goto LAB_180412e42;
  iVar3 = DAT_180c7c96c;
  if (DAT_180c7c96c == 0) {
    UVar5 = GetTickCount64();
    if (UVar5 < DAT_180c7c940) goto LAB_180412e42;
    local_668 = &DAT_1809bb6e0;
    iVar3 = FUN_1805f68d0(&DAT_1809bb6e0);
    if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1805f6d44(5);
    }
    if (DAT_1809bb72c == 0x7fffffff) {
      DAT_1809bb72c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
      FUN_1805f6d44(6);
    }
    if ((DAT_180c7c96c == 0) && (DAT_180c7c940 <= UVar5)) {
      DAT_180c7c96c = FUN_1804174b0("C_BasePlayerPawn",0xcf73e28a);
      if (DAT_180c7c96c == 0) {
        DAT_180c7c940 = UVar5 + 1000;
      }
      else {
        DAT_180c7c940 = 0xffffffffffffffff;
      }
    }
    iVar3 = DAT_180c7c96c;
    FUN_1805f68fc(&DAT_1809bb6e0);
    if (iVar3 == 0) goto LAB_180412e42;
  }
  lVar8 = param_3[1];
  if (iVar3 + lVar8 == 0) {
    bVar1 = false;
    puVar7 = local_660;
  }
  else {
    local_668 = (undefined *)0x0;
    lVar6 = FUN_18017ea70();
    *(int *)(lVar6 + 4) = *(int *)(lVar6 + 4) + 1;
    cVar2 = FUN_1804514c0(&local_668,iVar3 + lVar8,8);
    if (cVar2 == '\0') {
      bVar1 = false;
      lVar8 = FUN_18017ea70();
      if (*(int *)(lVar8 + 4) != 0) {
        *(int *)(lVar8 + 4) = *(int *)(lVar8 + 4) + -1;
      }
      puVar7 = local_660;
    }
    else {
      bVar1 = true;
      lVar8 = FUN_18017ea70();
      if (*(int *)(lVar8 + 4) != 0) {
        *(int *)(lVar8 + 4) = *(int *)(lVar8 + 4) + -1;
      }
      puVar7 = local_668;
    }
  }
  if (!bVar1) {
    puVar7 = (undefined *)0x0;
  }
  if (puVar7 != (undefined *)0x0) {
    if (puVar7 + 0x38 == (undefined *)0x0) {
      bVar1 = false;
      puVar7 = local_660;
    }
    else {
      local_668 = (undefined *)0x0;
      lVar8 = FUN_18017ea70();
      *(int *)(lVar8 + 4) = *(int *)(lVar8 + 4) + 1;
      cVar2 = FUN_1804514c0(&local_668,puVar7 + 0x38,8);
      if (cVar2 == '\0') {
        bVar1 = false;
        lVar8 = FUN_18017ea70();
        if (*(int *)(lVar8 + 4) != 0) {
          *(int *)(lVar8 + 4) = *(int *)(lVar8 + 4) + -1;
        }
        puVar7 = local_660;
      }
      else {
        bVar1 = true;
        lVar8 = FUN_18017ea70();
        if (*(int *)(lVar8 + 4) != 0) {
          *(int *)(lVar8 + 4) = *(int *)(lVar8 + 4) + -1;
        }
        puVar7 = local_668;
      }
    }
    if (!bVar1) {
      puVar7 = (undefined *)0x0;
    }
    if (puVar7 == (undefined *)param_3[1]) {
      if (*(longlong **)(param_4 + 0x38) == (longlong *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_1805fa874();
      }
      (**(code **)(**(longlong **)(param_4 + 0x38) + 0x10))();
      UVar5 = GetTickCount64();
      if (DAT_180c7c948 <= UVar5) {
        DAT_180c7c948 = UVar5 + 2000;
        LOCK();
        UNLOCK();
        FUN_18063ab10(local_648,0,0x600);
        local_678 = *(undefined ***)(param_2 + 8);
        FUN_18015ad60(local_648,0x600,0xffffffffffffffff,
                      "command=%lld player_replays=0 clock_overrides=0 pose_overrides=0 movement_lookahead=unchanged"
                     );
        local_678 = &PTR_180700558;
        if (local_648[0] != '\0') {
          local_678 = (undefined **)&DAT_1806bcfc0;
        }
        local_670 = local_648;
        FUN_1800f6900(0);
      }
    }
  }
LAB_180412e42:
  FUN_1805f68fc(&DAT_180b8e1c8);
}



