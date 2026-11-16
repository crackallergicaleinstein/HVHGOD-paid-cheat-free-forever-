// FUN_1801df570 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801df570 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

undefined8 *
FUN_1801df570(undefined8 *param_1,undefined1 *param_2,undefined1 *param_3,undefined8 *param_4)

{
  undefined1 uVar1;
  
  if (param_2 == param_3) {
    *param_1 = param_4;
    return param_1;
  }
  do {
    uVar1 = *param_2;
    if ((ulonglong)param_4[3] < param_4[2] + 1) {
      (**(code **)*param_4)(param_4);
    }
    param_2 = param_2 + 1;
    *(undefined1 *)(param_4[2] + param_4[1]) = uVar1;
    param_4[2] = param_4[2] + 1;
  } while (param_2 != param_3);
  *param_1 = param_4;
  return param_1;
}



