// FUN_18017b680 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18017b680 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_18017b680(longlong param_1,char param_2)

{
  char *local_18;
  undefined8 local_10;
  
  FUN_18015b930(param_1 + 0x28);
  FUN_18015b930(param_1 + 8);
  if (param_2 != '\0') {
    if (DAT_180c7df30 == (undefined8 *)0x0) {
      local_18 = "tier0.dll:g_pMemAlloc";
      local_10 = 0x15;
      DAT_180c7df30 = (undefined8 *)FUN_180451750(&local_18);
    }
    (**(code **)(*(longlong *)*DAT_180c7df30 + 0x18))((longlong *)*DAT_180c7df30,param_1);
  }
  return;
}



