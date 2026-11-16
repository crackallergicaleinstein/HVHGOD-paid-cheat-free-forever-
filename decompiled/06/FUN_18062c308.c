// FUN_18062c308 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18062c308 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

undefined8 FUN_18062c308(longlong param_1,longlong param_2)

{
  for (; param_1 != param_2; param_2 = param_2 + -0x10) {
    if (*(code **)(param_2 + -8) != (code *)0x0) {
      (**(code **)(param_2 + -8))(0);
    }
  }
  return 1;
}



