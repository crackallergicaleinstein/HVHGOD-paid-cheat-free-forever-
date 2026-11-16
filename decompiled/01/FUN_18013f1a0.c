// FUN_18013f1a0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18013f1a0 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18013f1a0(void)

{
  undefined1 auStack_58 [32];
  char *local_38;
  undefined8 local_30;
  undefined1 local_28 [16];
  undefined1 local_18 [8];
  ulonglong local_10;
  
  local_10 = DAT_1808d5f00 ^ (ulonglong)auStack_58;
  local_28 = (undefined1  [16])0x0;
  if (DAT_180c7df28 == (undefined8 *)0x0) {
    local_38 = "tier0.dll:g_pMemAlloc";
    local_30 = 0x15;
    DAT_180c7df28 = (undefined8 *)FUN_180451750(&local_38);
  }
  local_28._8_8_ = (**(code **)(*(longlong *)*DAT_180c7df28 + 8))((longlong *)*DAT_180c7df28,0x20);
  local_28._0_8_ = local_18;
  *(undefined1 (*) [16])local_28._8_8_ = (undefined1  [16])0x0;
  *(undefined8 *)*(undefined1 (*) [16])(local_28._8_8_ + 0x10) = 0;
  *(undefined8 *)(*(undefined1 (*) [16])(local_28._8_8_ + 0x10) + 8) = 0;
  FUN_18015ba30(local_28._8_8_,&PTR_180700558,0);
}



