// FUN_180254480 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180254480 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180254480(longlong param_1,longlong param_2,char *param_3)

{
  int iVar1;
  char *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  longlong lVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  undefined1 auStack_6a8 [32];
  undefined **local_688;
  char *local_680;
  int local_678;
  undefined4 local_670;
  undefined4 local_668;
  undefined8 local_660;
  undefined8 local_658;
  undefined8 local_650;
  char local_648 [1536];
  ulonglong local_48;
  
  local_48 = DAT_1808d5f00 ^ (ulonglong)auStack_6a8;
  pcVar2 = "unknown_shot_rejection";
  if (param_3 != (char *)0x0) {
    pcVar2 = param_3;
  }
  uVar5 = 0;
  local_688 = (undefined **)0x0;
  FUN_180254170(param_2,pcVar2,0xbf800000,0xbf800000);
  if (param_2 != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) | 1;
    lVar7 = 0;
    if (*(longlong *)(param_2 + 0x40) != 0) {
      lVar7 = *(longlong *)(param_2 + 0x40) + 0x10;
    }
    if (lVar7 != 0) {
      iVar6 = *(int *)(lVar7 + 0x44);
      goto LAB_1802544fb;
    }
  }
  iVar6 = -1;
LAB_1802544fb:
  if ((((*(char **)(param_1 + 0x98) != param_3) || (iVar1 = *(int *)(param_1 + 0x94), iVar1 < 0)) ||
      (iVar6 < iVar1)) || (0x1f < iVar6 - iVar1)) {
    *(char **)(param_1 + 0x98) = param_3;
    *(int *)(param_1 + 0x94) = iVar6;
    if (param_2 == 0) {
      uVar3 = 0xffffffffffffffff;
      uVar4 = 0;
      uVar8 = 0xffffffff;
      uVar9 = 0xffffffff;
      uVar10 = 0;
    }
    else {
      uVar5 = *(undefined8 *)(param_2 + 0x70);
      uVar4 = *(undefined8 *)(param_2 + 0x68);
      uVar10 = *(undefined8 *)(param_2 + 0x60);
      uVar8 = *(undefined4 *)(param_2 + 0x50);
      uVar9 = *(undefined4 *)(param_2 + 0x4c);
      uVar3 = *(undefined8 *)(param_2 + 8);
    }
    FUN_18063ab10(local_648,0,0x600);
    local_688 = (undefined **)"unknown";
    if (param_3 != (char *)0x0) {
      local_688 = (undefined **)param_3;
    }
    local_680 = (char *)uVar3;
    local_678 = iVar6;
    local_670 = uVar9;
    local_668 = uVar8;
    local_660 = uVar10;
    local_658 = uVar4;
    local_650 = uVar5;
    FUN_18015ad60(local_648,0x600,0xffffffffffffffff,
                  "reason=%s command=%lld client_tick=%d history1=%d history2=%d value=0x%llx changed=0x%llx scroll=0x%llx"
                 );
    local_688 = &PTR_180700558;
    if (local_648[0] != '\0') {
      local_688 = (undefined **)&DAT_1806bcfc0;
    }
    local_680 = local_648;
    FUN_1800f6900(2);
  }
}



