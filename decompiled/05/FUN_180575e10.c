// FUN_180575e10 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180575e10 */

undefined8 FUN_180575e10(ushort *param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  uint uVar7;
  ulonglong uVar8;
  longlong lVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  int local_res20;
  int local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  uint local_b0;
  int local_ac;
  int local_a8;
  int local_a4;
  uint local_a0;
  uint local_9c;
  int local_98;
  int local_94;
  undefined8 local_90;
  uint local_88;
  ulonglong local_80;
  longlong local_78;
  longlong local_70;
  longlong local_68;
  longlong local_60;
  ulonglong local_58;
  longlong local_50;
  ulonglong local_48;
  
  if (param_1 == (ushort *)0x0) {
    return 0x14;
  }
  local_a8 = param_2 / 2;
  local_ac = param_3 / 2;
  if ((local_a8 != 0) || (local_ac != 0)) {
    local_94 = FUN_1805763d0(param_1);
    if (local_94 == 2) {
      if (*param_1 != 0) {
        return 6;
      }
    }
    else {
      lVar6 = *(longlong *)(param_1 + 4);
      local_9c = 0xffffffff;
      local_98 = 0;
      if (*param_1 != 0) {
        local_68 = 0;
        local_70 = lVar6;
        do {
          uVar8 = 0;
          uVar7 = local_9c + 1;
          local_res20 = 0;
          local_c8 = 0;
          uVar14 = 0xffffffff;
          local_9c = (uint)*(ushort *)(local_68 + *(longlong *)(param_1 + 0xc));
          local_80 = 0;
          local_c0 = 0;
          if (uVar7 != local_9c) {
            uVar11 = 0;
            uVar10 = 0;
            lVar5 = (longlong)(int)uVar7;
            uVar16 = local_9c;
            local_b0 = uVar7;
            local_a0 = uVar7;
            local_50 = lVar5;
            iVar3 = 0;
            do {
              uVar13 = local_b0;
              iVar4 = (int)uVar8;
              if (uVar16 == uVar14) break;
              lVar9 = (longlong)(int)uVar16;
              if (local_b0 == uVar14) {
                local_a4 = local_res20;
                local_b8 = uVar10;
LAB_180575fd4:
                uVar8 = local_b8;
                if (local_c8 == 0) {
                  uVar16 = uVar13;
                }
                else {
                  if ((int)uVar14 < 0) {
                    local_res20 = local_c8;
                    uVar10 = uVar11;
                    local_88 = uVar16;
                  }
                  else {
                    local_88 = uVar14;
                  }
                  local_78 = (longlong)iVar4;
                  iVar4 = (int)(local_b8 >> 0x20);
                  local_90 = (longlong)iVar4;
                  lVar6 = local_90 * iVar3;
                  iVar15 = (int)((ulonglong)(lVar6 + 0x8000 + (lVar6 >> 0x3f)) >> 0x10) +
                           (int)((ulonglong)
                                 ((int)local_b8 * local_78 + 0x8000 +
                                 ((int)local_b8 * local_78 >> 0x3f)) >> 0x10);
                  local_80 = uVar10;
                  local_48 = uVar10;
                  if (iVar15 < -0xefff) {
                    iVar4 = 0;
                    iVar3 = 0;
                  }
                  else {
                    uVar7 = iVar15 + 0x10000;
                    iVar15 = -((int)local_c0 + (int)local_b8);
                    if (local_94 == 0) {
                      iVar15 = (int)local_c0 + (int)local_b8;
                    }
                    iVar2 = -(local_c0._4_4_ + iVar4);
                    if (local_94 != 0) {
                      iVar2 = local_c0._4_4_ + iVar4;
                    }
                    lVar6 = (longlong)iVar3 * (longlong)(int)local_b8;
                    iVar3 = (int)((ulonglong)((lVar6 >> 0x3f) + 0x8000 + lVar6) >> 0x10);
                    iVar12 = (int)((ulonglong)
                                   (local_90 * local_78 + 0x8000 + (local_90 * local_78 >> 0x3f)) >>
                                  0x10);
                    uVar14 = iVar12 - iVar3;
                    if (local_94 != 0) {
                      uVar14 = iVar3 - iVar12;
                    }
                    local_58 = (ulonglong)uVar14;
                    local_78 = (longlong)(int)uVar14;
                    iVar3 = local_a4;
                    if (local_c8 < local_a4) {
                      iVar3 = local_c8;
                    }
                    local_90 = CONCAT44(iVar4 >> 0x1f,iVar3);
                    lVar6 = (longlong)iVar3 * (longlong)(int)uVar7 + 0x8000 +
                            ((longlong)iVar3 * (longlong)(int)uVar7 >> 0x3f);
                    local_60 = lVar6 >> 0x10;
                    if ((int)((ulonglong)
                              (local_a8 * local_78 + 0x8000 + (local_a8 * local_78 >> 0x3f)) >> 0x10
                             ) <= (int)((ulonglong)lVar6 >> 0x10)) {
                      iVar3 = local_a8;
                      uVar14 = uVar7;
                    }
                    iVar3 = FUN_1805753e0(iVar2,iVar3,uVar14);
                    iVar4 = local_ac;
                    if ((int)local_60 <
                        (int)((ulonglong)
                              (local_ac * local_78 + 0x8000 + (local_ac * local_78 >> 0x3f)) >> 0x10
                             )) {
                      uVar7 = (uint)local_58;
                      iVar4 = (int)local_90;
                    }
                    iVar4 = FUN_1805753e0(iVar15,iVar4,uVar7);
                  }
                  if (lVar9 != lVar5) {
                    do {
                      piVar1 = (int *)(local_70 + lVar9 * 8);
                      *piVar1 = *piVar1 + iVar3 + local_a8;
                      piVar1 = (int *)(local_70 + 4 + lVar9 * 8);
                      *piVar1 = *piVar1 + iVar4 + local_ac;
                      if (lVar9 < (int)local_9c) {
                        lVar9 = lVar9 + 1;
                        uVar16 = uVar16 + 1;
                      }
                      else {
                        lVar9 = local_50;
                        uVar16 = local_a0;
                      }
                    } while (lVar9 != lVar5);
                    uVar8 = local_b8;
                    uVar10 = local_48;
                    uVar13 = local_b0;
                  }
                  local_b8 = uVar8;
                  uVar14 = local_88;
                }
                local_c8 = local_a4;
                uVar11 = local_b8;
                uVar7 = local_a0;
                local_c0 = local_b8;
              }
              else {
                local_b8 = CONCAT44(*(int *)(lVar6 + 4 + lVar5 * 8) -
                                    *(int *)(lVar6 + 4 + lVar9 * 8),
                                    *(int *)(lVar6 + lVar5 * 8) - *(int *)(lVar6 + lVar9 * 8));
                local_a4 = FUN_180578b00(&local_b8);
                if (local_a4 != 0) {
                  iVar3 = local_c0._4_4_;
                  iVar4 = (int)local_c0;
                  goto LAB_180575fd4;
                }
              }
              if ((int)uVar13 < (int)local_9c) {
                lVar5 = lVar5 + 1;
                local_b0 = uVar13 + 1;
              }
              else {
                lVar5 = (longlong)(int)uVar7;
                local_b0 = uVar7;
              }
              uVar8 = local_c0 & 0xffffffff;
              lVar6 = local_70;
              iVar3 = local_c0._4_4_;
            } while (local_b0 != uVar16);
          }
          local_98 = local_98 + 1;
          local_68 = local_68 + 2;
        } while (local_98 < (int)(uint)*param_1);
      }
    }
  }
  return 0;
}



