// FUN_180562660 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180562660 */

void FUN_180562660(undefined8 param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  FUN_180493f00("Configuration");
  puVar1 = (undefined8 *)((undefined8 *)*param_2)[1];
  for (puVar2 = *(undefined8 **)*param_2; puVar2 != puVar1; puVar2 = puVar2 + 1) {
    FUN_1805117c0(*puVar2);
  }
  if (DAT_180c62d18 != DAT_180c62d20) {
    FUN_18015c010(DAT_180c62d20 + -0x20);
    DAT_180c62d20 = DAT_180c62d20 + -0x20;
  }
  DAT_1808e4e38 = 0xffffffff;
  return;
}



