// FUN_1803a9c50 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1803a9c50 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_1803a9c50(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  int *piVar3;
  
  LOCK();
  DAT_180c64050 = DAT_180c64050 + 1;
  UNLOCK();
  if (DAT_180c70750 != 0) {
    (*(code *)DAT_180c70750)();
  }
  if (((DAT_1808d9bda == '\0') && (DAT_1808d9bd8 == '\x03')) && (DAT_1808d9bd9 == '\0')) {
    lVar2 = FUN_18017ea70();
    uVar1 = *(undefined8 *)(lVar2 + 8);
    piVar3 = (int *)FUN_18017ea70();
    *piVar3 = *piVar3 + 1;
    *(char **)(piVar3 + 2) = "world: aggregate records";
    FUN_180371950("world: aggregate records",param_3);
    piVar3 = (int *)FUN_18017ea70();
    *(undefined8 *)(piVar3 + 2) = uVar1;
    if (*piVar3 != 0) {
      *piVar3 = *piVar3 + -1;
    }
  }
  LOCK();
  DAT_180c64050 = DAT_180c64050 + -1;
  UNLOCK();
  return;
}



