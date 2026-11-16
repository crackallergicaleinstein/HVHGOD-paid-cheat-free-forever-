// FUN_1802fbb20 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802fbb20 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1802fbb20(longlong *param_1,undefined4 param_2)

{
  longlong lVar1;
  ULONGLONG UVar2;
  undefined1 auStack_58 [32];
  undefined4 *local_38;
  undefined8 local_30;
  undefined4 local_28 [2];
  longlong local_20;
  ulonglong local_18;
  
  lVar1 = DAT_180c64058;
  local_18 = DAT_1808d5f00 ^ (ulonglong)auStack_58;
  if (param_1[1] != DAT_180c64058) {
    *param_1 = 0;
    param_1[2] = 0;
    param_1[1] = lVar1;
  }
  if (((lVar1 != 0) && (*param_1 == 0)) &&
     (UVar2 = GetTickCount64(), (ulonglong)param_1[2] <= UVar2)) {
    param_1[2] = UVar2 + 1000;
    local_38 = local_28;
    local_20 = 0;
    local_30 = 1;
    local_28[0] = param_2;
    FUN_18044c9c0(lVar1,&local_38);
    *param_1 = local_20;
  }
}



