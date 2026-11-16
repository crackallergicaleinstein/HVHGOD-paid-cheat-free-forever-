// FUN_18016df60 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18016df60 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18016df60(longlong param_1,undefined8 *param_2,char param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 auStack_858 [32];
  undefined8 *local_838;
  undefined1 local_828 [2048];
  ulonglong local_28;
  
  local_28 = DAT_1808d5f00 ^ (ulonglong)auStack_858;
  if ((undefined8 *)(param_1 + 0x480) != param_2) {
    puVar2 = param_2;
    if (0xf < (ulonglong)param_2[3]) {
      puVar2 = (undefined8 *)*param_2;
    }
    FUN_180113930((undefined8 *)(param_1 + 0x480),puVar2,param_2[2]);
  }
  *(char *)(param_1 + 0x4a0) = param_3;
  if ((undefined8 *)(param_1 + 0x460) != param_2) {
    puVar2 = param_2;
    if (0xf < (ulonglong)param_2[3]) {
      puVar2 = (undefined8 *)*param_2;
    }
    FUN_180113930((undefined8 *)(param_1 + 0x460),puVar2,param_2[2]);
  }
  if (param_3 == '\0') {
    if (0xf < (ulonglong)param_2[3]) {
      param_2 = (undefined8 *)*param_2;
    }
    FUN_18063ab10(local_828,0,0x800);
    local_838 = param_2;
    FUN_18015ad60(local_828,0x800,0xffffffffffffffff,"ConfigManager: %s");
    uVar1 = 3;
  }
  else {
    if (0xf < (ulonglong)param_2[3]) {
      param_2 = (undefined8 *)*param_2;
    }
    FUN_18063ab10(local_828,0,0x800);
    local_838 = param_2;
    FUN_18015ad60(local_828,0x800,0xffffffffffffffff,"ConfigManager: %s");
    uVar1 = 1;
  }
  FUN_1800a9e50(uVar1,local_828);
}



