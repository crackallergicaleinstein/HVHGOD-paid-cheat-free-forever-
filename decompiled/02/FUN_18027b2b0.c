// FUN_18027b2b0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18027b2b0 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

undefined8 *
FUN_18027b2b0(undefined8 *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = (code *)0x0;
  if (*param_2 != 0) {
    pcVar1 = *(code **)(*param_2 + 0x100);
  }
  if (pcVar1 == (code *)0x0) {
    *(undefined1 *)(param_1 + 1) = 0;
  }
  else {
    uVar2 = (*pcVar1)(param_2,param_4);
    *param_1 = uVar2;
    *(undefined1 *)(param_1 + 1) = 1;
  }
  return param_1;
}



