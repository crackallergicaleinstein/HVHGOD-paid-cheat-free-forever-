// FUN_180178540 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180178540 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180178540(longlong *param_1,char param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 auStack_58 [32];
  undefined1 local_38 [16];
  undefined1 local_28 [16];
  ulonglong local_18;
  
  local_18 = DAT_1808d5f00 ^ (ulonglong)auStack_58;
  local_28._8_8_ = 0;
  local_28._0_8_ = param_1 + 0xc;
  iVar2 = FUN_1805f68d0(param_1 + 0xc);
  if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(5);
  }
  if (*(int *)((longlong)param_1 + 0xac) == 0x7fffffff) {
    *(undefined4 *)((longlong)param_1 + 0xac) = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(6);
  }
  local_28[8] = 1;
  if ((param_2 != '\0') && ((char)param_1[0x1f] != '\0')) {
                    /* WARNING: Subroutine does not return */
    FUN_1801647e0(2);
  }
  cVar1 = FUN_1805fd4e4(param_1 + 10);
  if (cVar1 != '\0') {
    uVar3 = FUN_18017ceb0(local_38,param_1 + 10);
                    /* WARNING: Subroutine does not return */
    FUN_18017ce90(uVar3);
  }
  *(undefined1 *)(param_1 + 0x1f) = 1;
  if (*(char *)((longlong)param_1 + 0x102) == '\0') {
    *(undefined1 *)((longlong)param_1 + 0x102) = 1;
    (**(code **)(*param_1 + 0x20))(param_1,local_28);
  }
  iVar2 = *(int *)((longlong)param_1 + 0xfc);
  while (iVar2 == 0) {
    FUN_1805f6a84(param_1 + 0x16,local_28._0_8_);
    iVar2 = *(int *)((longlong)param_1 + 0xfc);
  }
  cVar1 = FUN_1805fd4e4(param_1 + 10);
  if (cVar1 != '\0') {
    uVar3 = FUN_18017ceb0(local_38,param_1 + 10);
                    /* WARNING: Subroutine does not return */
    FUN_18017ce90(uVar3);
  }
  if (local_28[8] != '\0') {
    FUN_1805f68fc(local_28._0_8_);
  }
}



