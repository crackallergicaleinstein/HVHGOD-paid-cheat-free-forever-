// FUN_1802354f0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802354f0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000180235559) */

void FUN_1802354f0(byte param_1,byte param_2,longlong param_3,longlong param_4,longlong param_5)

{
  ULONGLONG UVar1;
  ulonglong uVar2;
  undefined1 auStack_6d8 [32];
  undefined **local_6b8;
  char *local_6b0;
  uint local_6a8;
  ulonglong local_6a0;
  ulonglong local_698;
  ulonglong local_690;
  undefined8 local_688;
  undefined8 local_680;
  undefined8 local_678;
  undefined8 local_670;
  byte local_668;
  byte local_667;
  ulonglong local_660;
  char local_658 [1536];
  ulonglong local_58;
  
  local_58 = DAT_1808d5f00 ^ (ulonglong)auStack_6d8;
  LOCK();
  DAT_180bbeeb8 = DAT_180bbeeb8 + 1;
  UNLOCK();
  LOCK();
  DAT_180bbeec0 = DAT_180bbeec0 + param_3;
  UNLOCK();
  LOCK();
  DAT_180bbeec8 = DAT_180bbeec8 + param_4;
  UNLOCK();
  LOCK();
  DAT_180bbeed0 = DAT_180bbeed0 + param_5;
  UNLOCK();
  local_668 = param_2;
  local_667 = param_1;
  UVar1 = GetTickCount64();
  local_670 = DAT_180bbeef0;
  local_678 = DAT_180bbeee8;
  local_680 = DAT_180bbeee0;
  local_688 = DAT_180bbeed8;
  local_690 = DAT_180bbeed0;
  local_698 = DAT_180bbeec8;
  local_6a0 = DAT_180bbeec0;
  local_660 = DAT_180bbeeb8;
  if (DAT_180bbeef8 <= UVar1) {
    DAT_180bbeef8 = UVar1 + 5000;
    LOCK();
    UNLOCK();
    LOCK();
    DAT_180bbeeb8 = 0;
    UNLOCK();
    LOCK();
    DAT_180bbeef0 = 0;
    UNLOCK();
    LOCK();
    DAT_180bbeee8 = 0;
    UNLOCK();
    LOCK();
    DAT_180bbeee0 = 0;
    UNLOCK();
    LOCK();
    DAT_180bbeed8 = 0;
    UNLOCK();
    LOCK();
    DAT_180bbeed0 = 0;
    UNLOCK();
    uVar2 = 1;
    if (local_660 != 0) {
      uVar2 = local_660;
    }
    LOCK();
    DAT_180bbeec8 = 0;
    UNLOCK();
    LOCK();
    DAT_180bbeec0 = 0;
    UNLOCK();
    FUN_18063ab10(local_658,0,0x600);
    local_690 = local_690 / uVar2;
    local_698 = local_698 / uVar2;
    local_6a0 = local_6a0 / uVar2;
    local_6a8 = (uint)local_668;
    local_6b0 = (char *)CONCAT44(local_6b0._4_4_,(uint)local_667);
    local_6b8 = (undefined **)local_660;
    FUN_18015ad60(local_658,0x600,0xffffffffffffffff,
                  "calls=%llu aimbot=%d triggerbot=%d avg_prediction_us=%llu avg_aim_us=%llu avg_trigger_us=%llu direct_tests=%llu direct_hits=%llu direct_unavailable=%llu penetration_runs=%llu"
                 );
    local_6b8 = &PTR_180700558;
    if (local_658[0] != '\0') {
      local_6b8 = (undefined **)&DAT_1806bcfc0;
    }
    local_6b0 = local_658;
    FUN_1800f6900(0);
  }
}



