// FUN_1803ce3b0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1803ce3b0 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

undefined4 * FUN_1803ce3b0(undefined4 *param_1)

{
  longlong lVar1;
  char *local_28;
  undefined8 local_20;
  undefined4 *local_18;
  
  *param_1 = 0;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  local_18 = param_1;
  if (DAT_180c7df28 == (undefined8 *)0x0) {
    local_28 = "tier0.dll:g_pMemAlloc";
    local_20 = 0x15;
    DAT_180c7df28 = (undefined8 *)FUN_180451750(&local_28);
  }
  lVar1 = (**(code **)(*(longlong *)*DAT_180c7df28 + 8))((longlong *)*DAT_180c7df28,0x20);
  *(longlong *)lVar1 = lVar1;
  *(longlong *)(lVar1 + 8) = lVar1;
  *(longlong *)(param_1 + 2) = lVar1;
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 10) = 0;
  *(undefined8 *)(param_1 + 0xc) = 7;
  *(undefined8 *)(param_1 + 0xe) = 8;
  *param_1 = 0x3f800000;
  FUN_1801406e0(param_1 + 6,0x10,*(undefined8 *)(param_1 + 2));
  return param_1;
}



