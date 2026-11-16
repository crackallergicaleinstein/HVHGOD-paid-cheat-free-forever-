// FUN_18041d410 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18041d410 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18041d410(longlong *param_1)

{
  LPCSTR lpModuleName;
  HMODULE pHVar1;
  BOOL BVar2;
  longlong lVar3;
  CHAR *pCVar4;
  HMODULE pHVar5;
  undefined8 uVar6;
  undefined1 auStack_318 [32];
  undefined4 local_2f8;
  CHAR *local_2f0;
  longlong local_2e8;
  undefined8 local_2e0;
  undefined8 local_2d8;
  HMODULE local_2c8 [2];
  CHAR local_2b8 [272];
  undefined1 local_1a8 [392];
  ulonglong local_20;
  
  local_20 = DAT_1808d5f00 ^ (ulonglong)auStack_318;
  LOCK();
  DAT_180c64050 = DAT_180c64050 + 1;
  UNLOCK();
  if ((param_1 != (longlong *)0x0) && (*param_1 != 0)) {
    FUN_18041bee0(param_1,"unhandled exception");
    lVar3 = *param_1;
    lpModuleName = *(LPCSTR *)(lVar3 + 0x10);
    if (*(uint *)(lVar3 + 0x18) < 2) {
      uVar6 = 0;
    }
    else {
      uVar6 = *(undefined8 *)(lVar3 + 0x28);
    }
    local_2c8[0] = (HMODULE)0x0;
    builtin_memcpy(local_2b8,"unknown",8);
    FUN_18063ab10(local_2b8 + 8,0,0xfc);
    pHVar5 = (HMODULE)0x0;
    if ((lpModuleName != (LPCSTR)0x0) &&
       (BVar2 = GetModuleHandleExA(6,lpModuleName,local_2c8), pHVar1 = local_2c8[0], BVar2 != 0)) {
      GetModuleFileNameA(local_2c8[0],local_2b8,0x104);
      pHVar5 = pHVar1;
    }
    lVar3 = FUN_1806069d0(local_2b8,0x5c);
    if (lVar3 == 0) {
      pCVar4 = local_2b8;
    }
    else {
      pCVar4 = (CHAR *)(lVar3 + 1);
    }
    FUN_18063ab10(local_1a8,0,0x180);
    local_2e8 = (longlong)lpModuleName - (longlong)pHVar5;
    if (pHVar5 == (HMODULE)0x0) {
      local_2e8 = 0;
    }
    local_2e0 = *(undefined8 *)((undefined4 *)*param_1 + 4);
    local_2f8 = *(undefined4 *)*param_1;
    local_2f0 = pCVar4;
    local_2d8 = uVar6;
    FUN_18015ad60(local_1a8,0x180,0xffffffffffffffff,
                  "UNHANDLED EXCEPTION 0x%08lX at %s+0x%llX (0x%p), accessed 0x%p");
    FUN_1800a9e50(4,local_1a8);
    if ((DAT_180c62ba0 != (code *)0x0) && (DAT_180c62ba0 != FUN_18041d410)) {
      (*DAT_180c62ba0)(param_1);
    }
  }
  LOCK();
  DAT_180c64050 = DAT_180c64050 + -1;
  UNLOCK();
}



