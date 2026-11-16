// FUN_180111d10 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180111d10 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

undefined8 * FUN_180111d10(undefined8 *param_1,char param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  char *local_68;
  undefined8 local_60;
  undefined1 local_48 [64];
  
  switch(param_2) {
  case '\0':
  case '\x05':
  case '\x06':
  case '\a':
    *param_1 = 0;
    return param_1;
  case '\x01':
    uVar1 = FUN_18010f2c0();
    *param_1 = uVar1;
    break;
  case '\x02':
    uVar1 = FUN_18010f4c0();
    *param_1 = uVar1;
    return param_1;
  case '\x03':
    uVar1 = FUN_18013f1a0();
    *param_1 = uVar1;
    return param_1;
  case '\x04':
    *(undefined1 *)param_1 = 0;
    return param_1;
  case '\b':
    if (DAT_180c7df28 == (undefined8 *)0x0) {
      local_68 = "tier0.dll:g_pMemAlloc";
      local_60 = 0x15;
      DAT_180c7df28 = (undefined8 *)FUN_180451750(&local_68);
    }
    puVar2 = (undefined8 *)
             (**(code **)(*(longlong *)*DAT_180c7df28 + 8))((longlong *)*DAT_180c7df28,0x28);
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[2] = 0;
    puVar2[3] = 0;
    *(undefined1 *)(puVar2 + 4) = 0;
    *param_1 = puVar2;
    return param_1;
  default:
    *param_1 = 0;
    if (param_2 == '\0') {
      FUN_18015bae0(&local_68,"961c151d2e87f2686a955a9be24d316f1362bf21 3.12.0");
      FUN_18013f260(local_48);
                    /* WARNING: Subroutine does not return */
      FUN_180606630(local_48,&DAT_1808d0ea0);
    }
  }
  return param_1;
}



