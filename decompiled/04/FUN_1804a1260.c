// FUN_1804a1260 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804a1260 */

void FUN_1804a1260(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  
  FUN_180493f00("Player Glow");
  lVar1 = *param_2;
  FUN_180488c60();
  FUN_180488a80("Appearance",&DAT_180858a0c);
  FUN_180489fc0("Glow Color",lVar1 + 0x36c8,1,&DAT_18082a268);
  FUN_180488f10();
  if (DAT_180c62d18 != DAT_180c62d20) {
    FUN_18015c010(DAT_180c62d20 + -0x20);
    DAT_180c62d20 = DAT_180c62d20 + -0x20;
  }
  DAT_1808e4e38 = 0xffffffff;
  return;
}



