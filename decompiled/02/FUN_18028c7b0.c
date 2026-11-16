// FUN_18028c7b0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18028c7b0 */

/* WARNING: Removing unreachable block (ram,0x00018028c82a) */

byte FUN_18028c7b0(byte param_1)

{
  ulonglong uVar1;
  byte bVar2;
  byte local_res10 [24];
  
  local_res10[0] = 0;
  local_res10[1] = 2;
  local_res10[2] = 3;
  local_res10[3] = 4;
  local_res10[4] = 5;
  local_res10[5] = 6;
  local_res10[6] = 8;
  local_res10[7] = 9;
  if (10 < param_1) {
    if (param_1 < 0x13) {
      bVar2 = local_res10[param_1 - 0xb];
      local_res10[0] = 0;
      local_res10[1] = 2;
      local_res10[2] = 3;
      local_res10[3] = 4;
      local_res10[4] = 5;
      local_res10[5] = 6;
      local_res10[6] = 8;
      local_res10[7] = 9;
      param_1 = bVar2;
      if (10 < bVar2) {
        if (bVar2 < 0x13) {
          param_1 = local_res10[bVar2 - 0xb];
        }
        else {
          param_1 = 2;
        }
        goto LAB_18028c802;
      }
    }
    else {
      param_1 = 2;
    }
  }
  bVar2 = param_1;
LAB_18028c802:
  uVar1 = 0;
  do {
    if ((&DAT_1807d1130)[uVar1] == param_1) {
      if ((int)uVar1 != -1) {
        bVar2 = 2;
      }
      return bVar2;
    }
    uVar1 = uVar1 + 1;
  } while (uVar1 < 3);
  return bVar2;
}



