// FUN_1803c84e0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1803c84e0 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

undefined1 (*) [16] FUN_1803c84e0(undefined1 (*param_1) [16])

{
  undefined1 (*pauVar1) [16];
  char *local_18;
  undefined8 local_10;
  
  if (DAT_180c7df28 == (undefined8 *)0x0) {
    local_10 = 0x15;
    local_18 = "tier0.dll:g_pMemAlloc";
    DAT_180c7df28 = (undefined8 *)FUN_180451750(&local_18);
  }
  pauVar1 = (undefined1 (*) [16])
            (**(code **)(*(longlong *)*DAT_180c7df28 + 8))((longlong *)*DAT_180c7df28,0x168);
  if (pauVar1 == (undefined1 (*) [16])0x0) {
    pauVar1 = (undefined1 (*) [16])0x0;
  }
  else {
    *pauVar1 = (undefined1  [16])0x0;
    *(undefined4 *)(*pauVar1 + 8) = 1;
    *(undefined4 *)(*pauVar1 + 0xc) = 1;
    *(undefined ***)*pauVar1 = std::_Ref_count_obj2<rendering::item_preview::native_style>::vftable;
    FUN_18063ab10(pauVar1 + 1,0,0x158);
    FUN_1803c9e70(pauVar1 + 1);
    *(undefined4 *)(pauVar1[0x15] + 8) = 0;
    *(undefined8 *)pauVar1[0x16] = 0;
  }
  *param_1 = (undefined1  [16])0x0;
  *(undefined1 (**) [16])*param_1 = pauVar1 + 1;
  *(undefined1 (**) [16])(*param_1 + 8) = pauVar1;
  return param_1;
}



