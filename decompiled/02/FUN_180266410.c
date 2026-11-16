// FUN_180266410 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180266410 */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_180266410(longlong param_1,longlong param_2,undefined1 param_3)

{
  char *pcVar1;
  longlong lVar2;
  undefined1 *puVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined1 auStack_10a8 [32];
  longlong local_1088;
  undefined1 *local_1080;
  ulonglong local_1078;
  char *local_1068;
  undefined8 local_1060;
  undefined1 local_1058 [16];
  undefined1 *local_1048;
  ulonglong local_1040;
  undefined1 local_1038 [4096];
  ulonglong local_38;
  undefined8 uStack_30;
  
  uStack_30 = 0x18026642c;
  local_38 = DAT_1808d5f00 ^ (ulonglong)auStack_10a8;
  while( true ) {
    if (param_1 == param_2) {
    }
    if (*(char *)(param_1 + 0x3c) == '\0') break;
    param_1 = param_1 + 0x40;
  }
  do {
    lVar2 = param_2 + -0x40;
    if (param_1 == lVar2) {
    }
    pcVar1 = (char *)(param_2 + -4);
    param_2 = lVar2;
  } while (*pcVar1 == '\0');
  uVar5 = lVar2 - param_1 >> 6;
  uVar6 = 0x7fffffffffffffff;
  if ((longlong)uVar5 < 0x7fffffffffffffff) {
    uVar6 = uVar5;
  }
  uVar4 = uVar5;
  if (0x40 < uVar5) {
    if ((uVar6 < 0x400000000000000) && (0 < (longlong)uVar6)) {
      do {
        local_1048 = (undefined1 *)FUN_1805f6194(uVar6 << 6,&DAT_1806898a0);
        if (local_1048 != (undefined1 *)0x0) {
          if (0x40 < uVar6) goto LAB_180266545;
          goto LAB_1802664f7;
        }
        uVar6 = uVar6 >> 1;
      } while (uVar6 != 0);
    }
    local_1048 = (undefined1 *)0x0;
LAB_1802664f7:
    if (DAT_180c7df30 == (undefined8 *)0x0) {
      local_1068 = "tier0.dll:g_pMemAlloc";
      local_1060 = 0x15;
      DAT_180c7df30 = (undefined8 *)FUN_180451750(&local_1068);
    }
    (**(code **)(*(longlong *)*DAT_180c7df30 + 0x18))((longlong *)*DAT_180c7df30,local_1048);
    uVar4 = 0x40;
  }
  uVar6 = uVar4;
  local_1048 = local_1038;
LAB_180266545:
  local_1088 = uVar5 + 1;
  local_1080 = local_1048;
  local_1078 = uVar6;
  local_1040 = uVar6;
  FUN_1802677f0(local_1058,param_1,lVar2,param_3);
  puVar3 = local_1048;
  if (0x40 < local_1040) {
    if (DAT_180c7df30 == (undefined8 *)0x0) {
      local_1068 = "tier0.dll:g_pMemAlloc";
      local_1060 = 0x15;
      DAT_180c7df30 = (undefined8 *)FUN_180451750(&local_1068);
    }
    (**(code **)(*(longlong *)*DAT_180c7df30 + 0x18))((longlong *)*DAT_180c7df30,puVar3);
  }
}



