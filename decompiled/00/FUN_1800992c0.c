// FUN_1800992c0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1800992c0 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1800992c0(void)

{
  longlong lVar1;
  char *local_18;
  undefined8 local_10;
  
  _eh_vector_constructor_iterator_(&DAT_180b90368,0xe0,2,FUN_1801abaf0,thunk_FUN_1801ab310);
  _DAT_180b90528 = 0;
  uRam0000000180b90530 = 0;
  _DAT_180b90538 = 0;
  uRam0000000180b90540 = 0;
  _eh_vector_constructor_iterator_(&DAT_180b90548,0x128,2,FUN_1801ab300,FUN_1801952f0);
  DAT_180b90798 = 0;
  _DAT_180b907a0 = 0;
  _DAT_180b907a8 = (undefined1  [16])0x0;
  if (DAT_180c7df28 == (undefined8 *)0x0) {
    local_18 = "tier0.dll:g_pMemAlloc";
    local_10 = 0x15;
    DAT_180c7df28 = (undefined8 *)FUN_180451750(&local_18);
  }
  lVar1 = (**(code **)(*(longlong *)*DAT_180c7df28 + 8))((longlong *)*DAT_180c7df28,0x108);
  *(longlong *)lVar1 = lVar1;
  *(longlong *)(lVar1 + 8) = lVar1;
  DAT_180b907a8 = lVar1;
  _DAT_180b907b8 = (undefined1  [16])0x0;
  _DAT_180b907c8 = 0;
  _DAT_180b907d0 = 7;
  _DAT_180b907d8 = 8;
  _DAT_180b907a0 = 0x3f800000;
  FUN_1801406e0(&DAT_180b907b8,0x10,lVar1);
  _DAT_180b907e0 = (undefined1  [16])0x0;
  DAT_180b907f0 = 0;
  DAT_180b907f8 = 0;
  atexit(FUN_180661e40);
  return;
}



