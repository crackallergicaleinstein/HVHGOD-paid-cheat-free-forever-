// FUN_1805715d0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805715d0 */

void FUN_1805715d0(undefined8 param_1,ulonglong param_2)

{
  byte *pbVar1;
  undefined8 *puVar2;
  ulonglong _Size;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  int iVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  undefined8 *puVar12;
  ulonglong uVar13;
  longlong *plVar14;
  longlong *_Buf2;
  longlong lVar15;
  undefined8 *puVar16;
  
  puVar8 = DAT_180c63058;
  for (uVar10 = 0x3f; 0xfffffffffffffffU >> uVar10 == 0; uVar10 = uVar10 - 1) {
  }
  if ((ulonglong)(1L << (uVar10 & 0x3f)) < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1805fa8b8("invalid hash bucket count");
  }
  uVar10 = param_2 - 1 | 1;
  lVar15 = 0x3f;
  if (uVar10 != 0) {
    for (; uVar10 >> lVar15 == 0; lVar15 = lVar15 + -1) {
    }
  }
  lVar15 = 1L << ((ulonglong)((int)lVar15 + 1) & 0x3f);
  FUN_1801b77b0(&DAT_180c63068);
  DAT_180c63080 = lVar15 - 1;
  DAT_180c63088 = lVar15;
  puVar7 = (undefined8 *)*DAT_180c63058;
joined_r0x00018057165a:
  do {
    if (puVar7 == puVar8) {
      return;
    }
    uVar10 = puVar7[5];
    puVar16 = puVar7 + 2;
    puVar2 = (undefined8 *)*puVar7;
    _Size = puVar7[4];
    if (0xf < uVar10) {
      puVar16 = (undefined8 *)puVar7[2];
    }
    uVar13 = 0;
    uVar11 = 0xcbf29ce484222325;
    if (_Size != 0) {
      do {
        pbVar1 = (byte *)(uVar13 + (longlong)puVar16);
        uVar13 = uVar13 + 1;
        uVar11 = (uVar11 ^ *pbVar1) * 0x100000001b3;
      } while (uVar13 < _Size);
    }
    puVar16 = (undefined8 *)((DAT_180c63080 & uVar11) * 0x10 + DAT_180c63068);
    if ((undefined8 *)*puVar16 == puVar8) {
      *puVar16 = puVar7;
LAB_180571808:
      puVar16[1] = puVar7;
      puVar7 = puVar2;
      goto joined_r0x00018057165a;
    }
    plVar3 = (longlong *)puVar16[1];
    plVar14 = plVar3 + 2;
    if (0xf < (ulonglong)plVar3[5]) {
      plVar14 = (longlong *)*plVar14;
    }
    puVar12 = puVar7 + 2;
    if (0xf < uVar10) {
      puVar12 = (undefined8 *)puVar7[2];
    }
    if ((_Size == plVar3[4]) &&
       ((_Size == 0 || (iVar9 = memcmp(puVar12,plVar14,_Size), iVar9 == 0)))) {
      puVar12 = (undefined8 *)*plVar3;
      if (puVar12 != puVar7) {
        puVar4 = (undefined8 *)puVar7[1];
        *puVar4 = puVar2;
        puVar5 = (undefined8 *)puVar2[1];
        *puVar5 = puVar12;
        puVar6 = (undefined8 *)puVar12[1];
        *puVar6 = puVar7;
        puVar12[1] = puVar5;
        puVar2[1] = puVar4;
        puVar7[1] = puVar6;
      }
      goto LAB_180571808;
    }
    plVar14 = (longlong *)*puVar16;
    do {
      if (plVar14 == plVar3) {
        puVar12 = (undefined8 *)puVar7[1];
        *puVar12 = puVar2;
        puVar4 = (undefined8 *)puVar2[1];
        *puVar4 = plVar3;
        puVar5 = (undefined8 *)plVar3[1];
        *puVar5 = puVar7;
        plVar3[1] = (longlong)puVar4;
        puVar2[1] = puVar12;
        puVar7[1] = puVar5;
        *puVar16 = puVar7;
        puVar7 = puVar2;
        goto joined_r0x00018057165a;
      }
      plVar3 = (longlong *)plVar3[1];
      _Buf2 = plVar3 + 2;
      if (0xf < (ulonglong)plVar3[5]) {
        _Buf2 = (longlong *)*_Buf2;
      }
      puVar12 = puVar7 + 2;
      if (0xf < uVar10) {
        puVar12 = (undefined8 *)puVar7[2];
      }
    } while ((_Size != plVar3[4]) ||
            ((_Size != 0 && (iVar9 = memcmp(puVar12,_Buf2,_Size), iVar9 != 0))));
    lVar15 = *plVar3;
    puVar16 = (undefined8 *)puVar7[1];
    *puVar16 = puVar2;
    plVar14 = (longlong *)puVar2[1];
    *plVar14 = lVar15;
    puVar12 = *(undefined8 **)(lVar15 + 8);
    *puVar12 = puVar7;
    *(longlong **)(lVar15 + 8) = plVar14;
    puVar2[1] = puVar16;
    puVar7[1] = puVar12;
    puVar7 = puVar2;
  } while( true );
}



