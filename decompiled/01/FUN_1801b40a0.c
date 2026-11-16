// FUN_1801b40a0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801b40a0 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

undefined8 * FUN_1801b40a0(undefined8 *param_1,ulonglong param_2)

{
  char *local_18;
  undefined8 local_10;
  
  *param_1 = std::
             _Ref_count_obj2<std::unordered_map<unsigned_int,hvhgod::sync::_anon_3E63CB27::peer_ink,std::hash<unsigned_int>,std::equal_to<unsigned_int>,std::allocator<std::pair<unsigned_int_const_,hvhgod::sync::_anon_3E63CB27::peer_ink>_>_>_>
             ::vftable;
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



