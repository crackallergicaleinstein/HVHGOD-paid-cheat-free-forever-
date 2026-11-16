// FUN_1804551e0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804551e0 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

undefined4 * FUN_1804551e0(undefined4 *param_1,longlong *param_2,longlong param_3)

{
  undefined4 uVar1;
  code *pcVar2;
  
  pcVar2 = (code *)0x0;
  if (*param_2 != 0) {
    pcVar2 = *(code **)(*param_2 + param_3 * 8);
  }
  if (pcVar2 == (code *)0x0) {
    *(undefined1 *)(param_1 + 1) = 0;
  }
  else {
    uVar1 = (*pcVar2)(param_2);
    *param_1 = uVar1;
    *(undefined1 *)(param_1 + 1) = 1;
  }
  return param_1;
}



