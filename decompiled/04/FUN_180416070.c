// FUN_180416070 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180416070 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

undefined8 FUN_180416070(longlong *param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  
  if ((*param_1 == 0) || (pcVar1 = *(code **)(*param_1 + 0x180), pcVar1 == (code *)0x0)) {
    uVar2 = 0;
  }
  else {
    (*pcVar1)();
    uVar2 = 1;
  }
  return uVar2;
}



