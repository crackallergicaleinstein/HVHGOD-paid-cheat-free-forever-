// FUN_1801dd1c0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801dd1c0 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1801dd1c0(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  int iVar3;
  undefined1 *puVar4;
  longlong lVar5;
  undefined1 auStack_58 [32];
  ulonglong local_38;
  
  local_38 = DAT_1808d5f00 ^ (ulonglong)auStack_58;
  puVar4 = (undefined1 *)*param_1;
  puVar1 = puVar4 + 2;
  for (; puVar4 != puVar1; puVar4 = puVar4 + 1) {
    uVar2 = *puVar4;
    if ((ulonglong)param_3[3] < param_3[2] + 1) {
      (**(code **)*param_3)(param_3);
    }
    *(undefined1 *)(param_3[2] + param_3[1]) = uVar2;
    param_3[2] = param_3[2] + 1;
  }
  if (*(char *)param_1[1] != '\0') {
    if ((*(int *)param_1[2] < *(int *)param_1[3]) &&
       (iVar3 = *(int *)param_1[3] - *(int *)param_1[2], lVar5 = (longlong)iVar3, 0 < iVar3)) {
      do {
        if ((ulonglong)param_3[3] < param_3[2] + 1) {
          (**(code **)*param_3)(param_3);
        }
        lVar5 = lVar5 + -1;
        *(undefined1 *)(param_3[2] + param_3[1]) = 0x30;
        param_3[2] = param_3[2] + 1;
      } while (0 < lVar5);
    }
  }
  FUN_1801df570(param_2,param_1[4],*(undefined8 *)param_1[5],param_3);
}



