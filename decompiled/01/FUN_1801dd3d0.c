// FUN_1801dd3d0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801dd3d0 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1801dd3d0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 auStack_48 [32];
  ulonglong local_28;
  
  local_28 = DAT_1808d5f00 ^ (ulonglong)auStack_48;
  puVar3 = (undefined1 *)*param_3;
  puVar2 = puVar3 + param_3[1];
  if (puVar3 == puVar2) {
    *param_1 = param_2;
  }
  else {
    do {
      uVar1 = *puVar3;
      if ((ulonglong)param_2[3] < param_2[2] + 1) {
        (**(code **)*param_2)(param_2);
      }
      puVar3 = puVar3 + 1;
      *(undefined1 *)(param_2[2] + param_2[1]) = uVar1;
      param_2[2] = param_2[2] + 1;
    } while (puVar3 != puVar2);
    *param_1 = param_2;
  }
}



