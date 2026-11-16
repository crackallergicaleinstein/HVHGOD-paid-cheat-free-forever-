// FUN_1805a5bc0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805a5bc0 */

ulonglong FUN_1805a5bc0(longlong param_1,int param_2,int param_3,int *param_4)

{
  byte bVar1;
  byte bVar2;
  undefined8 *puVar3;
  longlong lVar4;
  int iVar5;
  ulonglong uVar6;
  byte *pbVar7;
  byte *pbVar8;
  byte *pbVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  ulonglong uVar15;
  byte bVar16;
  
  param_4[0] = 0;
  param_4[1] = 0;
  if ((*(uint *)(param_1 + 0x218) <= param_2 - 1U) || (*(uint *)(param_1 + 0x218) <= param_3 - 1U))
  {
    return 0;
  }
  puVar3 = *(undefined8 **)(param_1 + 0x238);
  lVar4 = *(longlong *)(param_1 + 0xa0);
  uVar13 = *(int *)(*(longlong *)(param_1 + 0x228) + (ulonglong)(param_2 - 1U) * 0x10) << 0x10 |
           (uint)*(ushort *)(*(longlong *)(param_1 + 0x228) + (ulonglong)(param_3 - 1U) * 0x10);
  while( true ) {
    if (puVar3 == (undefined8 *)0x0) {
      return 0;
    }
    if ((*(uint *)(puVar3 + 3) <= uVar13) && (uVar13 <= *(uint *)((longlong)puVar3 + 0x1c))) break;
    puVar3 = (undefined8 *)*puVar3;
  }
  uVar6 = FUN_1805788b0(lVar4,*(undefined4 *)(puVar3 + 2));
  if ((int)uVar6 != 0) {
    return uVar6;
  }
  uVar6 = FUN_180577bf0(lVar4,(uint)*(byte *)(puVar3 + 1) * *(int *)((longlong)puVar3 + 0xc));
  if ((int)uVar6 != 0) {
    return uVar6;
  }
  bVar1 = *(byte *)(puVar3 + 1);
  pbVar9 = *(byte **)(lVar4 + 0x38);
  iVar5 = 0x1f;
  if (bVar1 != 0) {
    for (; bVar1 >> iVar5 == 0; iVar5 = iVar5 + -1) {
    }
  }
  uVar11 = *(uint *)((longlong)puVar3 + 0xc);
  bVar2 = *(byte *)((longlong)puVar3 + 9);
  iVar5 = 1 << ((byte)iVar5 & 0x1f);
  bVar16 = bVar2 & 1;
  uVar14 = iVar5 * uVar11;
  uVar15 = (ulonglong)uVar14;
  iVar5 = (uint)bVar1 - iVar5;
  if (iVar5 == 0) {
joined_r0x0001805a5d0f:
    while (pbVar7 = pbVar9, uVar11 < uVar14) {
      uVar15 = uVar15 >> 1;
      uVar14 = (uint)uVar15;
      pbVar9 = pbVar7 + uVar15;
      if (bVar16 == 0) {
        uVar12 = (uint)pbVar9[1];
        pbVar8 = pbVar9 + 2;
        uVar10 = (uint)*pbVar9 << 0x10;
      }
      else {
        pbVar8 = pbVar9 + 4;
        uVar10 = (uint)pbVar9[3];
        uVar12 = (uint)CONCAT21(CONCAT11(*pbVar9,pbVar9[1]),pbVar9[2]) << 8;
      }
      if ((uVar12 | uVar10) == uVar13) goto LAB_1805a5d9c;
      if (uVar13 <= (uVar12 | uVar10)) {
        pbVar9 = pbVar7;
      }
    }
    if (bVar16 == 0) {
      uVar14 = (uint)pbVar7[1];
      pbVar8 = pbVar7 + 2;
      uVar11 = (uint)*pbVar7 << 0x10;
    }
    else {
      pbVar8 = pbVar7 + 4;
      uVar11 = (uint)pbVar7[3];
      uVar14 = (uint)CONCAT21(CONCAT11(*pbVar7,pbVar7[1]),pbVar7[2]) << 8;
    }
    if ((uVar14 | uVar11) != uVar13) goto LAB_1805a5dbf;
  }
  else {
    pbVar7 = pbVar9 + iVar5 * uVar11;
    if (bVar16 == 0) {
      uVar12 = (uint)pbVar7[1];
      pbVar8 = pbVar7 + 2;
      uVar10 = (uint)*pbVar7 << 0x10;
    }
    else {
      pbVar8 = pbVar7 + 4;
      uVar10 = (uint)pbVar7[3];
      uVar12 = (uint)CONCAT21(CONCAT11(*pbVar7,pbVar7[1]),pbVar7[2]) << 8;
    }
    if ((uVar12 | uVar10) != uVar13) {
      if ((uVar12 | uVar10) < uVar13) {
        pbVar9 = pbVar8 + (ulonglong)((bVar2 & 2) != 0) + 1;
      }
      goto joined_r0x0001805a5d0f;
    }
  }
LAB_1805a5d9c:
  if ((bVar2 & 2) == 0) {
    uVar13 = (uint)*pbVar8;
  }
  else {
    uVar13 = (int)(short)((ushort)*pbVar8 << 8) | (uint)pbVar8[1];
  }
  *param_4 = (int)*(short *)((longlong)puVar3 + 10) + uVar13;
LAB_1805a5dbf:
  FUN_180577d30(lVar4);
  return uVar6 & 0xffffffff;
}



