// FUN_18058bda0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18058bda0 */

void FUN_18058bda0(longlong param_1,longlong param_2)

{
  ushort *puVar1;
  int *piVar2;
  byte *pbVar3;
  ushort uVar4;
  byte bVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  int iVar10;
  ushort uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  
  iVar10 = *(int *)(param_1 + 0x1a4);
  if (*(int *)(param_1 + 0x3c) < iVar10) {
    if (*(char *)(param_1 + 0x2c6) != '\0') {
      *(undefined4 *)(param_1 + 0x20) = 0x81;
    }
LAB_18058bdd2:
    *(undefined4 *)(param_1 + 0x1a4) = 1;
    return;
  }
  *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) - iVar10;
  bVar5 = *(byte *)(param_1 + 0x1f0) & 1;
  if (bVar5 == 0) {
    uVar11 = (ushort)*(undefined8 *)(param_1 + 0x78);
    lVar7 = *(longlong *)(param_1 + 0x80);
    uVar12 = *(undefined4 *)(param_1 + 0x88);
    uVar13 = *(undefined4 *)(param_1 + 0x8c);
  }
  else {
    uVar11 = (ushort)*(undefined8 *)(param_1 + 0x40);
    lVar7 = *(longlong *)(param_1 + 0x48);
    uVar12 = *(undefined4 *)(param_1 + 0x50);
    uVar13 = *(undefined4 *)(param_1 + 0x54);
  }
  uVar4 = *(ushort *)(param_1 + 0x18e + ((ulonglong)bVar5 ^ 1) * 2);
  if (uVar4 < uVar11) {
    lVar8 = (ulonglong)uVar4 * 8;
    iVar6 = (**(code **)(param_1 + 0x2d8))
                      (param_1,*(int *)(lVar8 + CONCAT44(uVar13,uVar12)) - *(int *)(lVar7 + lVar8),
                       *(int *)(lVar8 + 4 + CONCAT44(uVar13,uVar12)) - ((int *)(lVar7 + lVar8))[1]);
    lVar7 = (longlong)*(int *)(param_1 + 0x2d0) * (longlong)iVar6;
    lVar8 = (longlong)*(int *)(param_1 + 0x2d4) * (longlong)iVar6;
    do {
      while( true ) {
        if (iVar10 == 0) goto LAB_18058bdd2;
        puVar1 = (ushort *)(param_2 + -4);
        uVar9 = (ulonglong)*puVar1;
        param_2 = param_2 + -4;
        iVar10 = iVar10 + -1;
        if (*(ushort *)(param_1 + 0xb0) <= *puVar1) break;
        if (*(short *)(param_1 + 0x1a0) != 0) {
          if (*(int *)(param_1 + 0x324) == 0) {
            piVar2 = (int *)(*(longlong *)(param_1 + 0xc0) + uVar9 * 8);
            *piVar2 = *piVar2 + (int)((ulonglong)(lVar7 + 0x8000 + (lVar7 >> 0x3f)) >> 0x10);
          }
          pbVar3 = (byte *)(uVar9 + *(longlong *)(param_1 + 0xd0));
          *pbVar3 = *pbVar3 | 8;
        }
        if (*(short *)(param_1 + 0x1a2) != 0) {
          if (*(int *)(param_1 + 0x324) != 7) {
            piVar2 = (int *)(*(longlong *)(param_1 + 0xc0) + 4 + uVar9 * 8);
            *piVar2 = *piVar2 + (int)((ulonglong)(lVar8 + 0x8000 + (lVar8 >> 0x3f)) >> 0x10);
          }
          pbVar3 = (byte *)(uVar9 + *(longlong *)(param_1 + 0xd0));
          *pbVar3 = *pbVar3 | 0x10;
        }
      }
    } while (*(char *)(param_1 + 0x2c6) == '\0');
  }
  else if (*(char *)(param_1 + 0x2c6) == '\0') {
    return;
  }
  *(undefined4 *)(param_1 + 0x20) = 0x86;
  return;
}



