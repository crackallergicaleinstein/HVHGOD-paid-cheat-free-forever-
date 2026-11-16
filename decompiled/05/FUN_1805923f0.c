// FUN_1805923f0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805923f0 */

longlong FUN_1805923f0(longlong param_1,uint param_2)

{
  byte bVar1;
  undefined8 uVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  ulonglong uVar6;
  uint uVar7;
  byte *pbVar8;
  byte *pbVar9;
  ulonglong uVar10;
  int local_res8 [2];
  
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  lVar4 = FUN_18057ac40(uVar2,4,0,param_2,0,local_res8);
  if (local_res8[0] == 0) {
    pbVar8 = *(byte **)(param_1 + 0x38);
    uVar3 = 0;
    if (param_2 != 0) {
      do {
        if (*(byte **)(param_1 + 0x40) <= pbVar8) goto LAB_18059253c;
        bVar1 = *pbVar8;
        pbVar8 = pbVar8 + 1;
        uVar5 = (bVar1 & 0x3f) + 1;
        uVar7 = param_2 - uVar3;
        if (uVar5 <= param_2 - uVar3) {
          uVar7 = uVar5;
        }
        if ((char)bVar1 < '\0') {
          if (uVar7 != 0) {
            uVar10 = (ulonglong)uVar7;
            do {
              uVar6 = (ulonglong)uVar3;
              uVar3 = uVar3 + 1;
              *(undefined4 *)(lVar4 + uVar6 * 4) = 0;
              uVar10 = uVar10 - 1;
            } while (uVar10 != 0);
          }
        }
        else {
          uVar5 = (int)*(byte **)(param_1 + 0x40) - (int)pbVar8;
          if ((bVar1 & 0x40) == 0) {
            if (uVar5 < uVar7) goto LAB_18059253c;
            if (uVar7 != 0) {
              uVar10 = (ulonglong)uVar7;
              do {
                bVar1 = *pbVar8;
                pbVar8 = pbVar8 + 1;
                uVar6 = (ulonglong)uVar3;
                uVar3 = uVar3 + 1;
                *(int *)(lVar4 + uVar6 * 4) = (int)(char)bVar1 << 0x10;
                uVar10 = uVar10 - 1;
              } while (uVar10 != 0);
            }
          }
          else {
            if (uVar5 < uVar7 * 2) {
LAB_18059253c:
              FUN_18057abd0(uVar2,lVar4);
              goto LAB_180592547;
            }
            if (uVar7 != 0) {
              uVar10 = (ulonglong)uVar7;
              pbVar9 = pbVar8;
              do {
                pbVar8 = pbVar9 + 2;
                uVar6 = (ulonglong)uVar3;
                uVar3 = uVar3 + 1;
                *(uint *)(lVar4 + uVar6 * 4) =
                     ((int)(short)((ushort)*pbVar9 << 8) | (uint)pbVar9[1]) << 0x10;
                uVar10 = uVar10 - 1;
                pbVar9 = pbVar8;
              } while (uVar10 != 0);
            }
          }
        }
      } while (uVar3 < param_2);
    }
    *(byte **)(param_1 + 0x38) = pbVar8;
  }
  else {
LAB_180592547:
    lVar4 = 0;
  }
  return lVar4;
}



