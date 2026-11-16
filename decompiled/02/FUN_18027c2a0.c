// FUN_18027c2a0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18027c2a0 */

longlong FUN_18027c2a0(longlong param_1)

{
  byte bVar1;
  byte local_res8 [32];
  
  bVar1 = *(byte *)(param_1 + 0x78);
  local_res8[0] = 0;
  local_res8[1] = 2;
  local_res8[2] = 3;
  local_res8[3] = 4;
  local_res8[4] = 5;
  local_res8[5] = 6;
  local_res8[6] = 8;
  local_res8[7] = 9;
  if (10 < bVar1) {
    if (bVar1 < 0x13) {
      return param_1 + ((ulonglong)local_res8[bVar1 - 0xb] * 3 + 0x20) * 4;
    }
    bVar1 = 2;
  }
  return param_1 + ((ulonglong)bVar1 * 3 + 0x20) * 4;
}



