// FUN_1803d6490 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1803d6490 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

undefined8 FUN_1803d6490(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  
  if ((*param_1 == 0) || (pcVar1 = *(code **)(*param_1 + 0x28), pcVar1 == (code *)0x0)) {
    uVar2 = 0;
  }
  else {
    (*pcVar1)(param_1,param_3);
    uVar2 = 1;
  }
  return uVar2;
}



