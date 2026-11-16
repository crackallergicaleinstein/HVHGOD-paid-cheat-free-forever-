// FUN_1804b0130 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804b0130 */

void FUN_1804b0130(longlong param_1,uint param_2,byte param_3,float param_4)

{
  int *piVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  int *piVar7;
  byte bVar8;
  uint uVar9;
  int iVar10;
  longlong lVar11;
  
  if ((param_2 != 0) && (*(char *)(param_1 + 0xbb5) != '\0')) {
    lVar5 = *(longlong *)(param_1 + 0xe0);
    if (*(char *)(lVar5 + 0x78) != '\0') {
      if (param_2 == 0x8000) {
        param_2 = 0x1000;
      }
      else if (param_2 == 0x1000) {
        param_2 = 0x8000;
      }
      else if (param_2 == 0x212) {
        param_2 = 0x20f;
      }
      else if (param_2 == 0x216) {
        param_2 = 0x213;
      }
      else if (param_2 == 0x20f) {
        param_2 = 0x212;
      }
      else if (param_2 == 0x213) {
        param_2 = 0x216;
      }
    }
    piVar1 = (int *)(lVar5 + 0x1448);
    iVar3 = *piVar1;
    if (-1 < iVar3 + -1) {
      lVar11 = (longlong)(iVar3 + -1);
      piVar7 = (int *)(lVar11 * 0x1c + *(longlong *)(lVar5 + 0x1450));
      do {
        if ((*piVar7 == 4) && (piVar7[3] == param_2)) goto LAB_1804b01f7;
        piVar7 = piVar7 + -7;
        lVar11 = lVar11 + -1;
      } while (-1 < lVar11);
    }
    piVar7 = (int *)0x0;
LAB_1804b01f7:
    uVar9 = param_2;
    if ((param_2 & 0xf000) != 0) {
      if (param_2 == 0x1000) {
        uVar9 = 0x297;
      }
      else if (param_2 == 0x2000) {
        uVar9 = 0x298;
      }
      else if (param_2 == 0x4000) {
        uVar9 = 0x299;
      }
      else if (param_2 == 0x8000) {
        uVar9 = 0x29a;
      }
    }
    if (piVar7 == (int *)0x0) {
      bVar8 = *(byte *)(lVar5 + -0x1ecc + (longlong)(int)uVar9 * 0x10);
      fVar2 = *(float *)(lVar5 + -0x1ec0 + (longlong)(int)uVar9 * 0x10);
    }
    else {
      bVar8 = *(byte *)(piVar7 + 4);
      fVar2 = (float)piVar7[5];
    }
    if ((bVar8 != param_3) || (fVar2 != param_4)) {
      iVar4 = *(int *)(lVar5 + 0x146c);
      *(int *)(lVar5 + 0x146c) = iVar4 + 1;
      iVar6 = *(int *)(lVar5 + 0x144c);
      if (iVar3 == iVar6) {
        if (iVar6 == 0) {
          iVar6 = 8;
        }
        else {
          iVar6 = iVar6 / 2 + iVar6;
        }
        iVar10 = iVar3 + 1;
        if (iVar3 + 1 < iVar6) {
          iVar10 = iVar6;
        }
        FUN_1804d1310(piVar1,iVar10);
      }
      lVar11 = (longlong)*piVar1 * 0x1c;
      lVar5 = *(longlong *)(lVar5 + 0x1450);
      *(undefined8 *)(lVar11 + lVar5) = CONCAT44((param_2 - 0x278 < 0x18) + 2,4);
      ((undefined8 *)(lVar11 + lVar5))[1] = CONCAT44(param_2,iVar4);
      *(ulonglong *)(lVar11 + 0x10 + lVar5) = CONCAT44(param_4,(uint)param_3);
      *(undefined4 *)(lVar11 + 0x18 + lVar5) = 0;
      *piVar1 = *piVar1 + 1;
    }
  }
  return;
}



