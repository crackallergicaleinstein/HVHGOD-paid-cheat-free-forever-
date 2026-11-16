// FUN_1801dbbb0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801dbbb0 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1801dbbb0(longlong *param_1,longlong *param_2,undefined4 param_3)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined1 *local_48 [2];
  undefined1 local_38 [24];
  ulonglong local_20;
  
  local_20 = DAT_1808d5f00 ^ (ulonglong)auStack_78;
  puVar2 = (undefined8 *)*param_1;
  local_58 = 10;
  FUN_1801e18a0(local_48,local_38,&local_20,param_3);
  for (puVar3 = local_38; puVar3 != local_48[0]; puVar3 = puVar3 + 1) {
    uVar1 = *puVar3;
    if ((ulonglong)puVar2[3] < puVar2[2] + 1) {
      (**(code **)*puVar2)(puVar2);
    }
    *(undefined1 *)(puVar2[2] + puVar2[1]) = uVar1;
    puVar2[2] = puVar2[2] + 1;
  }
  *param_2 = (longlong)puVar2;
}



