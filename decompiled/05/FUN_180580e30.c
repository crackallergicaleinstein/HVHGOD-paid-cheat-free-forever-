// FUN_180580e30 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180580e30 */

undefined8 FUN_180580e30(longlong *param_1)

{
  int *piVar1;
  ushort *puVar2;
  ushort uVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  uint uVar7;
  ulonglong uVar8;
  undefined *puVar9;
  uint uVar10;
  undefined8 uVar11;
  int *piVar12;
  ushort uVar13;
  uint local_res8 [2];
  uint local_res10 [2];
  undefined *local_res18;
  undefined8 local_res20;
  
  lVar4 = *param_1;
  lVar5 = param_1[2];
  uVar10 = 0;
  uVar11 = *(undefined8 *)(lVar4 + 0x88);
  if ((int)param_1[1] != 0) {
    do {
      uVar8 = (ulonglong)uVar10;
      uVar10 = uVar10 + 1;
      *(undefined2 *)(lVar5 + uVar8 * 2) = 0x1fff;
    } while (uVar10 < *(uint *)(param_1 + 1));
  }
  local_res20 = uVar11;
  iVar6 = FUN_180577910(lVar4,0x756e6963);
  if (iVar6 == 0) {
    puVar9 = &DAT_18066d168;
    uVar13 = 0;
    do {
      local_res18 = (&PTR_DAT_18066cf80)[*(int *)(puVar9 + 8)];
      piVar12 = *(int **)(local_res18 + 8);
      if ((piVar12 != (int *)0x0) && (*(int *)(puVar9 + 0x10) == 10)) {
        iVar6 = *piVar12;
        while (iVar6 != 0) {
          local_res8[0] = FUN_1805738d0(lVar4,iVar6);
          if (((local_res8[0] != 0) && (local_res8[0] < *(uint *)(param_1 + 1))) &&
             ((*(ushort *)(lVar5 + (ulonglong)local_res8[0] * 2) & 0x1fff) == 0x1fff)) {
            *(ushort *)(lVar5 + (ulonglong)local_res8[0] * 2) = uVar13 | 0x2000;
          }
          for (uVar10 = FUN_180573b30(lVar4,iVar6,local_res8);
              (local_res8[0] != 0 && (uVar10 <= (uint)piVar12[1]));
              uVar10 = FUN_180573b30(lVar4,uVar10,local_res8)) {
            if ((local_res8[0] < *(uint *)(param_1 + 1)) &&
               ((*(ushort *)(lVar5 + (ulonglong)local_res8[0] * 2) & 0x1fff) == 0x1fff)) {
              *(ushort *)(lVar5 + (ulonglong)local_res8[0] * 2) = uVar13 | 0x2000;
            }
          }
          piVar1 = piVar12 + 2;
          piVar12 = piVar12 + 2;
          iVar6 = *piVar1;
        }
        piVar12 = *(int **)(local_res18 + 0x10);
        iVar6 = *piVar12;
        while (iVar6 != 0) {
          local_res10[0] = FUN_1805738d0(lVar4,iVar6);
          if (((local_res10[0] != 0) && (local_res10[0] < *(uint *)(param_1 + 1))) &&
             (uVar3 = *(ushort *)(lVar5 + (ulonglong)local_res10[0] * 2), (uVar3 & 0x1fff) == uVar13
             )) {
            *(ushort *)(lVar5 + (ulonglong)local_res10[0] * 2) = uVar3 | 0x4000;
          }
          for (uVar10 = FUN_180573b30(lVar4,iVar6,local_res10);
              (local_res10[0] != 0 && (uVar10 <= (uint)piVar12[1]));
              uVar10 = FUN_180573b30(lVar4,uVar10,local_res10)) {
            if (local_res10[0] < *(uint *)(param_1 + 1)) {
              uVar3 = *(ushort *)(lVar5 + (ulonglong)local_res10[0] * 2);
              if ((uVar3 & 0x1fff) == uVar13) {
                *(ushort *)(lVar5 + (ulonglong)local_res10[0] * 2) = uVar3 | 0x4000;
              }
            }
          }
          piVar1 = piVar12 + 2;
          piVar12 = piVar12 + 2;
          iVar6 = *piVar1;
        }
      }
      uVar13 = uVar13 + 1;
      puVar9 = (&PTR_DAT_18066d990)[uVar13];
    } while (puVar9 != (undefined *)0x0);
    uVar10 = 0x30;
    do {
      uVar7 = FUN_1805738d0(lVar4,uVar10);
      if ((uVar7 != 0) && (uVar7 < *(uint *)(param_1 + 1))) {
        puVar2 = (ushort *)(lVar5 + (ulonglong)uVar7 * 2);
        *puVar2 = *puVar2 | 0x8000;
      }
      uVar10 = uVar10 + 1;
    } while (uVar10 < 0x3a);
    uVar11 = local_res20;
  }
  uVar8 = 0;
  if ((*(int *)(param_1[0x5e] + 0x18) != 0x1fff) && ((int)param_1[1] != 0)) {
    do {
      uVar13 = *(ushort *)(lVar5 + uVar8 * 2);
      puVar2 = (ushort *)(lVar5 + uVar8 * 2);
      if ((uVar13 & 0x1fff) == 0x1fff) {
        uVar13 = uVar13 & 0xe000;
        *puVar2 = uVar13;
        *puVar2 = uVar13 | *(ushort *)(param_1[0x5e] + 0x18);
      }
      uVar10 = (int)uVar8 + 1;
      uVar8 = (ulonglong)uVar10;
    } while (uVar10 < *(uint *)(param_1 + 1));
  }
  *(undefined8 *)(lVar4 + 0x88) = uVar11;
  return 0;
}



