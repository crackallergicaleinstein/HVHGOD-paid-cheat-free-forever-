// FUN_1806058b4 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1806058b4 */

longlong FUN_1806058b4(byte *param_1,byte *param_2,longlong param_3,int param_4,char param_5)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  undefined4 uVar4;
  int iVar5;
  code *pcVar6;
  uint uVar7;
  uint uVar8;
  byte *pbVar9;
  byte *pbVar10;
  
  bVar2 = *param_1;
  pbVar10 = param_1 + 1;
  *param_2 = bVar2;
  if ((bVar2 & 4) != 0) {
    bVar3 = *pbVar10;
    pbVar10 = pbVar10 + -(longlong)(char)(&DAT_1806acfc0)[bVar3 & 0xf];
    *(uint *)(param_2 + 4) = *(uint *)(pbVar10 + -4) >> ((&DAT_1806acfd0)[bVar3 & 0xf] & 0x1f);
  }
  if ((bVar2 & 8) != 0) {
    uVar4 = *(undefined4 *)pbVar10;
    pbVar10 = pbVar10 + 4;
    *(undefined4 *)(param_2 + 8) = uVar4;
  }
  if ((bVar2 & 0x10) != 0) {
    uVar4 = *(undefined4 *)pbVar10;
    pbVar10 = pbVar10 + 4;
    *(undefined4 *)(param_2 + 0xc) = uVar4;
  }
  uVar8 = 0;
  pbVar9 = pbVar10 + 4;
  if ((param_5 == '\0') && ((bVar2 & 2) != 0)) {
    param_2[0x10] = 0;
    param_2[0x11] = 0;
    param_2[0x12] = 0;
    param_2[0x13] = 0;
    if (*(int *)pbVar10 == 0) {
      pcVar6 = (code *)swi(0x29);
      (*pcVar6)(7);
    }
    else {
      uVar7 = *(byte *)(param_3 + *(int *)pbVar10) & 0xf;
      pbVar10 = (byte *)(param_3 + *(int *)pbVar10) + -(longlong)(char)(&DAT_1806acfc0)[uVar7];
      uVar7 = *(uint *)(pbVar10 + -4) >> ((&DAT_1806acfd0)[uVar7] & 0x1f);
      if (uVar7 != 0) {
        do {
          iVar5 = *(int *)pbVar10;
          pbVar1 = pbVar10 + 4;
          pbVar10 = pbVar10 + 8;
          if (iVar5 == param_4) {
            *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)pbVar1;
            break;
          }
          uVar8 = uVar8 + 1;
        } while (uVar8 < uVar7);
      }
    }
  }
  else {
    *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)pbVar10;
  }
  if ((bVar2 & 1) != 0) {
    bVar2 = *pbVar9;
    pbVar9 = pbVar9 + -(longlong)(char)(&DAT_1806acfc0)[bVar2 & 0xf];
    *(uint *)(param_2 + 0x14) = *(uint *)(pbVar9 + -4) >> ((&DAT_1806acfd0)[bVar2 & 0xf] & 0x1f);
  }
  return (longlong)pbVar9 - (longlong)param_1;
}



