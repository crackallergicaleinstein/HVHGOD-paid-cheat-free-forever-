// FUN_18058aa50 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18058aa50 */

void FUN_18058aa50(longlong param_1,longlong param_2)

{
  int *piVar1;
  uint uVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  int *piVar9;
  longlong lVar10;
  ulonglong uVar11;
  int *piVar12;
  ulonglong uVar13;
  int *piVar14;
  int iVar15;
  undefined4 local_res18;
  
  iVar15 = *(int *)(param_1 + 0x1a4);
  if (*(int *)(param_1 + 0x3c) < iVar15) {
    if (*(char *)(param_1 + 0x2c6) != '\0') {
      *(undefined4 *)(param_1 + 0x20) = 0x81;
    }
  }
  else {
    *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) - iVar15;
    if (*(ushort *)(param_1 + 0x18e) < *(ushort *)(param_1 + 0x40)) {
      if (((*(short *)(param_1 + 0x192) == 0) || (*(short *)(param_1 + 0x194) == 0)) ||
         (*(short *)(param_1 + 0x196) == 0)) {
        bVar3 = true;
        lVar7 = 0x48;
      }
      else {
        bVar3 = false;
        lVar7 = 0x58;
      }
      lVar8 = (ulonglong)*(ushort *)(param_1 + 0x18e) * 8;
      piVar14 = (int *)(*(longlong *)(lVar7 + param_1) + lVar8);
      piVar12 = (int *)(*(longlong *)(param_1 + 0x50) + lVar8);
      piVar1 = piVar14 + 1;
      if (*(ushort *)(param_1 + 400) < *(ushort *)(param_1 + 0x78)) {
        lVar7 = (ulonglong)*(ushort *)(param_1 + 400) * 8;
        if (bVar3) {
          uVar13 = (ulonglong)(uint)(*(int *)(*(longlong *)(param_1 + 0x80) + 4 + lVar7) - *piVar1);
          uVar11 = (ulonglong)(uint)(*(int *)(*(longlong *)(param_1 + 0x80) + lVar7) - *piVar14);
        }
        else {
          piVar9 = (int *)(*(longlong *)(param_1 + 0x90) + lVar7);
          if (*(int *)(param_1 + 0x160) == *(int *)(param_1 + 0x164)) {
            uVar13 = (ulonglong)(uint)(piVar9[1] - *piVar1);
            uVar11 = (ulonglong)(uint)(*piVar9 - *piVar14);
          }
          else {
            lVar7 = (longlong)(piVar9[1] - *piVar1) * (longlong)*(int *)(param_1 + 0x164);
            lVar8 = (longlong)(*piVar9 - *piVar14) * (longlong)*(int *)(param_1 + 0x160);
            uVar13 = lVar7 + 0x8000 + (lVar7 >> 0x3f) >> 0x10;
            uVar11 = lVar8 + (lVar8 >> 0x3f) + 0x8000 >> 0x10;
          }
        }
        iVar4 = (**(code **)(param_1 + 0x2e0))(param_1,uVar11,uVar13);
        local_res18 = (**(code **)(param_1 + 0x2d8))
                                (param_1,*(int *)(*(longlong *)(param_1 + 0x88) +
                                                 (ulonglong)*(ushort *)(param_1 + 400) * 8) -
                                         *piVar12,
                                 *(int *)(*(longlong *)(param_1 + 0x88) + 4 +
                                         (ulonglong)*(ushort *)(param_1 + 400) * 8) - piVar12[1]);
      }
      else {
        iVar4 = 0;
        local_res18 = 0;
      }
      while (iVar15 != 0) {
        uVar2 = *(uint *)(param_2 + -4);
        param_2 = param_2 + -4;
        iVar15 = iVar15 + -1;
        if (uVar2 < *(ushort *)(param_1 + 0xb0)) {
          lVar7 = (ulonglong)uVar2 * 8;
          if (bVar3) {
            uVar13 = (ulonglong)
                     (uint)(*(int *)(*(longlong *)(param_1 + 0xb8) + 4 + lVar7) - *piVar1);
            uVar11 = (ulonglong)(uint)(*(int *)(*(longlong *)(param_1 + 0xb8) + lVar7) - *piVar14);
          }
          else {
            piVar9 = (int *)(*(longlong *)(param_1 + 200) + lVar7);
            if (*(int *)(param_1 + 0x160) == *(int *)(param_1 + 0x164)) {
              uVar13 = (ulonglong)(uint)(piVar9[1] - *piVar1);
              uVar11 = (ulonglong)(uint)(*piVar9 - *piVar14);
            }
            else {
              lVar8 = (longlong)(piVar9[1] - *piVar1) * (longlong)*(int *)(param_1 + 0x164);
              lVar10 = (longlong)(*piVar9 - *piVar14) * (longlong)*(int *)(param_1 + 0x160);
              uVar13 = lVar8 + 0x8000 + (lVar8 >> 0x3f) >> 0x10;
              uVar11 = lVar10 + (lVar10 >> 0x3f) + 0x8000 >> 0x10;
            }
          }
          iVar5 = (**(code **)(param_1 + 0x2e0))(param_1,uVar11,uVar13);
          iVar6 = (**(code **)(param_1 + 0x2d8))
                            (param_1,*(int *)(*(longlong *)(param_1 + 0xc0) + lVar7) - *piVar12,
                             *(int *)(*(longlong *)(param_1 + 0xc0) + 4 + lVar7) - piVar12[1]);
          if (iVar5 == 0) {
            iVar5 = 0;
          }
          else if (iVar4 != 0) {
            iVar5 = FUN_1805753e0(iVar5,local_res18,iVar4);
          }
          (**(code **)(param_1 + 0x2f0))(param_1,param_1 + 0xb0,(short)uVar2,iVar5 - iVar6);
        }
        else if (*(char *)(param_1 + 0x2c6) != '\0') {
          *(undefined4 *)(param_1 + 0x20) = 0x86;
          return;
        }
      }
    }
    else if (*(char *)(param_1 + 0x2c6) != '\0') {
      *(undefined4 *)(param_1 + 0x20) = 0x86;
    }
  }
  *(undefined4 *)(param_1 + 0x1a4) = 1;
  return;
}



