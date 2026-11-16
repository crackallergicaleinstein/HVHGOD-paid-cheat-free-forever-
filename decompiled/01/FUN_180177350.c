// FUN_180177350 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180177350 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

undefined8 * FUN_180177350(undefined8 *param_1,uint param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  char *local_18;
  undefined8 local_10;
  
  *param_1 = Concurrency::details::_Task_impl<unsigned_char>::vftable;
  if (param_1[0x10] != 0) {
    FUN_180163350(param_1[0xf]);
    plVar1 = (longlong *)param_1[0x10];
    LOCK();
    plVar2 = plVar1 + 1;
    lVar3 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)(*plVar1 + 8))();
    }
    param_1[0x10] = 0;
  }
  plVar2 = (longlong *)param_1[0x36];
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x20))(plVar2,plVar2 != param_1 + 0x2f);
    param_1[0x36] = 0;
  }
  FUN_180163bb0(param_1);
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



