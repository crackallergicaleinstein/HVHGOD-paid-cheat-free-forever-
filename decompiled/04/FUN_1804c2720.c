// FUN_1804c2720 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804c2720 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1804c2720(longlong param_1,float *param_2)

{
  ulonglong *puVar1;
  float *pfVar2;
  uint uVar3;
  float local_28 [4];
  ulonglong local_18 [3];
  
  pfVar2 = local_28;
  local_18[0] = DAT_1808d5f00 ^ (ulonglong)local_28;
  local_28[0] = *param_2 - *(float *)(param_1 + 0x128);
  local_28[1] = param_2[1] - *(float *)(param_1 + 300);
  local_28[3] = param_2[3] - *(float *)(param_1 + 300);
  local_28[2] = param_2[2] - *(float *)(param_1 + 0x128);
  uVar3 = ~*(uint *)(*(longlong *)(param_1 + 0x110) + -4 + (longlong)*(int *)(param_1 + 0x108) * 4);
  do {
    uVar3 = crc32(uVar3,(int)*(ulonglong *)pfVar2);
    puVar1 = (ulonglong *)((longlong)pfVar2 + 8);
    pfVar2 = (float *)((longlong)pfVar2 + 4);
  } while (puVar1 <= local_18);
  if (pfVar2 < local_18) {
    do {
      uVar3 = crc32(uVar3,(char)*(ulonglong *)pfVar2);
      pfVar2 = (float *)((longlong)pfVar2 + 1);
    } while (pfVar2 < local_18);
  }
}



