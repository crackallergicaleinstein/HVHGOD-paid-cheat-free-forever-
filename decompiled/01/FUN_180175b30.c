// FUN_180175b30 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180175b30 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

undefined1 (*) [16] FUN_180175b30(undefined1 (*param_1) [16],undefined8 *param_2)

{
  int iVar1;
  longlong lVar2;
  int *piVar3;
  char *local_38;
  undefined8 local_30;
  int *local_28;
  undefined1 (*local_20) [16];
  
  *param_1 = (undefined1  [16])0x0;
  local_20 = param_1;
  FUN_18017cbd0(param_1 + 1);
  piVar3 = *(int **)param_1[1];
  if (piVar3 != (int *)0x0) {
    LOCK();
    *piVar3 = *piVar3 + 1;
    UNLOCK();
  }
  local_28 = piVar3;
  if (DAT_180c7df28 == (undefined8 *)0x0) {
    local_38 = "tier0.dll:g_pMemAlloc";
    local_30 = 0x15;
    DAT_180c7df28 = (undefined8 *)FUN_180451750(&local_38);
  }
  local_38 = (char *)(**(code **)(*(longlong *)*DAT_180c7df28 + 8))((longlong *)*DAT_180c7df28,0x10)
  ;
  if (local_38 == (char *)0x0) {
    local_38 = (char *)0x0;
  }
  else {
    local_28 = (int *)0x0;
    *(int **)local_38 = piVar3;
    *(undefined8 *)(local_38 + 8) = *param_2;
    piVar3 = (int *)0x0;
  }
  lVar2 = FUN_18060b000(0,0,FUN_180178ba0,local_38,0,*param_1 + 8);
  *(longlong *)*param_1 = lVar2;
  if (lVar2 == 0) {
    *(undefined4 *)(*param_1 + 8) = 0;
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(6);
  }
  if (piVar3 != (int *)0x0) {
    LOCK();
    iVar1 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      if (DAT_180c7df30 == (undefined8 *)0x0) {
        local_38 = "tier0.dll:g_pMemAlloc";
        local_30 = 0x15;
        DAT_180c7df30 = (undefined8 *)FUN_180451750(&local_38);
      }
      (**(code **)(*(longlong *)*DAT_180c7df30 + 0x18))((longlong *)*DAT_180c7df30,piVar3);
    }
  }
  return param_1;
}



