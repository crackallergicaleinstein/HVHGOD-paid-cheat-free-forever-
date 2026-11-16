// FUN_1801b8820 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801b8820 */

void FUN_1801b8820(longlong param_1,ulonglong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  int iVar6;
  ulonglong uVar7;
  longlong *plVar8;
  ulonglong uVar9;
  longlong *plVar10;
  longlong lVar11;
  longlong *plVar12;
  undefined8 *puVar13;
  bool bVar14;
  
  for (uVar7 = 0x3f; 0xfffffffffffffffU >> uVar7 == 0; uVar7 = uVar7 - 1) {
  }
  if ((ulonglong)(1L << (uVar7 & 0x3f)) < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1805fa8b8("invalid hash bucket count");
  }
  uVar7 = param_2 - 1 | 1;
  lVar11 = 0x3f;
  if (uVar7 != 0) {
    for (; uVar7 >> lVar11 == 0; lVar11 = lVar11 + -1) {
    }
  }
  lVar11 = 1L << ((ulonglong)((int)lVar11 + 1) & 0x3f);
  plVar1 = *(longlong **)(param_1 + 8);
  FUN_1801406e0(param_1 + 0x18,lVar11 * 2,plVar1);
  *(longlong *)(param_1 + 0x30) = lVar11 + -1;
  *(longlong *)(param_1 + 0x38) = lVar11;
  plVar5 = (longlong *)**(undefined8 **)(param_1 + 8);
joined_r0x0001801b8898:
  do {
    while( true ) {
      while( true ) {
        if (plVar5 == plVar1) {
          return;
        }
        plVar2 = (longlong *)*plVar5;
        plVar10 = plVar5 + 2;
        if (7 < (ulonglong)plVar5[5]) {
          plVar10 = (longlong *)plVar5[2];
        }
        uVar9 = 0xcbf29ce484222325;
        uVar7 = 0;
        if (plVar5[4] * 2 != 0) {
          do {
            uVar9 = (uVar9 ^ *(byte *)((longlong)plVar10 + uVar7)) * 0x100000001b3;
            uVar7 = uVar7 + 1;
          } while (uVar7 < (ulonglong)(plVar5[4] * 2));
        }
        puVar13 = (undefined8 *)
                  ((*(ulonglong *)(param_1 + 0x30) & uVar9) * 0x10 + *(longlong *)(param_1 + 0x18));
        if ((longlong *)*puVar13 != plVar1) break;
        *puVar13 = plVar5;
        puVar13[1] = plVar5;
        plVar5 = plVar2;
      }
      plVar12 = (longlong *)puVar13[1];
      plVar10 = plVar12 + 2;
      if (7 < (ulonglong)plVar12[5]) {
        plVar10 = (longlong *)*plVar10;
      }
      plVar8 = plVar5 + 2;
      if (7 < (ulonglong)plVar5[5]) {
        plVar8 = (longlong *)plVar5[2];
      }
      if (plVar5[4] == plVar12[4]) {
        if (plVar5[4] == 0) {
          bVar14 = false;
        }
        else {
          iVar6 = FUN_1801594c0(plVar8,plVar10);
          bVar14 = iVar6 != 0;
        }
      }
      else {
        bVar14 = true;
      }
      if (bVar14) break;
      plVar12 = (longlong *)*plVar12;
      if (plVar12 != plVar5) {
        plVar10 = (longlong *)plVar5[1];
        *plVar10 = (longlong)plVar2;
        puVar3 = (undefined8 *)plVar2[1];
        *puVar3 = plVar12;
        puVar4 = (undefined8 *)plVar12[1];
        *puVar4 = plVar5;
        plVar12[1] = (longlong)puVar3;
        plVar2[1] = (longlong)plVar10;
        plVar5[1] = (longlong)puVar4;
      }
      puVar13[1] = plVar5;
      plVar5 = plVar2;
    }
    if ((longlong *)*puVar13 != plVar12) {
      do {
        plVar12 = (longlong *)plVar12[1];
        plVar10 = plVar12 + 2;
        if (7 < (ulonglong)plVar12[5]) {
          plVar10 = (longlong *)*plVar10;
        }
        plVar8 = plVar5 + 2;
        if (7 < (ulonglong)plVar5[5]) {
          plVar8 = (longlong *)plVar5[2];
        }
        if (plVar5[4] == plVar12[4]) {
          if (plVar5[4] == 0) {
            bVar14 = false;
          }
          else {
            iVar6 = FUN_1801594c0(plVar8,plVar10);
            bVar14 = iVar6 != 0;
          }
        }
        else {
          bVar14 = true;
        }
        if (!bVar14) {
          lVar11 = *plVar12;
          plVar10 = (longlong *)plVar5[1];
          *plVar10 = (longlong)plVar2;
          plVar12 = (longlong *)plVar2[1];
          *plVar12 = lVar11;
          puVar13 = *(undefined8 **)(lVar11 + 8);
          *puVar13 = plVar5;
          *(longlong **)(lVar11 + 8) = plVar12;
          plVar2[1] = (longlong)plVar10;
          plVar5[1] = (longlong)puVar13;
          plVar5 = plVar2;
          goto joined_r0x0001801b8898;
        }
      } while ((longlong *)*puVar13 != plVar12);
    }
    plVar10 = (longlong *)plVar5[1];
    *plVar10 = (longlong)plVar2;
    puVar3 = (undefined8 *)plVar2[1];
    *puVar3 = plVar12;
    puVar4 = (undefined8 *)plVar12[1];
    *puVar4 = plVar5;
    plVar12[1] = (longlong)puVar3;
    plVar2[1] = (longlong)plVar10;
    plVar5[1] = (longlong)puVar4;
    *puVar13 = plVar5;
    plVar5 = plVar2;
  } while( true );
}



