// FUN_1802cc7a0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802cc7a0 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1802cc7a0(undefined8 param_1)

{
  int iVar1;
  longlong lVar2;
  undefined8 extraout_XMM0_Qa;
  undefined1 auStack_678 [32];
  undefined **local_658;
  char *local_650;
  char *local_648;
  undefined8 local_640;
  undefined1 local_638 [16];
  undefined8 local_628 [2];
  char local_618 [1536];
  ulonglong local_18;
  
  local_18 = DAT_1808d5f00 ^ (ulonglong)auStack_678;
  local_628[0] = param_1;
  if ((DAT_180cd3e38 & 1) == 0) {
    DAT_180cd3e38 = DAT_180cd3e38 | 1;
    uRam0000000180cd3e44 = 0;
    DAT_180cd3e58 = 0;
    _DAT_180cd3e60 = ZEXT816(0);
    _DAT_180cd3e70 = 0;
    DAT_180cd3e78 = 0;
    DAT_180cd3e40 = 0;
    DAT_180cd3e48 = 0;
    DAT_180cd3e50 = 0;
    if (DAT_180c7df28 == (undefined8 *)0x0) {
      local_648 = "tier0.dll:g_pMemAlloc";
      local_640 = 0x15;
      DAT_180c7df28 = (undefined8 *)FUN_180451750(&local_648);
    }
    DAT_180cd3e48 = (**(code **)(*(longlong *)*DAT_180c7df28 + 8))((longlong *)*DAT_180c7df28,0x30);
    *(longlong *)DAT_180cd3e48 = DAT_180cd3e48;
    *(longlong *)(DAT_180cd3e48 + 8) = DAT_180cd3e48;
    DAT_180cd3e58 = 0;
    _DAT_180cd3e60 = (undefined1  [16])0x0;
    _DAT_180cd3e70 = 7;
    DAT_180cd3e78 = 8;
    DAT_180cd3e40 = 0x3f800000;
    FUN_1801406e0(&DAT_180cd3e58,0x10,DAT_180cd3e48);
    atexit(FUN_180662d70);
  }
  local_648 = &DAT_1808fd4f0;
  iVar1 = FUN_1805f68d0(&DAT_1808fd4f0);
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(5);
  }
  if (DAT_1808fd53c == 0x7fffffff) {
    DAT_1808fd53c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(6);
  }
  lVar2 = FUN_1802e3690(extraout_XMM0_Qa,local_638,local_628);
  if (*(char *)(lVar2 + 8) != '\0') {
    FUN_18063ab10(local_618,0,0x600);
    local_658 = (undefined **)local_628[0];
    FUN_18015ad60(local_618,0x600,0xffffffffffffffff,"feature=%s action=disabled");
    local_658 = &PTR_180700558;
    if (local_618[0] != '\0') {
      local_658 = (undefined **)&DAT_1806bcfc0;
    }
    local_650 = local_618;
    FUN_1800f6900(2,local_650,"Impacts","PARTICLE_API_UNAVAILABLE");
  }
  FUN_1805f68fc(&DAT_1808fd4f0);
}



