// FUN_1805bd780 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805bd780 */

uint FUN_1805bd780(char *param_1)

{
  byte bVar1;
  int iVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  byte *pbVar9;
  byte *pbVar10;
  int iVar11;
  int iVar12;
  char *pcVar13;
  
  cVar3 = *param_1;
  uVar6 = (uint)cVar3;
  uVar8 = 0;
  if (cVar3 == 'u') {
    pbVar9 = (byte *)(param_1 + 1);
    if ((param_1[1] == 'n') && (param_1[2] == 'i')) {
      uVar5 = 0;
      pbVar10 = (byte *)(param_1 + 3);
      iVar11 = 4;
      do {
        bVar1 = *pbVar10;
        uVar4 = bVar1 - 0x30;
        if (9 < uVar4) {
          if (5 < bVar1 - 0x41) goto LAB_1805bd80c;
          uVar4 = bVar1 - 0x37;
        }
        if (0xf < uVar4) goto LAB_1805bd80c;
        iVar11 = iVar11 + -1;
        uVar5 = uVar5 * 0x10 + uVar4;
        pbVar10 = pbVar10 + 1;
      } while (0 < iVar11);
      if (iVar11 == 0) {
        if (*pbVar10 == 0) {
          return uVar5;
        }
        if (*pbVar10 == 0x2e) goto LAB_1805bd7fa;
      }
    }
LAB_1805bd80c:
    uVar5 = 0;
    iVar11 = 6;
    do {
      bVar1 = *pbVar9;
      uVar4 = bVar1 - 0x30;
      if (9 < uVar4) {
        if (5 < bVar1 - 0x41) break;
        uVar4 = bVar1 - 0x37;
      }
      if (0xf < uVar4) break;
      iVar11 = iVar11 + -1;
      uVar5 = uVar5 * 0x10 + uVar4;
      pbVar9 = pbVar9 + 1;
    } while (0 < iVar11);
    if (iVar11 < 3) {
      if (*pbVar9 == 0) {
        return uVar5;
      }
      if (*pbVar9 == 0x2e) {
LAB_1805bd7fa:
        return uVar5 | 0x80000000;
      }
    }
  }
  if (cVar3 == '\0') {
    return 0;
  }
  pcVar13 = param_1;
  do {
    if (cVar3 == '.') break;
    cVar3 = pcVar13[1];
    pcVar13 = pcVar13 + 1;
  } while (cVar3 != '\0');
  if (pcVar13 <= param_1) {
    return 0;
  }
  iVar12 = 0;
  iVar11 = 0x34;
  do {
    iVar7 = iVar11 + iVar12 >> 1;
    uVar5 = (byte)(&DAT_180676c00)
                  [CONCAT11((&DAT_180676c02)[iVar7 * 2],(&DAT_180676c03)[iVar7 * 2])] & 0x7f;
    pbVar9 = &DAT_180676c00 + CONCAT11((&DAT_180676c02)[iVar7 * 2],(&DAT_180676c03)[iVar7 * 2]);
    if (uVar5 == uVar6) goto joined_r0x0001805bd8e5;
    iVar2 = iVar7 + 1;
    if ((int)uVar6 <= (int)uVar5) {
      iVar2 = iVar12;
      iVar11 = iVar7;
    }
    iVar12 = iVar2;
  } while (iVar12 < iVar11);
  goto LAB_1805bd933;
  while (pbVar9 = pbVar10, (int)*param_1 == uVar6) {
joined_r0x0001805bd8e5:
    param_1 = param_1 + 1;
    if (pcVar13 <= param_1) {
      if ((-1 < (char)*pbVar9) && ((char)pbVar9[1] < '\0')) {
        uVar8 = (uint)CONCAT11(pbVar9[2],pbVar9[3]);
      }
      break;
    }
    pbVar10 = pbVar9 + 1;
    uVar6 = pbVar9[1] & 0x7f;
    if (-1 < (char)*pbVar9) {
      if ((char)pbVar9[1] < '\0') {
        pbVar10 = pbVar9 + 3;
      }
      pbVar10 = pbVar10 + 1;
      while( true ) {
        if ((int)uVar6 < 1) goto LAB_1805bd933;
        pbVar9 = &DAT_180676c00 + CONCAT11(*pbVar10,pbVar10[1]);
        if ((int)*param_1 == (*pbVar9 & 0x7f)) break;
        uVar6 = uVar6 - 1;
        pbVar10 = pbVar10 + 2;
      }
      goto joined_r0x0001805bd8e5;
    }
  }
LAB_1805bd933:
  if (*pcVar13 == '.') {
    uVar8 = uVar8 | 0x80000000;
  }
  return uVar8;
}



