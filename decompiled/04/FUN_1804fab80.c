// FUN_1804fab80 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804fab80 */

void FUN_1804fab80(longlong param_1,int *param_2)

{
  undefined1 auVar1 [16];
  short sVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iStack_1c;
  
  if ((short)param_2[0x28e] != 0) {
    auVar1 = *(undefined1 (*) [16])(param_2 + (longlong)(short)param_2[0x28e] * 4 + 4);
    sVar2 = *(short *)((longlong)param_2 + 0xa3a);
    iVar7 = auVar1._8_4_;
    param_2[(longlong)sVar2 * 4 + 7] = -1;
    param_2[(longlong)sVar2 * 4 + 5] = iVar7;
    iVar3 = auVar1._4_4_;
    param_2[(longlong)sVar2 * 4 + 6] = iVar3;
    iVar9 = auVar1._0_4_;
    param_2[(longlong)sVar2 * 4 + 4] = iVar9;
    if (iVar7 != 0) {
      if (param_2[0x28f] + iVar7 < 999) {
        iVar5 = param_2[0x290];
        if (iVar5 < param_2[0x28f] + iVar7) {
          do {
            if (*(short *)((longlong)param_2 + 0xa3a) == 99) {
              return;
            }
            if (*(short *)((longlong)param_2 + 0xa3a) < 99) {
              if (-1 < param_2[0x193]) {
                iVar8 = param_2[0x191];
                iVar5 = iVar5 + iVar8;
                param_2[0x290] = iVar5;
                FUN_18063aed0((longlong)param_2 + (longlong)iVar5 + 0x650,
                              ((longlong)iVar5 - (longlong)iVar8) + 0x650 + (longlong)param_2,
                              (longlong)(999 - iVar5));
                lVar6 = (longlong)*(short *)((longlong)param_2 + 0xa3a);
                if (lVar6 < 0x62) {
                  piVar4 = param_2 + lVar6 * 4 + 0xb;
                  lVar6 = 0x62 - lVar6;
                  do {
                    if (-1 < *piVar4) {
                      *piVar4 = *piVar4 + iVar8;
                    }
                    piVar4 = piVar4 + 4;
                    lVar6 = lVar6 + -1;
                  } while (lVar6 != 0);
                }
              }
              FUN_18063aed0(param_2 + (longlong)*(short *)((longlong)param_2 + 0xa3a) * 4 + 8 + 4,
                            param_2 + (longlong)*(short *)((longlong)param_2 + 0xa3a) * 4 + 8,
                            (longlong)(0x62 - *(short *)((longlong)param_2 + 0xa3a)) << 4);
              *(short *)((longlong)param_2 + 0xa3a) = *(short *)((longlong)param_2 + 0xa3a) + 1;
            }
            iVar5 = param_2[0x290];
          } while (iVar5 < param_2[0x28f] + iVar7);
        }
        sVar2 = *(short *)((longlong)param_2 + 0xa3a);
        iVar8 = 0;
        param_2[(longlong)sVar2 * 4 + 7] = iVar5 - iVar7;
        param_2[0x290] = param_2[0x290] - iVar7;
        if (0 < iVar7) {
          lVar6 = (longlong)iVar9;
          do {
            iVar5 = param_2[(longlong)sVar2 * 4 + 7] + iVar8;
            iVar8 = iVar8 + 1;
            *(undefined1 *)((longlong)iVar5 + 0x650 + (longlong)param_2) =
                 *(undefined1 *)(lVar6 + *(longlong *)(param_1 + 0x20));
            lVar6 = lVar6 + 1;
          } while (iVar8 < iVar7);
        }
      }
      else {
        param_2[(longlong)sVar2 * 4 + 5] = 0;
      }
      lVar6 = (longlong)iVar9 + *(longlong *)(param_1 + 0x30);
      FUN_18063aed0(lVar6,iVar7 + lVar6,(longlong)(((*(int *)(param_1 + 0x18) - iVar9) - iVar7) + 1)
                   );
      *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) - iVar7;
      *(undefined2 *)(param_1 + 0x73) = 0x101;
    }
    iVar7 = 0;
    if (iVar3 != 0) {
      iStack_1c = auVar1._12_4_;
      iVar7 = FUN_1804f9170(param_1,auVar1._0_8_ & 0xffffffff,
                            (longlong)iStack_1c + 0x650 + (longlong)param_2,iVar3);
      param_2[0x28f] = param_2[0x28f] - iVar7;
    }
    *param_2 = iVar9 + iVar7;
    *(short *)(param_2 + 0x28e) = (short)param_2[0x28e] + -1;
    *(short *)((longlong)param_2 + 0xa3a) = *(short *)((longlong)param_2 + 0xa3a) + -1;
  }
  return;
}



