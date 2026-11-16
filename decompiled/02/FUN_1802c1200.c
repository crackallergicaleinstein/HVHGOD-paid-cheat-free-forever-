// FUN_1802c1200 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802c1200 */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_1802c1200(longlong param_1,longlong param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined1 *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined1 auStack_1068 [32];
  ulonglong local_1048;
  undefined8 local_1040;
  char *local_1038;
  undefined8 local_1030;
  undefined1 *local_1028;
  ulonglong local_1020;
  undefined1 local_1018 [4080];
  ulonglong local_28;
  undefined8 uStack_20;
  
  uStack_20 = 0x1802c1224;
  local_28 = DAT_1808d5f00 ^ (ulonglong)auStack_1068;
  lVar1 = (param_2 - param_1) / 0x28;
  if (lVar1 < 0x21) {
    FUN_1802c1520(param_1,param_2);
  }
  else {
    uVar3 = lVar1 - lVar1 / 2;
    uVar4 = 0x7fffffffffffffff;
    if ((longlong)uVar3 < 0x7fffffffffffffff) {
      uVar4 = uVar3;
    }
    if (0x66 < uVar3) {
      if ((uVar4 < 0x666666666666667) && (0 < (longlong)uVar4)) {
        do {
          local_1028 = (undefined1 *)FUN_1805f6194(uVar4 * 0x28,&DAT_1806898a0);
          if (local_1028 != (undefined1 *)0x0) {
            if (0x66 < uVar4) goto LAB_1802c1346;
            goto LAB_1802c12f7;
          }
          uVar4 = uVar4 >> 1;
        } while (uVar4 != 0);
      }
      local_1028 = (undefined1 *)0x0;
LAB_1802c12f7:
      if (DAT_180c7df30 == (undefined8 *)0x0) {
        local_1038 = "tier0.dll:g_pMemAlloc";
        local_1030 = 0x15;
        DAT_180c7df30 = (undefined8 *)FUN_180451750(&local_1038);
      }
      (**(code **)(*(longlong *)*DAT_180c7df30 + 0x18))((longlong *)*DAT_180c7df30,local_1028);
      uVar3 = 0x66;
    }
    uVar4 = uVar3;
    local_1028 = local_1018;
LAB_1802c1346:
    local_1048 = uVar4;
    local_1040 = param_3;
    local_1020 = uVar4;
    FUN_1802c1730(param_1,param_2,lVar1,local_1028);
    puVar2 = local_1028;
    if (0x66 < local_1020) {
      if (DAT_180c7df30 == (undefined8 *)0x0) {
        local_1038 = "tier0.dll:g_pMemAlloc";
        local_1030 = 0x15;
        DAT_180c7df30 = (undefined8 *)FUN_180451750(&local_1038);
      }
      (**(code **)(*(longlong *)*DAT_180c7df30 + 0x18))((longlong *)*DAT_180c7df30,puVar2);
    }
  }
}



