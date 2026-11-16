// FUN_1805d4fc0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805d4fc0 */

void FUN_1805d4fc0(longlong *param_1)

{
  uint uVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  int *piVar10;
  int iVar11;
  undefined8 local_res18;
  longlong local_res20;
  
  local_res20 = *param_1;
  uVar1 = *(uint *)(param_1 + 1);
  uVar8 = (ulonglong)(int)uVar1;
  if (1 < *(int *)((longlong)param_1 + 0xc)) {
    iVar5 = uVar1 - 2;
    uVar9 = (ulonglong)(*(int *)((longlong)param_1 + 0xc) - 1);
    iVar11 = iVar5 + uVar1;
    piVar10 = (int *)((longlong)(int)(uVar1 + 1) * 0x10 + local_res20);
    uVar7 = uVar8;
    do {
      if (1 < (int)(uVar1 - 1)) {
        uVar7 = (ulonglong)(uVar1 - 2);
        piVar6 = piVar10;
        do {
          iVar4 = *piVar6;
          if ((0x8000 < iVar4) && (piVar6[(uVar8 + 1) * -4] + -0x10000 < iVar4)) {
            uVar2 = *(undefined8 *)(piVar6 + (uVar8 + 1) * -4 + 1);
            local_res18._4_4_ = (int)((ulonglong)uVar2 >> 0x20);
            local_res18 = CONCAT44(local_res18._4_4_ + -0x10000,(int)uVar2 + -0x10000);
            iVar3 = FUN_180578a00(&local_res18);
            iVar4 = *piVar6;
            if (iVar3 < *piVar6) {
              *(undefined8 *)(piVar6 + 1) = local_res18;
              *piVar6 = iVar3;
              iVar4 = iVar3;
            }
          }
          if (iVar4 < 0x8001) {
LAB_1805d50eb:
            if (0x8000 < iVar4) goto LAB_1805d50f7;
          }
          else {
            if (piVar6[uVar8 * -4] + -0x10000 < iVar4) {
              uVar2 = *(undefined8 *)(piVar6 + uVar8 * -4 + 1);
              local_res18 = CONCAT44((int)((ulonglong)uVar2 >> 0x20) + -0x10000,(int)uVar2);
              iVar3 = FUN_180578a00(&local_res18);
              iVar4 = *piVar6;
              if (iVar3 < *piVar6) {
                *(undefined8 *)(piVar6 + 1) = local_res18;
                *piVar6 = iVar3;
                iVar4 = iVar3;
              }
              goto LAB_1805d50eb;
            }
LAB_1805d50f7:
            if (piVar6[uVar8 * -4 + 4] + -0x10000 < iVar4) {
              local_res18._4_4_ = (int)((ulonglong)*(undefined8 *)(piVar6 + uVar8 * -4 + 5) >> 0x20)
              ;
              local_res18 = CONCAT44(local_res18._4_4_ + -0x10000,
                                     (int)*(undefined8 *)(piVar6 + uVar8 * -4 + 5) + 0x10000);
              iVar3 = FUN_180578a00(&local_res18);
              iVar4 = *piVar6;
              if (iVar3 < *piVar6) {
                *(undefined8 *)(piVar6 + 1) = local_res18;
                *piVar6 = iVar3;
                iVar4 = iVar3;
              }
              if (iVar4 < 0x8001) goto LAB_1805d517d;
            }
            if (piVar6[-4] + -0x10000 < iVar4) {
              local_res18._4_4_ = (int)((ulonglong)*(undefined8 *)(piVar6 + -3) >> 0x20);
              local_res18 = CONCAT44(local_res18._4_4_,(int)*(undefined8 *)(piVar6 + -3) + -0x10000)
              ;
              iVar4 = FUN_180578a00(&local_res18);
              if (iVar4 < *piVar6) {
                *piVar6 = iVar4;
                *(undefined8 *)(piVar6 + 1) = local_res18;
              }
            }
          }
LAB_1805d517d:
          piVar6 = piVar6 + 4;
          uVar7 = uVar7 - 1;
        } while (uVar7 != 0);
        uVar7 = (ulonglong)uVar1;
      }
      if (-1 < iVar5) {
        piVar6 = (int *)((longlong)iVar11 * 0x10 + local_res20);
        iVar4 = iVar5;
        do {
          if ((0x8000 < *piVar6) && (piVar6[4] + -0x10000 < *piVar6)) {
            local_res18._4_4_ = (int)((ulonglong)*(undefined8 *)(piVar6 + 5) >> 0x20);
            local_res18 = CONCAT44(local_res18._4_4_,(int)*(undefined8 *)(piVar6 + 5) + 0x10000);
            iVar3 = FUN_180578a00(&local_res18);
            if (iVar3 < *piVar6) {
              *piVar6 = iVar3;
              *(undefined8 *)(piVar6 + 1) = local_res18;
            }
          }
          piVar6 = piVar6 + -4;
          iVar4 = iVar4 + -1;
        } while (-1 < iVar4);
        uVar7 = (ulonglong)uVar1;
      }
      piVar10 = piVar10 + uVar8 * 4;
      iVar11 = (int)uVar7 + iVar11;
      uVar9 = uVar9 - 1;
    } while (uVar9 != 0);
  }
  return;
}



