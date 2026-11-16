// FUN_18042e220 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18042e220 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18042e220(float param_1,float param_2)

{
  int iVar1;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined1 *local_60;
  undefined1 local_48 [16];
  ulonglong local_38;
  
  local_38 = DAT_1808d5f00 ^ (ulonglong)auStack_88;
  local_60 = local_48;
  local_48 = (undefined1  [16])0x0;
  local_68 = 0;
  iVar1 = (**(code **)(*DAT_180bbab78 + 0x70))(DAT_180bbab78,DAT_180bbaf58,0,4);
  if (-1 < iVar1) {
    *(float *)local_48._0_8_ = 1.0 / param_1;
    *(float *)(local_48._0_8_ + 4) = 1.0 / param_2;
    ((float *)(local_48._0_8_ + 8))[0] = 0.0;
    ((float *)(local_48._0_8_ + 8))[1] = 0.0;
    (**(code **)(*DAT_180bbab78 + 0x78))(DAT_180bbab78,DAT_180bbaf58,0);
  }
}



