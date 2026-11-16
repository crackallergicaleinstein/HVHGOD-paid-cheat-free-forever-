// FUN_180592550 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180592550 */

longlong FUN_180592550(longlong param_1,uint *param_2)

{
  undefined8 uVar1;
  byte bVar2;
  byte bVar3;
  longlong lVar4;
  byte *pbVar5;
  byte *pbVar6;
  uint uVar7;
  short sVar8;
  uint uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  uint uVar12;
  ulonglong uVar13;
  int local_res8 [2];
  
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  sVar8 = 0;
  *param_2 = 0;
  bVar2 = FUN_180577e10();
  uVar9 = (uint)bVar2;
  if (bVar2 == 0) {
    lVar4 = -1;
  }
  else {
    if ((char)bVar2 < '\0') {
      bVar3 = FUN_180577e10(param_1);
      uVar9 = (bVar2 & 0x7f) << 8 | (uint)bVar3;
    }
    lVar4 = FUN_18057ac40(uVar1,2,0,uVar9,0,local_res8);
    if (local_res8[0] == 0) {
      pbVar5 = *(byte **)(param_1 + 0x38);
      uVar10 = 0;
      if (uVar9 != 0) {
        do {
          if (*(byte **)(param_1 + 0x40) <= pbVar5) {
LAB_1805926b0:
            FUN_18057abd0(uVar1,lVar4);
            goto LAB_1805926bb;
          }
          bVar2 = *pbVar5;
          pbVar5 = pbVar5 + 1;
          uVar12 = uVar9 - (int)uVar10;
          uVar7 = (bVar2 & 0x7f) + 1;
          if (uVar7 <= uVar12) {
            uVar12 = uVar7;
          }
          uVar7 = (int)*(byte **)(param_1 + 0x40) - (int)pbVar5;
          if ((char)bVar2 < '\0') {
            if (uVar7 < uVar12 * 2) goto LAB_1805926b0;
            if (uVar12 != 0) {
              uVar13 = (ulonglong)uVar12;
              pbVar6 = pbVar5;
              uVar11 = uVar10;
              do {
                pbVar5 = pbVar6 + 2;
                sVar8 = sVar8 + CONCAT11(*pbVar6,pbVar6[1]);
                uVar10 = (ulonglong)((int)uVar11 + 1);
                *(short *)(lVar4 + uVar11 * 2) = sVar8;
                uVar13 = uVar13 - 1;
                pbVar6 = pbVar5;
                uVar11 = uVar10;
              } while (uVar13 != 0);
            }
          }
          else {
            if (uVar7 < uVar12) goto LAB_1805926b0;
            if (uVar12 != 0) {
              uVar13 = (ulonglong)uVar12;
              uVar11 = uVar10;
              do {
                bVar2 = *pbVar5;
                pbVar5 = pbVar5 + 1;
                sVar8 = sVar8 + (ushort)bVar2;
                uVar10 = (ulonglong)((int)uVar11 + 1);
                *(short *)(lVar4 + uVar11 * 2) = sVar8;
                uVar13 = uVar13 - 1;
                uVar11 = uVar10;
              } while (uVar13 != 0);
            }
          }
        } while ((uint)uVar10 < uVar9);
      }
      *(byte **)(param_1 + 0x38) = pbVar5;
      *param_2 = uVar9;
    }
    else {
LAB_1805926bb:
      lVar4 = 0;
    }
  }
  return lVar4;
}



