// FUN_180417880 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180417880 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

undefined8 FUN_180417880(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  
  if ((*param_1 == 0) || (pcVar1 = *(code **)(*param_1 + 0x10), pcVar1 == (code *)0x0)) {
    uVar2 = 0;
  }
  else {
    (*pcVar1)(param_1,param_3,param_4);
    uVar2 = 1;
  }
  return uVar2;
}



