// FUN_180397ba0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180397ba0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180397ba0(undefined8 *param_1,byte param_2,undefined8 param_3)

{
  longlong lVar1;
  HWND pHVar2;
  HWND pHVar3;
  longlong lVar4;
  undefined4 uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  char *pcVar8;
  undefined4 uVar9;
  ulonglong uVar10;
  undefined1 auStack_738 [32];
  undefined **local_718;
  char *local_710;
  undefined8 local_708;
  undefined4 local_700;
  undefined4 local_6f8;
  undefined4 local_6f0;
  undefined4 local_6e8;
  undefined4 local_6e0;
  uint local_6d8;
  undefined8 local_6d0;
  ulonglong local_6c8;
  undefined8 local_6c0;
  ulonglong local_6b8;
  undefined8 local_6b0;
  ulonglong local_6a8;
  undefined4 local_6a0;
  undefined4 local_698;
  byte local_688;
  undefined4 local_684;
  undefined4 local_680;
  undefined4 local_67c;
  undefined4 local_678;
  undefined4 local_674;
  undefined8 local_670;
  undefined8 local_668;
  undefined8 local_660;
  undefined8 local_658;
  char local_648 [1536];
  ulonglong local_48;
  
  local_48 = DAT_1808d5f00 ^ (ulonglong)auStack_738;
  if (*(ulonglong *)(param_1[1] + 0x2ae0) <= *(ulonglong *)*param_1) {
    *(ulonglong *)(param_1[1] + 0x2ae0) = *(ulonglong *)*param_1 + 1000;
    pHVar2 = DAT_180c6e520;
    uVar5 = 0;
    lVar1 = *(longlong *)param_1[2];
    lVar4 = 0;
    if (*(longlong *)(lVar1 + 0x40) != 0) {
      lVar4 = *(longlong *)(lVar1 + 0x40) + 0x10;
    }
    if (lVar4 == 0) {
      uVar7 = 0;
      uVar6 = 0;
      uVar10 = 0;
      uVar9 = 0;
    }
    else {
      uVar7 = (ulonglong)(*(uint *)(lVar1 + 0x60) & 0x2821);
      uVar6 = (ulonglong)(*(uint *)(lVar1 + 0x68) & 0x2821);
      uVar9 = *(undefined4 *)(lVar4 + 0x58);
      uVar10 = (ulonglong)(*(uint *)(lVar1 + 0x70) & 0x2821);
    }
    lVar1 = param_1[3];
    local_680 = *(undefined4 *)(lVar1 + 0x60);
    local_670 = *(undefined8 *)(lVar1 + 0x58);
    local_668 = *(undefined8 *)(lVar1 + 0x50);
    local_660 = *(undefined8 *)(lVar1 + 0x48);
    local_688 = *(byte *)(lVar1 + 0x9b);
    if (lVar4 == 0) {
      local_684 = 0xffffffff;
    }
    else {
      local_684 = *(undefined4 *)(lVar4 + 0x44);
    }
    local_67c = *(undefined4 *)(lVar1 + 0x84);
    local_678 = *(undefined4 *)(lVar1 + 0x94);
    local_674 = *(undefined4 *)(lVar1 + 0x8c);
    local_658 = param_3;
    if (DAT_180c6e520 != (HWND)0x0) {
      pHVar3 = GetForegroundWindow();
      if (pHVar3 == pHVar2) {
        uVar5 = 1;
      }
    }
    FUN_18063ab10(local_648,0,0x600);
    local_710 = "legit";
    if (*(char *)(param_1[3] + 0x9a) != '\0') {
      local_710 = "rage";
    }
    local_6a0 = local_680;
    local_6b0 = local_670;
    local_718 = *(undefined ***)(*(longlong *)param_1[2] + 8);
    local_6c0 = local_668;
    local_6d0 = local_660;
    local_6d8 = (uint)local_688;
    local_6e0 = local_684;
    local_6e8 = local_67c;
    local_6f0 = local_678;
    local_6f8 = local_674;
    local_708 = local_658;
    local_700 = uVar5;
    local_6c8 = uVar7;
    local_6b8 = uVar6;
    local_6a8 = uVar10;
    local_698 = uVar9;
    FUN_18015ad60(local_648,0x600,0xffffffffffffffff,
                  "command=%lld feature=%s reason=%s foreground=%d history=%d pulses=%d captured_tick=%d live_tick=%d timing_bound=%d original_actions=0x%llx live_actions=0x%llx original_edges=0x%llx live_edges=0x%llx original_scroll=0x%llx live_scroll=0x%llx original_weaponselect=%d live_weaponselect=%d crc_rebuild=pending target_scan=0 prediction=0 event_resubmission=0 server_ack=unverified"
                 );
    local_718 = &PTR_180700558;
    if (local_648[0] != '\0') {
      local_718 = (undefined **)&DAT_1806bcfc0;
    }
    pcVar8 = "SHOT_COMMAND_RECONCILE_REJECTED";
    if (param_2 != 0) {
      pcVar8 = "SHOT_COMMAND_RECONCILED";
    }
    local_710 = local_648;
    FUN_1800f6900((param_2 ^ 1) * 2,local_718,"Shots",pcVar8);
  }
}



