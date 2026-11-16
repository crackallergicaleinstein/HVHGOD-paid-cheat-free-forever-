// FUN_18017acf0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18017acf0 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18017acf0(undefined1 *param_1,longlong *param_2)

{
  longlong lVar1;
  undefined1 (*pauVar2) [16];
  longlong lVar3;
  undefined1 auStack_58 [32];
  char *local_38;
  undefined8 local_30;
  undefined1 local_28 [16];
  undefined1 local_18 [8];
  ulonglong local_10;
  
  local_10 = DAT_1808d5f00 ^ (ulonglong)auStack_58;
  FUN_1801409d0(param_1 + 8,*param_1);
  *param_1 = 3;
  local_28 = (undefined1  [16])0x0;
  if (DAT_180c7df28 == (undefined8 *)0x0) {
    local_38 = "tier0.dll:g_pMemAlloc";
    local_30 = 0x15;
    DAT_180c7df28 = (undefined8 *)FUN_180451750(&local_38);
  }
  pauVar2 = (undefined1 (*) [16])
            (**(code **)(*(longlong *)*DAT_180c7df28 + 8))((longlong *)*DAT_180c7df28,0x20);
  local_28._8_8_ = pauVar2;
  local_28._0_8_ = local_18;
  lVar1 = *param_2;
  *pauVar2 = (undefined1  [16])0x0;
  *(undefined8 *)pauVar2[1] = 0;
  *(undefined8 *)(pauVar2[1] + 8) = 0;
  lVar3 = -1;
  do {
    lVar3 = lVar3 + 1;
  } while (*(char *)(lVar1 + lVar3) != '\0');
  FUN_18015ba30(pauVar2);
  *(undefined1 (**) [16])(param_1 + 8) = pauVar2;
}



