// FUN_180594320 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180594320 */

ulonglong FUN_180594320(longlong param_1,longlong *param_2)

{
  int *piVar1;
  short sVar2;
  ushort uVar3;
  ushort uVar4;
  int iVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  longlong lVar8;
  int *piVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  ushort *puVar13;
  longlong lVar14;
  int *piVar15;
  uint *puVar16;
  ulonglong uVar17;
  uint local_res18 [2];
  uint local_res20;
  uint local_b8;
  uint local_b4;
  uint local_b0;
  uint local_ac;
  int local_a8;
  uint local_a4;
  uint local_a0;
  longlong local_98;
  longlong local_90;
  uint local_88;
  uint local_84;
  ushort *local_80;
  longlong local_78;
  longlong local_70;
  uint *local_68;
  ushort *local_60;
  longlong local_58;
  
  lVar8 = param_2[6];
  local_b8 = (**(code **)(param_1 + 0x2a0))(param_1,0x63767420,param_2,&local_88);
  uVar17 = 0;
  if (local_b8 != 0) {
    *(undefined4 *)(param_1 + 0x3d0) = 0;
    *(undefined8 *)(param_1 + 0x3d8) = 0;
    return 0;
  }
  *(uint *)(param_1 + 0x3d0) = local_88 >> 1;
  uVar6 = FUN_18057ac40(lVar8,4,0,local_88 >> 1,0,&local_b8);
  *(undefined8 *)(param_1 + 0x3d8) = uVar6;
  uVar7 = (ulonglong)local_b8;
  if ((local_b8 == 0) &&
     (uVar7 = FUN_180577bf0(param_2,*(int *)(param_1 + 0x3d0) * 2), (int)uVar7 == 0)) {
    piVar15 = *(int **)(param_1 + 0x3d8);
    piVar9 = piVar15 + *(uint *)(param_1 + 0x3d0);
    local_b8 = 0;
    for (; piVar15 < piVar9; piVar15 = piVar15 + 1) {
      sVar2 = FUN_180577ed0(param_2);
      *piVar15 = (int)sVar2 << 6;
    }
    FUN_180577d30(param_2);
    if (*(char *)(param_1 + 0x401) == '\0') {
      uVar7 = (ulonglong)local_b8;
    }
    else {
      local_90 = param_2[6];
      puVar16 = *(uint **)(param_1 + 0x408);
      local_b0 = 0;
      local_80 = (ushort *)0x0;
      local_98 = 0;
      uVar7 = uVar17;
      if ((puVar16 != (uint *)0x0) && (*(longlong *)(param_1 + 0x3d8) != 0)) {
        local_68 = puVar16;
        local_res18[0] = (**(code **)(param_1 + 0x2a0))(param_1,0x63766172,param_2,&local_b4);
        if ((local_res18[0] == 0) &&
           (local_res18[0] = FUN_180577bf0(param_2,local_b4), local_res18[0] == 0)) {
          lVar8 = param_2[7];
          lVar14 = *param_2;
          iVar5 = FUN_180577e30(param_2);
          if (iVar5 == 0x10000) {
            uVar3 = FUN_180577ed0(param_2);
            uVar4 = FUN_180577ed0(param_2);
            local_a0 = uVar3 & 0xfff;
            if (local_b4 < (uint)uVar4 + local_a0 * 4) {
              local_res18[0] = 8;
            }
            else {
              local_res20 = (uint)uVar4 + ((int)lVar8 - (int)lVar14);
              if ((short)uVar3 < 0) {
                uVar10 = (int)param_2[7] - (int)*param_2;
                if (local_res20 < (uint)((int)param_2[8] - (int)*param_2)) {
                  lVar8 = (ulonglong)local_res20 + *param_2;
                }
                else {
                  lVar8 = param_2[8];
                }
                param_2[7] = lVar8;
                local_80 = (ushort *)FUN_180592550(param_2,&local_b0);
                local_res20 = (int)param_2[7] - (int)*param_2;
                if (uVar10 < (uint)((int)param_2[8] - (int)*param_2)) {
                  lVar8 = (ulonglong)uVar10 + *param_2;
                }
                else {
                  lVar8 = param_2[8];
                }
                param_2[7] = lVar8;
              }
              lVar14 = local_90;
              lVar8 = FUN_18057ac40(local_90,4,0,*puVar16 * 3,0,local_res18);
              local_58 = lVar8;
              if ((local_res18[0] == 0) &&
                 (local_98 = FUN_18057ad10(lVar14,4,0,*(undefined4 *)(param_1 + 0x3d0),0,local_res18
                                          ), local_res18[0] == 0)) {
                local_a4 = 0;
                local_70 = lVar8 + (ulonglong)*puVar16 * 4;
                local_78 = local_70 + (ulonglong)*puVar16 * 4;
                if (local_a0 != 0) {
                  do {
                    uVar3 = FUN_180577ed0(param_2);
                    uVar4 = FUN_180577ed0(param_2);
                    if ((short)uVar4 < 0) {
                      uVar11 = 0;
                      uVar10 = 0;
                      if (*puVar16 != 0) {
                        do {
                          sVar2 = FUN_180577ed0(param_2);
                          uVar7 = (ulonglong)uVar11;
                          uVar11 = uVar11 + 1;
                          *(int *)(lVar8 + uVar7 * 4) = (int)sVar2 << 2;
                          uVar10 = *puVar16;
                        } while (uVar11 < uVar10);
                      }
                    }
                    else {
                      if (puVar16[0x1a] <= (uVar4 & 0xfff)) {
                        local_res18[0] = 8;
                        goto LAB_1805948d3;
                      }
                      uVar10 = *puVar16;
                      lVar8 = *(longlong *)(puVar16 + 0x1c) +
                              (ulonglong)((uVar4 & 0xfff) * uVar10) * 4;
                    }
                    lVar14 = local_70;
                    if ((uVar4 >> 0xe & 1) != 0) {
                      uVar12 = 0;
                      uVar11 = 0;
                      if (uVar10 != 0) {
                        do {
                          sVar2 = FUN_180577ed0(param_2);
                          uVar7 = (ulonglong)uVar12;
                          uVar12 = uVar12 + 1;
                          *(int *)(lVar14 + uVar7 * 4) = (int)sVar2 << 2;
                          uVar11 = *puVar16;
                        } while (uVar12 < uVar11);
                      }
                      lVar14 = local_78;
                      uVar10 = 0;
                      if (uVar11 != 0) {
                        do {
                          sVar2 = FUN_180577ed0(param_2);
                          uVar7 = (ulonglong)uVar10;
                          uVar10 = uVar10 + 1;
                          *(int *)(lVar14 + uVar7 * 4) = (int)sVar2 << 2;
                        } while (uVar10 < *puVar16);
                      }
                    }
                    local_a8 = FUN_180591400(puVar16,uVar4,lVar8,local_70,local_78);
                    if (local_a8 == 0) {
                      lVar14 = local_90;
                    }
                    else {
                      local_84 = (int)param_2[7] - (int)*param_2;
                      if (local_res20 < (uint)((int)param_2[8] - (int)*param_2)) {
                        lVar8 = (ulonglong)local_res20 + *param_2;
                      }
                      else {
                        lVar8 = param_2[8];
                      }
                      param_2[7] = lVar8;
                      if ((uVar4 >> 0xd & 1) == 0) {
                        local_ac = local_b0;
                        local_60 = (ushort *)0x0;
                        puVar13 = local_80;
                      }
                      else {
                        local_60 = (ushort *)FUN_180592550(param_2,&local_ac);
                        puVar13 = local_60;
                      }
                      uVar11 = local_ac;
                      uVar10 = local_ac;
                      if (local_ac == 0) {
                        uVar10 = *(uint *)(param_1 + 0x3d0);
                      }
                      piVar9 = (int *)FUN_1805923f0(param_2,uVar10);
                      lVar14 = local_90;
                      if ((puVar13 != (ushort *)0x0) && (piVar9 != (int *)0x0)) {
                        if (puVar13 == (ushort *)0xffffffffffffffff) {
                          uVar10 = 0;
                          if (*(int *)(param_1 + 0x3d0) != 0) {
                            do {
                              uVar7 = (ulonglong)uVar10;
                              uVar10 = uVar10 + 1;
                              piVar15 = (int *)(uVar7 * 4 + local_98);
                              *piVar15 = *piVar15 +
                                         (int)((ulonglong)
                                               ((longlong)piVar9[uVar7] * (longlong)local_a8 +
                                               ((longlong)piVar9[uVar7] * (longlong)local_a8 >> 0x3f
                                               ) + 0x8000) >> 0x10);
                            } while (uVar10 < *(uint *)(param_1 + 0x3d0));
                            goto LAB_180594812;
                          }
                        }
                        else if (uVar11 != 0) {
                          uVar7 = (ulonglong)uVar11;
                          piVar15 = piVar9;
                          do {
                            if ((uint)*puVar13 < *(uint *)(param_1 + 0x3d0)) {
                              piVar1 = (int *)((ulonglong)*puVar13 * 4 + local_98);
                              *piVar1 = *piVar1 + (int)((ulonglong)
                                                        ((longlong)*piVar15 * (longlong)local_a8 +
                                                         0x8000 + ((longlong)*piVar15 *
                                                                   (longlong)local_a8 >> 0x3f)) >>
                                                       0x10);
                            }
                            puVar13 = puVar13 + 1;
                            piVar15 = piVar15 + 1;
                            uVar7 = uVar7 - 1;
                          } while (uVar7 != 0);
LAB_180594812:
                          puVar16 = local_68;
                        }
                      }
                      if (local_60 != (ushort *)0xffffffffffffffff) {
                        FUN_18057abd0(local_90,local_60);
                      }
                      FUN_18057abd0(lVar14,piVar9);
                      if (local_84 < (uint)((int)param_2[8] - (int)*param_2)) {
                        param_2[7] = (ulonglong)local_84 + *param_2;
                      }
                      else {
                        param_2[7] = param_2[8];
                      }
                    }
                    local_a4 = local_a4 + 1;
                    local_res20 = local_res20 + uVar3;
                    lVar8 = local_58;
                  } while (local_a4 < local_a0);
                }
                if (*(int *)(param_1 + 0x3d0) != 0) {
                  do {
                    uVar10 = (int)uVar17 + 1;
                    piVar9 = (int *)(*(longlong *)(param_1 + 0x3d8) + uVar17 * 4);
                    *piVar9 = *piVar9 + (*(int *)(uVar17 * 4 + local_98) + 0x200 >> 10);
                    uVar17 = (ulonglong)uVar10;
                  } while (uVar10 < *(uint *)(param_1 + 0x3d0));
                }
                FUN_1805745c0(param_1 + 0xa8,FUN_180594160,0);
              }
LAB_1805948d3:
              if (local_80 != (ushort *)0xffffffffffffffff) {
                FUN_18057abd0(lVar14,local_80);
              }
              FUN_18057abd0(lVar14,local_98);
              FUN_18057abd0(lVar14,lVar8);
            }
          }
          else {
            local_res18[0] = 0;
          }
          FUN_180577d30(param_2);
          uVar7 = (ulonglong)local_res18[0];
        }
      }
    }
  }
  return uVar7;
}



