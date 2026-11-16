// FUN_1800cfcb0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1800cfcb0 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

longlong FUN_1800cfcb0(longlong param_1,uint param_2)

{
  char *local_18;
  undefined8 local_10;
  
  _eh_vector_destructor_iterator_((void *)(param_1 + 0x20),0x20,2,thunk_FUN_18015c010);
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



