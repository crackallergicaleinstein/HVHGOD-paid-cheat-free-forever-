// FUN_1805d1a00 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805d1a00 */

void FUN_1805d1a00(longlong param_1)

{
  int *piVar1;
  ushort uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  undefined8 ******ppppppuVar7;
  undefined8 ******ppppppuVar8;
  uint uVar9;
  undefined8 ******ppppppuVar10;
  undefined8 ******ppppppuVar11;
  undefined8 ******ppppppuVar12;
  int iVar13;
  int iVar14;
  undefined8 ******ppppppuVar15;
  uint uVar16;
  uint uVar17;
  int local_res8;
  undefined8 ******local_res20;
  undefined8 ******local_68;
  undefined8 ******local_60;
  undefined8 ******local_58;
  
  ppppppuVar15 = (undefined8 ******)0x0;
  ppppppuVar12 = (undefined8 ******)0x0;
  ppppppuVar8 = *(undefined8 *******)(param_1 + 0x60);
  local_res8 = **(int **)(param_1 + 0x28);
  iVar14 = (*(int **)(param_1 + 0x28))[*(int *)(param_1 + 0x54)] + -1;
  local_res20 = (undefined8 ******)0x0;
  local_68 = (undefined8 ******)0x0;
  local_60 = ppppppuVar8;
  local_58 = ppppppuVar8;
  (**(code **)(param_1 + 0xc0))(param_1,local_res8,iVar14);
  while (local_res8 <= iVar14) {
    ppppppuVar10 = &local_60;
    if (ppppppuVar8 != (undefined8 ******)0x0) {
      do {
        if (*(int *)(ppppppuVar8 + 3) == local_res8) {
          *ppppppuVar10 = *ppppppuVar8;
          if ((*(byte *)((longlong)ppppppuVar8 + 0x1c) & 8) == 0) {
            ppppppuVar7 = &local_68;
            for (; (ppppppuVar12 != (undefined8 ******)0x0 &&
                   (*(int *)(ppppppuVar12 + 4) < *(int *)(ppppppuVar8 + 4)));
                ppppppuVar12 = (undefined8 ******)*ppppppuVar12) {
              ppppppuVar7 = ppppppuVar12;
            }
            *ppppppuVar8 = ppppppuVar12;
            *ppppppuVar7 = ppppppuVar8;
            ppppppuVar8 = ppppppuVar10;
            ppppppuVar12 = local_68;
          }
          else {
            ppppppuVar7 = &local_res20;
            for (; (ppppppuVar15 != (undefined8 ******)0x0 &&
                   (*(int *)(ppppppuVar15 + 4) < *(int *)(ppppppuVar8 + 4)));
                ppppppuVar15 = (undefined8 ******)*ppppppuVar15) {
              ppppppuVar7 = ppppppuVar15;
            }
            *ppppppuVar8 = ppppppuVar15;
            *ppppppuVar7 = ppppppuVar8;
            ppppppuVar8 = ppppppuVar10;
            ppppppuVar15 = local_res20;
          }
        }
        ppppppuVar7 = (undefined8 ******)*ppppppuVar8;
        ppppppuVar10 = ppppppuVar8;
        ppppppuVar8 = ppppppuVar7;
      } while (ppppppuVar7 != (undefined8 ******)0x0);
      local_58 = local_60;
    }
    *(longlong *)(param_1 + 0x28) = *(longlong *)(param_1 + 0x28) + 4;
    iVar3 = **(int **)(param_1 + 0x28);
    do {
      iVar13 = 0;
      ppppppuVar10 = ppppppuVar12;
      ppppppuVar8 = ppppppuVar15;
      while( true ) {
        ppppppuVar7 = ppppppuVar12;
        ppppppuVar11 = ppppppuVar15;
        if ((ppppppuVar8 == (undefined8 ******)0x0) || (ppppppuVar10 == (undefined8 ******)0x0))
        break;
        uVar4 = *(uint *)(ppppppuVar8 + 4);
        uVar16 = *(uint *)(ppppppuVar10 + 4);
        iVar5 = *(int *)(param_1 + 4);
        uVar6 = uVar16;
        if ((int)uVar4 <= (int)uVar16) {
          uVar6 = uVar4;
          uVar4 = uVar16;
        }
        uVar17 = -iVar5;
        uVar9 = uVar17 & uVar4;
        uVar16 = iVar5 + -1 + uVar6 & uVar17;
        if ((int)uVar9 < (int)uVar16) {
          uVar2 = *(ushort *)((longlong)ppppppuVar8 + 0x1c);
          if (((uVar2 & 2) == 0) &&
             (((uVar2 & 1) == 0 ||
              ((((*(int *)((longlong)ppppppuVar8 + 0x14) != 1 ||
                 ((undefined8 ******)ppppppuVar8[1] != ppppppuVar10)) ||
                (((uVar2 & 0x10) != 0 && (*(int *)(param_1 + 8) <= (int)(uVar4 - uVar6))))) &&
               (((*(int *)(ppppppuVar8 + 2) != 0 ||
                 ((undefined8 ******)ppppppuVar10[1] != ppppppuVar8)) ||
                (((uVar2 & 0x20) != 0 && (*(int *)(param_1 + 8) <= (int)(uVar4 - uVar6))))))))))) {
            if ((uVar2 & 4) != 0) {
              uVar9 = (int)(((int)((iVar5 * 0x3f >> 0x1f & 0x3fU) + iVar5 * 0x3f) >> 6) + uVar6 +
                           uVar4) >> 1 & uVar17;
              uVar16 = uVar9 + iVar5;
              if ((int)uVar6 <= (int)uVar9) {
                uVar16 = uVar9 - iVar5;
              }
            }
            *(uint *)(ppppppuVar8 + 4) = uVar9;
            *(uint *)(ppppppuVar10 + 4) = uVar16;
            *(ushort *)((longlong)ppppppuVar8 + 0x1c) =
                 *(ushort *)((longlong)ppppppuVar8 + 0x1c) | 0x40;
            iVar13 = iVar13 + 1;
          }
        }
        else {
          (**(code **)(param_1 + 200))(param_1,local_res8);
        }
        ppppppuVar8 = (undefined8 ******)*ppppppuVar8;
        ppppppuVar10 = (undefined8 ******)*ppppppuVar10;
      }
      while (iVar13 != 0) {
        if ((*(byte *)((longlong)ppppppuVar11 + 0x1c) & 0x40) != 0) {
          (**(code **)(param_1 + 0xd0))
                    (param_1,local_res8,*(undefined4 *)(ppppppuVar11 + 4),
                     *(undefined4 *)(ppppppuVar7 + 4));
          *(ushort *)((longlong)ppppppuVar11 + 0x1c) =
               *(ushort *)((longlong)ppppppuVar11 + 0x1c) & 0xffbf;
          iVar13 = iVar13 + -1;
        }
        ppppppuVar7 = (undefined8 ******)*ppppppuVar7;
        ppppppuVar11 = (undefined8 ******)*ppppppuVar11;
      }
      (**(code **)(param_1 + 0xd8))(param_1);
      ppppppuVar8 = &local_res20;
      if (ppppppuVar15 != (undefined8 ******)0x0) {
        do {
          piVar1 = (int *)((longlong)ppppppuVar15 + 0x14);
          *piVar1 = *piVar1 + -1;
          if (*piVar1 == 0) {
            ppppppuVar10 = (undefined8 ******)*ppppppuVar15;
            *ppppppuVar8 = ppppppuVar10;
          }
          else {
            iVar13 = *(int *)(ppppppuVar15 + 2);
            *(int *)(ppppppuVar15 + 2) = iVar13 + 1;
            *(undefined4 *)(ppppppuVar15 + 4) =
                 *(undefined4 *)((longlong)ppppppuVar15 + (longlong)iVar13 * 4 + 0x28);
            ppppppuVar10 = (undefined8 ******)*ppppppuVar15;
            ppppppuVar8 = ppppppuVar15;
          }
          ppppppuVar15 = ppppppuVar10;
        } while (ppppppuVar10 != (undefined8 ******)0x0);
        ppppppuVar15 = local_res20;
      }
      ppppppuVar8 = &local_res20;
      if (ppppppuVar15 != (undefined8 ******)0x0) {
        ppppppuVar10 = (undefined8 ******)*ppppppuVar15;
        ppppppuVar7 = ppppppuVar15;
        while (ppppppuVar10 != (undefined8 ******)0x0) {
          if (*(int *)(ppppppuVar10 + 4) < *(int *)(ppppppuVar7 + 4)) {
            *ppppppuVar8 = ppppppuVar10;
            ppppppuVar8 = &local_res20;
            *ppppppuVar7 = *ppppppuVar10;
            *ppppppuVar10 = ppppppuVar7;
            ppppppuVar11 = local_res20;
            ppppppuVar15 = local_res20;
          }
          else {
            ppppppuVar11 = ppppppuVar10;
            ppppppuVar8 = ppppppuVar7;
          }
          ppppppuVar7 = ppppppuVar11;
          ppppppuVar10 = (undefined8 ******)*ppppppuVar11;
        }
      }
      ppppppuVar8 = &local_68;
      if (ppppppuVar12 != (undefined8 ******)0x0) {
        do {
          piVar1 = (int *)((longlong)ppppppuVar12 + 0x14);
          *piVar1 = *piVar1 + -1;
          if (*piVar1 == 0) {
            ppppppuVar10 = (undefined8 ******)*ppppppuVar12;
            *ppppppuVar8 = ppppppuVar10;
          }
          else {
            iVar13 = *(int *)(ppppppuVar12 + 2);
            *(int *)(ppppppuVar12 + 2) = iVar13 + -1;
            *(undefined4 *)(ppppppuVar12 + 4) =
                 *(undefined4 *)((longlong)ppppppuVar12 + (longlong)iVar13 * 4 + 0x20);
            ppppppuVar10 = (undefined8 ******)*ppppppuVar12;
            ppppppuVar8 = ppppppuVar12;
          }
          ppppppuVar12 = ppppppuVar10;
        } while (ppppppuVar10 != (undefined8 ******)0x0);
        ppppppuVar12 = local_68;
      }
      ppppppuVar8 = &local_68;
      if (ppppppuVar12 != (undefined8 ******)0x0) {
        ppppppuVar10 = (undefined8 ******)*ppppppuVar12;
        ppppppuVar7 = ppppppuVar12;
        while (ppppppuVar10 != (undefined8 ******)0x0) {
          if (*(int *)(ppppppuVar10 + 4) < *(int *)(ppppppuVar7 + 4)) {
            *ppppppuVar8 = ppppppuVar10;
            ppppppuVar8 = &local_68;
            *ppppppuVar7 = *ppppppuVar10;
            *ppppppuVar10 = ppppppuVar7;
            ppppppuVar11 = local_68;
            ppppppuVar12 = local_68;
          }
          else {
            ppppppuVar11 = ppppppuVar10;
            ppppppuVar8 = ppppppuVar7;
          }
          ppppppuVar7 = ppppppuVar11;
          ppppppuVar10 = (undefined8 ******)*ppppppuVar11;
        }
      }
      local_res8 = local_res8 + 1;
      ppppppuVar8 = local_58;
    } while (local_res8 < iVar3);
  }
  return;
}



