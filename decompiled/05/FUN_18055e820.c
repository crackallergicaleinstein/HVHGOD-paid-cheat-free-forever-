// FUN_18055e820 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18055e820 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 *
FUN_18055e820(undefined8 param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  char *local_18;
  undefined8 local_10;
  
  puVar4 = &DAT_180bbe7f0;
  DAT_180bbe7f0 = 0;
  DAT_180bbe7f8 = 0;
  DAT_180bbe800 = 0;
  if (DAT_180c7df28 == (undefined8 *)0x0) {
    local_18 = "tier0.dll:g_pMemAlloc";
    local_10 = 0x15;
    DAT_180c7df28 = (undefined8 *)FUN_180451750(&local_18);
  }
  DAT_180bbe7f8 = (**(code **)(*(longlong *)*DAT_180c7df28 + 8))((longlong *)*DAT_180c7df28,0x50);
  *(longlong *)DAT_180bbe7f8 = DAT_180bbe7f8;
  *(longlong *)(DAT_180bbe7f8 + 8) = DAT_180bbe7f8;
  DAT_180bbe808 = 0;
  _DAT_180bbe810 = (undefined1  [16])0x0;
  DAT_180bbe820 = 7;
  DAT_180bbe828 = 8;
  DAT_180bbe7f0 = 0x3f800000;
  uVar3 = FUN_1801b77b0(&DAT_180bbe808,0x10,DAT_180bbe7f8,param_4,puVar4);
  lVar1 = param_2[1];
  for (lVar2 = *param_2; lVar2 != lVar1; lVar2 = lVar2 + 0x40) {
    uVar3 = FUN_18056ffb0(uVar3,&local_18,lVar2);
  }
  return &DAT_180bbe7f0;
}



