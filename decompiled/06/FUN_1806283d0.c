// FUN_1806283d0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1806283d0 */

float FUN_1806283d0(int param_1)

{
  undefined4 *puVar1;
  float fVar2;
  
  if (param_1 == 0) {
    fVar2 = 1.0;
  }
  else {
    fVar2 = -1.0;
  }
  puVar1 = (undefined4 *)FUN_18060fe00();
  *puVar1 = 0x22;
  return fVar2 * INFINITY;
}



