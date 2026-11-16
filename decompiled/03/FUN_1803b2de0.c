// FUN_1803b2de0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1803b2de0 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1803b2de0(void)

{
  undefined *puVar1;
  undefined1 local_18 [16];
  
  DAT_180c70e60 = 0;
  FUN_1803b1fc0();
  FUN_1805464a0();
  puVar1 = &DAT_180cce780;
  do {
    FUN_1803f25d0(puVar1);
    FUN_1803f2990(puVar1,0,0);
    puVar1 = puVar1 + 0x440;
  } while (puVar1 != &DAT_180ccf000);
  FUN_1803f2990(&DAT_180cce340,0,0);
  LOCK();
  DAT_180cd06d8 = 0;
  UNLOCK();
  FUN_1803c34b0(&DAT_180ccf690);
  FUN_1803f25d0(&DAT_180cd0010);
  local_18 = (undefined1  [16])0x0;
  FUN_1803c9920(&DAT_180cd06b0,local_18);
  DAT_180cd0764 = 0;
  _DAT_180cd0758 = 0;
  LOCK();
  DAT_180cd17b8 = 0;
  UNLOCK();
  FUN_1803c34b0(&DAT_180cd0770);
  FUN_1803f25d0(&DAT_180cd10f0);
  local_18 = (undefined1  [16])0x0;
  FUN_1803c9920(&DAT_180cd1790,local_18);
  DAT_180cd1844 = 0;
  _DAT_180cd1838 = 0;
  LOCK();
  DAT_180cd2898 = 0;
  UNLOCK();
  FUN_1803c34b0(&DAT_180cd1850);
  FUN_1803f25d0(&DAT_180cd21d0);
  local_18 = (undefined1  [16])0x0;
  FUN_1803c9920(&DAT_180cd2870,local_18);
  DAT_180cd2924 = 0;
  _DAT_180cd2918 = 0;
  LOCK();
  DAT_180cd3978 = 0;
  UNLOCK();
  FUN_1803c34b0(&DAT_180cd2930);
  FUN_1803f25d0(&DAT_180cd32b0);
  local_18 = (undefined1  [16])0x0;
  FUN_1803c9920(&DAT_180cd3950,local_18);
  DAT_180cd3a04 = 0;
  _DAT_180cd39f8 = 0;
  FUN_1803f54c0();
  if (DAT_180c6e518 != 0) {
    (**(code **)(*(longlong *)DAT_180c6e518 + 0x10))();
    DAT_180c6e518 = 0;
  }
  if (DAT_180c6e510 != 0) {
    (**(code **)(*(longlong *)DAT_180c6e510 + 0x10))();
    DAT_180c6e510 = 0;
  }
  if (DAT_180c6e508 != 0) {
    (**(code **)(*(longlong *)DAT_180c6e508 + 0x10))();
    DAT_180c6e508 = 0;
  }
  DAT_180c6e520 = 0;
  _DAT_180c6e528 = 0;
  DAT_180c6e530 = 0;
  return;
}



