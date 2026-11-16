// FUN_180574690 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180574690 */

int FUN_180574690(longlong param_1,undefined4 param_2,uint param_3)

{
  uint *puVar1;
  int *piVar2;
  ushort uVar3;
  ushort uVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  code *pcVar10;
  int *piVar11;
  int iVar12;
  undefined4 uVar13;
  int *piVar14;
  uint uVar15;
  int iVar16;
  undefined4 uVar17;
  int iVar18;
  undefined8 uVar19;
  ushort *puVar20;
  uint uVar21;
  longlong lVar22;
  ushort uVar23;
  uint uVar24;
  int iVar25;
  longlong lVar26;
  uint uVar27;
  int iVar28;
  longlong lVar29;
  uint uVar30;
  longlong lVar31;
  uint uVar32;
  bool bVar33;
  
  if (((param_1 == 0) || (*(longlong *)(param_1 + 0x80) == 0)) ||
     (lVar7 = *(longlong *)(param_1 + 0x78), lVar7 == 0)) {
    return 0x23;
  }
  if ((*(longlong *)(lVar7 + 0xf0) == 0) || ((*(byte *)(*(longlong *)(lVar7 + 0xf0) + 8) & 1) == 0))
  {
    *(undefined8 *)(lVar7 + 0x78) = 0;
  }
  else {
    if (*(longlong *)(lVar7 + 0x78) != 0) {
      (**(code **)(*(longlong *)(*(longlong *)(lVar7 + 8) + 0x98) + 0x10))();
    }
    *(undefined8 *)(lVar7 + 0x78) = 0;
    puVar1 = (uint *)(*(longlong *)(lVar7 + 0xf0) + 8);
    *puVar1 = *puVar1 & 0xfffffffe;
  }
  uVar23 = 0;
  *(undefined4 *)(lVar7 + 0x18) = 0;
  puVar20 = (ushort *)(lVar7 + 0x98);
  *(undefined8 *)(lVar7 + 0x30) = 0;
  *(undefined8 *)(lVar7 + 0x38) = 0;
  *(undefined8 *)(lVar7 + 0x40) = 0;
  *(undefined8 *)(lVar7 + 0x48) = 0;
  puVar20[0] = 0;
  puVar20[1] = 0;
  puVar20[2] = 0;
  puVar20[3] = 0;
  *(undefined8 *)(lVar7 + 0xa0) = 0;
  *(undefined8 *)(lVar7 + 0xa8) = 0;
  *(undefined8 *)(lVar7 + 0xb0) = 0;
  *(undefined8 *)(lVar7 + 0xb8) = 0;
  *(undefined8 *)(lVar7 + 0x68) = 0;
  *(undefined4 *)(lVar7 + 0x70) = 0;
  *(undefined1 *)(lVar7 + 0x82) = 0;
  *(undefined8 *)(lVar7 + 0x90) = 0;
  *(undefined4 *)(lVar7 + 0xc0) = 0;
  *(undefined8 *)(lVar7 + 200) = 0;
  *(undefined8 *)(lVar7 + 0xd0) = 0;
  *(undefined4 *)(lVar7 + 0xd8) = 0;
  if ((*(uint *)(*(longlong *)(lVar7 + 8) + 8) & 0x10000) == 0) {
    *(undefined8 *)(lVar7 + 0xe8) = 0;
  }
  else if ((*(byte *)(*(longlong *)(lVar7 + 0xf0) + 8) & 2) != 0) {
    plVar9 = *(longlong **)(lVar7 + 0xe8);
    if (*plVar9 != 0) {
      (**(code **)(*(longlong *)(*(longlong *)(lVar7 + 8) + 0x98) + 0x10))();
    }
    *plVar9 = 0;
    puVar1 = (uint *)(*(longlong *)(lVar7 + 0xf0) + 8);
    *puVar1 = *puVar1 & 0xfffffffd;
  }
  *(undefined8 *)(lVar7 + 0x5c) = 0;
  *(undefined8 *)(lVar7 + 0x50) = 0;
  *(undefined4 *)(lVar7 + 0x58) = 0;
  *(undefined8 *)(lVar7 + 0xdc) = 0;
  puVar8 = *(undefined8 **)(param_1 + 0x90);
  plVar9 = *(longlong **)(puVar8[1] + 0x130);
  if ((*(short *)(*(longlong *)(param_1 + 0x80) + 0x18) == 0) ||
     (*(short *)(*(longlong *)(param_1 + 0x80) + 0x1a) == 0)) {
    param_3 = param_3 | 1;
  }
  uVar15 = param_3 | 0x801;
  if ((param_3 >> 10 & 1) == 0) {
    uVar15 = param_3;
  }
  if ((uVar15 & 1) != 0) {
    uVar15 = uVar15 & 0xfffffffb | 10;
  }
  uVar32 = uVar15 & 0xfffffffb;
  if ((uVar15 >> 0x16 & 1) == 0) {
    uVar32 = uVar15;
  }
  if (((plVar9 == (longlong *)0x0) || ((uVar32 & 0x8002) != 0)) ||
     ((*(uint *)(param_1 + 8) & 0x2001) != 1)) goto LAB_18057486e;
  if ((uVar32 >> 0xb & 1) == 0) {
    iVar12 = **(int **)(param_1 + 0xd0);
    if ((*(int **)(param_1 + 0xd0))[2] == 0) {
      if (iVar12 != 0) goto LAB_1805748cc;
    }
    else if (iVar12 == 0) goto LAB_1805748cc;
LAB_18057486e:
    iVar12 = (**(code **)(puVar8[3] + 0x78))(lVar7,*(undefined8 *)(param_1 + 0x80),param_2,uVar32);
    if (iVar12 != 0) {
      return iVar12;
    }
    if (*(int *)(lVar7 + 0x60) == 0x6f75746c) {
      if (puVar20 == (ushort *)0x0) {
        return 0x14;
      }
      uVar3 = *(ushort *)(lVar7 + 0x9a);
      uVar4 = *puVar20;
      if (uVar3 == 0) {
        bVar33 = uVar4 == 0;
      }
      else {
        if (uVar4 == 0) {
          return 0x14;
        }
        uVar15 = 0xffffffff;
        if (uVar4 != 0) {
          puVar20 = *(ushort **)(lVar7 + 0xb0);
          lVar22 = 0;
          do {
            if ((int)(uint)*puVar20 <= (int)uVar15) {
              return 0x14;
            }
            uVar15 = (uint)*puVar20;
            if (uVar3 <= uVar15) {
              return 0x14;
            }
            lVar22 = lVar22 + 1;
            puVar20 = puVar20 + 1;
          } while (lVar22 < (longlong)(ulonglong)uVar4);
        }
        bVar33 = uVar15 == uVar3 - 1;
      }
      if (!bVar33) {
        return 0x14;
      }
      if ((uVar32 & 2) == 0) {
        uVar15 = *(uint *)(lVar7 + 0x44);
        uVar5 = *(uint *)(lVar7 + 0x38);
        uVar24 = uVar15 & 0xffffffc0;
        *(uint *)(lVar7 + 0x44) = uVar24;
        uVar27 = uVar5 & 0xffffffc0;
        uVar6 = *(uint *)(lVar7 + 0x48);
        uVar30 = uVar6 & 0xffffffc0;
        *(uint *)(lVar7 + 0x38) = uVar27;
        *(uint *)(lVar7 + 0x48) = uVar30;
        uVar21 = *(int *)(lVar7 + 0x3c) + 0x3fU & 0xffffffc0;
        if ((uVar32 & 0x10) == 0) {
          iVar16 = uVar21 - (*(int *)(lVar7 + 0x3c) - *(int *)(lVar7 + 0x34) & 0xffffffc0U);
          iVar12 = (uVar5 + 0x3f + *(int *)(lVar7 + 0x30) & 0xffffffc0) - uVar27;
        }
        else {
          iVar16 = (*(int *)(lVar7 + 0x34) + 0x3f + uVar6 & 0xffffffc0) - uVar30;
          iVar12 = (uVar15 + 0x3f + *(int *)(lVar7 + 0x30) & 0xffffffc0) - uVar24;
        }
        *(int *)(lVar7 + 0x30) = iVar12;
        *(uint *)(lVar7 + 0x3c) = uVar21;
        *(int *)(lVar7 + 0x34) = iVar16;
        *(uint *)(lVar7 + 0x40) = *(int *)(lVar7 + 0x40) + 0x20U & 0xffffffc0;
        *(uint *)(lVar7 + 0x4c) = *(int *)(lVar7 + 0x4c) + 0x20U & 0xffffffc0;
      }
    }
LAB_180574b2f:
    iVar12 = 0;
  }
  else {
LAB_1805748cc:
    if (((uVar32 & 0x20) == 0) && ((*(uint *)*puVar8 & 0x400) != 0)) {
      pcVar10 = *(code **)((uint *)*puVar8 + 0xc);
      uVar19 = 0;
      if (pcVar10 != (code *)0x0) {
        uVar19 = (*pcVar10)(puVar8,"font-format");
      }
      lVar22 = FUN_180606b80(uVar19,"Type 1");
      if ((lVar22 == 0) || (*(int *)(puVar8 + 7) != 1)) {
        bVar33 = false;
      }
      else {
        bVar33 = true;
      }
      if (((((uVar32 & 0xf0000) != 0x10000) || ((*(uint *)*puVar8 & 0x800) != 0)) || (bVar33)) &&
         ((((*(byte *)(param_1 + 8) & 8) == 0 || (*(int *)(param_1 + 0x438) == 0)) ||
          ((*(int *)(param_1 + 0x3b0) != 0 || (7 < *(uint *)(param_1 + 0x3c0)))))))
      goto LAB_18057486e;
    }
    if (((((uVar32 >> 0x18 & 1) == 0) && ((*(uint *)(param_1 + 8) & 0x10000) != 0)) &&
        ((iVar12 = (**(code **)(puVar8[3] + 0x78))
                             (lVar7,*(undefined8 *)(param_1 + 0x80),param_2,uVar32 | 0x800000),
         iVar12 == 0 && (*(int *)(lVar7 + 0x60) == 0x53564720)))) ||
       (((((*(byte *)(param_1 + 8) & 2) != 0 && ((uVar32 & 8) == 0)) &&
         (iVar12 = (**(code **)(puVar8[3] + 0x78))
                             (lVar7,*(undefined8 *)(param_1 + 0x80),param_2,uVar32 | 0x4000),
         iVar12 == 0)) && (*(int *)(lVar7 + 0x60) == 0x62697473)))) goto LAB_180574b2f;
    lVar22 = *(longlong *)(param_1 + 0xd0);
    uVar13 = *(undefined4 *)(lVar22 + 0x18);
    *(undefined4 *)(lVar22 + 0x18) = 0;
    iVar12 = (**(code **)(*(longlong *)(*plVar9 + 0x18) + 0x18))
                       (plVar9,lVar7,*(undefined8 *)(param_1 + 0x80),param_2,uVar32);
    *(undefined4 *)(lVar22 + 0x18) = uVar13;
  }
  if ((uVar32 & 0x10) == 0) {
    uVar17 = *(undefined4 *)(lVar7 + 0x40);
    uVar13 = 0;
  }
  else {
    uVar13 = *(undefined4 *)(lVar7 + 0x4c);
    uVar17 = 0;
  }
  *(undefined4 *)(lVar7 + 0x58) = uVar17;
  *(undefined4 *)(lVar7 + 0x5c) = uVar13;
  if (((uVar32 >> 0xd & 1) == 0) && ((*(byte *)(param_1 + 8) & 1) != 0)) {
    iVar16 = *(int *)(lVar7 + 0x50);
    lVar22 = *(longlong *)(param_1 + 0x80);
    iVar25 = (iVar16 >> 0x1f & 0xfffffffeU) + 1;
    iVar18 = *(int *)(lVar22 + 0x1c);
    lVar26 = -(longlong)iVar18;
    if (-1 < iVar18) {
      lVar26 = (longlong)iVar18;
    }
    lVar29 = -(longlong)iVar16;
    if (-1 < iVar16) {
      lVar29 = (longlong)iVar16;
    }
    iVar28 = (int)(lVar26 * lVar29 + 0x20U >> 6);
    iVar16 = -iVar25;
    if (-1 < iVar18) {
      iVar16 = iVar25;
    }
    iVar18 = *(int *)(lVar7 + 0x54);
    iVar25 = -iVar28;
    if (-1 < iVar16) {
      iVar25 = iVar28;
    }
    *(int *)(lVar7 + 0x50) = iVar25;
    iVar16 = *(int *)(lVar22 + 0x20);
    iVar25 = (iVar18 >> 0x1f & 0xfffffffeU) + 1;
    lVar22 = -(longlong)iVar16;
    if (-1 < iVar16) {
      lVar22 = (longlong)iVar16;
    }
    lVar26 = -(longlong)iVar18;
    if (-1 < iVar18) {
      lVar26 = (longlong)iVar18;
    }
    iVar28 = (int)(lVar22 * lVar26 + 0x20U >> 6);
    iVar18 = -iVar25;
    if (-1 < iVar16) {
      iVar18 = iVar25;
    }
    iVar16 = -iVar28;
    if (-1 < iVar18) {
      iVar16 = iVar28;
    }
    *(int *)(lVar7 + 0x54) = iVar16;
  }
  if (((uVar32 >> 0xb & 1) != 0) || (piVar11 = *(int **)(param_1 + 0xd0), piVar11[6] == 0))
  goto LAB_180574de1;
  lVar22 = *(longlong *)(*(longlong *)(*(longlong *)(lVar7 + 8) + 0x90) + 8);
  lVar26 = *(longlong *)(lVar22 + 0x128);
  if ((lVar26 == 0) || (*(int *)(lVar26 + 0x20) != *(int *)(lVar7 + 0x60))) {
    lVar22 = *(longlong *)(lVar22 + 0x118);
    while ((lVar26 = 0, lVar22 != 0 &&
           (lVar26 = *(longlong *)(lVar22 + 0x10), *(int *)(lVar26 + 0x20) != *(int *)(lVar7 + 0x60)
           ))) {
      lVar22 = *(longlong *)(lVar22 + 8);
    }
    if (lVar26 != 0) goto LAB_180574c8c;
    if (*(int *)(lVar7 + 0x60) == 0x6f75746c) {
      if ((((*(byte *)(piVar11 + 6) & 1) != 0) && (lVar7 != -0x98)) &&
         (piVar14 = *(int **)(lVar7 + 0xa0), piVar14 != (int *)0x0)) {
        piVar2 = piVar14 + (ulonglong)*(ushort *)(lVar7 + 0x9a) * 2;
        for (; piVar14 < piVar2; piVar14 = piVar14 + 2) {
          if (piVar14 != (int *)0x0) {
            lVar22 = (longlong)piVar11[1] * (longlong)piVar14[1];
            lVar31 = (longlong)piVar11[2] * (longlong)*piVar14;
            lVar29 = (longlong)*piVar11 * (longlong)*piVar14;
            lVar26 = (longlong)piVar11[3] * (longlong)piVar14[1];
            *piVar14 = (int)((ulonglong)(lVar22 + (lVar22 >> 0x3f) + 0x8000) >> 0x10) +
                       (int)((ulonglong)((lVar29 >> 0x3f) + 0x8000 + lVar29) >> 0x10);
            piVar14[1] = (int)((ulonglong)((lVar26 >> 0x3f) + 0x8000 + lVar26) >> 0x10) +
                         (int)((ulonglong)(lVar31 + 0x8000 + (lVar31 >> 0x3f)) >> 0x10);
          }
        }
      }
      if ((*(byte *)(piVar11 + 6) & 2) != 0) {
        iVar16 = piVar11[5];
        iVar18 = piVar11[4];
        if ((lVar7 != -0x98) && (piVar14 = *(int **)(lVar7 + 0xa0), *(short *)(lVar7 + 0x9a) != 0))
        {
          do {
            *piVar14 = *piVar14 + iVar18;
            uVar23 = uVar23 + 1;
            piVar14[1] = piVar14[1] + iVar16;
            piVar14 = piVar14 + 2;
          } while (uVar23 < *(ushort *)(lVar7 + 0x9a));
        }
      }
    }
  }
  else {
LAB_180574c8c:
    iVar12 = (**(code **)(*(longlong *)(lVar26 + 0x18) + 0x48))(lVar26,lVar7,piVar11,piVar11 + 4);
  }
  FUN_180578cc0(lVar7 + 0x58,piVar11);
LAB_180574de1:
  *(undefined4 *)(lVar7 + 0x18) = param_2;
  *(uint *)(*(longlong *)(lVar7 + 0xf0) + 0x30) = uVar32;
  if (((iVar12 == 0) && ((uVar32 & 1) == 0)) &&
     ((*(int *)(lVar7 + 0x60) != 0x62697473 && (*(int *)(lVar7 + 0x60) != 0x636f6d70)))) {
    uVar15 = (int)uVar32 >> 0x10 & 0xf;
    if ((uVar15 == 0) && (uVar15 = 0, (uVar32 >> 0xc & 1) != 0)) {
      uVar15 = 2;
    }
    if ((uVar32 & 4) == 0) {
      FUN_180579ef0(lVar7,uVar15,0);
    }
    else if (*(longlong *)(lVar7 + 8) == 0) {
      iVar12 = 6;
    }
    else {
      iVar12 = FUN_180577090(*(undefined8 *)(*(longlong *)(*(longlong *)(lVar7 + 8) + 0x90) + 8),
                             lVar7,uVar15);
    }
  }
  return iVar12;
}



