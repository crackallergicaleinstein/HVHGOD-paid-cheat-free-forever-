// FUN_1805da240 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805da240 */

void FUN_1805da240(longlong *param_1,int param_2)

{
  byte bVar1;
  byte bVar2;
  undefined1 uVar3;
  uint uVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined4 uVar7;
  longlong lVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  longlong lVar11;
  longlong lVar12;
  uint uVar13;
  byte *pbVar14;
  char *pcVar15;
  ulonglong uVar16;
  undefined1 *puVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  byte *pbVar22;
  byte *pbVar23;
  longlong lVar24;
  undefined1 *puVar25;
  undefined1 *puVar26;
  undefined1 *puVar27;
  undefined1 *puVar28;
  longlong lVar29;
  uint uVar30;
  int iVar31;
  int local_58;
  
  lVar8 = param_1[5];
  puVar9 = (undefined1 *)param_1[2];
  pbVar22 = (byte *)*param_1;
  lVar12 = param_1[3];
  pbVar14 = pbVar22 + ((int)param_1[1] - 5);
  lVar24 = *(longlong *)(lVar8 + 0x68);
  uVar4 = *(uint *)(lVar8 + 0x3c);
  puVar10 = *(undefined1 **)(lVar8 + 0x40);
  uVar21 = *(uint *)(lVar8 + 0x48);
  uVar5 = *(undefined4 *)(lVar8 + 0x70);
  uVar30 = *(uint *)(lVar8 + 0x4c);
  lVar11 = *(longlong *)(lVar8 + 0x60);
  local_58 = (int)puVar9 - (param_2 - (int)lVar12);
  iVar31 = *(int *)(lVar8 + 0x34);
  uVar6 = *(uint *)(lVar8 + 0x38);
  uVar7 = *(undefined4 *)(lVar8 + 0x74);
  puVar26 = puVar9;
LAB_1805da2e5:
  if (uVar30 < 0xf) {
    bVar1 = *pbVar22;
    pbVar23 = pbVar22 + 1;
    pbVar22 = pbVar22 + 2;
    uVar21 = uVar21 + ((uint)bVar1 << ((byte)uVar30 & 0x1f)) +
             ((uint)*pbVar23 << ((byte)uVar30 + 8 & 0x1f));
    uVar30 = uVar30 + 0x10;
  }
  uVar16 = (ulonglong)((1 << ((byte)uVar5 & 0x1f)) - 1U & uVar21);
  bVar1 = *(byte *)(lVar11 + 1 + uVar16 * 4);
  uVar21 = uVar21 >> (bVar1 & 0x1f);
  uVar30 = uVar30 - bVar1;
  bVar1 = *(byte *)(lVar11 + uVar16 * 4);
  while (lVar29 = lVar11 + uVar16 * 4, bVar1 != 0) {
    puVar25 = puVar26;
    if ((bVar1 & 0x10) != 0) {
      uVar13 = (uint)*(ushort *)(lVar29 + 2);
      uVar18 = bVar1 & 0xf;
      pbVar23 = pbVar22;
      if ((bVar1 & 0xf) != 0) {
        if (uVar30 < uVar18) {
          bVar1 = *pbVar22;
          pbVar22 = pbVar22 + 1;
          uVar21 = uVar21 + ((uint)bVar1 << ((byte)uVar30 & 0x1f));
          uVar30 = uVar30 + 8;
        }
        uVar13 = (1 << (sbyte)uVar18) - 1U & uVar21;
        uVar21 = uVar21 >> (sbyte)uVar18;
        uVar13 = *(ushort *)(lVar29 + 2) + uVar13;
        uVar30 = uVar30 - uVar18;
        pbVar23 = pbVar22;
      }
      if (uVar30 < 0xf) {
        bVar1 = *pbVar23;
        pbVar22 = pbVar23 + 1;
        pbVar23 = pbVar23 + 2;
        uVar21 = uVar21 + ((uint)bVar1 << ((byte)uVar30 & 0x1f)) +
                 ((uint)*pbVar22 << ((byte)uVar30 + 8 & 0x1f));
        uVar30 = uVar30 + 0x10;
      }
      uVar16 = (ulonglong)((1 << ((byte)uVar7 & 0x1f)) - 1U & uVar21);
      bVar1 = *(byte *)(lVar24 + uVar16 * 4);
      bVar2 = *(byte *)(lVar24 + 1 + uVar16 * 4);
      uVar21 = uVar21 >> (bVar2 & 0x1f);
      uVar30 = uVar30 - bVar2;
      goto joined_r0x0001805da3eb;
    }
    if ((bVar1 & 0x40) != 0) {
      if ((bVar1 & 0x20) == 0) {
        param_1[4] = (longlong)"invalid literal/length code";
        *(undefined4 *)(lVar8 + 8) = 0x3f51;
      }
      else {
        *(undefined4 *)(lVar8 + 8) = 0x3f3f;
      }
      goto LAB_1805da6bf;
    }
    uVar16 = (ulonglong)((1 << (bVar1 & 0x1f)) - 1U & uVar21) + (ulonglong)*(ushort *)(lVar29 + 2);
    bVar1 = *(byte *)(lVar11 + 1 + uVar16 * 4);
    uVar21 = uVar21 >> (bVar1 & 0x1f);
    uVar30 = uVar30 - bVar1;
    bVar1 = *(byte *)(lVar11 + uVar16 * 4);
  }
  *puVar26 = *(undefined1 *)(lVar29 + 2);
  puVar25 = puVar26 + 1;
  goto LAB_1805da64c;
joined_r0x0001805da3eb:
  lVar29 = lVar24 + uVar16 * 4;
  if ((bVar1 & 0x10) != 0) goto LAB_1805da426;
  if ((bVar1 & 0x40) != 0) {
    pcVar15 = "invalid distance code";
    goto LAB_1805da69c;
  }
  uVar16 = (ulonglong)((1 << (bVar1 & 0x1f)) - 1U & uVar21) + (ulonglong)*(ushort *)(lVar29 + 2);
  bVar1 = *(byte *)(lVar24 + uVar16 * 4);
  bVar2 = *(byte *)(lVar24 + 1 + uVar16 * 4);
  uVar21 = uVar21 >> (bVar2 & 0x1f);
  uVar30 = uVar30 - bVar2;
  goto joined_r0x0001805da3eb;
LAB_1805da426:
  uVar19 = bVar1 & 0xf;
  pbVar22 = pbVar23;
  uVar18 = uVar30;
  if (uVar30 < uVar19) {
    pbVar22 = pbVar23 + 1;
    uVar21 = uVar21 + ((uint)*pbVar23 << ((byte)uVar30 & 0x1f));
    uVar18 = uVar30 + 8;
    if (uVar18 < uVar19) {
      bVar1 = *pbVar22;
      pbVar22 = pbVar23 + 2;
      uVar21 = uVar21 + ((uint)bVar1 << ((byte)uVar18 & 0x1f));
      uVar18 = uVar30 + 0x10;
    }
  }
  uVar30 = uVar18 - uVar19;
  uVar18 = (1 << (sbyte)uVar19) - 1U & uVar21;
  uVar21 = uVar21 >> (sbyte)uVar19;
  uVar18 = *(ushort *)(lVar29 + 2) + uVar18;
  uVar19 = (int)puVar26 - local_58;
  if (uVar18 <= uVar19) {
    puVar28 = puVar26 + -(ulonglong)uVar18;
    do {
      puVar27 = puVar26;
      puVar17 = puVar28;
      *puVar27 = *puVar17;
      uVar13 = uVar13 - 3;
      puVar27[1] = puVar17[1];
      puVar27[2] = puVar17[2];
      puVar25 = puVar27 + 3;
      puVar28 = puVar17 + 3;
      puVar26 = puVar25;
    } while (2 < uVar13);
    if (uVar13 != 0) {
      *puVar25 = puVar17[3];
      puVar25 = puVar27 + 4;
      if (1 < uVar13) {
        *puVar25 = puVar17[4];
        puVar25 = puVar27 + 5;
      }
    }
    goto LAB_1805da64c;
  }
  uVar19 = uVar18 - uVar19;
  if ((uVar6 < uVar19) && (*(int *)(lVar8 + 0x1be0) != 0)) {
    pcVar15 = "invalid distance too far back";
    pbVar23 = pbVar22;
LAB_1805da69c:
    param_1[4] = (longlong)pcVar15;
    *(undefined4 *)(lVar8 + 8) = 0x3f51;
    pbVar22 = pbVar23;
LAB_1805da6bf:
    param_1[2] = (longlong)puVar25;
    lVar24 = (longlong)pbVar22 - (ulonglong)(uVar30 >> 3);
    *param_1 = lVar24;
    iVar31 = uVar30 + (uVar30 >> 3) * -8;
    *(int *)(param_1 + 1) = ((int)pbVar14 - (int)lVar24) + 5;
    *(int *)(param_1 + 3) = ((int)(puVar9 + ((int)lVar12 - 0x101)) - (int)puVar25) + 0x101;
    *(uint *)(lVar8 + 0x48) = uVar21 & (1 << ((byte)iVar31 & 0x1f)) - 1U;
    *(int *)(lVar8 + 0x4c) = iVar31;
    return;
  }
  if (uVar4 == 0) {
    puVar28 = puVar10 + (iVar31 - uVar19);
    if (uVar19 < uVar13) {
      uVar13 = uVar13 - uVar19;
      do {
        uVar3 = *puVar28;
        puVar28 = puVar28 + 1;
        *puVar26 = uVar3;
        puVar26 = puVar26 + 1;
        uVar19 = uVar19 - 1;
      } while (uVar19 != 0);
LAB_1805da563:
      puVar28 = puVar26 + -(ulonglong)uVar18;
    }
  }
  else if (uVar4 < uVar19) {
    uVar20 = uVar19 - uVar4;
    puVar28 = puVar10 + (iVar31 + (uVar4 - uVar19));
    if (uVar20 < uVar13) {
      uVar13 = uVar13 - uVar20;
      lVar29 = (longlong)(puVar10 + (iVar31 + (uVar4 - uVar19))) - (longlong)puVar26;
      do {
        *puVar26 = puVar26[lVar29];
        puVar26 = puVar26 + 1;
        uVar20 = uVar20 - 1;
      } while (uVar20 != 0);
      puVar28 = puVar10;
      if (uVar4 < uVar13) {
        uVar13 = uVar13 - uVar4;
        puVar25 = puVar10;
        uVar19 = uVar4;
        do {
          uVar3 = *puVar25;
          puVar25 = puVar25 + 1;
          *puVar26 = uVar3;
          puVar26 = puVar26 + 1;
          uVar19 = uVar19 - 1;
        } while (uVar19 != 0);
        goto LAB_1805da563;
      }
    }
  }
  else {
    puVar28 = puVar10 + (uVar4 - uVar19);
    if (uVar19 < uVar13) {
      uVar13 = uVar13 - uVar19;
      do {
        uVar3 = *puVar28;
        puVar28 = puVar28 + 1;
        *puVar26 = uVar3;
        puVar26 = puVar26 + 1;
        uVar19 = uVar19 - 1;
      } while (uVar19 != 0);
      goto LAB_1805da563;
    }
  }
  if (2 < uVar13) {
    uVar16 = (ulonglong)((uVar13 - 3) / 3 + 1);
    do {
      uVar13 = uVar13 - 3;
      *puVar26 = *puVar28;
      puVar26[1] = puVar28[1];
      puVar25 = puVar28 + 2;
      puVar28 = puVar28 + 3;
      puVar26[2] = *puVar25;
      puVar26 = puVar26 + 3;
      uVar16 = uVar16 - 1;
    } while (uVar16 != 0);
  }
  puVar25 = puVar26;
  if (uVar13 != 0) {
    *puVar26 = *puVar28;
    puVar25 = puVar26 + 1;
    if (1 < uVar13) {
      *puVar25 = puVar28[1];
      puVar25 = puVar26 + 2;
    }
  }
LAB_1805da64c:
  if ((pbVar14 <= pbVar22) || (puVar9 + ((int)lVar12 - 0x101) <= puVar25)) goto LAB_1805da6bf;
  puVar26 = puVar25;
  goto LAB_1805da2e5;
}



