// FUN_1801d44d0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801d44d0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_1801d44d0(undefined8 param_1,undefined8 param_2,ulonglong param_3,undefined1 param_4,
                  undefined1 param_5)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined1 auStack_1028 [32];
  ulonglong local_1008;
  undefined1 local_1000;
  undefined1 local_ff8;
  char *local_fe8;
  undefined8 local_fe0;
  undefined1 *local_fd8;
  ulonglong local_fd0;
  undefined1 local_fc8 [3968];
  ulonglong local_48;
  
  local_48 = DAT_1808d5f00 ^ (ulonglong)auStack_1028;
  if ((longlong)param_3 < 0x21) {
    FUN_1801d4b60(param_1,param_2,param_4);
  }
  else {
    uVar2 = param_3 - (param_3 >> 1);
    uVar3 = 0x7fffffffffffffff;
    if ((longlong)uVar2 < 0x7fffffffffffffff) {
      uVar3 = uVar2;
    }
    if (0xb < uVar2) {
      if ((uVar3 < 0xb60b60b60b60b7) && (0 < (longlong)uVar3)) {
        do {
          local_fd8 = (undefined1 *)FUN_1805f6194(uVar3 * 0x168,&DAT_1806898a0);
          if (local_fd8 != (undefined1 *)0x0) {
            if (0xb < uVar3) goto LAB_1801d45d4;
            goto LAB_1801d4586;
          }
          uVar3 = uVar3 >> 1;
        } while (uVar3 != 0);
      }
      local_fd8 = (undefined1 *)0x0;
LAB_1801d4586:
      if (DAT_180c7df30 == (undefined8 *)0x0) {
        local_fe8 = "tier0.dll:g_pMemAlloc";
        local_fe0 = 0x15;
        DAT_180c7df30 = (undefined8 *)FUN_180451750(&local_fe8);
      }
      (**(code **)(*(longlong *)*DAT_180c7df30 + 0x18))((longlong *)*DAT_180c7df30,local_fd8);
      uVar2 = 0xb;
    }
    uVar3 = uVar2;
    local_fd8 = local_fc8;
LAB_1801d45d4:
    local_ff8 = param_5;
    local_1008 = uVar3;
    local_1000 = param_4;
    local_fd0 = uVar3;
    FUN_1801d4ce0(param_1,param_2,param_3,local_fd8);
    puVar1 = local_fd8;
    if (0xb < local_fd0) {
      if (DAT_180c7df30 == (undefined8 *)0x0) {
        local_fe8 = "tier0.dll:g_pMemAlloc";
        local_fe0 = 0x15;
        DAT_180c7df30 = (undefined8 *)FUN_180451750(&local_fe8);
      }
      (**(code **)(*(longlong *)*DAT_180c7df30 + 0x18))((longlong *)*DAT_180c7df30,puVar1);
    }
  }
}



