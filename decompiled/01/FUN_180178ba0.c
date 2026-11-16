// FUN_180178ba0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180178ba0 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

undefined8 FUN_180178ba0(undefined8 *param_1)

{
  undefined8 uVar1;
  int *local_res8;
  int *local_res10 [3];
  char *local_18;
  undefined8 local_10;
  
  local_res8 = (int *)*param_1;
  *param_1 = 0;
  uVar1 = param_1[1];
  if (local_res8 != (int *)0x0) {
    LOCK();
    *local_res8 = *local_res8 + 1;
    UNLOCK();
  }
  local_res10[0] = local_res8;
  FUN_180171970(uVar1,&local_res8);
  FUN_18017cdd0(local_res10);
  FUN_1805fa938();
  FUN_18017cdd0(param_1);
  if (DAT_180c7df30 == (undefined8 *)0x0) {
    local_18 = "tier0.dll:g_pMemAlloc";
    local_10 = 0x15;
    DAT_180c7df30 = (undefined8 *)FUN_180451750(&local_18);
  }
  (**(code **)(*(longlong *)*DAT_180c7df30 + 0x18))((longlong *)*DAT_180c7df30,param_1);
  return 0;
}



