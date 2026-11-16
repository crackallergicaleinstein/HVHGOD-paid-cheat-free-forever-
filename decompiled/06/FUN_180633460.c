// FUN_180633460 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180633460 */

ulonglong FUN_180633460(byte *param_1,byte *param_2,ulonglong param_3)

{
  byte bVar1;
  byte bVar2;
  ulonglong uVar3;
  uint uVar4;
  uint uVar5;
  
  if (DAT_180bb2030 != 0) {
    uVar3 = FUN_1806334f0();
    return uVar3;
  }
  if (((param_1 == (byte *)0x0) || (param_2 == (byte *)0x0)) || (0x7fffffff < param_3)) {
    uVar3 = FUN_180633420();
    return uVar3;
  }
  if (param_3 == 0) {
    return 0;
  }
  while( true ) {
    bVar1 = *param_1;
    uVar4 = (uint)bVar1;
    param_1 = param_1 + 1;
    bVar2 = *param_2;
    uVar5 = (uint)bVar2;
    param_2 = param_2 + 1;
    if ((uint)bVar1 != (uint)bVar2) {
      uVar4 = bVar1 + 0x20;
      if (0x19 < bVar1 - 0x41) {
        uVar4 = (uint)bVar1;
      }
      if (bVar2 - 0x41 < 0x1a) {
        uVar5 = bVar2 + 0x20;
      }
    }
    uVar3 = (ulonglong)(uVar4 - uVar5);
    if ((uVar4 - uVar5 != 0) || (uVar4 == 0)) break;
    param_3 = param_3 - 1;
    if (param_3 == 0) {
      return uVar3;
    }
  }
  return uVar3;
}



