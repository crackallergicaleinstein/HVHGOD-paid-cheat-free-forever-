// FUN_180383df0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180383df0 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_180383df0(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 extraout_XMM0_Qa;
  undefined1 local_58 [2] [16];
  
  LOCK();
  DAT_180c64050 = DAT_180c64050 + 1;
  UNLOCK();
  if (DAT_180c70b40 == '\0') {
    if (DAT_180c709a0 == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = (*(code *)DAT_180c709a0)();
    }
  }
  else {
    DAT_180c70e60 = 1;
    FUN_1803b1fc0();
    FUN_1803f2680(&DAT_180cce340);
    puVar2 = &DAT_180cce780;
    do {
      FUN_1803f2680(puVar2);
      puVar2 = puVar2 + 0x440;
    } while (puVar2 != &DAT_180ccf000);
    iVar1 = 0;
    LOCK();
    DAT_180cd06d8 = 0;
    UNLOCK();
    FUN_1803c34b0(&DAT_180ccf690);
    FUN_1803f25d0(&DAT_180cd0010);
    local_58[0] = (undefined1  [16])0x0;
    FUN_1803c9920(&DAT_180cd06b0,local_58);
    DAT_180cd0764 = 0;
    _DAT_180cd0758 = 0;
    LOCK();
    DAT_180cd17b8 = 0;
    UNLOCK();
    FUN_1803c34b0(&DAT_180cd0770);
    FUN_1803f25d0(&DAT_180cd10f0);
    local_58[0] = (undefined1  [16])0x0;
    FUN_1803c9920(&DAT_180cd1790,local_58);
    DAT_180cd1844 = 0;
    _DAT_180cd1838 = 0;
    LOCK();
    DAT_180cd2898 = 0;
    UNLOCK();
    FUN_1803c34b0(&DAT_180cd1850);
    FUN_1803f25d0(&DAT_180cd21d0);
    local_58[0] = (undefined1  [16])0x0;
    FUN_1803c9920(&DAT_180cd2870,local_58);
    DAT_180cd2924 = 0;
    _DAT_180cd2918 = 0;
    LOCK();
    DAT_180cd3978 = 0;
    UNLOCK();
    FUN_1803c34b0(&DAT_180cd2930);
    FUN_1803f25d0(&DAT_180cd32b0);
    local_58[0] = (undefined1  [16])0x0;
    FUN_1803c9920(&DAT_180cd3950,local_58);
    DAT_180cd3a04 = 0;
    _DAT_180cd39f8 = 0;
    uVar3 = FUN_1803f54c0();
    if (DAT_180c6e518 != 0) {
      uVar3 = (**(code **)(*(longlong *)DAT_180c6e518 + 0x10))();
      DAT_180c6e518 = 0;
    }
    if (DAT_180c709a0 != 0) {
      iVar1 = (*(code *)DAT_180c709a0)(param_1,param_2,param_3,param_4,param_5,param_6);
      uVar3 = extraout_XMM0_Qa;
      if (iVar1 < 0) goto LAB_180384021;
    }
    FUN_1803b7200(uVar3,param_1);
  }
LAB_180384021:
  LOCK();
  DAT_180c64050 = DAT_180c64050 + -1;
  UNLOCK();
  return iVar1;
}



