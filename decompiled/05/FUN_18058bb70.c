// FUN_18058bb70 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18058bb70 */

void FUN_18058bb70(longlong param_1,ushort *param_2)

{
  int *piVar1;
  byte *pbVar2;
  ushort uVar3;
  longlong lVar4;
  byte bVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  ushort uVar9;
  longlong lVar10;
  ushort uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  
  uVar11 = *param_2;
  if (*(short *)(param_1 + 0x196) == 0) {
    uVar9 = 1;
  }
  else {
    uVar9 = *(ushort *)(param_1 + 0xb2);
  }
  if (uVar9 <= uVar11) {
    if (*(char *)(param_1 + 0x2c6) == '\0') {
      return;
    }
LAB_18058bc26:
    *(undefined4 *)(param_1 + 0x20) = 0x86;
    return;
  }
  bVar5 = *(byte *)(param_1 + 0x1f0) & 1;
  if (bVar5 == 0) {
    uVar9 = (ushort)*(undefined8 *)(param_1 + 0x78);
    lVar7 = *(longlong *)(param_1 + 0x80);
    uVar12 = *(undefined4 *)(param_1 + 0x88);
    uVar13 = *(undefined4 *)(param_1 + 0x8c);
  }
  else {
    uVar9 = (ushort)*(undefined8 *)(param_1 + 0x40);
    lVar7 = *(longlong *)(param_1 + 0x48);
    uVar12 = *(undefined4 *)(param_1 + 0x50);
    uVar13 = *(undefined4 *)(param_1 + 0x54);
  }
  uVar3 = *(ushort *)(param_1 + 0x18e + ((ulonglong)bVar5 ^ 1) * 2);
  if (uVar3 < uVar9) {
    lVar8 = (ulonglong)uVar3 * 8;
    lVar4 = CONCAT44(uVar13,uVar12);
    iVar6 = (**(code **)(param_1 + 0x2d8))
                      (param_1,*(int *)(lVar8 + lVar4) - *(int *)(lVar7 + lVar8),
                       *(int *)(lVar8 + 4 + lVar4) - ((int *)(lVar7 + lVar8))[1]);
    lVar7 = (longlong)*(int *)(param_1 + 0x2d0) * (longlong)iVar6;
    lVar8 = (longlong)*(int *)(param_1 + 0x2d4) * (longlong)iVar6;
    if (uVar11 == 0) {
      uVar9 = 0;
    }
    else {
      uVar9 = (*(short *)(*(longlong *)(param_1 + 0xd8) + -2 + (ulonglong)uVar11 * 2) -
              *(short *)(param_1 + 0xe0)) + 1;
    }
    if (*(short *)(param_1 + 0x196) == 0) {
      uVar11 = *(ushort *)(param_1 + 0xb0);
    }
    else {
      uVar11 = (*(short *)(*(longlong *)(param_1 + 0xd8) + (ulonglong)uVar11 * 2) -
               *(short *)(param_1 + 0xe0)) + 1;
    }
    for (; uVar9 < uVar11; uVar9 = uVar9 + 1) {
      lVar10 = *(longlong *)(param_1 + 0xc0);
      if ((lVar4 != lVar10) || (uVar3 != uVar9)) {
        if (*(short *)(param_1 + 0x1a0) != 0) {
          if (*(int *)(param_1 + 0x324) == 0) {
            piVar1 = (int *)(lVar10 + (ulonglong)uVar9 * 8);
            *piVar1 = *piVar1 + (int)((ulonglong)(lVar7 + 0x8000 + (lVar7 >> 0x3f)) >> 0x10);
          }
          pbVar2 = (byte *)((ulonglong)uVar9 + *(longlong *)(param_1 + 0xd0));
          *pbVar2 = *pbVar2 | 8;
          lVar10 = *(longlong *)(param_1 + 0xc0);
        }
        if (*(short *)(param_1 + 0x1a2) != 0) {
          if (*(int *)(param_1 + 0x324) != 7) {
            piVar1 = (int *)(lVar10 + 4 + (ulonglong)uVar9 * 8);
            *piVar1 = *piVar1 + (int)((ulonglong)(lVar8 + 0x8000 + (lVar8 >> 0x3f)) >> 0x10);
          }
          pbVar2 = (byte *)((ulonglong)uVar9 + *(longlong *)(param_1 + 0xd0));
          *pbVar2 = *pbVar2 | 0x10;
        }
      }
    }
  }
  else if (*(char *)(param_1 + 0x2c6) != '\0') goto LAB_18058bc26;
  return;
}



