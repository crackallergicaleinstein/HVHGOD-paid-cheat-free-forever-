// FUN_1805ac140 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805ac140 */

int FUN_1805ac140(longlong param_1,longlong *param_2,uint param_3,uint param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  uint uVar3;
  int iVar4;
  uint *puVar5;
  ushort *puVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  byte *pbVar10;
  ulonglong uVar11;
  short *psVar12;
  
  lVar1 = *param_2;
  iVar4 = 0;
  if (lVar1 == 0) {
    iVar4 = 0x23;
  }
  else if (param_3 < *(uint *)(lVar1 + 0x10)) {
    uVar2 = *(undefined8 *)(lVar1 + 0xa0);
    psVar12 = (short *)((ulonglong)param_3 * 0x10 + *(longlong *)(lVar1 + 0x1b0));
    *(int *)(param_1 + 0x68) = (int)psVar12[4] + (int)psVar12[3];
    iVar9 = (int)psVar12[1] - (int)*psVar12;
    *(undefined2 *)(param_1 + 0x80) = 1;
    *(int *)(param_1 + 0x6c) = iVar9;
    *(undefined1 *)(param_1 + 0x82) = 1;
    iVar7 = 1 << ((byte)*(undefined4 *)(lVar1 + 0x1d0) & 3);
    if (iVar7 == 1) {
      uVar3 = iVar9 + 7U >> 3;
    }
    else if (iVar7 == 2) {
      uVar3 = iVar9 + 0xfU >> 3 & 0x1ffffffe;
    }
    else if (iVar7 == 4) {
      uVar3 = iVar9 + 0x1fU >> 3 & 0x1ffffffc;
    }
    else {
      if (iVar7 != 8) {
        return 3;
      }
      uVar3 = iVar9 + 0x3fU >> 3 & 0x1ffffff8;
    }
    *(uint *)(param_1 + 0x70) = uVar3;
    *(undefined4 *)(param_1 + 0x60) = 0x62697473;
    *(int *)(param_1 + 0x90) = (int)*psVar12;
    *(int *)(param_1 + 0x94) = (int)psVar12[3];
    *(int *)(param_1 + 0x40) = (int)psVar12[2] << 6;
    *(int *)(param_1 + 0x38) = (int)*psVar12 << 6;
    *(int *)(param_1 + 0x3c) = (int)psVar12[3] << 6;
    *(int *)(param_1 + 0x30) = ((int)psVar12[1] - (int)*psVar12) * 0x40;
    *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x68) << 6;
    FUN_18057bc10((int *)(param_1 + 0x30),(*(int *)(lVar1 + 0x154) + *(int *)(lVar1 + 0x150)) * 0x40
                 );
    if ((param_4 >> 0x16 & 1) == 0) {
      uVar3 = *(int *)(param_1 + 0x68) * *(int *)(param_1 + 0x70);
      iVar4 = FUN_180579c50(param_1);
      if (((iVar4 == 0) && (iVar4 = FUN_1805788b0(uVar2,*(undefined4 *)(psVar12 + 6)), iVar4 == 0))
         && (iVar4 = FUN_180578100(uVar2,*(undefined8 *)(param_1 + 0x78),uVar3), iVar4 == 0)) {
        if ((*(byte *)(lVar1 + 0x1d0) & 8) == 0) {
          pbVar10 = *(byte **)(param_1 + 0x78);
          uVar11 = (ulonglong)uVar3;
          if (uVar3 != 0) {
            do {
              uVar8 = *pbVar10 >> 1 & 0x55 | (*pbVar10 & 0x55) * 2;
              uVar8 = uVar8 >> 2 & 0x33 | (uVar8 & 0x33) << 2;
              *pbVar10 = (byte)(uVar8 >> 4) | (char)uVar8 << 4;
              uVar11 = uVar11 - 1;
              pbVar10 = pbVar10 + 1;
            } while (uVar11 != 0);
          }
        }
        uVar8 = *(uint *)(lVar1 + 0x1d0);
        if (((uVar8 >> 1 ^ uVar8) & 4) != 0) {
          iVar7 = 1 << ((byte)(uVar8 >> 4) & 3);
          if (iVar7 == 2) {
            if (1 < uVar3) {
              uVar11 = (ulonglong)(uVar3 >> 1);
              puVar6 = *(ushort **)(param_1 + 0x78);
              do {
                *puVar6 = *puVar6 >> 8 | *puVar6 << 8;
                uVar11 = uVar11 - 1;
                puVar6 = puVar6 + 1;
              } while (uVar11 != 0);
            }
          }
          else if ((iVar7 == 4) && (3 < uVar3)) {
            uVar11 = (ulonglong)(uVar3 >> 2);
            puVar5 = *(uint **)(param_1 + 0x78);
            do {
              uVar3 = *puVar5;
              *puVar5 = uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 |
                        uVar3 << 0x18;
              uVar11 = uVar11 - 1;
              puVar5 = puVar5 + 1;
            } while (uVar11 != 0);
          }
        }
      }
    }
  }
  else {
    iVar4 = 6;
  }
  return iVar4;
}



