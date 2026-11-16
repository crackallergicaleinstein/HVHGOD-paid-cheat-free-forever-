// FUN_18056e580 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18056e580 */

void FUN_18056e580(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  
  FUN_180493f00("Keep Killfeed");
  FUN_1805302b0("Keeps kill-feed entries visible during the round.");
  uVar1 = *(undefined8 *)(param_2 + 8);
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



