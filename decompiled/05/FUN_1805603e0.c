// FUN_1805603e0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805603e0 */

void FUN_1805603e0(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  
  FUN_180493f00("Point Scale");
  lVar1 = *param_2;
  FUN_180488c60();
  FUN_180516ec0("Dynamic Point Scale",lVar1 + 0x610);
  FUN_180516ec0("Debug Multipoints",lVar1 + 0x678);
  FUN_180488f10();
  if (DAT_180c62d18 != DAT_180c62d20) {
    FUN_18015c010(DAT_180c62d20 + -0x20);
    DAT_180c62d20 = DAT_180c62d20 + -0x20;
  }
  DAT_1808e4e38 = 0xffffffff;
  return;
}



