// FUN_180438c70 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180438c70 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_180438c70(undefined8 *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  char *local_18;
  undefined8 local_10;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 != (longlong *)0x0) {
    if (plVar1[0x13] != 0) {
      FUN_180573380();
    }
    if (plVar1[0x12] != 0) {
      FUN_18057d030();
    }
    FUN_180113710(plVar1 + 0x16);
    FUN_180181be0(plVar1 + 5);
    plVar2 = (longlong *)plVar1[1];
    if (plVar2 != (longlong *)0x0) {
      plVar1[1] = 0;
      (**(code **)(*plVar2 + 0x10))();
    }
    plVar2 = (longlong *)*plVar1;
    if (plVar2 != (longlong *)0x0) {
      *plVar1 = 0;
      (**(code **)(*plVar2 + 0x10))();
    }
    if (DAT_180c7df30 == (undefined8 *)0x0) {
      local_18 = "tier0.dll:g_pMemAlloc";
      local_10 = 0x15;
      DAT_180c7df30 = (undefined8 *)FUN_180451750(&local_18);
    }
    (**(code **)(*(longlong *)*DAT_180c7df30 + 0x18))((longlong *)*DAT_180c7df30,plVar1);
  }
  return;
}



