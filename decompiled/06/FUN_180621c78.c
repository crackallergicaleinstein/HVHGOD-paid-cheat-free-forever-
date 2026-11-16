// FUN_180621c78 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180621c78 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_180621c78(void)

{
  code *pcVar1;
  
  if (DAT_180d060c8 != (code *)0xffffffffffffffff) {
    pcVar1 = DAT_180d060c8;
    if ((DAT_180d060c8 == (code *)0x0) &&
       (pcVar1 = (code *)FUN_180621488(0x19,"RoUninitialize",&DAT_1806b1198,&DAT_1806b119c),
       pcVar1 == (code *)0x0)) {
      return;
    }
    (*pcVar1)();
  }
  return;
}



