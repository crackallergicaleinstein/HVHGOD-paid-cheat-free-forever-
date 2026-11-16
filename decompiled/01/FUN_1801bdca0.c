// FUN_1801bdca0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801bdca0 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

undefined8 * FUN_1801bdca0(undefined8 *param_1,ulonglong param_2)

{
  char *local_18;
  undefined8 local_10;
  
  FUN_18015c010(param_1 + 0xd);
  FUN_18015b930(param_1 + 9);
  FUN_18015b930(param_1 + 5);
  *param_1 = std::exception::vftable;
  FUN_180606758(param_1 + 1);
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



