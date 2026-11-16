// FUN_1801f5c40 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801f5c40 */

void FUN_1801f5c40(undefined8 param_1,ulonglong param_2)

{
  byte *pbVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  int iVar8;
  ulonglong uVar9;
  undefined8 *puVar10;
  ulonglong uVar11;
  longlong *plVar12;
  longlong lVar13;
  longlong *plVar14;
  undefined8 *puVar15;
  bool bVar16;
  
  puVar7 = DAT_180bbeac8;
  for (uVar9 = 0x3f; 0xfffffffffffffffU >> uVar9 == 0; uVar9 = uVar9 - 1) {
  }
  if ((ulonglong)(1L << (uVar9 & 0x3f)) < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1805fa8b8("invalid hash bucket count");
  }
  uVar9 = param_2 - 1 | 1;
  lVar13 = 0x3f;
  if (uVar9 != 0) {
    for (; uVar9 >> lVar13 == 0; lVar13 = lVar13 + -1) {
    }
  }
  lVar13 = 1L << ((ulonglong)((int)lVar13 + 1) & 0x3f);
  FUN_1801406e0(&DAT_180bbead8,lVar13 * 2,DAT_180bbeac8);
  DAT_180bbeaf0 = lVar13 - 1;
  DAT_180bbeaf8 = lVar13;
  puVar6 = (undefined8 *)*DAT_180bbeac8;
joined_r0x0001801f5cca:
  do {
    while( true ) {
      while( true ) {
        if (puVar6 == puVar7) {
          return;
        }
        puVar15 = puVar6 + 2;
        puVar2 = (undefined8 *)*puVar6;
        uVar9 = 0xcbf29ce484222325;
        if (7 < (ulonglong)puVar6[5]) {
          puVar15 = (undefined8 *)puVar6[2];
        }
        uVar11 = 0;
        if (puVar6[4] * 2 != 0) {
          do {
            pbVar1 = (byte *)((longlong)puVar15 + uVar11);
            uVar11 = uVar11 + 1;
            uVar9 = (uVar9 ^ *pbVar1) * 0x100000001b3;
          } while (uVar11 < (ulonglong)(puVar6[4] * 2));
        }
        puVar15 = (undefined8 *)(DAT_180bbead8 + (uVar9 & DAT_180bbeaf0) * 0x10);
        if ((undefined8 *)*puVar15 != puVar7) break;
        *puVar15 = puVar6;
        puVar15[1] = puVar6;
        puVar6 = puVar2;
      }
      plVar14 = (longlong *)puVar15[1];
      if (puVar6[4] == plVar14[4]) {
        if (puVar6[4] == 0) {
          bVar16 = false;
        }
        else {
          iVar8 = FUN_1801594c0();
          bVar16 = iVar8 != 0;
        }
      }
      else {
        bVar16 = true;
      }
      if (bVar16) break;
      puVar10 = (undefined8 *)*plVar14;
      if (puVar10 != puVar6) {
        puVar3 = (undefined8 *)puVar6[1];
        *puVar3 = puVar2;
        puVar4 = (undefined8 *)puVar2[1];
        *puVar4 = puVar10;
        puVar5 = (undefined8 *)puVar10[1];
        *puVar5 = puVar6;
        puVar10[1] = puVar4;
        puVar2[1] = puVar3;
        puVar6[1] = puVar5;
      }
      puVar15[1] = puVar6;
      puVar6 = puVar2;
    }
    if ((longlong *)*puVar15 != plVar14) {
      do {
        plVar14 = (longlong *)plVar14[1];
        plVar12 = plVar14 + 2;
        if (7 < (ulonglong)plVar14[5]) {
          plVar12 = (longlong *)*plVar12;
        }
        puVar10 = puVar6 + 2;
        if (7 < (ulonglong)puVar6[5]) {
          puVar10 = (undefined8 *)puVar6[2];
        }
        if (puVar6[4] == plVar14[4]) {
          if (puVar6[4] == 0) {
            bVar16 = false;
          }
          else {
            iVar8 = FUN_1801594c0(puVar10,plVar12);
            bVar16 = iVar8 != 0;
          }
        }
        else {
          bVar16 = true;
        }
        if (!bVar16) {
          lVar13 = *plVar14;
          puVar15 = (undefined8 *)puVar6[1];
          *puVar15 = puVar2;
          plVar14 = (longlong *)puVar2[1];
          *plVar14 = lVar13;
          puVar10 = *(undefined8 **)(lVar13 + 8);
          *puVar10 = puVar6;
          *(longlong **)(lVar13 + 8) = plVar14;
          puVar2[1] = puVar15;
          puVar6[1] = puVar10;
          puVar6 = puVar2;
          goto joined_r0x0001801f5cca;
        }
      } while ((longlong *)*puVar15 != plVar14);
    }
    puVar10 = (undefined8 *)puVar6[1];
    *puVar10 = puVar2;
    puVar3 = (undefined8 *)puVar2[1];
    *puVar3 = plVar14;
    puVar4 = (undefined8 *)plVar14[1];
    *puVar4 = puVar6;
    plVar14[1] = (longlong)puVar3;
    puVar2[1] = puVar10;
    puVar6[1] = puVar4;
    *puVar15 = puVar6;
    puVar6 = puVar2;
  } while( true );
}



