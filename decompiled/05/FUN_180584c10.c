// FUN_180584c10 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180584c10 */

void FUN_180584c10(longlong param_1,int param_2,longlong param_3,int param_4)

{
  byte *pbVar1;
  int iVar2;
  int iVar3;
  byte *pbVar4;
  int iVar5;
  int iVar6;
  byte *pbVar7;
  int iVar8;
  uint uVar9;
  byte *pbVar10;
  byte *pbVar11;
  uint uVar12;
  longlong lVar13;
  int iVar14;
  
  lVar13 = (longlong)param_4 * 0x898 + param_1;
  pbVar4 = *(byte **)(lVar13 + 0x50);
  if (pbVar4 == (byte *)0x0) {
    pbVar7 = (byte *)0x0;
  }
  else {
    pbVar7 = pbVar4 + (ulonglong)*(uint *)(lVar13 + 0x48) * 0x48;
  }
  if (param_2 == 0) {
    iVar6 = 0;
  }
  else {
    iVar6 = *(int *)(param_3 + (ulonglong)(param_2 - 1) * 0xc);
  }
  iVar2 = *(int *)(*(longlong *)(param_1 + 0x1180) + 0x40);
  iVar14 = iVar2 * 8;
  iVar14 = (int)((iVar14 >> 0x1f & 0x7ffU) + iVar14) >> 0xb;
  if (iVar14 == 0) {
    iVar14 = 1;
  }
  iVar2 = iVar2 * 6000;
  iVar2 = (iVar2 >> 0x1f & 0x7ffU) + iVar2;
  if (pbVar4 < pbVar7) {
    pbVar11 = pbVar4 + 1;
    do {
      uVar12 = (uint)(char)*pbVar11;
      if (uVar12 == *(uint *)(lVar13 + 0x68)) {
        pbVar10 = pbVar4 + 2;
        do {
          uVar9 = uVar12 & 0xff;
          if ((int)(char)pbVar10[-1] + (int)(char)uVar12 == 0) {
            if ((int)*(short *)(pbVar11 + 1) < (int)*(short *)pbVar10) {
              iVar8 = (int)*(short *)(pbVar10 + 6);
              if ((int)*(short *)(pbVar11 + 7) <= (int)*(short *)(pbVar10 + 6)) {
                iVar8 = (int)*(short *)(pbVar11 + 7);
              }
              iVar5 = (int)*(short *)(pbVar10 + 4);
              if ((int)*(short *)(pbVar10 + 4) <= (int)*(short *)(pbVar11 + 5)) {
                iVar5 = (int)*(short *)(pbVar11 + 5);
              }
              uVar9 = uVar12 & 0xff;
              if (iVar14 <= iVar8 - iVar5) {
                iVar3 = (int)*(short *)pbVar10 - (int)*(short *)(pbVar11 + 1);
                if (iVar6 != 0) {
                  iVar3 = (iVar3 * 0x400) / iVar6 + -0x400;
                  if (iVar3 < 0x2711) {
                    if (iVar3 < 1) {
                      iVar3 = 0;
                    }
                    else {
                      iVar3 = (iVar3 * iVar3) / 3000;
                    }
                  }
                  else {
                    iVar3 = 32000;
                  }
                  uVar9 = (uint)*pbVar11;
                }
                iVar3 = (int)(CONCAT44(iVar2 >> 0x1f,iVar2 >> 0xb) / (longlong)(iVar8 - iVar5)) +
                        iVar3;
                if (iVar3 < *(int *)(pbVar11 + 0x2f)) {
                  uVar9 = (uint)*pbVar11;
                  *(byte **)(pbVar11 + 0x1f) = pbVar10 + -2;
                  *(int *)(pbVar11 + 0x2f) = iVar3;
                }
                if (iVar3 < *(int *)(pbVar10 + 0x2e)) {
                  *(int *)(pbVar10 + 0x2e) = iVar3;
                  *(byte **)(pbVar10 + 0x1e) = pbVar11 + -1;
                  uVar9 = (uint)*pbVar11;
                }
              }
            }
          }
          uVar12 = uVar9;
          pbVar1 = pbVar10 + 0x46;
          pbVar10 = pbVar10 + 0x48;
        } while (pbVar1 < pbVar7);
      }
      pbVar10 = pbVar11 + 0x47;
      pbVar11 = pbVar11 + 0x48;
    } while (pbVar10 < pbVar7);
    pbVar4 = pbVar4 + 0x20;
    do {
      lVar13 = *(longlong *)pbVar4;
      if ((lVar13 != 0) && (*(byte **)(lVar13 + 0x20) != pbVar4 + -0x20)) {
        pbVar4[0] = 0;
        pbVar4[1] = 0;
        pbVar4[2] = 0;
        pbVar4[3] = 0;
        pbVar4[4] = 0;
        pbVar4[5] = 0;
        pbVar4[6] = 0;
        pbVar4[7] = 0;
        *(undefined8 *)(pbVar4 + 8) = *(undefined8 *)(lVar13 + 0x20);
      }
      pbVar11 = pbVar4 + 0x28;
      pbVar4 = pbVar4 + 0x48;
    } while (pbVar11 < pbVar7);
  }
  return;
}



