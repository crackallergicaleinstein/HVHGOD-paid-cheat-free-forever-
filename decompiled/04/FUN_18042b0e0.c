// FUN_18042b0e0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18042b0e0 */

void FUN_18042b0e0(byte *param_1,uint param_2,uint param_3,int param_4)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  byte *pbVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  byte *pbVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong lVar11;
  
  if (0 < (int)param_3) {
    lVar11 = (longlong)param_4;
    uVar9 = (ulonglong)param_3;
    pbVar7 = param_1;
    do {
      if (0 < (int)param_2) {
        pbVar4 = pbVar7;
        uVar5 = (ulonglong)param_2;
        do {
          bVar1 = pbVar4[3];
          if (bVar1 != 0) {
            *pbVar4 = (byte)(((uint)*pbVar4 * 0xff) / (uint)bVar1);
            pbVar4[1] = (byte)(((uint)pbVar4[1] * 0xff) / (uint)bVar1);
            pbVar4[2] = (byte)(((uint)pbVar4[2] * 0xff) / (uint)bVar1);
          }
          pbVar4 = pbVar4 + 4;
          uVar5 = uVar5 - 1;
        } while (uVar5 != 0);
      }
      pbVar7 = pbVar7 + lVar11;
      uVar9 = uVar9 - 1;
    } while (uVar9 != 0);
    iVar2 = 0;
    do {
      pbVar7 = param_1 + iVar2 * param_4;
      if (0 < (int)param_2) {
        iVar3 = 1;
        uVar9 = (ulonglong)param_2;
        do {
          uVar6 = 0;
          uVar8 = 0;
          uVar10 = 0;
          uVar5 = 0;
          if (pbVar7[3] == 0) {
            if ((0 < iVar3 + -2) && (pbVar7[-1] != 0)) {
              uVar6 = (ulonglong)pbVar7[-4];
              uVar5 = 1;
              uVar8 = (ulonglong)pbVar7[-3];
              uVar10 = (ulonglong)pbVar7[-2];
            }
            if ((iVar3 < (int)param_2) && (pbVar7[7] != 0)) {
              uVar6 = (ulonglong)((int)uVar6 + (uint)pbVar7[4]);
              uVar8 = (ulonglong)((int)uVar8 + (uint)pbVar7[5]);
              uVar10 = (ulonglong)((int)uVar10 + (uint)pbVar7[6]);
              uVar5 = (ulonglong)((int)uVar5 + 1);
            }
            if ((0 < iVar2 + -1) && (pbVar7[3 - lVar11] != 0)) {
              uVar6 = (ulonglong)((int)uVar6 + (uint)pbVar7[-lVar11]);
              uVar8 = (ulonglong)((int)uVar8 + (uint)pbVar7[1 - lVar11]);
              uVar10 = (ulonglong)((int)uVar10 + (uint)pbVar7[2 - lVar11]);
              uVar5 = (ulonglong)((int)uVar5 + 1);
            }
            if ((iVar2 + 1 < (int)param_3) && (pbVar7[lVar11 + 3] != 0)) {
              uVar6 = (ulonglong)((int)uVar6 + (uint)pbVar7[lVar11]);
              uVar8 = (ulonglong)((int)uVar8 + (uint)pbVar7[lVar11 + 1]);
              uVar10 = (ulonglong)((int)uVar10 + (uint)pbVar7[lVar11 + 2]);
              uVar5 = (ulonglong)((int)uVar5 + 1);
            }
            if ((int)uVar5 != 0) {
              *pbVar7 = (byte)(uVar6 / uVar5);
              pbVar7[1] = (byte)(uVar8 / uVar5);
              pbVar7[2] = (byte)(uVar10 / uVar5);
            }
          }
          pbVar7 = pbVar7 + 4;
          iVar3 = iVar3 + 1;
          uVar9 = uVar9 - 1;
        } while (uVar9 != 0);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < (int)param_3);
  }
  return;
}



