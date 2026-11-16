// FUN_18058c120 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18058c120 */

void FUN_18058c120(longlong param_1,uint *param_2)

{
  int *piVar1;
  ushort uVar2;
  longlong lVar3;
  byte bVar4;
  int iVar5;
  ushort uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  ushort uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  
  if (1 < *param_2) {
    if (*(char *)(param_1 + 0x2c6) == '\0') {
      return;
    }
LAB_18058c1ae:
    *(undefined4 *)(param_1 + 0x20) = 0x86;
    return;
  }
  bVar4 = *(byte *)(param_1 + 0x1f0) & 1;
  if (bVar4 == 0) {
    uVar10 = (ushort)*(undefined8 *)(param_1 + 0x78);
    lVar7 = *(longlong *)(param_1 + 0x80);
    uVar11 = *(undefined4 *)(param_1 + 0x88);
    uVar12 = *(undefined4 *)(param_1 + 0x8c);
  }
  else {
    uVar10 = (ushort)*(undefined8 *)(param_1 + 0x40);
    lVar7 = *(longlong *)(param_1 + 0x48);
    uVar11 = *(undefined4 *)(param_1 + 0x50);
    uVar12 = *(undefined4 *)(param_1 + 0x54);
  }
  uVar2 = *(ushort *)(param_1 + 0x18e + ((ulonglong)bVar4 ^ 1) * 2);
  if (uVar2 < uVar10) {
    lVar8 = (ulonglong)uVar2 * 8;
    lVar3 = CONCAT44(uVar12,uVar11);
    iVar5 = (**(code **)(param_1 + 0x2d8))
                      (param_1,*(int *)(lVar8 + lVar3) - *(int *)(lVar7 + lVar8),
                       *(int *)(lVar8 + 4 + lVar3) - ((int *)(lVar7 + lVar8))[1]);
    lVar7 = (longlong)*(int *)(param_1 + 0x2d0) * (longlong)iVar5;
    lVar8 = (longlong)*(int *)(param_1 + 0x2d4) * (longlong)iVar5;
    if (*(short *)(param_1 + 0x196) == 0) {
      uVar10 = *(ushort *)(param_1 + 0xb0);
    }
    else {
      if (*(short *)(param_1 + 0x196) != 1) {
        return;
      }
      if (*(ushort *)(param_1 + 0xb2) == 0) {
        return;
      }
      uVar10 = *(short *)(*(longlong *)(param_1 + 0xd8) + -2 +
                         (ulonglong)*(ushort *)(param_1 + 0xb2) * 2) + 1;
    }
    uVar6 = 0;
    if (uVar10 != 0) {
      do {
        lVar9 = *(longlong *)(param_1 + 0xc0);
        if ((lVar3 != lVar9) || (uVar2 != uVar6)) {
          if ((*(short *)(param_1 + 0x1a0) != 0) && (*(int *)(param_1 + 0x324) == 0)) {
            piVar1 = (int *)(lVar9 + (ulonglong)uVar6 * 8);
            *piVar1 = *piVar1 + (int)((ulonglong)(lVar7 + 0x8000 + (lVar7 >> 0x3f)) >> 0x10);
            lVar9 = *(longlong *)(param_1 + 0xc0);
          }
          if ((*(short *)(param_1 + 0x1a2) != 0) && (*(int *)(param_1 + 0x324) != 7)) {
            piVar1 = (int *)(lVar9 + 4 + (ulonglong)uVar6 * 8);
            *piVar1 = *piVar1 + (int)((ulonglong)(lVar8 + 0x8000 + (lVar8 >> 0x3f)) >> 0x10);
          }
        }
        uVar6 = uVar6 + 1;
      } while (uVar6 < uVar10);
    }
  }
  else if (*(char *)(param_1 + 0x2c6) != '\0') goto LAB_18058c1ae;
  return;
}



