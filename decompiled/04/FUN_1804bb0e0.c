// FUN_1804bb0e0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804bb0e0 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_1804bb0e0(void)

{
  undefined4 *puVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  longlong lVar4;
  int *piVar5;
  uint *puVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  undefined8 uVar11;
  ulonglong uVar12;
  uint uVar13;
  int iVar14;
  longlong lVar15;
  longlong *plVar16;
  longlong lVar17;
  undefined8 *puVar18;
  int iVar19;
  
  lVar8 = DAT_180bb8ae8;
  if (*(int *)(DAT_180bb8ae8 + 8) != *(int *)(DAT_180bb8ae8 + 4)) {
    FUN_1804babc0();
  }
  if (*(int *)(lVar8 + 0xc) != *(int *)(lVar8 + 4)) {
    iVar19 = 0;
    *(undefined4 *)(lVar8 + 0xf4) = 0;
    *(int *)(lVar8 + 0xc) = *(int *)(lVar8 + 4);
    FUN_1804b6f10(lVar8,4);
    plVar16 = *(longlong **)(lVar8 + 0x2030);
    plVar2 = plVar16 + *(int *)(lVar8 + 0x2028);
    lVar17 = DAT_180bb8ae8;
    for (; DAT_180bb8ae8 = lVar17, plVar16 != plVar2; plVar16 = plVar16 + 1) {
      lVar15 = *plVar16;
      puVar1 = (undefined4 *)(lVar15 + 0x70);
      *(undefined4 **)(lVar15 + 0xb0) = puVar1;
      *(longlong *)(lVar15 + 0xb8) = lVar15 + 0xc0;
      iVar9 = *(int *)(lVar15 + 0x74);
      if (iVar9 < 0) {
        iVar9 = (iVar9 + 1 >> 1) + iVar9;
        iVar10 = 0;
        if (0 < iVar9) {
          iVar10 = iVar9;
        }
        FUN_1804d0a80(puVar1,iVar10);
      }
      *puVar1 = 0;
      puVar1 = *(undefined4 **)(lVar15 + 0xb8);
      iVar9 = puVar1[1];
      if (iVar9 < 0) {
        iVar9 = (iVar9 + 1 >> 1) + iVar9;
        iVar10 = 0;
        if (0 < iVar9) {
          iVar10 = iVar9;
        }
        FUN_1804d0a80(puVar1,iVar10);
      }
      *puVar1 = 0;
      *(undefined1 *)(lVar15 + 0x60) = 1;
      *(undefined4 *)(lVar15 + 100) = *(undefined4 *)(lVar17 + 4);
      *(undefined8 *)(lVar15 + 0x68) = 0;
      *(undefined8 *)(lVar15 + 0x80) = *(undefined8 *)(lVar15 + 8);
      *(undefined8 *)(lVar15 + 0x88) = *(undefined8 *)(lVar15 + 0x10);
      *(undefined8 *)(lVar15 + 0x90) = *(undefined8 *)(lVar17 + 0x38);
      *(longlong *)(lVar15 + 0x98) = lVar15;
      *(longlong *)(lVar15 + 0xa0) = lVar17 + 0xc68;
      *(undefined4 *)(lVar15 + 0xa8) = 0;
      if ((*(longlong *)(lVar15 + 0x40) != 0) && (*(int *)(lVar15 + 0x50) == *(int *)(lVar8 + 4))) {
        uVar11 = FUN_1804b81b0(lVar15,0,"##Background");
        FUN_1804e1e10(lVar15 + 0x60,*(undefined8 *)(lVar15 + 0xb0),uVar11);
      }
      lVar17 = DAT_180bb8ae8;
    }
    FUN_1804ba7b0();
    lVar17 = *(longlong *)(lVar8 + 0x2228);
    if ((lVar17 == 0) || ((*(uint *)(lVar17 + 0x14) & 0x2000) != 0)) {
      lVar15 = 0;
      if (lVar17 == 0) {
        lVar17 = 0;
      }
      else {
        lVar17 = *(longlong *)(lVar8 + 0x2238);
      }
    }
    else {
      lVar15 = *(longlong *)(lVar17 + 0x3d8);
      lVar17 = *(longlong *)(lVar8 + 0x2238);
    }
    plVar16 = *(longlong **)(lVar8 + 0x1478);
    plVar2 = plVar16 + *(int *)(lVar8 + 0x1470);
    for (; plVar16 != plVar2; plVar16 = plVar16 + 1) {
      lVar4 = *plVar16;
      if ((((*(char *)(lVar4 + 0xcc) != '\0') && (*(char *)(lVar4 + 0xd4) == '\0')) &&
          ((*(uint *)(lVar4 + 0x14) >> 0x18 & 1) == 0)) && ((lVar4 != lVar15 && (lVar4 != lVar17))))
      {
        FUN_1804ba2a0(lVar4,*(uint *)(lVar4 + 0x14) >> 0x19 & 1);
      }
    }
    if (((lVar15 != 0) && (*(char *)(lVar15 + 0xcc) != '\0')) && (*(char *)(lVar15 + 0xd4) == '\0'))
    {
      FUN_1804ba2a0(lVar15,*(uint *)(lVar15 + 0x14) >> 0x19 & 1);
    }
    if (((lVar17 != 0) && (*(char *)(lVar17 + 0xcc) != '\0')) && (*(char *)(lVar17 + 0xd4) == '\0'))
    {
      FUN_1804ba2a0(lVar17,*(uint *)(lVar17 + 0x14) >> 0x19 & 1);
    }
    if ((*(char *)(lVar8 + 0x8d) != '\0') && (*(int *)(lVar8 + 0x24d8) != -1)) {
      FUN_1804b45e0(*(undefined8 *)(lVar8 + 0x110),*(undefined4 *)(lVar8 + 0xdac));
    }
    *(undefined8 *)(lVar8 + 0xec) = 0;
    plVar16 = *(longlong **)(lVar8 + 0x2030);
    plVar2 = plVar16 + *(int *)(lVar8 + 0x2028);
    for (; plVar16 != plVar2; plVar16 = plVar16 + 1) {
      lVar17 = *plVar16;
      piVar5 = *(int **)(lVar17 + 0xb0);
      iVar9 = *piVar5;
      iVar10 = piVar5[1];
      iVar14 = **(int **)(lVar17 + 0xb8) + iVar9;
      if (iVar10 < iVar14) {
        if (iVar10 == 0) {
          iVar10 = 8;
        }
        else {
          iVar10 = iVar10 / 2 + iVar10;
        }
        iVar7 = iVar14;
        if (iVar14 < iVar10) {
          iVar7 = iVar10;
        }
        FUN_1804d0a80(piVar5,iVar7);
      }
      *piVar5 = iVar14;
      piVar5 = *(int **)(lVar17 + 0xb8);
      if (*piVar5 != 0) {
        FUN_18063aed0(*(longlong *)(*(longlong *)(lVar17 + 0xb0) + 8) + (longlong)iVar9 * 8,
                      *(undefined8 *)(piVar5 + 2),(longlong)*piVar5 << 3);
        iVar9 = piVar5[1];
        if (iVar9 < 0) {
          iVar9 = (iVar9 + 1 >> 1) + iVar9;
          iVar10 = 0;
          if (0 < iVar9) {
            iVar10 = iVar9;
          }
          FUN_1804d0a80(piVar5,iVar10);
        }
        *piVar5 = 0;
      }
      if ((*(longlong *)(lVar17 + 0x48) != 0) && (*(int *)(lVar17 + 0x54) == *(int *)(lVar8 + 4))) {
        uVar11 = FUN_1804b81b0(lVar17,1,"##Foreground");
        FUN_1804e1e10(lVar17 + 0x60,*(undefined8 *)(lVar17 + 0xb0),uVar11);
      }
      puVar18 = *(undefined8 **)(lVar17 + 0x78);
      puVar3 = puVar18 + *(int *)(lVar17 + 0x70);
      for (; puVar18 != puVar3; puVar18 = puVar18 + 1) {
        puVar6 = (uint *)*puVar18;
        uVar13 = *puVar6;
        while (0 < (int)uVar13) {
          uVar12 = (ulonglong)uVar13;
          uVar13 = uVar13 - 1;
          if ((*(int *)(*(longlong *)(puVar6 + 2) + -0x20 + uVar12 * 0x48) != 0) ||
             (*(longlong *)(*(longlong *)(puVar6 + 2) + -0x18 + uVar12 * 0x48) != 0)) break;
          *puVar6 = uVar13;
        }
      }
      *(undefined4 *)(lVar17 + 0xa8) = *(undefined4 *)(lVar17 + 0x70);
      *(int *)(lVar8 + 0xec) = *(int *)(lVar8 + 0xec) + *(int *)(lVar17 + 0x6c);
      *(int *)(lVar8 + 0xf0) = *(int *)(lVar8 + 0xf0) + *(int *)(lVar17 + 0x68);
    }
    if ((*(byte *)(lVar8 + 0x2c) & 0x10) != 0) {
      plVar16 = *(longlong **)(lVar8 + 0x11c8);
      plVar2 = plVar16 + *(int *)(lVar8 + 0x11c0);
      for (; plVar16 != plVar2; plVar16 = plVar16 + 1) {
        puVar18 = *(undefined8 **)(*plVar16 + 0x48);
        puVar3 = puVar18 + *(int *)(*plVar16 + 0x40);
        for (; puVar18 != puVar3; puVar18 = puVar18 + 1) {
          puVar1 = (undefined4 *)*puVar18;
          iVar9 = puVar1[1];
          if (iVar9 == 2) {
            if ((DAT_180bb8ae8 != 0) && ((*(uint *)(DAT_180bb8ae8 + 0x28cc) & 0x100) != 0)) {
              FUN_1804cf3e0("[font] Texture #%03d: create %dx%d\n",*puVar1,puVar1[9],puVar1[10]);
            }
          }
          else if (iVar9 == 4) {
            if ((DAT_180bb8ae8 != 0) && ((*(uint *)(DAT_180bb8ae8 + 0x28cc) & 0x100) != 0)) {
              FUN_1804cf3e0("[font] Texture #%03d: destroy %dx%d, texid=0x%I64X, backend_data=%p\n",
                            *puVar1,puVar1[9],puVar1[10],*(undefined8 *)(puVar1 + 6),
                            *(undefined8 *)(puVar1 + 2));
            }
          }
          else if (((iVar9 == 3) && (DAT_180bb8ae8 != 0)) &&
                  ((*(uint *)(DAT_180bb8ae8 + 0x28cc) & 0x100) != 0)) {
            FUN_1804cf3e0("[font] Texture #%03d: update %d regions, texid=0x%I64X, backend_data=0x%I64X\n"
                          ,*puVar1,puVar1[0x12],*(undefined8 *)(puVar1 + 6),
                          *(undefined8 *)(puVar1 + 2));
          }
        }
      }
    }
    lVar17 = (longlong)*(int *)(lVar8 + 0x27c0);
    if (0 < lVar17) {
      lVar15 = 0;
      do {
        lVar4 = *(longlong *)(lVar8 + 0x27c8);
        if (*(int *)(lVar15 + 4 + lVar4) == 5) {
          (**(code **)(lVar15 + 0x10 + lVar4))(lVar8,(longlong)iVar19 * 0x20 + lVar4);
        }
        iVar19 = iVar19 + 1;
        lVar15 = lVar15 + 0x20;
        lVar17 = lVar17 + -1;
      } while (lVar17 != 0);
    }
  }
  return;
}



