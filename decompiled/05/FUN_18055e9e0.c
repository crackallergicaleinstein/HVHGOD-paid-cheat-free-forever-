// FUN_18055e9e0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18055e9e0 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

undefined4 * FUN_18055e9e0(undefined4 *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
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
  lVar2 = (**(code **)(*(longlong *)*DAT_180c7df28 + 8))((longlong *)*DAT_180c7df28,0x30);
  *(longlong *)lVar2 = lVar2;
  *(longlong *)(lVar2 + 8) = lVar2;
  *(longlong *)(param_1 + 2) = lVar2;
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 10) = 0;
  *(undefined8 *)(param_1 + 0xc) = 7;
  *(undefined8 *)(param_1 + 0xe) = 8;
  *param_1 = 0x3f800000;
  FUN_1801406e0(param_1 + 6,0x10,*(undefined8 *)(param_1 + 2));
  lVar1 = param_2[1];
  for (lVar2 = *param_2; lVar2 != lVar1; lVar2 = lVar2 + 0x20) {
    FUN_180570270(param_1,&local_28,lVar2);
  }
  return param_1;
}



