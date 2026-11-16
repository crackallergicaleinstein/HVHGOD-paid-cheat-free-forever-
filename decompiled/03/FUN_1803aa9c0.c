// FUN_1803aa9c0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1803aa9c0 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1803aa9c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined8 uVar1;
  longlong lVar2;
  int *piVar3;
  undefined1 auStack_88 [48];
  undefined8 local_58;
  undefined8 local_50;
  PSRWLOCK pRStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  ulonglong local_28;
  
  local_28 = DAT_1808d5f00 ^ (ulonglong)auStack_88;
  LOCK();
  DAT_180c64050 = DAT_180c64050 + 1;
  UNLOCK();
  if (DAT_180c70090 != 0) {
    (*(code *)DAT_180c70090)();
  }
  local_50 = 0;
  pRStack_48 = (PSRWLOCK)0x0;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_180244f40();
  if ((char)uStack_38 != '\0') {
    lVar2 = FUN_18017ea70();
    uVar1 = *(undefined8 *)(lVar2 + 8);
    local_58 = uVar1;
    piVar3 = (int *)FUN_18017ea70();
    *piVar3 = *piVar3 + 1;
    *(char **)(piVar3 + 2) = "chams: sort primitives";
    FUN_18028e410("chams: sort primitives",param_3,param_4);
    piVar3 = (int *)FUN_18017ea70();
    *(undefined8 *)(piVar3 + 2) = uVar1;
    if (*piVar3 != 0) {
      *piVar3 = *piVar3 + -1;
    }
  }
  FUN_180180bf0(&local_50);
  if ((char)uStack_40 != '\0') {
    ReleaseSRWLockShared(pRStack_48);
  }
  FUN_1803c6340(&DAT_180ccf690,param_3,param_4);
  FUN_1803c6340(&DAT_180cd0770,param_3,param_4);
  FUN_1803c6340(&DAT_180cd1850,param_3,param_4);
  FUN_1803c6340(&DAT_180cd2930,param_3,param_4);
  LOCK();
  DAT_180c64050 = DAT_180c64050 + -1;
  UNLOCK();
}



