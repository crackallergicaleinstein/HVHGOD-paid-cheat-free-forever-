// FUN_1804e19a0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804e19a0 */

void FUN_1804e19a0(longlong param_1,uint *param_2)

{
  undefined8 *_Buf1;
  void *_Buf2;
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int *piVar8;
  longlong lVar9;
  void *_Buf1_00;
  longlong lVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  longlong lVar16;
  longlong lVar17;
  int local_res8;
  int local_res18;
  longlong local_res20;
  
  if (*(int *)(param_1 + 4) < 2) {
    return;
  }
  FUN_1804e1d30(param_1,param_2,0);
  uVar14 = *param_2;
  if (0 < (int)uVar14) {
    do {
      uVar6 = uVar14 - 1;
      if ((*(int *)(*(longlong *)(param_2 + 2) + -0x20 + (ulonglong)uVar14 * 0x48) != 0) ||
         (*(longlong *)(*(longlong *)(param_2 + 2) + (ulonglong)uVar14 * 0x48 + -0x18) != 0)) break;
      *param_2 = uVar6;
      uVar14 = uVar6;
    } while (0 < (int)uVar6);
  }
  iVar5 = 0;
  local_res18 = 0;
  local_res8 = 0;
  if ((*(int *)(param_1 + 4) < 1) || ((int)uVar14 < 1)) {
    _Buf1_00 = (void *)0x0;
  }
  else {
    _Buf1_00 = (void *)(*(longlong *)(param_2 + 2) + (longlong)(int)(uVar14 - 1) * 0x48);
    if (_Buf1_00 != (void *)0x0) {
      iVar12 = *(int *)((longlong)_Buf1_00 + 0x28) + *(int *)((longlong)_Buf1_00 + 0x24);
      goto LAB_1804e1a5f;
    }
  }
  iVar12 = 0;
LAB_1804e1a5f:
  iVar15 = 1;
  if (1 < *(int *)(param_1 + 4)) {
    local_res20 = 0x20;
    do {
      piVar8 = (int *)(*(longlong *)(param_1 + 0x10) + local_res20);
      iVar11 = *piVar8;
      if (0 < iVar11) {
        if ((*(int *)(*(longlong *)(piVar8 + 2) + -0x20 + (longlong)iVar11 * 0x48) == 0) &&
           (*(longlong *)(*(longlong *)(piVar8 + 2) + -0x18 + (longlong)iVar11 * 0x48) == 0)) {
          *piVar8 = iVar11 + -1;
          iVar11 = iVar11 + -1;
        }
      }
      if ((0 < iVar11) && (_Buf1_00 != (void *)0x0)) {
        _Buf2 = *(void **)(piVar8 + 2);
        iVar5 = memcmp(_Buf1_00,_Buf2,0x24);
        if ((iVar5 == 0) &&
           ((*(longlong *)((longlong)_Buf1_00 + 0x30) == 0 &&
            (*(longlong *)((longlong)_Buf2 + 0x30) == 0)))) {
          *(int *)((longlong)_Buf1_00 + 0x28) =
               *(int *)((longlong)_Buf1_00 + 0x28) + *(int *)((longlong)_Buf2 + 0x28);
          iVar12 = iVar12 + *(int *)((longlong)_Buf2 + 0x28);
          FUN_18063aed0(*(longlong *)(piVar8 + 2),*(longlong *)(piVar8 + 2) + 0x48,
                        (longlong)*piVar8 * 0x48 + -0x48);
          *piVar8 = *piVar8 + -1;
          iVar11 = *piVar8;
        }
      }
      local_res8 = local_res8 + piVar8[4];
      iVar5 = local_res18 + iVar11;
      if (0 < iVar11) {
        lVar10 = *(longlong *)(piVar8 + 2);
        lVar17 = 0;
        iVar7 = 0;
        _Buf1_00 = (void *)(lVar10 + (longlong)(iVar11 + -1) * 0x48);
        do {
          *(int *)(lVar10 + 0x24 + lVar17) = iVar12;
          lVar17 = lVar17 + 0x48;
          lVar10 = *(longlong *)(piVar8 + 2);
          iVar7 = iVar7 + 1;
          iVar12 = iVar12 + *(int *)(lVar10 + -0x20 + lVar17);
        } while (iVar7 < *piVar8);
      }
      iVar15 = iVar15 + 1;
      local_res20 = local_res20 + 0x20;
      local_res18 = iVar5;
    } while (iVar15 < *(int *)(param_1 + 4));
  }
  uVar14 = 8;
  uVar6 = param_2[1];
  uVar13 = *param_2 + iVar5;
  if ((int)uVar6 < (int)uVar13) {
    if (uVar6 == 0) {
      uVar6 = 8;
    }
    else {
      uVar6 = (int)uVar6 / 2 + uVar6;
    }
    uVar1 = uVar13;
    if ((int)uVar13 < (int)uVar6) {
      uVar1 = uVar6;
    }
    FUN_1804d1630(param_2,uVar1);
  }
  *param_2 = uVar13;
  uVar6 = param_2[5];
  uVar13 = param_2[4] + local_res8;
  if ((int)uVar6 < (int)uVar13) {
    if (uVar6 != 0) {
      uVar14 = uVar6 + (int)uVar6 / 2;
    }
    uVar6 = uVar13;
    if ((int)uVar13 < (int)uVar14) {
      uVar6 = uVar14;
    }
    FUN_1804d1090(param_2 + 4,uVar6);
  }
  param_2[4] = uVar13;
  iVar12 = 1;
  lVar16 = *(longlong *)(param_2 + 2);
  lVar17 = lVar16 + ((longlong)(int)*param_2 - (longlong)iVar5) * 0x48;
  lVar10 = *(longlong *)(param_2 + 6) + ((longlong)(int)uVar13 - (longlong)local_res8) * 2;
  if (1 < *(int *)(param_1 + 4)) {
    lVar16 = 0x20;
    do {
      piVar8 = (int *)(*(longlong *)(param_1 + 0x10) + lVar16);
      if (*piVar8 != 0) {
        lVar9 = (longlong)*piVar8 * 0x48;
        FUN_18063aed0(lVar17,*(undefined8 *)(piVar8 + 2),lVar9);
        lVar17 = lVar17 + lVar9;
      }
      if (piVar8[4] != 0) {
        lVar9 = (longlong)piVar8[4] * 2;
        FUN_18063aed0(lVar10,*(undefined8 *)(piVar8 + 6),lVar9);
        lVar10 = lVar10 + lVar9;
      }
      iVar12 = iVar12 + 1;
      lVar16 = lVar16 + 0x20;
    } while (iVar12 < *(int *)(param_1 + 4));
    lVar16 = *(longlong *)(param_2 + 2);
  }
  *(longlong *)(param_2 + 0x12) = lVar10;
  if ((*param_2 == 0) || (*(longlong *)(lVar16 + -0x18 + (longlong)(int)*param_2 * 0x48) != 0)) {
    FUN_1804d90c0(param_2);
  }
  lVar17 = (longlong)(int)*param_2 * 9 + -9;
  _Buf1 = (undefined8 *)(*(longlong *)(param_2 + 2) + lVar17 * 8);
  if (*(int *)(*(longlong *)(param_2 + 2) + 0x28 + lVar17 * 8) == 0) {
    uVar2 = *(undefined8 *)(param_2 + 0x1a);
    uVar3 = *(undefined8 *)(param_2 + 0x1c);
    uVar4 = *(undefined8 *)(param_2 + 0x1e);
    *_Buf1 = *(undefined8 *)(param_2 + 0x18);
    _Buf1[1] = uVar2;
    _Buf1[2] = uVar3;
    _Buf1[3] = uVar4;
    *(uint *)(_Buf1 + 4) = param_2[0x20];
    *(undefined4 *)(param_1 + 4) = 1;
    return;
  }
  iVar5 = memcmp(_Buf1,param_2 + 0x18,0x24);
  if (iVar5 != 0) {
    FUN_1804d90c0(param_2);
  }
  *(undefined4 *)(param_1 + 4) = 1;
  return;
}



