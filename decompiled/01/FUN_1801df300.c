// FUN_1801df300 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801df300 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

undefined8 * FUN_1801df300(undefined8 *param_1,undefined8 *param_2,char param_3,char param_4)

{
  if (param_4 == '\0') {
    if (param_3 == '\x01') {
      if ((ulonglong)param_2[3] < param_2[2] + 1) {
        (**(code **)*param_2)(param_2);
      }
      *(undefined1 *)(param_2[1] + param_2[2]) = 0x2b;
    }
    else {
      if (param_3 != '\x03') goto LAB_1801df3a3;
      if ((ulonglong)param_2[3] < param_2[2] + 1) {
        (**(code **)*param_2)(param_2);
      }
      *(undefined1 *)(param_2[1] + param_2[2]) = 0x20;
    }
  }
  else {
    if ((ulonglong)param_2[3] < param_2[2] + 1) {
      (**(code **)*param_2)(param_2);
    }
    *(undefined1 *)(param_2[1] + param_2[2]) = 0x2d;
  }
  param_2[2] = param_2[2] + 1;
LAB_1801df3a3:
  *param_1 = param_2;
  return param_1;
}



