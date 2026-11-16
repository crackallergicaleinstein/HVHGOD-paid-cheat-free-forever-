// FUN_1805a6b60 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805a6b60 */

void FUN_1805a6b60(longlong param_1)

{
  int *piVar1;
  ushort uVar2;
  ushort uVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  ulonglong uVar8;
  int iVar9;
  
  lVar4 = *(longlong *)(param_1 + 0x28);
  if (*(char *)(param_1 + 0x30) == '\0') {
    return;
  }
  uVar2 = *(ushort *)(lVar4 + 0x62);
  uVar3 = *(ushort *)(lVar4 + 0x60);
  uVar8 = 0;
  iVar9 = uVar2 - 1;
  if (uVar3 != 0) {
    uVar8 = (ulonglong)*(ushort *)(*(longlong *)(lVar4 + 0x78) + -2 + (ulonglong)uVar3 * 2);
  }
  iVar7 = (int)uVar8;
  iVar6 = iVar9 - iVar7;
  if (iVar7 < iVar9) {
    lVar5 = *(longlong *)(lVar4 + 0x68);
    piVar1 = (int *)(lVar5 + uVar8 * 8);
    if ((*piVar1 == *(int *)(lVar5 + -8 + (ulonglong)uVar2 * 8)) &&
       (piVar1[1] == *(int *)(lVar5 + (ulonglong)uVar2 * 8 + -4))) {
      iVar9 = uVar2 - 2;
      *(ushort *)(lVar4 + 0x62) = uVar2 - 1;
      iVar6 = iVar9 - iVar7;
      goto LAB_1805a6bcb;
    }
  }
  else {
LAB_1805a6bcb:
    if (SBORROW4(iVar9,iVar7) != iVar6 < 0) goto LAB_1805a6bda;
  }
  *(short *)(*(longlong *)(lVar4 + 0x78) + (ulonglong)uVar3 * 2) = (short)iVar9;
  *(short *)(lVar4 + 0x60) = *(short *)(lVar4 + 0x60) + 1;
LAB_1805a6bda:
  *(undefined1 *)(param_1 + 0x30) = 0;
  return;
}



