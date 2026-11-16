// FUN_180621c28 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180621c28 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

undefined8 FUN_180621c28(undefined4 param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  
  if (DAT_180d060c0 == (code *)0xffffffffffffffff) {
    return 0;
  }
  pcVar1 = DAT_180d060c0;
  if ((DAT_180d060c0 == (code *)0x0) &&
     (pcVar1 = (code *)FUN_180621488(0x18,"RoInitialize",&DAT_1806b1184,"RoInitialize"),
     pcVar1 == (code *)0x0)) {
    return 0;
  }
  uVar2 = (*pcVar1)(param_1);
  return uVar2;
}



