// FUN_1804b04c0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804b04c0 */

void FUN_1804b04c0(longlong param_1,int param_2,byte param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  byte bVar7;
  char cVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  int iVar12;
  longlong lVar13;
  
  lVar11 = *(longlong *)(param_1 + 0xe0);
  lVar13 = (longlong)param_2;
  if (*(char *)(param_1 + 0xbb5) != '\0') {
    do {
      iVar12 = (int)lVar13;
      if (((*(char *)(param_1 + 0x50) != '\0') && (lVar13 == 0)) &&
         (*(char *)(param_1 + 0xb73) != '\0')) {
        iVar12 = 1;
        lVar13 = 1;
        if (param_3 == 0) {
          *(undefined1 *)(param_1 + 0xb73) = 0;
        }
      }
      piVar1 = (int *)(lVar11 + 0x1448);
      iVar2 = *piVar1;
      iVar3 = iVar2 + -1;
      if (-1 < iVar3) {
        lVar10 = (longlong)iVar3;
        piVar6 = (int *)(lVar10 * 0x1c + *(longlong *)(lVar11 + 0x1450));
        do {
          if ((*piVar6 == 3) && (piVar6[3] == iVar12)) {
            bVar7 = *(byte *)(piVar6 + 4);
            goto LAB_1804b0572;
          }
          piVar6 = piVar6 + -7;
          lVar10 = lVar10 + -1;
        } while (-1 < lVar10);
      }
      bVar7 = *(byte *)(lVar13 + 0x118 + lVar11);
LAB_1804b0572:
      if (bVar7 == param_3) {
        return;
      }
      if (((*(char *)(param_1 + 0x50) == '\0') || (lVar13 != 0)) || (param_3 == 0)) {
LAB_1804b061d:
        iVar3 = *(int *)(lVar11 + 0x146c);
        *(int *)(lVar11 + 0x146c) = iVar3 + 1;
        iVar5 = *(int *)(lVar11 + 0x144c);
        uVar4 = *(undefined4 *)(lVar11 + 0x1468);
        if (iVar2 == iVar5) {
          if (iVar5 == 0) {
            iVar5 = 8;
          }
          else {
            iVar5 = iVar5 / 2 + iVar5;
          }
          iVar9 = iVar2 + 1;
          if (iVar2 + 1 < iVar5) {
            iVar9 = iVar5;
          }
          FUN_1804d1310(piVar1,iVar9);
        }
        lVar13 = (longlong)*piVar1 * 0x1c;
        lVar11 = *(longlong *)(lVar11 + 0x1450);
        *(undefined8 *)(lVar13 + lVar11) = 0x100000003;
        ((undefined8 *)(lVar13 + lVar11))[1] = CONCAT44(iVar12,iVar3);
        *(ulonglong *)(lVar13 + 0x10 + lVar11) = CONCAT44(uVar4,(uint)param_3);
        *(undefined4 *)(lVar13 + 0x18 + lVar11) = 0;
        *piVar1 = *piVar1 + 1;
        return;
      }
      if (-1 < iVar3) {
        lVar13 = (longlong)iVar3;
        piVar6 = (int *)(lVar13 * 0x1c + *(longlong *)(lVar11 + 0x1450));
        do {
          if ((*piVar6 == 4) && (piVar6[3] == 0x8000)) {
            cVar8 = (char)piVar6[4];
            goto LAB_1804b05c8;
          }
          piVar6 = piVar6 + -7;
          lVar13 = lVar13 + -1;
        } while (-1 < lVar13);
      }
      cVar8 = *(char *)(lVar11 + 0x12f);
LAB_1804b05c8:
      if (cVar8 == '\0') goto LAB_1804b061d;
      if ((*(byte *)(lVar11 + 0x28cc) & 0x80) != 0) {
        FUN_1804cf3e0("[io] Super+Left Click aliased into Right Click\n");
      }
      *(undefined1 *)(param_1 + 0xb73) = 1;
      lVar13 = 1;
      lVar11 = *(longlong *)(param_1 + 0xe0);
      param_3 = 1;
    } while (*(char *)(param_1 + 0xbb5) != '\0');
  }
  return;
}



