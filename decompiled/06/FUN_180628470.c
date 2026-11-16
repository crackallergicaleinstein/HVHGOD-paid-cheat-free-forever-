// FUN_180628470 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180628470 */

float FUN_180628470(int param_1)

{
  undefined4 *puVar1;
  float fVar2;
  
  if (param_1 == 0) {
    fVar2 = 1.5845633e+29;
  }
  else {
    fVar2 = -1.5845633e+29;
  }
  puVar1 = (undefined4 *)FUN_18060fe00();
  *puVar1 = 0x22;
  return fVar2 * 1.5845633e+29;
}



