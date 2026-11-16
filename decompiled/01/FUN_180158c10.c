// FUN_180158c10 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180158c10 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

undefined8 * FUN_180158c10(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  char *local_58;
  undefined8 local_50;
  undefined8 *local_48;
  undefined8 *local_40;
  undefined8 *local_38;
  
  puVar3 = (undefined8 *)*param_1;
  if (*(char *)((longlong)param_2 + 0x19) == '\0') {
    local_40 = (undefined8 *)0x0;
    local_48 = param_1;
    if (DAT_180c7df28 == (undefined8 *)0x0) {
      local_58 = "tier0.dll:g_pMemAlloc";
      local_50 = 0x15;
      DAT_180c7df28 = (undefined8 *)FUN_180451750(&local_58);
    }
    puVar1 = (undefined8 *)
             (**(code **)(*(longlong *)*DAT_180c7df28 + 8))((longlong *)*DAT_180c7df28,0x50);
    local_58 = (char *)(puVar1 + 4);
    local_40 = puVar1;
    FUN_18015b360(local_58,param_2 + 4);
    FUN_1800f4a50(puVar1 + 8,param_2 + 8);
    *puVar1 = puVar3;
    puVar1[2] = puVar3;
    *(undefined2 *)(puVar1 + 3) = 0;
    puVar1[1] = param_3;
    *(undefined1 *)(puVar1 + 3) = *(undefined1 *)(param_2 + 3);
    local_48 = param_1;
    local_40 = param_1;
    local_38 = puVar1;
    uVar2 = FUN_180158c10(param_1,*param_2,puVar1);
    *puVar1 = uVar2;
    uVar2 = FUN_180158c10(param_1,param_2[2],puVar1);
    puVar1[2] = uVar2;
    puVar3 = puVar1;
  }
  return puVar3;
}



