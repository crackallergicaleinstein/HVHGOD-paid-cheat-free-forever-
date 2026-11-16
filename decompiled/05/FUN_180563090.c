// FUN_180563090 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180563090 */

void FUN_180563090(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  FUN_180493f00();
  FUN_1805302b0("Activation shortcut");
  uVar1 = *param_2;
  FUN_180488c60();
  FUN_18050e290(uVar1);
  FUN_180488f10();
  if (DAT_180c62d18 != DAT_180c62d20) {
    FUN_18015c010(DAT_180c62d20 + -0x20);
    DAT_180c62d20 = DAT_180c62d20 + -0x20;
  }
  DAT_1808e4e38 = 0xffffffff;
  return;
}



