// FUN_1803829b0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1803829b0 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1803829b0(void)

{
  undefined8 local_18;
  longlong local_10;
  
  if (DAT_180902df8 != 0) {
    local_10 = DAT_180902df8;
    local_18 = DAT_180902df0;
    FUN_180384bf0(&DAT_180902e08,&local_18);
    (**(code **)(*(longlong *)DAT_180902df8 + 0x10))();
    (**(code **)(*DAT_180902df0 + 0x10))();
  }
  _DAT_180902df0 = (undefined1  [16])0x0;
  DAT_180902e00 = 0;
  DAT_180903058 = 0;
  DAT_180903050 = 0;
  DAT_180903070 = 0;
  DAT_180903078 = 0;
  DAT_180903080 = 0;
  DAT_180903088 = 0;
  _DAT_180903060 = (undefined1  [16])0x0;
  return;
}



