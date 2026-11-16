// FUN_1801bb550 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801bb550 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_1801bb550(longlong *param_1)

{
  longlong lVar1;
  char *local_18;
  undefined8 local_10;
  
  if (DAT_180c7df28 == (undefined8 *)0x0) {
    local_10 = 0x15;
    local_18 = "tier0.dll:g_pMemAlloc";
    DAT_180c7df28 = (undefined8 *)FUN_180451750(&local_18);
  }
  lVar1 = (**(code **)(*(longlong *)*DAT_180c7df28 + 8))((longlong *)*DAT_180c7df28,0x20);
  *(longlong *)lVar1 = lVar1;
  *(longlong *)(lVar1 + 8) = lVar1;
  *param_1 = lVar1;
  return;
}



