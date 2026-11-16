// FUN_1800018b0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1800018b0 */

undefined8 * FUN_1800018b0(undefined8 *param_1)

{
  undefined *local_18;
  undefined8 local_10;
  
  if (DAT_180bacc54 == '\x01') {
    local_18 = &DAT_180bacc10;
    local_10 = 0x20;
    FUN_180001790(param_1,&local_18,0);
    return param_1;
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0xf;
  return param_1;
}



