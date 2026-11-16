// FUN_18058ad90 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18058ad90 */

void FUN_18058ad90(longlong param_1,ushort *param_2)

{
  byte *pbVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  ulonglong uVar18;
  int iVar19;
  int iVar20;
  
  uVar18 = (ulonglong)*param_2;
  if ((param_2[6] < *(ushort *)(param_1 + 0x40)) && (param_2[8] < *(ushort *)(param_1 + 0x40))) {
    if ((param_2[2] < *(ushort *)(param_1 + 0x78)) &&
       ((param_2[4] < *(ushort *)(param_1 + 0x78) && (*param_2 < *(ushort *)(param_1 + 0xb0))))) {
      lVar2 = (ulonglong)param_2[4] * 8;
      lVar3 = (ulonglong)param_2[6] * 8;
      lVar4 = (ulonglong)param_2[8] * 8;
      lVar7 = *(longlong *)(param_1 + 0x50);
      lVar5 = (ulonglong)param_2[2] * 8;
      iVar15 = *(int *)(lVar3 + lVar7);
      iVar16 = *(int *)(lVar3 + 4 + lVar7);
      iVar20 = *(int *)(lVar7 + lVar4) - iVar15;
      lVar8 = *(longlong *)(param_1 + 0x88);
      iVar19 = *(int *)(lVar7 + 4 + lVar4) - iVar16;
      iVar17 = *(int *)(lVar5 + lVar8);
      iVar9 = *(int *)(lVar2 + lVar8) - iVar17;
      iVar6 = *(int *)(lVar5 + 4 + lVar8);
      iVar10 = *(int *)(lVar2 + 4 + lVar8) - iVar6;
      iVar11 = FUN_1805753e0(iVar10,iVar20,0x40);
      iVar12 = -iVar19;
      iVar13 = FUN_1805753e0(iVar9,iVar12,0x40);
      iVar13 = iVar13 + iVar11;
      iVar19 = FUN_1805753e0(iVar10,iVar19,0x40);
      iVar14 = FUN_1805753e0(iVar9,iVar20,0x40);
      iVar11 = -(iVar19 + iVar14);
      if (iVar11 < 0) {
        iVar11 = iVar19 + iVar14;
      }
      iVar19 = -iVar13;
      if (-iVar13 < 0) {
        iVar19 = iVar13;
      }
      if (iVar11 < iVar19 * 0x13) {
        iVar15 = FUN_1805753e0(iVar15 - iVar17,iVar12,0x40);
        iVar16 = FUN_1805753e0(iVar16 - iVar6,iVar20,0x40);
        iVar17 = FUN_1805753e0(iVar15 + iVar16,iVar9,iVar13);
        iVar15 = FUN_1805753e0(iVar15 + iVar16,iVar10,iVar13);
        *(int *)(*(longlong *)(param_1 + 0xc0) + uVar18 * 8) =
             *(int *)(*(longlong *)(param_1 + 0x88) + lVar5) + iVar17;
        *(int *)(*(longlong *)(param_1 + 0xc0) + 4 + uVar18 * 8) =
             *(int *)(*(longlong *)(param_1 + 0x88) + 4 + lVar5) + iVar15;
      }
      else {
        iVar15 = *(int *)(*(longlong *)(param_1 + 0x50) + lVar4) +
                 *(int *)(*(longlong *)(param_1 + 0x50) + lVar3) +
                 *(int *)(*(longlong *)(param_1 + 0x88) + lVar5) +
                 *(int *)(*(longlong *)(param_1 + 0x88) + lVar2);
        *(int *)(*(longlong *)(param_1 + 0xc0) + uVar18 * 8) =
             (int)(iVar15 + (iVar15 >> 0x1f & 3U)) >> 2;
        iVar15 = *(int *)(*(longlong *)(param_1 + 0x50) + 4 + lVar4) +
                 *(int *)(*(longlong *)(param_1 + 0x50) + 4 + lVar3) +
                 *(int *)(*(longlong *)(param_1 + 0x88) + 4 + lVar5) +
                 *(int *)(*(longlong *)(param_1 + 0x88) + 4 + lVar2);
        *(int *)(*(longlong *)(param_1 + 0xc0) + 4 + uVar18 * 8) =
             (int)(iVar15 + (iVar15 >> 0x1f & 3U)) >> 2;
      }
      pbVar1 = (byte *)(*(longlong *)(param_1 + 0xd0) + uVar18);
      *pbVar1 = *pbVar1 | 0x18;
      return;
    }
  }
  if (*(char *)(param_1 + 0x2c6) != '\0') {
    *(undefined4 *)(param_1 + 0x20) = 0x86;
  }
  return;
}



