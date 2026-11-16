// FUN_180158fe0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180158fe0 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

undefined8 * FUN_180158fe0(undefined8 *param_1,ulonglong param_2)

{
  undefined8 uVar1;
  char *local_18;
  undefined8 local_10;
  
  *param_1 = std::ctype<char>::vftable;
  if (*(int *)(param_1 + 4) < 1) {
    if (*(int *)(param_1 + 4) < 0) {
      uVar1 = param_1[3];
      if (DAT_180c7df30 == (undefined8 *)0x0) {
        local_18 = "tier0.dll:g_pMemAlloc";
        local_10 = 0x15;
        DAT_180c7df30 = (undefined8 *)FUN_180451750(&local_18);
      }
      (**(code **)(*(longlong *)*DAT_180c7df30 + 0x18))((longlong *)*DAT_180c7df30,uVar1);
    }
  }
  else {
    thunk_FUN_180621380(param_1[3]);
  }
  thunk_FUN_180621380(param_1[5]);
  *param_1 = std::_Facet_base::vftable;
  if ((param_2 & 1) != 0) {
    if (DAT_180c7df30 == (undefined8 *)0x0) {
      local_18 = "tier0.dll:g_pMemAlloc";
      local_10 = 0x15;
      DAT_180c7df30 = (undefined8 *)FUN_180451750(&local_18);
    }
    (**(code **)(*(longlong *)*DAT_180c7df30 + 0x18))((longlong *)*DAT_180c7df30,param_1);
  }
  return param_1;
}



