// FUN_1801f5bd0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801f5bd0 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_1801f5bd0(longlong *param_1)

{
  longlong lVar1;
  char *local_18;
  undefined8 local_10;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    FUN_18015b930(lVar1 + 8);
    FUN_18017cdd0(lVar1);
    if (DAT_180c7df30 == (undefined8 *)0x0) {
      local_18 = "tier0.dll:g_pMemAlloc";
      local_10 = 0x15;
      DAT_180c7df30 = (undefined8 *)FUN_180451750(&local_18);
    }
    (**(code **)(*(longlong *)*DAT_180c7df30 + 0x18))((longlong *)*DAT_180c7df30,lVar1);
  }
  return;
}



