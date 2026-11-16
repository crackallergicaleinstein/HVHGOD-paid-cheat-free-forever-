// FUN_1801b7e40 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801b7e40 */

void FUN_1801b7e40(longlong param_1,ulonglong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  int iVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  longlong *plVar10;
  ulonglong uVar11;
  longlong *plVar12;
  longlong lVar13;
  longlong *plVar14;
  undefined8 *puVar15;
  
  for (uVar8 = 0x3f; 0xfffffffffffffffU >> uVar8 == 0; uVar8 = uVar8 - 1) {
  }
  if ((ulonglong)(1L << (uVar8 & 0x3f)) < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1805fa8b8("invalid hash bucket count");
  }
  uVar8 = param_2 - 1 | 1;
  lVar13 = 0x3f;
  if (uVar8 != 0) {
    for (; uVar8 >> lVar13 == 0; lVar13 = lVar13 + -1) {
    }
  }
  lVar13 = 1L << ((ulonglong)((int)lVar13 + 1) & 0x3f);
  plVar1 = *(longlong **)(param_1 + 8);
  FUN_1801406e0(param_1 + 0x18,lVar13 * 2,plVar1);
  *(longlong *)(param_1 + 0x30) = lVar13 + -1;
  *(longlong *)(param_1 + 0x38) = lVar13;
  plVar6 = (longlong *)**(undefined8 **)(param_1 + 8);
joined_r0x0001801b7ec0:
  do {
    if (plVar6 == plVar1) {
      return;
    }
    plVar2 = (longlong *)*plVar6;
    uVar8 = plVar6[4];
    plVar14 = plVar6 + 2;
    if (0xf < (ulonglong)plVar6[5]) {
      plVar14 = (longlong *)plVar6[2];
    }
    uVar11 = 0xcbf29ce484222325;
    uVar9 = 0;
    if (uVar8 != 0) {
      do {
        uVar11 = (uVar11 ^ *(byte *)((longlong)plVar14 + uVar9)) * 0x100000001b3;
        uVar9 = uVar9 + 1;
      } while (uVar9 < uVar8);
    }
    puVar15 = (undefined8 *)
              (*(longlong *)(param_1 + 0x18) + (*(ulonglong *)(param_1 + 0x30) & uVar11) * 0x10);
    plVar14 = (longlong *)*puVar15;
    if (plVar14 == plVar1) {
      *puVar15 = plVar6;
LAB_1801b8079:
      puVar15[1] = plVar6;
      plVar6 = plVar2;
      goto joined_r0x0001801b7ec0;
    }
    plVar3 = (longlong *)puVar15[1];
    plVar12 = plVar3 + 2;
    if (0xf < (ulonglong)plVar3[5]) {
      plVar12 = (longlong *)*plVar12;
    }
    plVar10 = plVar6 + 2;
    uVar9 = plVar6[5];
    if (0xf < uVar9) {
      plVar10 = (longlong *)plVar6[2];
    }
    if ((uVar8 == plVar3[4]) &&
       ((uVar8 == 0 || (iVar7 = memcmp(plVar10,plVar12,uVar8), iVar7 == 0)))) {
      plVar3 = (longlong *)*plVar3;
      if (plVar3 != plVar6) {
        plVar14 = (longlong *)plVar6[1];
        *plVar14 = (longlong)plVar2;
        puVar4 = (undefined8 *)plVar2[1];
        *puVar4 = plVar3;
        puVar5 = (undefined8 *)plVar3[1];
        *puVar5 = plVar6;
        plVar3[1] = (longlong)puVar4;
        plVar2[1] = (longlong)plVar14;
        plVar6[1] = (longlong)puVar5;
      }
      goto LAB_1801b8079;
    }
    do {
      if (plVar14 == plVar3) {
        plVar14 = (longlong *)plVar6[1];
        *plVar14 = (longlong)plVar2;
        puVar4 = (undefined8 *)plVar2[1];
        *puVar4 = plVar3;
        puVar5 = (undefined8 *)plVar3[1];
        *puVar5 = plVar6;
        plVar3[1] = (longlong)puVar4;
        plVar2[1] = (longlong)plVar14;
        plVar6[1] = (longlong)puVar5;
        *puVar15 = plVar6;
        plVar6 = plVar2;
        goto joined_r0x0001801b7ec0;
      }
      plVar3 = (longlong *)plVar3[1];
      plVar12 = plVar3 + 2;
      if (0xf < (ulonglong)plVar3[5]) {
        plVar12 = (longlong *)*plVar12;
      }
      plVar10 = plVar6 + 2;
      if (0xf < uVar9) {
        plVar10 = (longlong *)plVar6[2];
      }
    } while ((uVar8 != plVar3[4]) ||
            ((uVar8 != 0 && (iVar7 = memcmp(plVar10,plVar12,uVar8), iVar7 != 0))));
    lVar13 = *plVar3;
    plVar14 = (longlong *)plVar6[1];
    *plVar14 = (longlong)plVar2;
    plVar12 = (longlong *)plVar2[1];
    *plVar12 = lVar13;
    puVar15 = *(undefined8 **)(lVar13 + 8);
    *puVar15 = plVar6;
    *(longlong **)(lVar13 + 8) = plVar12;
    plVar2[1] = (longlong)plVar14;
    plVar6[1] = (longlong)puVar15;
    plVar6 = plVar2;
  } while( true );
}



