// FUN_18057e440 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18057e440 */

ulonglong FUN_18057e440(uint param_1,longlong param_2,longlong param_3,longlong param_4)

{
  ulonglong uVar1;
  ulonglong uVar2;
  byte bVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  ulonglong uVar10;
  undefined4 *puVar11;
  uint uVar12;
  longlong lVar13;
  ushort *puVar14;
  char *pcVar15;
  uint *puVar16;
  ulonglong uVar17;
  longlong lVar18;
  int iVar19;
  ushort *puVar20;
  undefined8 *puVar21;
  longlong lVar22;
  longlong lVar23;
  longlong lVar24;
  byte local_54;
  byte local_50;
  byte local_4c;
  byte local_48;
  uint local_44;
  ulonglong local_40;
  
  iVar19 = 0;
  local_40 = 0;
  uVar10 = FUN_180581fe0(param_2,param_3);
  uVar17 = uVar10 & 0xffffffff;
  if ((int)uVar10 != 0) {
    return uVar10;
  }
  if ((*(byte *)(param_2 + 0x1178) & 1) == 0) {
    uVar9 = *(undefined4 *)(param_4 + 0x4c);
    uVar5 = FUN_180584320(param_2,0);
    if (uVar5 == 0) {
      FUN_180584c10(param_2,uVar9,param_4 + 0x50,0);
      uVar5 = FUN_180583e80(param_2,0);
    }
    uVar17 = (ulonglong)uVar5;
    if (uVar5 != 0) {
      return uVar17;
    }
  }
  uVar10 = 0;
  if ((*(byte *)(param_2 + 0x1178) & 2) != 0) goto LAB_18057e92b;
  lVar22 = 0;
  local_54 = 0;
  bVar4 = false;
  local_50 = 0;
  local_4c = 0;
  local_48 = 0;
  bVar3 = 1;
  puVar11 = (undefined4 *)FUN_18057a3d0(param_1,*(undefined8 *)(param_4 + 0x38));
  if ((puVar11 != (undefined4 *)0x0) && (uVar5 = FUN_18057eb10(*puVar11), uVar5 != 0)) {
    bVar4 = true;
    local_54 = (byte)(uVar5 >> 8) & 1;
    local_50 = (byte)(uVar5 >> 9) & 1;
    local_4c = (byte)(uVar5 >> 10) & 1;
    bVar3 = ~(byte)(uVar5 >> 0xc) & 1;
    local_48 = (byte)(uVar5 >> 0xb) & 1;
    if (((uVar5 >> 4 & 1) != 0) ||
       ((((uVar5 >> 5 & 1) != 0 || ((uVar5 >> 6 & 1) != 0)) || ((uVar5 >> 7 & 1) != 0)))) {
      FUN_180580d90(param_2);
      if ((uVar5 >> 6 & 1) != 0) {
        iVar6 = FUN_180581390(param_2);
        iVar7 = FUN_180586440(param_2,iVar6);
        iVar8 = FUN_180582bb0(param_2,iVar6);
        FUN_180587150(param_2,*(undefined4 *)(*(longlong *)(param_2 + 0x38) + (longlong)iVar6 * 4),
                      iVar8 + iVar7);
      }
      if ((uVar5 >> 7 & 1) != 0) {
        iVar6 = FUN_180581410(param_2);
        iVar7 = FUN_180586290(param_2,iVar6);
        iVar8 = FUN_180582b20(param_2,iVar6);
        FUN_1805870d0(param_2,*(undefined4 *)(*(longlong *)(param_2 + 0x40) + (longlong)iVar6 * 4),
                      iVar7 - iVar8);
      }
      if ((uVar5 >> 4 & 1) != 0) {
        uVar9 = FUN_1805812d0(param_2);
        FUN_180586440(param_2,uVar9);
        FUN_180582bb0(param_2,uVar9);
      }
      if ((uVar5 >> 5 & 1) != 0) {
        uVar9 = FUN_180581330(param_2);
        FUN_180586290(param_2,uVar9);
        FUN_180582b20(param_2,uVar9);
      }
    }
  }
  lVar24 = 0;
  lVar23 = 0;
  lVar18 = 0;
  uVar9 = *(undefined4 *)(param_4 + 0x250);
  local_44 = FUN_180584320(param_2,1);
  if (local_44 == 0) {
    FUN_180584c10(param_2,uVar9,param_4 + 0x254,1);
    local_44 = FUN_180583e80(param_2,1);
  }
  if (bVar4) {
    lVar13 = *(longlong *)(param_2 + 0x1180);
    uVar12 = 0;
    uVar5 = *(uint *)(lVar13 + 800);
    if (uVar5 != 0) {
      puVar11 = (undefined4 *)(lVar13 + 0x344);
      do {
        if (((byte)*puVar11 & 3) == 3) break;
        uVar12 = uVar12 + 1;
        puVar11 = puVar11 + 9;
      } while (uVar12 < uVar5);
    }
    if (uVar12 < uVar5) {
      lVar18 = lVar13 + 0x248 + ((ulonglong)uVar12 * 9 + 0x37) * 4;
    }
    uVar12 = 0;
    if (uVar5 != 0) {
      puVar11 = (undefined4 *)(lVar13 + 0x344);
      do {
        if (((byte)*puVar11 & 0x21) == 0x21) break;
        uVar12 = uVar12 + 1;
        puVar11 = puVar11 + 9;
      } while (uVar12 < uVar5);
    }
    if (uVar12 < uVar5) {
      lVar23 = lVar13 + 0x248 + ((ulonglong)uVar12 * 9 + 0x37) * 4;
    }
    lVar13 = *(longlong *)(param_2 + 0x1180);
    uVar12 = 0;
    if (uVar5 != 0) {
      puVar11 = (undefined4 *)(lVar13 + 0x344);
      do {
        if (((byte)*puVar11 & 0x11) == 0x11) break;
        uVar12 = uVar12 + 1;
        puVar11 = puVar11 + 9;
      } while (uVar12 < uVar5);
    }
    uVar5 = *(uint *)(lVar13 + 800);
    if (uVar12 < uVar5) {
      lVar24 = lVar13 + 0x248 + ((ulonglong)uVar12 * 9 + 0x37) * 4;
    }
    uVar12 = 0;
    if (uVar5 != 0) {
      puVar11 = (undefined4 *)(lVar13 + 0x344);
      do {
        if (((byte)*puVar11 & 0x41) == 0x41) goto LAB_18057e7d9;
        uVar12 = uVar12 + 1;
        puVar11 = puVar11 + 9;
      } while (uVar12 < uVar5);
    }
    if (uVar12 < uVar5) {
LAB_18057e7d9:
      lVar22 = lVar13 + 0x248 + ((ulonglong)uVar12 * 9 + 0x37) * 4;
    }
    if (bVar3 == 0) {
LAB_18057e87e:
      if ((lVar18 != 0) && (lVar23 != 0)) goto LAB_18057e88d;
    }
    else {
      if ((lVar24 != 0) && (lVar22 != 0)) {
        uVar5 = *(int *)(lVar24 + 0x10) - *(int *)(lVar22 + 0x10);
        iVar6 = uVar5 * 2;
        local_40 = (ulonglong)(((uVar5 & 0x7fffffff) >> 0x1e) + iVar6 / 3 + (iVar6 >> 0x1f));
        goto LAB_18057e87e;
      }
      if ((lVar18 == 0) || (lVar23 == 0)) {
        lVar13 = ((ulonglong)(uint)(*(int *)(param_4 + 0x40) << 2) / 10) *
                 (longlong)*(int *)(param_4 + 0x14);
        local_40 = lVar13 + 0x8000 + (lVar13 >> 0x3f) >> 0x10;
        goto LAB_18057e87e;
      }
      local_40 = (ulonglong)(uint)((*(int *)(lVar18 + 0x10) - *(int *)(lVar23 + 0x10)) / 2);
LAB_18057e88d:
      if (local_54 != 0) {
        FUN_180584eb0(param_2,lVar18,lVar23);
      }
      if (local_50 != 0) {
        FUN_180584e30(param_2,lVar18,lVar23);
      }
    }
    if ((lVar24 != 0) && (lVar22 != 0)) {
      if (local_4c != 0) {
        FUN_180584eb0(param_2,lVar24,lVar22);
      }
      if (local_48 != 0) {
        FUN_180584e30(param_2,lVar24,lVar22);
      }
    }
  }
  if (local_44 != 0) {
    return (ulonglong)local_44;
  }
  if ((*(ushort *)(*(longlong *)(*(longlong *)(param_4 + 0x30) + 0x10) + (ulonglong)param_1 * 2) &
      0x4000) == 0) {
    FUN_180583c20(param_2,param_4);
  }
  uVar17 = 0;
  uVar10 = local_40;
LAB_18057e92b:
  puVar16 = (uint *)(param_2 + 0x48);
LAB_18057e940:
  do {
    if (iVar19 == 0) {
      if ((*(byte *)(param_2 + 0x1178) & 1) != 0) {
        iVar19 = 1;
        puVar16 = puVar16 + 0x226;
        goto LAB_18057e940;
      }
LAB_18057e96e:
      FUN_180582fa0(param_2,iVar19);
      uVar2 = *(ulonglong *)(puVar16 + 2);
      if ((uVar2 != 0) && (uVar1 = uVar2 + (ulonglong)*puVar16 * 0x48, uVar2 < uVar1)) {
        puVar21 = (undefined8 *)(uVar2 + 0x40);
        lVar22 = ((uVar1 - uVar2) - 1) / 0x48 + 1;
        if (iVar19 == 0) {
          do {
            lVar18 = puVar21[-6];
            if (lVar18 != 0) {
              puVar14 = (ushort *)puVar21[-1];
              puVar20 = (ushort *)*puVar21;
              uVar9 = *(undefined4 *)(lVar18 + 8);
              *puVar14 = *puVar14 | 4;
              *(undefined4 *)(puVar14 + 8) = uVar9;
              while (puVar14 != puVar20) {
                puVar14 = *(ushort **)(puVar14 + 0x10);
                *(undefined4 *)(puVar14 + 8) = *(undefined4 *)(lVar18 + 8);
                *puVar14 = *puVar14 | 4;
              }
            }
            puVar21 = puVar21 + 9;
            lVar22 = lVar22 + -1;
          } while (lVar22 != 0);
        }
        else {
          do {
            lVar18 = puVar21[-6];
            if (lVar18 != 0) {
              puVar14 = (ushort *)puVar21[-1];
              puVar20 = (ushort *)*puVar21;
              uVar9 = *(undefined4 *)(lVar18 + 8);
              *puVar14 = *puVar14 | 8;
              *(undefined4 *)(puVar14 + 10) = uVar9;
              while (puVar14 != puVar20) {
                puVar14 = *(ushort **)(puVar14 + 0x10);
                *(undefined4 *)(puVar14 + 10) = *(undefined4 *)(lVar18 + 8);
                *puVar14 = *puVar14 | 8;
              }
            }
            puVar21 = puVar21 + 9;
            lVar22 = lVar22 + -1;
          } while (lVar22 != 0);
        }
      }
      FUN_180581490(param_2,iVar19);
      FUN_1805816e0(param_2,iVar19);
      FUN_1805819c0(param_2,iVar19,param_1,uVar10 & 0xffffffff,*(undefined8 *)(param_4 + 0x38));
    }
    else if ((iVar19 == 1) && ((*(byte *)(param_2 + 0x1178) & 2) == 0)) goto LAB_18057e96e;
    iVar19 = iVar19 + 1;
    puVar16 = puVar16 + 0x226;
    if (1 < iVar19) {
      puVar14 = *(ushort **)(param_2 + 0x20);
      puVar11 = *(undefined4 **)(param_3 + 8);
      pcVar15 = *(char **)(param_3 + 0x10);
      puVar20 = puVar14 + (longlong)*(int *)(param_2 + 0x1c) * 0x18;
      for (; puVar14 < puVar20; puVar14 = puVar14 + 0x18) {
        *puVar11 = *(undefined4 *)(puVar14 + 8);
        puVar11[1] = *(undefined4 *)(puVar14 + 10);
        if ((*puVar14 & 1) == 0) {
          *pcVar15 = ((*puVar14 & 2) != 0) + '\x01';
        }
        else {
          *pcVar15 = '\0';
        }
        puVar11 = puVar11 + 2;
        pcVar15 = pcVar15 + 1;
      }
      return uVar17;
    }
  } while( true );
}



