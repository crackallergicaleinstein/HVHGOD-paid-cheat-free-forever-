// FUN_1804d2db0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804d2db0 */

uint FUN_1804d2db0(longlong param_1,uint param_2)

{
  longlong lVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  short sVar8;
  ushort uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  ushort uVar13;
  
  lVar1 = *(longlong *)(param_1 + 8);
  uVar7 = (ulonglong)*(uint *)(param_1 + 0x38);
  sVar8 = CONCAT11(*(undefined1 *)(uVar7 + lVar1),*(undefined1 *)(uVar7 + 1 + lVar1));
  if (sVar8 == 0) {
    if ((int)param_2 <
        (int)((uint)*(byte *)(uVar7 + 2 + lVar1) * 0x100 + (*(byte *)(uVar7 + 3 + lVar1) - 6))) {
      return (uint)*(byte *)(uVar7 + (longlong)(int)param_2 + 6 + lVar1);
    }
  }
  else if (sVar8 == 6) {
    uVar5 = (uint)CONCAT11(*(undefined1 *)(uVar7 + 6 + lVar1),*(undefined1 *)(uVar7 + 7 + lVar1));
    if ((uVar5 <= param_2) &&
       (param_2 < (uint)*(byte *)(uVar7 + 9 + lVar1) +
                  (uint)*(byte *)(uVar7 + 8 + lVar1) * 0x100 + uVar5)) {
      lVar3 = (param_2 - uVar5) * 2 + uVar7;
      return (uint)CONCAT11(*(undefined1 *)(lVar3 + 10 + lVar1),*(undefined1 *)(lVar3 + 0xb + lVar1)
                           );
    }
  }
  else if (sVar8 != 2) {
    if (sVar8 == 4) {
      uVar5 = *(uint *)(param_1 + 0x38) + 0xe;
      sVar8 = CONCAT11(*(undefined1 *)(uVar7 + 10 + lVar1),*(undefined1 *)(uVar7 + 0xb + lVar1));
      uVar13 = CONCAT11(*(undefined1 *)(uVar7 + 6 + lVar1),*(undefined1 *)(uVar7 + 7 + lVar1)) >> 1;
      uVar9 = CONCAT11(*(undefined1 *)(uVar7 + 8 + lVar1),*(undefined1 *)(uVar7 + 9 + lVar1)) >> 1;
      if ((int)param_2 < 0x10000) {
        uVar6 = (uint)(ushort)(CONCAT11(*(undefined1 *)(uVar7 + 0xc + lVar1),
                                        *(undefined1 *)(uVar7 + 0xd + lVar1)) >> 1) * 2;
        lVar3 = (ulonglong)uVar6 + (ulonglong)uVar5;
        uVar6 = uVar6 + uVar5;
        if ((int)param_2 <
            (int)(uint)CONCAT11(*(undefined1 *)(lVar3 + lVar1),*(undefined1 *)(lVar3 + 1 + lVar1)))
        {
          uVar6 = uVar5;
        }
        uVar6 = uVar6 - 2;
        for (; sVar8 != 0; sVar8 = sVar8 + -1) {
          uVar9 = uVar9 >> 1;
          lVar3 = (ulonglong)((uint)uVar9 * 2) + lVar1;
          uVar2 = (uint)uVar9 * 2 + uVar6;
          if ((int)param_2 <=
              (int)(uint)CONCAT11(*(undefined1 *)((ulonglong)uVar6 + lVar3),
                                  *(undefined1 *)((ulonglong)uVar6 + 1 + lVar3))) {
            uVar2 = uVar6;
          }
          uVar6 = uVar2;
        }
        lVar3 = (ulonglong)((uVar6 - uVar5) + 2 >> 1 & 0xffff) * 2;
        lVar4 = (ulonglong)((uint)uVar13 * 2) + lVar3 + uVar7;
        uVar6 = (uint)CONCAT11(*(undefined1 *)(lVar4 + 0x10 + lVar1),
                               *(undefined1 *)(lVar4 + 0x11 + lVar1));
        if (((int)uVar6 <= (int)param_2) &&
           ((int)param_2 <=
            (int)(uint)CONCAT11(*(undefined1 *)(lVar3 + (ulonglong)uVar5 + lVar1),
                                *(undefined1 *)(lVar3 + (ulonglong)uVar5 + 1 + lVar1)))) {
          lVar4 = (ulonglong)((uint)uVar13 * 6) + lVar3 + uVar7;
          uVar9 = CONCAT11(*(undefined1 *)(lVar4 + 0x10 + lVar1),
                           *(undefined1 *)(lVar4 + 0x11 + lVar1));
          if (uVar9 == 0) {
            lVar3 = (ulonglong)((uint)uVar13 * 4) + lVar3 + uVar7;
            return (uint)(ushort)(CONCAT11(*(undefined1 *)(lVar3 + 0x10 + lVar1),
                                           *(undefined1 *)(lVar3 + 0x11 + lVar1)) + (short)param_2);
          }
          lVar3 = (ulonglong)uVar9 +
                  (longlong)(int)((param_2 - uVar6) * 2) + (ulonglong)((uint)uVar13 * 6) + lVar3 +
                  uVar7;
          return (uint)CONCAT11(*(undefined1 *)(lVar3 + 0x10 + lVar1),
                                *(undefined1 *)(lVar3 + 0x11 + lVar1));
        }
      }
    }
    else if ((ushort)(sVar8 - 0xcU) < 2) {
      iVar12 = 0;
      iVar10 = CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)(uVar7 + 0xc + lVar1),
                                          *(undefined1 *)(uVar7 + 0xd + lVar1)),
                                 *(undefined1 *)(uVar7 + 0xe + lVar1)),
                        *(undefined1 *)(uVar7 + 0xf + lVar1));
      if (0 < iVar10) {
        do {
          iVar11 = (iVar10 - iVar12 >> 1) + iVar12;
          lVar3 = (longlong)(iVar11 * 0xc) + uVar7;
          uVar5 = (uint)*(byte *)(lVar3 + 0x11 + lVar1) * 0x10000 +
                  (uint)*(byte *)(lVar3 + 0x12 + lVar1) * 0x100 +
                  (uint)*(byte *)(lVar3 + 0x10 + lVar1) * 0x1000000 +
                  (uint)*(byte *)(lVar3 + 0x13 + lVar1);
          if (param_2 < uVar5) {
            iVar10 = iVar11;
          }
          else {
            if (param_2 <=
                (uint)*(byte *)(lVar3 + 0x15 + lVar1) * 0x10000 +
                (uint)*(byte *)(lVar3 + 0x16 + lVar1) * 0x100 +
                (uint)*(byte *)(lVar3 + 0x14 + lVar1) * 0x1000000 +
                (uint)*(byte *)(lVar3 + 0x17 + lVar1)) {
              uVar6 = (uint)*(byte *)(lVar3 + 0x19 + lVar1) * 0x10000 +
                      (uint)*(byte *)(lVar3 + 0x1a + lVar1) * 0x100 +
                      (uint)*(byte *)(lVar3 + 0x18 + lVar1) * 0x1000000 +
                      (uint)*(byte *)(lVar3 + 0x1b + lVar1);
              if (sVar8 == 0xc) {
                return param_2 + (uVar6 - uVar5);
              }
              return uVar6;
            }
            iVar12 = iVar11 + 1;
          }
        } while (iVar12 < iVar10);
      }
    }
  }
  return 0;
}



