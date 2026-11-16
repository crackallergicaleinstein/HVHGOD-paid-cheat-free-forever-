// FUN_1800bac90 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1800bac90 */

byte FUN_1800bac90(byte param_1)

{
  byte local_res10 [24];
  
  local_res10[0] = 0;
  local_res10[1] = 2;
  local_res10[2] = 3;
  local_res10[3] = 4;
  local_res10[4] = 5;
  local_res10[5] = 6;
  local_res10[6] = 8;
  local_res10[7] = 9;
  if (param_1 < 0xb) {
    return param_1;
  }
  if (param_1 < 0x13) {
    return local_res10[param_1 - 0xb];
  }
  return 2;
}



