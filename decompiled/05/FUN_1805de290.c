// FUN_1805de290 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805de290 */

ulonglong FUN_1805de290(undefined2 *param_1,ulonglong param_2,ulonglong *param_3,ulonglong param_4,
                       longlong param_5)

{
  ulonglong *puVar1;
  longlong lVar2;
  undefined2 *puVar3;
  longlong lVar4;
  byte bVar5;
  byte bVar6;
  ulonglong uVar7;
  ulonglong *puVar8;
  ulonglong uVar9;
  char cVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  char cVar15;
  undefined2 *puVar16;
  bool bVar17;
  char cVar18;
  
  if (param_4 == 0) {
    return 0xffffffffffffffb8;
  }
  puVar1 = param_3 + 1;
  if (param_4 < 8) {
    uVar9 = (ulonglong)(byte)*param_3;
    switch(param_4) {
    case 7:
      uVar9 = ((ulonglong)*(byte *)((longlong)param_3 + 6) << 0x30) + uVar9;
    case 6:
      uVar9 = uVar9 + ((ulonglong)*(byte *)((longlong)param_3 + 5) << 0x28);
    case 5:
      uVar9 = uVar9 + ((ulonglong)*(byte *)((longlong)param_3 + 4) << 0x20);
    case 4:
      uVar9 = uVar9 + (ulonglong)*(byte *)((longlong)param_3 + 3) * 0x1000000;
    case 3:
      uVar9 = uVar9 + (ulonglong)*(byte *)((longlong)param_3 + 2) * 0x10000;
    case 2:
      uVar9 = uVar9 + (ulonglong)*(byte *)((longlong)param_3 + 1) * 0x100;
    }
    bVar5 = *(byte *)((longlong)param_3 + (param_4 - 1));
    if (bVar5 == 0) {
      return 0xffffffffffffffec;
    }
    iVar13 = (9 - (int)param_4) * 8;
    puVar8 = param_3;
  }
  else {
    bVar5 = *(byte *)((longlong)param_3 + (param_4 - 1));
    puVar8 = (ulonglong *)((param_4 - 8) + (longlong)param_3);
    uVar9 = *puVar8;
    if (bVar5 == 0) {
      return 0xffffffffffffffff;
    }
    iVar13 = 8;
  }
  iVar12 = 0x1f;
  if (bVar5 != 0) {
    for (; bVar5 >> iVar12 == 0; iVar12 = iVar12 + -1) {
    }
  }
  uVar14 = iVar13 - iVar12;
  if (0xffffffffffffff88 < param_4) {
    return param_4;
  }
  puVar16 = (undefined2 *)((longlong)param_1 + param_2);
  if ((longlong)param_2 < 1) {
    puVar16 = param_1;
  }
  bVar5 = *(byte *)(param_5 + 2);
  lVar2 = param_5 + 4;
  iVar13 = (int)param_3;
  if (7 < (ulonglong)((longlong)puVar16 - (longlong)param_1)) {
    if (0xb < bVar5) {
      do {
        if (uVar14 < 0x41) {
          if (puVar8 < puVar1) {
            if (puVar8 == param_3) {
              uVar11 = 2 - (uVar14 < 0x40);
              goto LAB_1805de5bb;
            }
            uVar9 = (ulonglong)(uVar14 >> 3);
            bVar17 = (ulonglong *)((longlong)puVar8 - uVar9) < param_3;
            if (bVar17) {
              uVar9 = (ulonglong)(uint)((int)puVar8 - iVar13);
            }
            uVar11 = (uint)bVar17;
            uVar14 = uVar14 + (int)uVar9 * -8;
          }
          else {
            uVar9 = (ulonglong)(uVar14 >> 3);
            uVar11 = 0;
            uVar14 = uVar14 & 7;
          }
          puVar8 = (ulonglong *)((longlong)puVar8 - uVar9);
          uVar9 = *puVar8;
        }
        else {
          puVar8 = (ulonglong *)&DAT_1806877f0;
          uVar11 = 3;
        }
LAB_1805de5bb:
        if (uVar11 != 0 || (undefined2 *)((longlong)puVar16 - 7U) <= param_1) goto LAB_1805de6e1;
        bVar6 = -bVar5 & 0x3f;
        uVar7 = (uVar9 << ((byte)uVar14 & 0x3f)) >> bVar6;
        *param_1 = *(undefined2 *)(lVar2 + uVar7 * 4);
        iVar12 = *(byte *)(param_5 + 6 + uVar7 * 4) + uVar14;
        param_1 = (undefined2 *)((ulonglong)*(byte *)(param_5 + 7 + uVar7 * 4) + (longlong)param_1);
        uVar7 = (uVar9 << ((byte)iVar12 & 0x3f)) >> bVar6;
        lVar4 = lVar2 + uVar7 * 4;
        *param_1 = *(undefined2 *)(lVar2 + uVar7 * 4);
        iVar12 = (uint)*(byte *)(lVar4 + 2) + iVar12;
        param_1 = (undefined2 *)((ulonglong)*(byte *)(lVar4 + 3) + (longlong)param_1);
        uVar7 = (uVar9 << ((byte)iVar12 & 0x3f)) >> bVar6;
        lVar4 = lVar2 + uVar7 * 4;
        *param_1 = *(undefined2 *)(lVar2 + uVar7 * 4);
        iVar12 = (uint)*(byte *)(lVar4 + 2) + iVar12;
        param_1 = (undefined2 *)((ulonglong)*(byte *)(lVar4 + 3) + (longlong)param_1);
        uVar7 = (uVar9 << ((byte)iVar12 & 0x3f)) >> bVar6;
        lVar4 = lVar2 + uVar7 * 4;
        *param_1 = *(undefined2 *)(lVar2 + uVar7 * 4);
        uVar14 = (uint)*(byte *)(lVar4 + 2) + iVar12;
        param_1 = (undefined2 *)((ulonglong)*(byte *)(lVar4 + 3) + (longlong)param_1);
      } while( true );
    }
    do {
      if (uVar14 < 0x41) {
        if (puVar8 < puVar1) {
          if (puVar8 == param_3) {
            uVar11 = 2 - (uVar14 < 0x40);
            goto LAB_1805de44e;
          }
          uVar9 = (ulonglong)(uVar14 >> 3);
          bVar17 = (ulonglong *)((longlong)puVar8 - uVar9) < param_3;
          if (bVar17) {
            uVar9 = (ulonglong)(uint)((int)puVar8 - iVar13);
          }
          uVar11 = (uint)bVar17;
          uVar14 = uVar14 + (int)uVar9 * -8;
        }
        else {
          uVar9 = (ulonglong)(uVar14 >> 3);
          uVar11 = 0;
          uVar14 = uVar14 & 7;
        }
        puVar8 = (ulonglong *)((longlong)puVar8 - uVar9);
        uVar9 = *puVar8;
      }
      else {
        puVar8 = (ulonglong *)&DAT_1806877f0;
        uVar11 = 3;
      }
LAB_1805de44e:
      if (uVar11 != 0 || (undefined2 *)((longlong)puVar16 - 9U) <= param_1) goto LAB_1805de6e1;
      bVar6 = -bVar5 & 0x3f;
      uVar7 = (uVar9 << ((byte)uVar14 & 0x3f)) >> bVar6;
      *param_1 = *(undefined2 *)(lVar2 + uVar7 * 4);
      iVar12 = *(byte *)(param_5 + 6 + uVar7 * 4) + uVar14;
      param_1 = (undefined2 *)((ulonglong)*(byte *)(param_5 + 7 + uVar7 * 4) + (longlong)param_1);
      uVar7 = (uVar9 << ((byte)iVar12 & 0x3f)) >> bVar6;
      lVar4 = lVar2 + uVar7 * 4;
      *param_1 = *(undefined2 *)(lVar2 + uVar7 * 4);
      iVar12 = (uint)*(byte *)(lVar4 + 2) + iVar12;
      param_1 = (undefined2 *)((ulonglong)*(byte *)(lVar4 + 3) + (longlong)param_1);
      uVar7 = (uVar9 << ((byte)iVar12 & 0x3f)) >> bVar6;
      lVar4 = lVar2 + uVar7 * 4;
      *param_1 = *(undefined2 *)(lVar2 + uVar7 * 4);
      iVar12 = (uint)*(byte *)(lVar4 + 2) + iVar12;
      param_1 = (undefined2 *)((ulonglong)*(byte *)(lVar4 + 3) + (longlong)param_1);
      uVar7 = (uVar9 << ((byte)iVar12 & 0x3f)) >> bVar6;
      lVar4 = lVar2 + uVar7 * 4;
      *param_1 = *(undefined2 *)(lVar2 + uVar7 * 4);
      iVar12 = (uint)*(byte *)(lVar4 + 2) + iVar12;
      param_1 = (undefined2 *)((ulonglong)*(byte *)(lVar4 + 3) + (longlong)param_1);
      uVar7 = (uVar9 << ((byte)iVar12 & 0x3f)) >> bVar6;
      lVar4 = lVar2 + uVar7 * 4;
      *param_1 = *(undefined2 *)(lVar2 + uVar7 * 4);
      uVar14 = (uint)*(byte *)(lVar4 + 2) + iVar12;
      param_1 = (undefined2 *)((ulonglong)*(byte *)(lVar4 + 3) + (longlong)param_1);
    } while( true );
  }
  if (uVar14 < 0x41) {
    if (puVar8 < puVar1) {
      if (puVar8 != param_3) {
        uVar7 = (ulonglong)(uVar14 >> 3);
        if ((ulonglong *)((longlong)puVar8 - uVar7) < param_3) {
          uVar7 = (ulonglong)(uint)((int)puVar8 - iVar13);
        }
        puVar8 = (ulonglong *)((longlong)puVar8 - uVar7);
        uVar9 = *puVar8;
        uVar14 = uVar14 + (int)uVar7 * -8;
      }
    }
    else {
      puVar8 = (ulonglong *)((longlong)puVar8 - (ulonglong)(uVar14 >> 3));
      uVar14 = uVar14 & 7;
      uVar9 = *puVar8;
    }
  }
  else {
    puVar8 = (ulonglong *)&DAT_1806877f0;
  }
LAB_1805de6e1:
  if (1 < (ulonglong)((longlong)puVar16 - (longlong)param_1)) {
    puVar3 = puVar16 + -1;
    cVar15 = '?' - bVar5;
    cVar10 = cVar15;
    do {
      if (uVar14 < 0x41) {
        if (puVar8 < puVar1) {
          if (puVar8 == param_3) {
            if (uVar14 < 0x40) {
              cVar18 = '\x01';
              cVar10 = cVar15;
            }
            else {
              cVar18 = '\x02';
              cVar10 = cVar15;
            }
            goto LAB_1805de77b;
          }
          uVar9 = (ulonglong)(uVar14 >> 3);
          cVar18 = (ulonglong *)((longlong)puVar8 - uVar9) < param_3;
          if ((bool)cVar18) {
            uVar9 = (ulonglong)(uint)((int)puVar8 - iVar13);
          }
          uVar14 = uVar14 + (int)uVar9 * -8;
        }
        else {
          uVar9 = (ulonglong)(uVar14 >> 3);
          cVar18 = false;
          uVar14 = uVar14 & 7;
        }
        puVar8 = (ulonglong *)((longlong)puVar8 - uVar9);
        uVar9 = *puVar8;
        cVar10 = cVar15;
      }
      else {
        puVar8 = (ulonglong *)&DAT_1806877f0;
        cVar18 = '\x03';
      }
LAB_1805de77b:
      if (cVar18 != '\0' || puVar3 < param_1) goto LAB_1805de7c7;
      cVar10 = -bVar5 + '?';
      uVar7 = (uVar9 << ((byte)uVar14 & 0x3f)) >> (-bVar5 + 0x40 & 0x3f);
      *param_1 = *(undefined2 *)(lVar2 + uVar7 * 4);
      uVar14 = uVar14 + *(byte *)(param_5 + 6 + uVar7 * 4);
      param_1 = (undefined2 *)((longlong)param_1 + (ulonglong)*(byte *)(param_5 + 7 + uVar7 * 4));
    } while( true );
  }
LAB_1805de813:
  if (param_1 < puVar16) {
    uVar9 = (uVar9 << ((byte)uVar14 & 0x3f)) >> (-bVar5 & 0x3f);
    *(undefined1 *)param_1 = *(undefined1 *)(lVar2 + uVar9 * 4);
    if (*(char *)(param_5 + 7 + uVar9 * 4) == '\x01') {
      uVar14 = uVar14 + *(byte *)(param_5 + 6 + uVar9 * 4);
    }
    else if ((uVar14 < 0x40) &&
            (uVar14 = uVar14 + *(byte *)(param_5 + 6 + uVar9 * 4), 0x40 < uVar14)) {
      uVar14 = 0x40;
    }
  }
  if ((puVar8 == param_3) && (uVar14 == 0x40)) {
    return param_2;
  }
  return 0xffffffffffffffec;
LAB_1805de7c7:
  if (param_1 <= puVar3) {
    do {
      uVar7 = (uVar9 << ((byte)uVar14 & 0x3f)) >> (cVar10 + 1U & 0x3f);
      *param_1 = *(undefined2 *)(lVar2 + uVar7 * 4);
      uVar14 = uVar14 + *(byte *)(param_5 + 6 + uVar7 * 4);
      param_1 = (undefined2 *)((longlong)param_1 + (ulonglong)*(byte *)(param_5 + 7 + uVar7 * 4));
    } while (param_1 <= puVar3);
  }
  goto LAB_1805de813;
}



