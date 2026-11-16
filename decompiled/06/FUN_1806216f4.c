// FUN_1806216f4 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1806216f4 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

undefined8 FUN_1806216f4(void)

{
  code *pcVar1;
  undefined8 uVar2;
  
  if (DAT_180d06000 == (code *)0xffffffffffffffff) {
    return 1;
  }
  pcVar1 = DAT_180d06000;
  if ((DAT_180d06000 == (code *)0x0) &&
     (pcVar1 = (code *)FUN_180621488(0,"AreFileApisANSI",&DAT_1806b1038,&DAT_1806b103c),
     pcVar1 == (code *)0x0)) {
    return 1;
  }
  uVar2 = (*pcVar1)();
  return uVar2;
}



