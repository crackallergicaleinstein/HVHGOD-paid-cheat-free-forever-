// FUN_1802b60f0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802b60f0 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

undefined8 * FUN_1802b60f0(undefined8 *param_1,ulonglong param_2)

{
  char *local_18;
  undefined8 local_10;
  
  *param_1 = std::_Ref_count_obj2<features::esp::projectile::_anon_147F1E66::hazard_frame>::vftable;
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



