// FUN_18062e4c0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18062e4c0 */

double FUN_18062e4c0(int param_1)

{
  undefined4 *puVar1;
  double dVar2;
  
  if (param_1 == 0) {
    dVar2 = 1.0;
  }
  else {
    dVar2 = -1.0;
  }
  puVar1 = (undefined4 *)FUN_18060fe00();
  *puVar1 = 0x22;
  return dVar2 * INFINITY;
}



