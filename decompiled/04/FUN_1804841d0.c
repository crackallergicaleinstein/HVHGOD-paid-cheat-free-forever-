// FUN_1804841d0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804841d0 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

undefined1 (*) [16] FUN_1804841d0(undefined1 (*param_1) [16])

{
  undefined1 (*pauVar1) [16];
  undefined1 (*local_28) [16];
  undefined8 local_20;
  
  local_28 = param_1;
  if (DAT_180c7df28 == (undefined8 *)0x0) {
    local_20 = 0x15;
    local_28 = (undefined1 (*) [16])0x180827288;
    DAT_180c7df28 = (undefined8 *)FUN_180451750(&local_28);
  }
  pauVar1 = (undefined1 (*) [16])
            (**(code **)(*(longlong *)*DAT_180c7df28 + 8))((longlong *)*DAT_180c7df28,0xd3f0);
  if (pauVar1 == (undefined1 (*) [16])0x0) {
    *(char *)((longlong)param_1 + 0) = '\0';
    *(char *)((longlong)param_1 + 1) = '\0';
    *(char *)((longlong)param_1 + 2) = '\0';
    *(char *)((longlong)param_1 + 3) = '\0';
    *(char *)((longlong)param_1 + 4) = '\0';
    *(char *)((longlong)param_1 + 5) = '\0';
    *(char *)((longlong)param_1 + 6) = '\0';
    *(char *)((longlong)param_1 + 7) = '\0';
    return param_1;
  }
  local_28 = pauVar1;
  FUN_18063ab10(pauVar1,0,0xd3f0);
  *pauVar1 = (undefined1  [16])0x0;
  *(undefined8 *)pauVar1[1] = 0;
  *(undefined8 *)(pauVar1[1] + 8) = 0xf;
  (*pauVar1)[0] = 0;
  *(undefined8 *)pauVar1[2] = 0;
  FUN_180484330(pauVar1[2] + 8);
  FUN_180484330(pauVar1 + 0x6a0);
  *(undefined8 *)(pauVar1[0xd3d] + 8) = 0;
  *(undefined8 *)pauVar1[0xd3e] = 0;
  *(undefined8 *)(pauVar1[0xd3e] + 8) = 0;
  *(undefined1 (**) [16])*param_1 = pauVar1;
  return param_1;
}



