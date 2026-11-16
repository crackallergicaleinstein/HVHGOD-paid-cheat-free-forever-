// FUN_1804e33e0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804e33e0 */

void FUN_1804e33e0(longlong param_1,ushort param_2,ushort param_3,ushort param_4,ushort param_5)

{
  ushort *puVar1;
  int *piVar2;
  short sVar3;
  int iVar4;
  ushort uVar5;
  int iVar6;
  ushort uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  
  uVar9 = 0;
  uVar11 = (uint)param_4 + (uint)param_2;
  if (*(ushort *)(param_1 + 0x44) == 0) {
    uVar7 = *(ushort *)(param_1 + 0x40);
    uVar10 = 0;
  }
  else {
    uVar7 = *(ushort *)(param_1 + 0x40);
    uVar10 = (uint)uVar7 + (uint)*(ushort *)(param_1 + 0x44);
  }
  uVar8 = uVar11;
  if (uVar11 <= uVar10) {
    uVar8 = uVar10;
  }
  uVar10 = (uint)param_3 + (uint)param_5;
  puVar1 = (ushort *)(param_1 + 0x42);
  if (*(ushort *)(param_1 + 0x46) != 0) {
    uVar9 = (uint)*(ushort *)(param_1 + 0x46) + (uint)*puVar1;
  }
  uVar5 = param_2;
  if (uVar7 < param_2) {
    uVar5 = uVar7;
  }
  *(ushort *)(param_1 + 0x40) = uVar5;
  uVar7 = param_3;
  if (*puVar1 < param_3) {
    uVar7 = *puVar1;
  }
  *puVar1 = uVar7;
  sVar3 = (short)uVar10;
  if (uVar10 <= uVar9) {
    sVar3 = (short)uVar9;
  }
  *(ushort *)(param_1 + 0x44) = (short)uVar8 - uVar5;
  *(ushort *)(param_1 + 0x46) = sVar3 - uVar7;
  uVar7 = param_2;
  if (*(ushort *)(param_1 + 0x38) < param_2) {
    uVar7 = *(ushort *)(param_1 + 0x38);
  }
  uVar5 = param_3;
  if (*(ushort *)(param_1 + 0x3a) < param_3) {
    uVar5 = *(ushort *)(param_1 + 0x3a);
  }
  uVar9 = (uint)*(ushort *)(param_1 + 0x3c) + (uint)uVar7;
  *(ushort *)(param_1 + 0x38) = uVar7;
  *(ushort *)(param_1 + 0x3a) = uVar5;
  if (uVar11 <= uVar9) {
    uVar11 = uVar9 & 0xffff;
  }
  uVar9 = (uint)*(ushort *)(param_1 + 0x3e) + (uint)uVar5;
  *(ushort *)(param_1 + 0x3c) = (short)uVar11 - uVar7;
  if (uVar10 <= uVar9) {
    uVar10 = uVar9 & 0xffff;
  }
  *(ushort *)(param_1 + 0x3e) = (short)uVar10 - uVar5;
  if ((*(int *)(param_1 + 4) == 0) || (*(int *)(param_1 + 4) == 3)) {
    piVar2 = (int *)(param_1 + 0x48);
    *(undefined4 *)(param_1 + 4) = 3;
    iVar4 = *(int *)(param_1 + 0x4c);
    if (*piVar2 == iVar4) {
      iVar6 = *piVar2 + 1;
      if (iVar4 == 0) {
        iVar4 = 8;
      }
      else {
        iVar4 = iVar4 / 2 + iVar4;
      }
      if (iVar6 < iVar4) {
        iVar6 = iVar4;
      }
      FUN_1804d0a80(piVar2,iVar6);
    }
    *(ulonglong *)(*(longlong *)(param_1 + 0x50) + (longlong)*piVar2 * 8) =
         CONCAT26(param_5,CONCAT24(param_4,CONCAT22(param_3,param_2)));
    *piVar2 = *piVar2 + 1;
  }
  return;
}



