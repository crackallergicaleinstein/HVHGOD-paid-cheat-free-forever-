// FUN_1801814c0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801814c0 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined *
FUN_1801814c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  char *local_48;
  undefined8 local_40;
  char *local_38;
  undefined8 local_30;
  
  _DAT_180cc9694 = 0;
  _DAT_180cc96a8 = 0;
  _DAT_180cc96b0 = (undefined1  [16])0x0;
  _DAT_180cc96c0 = 0;
  _DAT_180cc96c8 = 0;
  uVar1 = 0;
  _DAT_180cc9690 = 0;
  DAT_180cc9698 = 0;
  _DAT_180cc96a0 = 0;
  if (DAT_180c7df28 == (undefined8 *)0x0) {
    local_48 = "tier0.dll:g_pMemAlloc";
    local_40 = 0x15;
    DAT_180c7df28 = (undefined8 *)FUN_180451750(&local_48,param_2,param_3,param_4,&DAT_180cc9690);
  }
  DAT_180cc9698 = (**(code **)(*(longlong *)*DAT_180c7df28 + 8))((longlong *)*DAT_180c7df28,0xb0);
  *(longlong *)DAT_180cc9698 = DAT_180cc9698;
  *(longlong *)(DAT_180cc9698 + 8) = DAT_180cc9698;
  _DAT_180cc96a8 = 0;
  _DAT_180cc96b0 = (undefined1  [16])0x0;
  _DAT_180cc96c0 = 7;
  _DAT_180cc96c8 = 8;
  uVar2 = 0x3f800000;
  _DAT_180cc9690 = 0x3f800000;
  FUN_1801406e0(&DAT_180cc96a8,0x10,DAT_180cc9698);
  FUN_18063ab10(&DAT_180cc96e0,0,0xe0);
  _DAT_180cc96d0 = (undefined1  [16])0x0;
  _DAT_180cc96e0 = (undefined1  [16])0x0;
  _DAT_180cc96f0 = 0;
  _DAT_180cc96f8 = 0xffffffff;
  _DAT_180cc96fc = 1;
  local_48 = &DAT_180cc9700;
  DAT_180cc9708 = 0;
  _DAT_180cc9710 = 0;
  _DAT_180cc9700 = uVar1;
  if (DAT_180c7df28 == (undefined8 *)0x0) {
    local_38 = "tier0.dll:g_pMemAlloc";
    local_30 = 0x15;
    DAT_180c7df28 = (undefined8 *)FUN_180451750(&local_38);
  }
  DAT_180cc9708 = (**(code **)(*(longlong *)*DAT_180c7df28 + 8))((longlong *)*DAT_180c7df28,0x48);
  *(longlong *)DAT_180cc9708 = DAT_180cc9708;
  *(longlong *)(DAT_180cc9708 + 8) = DAT_180cc9708;
  _DAT_180cc9718 = 0;
  _DAT_180cc9720 = (undefined1  [16])0x0;
  _DAT_180cc9730 = 7;
  _DAT_180cc9738 = 8;
  _DAT_180cc9700 = uVar2;
  FUN_1801406e0(&DAT_180cc9718,0x10,DAT_180cc9708);
  FUN_1801ac560(&DAT_180cc9740);
  FUN_1801ac560(&DAT_180cc9780);
  _DAT_180cc97d8 = 0;
  _DAT_180cc97e0 = 0;
  uRam0000000180cc97e8 = 0;
  uRam0000000180cc97f0 = 0;
  _DAT_180cc97f8 = 0;
  _DAT_180cc9800 = 0;
  _DAT_180cc97c8 = 0;
  _DAT_180cc97d0 = 0;
  _DAT_180cc9808 = 0xffffffff;
  _DAT_180cc97c0 = 2;
  _DAT_180cc980c = 0;
  DAT_180cc9810 = 0;
  DAT_180cc9818 = 0;
  uRam0000000180cc9820 = 0;
  uRam0000000180cc9828 = 0;
  _DAT_180cc9830 = 0;
  uRam0000000180cc9838 = 0;
  uRam0000000180cc9840 = 0;
  uRam0000000180cc9848 = 0;
  _DAT_180cc9850 = 0;
  uRam0000000180cc9858 = 0;
  uRam0000000180cc9860 = 0;
  uRam0000000180cc9868 = 0;
  _DAT_180cc9870 = 0;
  uRam0000000180cc9878 = 0;
  uRam0000000180cc9880 = 0;
  uRam0000000180cc9888 = 0;
  DAT_180cc9890 = 0;
  return &DAT_180cc9690;
}



