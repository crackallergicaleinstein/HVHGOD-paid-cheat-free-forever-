// FUN_18056e970 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18056e970 */

void FUN_18056e970(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  
  FUN_180493f00("Remove Decals");
  FUN_1805302b0(
               "Hides world decals. Decal tint remains saved and applies when decals are visible again."
               );
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



