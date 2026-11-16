// FUN_1805b3160 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805b3160 */

void FUN_1805b3160(ulonglong param_1,ulonglong param_2,ushort param_3)

{
  byte bVar1;
  ulonglong uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = 0;
  uVar2 = param_1 + param_2;
  uVar3 = (uint)param_3;
  if (param_1 == 0) {
    uVar2 = 0;
  }
  if (param_1 < uVar2) {
    uVar2 = (ulonglong)(uint)((int)uVar2 - (int)param_1);
    if (uVar2 < param_2) {
      param_2 = uVar2;
    }
    if (param_2 != 0) {
      uVar2 = 0;
      do {
        bVar1 = *(byte *)(uVar2 + param_1);
        uVar4 = uVar4 + 1;
        *(byte *)(uVar2 + param_1) = (byte)(uVar3 >> 8) ^ bVar1;
        uVar2 = (ulonglong)uVar4;
        uVar3 = (bVar1 + uVar3) * -0x3193 + 0x58bf & 0xffff;
      } while (uVar2 < param_2);
    }
  }
  return;
}



