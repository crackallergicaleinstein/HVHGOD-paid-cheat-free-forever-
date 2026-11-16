// FUN_1803a9f40 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1803a9f40 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1803a9f40(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  int *piVar3;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined1 local_38 [16];
  ulonglong local_20;
  
  local_20 = DAT_1808d5f00 ^ (ulonglong)auStack_68;
  LOCK();
  DAT_180c64050 = DAT_180c64050 + 1;
  UNLOCK();
  local_40 = param_3;
  if (((DAT_1808d9bda == '\0') && (DAT_1808d9bd8 == '\x03')) && (DAT_1808d9bd9 == '\0')) {
    lVar2 = FUN_18017ea70();
    uVar1 = *(undefined8 *)(lVar2 + 8);
    local_48 = uVar1;
    piVar3 = (int *)FUN_18017ea70();
    *piVar3 = *piVar3 + 1;
    *(char **)(piVar3 + 2) = "scene: shader parameter";
    local_38 = (undefined1  [16])0x0;
    FUN_180373980("scene: shader parameter",&local_40,param_2,local_38);
    if (DAT_180c70450 != 0) {
      (*(code *)DAT_180c70450)(param_1,param_2,local_40);
    }
    piVar3 = (int *)FUN_18017ea70();
    *(undefined8 *)(piVar3 + 2) = uVar1;
    if (*piVar3 != 0) {
      *piVar3 = *piVar3 + -1;
    }
  }
  else if (DAT_180c70450 != 0) {
    (*(code *)DAT_180c70450)();
  }
  LOCK();
  DAT_180c64050 = DAT_180c64050 + -1;
  UNLOCK();
}



