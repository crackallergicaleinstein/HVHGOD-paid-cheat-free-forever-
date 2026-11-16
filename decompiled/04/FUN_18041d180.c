// FUN_18041d180 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18041d180 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18041d180(longlong *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  LPCSTR lpModuleName;
  undefined8 uVar4;
  HMODULE pHVar5;
  BOOL BVar6;
  longlong lVar7;
  LPTOP_LEVEL_EXCEPTION_FILTER pPVar8;
  int *piVar9;
  char *pcVar10;
  HMODULE pHVar11;
  CHAR *pCVar12;
  undefined8 uVar13;
  undefined1 auStack_328 [32];
  undefined8 local_308;
  undefined4 local_300;
  CHAR *local_2f8;
  longlong local_2f0;
  undefined8 local_2e8;
  undefined8 local_2e0;
  HMODULE local_2d8 [2];
  CHAR local_2c8 [272];
  undefined1 local_1b8 [384];
  ulonglong local_38;
  
  local_38 = DAT_1808d5f00 ^ (ulonglong)auStack_328;
  if ((param_1 != (longlong *)0x0) && ((uint *)*param_1 != (uint *)0x0)) {
    uVar1 = *(uint *)*param_1;
    if (uVar1 < 0xc0000095) {
      if (((uVar1 != 0xc0000094) && (1 < uVar1 + 0x3ffffffb)) && (uVar1 != 0xc000001d)) {
      }
    }
    else if (((uVar1 != 0xc0000096) && (uVar1 != 0xc00000fd)) && (uVar1 != 0xc0000409)) {
    }
    lVar7 = FUN_18017ea70();
    if (*(int *)(lVar7 + 4) == 0) {
      pPVar8 = SetUnhandledExceptionFilter(FUN_18041d410);
      if (pPVar8 != FUN_18041d410) {
        DAT_180c62ba0 = pPVar8;
      }
      if (((DAT_180c7dce8 == 0) || (*(ulonglong *)(*param_1 + 0x10) < DAT_180c7dce8)) ||
         (DAT_180c7d8c0 <= *(ulonglong *)(*param_1 + 0x10))) {
        piVar9 = (int *)FUN_18017ea70();
        if (*piVar9 != 0) {
          puVar3 = (undefined4 *)*param_1;
          lpModuleName = *(LPCSTR *)(puVar3 + 4);
          uVar2 = *puVar3;
          if ((uint)puVar3[6] < 2) {
            uVar13 = 0;
          }
          else {
            uVar13 = *(undefined8 *)(puVar3 + 10);
          }
          local_2d8[0] = (HMODULE)0x0;
          builtin_memcpy(local_2c8,"unknown",8);
          FUN_18063ab10(local_2c8 + 8,0,0xfc);
          pHVar11 = (HMODULE)0x0;
          if ((lpModuleName != (LPCSTR)0x0) &&
             (BVar6 = GetModuleHandleExA(6,lpModuleName,local_2d8), pHVar5 = local_2d8[0],
             BVar6 != 0)) {
            GetModuleFileNameA(local_2d8[0],local_2c8,0x104);
            pHVar11 = pHVar5;
          }
          lVar7 = FUN_1806069d0(local_2c8,0x5c);
          if (lVar7 == 0) {
            pCVar12 = local_2c8;
          }
          else {
            pCVar12 = (CHAR *)(lVar7 + 1);
          }
          FUN_18063ab10(local_1b8,0,0x180);
          local_2f0 = (longlong)lpModuleName - (longlong)pHVar11;
          if (pHVar11 == (HMODULE)0x0) {
            local_2f0 = 0;
          }
          uVar4 = *(undefined8 *)(*param_1 + 0x10);
          lVar7 = FUN_18017ea70();
          local_308 = *(undefined8 *)(lVar7 + 8);
          local_300 = uVar2;
          local_2f8 = pCVar12;
          local_2e8 = uVar4;
          local_2e0 = uVar13;
          FUN_18015ad60(local_1b8,0x180,0xffffffffffffffff,
                        "FEATURE EXCEPTION [%s] 0x%08lX at %s+0x%llX (0x%p), accessed 0x%p");
          FUN_1800aa120(local_1b8);
        }
      }
      else {
        piVar9 = (int *)FUN_18017ea70();
        if (*piVar9 == 0) {
          pcVar10 = "first-chance fault in HVHGODS DLL";
        }
        else {
          lVar7 = FUN_18017ea70();
          pcVar10 = *(char **)(lVar7 + 8);
        }
        FUN_18041bee0(param_1,pcVar10);
        piVar9 = (int *)FUN_18017ea70();
        if (*piVar9 != 0) {
          FUN_18017ea70();
        }
      }
    }
  }
}



