// FUN_1803ddc60 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1803ddc60 */

void FUN_1803ddc60(undefined8 param_1,ulonglong param_2)

{
  int iVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  size_t sVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  int iVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  undefined8 *puVar13;
  longlong *plVar14;
  longlong *_Buf2;
  longlong lVar15;
  undefined8 *puVar16;
  
  puVar9 = DAT_180cc9278;
  for (uVar11 = 0x3f; 0xfffffffffffffffU >> uVar11 == 0; uVar11 = uVar11 - 1) {
  }
  if ((ulonglong)(1L << (uVar11 & 0x3f)) < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1805fa8b8("invalid hash bucket count");
  }
  uVar11 = param_2 - 1 | 1;
  lVar15 = 0x3f;
  if (uVar11 != 0) {
    for (; uVar11 >> lVar15 == 0; lVar15 = lVar15 + -1) {
    }
  }
  lVar15 = 1L << ((ulonglong)((int)lVar15 + 1) & 0x3f);
  FUN_1801406e0(&DAT_180cc9288,lVar15 * 2,DAT_180cc9278);
  DAT_180cc92a8 = lVar15;
  uVar11 = lVar15 - 1;
  puVar8 = (undefined8 *)*DAT_180cc9278;
joined_r0x0001803ddced:
  do {
    while( true ) {
      if (puVar8 == puVar9) {
        DAT_180cc92a0 = uVar11;
        return;
      }
      puVar2 = (undefined8 *)*puVar8;
      DAT_180cc92a0 = uVar11;
      uVar12 = FUN_1803dce20();
      puVar16 = (undefined8 *)((uVar11 & uVar12) * 0x10 + DAT_180cc9288);
      if ((undefined8 *)*puVar16 != puVar9) break;
      *puVar16 = puVar8;
      puVar16[1] = puVar8;
      uVar11 = DAT_180cc92a0;
      puVar8 = puVar2;
    }
    plVar3 = (longlong *)puVar16[1];
    iVar1 = *(int *)(puVar8 + 6);
    plVar14 = plVar3 + 2;
    if (iVar1 != (int)plVar3[6]) {
LAB_1803ddda5:
      plVar14 = (longlong *)*puVar16;
      do {
        do {
          if (plVar14 == plVar3) {
            puVar13 = (undefined8 *)puVar8[1];
            *puVar13 = puVar2;
            puVar5 = (undefined8 *)puVar2[1];
            *puVar5 = plVar3;
            puVar6 = (undefined8 *)plVar3[1];
            *puVar6 = puVar8;
            plVar3[1] = (longlong)puVar5;
            puVar2[1] = puVar13;
            puVar8[1] = puVar6;
            *puVar16 = puVar8;
            uVar11 = DAT_180cc92a0;
            puVar8 = puVar2;
            goto joined_r0x0001803ddced;
          }
          plVar3 = (longlong *)plVar3[1];
          _Buf2 = plVar3 + 2;
        } while (iVar1 != (int)plVar3[6]);
        if (0xf < (ulonglong)plVar3[5]) {
          _Buf2 = (longlong *)*_Buf2;
        }
        puVar13 = puVar8 + 2;
        sVar4 = puVar8[4];
        if (0xf < (ulonglong)puVar8[5]) {
          puVar13 = (undefined8 *)puVar8[2];
        }
      } while ((sVar4 != plVar3[4]) ||
              ((sVar4 != 0 && (iVar10 = memcmp(puVar13,_Buf2,sVar4), iVar10 != 0))));
      lVar15 = *plVar3;
      puVar16 = (undefined8 *)puVar8[1];
      *puVar16 = puVar2;
      plVar14 = (longlong *)puVar2[1];
      *plVar14 = lVar15;
      puVar13 = *(undefined8 **)(lVar15 + 8);
      *puVar13 = puVar8;
      *(longlong **)(lVar15 + 8) = plVar14;
      puVar2[1] = puVar16;
      puVar8[1] = puVar13;
      uVar11 = DAT_180cc92a0;
      puVar8 = puVar2;
      goto joined_r0x0001803ddced;
    }
    if (0xf < (ulonglong)plVar3[5]) {
      plVar14 = (longlong *)*plVar14;
    }
    puVar13 = puVar8 + 2;
    sVar4 = puVar8[4];
    if (0xf < (ulonglong)puVar8[5]) {
      puVar13 = (undefined8 *)puVar8[2];
    }
    if ((sVar4 != plVar3[4]) ||
       ((sVar4 != 0 && (iVar10 = memcmp(puVar13,plVar14,sVar4), iVar10 != 0)))) goto LAB_1803ddda5;
    puVar13 = (undefined8 *)*plVar3;
    if (puVar13 != puVar8) {
      puVar5 = (undefined8 *)puVar8[1];
      *puVar5 = puVar2;
      puVar6 = (undefined8 *)puVar2[1];
      *puVar6 = puVar13;
      puVar7 = (undefined8 *)puVar13[1];
      *puVar7 = puVar8;
      puVar13[1] = puVar6;
      puVar2[1] = puVar5;
      puVar8[1] = puVar7;
    }
    puVar16[1] = puVar8;
    uVar11 = DAT_180cc92a0;
    puVar8 = puVar2;
  } while( true );
}



