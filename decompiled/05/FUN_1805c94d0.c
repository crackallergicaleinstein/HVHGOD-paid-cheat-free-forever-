// FUN_1805c94d0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805c94d0 */

undefined8 FUN_1805c94d0(longlong param_1,longlong param_2)

{
  char cVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  char cVar6;
  char cVar7;
  char cVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  char *pcVar13;
  uint uVar14;
  uint uVar15;
  
  if (*(ulonglong *)(param_2 + 0x108) < param_1 + 0x2010U) {
    FUN_18057bd80(param_2,8);
  }
  uVar9 = CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)(param_1 + 4),*(undefined1 *)(param_1 + 5)),
                            *(undefined1 *)(param_1 + 6)),*(undefined1 *)(param_1 + 7));
  if (((uint)((int)*(undefined8 *)(param_2 + 0x108) - (int)param_1) < uVar9) || (uVar9 < 0x2010)) {
    FUN_18057bd80(param_2,8);
  }
  uVar9 = CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)(param_1 + 0x200c),
                                     *(undefined1 *)(param_1 + 0x200d)),
                            *(undefined1 *)(param_1 + 0x200e)),*(undefined1 *)(param_1 + 0x200f));
  if ((uint)((int)*(undefined8 *)(param_2 + 0x108) - ((int)param_1 + 0x2010)) / 0xc < uVar9) {
    FUN_18057bd80(param_2,8);
  }
  pcVar13 = (char *)(param_1 + 0x2010);
  uVar11 = 0;
  uVar14 = 0;
  if (uVar9 != 0) {
    do {
      cVar1 = pcVar13[1];
      cVar2 = *pcVar13;
      cVar3 = pcVar13[4];
      cVar4 = pcVar13[9];
      uVar10 = CONCAT31(CONCAT21(CONCAT11(cVar2,cVar1),pcVar13[2]),pcVar13[3]);
      cVar5 = pcVar13[5];
      uVar15 = CONCAT31(CONCAT21(CONCAT11(cVar3,cVar5),pcVar13[6]),pcVar13[7]);
      cVar6 = pcVar13[8];
      cVar7 = pcVar13[10];
      cVar8 = pcVar13[0xb];
      if (uVar15 < uVar10) {
        FUN_18057bd80(param_2,8);
      }
      if ((uVar14 != 0) && (uVar10 <= uVar11)) {
        FUN_18057bd80(param_2,8);
      }
      if (0 < *(int *)(param_2 + 0x110)) {
        uVar11 = uVar15 - uVar10;
        if ((*(uint *)(param_2 + 0x120) < uVar11) ||
           (*(uint *)(param_2 + 0x120) - uVar11 <=
            CONCAT31(CONCAT21(CONCAT11(cVar6,cVar4),cVar7),cVar8))) {
          FUN_18057bd80(param_2,0x10);
        }
        iVar12 = uVar11 + 1;
        if (cVar2 == '\0' && cVar1 == '\0') {
          if (cVar3 != '\0' || cVar5 != '\0') {
            FUN_18057bd80(param_2,8);
          }
          for (; iVar12 != 0; iVar12 = iVar12 + -1) {
            if ((*(byte *)((ulonglong)((uVar10 & 0xffff) >> 3) + 0xc + param_1) &
                (byte)(0x80 >> ((byte)uVar10 & 7))) != 0) {
              FUN_18057bd80(param_2,8);
            }
            uVar10 = uVar10 + 1;
          }
        }
        else {
          for (; iVar12 != 0; iVar12 = iVar12 + -1) {
            if ((*(byte *)((ulonglong)(uVar10 >> 0x13) + 0xc + param_1) &
                (byte)(0x80 >> ((byte)(uVar10 >> 0x10) & 7))) == 0) {
              FUN_18057bd80(param_2,8);
            }
            if ((*(byte *)((ulonglong)((uVar10 & 0xffff) >> 3) + 0xc + param_1) &
                (byte)(0x80 >> ((byte)uVar10 & 7))) == 0) {
              FUN_18057bd80(param_2,8);
            }
            uVar10 = uVar10 + 1;
          }
        }
      }
      uVar14 = uVar14 + 1;
      pcVar13 = pcVar13 + 0xc;
      uVar11 = uVar15;
    } while (uVar14 < uVar9);
  }
  return 0;
}



