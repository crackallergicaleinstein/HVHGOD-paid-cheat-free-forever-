// FUN_180182940 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180182940 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_180182940(void)

{
  undefined8 in_R9;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined *puVar3;
  char *local_48;
  undefined8 local_40;
  undefined *local_38;
  
  puVar3 = &DAT_180cca8e0;
  _DAT_180cca8e0 = 0;
  DAT_180cca8e8 = 0;
  local_38 = &DAT_180cca8f0;
  uVar1 = 0;
  _DAT_180cca8f0 = 0;
  DAT_180cca8f8 = 0;
  _DAT_180cca900 = 0;
  if (DAT_180c7df28 == (undefined8 *)0x0) {
    local_48 = "tier0.dll:g_pMemAlloc";
    local_40 = 0x15;
    DAT_180c7df28 = (undefined8 *)FUN_180451750(&local_48);
  }
  DAT_180cca8f8 = (**(code **)(*(longlong *)*DAT_180c7df28 + 8))((longlong *)*DAT_180c7df28,0x108);
  *(longlong *)DAT_180cca8f8 = DAT_180cca8f8;
  *(longlong *)(DAT_180cca8f8 + 8) = DAT_180cca8f8;
  DAT_180cca908 = 0;
  _DAT_180cca910 = (undefined1  [16])0x0;
  DAT_180cca920 = 7;
  _DAT_180cca928 = 8;
  uVar2 = 0x3f800000;
  _DAT_180cca8f0 = 0x3f800000;
  FUN_1801406e0(&DAT_180cca908,0x10,DAT_180cca8f8,in_R9,puVar3);
  local_38 = &DAT_180cca930;
  DAT_180cca938 = 0;
  _DAT_180cca940 = 0;
  _DAT_180cca930 = uVar1;
  if (DAT_180c7df28 == (undefined8 *)0x0) {
    local_48 = "tier0.dll:g_pMemAlloc";
    local_40 = 0x15;
    DAT_180c7df28 = (undefined8 *)FUN_180451750(&local_48);
  }
  DAT_180cca938 = (**(code **)(*(longlong *)*DAT_180c7df28 + 8))((longlong *)*DAT_180c7df28,400);
  *(longlong *)DAT_180cca938 = DAT_180cca938;
  *(longlong *)(DAT_180cca938 + 8) = DAT_180cca938;
  DAT_180cca948 = 0;
  _DAT_180cca950 = (undefined1  [16])0x0;
  DAT_180cca960 = 7;
  _DAT_180cca968 = 8;
  _DAT_180cca930 = uVar2;
  FUN_1801406e0(&DAT_180cca948,0x10,DAT_180cca938);
  FUN_1801abd10(&DAT_180cca970);
  FUN_1801abd10(&DAT_180cca9b0);
  DAT_180cca9f0 = 0;
  _DAT_180cca9f8 = 0;
  DAT_180ccaa00 = 0;
  DAT_180ccaa08 = 0;
  return &DAT_180cca8e0;
}



