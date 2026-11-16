// FUN_180492c20 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180492c20 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

longlong * FUN_180492c20(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  char *local_18;
  undefined8 local_10;
  
  lVar1 = *param_2;
  *param_2 = 0;
  lVar2 = *param_1;
  *param_1 = lVar1;
  if (lVar2 != 0) {
    FUN_1804853b0(lVar2 + 0xd3d8);
    FUN_18015c010(lVar2);
    if (DAT_180c7df30 == (undefined8 *)0x0) {
      local_18 = "tier0.dll:g_pMemAlloc";
      local_10 = 0x15;
      DAT_180c7df30 = (undefined8 *)FUN_180451750(&local_18);
    }
    (**(code **)(*(longlong *)*DAT_180c7df30 + 0x18))((longlong *)*DAT_180c7df30,lVar2);
  }
  return param_1;
}



