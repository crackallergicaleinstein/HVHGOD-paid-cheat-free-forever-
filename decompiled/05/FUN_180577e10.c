// FUN_180577e10 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180577e10 */

ulonglong FUN_180577e10(longlong param_1)

{
  byte bVar1;
  byte *pbVar2;
  
  pbVar2 = *(byte **)(param_1 + 0x38);
  if (pbVar2 < *(byte **)(param_1 + 0x40)) {
    bVar1 = *pbVar2;
    *(byte **)(param_1 + 0x38) = pbVar2 + 1;
    return (ulonglong)bVar1;
  }
  return (ulonglong)pbVar2 & 0xffffffffffffff00;
}



