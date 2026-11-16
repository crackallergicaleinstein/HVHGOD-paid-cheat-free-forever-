// FUN_1805d5720 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805d5720 */

undefined8 FUN_1805d5720(ulonglong *param_1,undefined8 param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined1 uVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  ushort uVar8;
  longlong lVar9;
  longlong lVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  ushort local_res8;
  int iStackX_14;
  int local_b8;
  int iStack_b4;
  int local_b0;
  int local_a8;
  int local_a4;
  int local_a0;
  longlong local_98;
  longlong local_90;
  longlong local_88;
  int local_80;
  int local_7c;
  int local_78;
  int local_74;
  int local_70;
  int iStack_6c;
  longlong local_68;
  ulonglong local_60;
  ulonglong local_58;
  
  local_b8 = 0;
  iStack_b4 = 0;
  uVar14 = 0;
  local_a0 = 0;
  iVar13 = 0x7fffffff;
  if (((param_1 == (ulonglong *)0x0) || (param_3 == (int *)0x0)) || ((int)param_1[4] != 3)) {
    return 6;
  }
  iVar11 = (int)param_1[2];
  local_60 = *param_1;
  iVar3 = (int)param_1[3];
  local_58 = local_60 >> 0x20;
  iVar15 = (int)local_60;
  local_78 = iVar3 + iVar11 * -2 + iVar15;
  iVar12 = (int)(param_1[3] >> 0x20);
  iVar2 = (int)(param_1[2] >> 0x20);
  iVar6 = (int)(local_60 >> 0x20);
  local_74 = iVar12 + iVar2 * -2 + iVar6;
  iVar1 = (iVar11 - iVar15) * 3;
  local_b0 = (iVar2 - iVar6) * 3;
  uVar16 = 0;
  local_90 = (longlong)(local_78 * 3);
  local_res8 = 0;
  local_98 = (longlong)(((iVar11 - iVar3) * 3 - iVar15) + (int)param_1[1]);
  local_88 = (longlong)(((iVar2 - iVar12) * 3 + (int)(param_1[1] >> 0x20)) - iVar6);
  local_68 = (longlong)(local_74 * 3);
  local_74 = local_74 * 6;
  local_78 = local_78 * 6;
  uVar8 = 0;
  while( true ) {
    do {
      lVar5 = (longlong)(int)uVar16;
      iVar2 = (int)((ulonglong)(lVar5 * lVar5 + 0x8000 + (lVar5 * lVar5 >> 0x3f)) >> 0x10);
      lVar7 = (longlong)iVar2;
      lVar10 = (longlong)
               (int)((ulonglong)(lVar7 * lVar5 + (lVar7 * lVar5 >> 0x3f) + 0x8000) >> 0x10);
      lVar9 = local_98 * lVar10;
      lVar10 = local_88 * lVar10;
      iVar11 = (int)((ulonglong)(lVar9 + 0x8000 + (lVar9 >> 0x3f)) >> 0x10) +
               (int)((ulonglong)(iVar1 * lVar5 + 0x8000 + (iVar1 * lVar5 >> 0x3f)) >> 0x10) +
               (int)local_60 +
               (int)((ulonglong)(local_90 * lVar7 + (local_90 * lVar7 >> 0x3f) + 0x8000) >> 0x10);
      iStack_6c = (int)((ulonglong)(local_68 * lVar7 + (local_68 * lVar7 >> 0x3f) + 0x8000) >> 0x10)
                  + (int)((ulonglong)(local_b0 * lVar5 + 0x8000 + (local_b0 * lVar5 >> 0x3f)) >>
                         0x10) + (int)local_58 +
                  (int)((ulonglong)(lVar10 + 0x8000 + (lVar10 >> 0x3f)) >> 0x10);
      local_70 = iVar11 * 0x400;
      iStackX_14 = (int)((ulonglong)param_2 >> 0x20);
      local_a4 = (iStack_6c - iStackX_14) * 0x400;
      iStack_6c = iStack_6c * 0x400;
      local_a8 = (iVar11 - (int)param_2) * 0x400;
      iVar11 = FUN_180578a00(&local_a8);
      lVar5 = local_68;
      if (iVar11 < iVar13) {
        local_b8 = local_70;
        iStack_b4 = iStack_6c;
        iVar13 = iVar11;
        uVar14 = uVar16;
        local_a0 = iVar2;
      }
      iVar11 = local_a0;
      lVar7 = local_90 * (int)(uVar16 * 2);
      lVar9 = local_98 * (iVar2 * 3);
      iVar6 = (int)((ulonglong)(lVar7 + 0x8000 + (lVar7 >> 0x3f)) >> 0x10) +
              iVar1 + (int)((ulonglong)(lVar9 + 0x8000 + (lVar9 >> 0x3f)) >> 0x10);
      lVar7 = local_68 * (int)(uVar16 * 2);
      lVar9 = local_88 * (iVar2 * 3);
      iVar12 = (int)((ulonglong)(lVar7 + 0x8000 + (lVar7 >> 0x3f)) >> 0x10) +
               local_b0 + (int)((ulonglong)(lVar9 + 0x8000 + (lVar9 >> 0x3f)) >> 0x10);
      lVar7 = local_98 * (int)(uVar16 * 6);
      lVar9 = local_88 * (int)(uVar16 * 6);
      local_a8 = (int)((local_a8 >> 0x1f & 0x3ffU) + local_a8) >> 10;
      local_a4 = (int)((local_a4 >> 0x1f & 0x3ffU) + local_a4) >> 10;
      iVar2 = ((int)((ulonglong)((lVar7 >> 0x3f) + 0x8000 + lVar7) >> 0x10) + local_78) * local_a8;
      iVar3 = ((int)((ulonglong)((lVar9 >> 0x3f) + 0x8000 + lVar9) >> 0x10) + local_74) * local_a4;
      iVar2 = FUN_180573310(((int)((local_a8 * iVar6 >> 0x1f & 0x3fU) + local_a8 * iVar6) >> 6) +
                            ((int)(local_a4 * iVar12 + (local_a4 * iVar12 >> 0x1f & 0x3fU)) >> 6),
                            ((int)((iVar2 >> 0x1f & 0x3fU) + iVar2) >> 6) +
                            ((int)(iVar3 + (iVar3 >> 0x1f & 0x3fU)) >> 6) +
                            ((int)(iVar6 * iVar6 + (iVar6 * iVar6 >> 0x1f & 0x3fU)) >> 6) +
                            ((int)(iVar12 * iVar12 + (iVar12 * iVar12 >> 0x1f & 0x3fU)) >> 6));
      uVar16 = uVar16 - iVar2;
    } while ((uVar16 < 0x10001) && (uVar8 = uVar8 + 1, uVar8 < 4));
    local_res8 = local_res8 + 1;
    if (4 < local_res8) break;
    uVar16 = (uint)local_res8 << 0xe;
    uVar8 = 0;
  }
  lVar9 = (iVar11 * 3) * local_98;
  lVar10 = (iVar11 * 3) * local_88;
  lVar5 = lVar5 * (int)(uVar14 * 2);
  lVar7 = (int)(uVar14 * 2) * local_90;
  local_b8 = local_b8 + (int)param_2 * -0x400;
  *param_3 = iVar13;
  local_80 = iVar1 + (int)((ulonglong)((lVar9 >> 0x3f) + 0x8000 + lVar9) >> 0x10) +
             (int)((ulonglong)(lVar7 + 0x8000 + (lVar7 >> 0x3f)) >> 0x10);
  local_7c = (int)((ulonglong)((lVar10 >> 0x3f) + 0x8000 + lVar10) >> 0x10) + local_b0 +
             (int)((ulonglong)((lVar5 >> 0x3f) + 0x8000 + lVar5) >> 0x10);
  iStack_b4 = iStack_b4 + iStackX_14 * -0x400;
  uVar4 = 0xff;
  if ((int)((ulonglong)
            ((longlong)local_b8 * (longlong)local_7c + 0x8000 +
            ((longlong)local_b8 * (longlong)local_7c >> 0x3f)) >> 0x10) -
      (int)((ulonglong)
            ((longlong)iStack_b4 * (longlong)local_80 + 0x8000 +
            ((longlong)iStack_b4 * (longlong)local_80 >> 0x3f)) >> 0x10) < 0) {
    uVar4 = 1;
  }
  *(undefined1 *)(param_3 + 2) = uVar4;
  if ((uVar14 & 0xfffeffff) == 0) {
    FUN_180578b00(&local_80);
    FUN_180578b00(&local_b8);
    param_3[1] = (int)((ulonglong)
                       ((longlong)local_80 * (longlong)iStack_b4 + 0x8000 +
                       ((longlong)local_80 * (longlong)iStack_b4 >> 0x3f)) >> 0x10) -
                 (int)((ulonglong)
                       ((longlong)local_7c * (longlong)local_b8 + 0x8000 +
                       ((longlong)local_7c * (longlong)local_b8 >> 0x3f)) >> 0x10);
    return 0;
  }
  param_3[1] = 0x10000;
  return 0;
}



