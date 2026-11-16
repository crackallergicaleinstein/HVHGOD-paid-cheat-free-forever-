// FUN_180624fd0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180624fd0 */

void FUN_180624fd0(int param_1)

{
  undefined4 *puVar1;
  
  if (param_1 == 1) {
    puVar1 = (undefined4 *)FUN_18060fe00();
    *puVar1 = 0x21;
  }
  else if ((param_1 == 2) || (param_1 == 3)) {
    puVar1 = (undefined4 *)FUN_18060fe00();
    *puVar1 = 0x22;
    return;
  }
  return;
}



