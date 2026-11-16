// FUN_1805258b0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805258b0 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

longlong FUN_1805258b0(longlong param_1,uint param_2)

{
  char *local_18;
  undefined8 local_10;
  
  _eh_vector_destructor_iterator_((void *)(param_1 + 8),0x888,2,FUN_180525850);
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



