// FUN_18017cdd0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18017cdd0 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_18017cdd0(undefined8 *param_1)

{
  int iVar1;
  int *piVar2;
  char *local_18;
  undefined8 local_10;
  
  piVar2 = (int *)*param_1;
  if (piVar2 != (int *)0x0) {
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      if (DAT_180c7df30 == (undefined8 *)0x0) {
        local_18 = "tier0.dll:g_pMemAlloc";
        local_10 = 0x15;
        DAT_180c7df30 = (undefined8 *)FUN_180451750(&local_18);
      }
      (**(code **)(*(longlong *)*DAT_180c7df30 + 0x18))((longlong *)*DAT_180c7df30,piVar2);
    }
  }
  return;
}



