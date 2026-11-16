// FUN_1804c2d10 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804c2d10 */

void FUN_1804c2d10(short *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  short sVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  int iVar11;
  longlong lVar12;
  short *psVar13;
  int *piVar14;
  longlong local_res8;
  
  lVar6 = DAT_180bb8ae8;
  piVar1 = (int *)(param_1 + 0xa4);
  iVar9 = *(int *)(param_1 + 0xa6);
  if (iVar9 < 0) {
    iVar9 = iVar9 + iVar9 / 2;
    iVar8 = 0;
    if (0 < iVar9) {
      iVar8 = iVar9;
    }
    FUN_1804aec70(piVar1,iVar8);
  }
  *piVar1 = 0;
  local_res8 = 0x9b;
  piVar14 = (int *)(lVar6 + 0x15d4);
  iVar9 = 0;
  psVar13 = param_1;
  do {
    sVar7 = *psVar13;
    while (sVar7 != -1) {
      lVar12 = *(longlong *)(param_1 + 0xa0);
      lVar10 = (longlong)(int)sVar7;
      *(undefined2 *)(lVar12 + 4 + lVar10 * 0x10) = *(undefined2 *)(lVar12 + 6 + lVar10 * 0x10);
      iVar8 = *(int *)(lVar12 + 0xc + lVar10 * 0x10);
      *(int *)(lVar12 + 8 + lVar10 * 0x10) = iVar8;
      *(undefined4 *)(lVar12 + 0xc + lVar10 * 0x10) = 0xffffffff;
      *(undefined2 *)(lVar12 + 6 + lVar10 * 0x10) = 0;
      if (iVar8 != -1) {
        iVar8 = *(int *)(param_1 + 0xa6);
        if (*piVar1 == iVar8) {
          iVar11 = *piVar1 + 1;
          if (iVar8 == 0) {
            iVar8 = 8;
          }
          else {
            iVar8 = iVar8 / 2 + iVar8;
          }
          if (iVar11 < iVar8) {
            iVar11 = iVar8;
          }
          FUN_1804aec70(piVar1,iVar11);
        }
        puVar2 = (undefined8 *)(lVar12 + lVar10 * 0x10);
        uVar5 = puVar2[1];
        puVar3 = (undefined8 *)(*(longlong *)(param_1 + 0xa8) + (longlong)*piVar1 * 0x10);
        *puVar3 = *puVar2;
        puVar3[1] = uVar5;
        *piVar1 = *piVar1 + 1;
        if (((uint)*(ushort *)(lVar12 + 2 + lVar10 * 0x10) == *(uint *)(lVar6 + 0x130)) &&
           (*piVar14 == -1)) {
          *piVar14 = *(int *)(lVar12 + 8 + lVar10 * 0x10);
        }
      }
      sVar7 = *(short *)(lVar12 + lVar10 * 0x10);
    }
    sVar7 = -1;
    if (iVar9 < *piVar1) {
      sVar7 = (short)iVar9;
    }
    *psVar13 = sVar7;
    iVar8 = *piVar1;
    if (iVar9 < iVar8) {
      lVar12 = (longlong)iVar9 << 4;
      do {
        iVar9 = iVar9 + 1;
        iVar11 = -1;
        if (iVar9 < iVar8) {
          iVar11 = iVar9;
        }
        *(short *)(lVar12 + *(longlong *)(param_1 + 0xa8)) = (short)iVar11;
        iVar8 = *piVar1;
        lVar12 = lVar12 + 0x10;
      } while (iVar9 < iVar8);
    }
    iVar9 = iVar8;
    psVar13 = psVar13 + 1;
    piVar14 = piVar14 + 3;
    local_res8 = local_res8 + -1;
  } while (local_res8 != 0);
  *piVar1 = *(int *)(param_1 + 0x9c);
  uVar4 = *(undefined4 *)(param_1 + 0xa6);
  *(undefined4 *)(param_1 + 0xa6) = *(undefined4 *)(param_1 + 0x9e);
  *(undefined4 *)(param_1 + 0x9e) = uVar4;
  uVar5 = *(undefined8 *)(param_1 + 0xa8);
  *(undefined8 *)(param_1 + 0xa8) = *(undefined8 *)(param_1 + 0xa0);
  *(undefined8 *)(param_1 + 0xa0) = uVar5;
  *(int *)(param_1 + 0x9c) = iVar9;
  return;
}



