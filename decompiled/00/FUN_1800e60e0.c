// FUN_1800e60e0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1800e60e0 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1800e60e0(undefined1 (*param_1) [16],longlong param_2)

{
  undefined1 (*pauVar1) [16];
  longlong lVar2;
  undefined1 auStack_78 [32];
  undefined1 (*local_58) [16];
  char *local_48;
  undefined8 local_40;
  undefined1 local_38 [16];
  undefined1 local_28 [8];
  ulonglong local_20;
  
  local_20 = DAT_1808d5f00 ^ (ulonglong)auStack_78;
  *param_1 = (undefined1  [16])0x0;
  (*param_1)[0] = 0;
  *(undefined8 *)(*param_1 + 8) = 0;
  local_58 = param_1;
  FUN_1801409d0(*param_1 + 8,(*param_1)[0]);
  (*param_1)[0] = 3;
  local_38 = (undefined1  [16])0x0;
  if (DAT_180c7df28 == (undefined8 *)0x0) {
    local_48 = "tier0.dll:g_pMemAlloc";
    local_40 = 0x15;
    DAT_180c7df28 = (undefined8 *)FUN_180451750(&local_48);
  }
  pauVar1 = (undefined1 (*) [16])
            (**(code **)(*(longlong *)*DAT_180c7df28 + 8))((longlong *)*DAT_180c7df28,0x20);
  local_38._8_8_ = pauVar1;
  local_38._0_8_ = local_28;
  *pauVar1 = (undefined1  [16])0x0;
  *(undefined8 *)pauVar1[1] = 0;
  *(undefined8 *)(pauVar1[1] + 8) = 0;
  lVar2 = -1;
  do {
    lVar2 = lVar2 + 1;
  } while (*(char *)(param_2 + lVar2) != '\0');
  FUN_18015ba30(pauVar1,param_2);
  *(undefined1 (**) [16])(*param_1 + 8) = pauVar1;
  *(undefined8 *)param_1[1] = 0;
}



