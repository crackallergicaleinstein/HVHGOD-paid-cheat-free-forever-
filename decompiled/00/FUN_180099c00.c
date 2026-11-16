// FUN_180099c00 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180099c00 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_180099c00(void)

{
  undefined1 (*local_28) [16];
  undefined1 (*local_20) [16];
  char *local_18;
  undefined8 local_10;
  
  if (DAT_180c7df28 == (undefined8 *)0x0) {
    local_18 = "tier0.dll:g_pMemAlloc";
    local_10 = 0x15;
    DAT_180c7df28 = (undefined8 *)FUN_180451750(&local_18);
  }
  local_20 = (undefined1 (*) [16])
             (**(code **)(*(longlong *)*DAT_180c7df28 + 8))((longlong *)*DAT_180c7df28,0xd8);
  if (local_20 == (undefined1 (*) [16])0x0) {
    local_20 = (undefined1 (*) [16])0x0;
  }
  else {
    *local_20 = (undefined1  [16])0x0;
    *(undefined4 *)(*local_20 + 8) = 1;
    *(undefined4 *)(*local_20 + 0xc) = 1;
    *(undefined ***)*local_20 =
         std::_Ref_count_obj2<features::changer::custom_agents::catalog_const_>::vftable;
    FUN_18063ab10(local_20 + 1,0,200);
    FUN_1801ed6e0(local_20 + 1);
  }
  local_28 = local_20 + 1;
  DAT_180bb9380 = local_28;
  DAT_180bb9388 = local_20;
  if (local_20 != (undefined1 (*) [16])0x0) {
    LOCK();
    *(int *)(*local_20 + 8) = *(int *)(*local_20 + 8) + 1;
    UNLOCK();
  }
  FUN_1800efed0(&local_28);
  atexit(FUN_1806626b0);
  return;
}



