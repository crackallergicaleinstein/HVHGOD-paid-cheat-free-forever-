// FUN_180633420 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180633420 */

undefined8 FUN_180633420(longlong param_1,longlong param_2,ulonglong param_3)

{
  undefined4 *puVar1;
  
  if (((param_1 == 0) || (param_2 == 0)) || (0x7fffffff < param_3)) {
    puVar1 = (undefined4 *)FUN_18060fe00();
    *puVar1 = 0x16;
    FUN_18060aad4();
  }
  return 0x7fffffff;
}



