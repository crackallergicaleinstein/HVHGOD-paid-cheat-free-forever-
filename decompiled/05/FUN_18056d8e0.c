// FUN_18056d8e0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18056d8e0 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_18056d8e0(undefined8 param_1,longlong param_2)

{
  char *local_18;
  undefined8 local_10;
  
  if (param_2 != 0) {
    FUN_18015c010(param_2 + 0x6c40);
    FUN_18015c010(param_2 + 0x1f0);
    FUN_18015c010(param_2 + 0x1d0);
    FUN_18015c010(param_2 + 0x1a8);
    FUN_18015c010(param_2 + 0x88);
    FUN_180159650(param_2 + 0x58);
    FUN_180492ae0(param_2);
    if (DAT_180c7df30 == (undefined8 *)0x0) {
      local_18 = "tier0.dll:g_pMemAlloc";
      local_10 = 0x15;
      DAT_180c7df30 = (undefined8 *)FUN_180451750(&local_18);
    }
    (**(code **)(*(longlong *)*DAT_180c7df30 + 0x18))((longlong *)*DAT_180c7df30,param_2);
  }
  return;
}



