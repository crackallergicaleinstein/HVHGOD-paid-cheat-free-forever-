// FUN_1805d7f90 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805d7f90 */

uint FUN_1805d7f90(uint param_1,byte *param_2,uint param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  byte bVar3;
  uint uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  uVar6 = (ulonglong)param_3;
  if (param_2 == (byte *)0x0) {
    return 0;
  }
  param_1 = ~param_1;
  if (7 < uVar6) {
    uVar5 = (ulonglong)(param_3 >> 3);
    uVar6 = uVar6 + uVar5 * -8;
    do {
      uVar4 = param_1 >> 8 ^
              *(uint *)(&DAT_180686160 + (ulonglong)((*param_2 ^ param_1) & 0xff) * 4);
      uVar4 = uVar4 >> 8 ^ *(uint *)(&DAT_180686160 + (ulonglong)((param_2[1] ^ uVar4) & 0xff) * 4);
      uVar4 = uVar4 >> 8 ^ *(uint *)(&DAT_180686160 + (ulonglong)((param_2[2] ^ uVar4) & 0xff) * 4);
      uVar4 = uVar4 >> 8 ^ *(uint *)(&DAT_180686160 + (ulonglong)((param_2[3] ^ uVar4) & 0xff) * 4);
      uVar4 = uVar4 >> 8 ^ *(uint *)(&DAT_180686160 + (ulonglong)((param_2[4] ^ uVar4) & 0xff) * 4);
      pbVar1 = param_2 + 6;
      uVar4 = uVar4 >> 8 ^ *(uint *)(&DAT_180686160 + (ulonglong)((param_2[5] ^ uVar4) & 0xff) * 4);
      pbVar2 = param_2 + 7;
      param_2 = param_2 + 8;
      uVar4 = uVar4 >> 8 ^ *(uint *)(&DAT_180686160 + (ulonglong)((*pbVar1 ^ uVar4) & 0xff) * 4);
      param_1 = uVar4 >> 8 ^ *(uint *)(&DAT_180686160 + (ulonglong)((*pbVar2 ^ uVar4) & 0xff) * 4);
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  for (; uVar6 != 0; uVar6 = uVar6 - 1) {
    bVar3 = *param_2;
    param_2 = param_2 + 1;
    param_1 = param_1 >> 8 ^ *(uint *)(&DAT_180686160 + (ulonglong)((bVar3 ^ param_1) & 0xff) * 4);
  }
  return ~param_1;
}



