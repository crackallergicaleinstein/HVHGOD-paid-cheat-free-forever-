// FUN_1805cdbf0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805cdbf0 */

byte * FUN_1805cdbf0(longlong param_1,undefined8 param_2)

{
  ushort uVar1;
  byte bVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte *pbVar5;
  uint uVar6;
  int local_res8 [2];
  
  uVar1 = *(ushort *)(param_1 + 8);
  pbVar5 = *(byte **)(param_1 + 0x10);
  uVar6 = 0;
  pbVar3 = (byte *)FUN_18057ac40(param_2,1,0,uVar1 + 1,0,local_res8);
  if (local_res8[0] != 0) {
    return (byte *)0x0;
  }
  if (uVar1 != 0) {
    pbVar4 = pbVar3;
    do {
      bVar2 = *pbVar5;
      pbVar5 = pbVar5 + 1;
      if (bVar2 == 0) break;
      if (0x5f < bVar2 - 0x20) {
        bVar2 = 0x3f;
      }
      uVar6 = uVar6 + 1;
      *pbVar4 = bVar2;
      pbVar4 = pbVar4 + 1;
    } while (uVar6 < uVar1);
  }
  pbVar3[uVar6] = 0;
  return pbVar3;
}



