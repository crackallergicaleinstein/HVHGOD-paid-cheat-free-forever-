// FUN_18024c440 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18024c440 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18024c440(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined1 auStack_698 [32];
  undefined **local_678;
  char *local_670;
  undefined8 local_668;
  uint local_660;
  undefined8 local_658;
  undefined4 local_650;
  undefined4 local_648;
  longlong local_640;
  char local_638 [1536];
  ulonglong local_38;
  
  local_38 = DAT_1808d5f00 ^ (ulonglong)auStack_698;
  *(longlong *)(*param_1 + 0x590) = *(longlong *)(*param_1 + 0x590) + 1;
  if (*(ulonglong *)(*param_1 + 0x588) <= *(ulonglong *)param_1[1]) {
    *(ulonglong *)(*param_1 + 0x588) = *(ulonglong *)param_1[1] + 2000;
    lVar1 = *param_1;
    lVar3 = *(ulonglong *)param_1[1] - *(ulonglong *)(lVar1 + 0x18);
    if (*(ulonglong *)param_1[1] < *(ulonglong *)(lVar1 + 0x18)) {
      lVar3 = 0;
    }
    if (*(longlong *)param_1[3] == 0) {
      uVar2 = 0xffffffff;
    }
    else {
      uVar2 = *(undefined4 *)(*(longlong *)param_1[3] + 0x44);
    }
    FUN_18063ab10(local_638,0,0x600);
    local_650 = *(undefined4 *)(lVar1 + 0x38);
    local_658 = *(undefined8 *)(lVar1 + 0x590);
    local_668 = *(undefined8 *)(lVar1 + 0x10);
    local_660 = (uint)*(byte *)(lVar1 + 0x570);
    local_670 = *(char **)(*(longlong *)param_1[2] + 8);
    local_678 = (undefined **)param_2;
    local_648 = uVar2;
    local_640 = lVar3;
    FUN_18015ad60(local_638,0x600,0xffffffffffffffff,
                  "reason=%s command=%lld completed_command=%lld completed_valid=%d count=%llu captured_tick=%d live_tick=%d age_ms=%llu"
                 );
    local_678 = &PTR_180700558;
    if (local_638[0] != '\0') {
      local_678 = (undefined **)&DAT_1806bcfc0;
    }
    local_670 = local_638;
    FUN_1800f6900(0);
    *(undefined8 *)(*param_1 + 0x590) = 0;
  }
}



