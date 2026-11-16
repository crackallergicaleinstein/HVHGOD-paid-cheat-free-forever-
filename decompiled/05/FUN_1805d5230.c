// FUN_1805d5230 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805d5230 */

undefined8 FUN_1805d5230(ulonglong *param_1,undefined8 param_2,int *param_3)

{
  ulonglong uVar1;
  undefined1 uVar2;
  int iVar3;
  int iVar4;
  ushort uVar5;
  int iVar6;
  longlong lVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  int iVar12;
  longlong lVar13;
  uint uVar14;
  longlong lVar15;
  ushort local_res8;
  int iStackX_14;
  uint local_res20;
  int local_a8;
  int iStack_a4;
  int local_a0;
  int local_9c;
  int local_98;
  int local_94;
  int local_90;
  int local_88;
  int iStack_84;
  longlong local_80;
  ulonglong local_78;
  ulonglong local_70;
  ulonglong local_68;
  ulonglong local_60;
  longlong local_58;
  ulonglong local_50;
  
  local_a8 = 0;
  iStack_a4 = 0;
  local_res20 = 0;
  iVar4 = 0x7fffffff;
  if (((param_1 == (ulonglong *)0x0) || (param_3 == (int *)0x0)) || ((int)param_1[4] != 2)) {
    return 6;
  }
  local_60 = *param_1;
  iVar3 = (int)param_1[2];
  uVar14 = (iVar3 - (int)local_60) * 2;
  local_78 = (ulonglong)uVar14;
  local_90 = (int)local_60 + iVar3 * -2 + (int)param_1[1];
  local_68 = local_60 >> 0x20;
  iVar3 = (int)(param_1[2] >> 0x20);
  local_80 = (longlong)(int)uVar14;
  iVar6 = (int)(local_60 >> 0x20);
  uVar8 = (int)(param_1[1] >> 0x20) + iVar3 * -2 + iVar6;
  local_50 = (ulonglong)uVar8;
  lVar15 = (longlong)local_90;
  iStackX_14 = (int)((ulonglong)param_2 >> 0x20);
  uVar14 = (iVar3 - iVar6) * 2;
  local_70 = (ulonglong)uVar14;
  local_58 = (longlong)(int)uVar14;
  local_res8 = 0;
  lVar13 = (longlong)(int)uVar8;
  do {
    uVar1 = local_68;
    uVar5 = 0;
    uVar14 = (uint)local_res8 << 0xe;
    do {
      lVar10 = (longlong)(int)uVar14;
      lVar11 = (longlong)
               (int)((ulonglong)(lVar10 * lVar10 + (lVar10 * lVar10 >> 0x3f) + 0x8000) >> 0x10);
      lVar7 = lVar11 * lVar15;
      lVar11 = lVar11 * lVar13;
      iVar6 = (int)local_60 + (int)((ulonglong)(lVar7 + 0x8000 + (lVar7 >> 0x3f)) >> 0x10) +
              (int)((ulonglong)(local_80 * lVar10 + 0x8000 + (local_80 * lVar10 >> 0x3f)) >> 0x10);
      local_88 = iVar6 * 0x400;
      iVar3 = (int)((ulonglong)((lVar11 >> 0x3f) + 0x8000 + lVar11) >> 0x10) + (int)uVar1 +
              (int)((ulonglong)(local_58 * lVar10 + 0x8000 + (local_58 * lVar10 >> 0x3f)) >> 0x10);
      local_a0 = (iVar6 - (int)param_2) * 0x400;
      iStack_84 = iVar3 * 0x400;
      local_9c = (iVar3 - iStackX_14) * 0x400;
      iVar3 = FUN_180578a00(&local_a0);
      if (iVar3 < iVar4) {
        local_res20 = uVar14;
        iVar4 = iVar3;
        local_a8 = local_88;
        iStack_a4 = iStack_84;
      }
      lVar10 = (int)(uVar14 * 2) * lVar13;
      lVar7 = (int)(uVar14 * 2) * lVar15;
      iVar12 = (int)((ulonglong)((lVar7 >> 0x3f) + 0x8000 + lVar7) >> 0x10) + (int)local_78;
      iVar9 = (int)((ulonglong)((lVar10 >> 0x3f) + 0x8000 + lVar10) >> 0x10) + (int)local_70;
      local_a0 = (int)((local_a0 >> 0x1f & 0x3ffU) + local_a0) >> 10;
      local_9c = (int)((local_9c >> 0x1f & 0x3ffU) + local_9c) >> 10;
      iVar3 = local_9c * (int)local_50 * 2;
      iVar6 = local_a0 * local_90 * 2;
      iVar3 = FUN_180573310(((int)((local_9c * iVar9 >> 0x1f & 0x3fU) + local_9c * iVar9) >> 6) +
                            ((int)(local_a0 * iVar12 + (local_a0 * iVar12 >> 0x1f & 0x3fU)) >> 6),
                            ((int)((iVar9 * iVar9 >> 0x1f & 0x3fU) + iVar9 * iVar9) >> 6) +
                            ((int)(iVar12 * iVar12 + (iVar12 * iVar12 >> 0x1f & 0x3fU)) >> 6) +
                            ((int)(iVar3 + (iVar3 >> 0x1f & 0x3fU)) >> 6) +
                            ((int)(iVar6 + (iVar6 >> 0x1f & 0x3fU)) >> 6));
      uVar14 = uVar14 - iVar3;
    } while ((uVar14 < 0x10001) && (uVar5 = uVar5 + 1, uVar5 < 4));
    local_res8 = local_res8 + 1;
  } while (local_res8 < 5);
  lVar15 = (int)local_res20 * lVar15;
  lVar13 = (int)local_res20 * lVar13;
  local_a8 = local_a8 + (int)param_2 * -0x400;
  *param_3 = iVar4;
  local_98 = (int)local_78 + (int)((ulonglong)(lVar15 + (lVar15 >> 0x3f) + 0x8000) >> 0x10) * 2;
  local_94 = (int)local_70 + (int)((ulonglong)(lVar13 + 0x8000 + (lVar13 >> 0x3f)) >> 0x10) * 2;
  iStack_a4 = iStack_a4 + iStackX_14 * -0x400;
  uVar2 = 0xff;
  if ((int)((ulonglong)
            ((longlong)local_94 * (longlong)local_a8 + 0x8000 +
            ((longlong)local_94 * (longlong)local_a8 >> 0x3f)) >> 0x10) -
      (int)((ulonglong)
            ((longlong)local_98 * (longlong)iStack_a4 + 0x8000 +
            ((longlong)local_98 * (longlong)iStack_a4 >> 0x3f)) >> 0x10) < 0) {
    uVar2 = 1;
  }
  *(undefined1 *)(param_3 + 2) = uVar2;
  if ((local_res20 & 0xfffeffff) == 0) {
    FUN_180578b00(&local_98);
    FUN_180578b00(&local_a8);
    param_3[1] = (int)((ulonglong)
                       ((longlong)local_98 * (longlong)iStack_a4 + 0x8000 +
                       ((longlong)local_98 * (longlong)iStack_a4 >> 0x3f)) >> 0x10) -
                 (int)((ulonglong)
                       ((longlong)local_94 * (longlong)local_a8 + 0x8000 +
                       ((longlong)local_94 * (longlong)local_a8 >> 0x3f)) >> 0x10);
    return 0;
  }
  param_3[1] = 0x10000;
  return 0;
}



