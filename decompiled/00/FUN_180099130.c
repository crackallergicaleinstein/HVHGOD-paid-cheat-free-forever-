// FUN_180099130 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180099130 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180099130(void)

{
  undefined1 auVar1 [16];
  char *local_18;
  undefined8 local_10;
  
  if (DAT_180c7df28 == (undefined8 *)0x0) {
    local_18 = "tier0.dll:g_pMemAlloc";
    local_10 = 0x15;
    DAT_180c7df28 = (undefined8 *)FUN_180451750(&local_18);
  }
  DAT_180b901c8 = (**(code **)(*(longlong *)*DAT_180c7df28 + 8))((longlong *)*DAT_180c7df28,0x40);
  *(longlong *)DAT_180b901c8 = DAT_180b901c8;
  *(longlong *)(DAT_180b901c8 + 8) = DAT_180b901c8;
  _DAT_180b901d8 = (undefined1  [16])0x0;
  _DAT_180b901e8 = 0;
  _DAT_180b901f0 = 7;
  _DAT_180b901f8 = 8;
  _DAT_180b901c0 = 0x3f800000;
  FUN_1801406e0(&DAT_180b901d8,0x10,DAT_180b901c8);
  DAT_180b90200 = 0;
  _DAT_180b90208 = (undefined1  [16])0x0;
  _DAT_180b90218 = 0;
  DAT_180b90230 = 0;
  DAT_180b90238 = 0xf;
  ram0x000180b90221 = SUB1615((undefined1  [16])0x0,1);
  auVar1[0xf] = 0;
  auVar1._0_15_ = ram0x000180b90221;
  _DAT_180b90220 = auVar1 << 8;
  DAT_180b90240 = 0;
  DAT_180b90248 = 0;
  atexit(FUN_180661c10);
  return;
}



