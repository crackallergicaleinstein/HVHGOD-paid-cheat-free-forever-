// FUN_1805a6ea0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805a6ea0 */

ulonglong FUN_1805a6ea0(longlong param_1,longlong param_2,int param_3,int param_4,uint param_5)

{
  ushort uVar1;
  char *pcVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  longlong lVar7;
  int *piVar8;
  int *piVar9;
  uint uVar10;
  ulonglong uVar11;
  uint uVar12;
  longlong lVar13;
  
  uVar6 = FUN_1805788b0(param_2,param_3 + param_4);
  if ((int)uVar6 == 0) {
    uVar6 = FUN_180577bf0(param_2,(ulonglong)param_5);
    if ((int)uVar6 == 0) {
      pcVar2 = *(char **)(param_2 + 0x38);
      if ((param_5 == 0) || ((char)uVar6 <= *pcVar2)) {
        uVar5 = FUN_1805a70e0(param_1,pcVar2,pcVar2 + param_5);
        FUN_180577d30(param_2);
        return (ulonglong)uVar5;
      }
      lVar3 = *(longlong *)(param_1 + 0x28);
      uVar5 = *(uint *)(param_1 + 0x18);
      uVar4 = FUN_1805a6bf0(param_1);
      FUN_180577d30(param_2);
      if (uVar4 == 0) {
        uVar10 = 0;
        uVar4 = *(uint *)(param_1 + 0x18);
        if (uVar4 == uVar5) {
          uVar6 = 0;
        }
        else {
          lVar13 = 0;
          do {
            lVar7 = (ulonglong)uVar5 + lVar13;
            uVar1 = *(ushort *)(lVar3 + 0x1a);
            uVar6 = FUN_1805a6ea0(param_1,param_2,param_3,
                                  *(undefined4 *)
                                   (*(longlong *)(param_1 + 0x20) + 0x10 + lVar7 * 0x18),
                                  *(undefined4 *)
                                   (*(longlong *)(param_1 + 0x20) + 0x14 + lVar7 * 0x18));
            if ((int)uVar6 != 0) {
              return uVar6;
            }
            piVar9 = (int *)(*(longlong *)(param_1 + 0x20) + lVar7 * 0x18);
            uVar12 = (uint)*(ushort *)(lVar3 + 0x1a) - (uint)uVar1;
            if ((*piVar9 == 0x10000) && (piVar9[1] == 0x10000)) {
              if (0 < (int)uVar12) {
                uVar11 = (ulonglong)uVar12;
                piVar8 = (int *)(*(longlong *)(lVar3 + 0x20) + (ulonglong)uVar1 * 8);
                do {
                  *piVar8 = *piVar8 + piVar9[2];
                  piVar8[1] = piVar8[1] + piVar9[3];
                  uVar11 = uVar11 - 1;
                  piVar8 = piVar8 + 2;
                } while (uVar11 != 0);
              }
            }
            else if (0 < (int)uVar12) {
              uVar11 = (ulonglong)uVar12;
              piVar8 = (int *)(*(longlong *)(lVar3 + 0x20) + (ulonglong)uVar1 * 8);
              do {
                *piVar8 = (int)((ulonglong)
                                ((longlong)*piVar9 * (longlong)*piVar8 +
                                ((longlong)*piVar9 * (longlong)*piVar8 >> 0x3f) + 0x8000) >> 0x10) +
                          piVar9[2];
                piVar8[1] = (int)((ulonglong)
                                  ((longlong)piVar8[1] * (longlong)piVar9[1] + 0x8000 +
                                  ((longlong)piVar8[1] * (longlong)piVar9[1] >> 0x3f)) >> 0x10) +
                            piVar9[3];
                uVar11 = uVar11 - 1;
                piVar8 = piVar8 + 2;
              } while (uVar11 != 0);
            }
            uVar6 = uVar6 & 0xffffffff;
            uVar10 = uVar10 + 1;
            lVar13 = lVar13 + 1;
          } while (uVar10 < uVar4 - uVar5);
        }
      }
      else {
        uVar6 = (ulonglong)uVar4;
      }
    }
  }
  return uVar6;
}



