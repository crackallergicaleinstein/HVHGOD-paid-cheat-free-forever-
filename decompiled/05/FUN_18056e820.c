// FUN_18056e820 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18056e820 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_18056e820(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  FUN_180493f00("Skybox Material");
  (**(code **)*param_2)();
  uVar1 = param_2[1];
  FUN_180488c60();
  FUN_18053bc10(uVar1);
  FUN_180488f10();
  if (DAT_180c62d18 != DAT_180c62d20) {
    FUN_18015c010(DAT_180c62d20 + -0x20);
    DAT_180c62d20 = DAT_180c62d20 + -0x20;
  }
  DAT_1808e4e38 = 0xffffffff;
  return;
}



