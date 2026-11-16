// FUN_180591860 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180591860 */

void FUN_180591860(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  ushort uVar3;
  short sVar4;
  int iVar5;
  int iVar6;
  longlong *plVar7;
  ushort *puVar8;
  undefined8 uVar9;
  longlong lVar10;
  int iVar11;
  longlong lVar12;
  uint uVar13;
  int local_res10 [2];
  uint local_res18 [2];
  int local_res20;
  undefined8 uVar14;
  undefined4 uVar15;
  
  lVar1 = *(longlong *)(param_1 + 0xa0);
  lVar12 = *(longlong *)(param_1 + 0x408);
  uVar2 = *(undefined8 *)(lVar1 + 0x30);
  *(undefined1 *)(lVar12 + 0x30) = 1;
  local_res10[0] = (**(code **)(param_1 + 0x2a0))(param_1,0x61766172,lVar1,local_res18);
  if (local_res10[0] == 0) {
    local_res20 = FUN_1805780f0(lVar1);
    local_res10[0] = FUN_180577bf0(lVar1,local_res18[0]);
    if (local_res10[0] == 0) {
      iVar5 = FUN_180577e30(lVar1);
      iVar6 = FUN_180577e30(lVar1);
      if (((iVar5 - 0x10000U & 0xfffeffff) == 0) && (iVar6 == **(int **)(lVar12 + 0x18))) {
        plVar7 = (longlong *)FUN_18057aad0(uVar2,0x40,local_res10);
        *(longlong **)(lVar12 + 0x38) = plVar7;
        if (local_res10[0] == 0) {
          uVar13 = 0;
          uVar15 = 0;
          puVar8 = (ushort *)FUN_18057ac40(uVar2,0x10,0,iVar6,0,local_res10);
          *plVar7 = (longlong)puVar8;
          if (local_res10[0] == 0) {
            if (0 < iVar6) {
              do {
                uVar3 = FUN_180577ed0(lVar1);
                *puVar8 = uVar3;
                if (local_res18[0] < (uint)uVar3 * 4) {
LAB_180591ae1:
                  lVar12 = (ulonglong)uVar13 - 1;
                  if (lVar12 < 0) {
                    FUN_18057abd0(uVar2,*plVar7);
                    *plVar7 = 0;
                  }
                  else {
                    lVar10 = lVar12 * 0x10;
                    do {
                      FUN_18057abd0(uVar2,*(undefined8 *)(lVar10 + 8 + *plVar7));
                      lVar12 = lVar12 + -1;
                      *(undefined8 *)(lVar10 + 8 + *plVar7) = 0;
                      lVar10 = lVar10 + -0x10;
                    } while (-1 < lVar12);
                    FUN_18057abd0(uVar2,*plVar7);
                    *plVar7 = 0;
                  }
                  goto LAB_180591ac5;
                }
                uVar14 = 0;
                uVar9 = FUN_18057ac40(uVar2,8,0,uVar3,0,local_res10);
                uVar15 = (undefined4)((ulonglong)uVar14 >> 0x20);
                *(undefined8 *)(puVar8 + 4) = uVar9;
                if (local_res10[0] != 0) goto LAB_180591ae1;
                iVar11 = 0;
                lVar12 = 0;
                if (*puVar8 != 0) {
                  do {
                    sVar4 = FUN_180577ed0(lVar1);
                    *(int *)(lVar12 + *(longlong *)(puVar8 + 4)) = sVar4 * 4;
                    sVar4 = FUN_180577ed0(lVar1);
                    uVar15 = (undefined4)((ulonglong)uVar14 >> 0x20);
                    iVar11 = iVar11 + 1;
                    *(int *)(lVar12 + 4 + *(longlong *)(puVar8 + 4)) = sVar4 * 4;
                    lVar12 = lVar12 + 8;
                  } while (iVar11 < (int)(uint)*puVar8);
                }
                uVar13 = uVar13 + 1;
                puVar8 = puVar8 + 8;
              } while ((int)uVar13 < iVar6);
            }
            if (0x1ffff < iVar5) {
              iVar6 = FUN_180577e30(lVar1);
              iVar11 = FUN_180577e30(lVar1);
              iVar5 = local_res20;
              if (((iVar11 == 0) ||
                  (local_res10[0] = FUN_180588c10(param_1,iVar11 + local_res20,plVar7 + 1),
                  local_res10[0] == 0)) && (iVar6 != 0)) {
                local_res10[0] =
                     FUN_180589180(param_1,iVar6 + iVar5,plVar7 + 5,plVar7 + 1,
                                   CONCAT44(uVar15,local_res18[0]));
              }
            }
          }
        }
      }
LAB_180591ac5:
      FUN_180577d30(lVar1);
    }
  }
  return;
}



