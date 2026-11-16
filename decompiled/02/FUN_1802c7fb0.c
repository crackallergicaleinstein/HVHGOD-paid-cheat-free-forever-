// FUN_1802c7fb0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802c7fb0 */

uint FUN_1802c7fb0(longlong *param_1)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  byte *pbVar4;
  byte *pbVar5;
  uint uVar6;
  uint uVar7;
  byte *pbVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  
  pbVar4 = (byte *)param_1[1];
  if (pbVar4 == (byte *)0x0) {
    return 0;
  }
  uVar12 = 0;
  pbVar5 = (byte *)0x0;
  uVar9 = (uint)pbVar4 ^ 0x31415926;
  if ((byte *)0x3 < pbVar4) {
    pbVar8 = (byte *)(*param_1 + 2);
    do {
      bVar2 = pbVar8[-1];
      bVar3 = pbVar8[-2];
      pbVar1 = pbVar8 + 4;
      uVar6 = bVar2 + 0x20;
      if (0x19 < (byte)(bVar2 + 0xbf)) {
        uVar6 = (uint)bVar2;
      }
      uVar7 = bVar3 + 0x20;
      if (0x19 < (byte)(bVar3 + 0xbf)) {
        uVar7 = (uint)bVar3;
      }
      bVar2 = *pbVar8;
      uVar11 = bVar2 + 0x20;
      if (0x19 < (byte)(bVar2 + 0xbf)) {
        uVar11 = (uint)bVar2;
      }
      bVar2 = pbVar8[1];
      uVar10 = bVar2 + 0x20;
      if (0x19 < (byte)(bVar2 + 0xbf)) {
        uVar10 = (uint)bVar2;
      }
      pbVar5 = pbVar5 + 4;
      uVar6 = (uVar10 << 0x18 | uVar11 << 0x10 | uVar6 << 8 | uVar7) * 0x5bd1e995;
      uVar9 = uVar9 * 0x5bd1e995 ^ (uVar6 >> 0x18 ^ uVar6) * 0x5bd1e995;
      pbVar8 = pbVar1;
    } while (pbVar1 + (2 - *param_1) <= pbVar4);
  }
  if (pbVar5 < pbVar4) {
    uVar6 = 0;
    do {
      bVar2 = pbVar5[*param_1];
      uVar7 = bVar2 + 0x20;
      if (0x19 < (byte)(bVar2 + 0xbf)) {
        uVar7 = (uint)bVar2;
      }
      pbVar5 = pbVar5 + 1;
      uVar12 = uVar12 | uVar7 << (uVar6 & 0x1f);
      uVar6 = uVar6 + 8;
    } while (pbVar5 < pbVar4);
    uVar9 = (uVar12 ^ uVar9) * 0x5bd1e995;
  }
  uVar9 = (uVar9 >> 0xd ^ uVar9) * 0x5bd1e995;
  return uVar9 >> 0xf ^ uVar9;
}



