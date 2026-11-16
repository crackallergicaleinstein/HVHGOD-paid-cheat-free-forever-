// FUN_1804759c0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804759c0 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1804759c0(longlong *param_1,int param_2)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  undefined1 auStack_38 [32];
  int local_18 [2];
  ulonglong local_10;
  
  local_10 = DAT_1808d5f00 ^ (ulonglong)auStack_38;
  *(undefined4 *)((longlong)param_1 + 0x24) = 4;
  lVar1 = *(longlong *)(*param_1 + (longlong)(int)param_1[3] * 8);
  if (param_2 < 0) {
    param_2 = 0;
  }
  else if (0x14 < param_2) {
    param_2 = 0x14;
  }
  *(int *)(param_1 + 9) = param_2;
  iVar3 = *(int *)(lVar1 + 0x4968);
  if (DAT_180cd67f8 != 0) {
    local_18[0] = param_2;
    cVar2 = (**(code **)(*(longlong *)DAT_180cd67f8 + 0x10))(DAT_180cd67f8,local_18);
    if (cVar2 != '\0') {
      iVar3 = 0;
    }
  }
  *(int *)((longlong)param_1 + 0x4c) =
       (int)*(short *)(lVar1 + 0x496e + ((longlong)iVar3 * 0x15 + (longlong)(int)param_1[9]) * 4);
  param_1[0x16] = 0;
  *(undefined1 *)(param_1 + 0x17) = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  *(undefined4 *)((longlong)param_1 + 0x7c) = 0;
  *(undefined4 *)(param_1 + 0x1f) = 0;
}



