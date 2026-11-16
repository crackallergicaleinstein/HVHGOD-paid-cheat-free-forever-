// FUN_18062e450 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18062e450 */

undefined4 FUN_18062e450(double param_1)

{
  undefined4 *puVar1;
  
  if (INFINITY <= ABS(param_1)) {
    puVar1 = (undefined4 *)FUN_18060fe00();
    *puVar1 = 0x22;
  }
  return SUB84(param_1,0);
}



