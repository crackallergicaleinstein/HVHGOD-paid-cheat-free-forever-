// FUN_180177450 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180177450 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

undefined8 * FUN_180177450(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  char *local_18;
  undefined8 local_10;
  
  plVar3 = (longlong *)param_1[0x19];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))();
    }
  }
  *param_1 = Concurrency::details::_RefCounter::vftable;
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



