// FUN_180163800 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180163800 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_180163800(longlong *param_1)

{
  longlong *plVar1;
  char *local_18;
  undefined8 local_10;
  
  param_1 = (longlong *)*param_1;
  if (param_1 != (longlong *)0x0) {
    plVar1 = (longlong *)param_1[7];
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != param_1);
      param_1[7] = 0;
    }
    if (DAT_180c7df30 == (undefined8 *)0x0) {
      local_18 = "tier0.dll:g_pMemAlloc";
      local_10 = 0x15;
      DAT_180c7df30 = (undefined8 *)FUN_180451750(&local_18);
    }
    (**(code **)(*(longlong *)*DAT_180c7df30 + 0x18))((longlong *)*DAT_180c7df30,param_1);
  }
  return;
}



