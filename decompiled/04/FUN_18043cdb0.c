// FUN_18043cdb0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18043cdb0 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_18043cdb0(void)

{
  char *local_18;
  undefined8 local_10;
  
  if ((DAT_180cd5058 & 1) == 0) {
    DAT_180cd5058 = DAT_180cd5058 | 1;
    uRam0000000180cd5064 = 0;
    _DAT_180cd5078 = 0;
    _DAT_180cd5080 = ZEXT816(0);
    _DAT_180cd5090 = 0;
    _DAT_180cd5098 = 0;
    _DAT_180cd5060 = 0;
    _DAT_180cd5068 = 0;
    _DAT_180cd5070 = 0;
    if (DAT_180c7df28 == (undefined8 *)0x0) {
      local_18 = "tier0.dll:g_pMemAlloc";
      local_10 = 0x15;
      DAT_180c7df28 = (undefined8 *)FUN_180451750(&local_18);
    }
    _DAT_180cd5068 = (**(code **)(*(longlong *)*DAT_180c7df28 + 8))((longlong *)*DAT_180c7df28,0xb8)
    ;
    *(longlong *)_DAT_180cd5068 = _DAT_180cd5068;
    *(longlong *)(_DAT_180cd5068 + 8) = _DAT_180cd5068;
    _DAT_180cd5078 = 0;
    _DAT_180cd5080 = (undefined1  [16])0x0;
    _DAT_180cd5090 = 7;
    _DAT_180cd5098 = 8;
    _DAT_180cd5060 = 0x3f800000;
    FUN_1801b77b0(&DAT_180cd5078,0x10,_DAT_180cd5068);
    atexit(FUN_180663250);
  }
  return &DAT_180cd5060;
}



