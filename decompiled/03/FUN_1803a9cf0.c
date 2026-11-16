// FUN_1803a9cf0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1803a9cf0 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

undefined8
FUN_1803a9cf0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
             undefined4 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  bool bVar1;
  undefined8 uVar2;
  longlong lVar3;
  int *piVar4;
  
  LOCK();
  DAT_180c64050 = DAT_180c64050 + 1;
  UNLOCK();
  if ((DAT_180bb8ad0 & 1) == 0) {
    if (((DAT_1808d9bda == '\0') && (DAT_1808d9bd8 == '\x03')) && (DAT_1808d9bd9 == '\0')) {
      bVar1 = true;
      lVar3 = FUN_18017ea70();
      uVar2 = *(undefined8 *)(lVar3 + 8);
      piVar4 = (int *)FUN_18017ea70();
      *piVar4 = *piVar4 + 1;
      *(char **)(piVar4 + 2) = "world: primitive tint";
      FUN_180371ca0("world: primitive tint",param_3,param_4);
      piVar4 = (int *)FUN_18017ea70();
      *(undefined8 *)(piVar4 + 2) = uVar2;
      if (*piVar4 != 0) {
        *piVar4 = *piVar4 + -1;
      }
    }
    else {
      bVar1 = false;
    }
    FUN_1803a8a00(param_3,param_4);
    FUN_1803c6340(&DAT_180ccf690,param_3,param_4);
    FUN_1803c6340(&DAT_180cd0770,param_3,param_4);
    FUN_1803c6340(&DAT_180cd1850,param_3,param_4);
    FUN_1803c6340(&DAT_180cd2930,param_3,param_4);
    if (DAT_180c706f0 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = (*(code *)DAT_180c706f0)
                        (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
    }
    if (bVar1) {
      FUN_180372300();
    }
  }
  else if (DAT_180c706f0 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = (*(code *)DAT_180c706f0)();
  }
  LOCK();
  DAT_180c64050 = DAT_180c64050 + -1;
  UNLOCK();
  return uVar2;
}



