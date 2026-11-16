// FUN_1805a1430 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805a1430 */

int FUN_1805a1430(byte *param_1,byte *param_2,int param_3,int *param_4)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  byte bVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  ulonglong uVar12;
  uint uVar13;
  byte *pbVar14;
  byte *pbVar15;
  int iVar16;
  int iVar17;
  
  iVar5 = 0;
  bVar2 = false;
  bVar1 = false;
  if (param_4 != (int *)0x0) {
    *param_4 = 0;
  }
  uVar12 = 0;
  iVar16 = 0;
  iVar17 = 0;
  iVar9 = 0;
  iVar10 = 0;
  iVar4 = 4;
  while( true ) {
    while( true ) {
      pbVar14 = param_1;
      if (((iVar4 != 0) && (pbVar14 = param_1 + 1, param_2 < param_1 + 2)) && (pbVar14 <= param_2))
      goto LAB_1805a15c4;
      bVar7 = *pbVar14 >> ((byte)iVar4 & 0x1f);
      iVar4 = 4 - iVar4;
      uVar8 = bVar7 & 0xf;
      param_1 = pbVar14;
      if (uVar8 != 0xe) break;
      bVar2 = true;
    }
    if (9 < uVar8) break;
    iVar11 = (int)uVar12;
    if (iVar11 < 0xccccccc) {
      if (((bVar7 & 0xf) != 0) || (iVar11 != 0)) {
        iVar9 = iVar9 + 1;
        uVar12 = (ulonglong)(uVar8 + iVar11 * 10);
      }
    }
    else {
      iVar17 = iVar17 + 1;
    }
  }
  pbVar15 = pbVar14;
  if (uVar8 == 10) {
    while( true ) {
      pbVar14 = pbVar15;
      if (((iVar4 != 0) && (pbVar14 = pbVar15 + 1, param_2 < pbVar15 + 2)) && (pbVar14 <= param_2))
      goto LAB_1805a15c4;
      bVar7 = *pbVar14 >> ((byte)iVar4 & 0x1f);
      iVar4 = 4 - iVar4;
      uVar8 = bVar7 & 0xf;
      if (9 < uVar8) break;
      iVar11 = (int)uVar12;
      pbVar15 = pbVar14;
      if (((bVar7 & 0xf) == 0) && (iVar11 == 0)) {
        iVar17 = iVar17 + -1;
      }
      else if ((iVar11 < 0xccccccc) && (iVar10 < 9)) {
        iVar10 = iVar10 + 1;
        uVar12 = (ulonglong)(uVar8 + iVar11 * 10);
      }
    }
  }
  bVar3 = false;
  if (uVar8 - 0xb < 2) {
    while( true ) {
      bVar1 = bVar3;
      pbVar15 = pbVar14;
      if (((iVar4 != 0) && (pbVar15 = pbVar14 + 1, param_2 < pbVar14 + 2)) && (pbVar15 <= param_2))
      goto LAB_1805a15c4;
      bVar7 = (byte)iVar4;
      iVar4 = 4 - iVar4;
      uVar13 = *pbVar15 >> (bVar7 & 0x1f) & 0xf;
      if (9 < uVar13) break;
      pbVar14 = pbVar15;
      if (iVar16 < 0x3e9) {
        iVar16 = uVar13 + iVar16 * 10;
        bVar3 = bVar1;
      }
      else {
        bVar3 = true;
      }
    }
    if (uVar8 == 0xc) {
      iVar16 = -iVar16;
    }
  }
  iVar4 = (int)uVar12;
  if (iVar4 == 0) goto LAB_1805a15c4;
  if (bVar1) {
    if (uVar8 == 0xc) goto LAB_1805a15c4;
  }
  else {
    iVar16 = iVar16 + iVar17 + param_3;
    iVar17 = iVar16 + iVar9;
    if (param_4 != (int *)0x0) {
      iVar10 = iVar10 + iVar9;
      if (iVar10 < 6) {
        if (iVar4 < 0x8000) {
          if (0 < iVar17) {
            iVar5 = 5;
            if (iVar17 < 5) {
              iVar5 = iVar17;
            }
            if (0 < iVar5 - iVar10) {
              iVar17 = iVar17 - iVar5;
              iVar4 = iVar4 * (&DAT_180670c70)[iVar5 - iVar10];
              if (0x7fff < iVar4) {
                iVar4 = iVar4 / 10;
                iVar17 = iVar17 + 1;
              }
              iVar5 = iVar4 << 0x10;
              *param_4 = iVar17;
              goto LAB_1805a15c4;
            }
          }
          iVar5 = iVar4 << 0x10;
          *param_4 = iVar17 - iVar10;
        }
        else {
          iVar5 = FUN_180573310(uVar12,10);
          *param_4 = (iVar17 - iVar10) + 1;
        }
      }
      else if (iVar4 / (int)(&DAT_180670c5c)[iVar10] < 0x8000) {
        iVar5 = FUN_180573310(uVar12,(&DAT_180670c5c)[iVar10]);
        *param_4 = iVar17 + -5;
      }
      else {
        iVar5 = FUN_180573310(uVar12,(&DAT_180670c60)[iVar10]);
        *param_4 = iVar17 + -4;
      }
      goto LAB_1805a15c4;
    }
    iVar10 = iVar10 - iVar16;
    if (iVar17 < 6) {
      if (iVar17 < -5) goto LAB_1805a15c4;
      if (iVar17 < 0) {
        iVar10 = iVar10 + iVar17;
        uVar12 = (longlong)iVar4 / (longlong)(int)(&DAT_180670c70)[-(longlong)iVar17] & 0xffffffff;
      }
      if (iVar10 == 10) {
        uVar12 = (ulonglong)(uint)((int)uVar12 / 10);
        lVar6 = 0x24;
      }
      else {
        lVar6 = (longlong)iVar10 * 4;
        if (iVar10 < 1) {
          iVar5 = (int)uVar12 * (&DAT_180670c70)[-(longlong)iVar10];
          if (iVar5 < 0x8000) {
            iVar5 = iVar5 * 0x10000;
            goto LAB_1805a15c4;
          }
          goto LAB_1805a15be;
        }
      }
      if ((int)uVar12 / *(int *)((longlong)&DAT_180670c70 + lVar6) < 0x8000) {
        iVar5 = FUN_180573310(uVar12,*(int *)((longlong)&DAT_180670c70 + lVar6));
      }
      goto LAB_1805a15c4;
    }
  }
LAB_1805a15be:
  iVar5 = 0x7fffffff;
LAB_1805a15c4:
  iVar16 = -iVar5;
  if (!bVar2) {
    iVar16 = iVar5;
  }
  return iVar16;
}



