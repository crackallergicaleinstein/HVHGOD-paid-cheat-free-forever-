// FUN_18047b570 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18047b570 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18047b570(undefined8 *param_1,char *param_2,undefined8 param_3,undefined1 param_4)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_78 [32];
  undefined1 local_58;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  char *local_38;
  ulonglong local_30;
  
  local_30 = DAT_1808d5f00 ^ (ulonglong)auStack_78;
  local_44 = *(float *)param_1[3];
  local_48 = DAT_180b0a41c * *(float *)param_1[2] + *(float *)param_1[1];
  local_58 = param_4;
  FUN_1804754e0(*(undefined8 *)*param_1,local_48,&local_48,param_3);
  lVar2 = 0;
  do {
    lVar3 = lVar2 + 1;
    if (param_2[lVar2] != (&DAT_18082ade8)[lVar2]) {
      iVar1 = strcmp(param_2,"##expand");
      local_38 = "Apply Item";
      if (iVar1 == 0) {
        local_38 = "Inspect Item";
      }
      goto LAB_18047b620;
    }
    lVar2 = lVar3;
  } while (lVar3 != 7);
  local_38 = "Item Options";
LAB_18047b620:
  if (DAT_180cd6f38 != 0) {
    local_44 = DAT_180b0a41c * 10.0 + *(float *)param_1[3];
    local_48 = (*(float *)param_1[2] + 10.0) * DAT_180b0a41c + *(float *)param_1[1];
    local_3c = *(float *)param_1[3] - DAT_180b0a41c * 10.0;
    local_40 = (*(float *)param_1[2] - 10.0) * DAT_180b0a41c + *(float *)param_1[1];
    (**(code **)(*(longlong *)DAT_180cd6f38 + 0x10))(DAT_180cd6f38,&local_38,&local_40,&local_48);
  }
  *(float *)param_1[2] = *(float *)param_1[2] + 23.0;
}



