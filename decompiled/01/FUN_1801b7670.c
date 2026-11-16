// FUN_1801b7670 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801b7670 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_1801b7670(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  char *local_18;
  undefined8 local_10;
  
  puVar1 = DAT_180c7df28;
  *(undefined8 *)(param_1 + 8) = 0;
  if (puVar1 == (undefined8 *)0x0) {
    local_10 = 0x15;
    local_18 = "tier0.dll:g_pMemAlloc";
    puVar1 = (undefined8 *)FUN_180451750(&local_18);
    DAT_180c7df28 = puVar1;
  }
  uVar2 = (**(code **)(*(longlong *)*puVar1 + 8))((longlong *)*puVar1,0x28);
  *(undefined8 *)(param_1 + 8) = uVar2;
  return;
}



