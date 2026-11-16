// FUN_1805b5190 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805b5190 */

void FUN_1805b5190(int *param_1,longlong param_2)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  longlong lVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  int iVar11;
  int iVar12;
  int *piVar13;
  ulonglong uVar14;
  
  lVar8 = *(longlong *)(param_2 + 0xf0);
  iVar11 = 0;
  FUN_18063ab10(param_1,0,0x150);
  *param_1 = *(int *)(param_2 + 0x38);
  iVar5 = FUN_180573310(*(undefined4 *)(*(longlong *)(lVar8 + 0x328) + 0x17c),0x3e80000);
  param_1[3] = iVar5;
  param_1[4] = *(int *)(*(longlong *)(lVar8 + 0x328) + 0x180) << 0x10;
  param_1[5] = *(int *)(*(longlong *)(lVar8 + 0x328) + 0x184) << 0x10;
  lVar8 = *(longlong *)(lVar8 + 0x328);
  uVar14 = (ulonglong)*(byte *)(lVar8 + 0xba);
  uVar10 = (ulonglong)*(byte *)(lVar8 + 0xb8);
  bVar1 = *(byte *)(lVar8 + 0xb9);
  bVar2 = *(byte *)(lVar8 + 0xbb);
  if ((*(int *)(lVar8 + 0x208) == 1) &&
     ((uVar10 == 0 ||
      ((((uVar10 == 4 && (*(int *)(lVar8 + 0xbc) < -0x780000)) &&
        (*(int *)(lVar8 + 0xc0) < -0x780000)) &&
       ((0x3700000 < *(int *)(lVar8 + 0xc4) && (0x3700000 < *(int *)(lVar8 + 200))))))))) {
    iVar11 = *param_1;
    lVar8 = (longlong)iVar11 * -0x780001;
    param_1[0x14] = -0x780001;
    param_1[0x16] = iVar11;
    param_1[0x10] = 0x31;
    param_1[0x15] =
         ((int)((ulonglong)(lVar8 + 0x8000 + (lVar8 >> 0x3f)) >> 0x10) + 0x8000U & 0xffff0000) -
         0x8000;
    iVar5 = *(int *)(param_2 + 0x130);
    param_1[0xe] = iVar11;
    param_1[8] = 0x32;
    *(undefined1 *)((longlong)param_1 + 9) = 1;
    iVar5 = iVar5 * 2 + 0x3700001;
    lVar8 = (longlong)iVar5 * (longlong)iVar11;
    param_1[0xc] = iVar5;
    param_1[0xd] = ((int)((ulonglong)(lVar8 + 0x8000 + (lVar8 >> 0x3f)) >> 0x10) + 0x8000U &
                   0xffff0000) + 0x8000;
    return;
  }
  uVar9 = 0;
  if (uVar10 != 0) {
    do {
      param_1[(ulonglong)(uint)param_1[1] * 5 + 0x18] = *(int *)(lVar8 + 0xbc + uVar9 * 4);
      param_1[((ulonglong)(uint)param_1[1] + 5) * 5] = *(int *)(lVar8 + 0xc0 + uVar9 * 4);
      uVar7 = (ulonglong)(uint)param_1[1];
      iVar5 = param_1[(uVar7 + 5) * 5] - param_1[uVar7 * 5 + 0x18];
      if (-1 < iVar5) {
        if (iVar5 <= iVar11) {
          iVar5 = iVar11;
        }
        iVar11 = iVar5;
        if (uVar9 == 0) {
          *(undefined1 *)(param_1 + uVar7 * 5 + 0x1c) = 1;
          uVar7 = (ulonglong)(uint)param_1[1];
          iVar5 = param_1[uVar7 * 5 + 0x19];
        }
        else {
          param_1[(uVar7 + 5) * 5] = param_1[(uVar7 + 5) * 5] + *(int *)(param_2 + 0x130) * 2;
          param_1[(ulonglong)(uint)param_1[1] * 5 + 0x18] =
               param_1[(ulonglong)(uint)param_1[1] * 5 + 0x18] + *(int *)(param_2 + 0x130) * 2;
          *(undefined1 *)(param_1 + (ulonglong)(uint)param_1[1] * 5 + 0x1c) = 0;
          uVar7 = (ulonglong)(uint)param_1[1];
          iVar5 = param_1[uVar7 * 5 + 0x18];
        }
        param_1[uVar7 * 5 + 0x1a] = iVar5;
        param_1[1] = param_1[1] + 1;
      }
      uVar9 = uVar9 + 2;
    } while (uVar9 < uVar10);
  }
  uVar10 = 0;
  if ((ulonglong)bVar1 != 0) {
    do {
      param_1[(ulonglong)(uint)param_1[1] * 5 + 0x18] = *(int *)(lVar8 + 0xf4 + uVar10 * 4);
      param_1[((ulonglong)(uint)param_1[1] + 5) * 5] = *(int *)(lVar8 + 0xf8 + uVar10 * 4);
      uVar9 = (ulonglong)(uint)param_1[1];
      iVar5 = param_1[uVar9 * 5 + 0x19] - param_1[uVar9 * 5 + 0x18];
      if (-1 < iVar5) {
        *(undefined1 *)(param_1 + uVar9 * 5 + 0x1c) = 1;
        param_1[(ulonglong)(uint)param_1[1] * 5 + 0x1a] =
             param_1[(ulonglong)(uint)param_1[1] * 5 + 0x19];
        param_1[1] = param_1[1] + 1;
        if (iVar5 <= iVar11) {
          iVar5 = iVar11;
        }
        iVar11 = iVar5;
      }
      uVar10 = uVar10 + 2;
    } while (uVar10 < bVar1);
  }
  iVar5 = FUN_180573310(0x10000,*param_1);
  uVar10 = 0;
  if (param_1[1] != 0) {
    piVar13 = param_1 + 0x1a;
    do {
      uVar9 = 0;
      iVar3 = *piVar13;
      if ((char)piVar13[2] == '\0') {
        uVar9 = 2;
        iVar12 = 0x7fffffff;
        if (2 < uVar14) {
          do {
            iVar4 = *(int *)(lVar8 + 0x11c + uVar9 * 4) + *(int *)(param_2 + 0x130) * 2;
            iVar6 = iVar3 - iVar4;
            if (iVar6 < 0) {
              iVar6 = iVar4 - iVar3;
            }
          } while ((((iVar12 <= iVar6) || (iVar5 <= iVar6)) ||
                   (*piVar13 = iVar4, iVar12 = iVar6, iVar6 != 0)) &&
                  (uVar9 = uVar9 + 2, uVar9 < uVar14));
        }
      }
      else {
        iVar12 = 0x7fffffff;
        if ((ulonglong)bVar2 != 0) {
          do {
            iVar4 = *(int *)(lVar8 + 0x158 + uVar9 * 4);
            iVar6 = iVar3 - iVar4;
            if (iVar6 < 0) {
              iVar6 = iVar4 - iVar3;
            }
          } while ((((iVar12 <= iVar6) || (iVar5 <= iVar6)) ||
                   (*piVar13 = iVar4, iVar12 = iVar6, iVar6 != 0)) &&
                  (uVar9 = uVar9 + 2, uVar9 < bVar2));
        }
        if (1 < uVar14) {
          iVar4 = *(int *)(lVar8 + 0x120);
          iVar6 = iVar3 - iVar4;
          if (iVar6 < 0) {
            iVar6 = iVar4 - iVar3;
          }
          if ((iVar6 < iVar12) && (iVar6 < iVar5)) {
            *piVar13 = iVar4;
          }
        }
      }
      uVar10 = uVar10 + 1;
      piVar13 = piVar13 + 5;
    } while (uVar10 < (uint)param_1[1]);
  }
  uVar14 = 0;
  if ((0 < iVar11) && (iVar5 = FUN_180573310(0x10000,iVar11), iVar5 < param_1[3])) {
    iVar5 = FUN_180573310(0x10000,iVar11);
    param_1[3] = iVar5;
  }
  if (*param_1 < param_1[3]) {
    *(undefined1 *)(param_1 + 2) = 1;
    iVar5 = FUN_1805753e0(0x999a);
    param_1[6] = 0x999a - iVar5;
    if (0x7fff < 0x999a - iVar5) {
      param_1[6] = 0x7fff;
    }
  }
  if (*(char *)(param_2 + 0x102) != '\0') {
    param_1[6] = 0;
  }
  if (param_1[1] != 0) {
    piVar13 = param_1 + 0x1a;
    do {
      iVar5 = -param_1[6];
      if ((char)piVar13[2] == '\0') {
        iVar5 = param_1[6];
      }
      uVar14 = uVar14 + 1;
      piVar13[1] = (int)((ulonglong)
                         ((longlong)*param_1 * (longlong)*piVar13 + 0x8000 +
                         ((longlong)*param_1 * (longlong)*piVar13 >> 0x3f)) >> 0x10) + iVar5 +
                   0x8000U & 0xffff0000;
      piVar13 = piVar13 + 5;
    } while (uVar14 < (uint)param_1[1]);
  }
  return;
}



