// FUN_18058cb30 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18058cb30 */

ulonglong FUN_18058cb30(longlong *param_1)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte *pbVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  uint uVar11;
  uint uVar12;
  byte *pbVar13;
  uint uVar14;
  uint uVar15;
  uint *puVar16;
  uint uVar17;
  
  pbVar13 = (byte *)param_1[0x21];
  pbVar5 = (byte *)param_1[0x22];
  lVar6 = param_1[3];
  iVar8 = *(int *)(*param_1 + 0x10);
  uVar11 = 0;
  do {
    uVar14 = uVar11 + 1;
    uVar9 = FUN_180573fd0(lVar6,uVar14);
    if ((int)uVar9 != 0) {
      return uVar9;
    }
    pbVar1 = pbVar13 + 4;
    if (pbVar5 < pbVar1) {
      return 0x15;
    }
    uVar17 = 0;
    puVar16 = (uint *)((ulonglong)uVar11 * 0x20 + *(longlong *)(lVar6 + 0xa0));
    puVar16[2] = 0;
    puVar16[3] = 0;
    bVar2 = pbVar13[1];
    *(ushort *)(puVar16 + 1) = CONCAT11(*pbVar13,bVar2);
    bVar3 = pbVar13[2];
    bVar4 = pbVar13[3];
    *puVar16 = (uint)CONCAT11(bVar3,bVar4);
    if (iVar8 <= (int)(uint)CONCAT11(bVar3,bVar4)) {
      return 0x15;
    }
    iVar7 = (uint)(bVar2 & 1) * 2;
    uVar10 = (ulonglong)(iVar7 + 2);
    if ((bVar2 & 8) == 0) {
      if ((bVar2 & 0x40) == 0) {
        if ((char)bVar2 < '\0') {
          uVar10 = (ulonglong)(iVar7 + 10);
        }
      }
      else {
        uVar10 = (ulonglong)(iVar7 + 6);
      }
    }
    else {
      uVar10 = (ulonglong)(iVar7 + 4);
    }
    if (pbVar5 < pbVar1 + uVar10) {
      return 0x15;
    }
    if ((bVar2 & 2) == 0) {
      if ((bVar2 & 1) == 0) {
        puVar16[2] = (uint)*pbVar1;
        uVar11 = (uint)pbVar13[5];
        goto LAB_18058cc95;
      }
      puVar16[2] = (uint)CONCAT11(*pbVar1,pbVar13[5]);
      uVar11 = (uint)CONCAT11(pbVar13[6],pbVar13[7]);
      pbVar13 = pbVar13 + 8;
    }
    else if ((bVar2 & 1) == 0) {
      puVar16[2] = (int)(char)*pbVar1;
      uVar11 = (uint)(char)pbVar13[5];
LAB_18058cc95:
      pbVar13 = pbVar13 + 6;
    }
    else {
      puVar16[2] = (int)(short)((ushort)*pbVar1 << 8) | (uint)pbVar13[5];
      uVar11 = (int)(short)((ushort)pbVar13[6] << 8) | (uint)pbVar13[7];
      pbVar13 = pbVar13 + 8;
    }
    puVar16[3] = uVar11;
    uVar12 = 0x10000;
    uVar11 = 0x10000;
    uVar15 = 0;
    if ((bVar2 & 8) == 0) {
      if ((bVar2 & 0x40) == 0) {
        if (-1 < (char)bVar2) goto LAB_18058cd41;
        uVar11 = (int)(short)((ushort)*pbVar13 << 8) | (uint)pbVar13[1];
        uVar15 = ((int)(short)((ushort)pbVar13[2] << 8) | (uint)pbVar13[3]) << 2;
        uVar17 = ((int)(short)((ushort)pbVar13[4] << 8) | (uint)pbVar13[5]) << 2;
        pbVar13 = pbVar13 + 8;
      }
      else {
        uVar11 = (int)(short)((ushort)*pbVar13 << 8) | (uint)pbVar13[1];
        pbVar13 = pbVar13 + 4;
      }
      uVar11 = uVar11 << 2;
      uVar12 = ((int)(short)((ushort)pbVar13[-2] << 8) | (uint)pbVar13[-1]) << 2;
    }
    else {
      uVar12 = ((int)(short)((ushort)*pbVar13 << 8) | (uint)pbVar13[1]) << 2;
      pbVar13 = pbVar13 + 2;
      uVar11 = uVar12;
    }
LAB_18058cd41:
    puVar16[4] = uVar11;
    puVar16[5] = uVar17;
    puVar16[6] = uVar15;
    puVar16[7] = uVar12;
    uVar11 = uVar14;
    if ((bVar2 & 0x20) == 0) {
      *(uint *)(lVar6 + 0x98) = uVar14;
      iVar8 = FUN_1805780f0(param_1[5]);
      param_1[0x21] = (longlong)pbVar13;
      *(int *)(param_1 + 0x1c) = iVar8 + ((int)pbVar13 - (int)pbVar5);
      return uVar9 & 0xffffffff;
    }
  } while( true );
}



