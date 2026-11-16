// FUN_18017a0f0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18017a0f0 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18017a0f0(longlong *param_1)

{
  int iVar1;
  longlong *plVar2;
  undefined1 auStack_98 [32];
  longlong *local_78;
  longlong local_68;
  longlong lStack_60;
  longlong lStack_58;
  longlong lStack_50;
  longlong local_48;
  longlong lStack_40;
  longlong lStack_38;
  longlong lStack_30;
  undefined1 local_28 [16];
  ulonglong local_18;
  
  local_18 = DAT_1808d5f00 ^ (ulonglong)auStack_98;
  plVar2 = (longlong *)param_1[0x29];
  local_78 = param_1;
  if (plVar2 == (longlong *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_1805fa874();
  }
  (**(code **)(*plVar2 + 0x10))(plVar2,&local_68);
  local_28._8_8_ = 0;
  local_28._0_8_ = param_1 + 0xc;
  iVar1 = FUN_1805f68d0(param_1 + 0xc);
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(5);
  }
  if (*(int *)((longlong)param_1 + 0xac) == 0x7fffffff) {
    *(undefined4 *)((longlong)param_1 + 0xac) = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(6);
  }
  local_28[8] = 1;
  if (*(char *)((longlong)param_1 + 0x101) != '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_1801647e0(3);
  }
  plVar2 = param_1 + 2;
  if (plVar2 != &local_68) {
    FUN_18015c010(plVar2);
    *plVar2 = CONCAT71(local_68._1_7_,(undefined1)local_68);
    param_1[3] = lStack_60;
    param_1[4] = lStack_58;
    param_1[5] = lStack_50;
    lStack_58 = 0;
    lStack_50 = 0xf;
    local_68._0_1_ = 0;
  }
  plVar2 = param_1 + 6;
  if (plVar2 != &local_48) {
    FUN_18015c010(plVar2);
    *plVar2 = CONCAT71(local_48._1_7_,(undefined1)local_48);
    param_1[7] = lStack_40;
    param_1[8] = lStack_38;
    param_1[9] = lStack_30;
    lStack_38 = 0;
    lStack_30 = 0xf;
    local_48._0_1_ = 0;
  }
  (**(code **)(*param_1 + 0x28))(param_1,local_28,0);
  if (local_28[8] != '\0') {
    FUN_1805f68fc(local_28._0_8_);
  }
  FUN_18015c010(&local_48);
  FUN_18015c010(&local_68);
}



