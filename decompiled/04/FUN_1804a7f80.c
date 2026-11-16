// FUN_1804a7f80 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804a7f80 */

ulonglong FUN_1804a7f80(undefined8 *param_1,ulonglong param_2,ulonglong param_3)

{
  float *pfVar1;
  ulonglong uVar2;
  float fVar3;
  
  uVar2 = (ulonglong)*(uint *)param_1[1] ^ (param_2 & 0xffffffff) * -0x61c8864680b583eb;
  uVar2 = (uVar2 >> 0x1e ^ uVar2) * -0x40a7b892e31b1a47;
  uVar2 = (uVar2 >> 0x1b ^ uVar2) * -0x6b2fb644ecceee15;
  uVar2 = uVar2 >> 0x1f ^ uVar2;
  pfVar1 = (float *)FUN_1804b15a0(*(undefined8 *)*param_1,(uint)(uVar2 >> 0x20) ^ (uint)uVar2);
  if ((*(char *)param_1[2] == '\0') &&
     (*(char *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0xd3) == '\0')) {
    fVar3 = (float)FUN_180627ae0(*(float *)param_1[3] * -20.0);
    fVar3 = (1.0 - fVar3) * ((float)param_3 - *pfVar1) + *pfVar1;
    *pfVar1 = fVar3;
    return (ulonglong)(uint)fVar3;
  }
  *pfVar1 = (float)param_3;
  return param_3;
}



