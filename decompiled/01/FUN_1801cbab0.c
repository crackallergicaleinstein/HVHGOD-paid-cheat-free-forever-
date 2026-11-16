// FUN_1801cbab0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801cbab0 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_1801cbab0(longlong *param_1)

{
  char *local_18;
  undefined8 local_10;
  
  param_1 = (longlong *)*param_1;
  if (param_1 != (longlong *)0x0) {
    FUN_18015c010(param_1 + 0x18);
    FUN_18015c010(param_1 + 0x14);
    FUN_18015c010(param_1 + 0x10);
    FUN_18015c010(param_1 + 0xc);
    FUN_1800e4160(param_1 + 4);
    FUN_1801b3620(param_1 + 1);
    if (*param_1 != 0) {
      FUN_1801cc0f0();
    }
    if (DAT_180c7df30 == (undefined8 *)0x0) {
      local_18 = "tier0.dll:g_pMemAlloc";
      local_10 = 0x15;
      DAT_180c7df30 = (undefined8 *)FUN_180451750(&local_18);
    }
    (**(code **)(*(longlong *)*DAT_180c7df30 + 0x18))((longlong *)*DAT_180c7df30,param_1);
  }
  return;
}



