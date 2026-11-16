// FUN_1804b0330 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804b0330 */

void FUN_1804b0330(longlong param_1,float param_2,float param_3)

{
  int *piVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  undefined4 uVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  int iVar10;
  longlong lVar11;
  
  lVar6 = *(longlong *)(param_1 + 0xe0);
  if (*(char *)(param_1 + 0xbb5) != '\0') {
    if (-3.4028235e+38 < param_3) {
      iVar7 = (int)param_3;
      if ((param_3 < 0.0) && ((float)iVar7 != param_3)) {
        iVar7 = iVar7 + -1;
      }
      param_3 = (float)iVar7;
    }
    if (-3.4028235e+38 < param_2) {
      iVar7 = (int)param_2;
      if ((param_2 < 0.0) && ((float)iVar7 != param_2)) {
        iVar7 = iVar7 + -1;
      }
      param_2 = (float)iVar7;
    }
    piVar1 = (int *)(lVar6 + 0x1448);
    iVar7 = *piVar1;
    if (-1 < iVar7 + -1) {
      lVar11 = (longlong)(iVar7 + -1);
      piVar9 = (int *)(lVar11 * 0x1c + *(longlong *)(lVar6 + 0x1450));
      do {
        if (*piVar9 == 1) {
          if (piVar9 != (int *)0x0) {
            fVar2 = (float)piVar9[3];
            fVar3 = (float)piVar9[4];
            goto LAB_1804b03f3;
          }
          break;
        }
        piVar9 = piVar9 + -7;
        lVar11 = lVar11 + -1;
      } while (-1 < lVar11);
    }
    fVar2 = *(float *)(lVar6 + 0x110);
    fVar3 = *(float *)(lVar6 + 0x114);
LAB_1804b03f3:
    if ((fVar2 != param_2) || (fVar3 != param_3)) {
      iVar4 = *(int *)(lVar6 + 0x146c);
      *(int *)(lVar6 + 0x146c) = iVar4 + 1;
      iVar8 = *(int *)(lVar6 + 0x144c);
      uVar5 = *(undefined4 *)(lVar6 + 0x1468);
      if (iVar7 == iVar8) {
        if (iVar8 == 0) {
          iVar8 = 8;
        }
        else {
          iVar8 = iVar8 / 2 + iVar8;
        }
        iVar10 = iVar7 + 1;
        if (iVar7 + 1 < iVar8) {
          iVar10 = iVar8;
        }
        FUN_1804d1310(piVar1,iVar10);
      }
      lVar11 = (longlong)*piVar1 * 0x1c;
      lVar6 = *(longlong *)(lVar6 + 0x1450);
      *(undefined8 *)(lVar11 + lVar6) = &DAT_100000001;
      ((undefined8 *)(lVar11 + lVar6))[1] = CONCAT44(param_2,iVar4);
      *(ulonglong *)(lVar11 + 0x10 + lVar6) = CONCAT44(uVar5,param_3);
      *(undefined4 *)(lVar11 + 0x18 + lVar6) = 0;
      *piVar1 = *piVar1 + 1;
    }
  }
  return;
}



