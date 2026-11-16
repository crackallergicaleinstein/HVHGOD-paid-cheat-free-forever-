// FUN_1805d6650 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805d6650 */

void FUN_1805d6650(longlong *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  ulonglong uVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  int *piVar10;
  undefined8 local_res18;
  longlong local_res20;
  
  iVar9 = *(int *)((longlong)param_1 + 0xc) + -2;
  local_res20 = *param_1;
  iVar1 = (int)param_1[1];
  lVar8 = (longlong)iVar1;
  if (-1 < iVar9) {
    iVar6 = iVar1 + -2;
    iVar7 = iVar6 + iVar9 * iVar1;
    piVar10 = (int *)((longlong)(iVar9 * iVar1 + 1) * 0x10 + local_res20);
    do {
      if (1 < iVar1 + -1) {
        uVar5 = (ulonglong)(iVar1 - 2);
        piVar4 = piVar10;
        do {
          iVar3 = *piVar4;
          if ((0x8000 < iVar3) && (piVar4[lVar8 * 4 + -4] + -0x10000 < iVar3)) {
            local_res18._4_4_ = (int)((ulonglong)*(undefined8 *)(piVar4 + lVar8 * 4 + -3) >> 0x20);
            local_res18 = CONCAT44(local_res18._4_4_ + 0x10000,
                                   (int)*(undefined8 *)(piVar4 + lVar8 * 4 + -3) + -0x10000);
            iVar2 = FUN_180578a00(&local_res18);
            iVar3 = *piVar4;
            if (iVar2 < *piVar4) {
              *(undefined8 *)(piVar4 + 1) = local_res18;
              *piVar4 = iVar2;
              iVar3 = iVar2;
            }
          }
          if (iVar3 < 0x8001) {
LAB_1805d6780:
            if (0x8000 < iVar3) goto LAB_1805d678c;
          }
          else {
            if (piVar4[lVar8 * 4] + -0x10000 < iVar3) {
              local_res18 = CONCAT44((int)((ulonglong)*(undefined8 *)(piVar4 + lVar8 * 4 + 1) >>
                                          0x20) + 0x10000,
                                     (int)*(undefined8 *)(piVar4 + lVar8 * 4 + 1));
              iVar2 = FUN_180578a00(&local_res18);
              iVar3 = *piVar4;
              if (iVar2 < *piVar4) {
                *(undefined8 *)(piVar4 + 1) = local_res18;
                *piVar4 = iVar2;
                iVar3 = iVar2;
              }
              goto LAB_1805d6780;
            }
LAB_1805d678c:
            if (piVar4[lVar8 * 4 + 4] + -0x10000 < iVar3) {
              local_res18._4_4_ = (int)((ulonglong)*(undefined8 *)(piVar4 + lVar8 * 4 + 5) >> 0x20);
              local_res18 = CONCAT44(local_res18._4_4_ + 0x10000,
                                     (int)*(undefined8 *)(piVar4 + lVar8 * 4 + 5) + 0x10000);
              iVar2 = FUN_180578a00(&local_res18);
              iVar3 = *piVar4;
              if (iVar2 < *piVar4) {
                *(undefined8 *)(piVar4 + 1) = local_res18;
                *piVar4 = iVar2;
                iVar3 = iVar2;
              }
              if (iVar3 < 0x8001) goto LAB_1805d680d;
            }
            if (piVar4[-4] + -0x10000 < iVar3) {
              local_res18._4_4_ = (int)((ulonglong)*(undefined8 *)(piVar4 + -3) >> 0x20);
              local_res18 = CONCAT44(local_res18._4_4_,(int)*(undefined8 *)(piVar4 + -3) + -0x10000)
              ;
              iVar3 = FUN_180578a00(&local_res18);
              if (iVar3 < *piVar4) {
                *piVar4 = iVar3;
                *(undefined8 *)(piVar4 + 1) = local_res18;
              }
            }
          }
LAB_1805d680d:
          piVar4 = piVar4 + 4;
          uVar5 = uVar5 - 1;
        } while (uVar5 != 0);
      }
      if (-1 < iVar6) {
        piVar4 = (int *)((longlong)iVar7 * 0x10 + local_res20);
        iVar3 = iVar6;
        do {
          if ((0x8000 < *piVar4) && (piVar4[4] + -0x10000 < *piVar4)) {
            local_res18._4_4_ = (int)((ulonglong)*(undefined8 *)(piVar4 + 5) >> 0x20);
            local_res18 = CONCAT44(local_res18._4_4_,(int)*(undefined8 *)(piVar4 + 5) + 0x10000);
            iVar2 = FUN_180578a00(&local_res18);
            if (iVar2 < *piVar4) {
              *piVar4 = iVar2;
              *(undefined8 *)(piVar4 + 1) = local_res18;
            }
          }
          piVar4 = piVar4 + -4;
          iVar3 = iVar3 + -1;
        } while (-1 < iVar3);
      }
      piVar10 = piVar10 + (longlong)-iVar1 * 4;
      iVar7 = iVar7 + -iVar1;
      iVar9 = iVar9 + -1;
    } while (-1 < iVar9);
  }
  return;
}



