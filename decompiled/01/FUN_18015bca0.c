// FUN_18015bca0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18015bca0 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

ulonglong FUN_18015bca0(ulonglong param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  char *local_18;
  undefined8 local_10;
  
  if (param_1 == 0) {
    return 0;
  }
  if (param_1 < 0x1000) {
    if (DAT_180c7df28 == (undefined8 *)0x0) {
      local_10 = 0x15;
      local_18 = "tier0.dll:g_pMemAlloc";
      DAT_180c7df28 = (undefined8 *)FUN_180451750(&local_18);
    }
                    /* WARNING: Could not recover jumptable at 0x00018063a8e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(*(longlong *)*DAT_180c7df28 + 8))((longlong *)*DAT_180c7df28,param_1);
    return uVar2;
  }
  if (param_1 + 0x27 <= param_1) {
                    /* WARNING: Subroutine does not return */
    FUN_18015bc80();
  }
  if (DAT_180c7df28 == (undefined8 *)0x0) {
    local_10 = 0x15;
    local_18 = "tier0.dll:g_pMemAlloc";
    DAT_180c7df28 = (undefined8 *)FUN_180451750(&local_18);
  }
  lVar1 = (**(code **)(*(longlong *)*DAT_180c7df28 + 8))();
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  uVar2 = lVar1 + 0x27U & 0xffffffffffffffe0;
  *(longlong *)(uVar2 - 8) = lVar1;
  return uVar2;
}



