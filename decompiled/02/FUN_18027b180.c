// FUN_18027b180 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18027b180 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

undefined4 * FUN_18027b180(undefined4 *param_1,longlong *param_2)

{
  code *pcVar1;
  undefined4 uVar2;
  
  pcVar1 = (code *)0x0;
  if (*param_2 != 0) {
    pcVar1 = *(code **)(*param_2 + 0x50);
  }
  if (pcVar1 == (code *)0x0) {
    *(undefined1 *)(param_1 + 1) = 0;
  }
  else {
    uVar2 = (*pcVar1)(param_2);
    *param_1 = uVar2;
    *(undefined1 *)(param_1 + 1) = 1;
  }
  return param_1;
}



