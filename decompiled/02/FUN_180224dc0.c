// FUN_180224dc0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180224dc0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_180224dc0(undefined8 *param_1,longlong param_2,int param_3)

{
  ulonglong *puVar1;
  bool bVar2;
  int *piVar3;
  undefined4 uVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  ULONGLONG UVar10;
  undefined *puVar11;
  char *_Str1;
  undefined8 *puVar12;
  int iVar13;
  ulonglong uVar14;
  undefined *puVar15;
  undefined4 uVar16;
  uint uVar17;
  undefined **ppuVar18;
  undefined1 *puVar19;
  undefined *puVar20;
  undefined1 *local_138;
  int local_130;
  uint local_12c;
  uint local_128;
  undefined **local_120;
  int local_118;
  int local_114;
  undefined *local_110;
  undefined *local_108;
  undefined *local_f8;
  undefined1 *local_f0;
  undefined *local_e8;
  undefined *local_e0;
  undefined *local_d8;
  undefined *local_d0;
  undefined *local_c8;
  undefined *local_c0;
  undefined1 local_b8 [32];
  undefined1 local_98 [16];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined4 local_54;
  undefined1 local_50 [8];
  undefined1 local_48 [32];
  
  local_128 = 0;
  local_118 = param_3;
  if ((DAT_180cd3a50 & 1) == 0) {
    DAT_180cd3a50 = DAT_180cd3a50 | 1;
    local_b8 = _DAT_18086eb80;
    local_98 = vpcmpeqd_avx(DAT_18086eb80._0_16_,DAT_18086eb80._0_16_);
    local_88 = 0x8b00000048;
    uStack_80 = 0x4c000000d8;
    uStack_78 = 0xff0000008b;
    uStack_70 = 0x8b0000004c;
    local_68 = 0x48000000e7;
    uStack_60 = 0xc000000085;
    local_58 = 0xf;
    local_54 = 0x84;
    local_f8 = local_b8;
    local_f0 = local_50;
    lVar8 = FUN_180219910(&local_f8);
    if (lVar8 != 0) {
      lVar9 = FUN_18017ea70();
      *(int *)(lVar9 + 4) = *(int *)(lVar9 + 4) + 1;
      if (lVar8 + 3 == 0) {
        bVar2 = false;
        uVar17 = (uint)local_138;
      }
      else {
        local_12c = 0;
        cVar5 = FUN_1804514f0(&local_12c,lVar8 + 3,4);
        if (cVar5 == '\0') {
          bVar2 = false;
          uVar17 = (uint)local_138;
        }
        else {
          bVar2 = true;
          uVar17 = local_12c;
        }
      }
      lVar8 = FUN_18017ea70();
      if (*(int *)(lVar8 + 4) != 0) {
        *(int *)(lVar8 + 4) = *(int *)(lVar8 + 4) + -1;
      }
      DAT_180cd3a54 = 0;
      if (bVar2) {
        DAT_180cd3a54 = uVar17;
      }
      if (DAT_180cd3a54 - 0x1000 < 0x3001) goto LAB_180224ee3;
    }
    DAT_180cd3a54 = 0;
  }
LAB_180224ee3:
  local_12c = DAT_180c63edc;
  uVar17 = DAT_180c63edc;
  if (DAT_180c63edc == 0) {
    UVar10 = GetTickCount64();
    if (UVar10 < DAT_180c63ee0) {
      uVar17 = 0;
      local_12c = 0;
    }
    else {
      local_f8 = &DAT_1808ec0d0;
      iVar6 = FUN_1805f68d0(&DAT_1808ec0d0);
      if (iVar6 != 0) {
LAB_180225932:
                    /* WARNING: Subroutine does not return */
        FUN_1805f6d44(5);
      }
      if (DAT_1808ec11c == 0x7fffffff) {
        DAT_1808ec11c = 0x7ffffffe;
LAB_180225927:
                    /* WARNING: Subroutine does not return */
        FUN_1805f6d44(6);
      }
      local_12c = DAT_180c63edc;
      if ((DAT_180c63edc == 0) && (DAT_180c63ee0 <= UVar10)) {
        local_12c = FUN_1804174b0("C_KeychainModule",0x4987a005);
        if (local_12c == 0) {
          DAT_180c63ee0 = UVar10 + 1000;
        }
        else {
          DAT_180c63ee0 = 0xffffffffffffffff;
        }
      }
      uVar17 = local_12c;
      DAT_180c63edc = local_12c;
      FUN_1805f68fc(&DAT_1808ec0d0);
    }
  }
  if ((((DAT_180cd3a54 != 0) && (uVar17 != 0)) && (cVar5 = FUN_180224cb0(param_2), cVar5 != '\0'))
     && (piVar3 = DAT_180cc9be0, 0 < param_3)) {
    for (; piVar3 != DAT_180cc9be8; piVar3 = piVar3 + 0x32) {
      if (*piVar3 == param_3) {
        lVar8 = FUN_18017ea70();
        *(int *)(lVar8 + 4) = *(int *)(lVar8 + 4) + 1;
        if (param_2 + 0x8f8 == 0) {
          bVar2 = false;
          iVar6 = (uint)local_138;
        }
        else {
          local_130 = 0;
          cVar5 = FUN_1804514f0(&local_130,param_2 + 0x8f8,4);
          if (cVar5 == '\0') {
            bVar2 = false;
            iVar6 = (uint)local_138;
          }
          else {
            bVar2 = true;
            iVar6 = local_130;
          }
        }
        lVar8 = FUN_18017ea70();
        iVar13 = *(int *)(lVar8 + 4);
        if (iVar13 != 0) {
          iVar13 = iVar13 + -1;
          *(int *)(lVar8 + 4) = iVar13;
        }
        iVar7 = -1;
        if (bVar2) {
          iVar7 = iVar6;
        }
        puVar11 = (undefined *)FUN_1803d4150(iVar13,iVar7);
        if (puVar11 != (undefined *)0x0) {
          local_f8 = puVar11;
          iVar6 = FUN_180224a80(puVar11);
          if (iVar6 != 0) {
            uVar14 = (ulonglong)DAT_180cd3a54;
            local_130 = iVar6;
            lVar8 = FUN_18017ea70();
            *(int *)(lVar8 + 4) = *(int *)(lVar8 + 4) + 1;
            bVar2 = false;
            if (puVar11 + uVar14 != (undefined *)0x0) {
              local_138 = (undefined1 *)((ulonglong)local_138 & 0xffffffff00000000);
              cVar5 = FUN_1804514f0(&local_138,puVar11 + uVar14,4);
              if (cVar5 == '\0') {
                bVar2 = false;
              }
              else {
                bVar2 = true;
              }
            }
            uVar4 = (uint)local_138;
            lVar8 = FUN_18017ea70();
            iVar13 = *(int *)(lVar8 + 4);
            if (iVar13 != 0) {
              iVar13 = iVar13 + -1;
              *(int *)(lVar8 + 4) = iVar13;
            }
            uVar16 = 0xffffffff;
            if (bVar2) {
              uVar16 = uVar4;
            }
            local_d8 = (undefined *)FUN_1803d4150(iVar13,uVar16);
            *param_1 = 0;
            param_1[1] = 0;
            param_1[2] = 0;
            local_c0 = local_d8;
            local_120 = &local_c8;
            puVar20 = local_f8;
            local_108 = puVar11;
            local_c8 = puVar11;
            goto LAB_180225140;
          }
        }
        break;
      }
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
                    /* WARNING: Read-only address (ram,0x00018086eb80) is written */
  return param_1;
LAB_180225140:
  puVar11 = local_108;
  ppuVar18 = local_120;
  if (local_108 != (undefined *)0x0) {
    iVar7 = FUN_180224a80(local_108);
    iVar13 = DAT_180c63ed8;
    if (iVar7 == iVar6) {
      if (DAT_180c63ed8 == 0) {
        UVar10 = GetTickCount64();
        if (DAT_180c63ed0 <= UVar10) {
          local_138 = &DAT_1808ec080;
          iVar13 = FUN_1805f68d0(&DAT_1808ec080);
          if (iVar13 != 0) goto LAB_180225932;
          if (DAT_1808ec0cc == 0x7fffffff) {
            DAT_1808ec0cc = 0x7ffffffe;
            goto LAB_180225927;
          }
          if ((DAT_180c63ed8 == 0) && (DAT_180c63ed0 <= UVar10)) {
            DAT_180c63ed8 = FUN_1804174b0("C_BaseEntity",0x9d930423);
            DAT_180c63ed0 = 0xffffffffffffffff;
            if (DAT_180c63ed8 == 0) {
              DAT_180c63ed0 = UVar10 + 1000;
            }
          }
          iVar13 = DAT_180c63ed8;
          FUN_1805f68fc(&DAT_1808ec080);
        }
        ppuVar18 = local_120;
      }
      lVar8 = FUN_18017ea70();
      *(int *)(lVar8 + 4) = *(int *)(lVar8 + 4) + 1;
      if (puVar11 + iVar13 == (undefined *)0x0) {
        bVar2 = false;
      }
      else {
        local_138 = (undefined *)0x0;
        cVar5 = FUN_1804514f0(&local_138,puVar11 + iVar13,8);
        if (cVar5 == '\0') {
          bVar2 = false;
        }
        else {
          local_e8 = local_138;
          bVar2 = true;
        }
      }
      puVar15 = local_e8;
      lVar8 = FUN_18017ea70();
      if (*(int *)(lVar8 + 4) != 0) {
        *(int *)(lVar8 + 4) = *(int *)(lVar8 + 4) + -1;
      }
      iVar13 = DAT_180c63ec4;
      if (bVar2) {
        if (puVar15 != (undefined *)0x0) {
          if ((DAT_180c63ec4 == 0) && (UVar10 = GetTickCount64(), DAT_180c63ec8 <= UVar10)) {
            local_138 = &DAT_1808ec030;
            iVar6 = FUN_1805f68d0(&DAT_1808ec030);
            if (iVar6 != 0) goto LAB_180225932;
            if (DAT_1808ec07c == 0x7fffffff) {
              DAT_1808ec07c = 0x7ffffffe;
              goto LAB_180225927;
            }
            if ((DAT_180c63ec4 == 0) && (DAT_180c63ec8 <= UVar10)) {
              DAT_180c63ec4 = FUN_1804174b0("CGameSceneNode",0x4a0b773f);
              DAT_180c63ec8 = 0xffffffffffffffff;
              if (DAT_180c63ec4 == 0) {
                DAT_180c63ec8 = UVar10 + 1000;
              }
            }
            iVar13 = DAT_180c63ec4;
            FUN_1805f68fc(&DAT_1808ec030);
          }
          lVar8 = FUN_18017ea70();
          *(int *)(lVar8 + 4) = *(int *)(lVar8 + 4) + 1;
          puVar15 = puVar15 + iVar13;
          if (puVar15 == (undefined *)0x0) {
            bVar2 = false;
            puVar19 = local_110;
          }
          else {
            local_138 = (undefined *)0x0;
            cVar5 = FUN_1804514f0(&local_138,puVar15,8);
            if (cVar5 == '\0') {
              bVar2 = false;
              puVar19 = local_110;
            }
            else {
              bVar2 = true;
              puVar19 = local_138;
            }
          }
          lVar8 = FUN_18017ea70();
          if (*(int *)(lVar8 + 4) != 0) {
            *(int *)(lVar8 + 4) = *(int *)(lVar8 + 4) + -1;
          }
          puVar15 = (undefined *)0x0;
          if (bVar2) {
            puVar15 = puVar19;
          }
          iVar13 = 0;
          ppuVar18 = local_120;
          local_110 = puVar19;
          iVar6 = local_130;
          if (puVar15 != (undefined *)0x0) {
            while( true ) {
              iVar7 = DAT_180c63ec0;
              ppuVar18 = local_120;
              iVar6 = local_130;
              if (0x3f < iVar13) break;
              if ((DAT_180c63ec0 == 0) && (UVar10 = GetTickCount64(), DAT_180c63eb8 <= UVar10)) {
                local_138 = &DAT_1808ebfe0;
                iVar6 = FUN_1805f68d0(&DAT_1808ebfe0);
                if (iVar6 != 0) goto LAB_180225932;
                if (DAT_1808ec02c == 0x7fffffff) {
                  DAT_1808ec02c = 0x7ffffffe;
                  goto LAB_180225927;
                }
                if ((DAT_180c63ec0 == 0) && (DAT_180c63eb8 <= UVar10)) {
                  DAT_180c63ec0 = FUN_1804174b0("CGameSceneNode",0x6b325da);
                  DAT_180c63eb8 = 0xffffffffffffffff;
                  if (DAT_180c63ec0 == 0) {
                    DAT_180c63eb8 = UVar10 + 1000;
                  }
                }
                iVar7 = DAT_180c63ec0;
                FUN_1805f68fc(&DAT_1808ebfe0);
              }
              lVar8 = FUN_18017ea70();
              *(int *)(lVar8 + 4) = *(int *)(lVar8 + 4) + 1;
              bVar2 = false;
              if (puVar15 + iVar7 != (undefined *)0x0) {
                local_138 = (undefined *)0x0;
                cVar5 = FUN_1804514f0(&local_138,puVar15 + iVar7,8);
                if (cVar5 == '\0') {
                  bVar2 = false;
                }
                else {
                  bVar2 = true;
                  puVar20 = local_138;
                }
              }
              lVar8 = FUN_18017ea70();
              iVar6 = *(int *)(lVar8 + 4);
              if (iVar6 != 0) {
                iVar6 = iVar6 + -1;
                *(int *)(lVar8 + 4) = iVar6;
              }
              if ((bVar2) && (puVar20 != (undefined *)0x0)) {
                _Str1 = (char *)FUN_1803d3fa0(iVar6,puVar20);
                if (_Str1 != (char *)0x0) {
                  iVar6 = FUN_180224a80(puVar20);
                  if (iVar6 == local_130) {
                    if ((puVar11 == local_f8) &&
                       (iVar6 = strcmp(_Str1,"C_KeychainModule"), iVar6 == 0)) {
                      lVar9 = (longlong)(int)local_12c;
                      lVar8 = FUN_18017ea70();
                      *(int *)(lVar8 + 4) = *(int *)(lVar8 + 4) + 1;
                      bVar2 = false;
                      if (puVar20 + lVar9 != (undefined *)0x0) {
                        local_138 = (undefined1 *)((ulonglong)local_138 & 0xffffffff00000000);
                        cVar5 = FUN_1804514f0(&local_138,puVar20 + lVar9,4);
                        if (cVar5 == '\0') {
                          bVar2 = false;
                        }
                        else {
                          local_114 = (uint)local_138;
                          bVar2 = true;
                        }
                      }
                      lVar8 = FUN_18017ea70();
                      if (*(int *)(lVar8 + 4) != 0) {
                        *(int *)(lVar8 + 4) = *(int *)(lVar8 + 4) + -1;
                      }
                      if ((bVar2) && (local_114 == local_118)) {
                        *param_1 = puVar20;
                      }
                    }
                    if (puVar11 == local_d8) {
                      iVar7 = strcmp(_Str1,"C_CS2HudModelAddon");
                      iVar6 = DAT_180c63eac;
                      if (iVar7 == 0) {
                        if ((DAT_180c63eac == 0) &&
                           (UVar10 = GetTickCount64(), DAT_180c63eb0 <= UVar10)) {
                          local_138 = &DAT_1808ebf90;
                          iVar6 = FUN_1805f68d0(&DAT_1808ebf90);
                          if (iVar6 != 0) goto LAB_180225932;
                          if (DAT_1808ebfdc == 0x7fffffff) {
                            DAT_1808ebfdc = 0x7ffffffe;
                            goto LAB_180225927;
                          }
                          if ((DAT_180c63eac == 0) && (DAT_180c63eb0 <= UVar10)) {
                            DAT_180c63eac = FUN_1804174b0("CSkeletonInstance",0x52ac8c4f);
                            DAT_180c63eb0 = 0xffffffffffffffff;
                            if (DAT_180c63eac == 0) {
                              DAT_180c63eb0 = UVar10 + 1000;
                            }
                          }
                          iVar6 = DAT_180c63eac;
                          FUN_1805f68fc(&DAT_1808ebf90);
                        }
                        iVar7 = DAT_180c63ea8;
                        if ((DAT_180c63ea8 == 0) &&
                           (UVar10 = GetTickCount64(), DAT_180c63ea0 <= UVar10)) {
                          local_138 = &DAT_1808ebf40;
                          iVar7 = FUN_1805f68d0(&DAT_1808ebf40);
                          if (iVar7 != 0) goto LAB_180225932;
                          if (DAT_1808ebf8c == 0x7fffffff) {
                            DAT_1808ebf8c = 0x7ffffffe;
                            goto LAB_180225927;
                          }
                          if ((DAT_180c63ea8 == 0) && (DAT_180c63ea0 <= UVar10)) {
                            DAT_180c63ea8 = FUN_1804174b0("CModelState",0xd7a1d881);
                            DAT_180c63ea0 = 0xffffffffffffffff;
                            if (DAT_180c63ea8 == 0) {
                              DAT_180c63ea0 = UVar10 + 1000;
                            }
                          }
                          iVar7 = DAT_180c63ea8;
                          FUN_1805f68fc(&DAT_1808ebf40);
                        }
                        lVar8 = FUN_18017ea70();
                        *(int *)(lVar8 + 4) = *(int *)(lVar8 + 4) + 1;
                        if (puVar15 + (longlong)iVar7 + (longlong)iVar6 == (undefined *)0x0) {
                          bVar2 = false;
                        }
                        else {
                          local_138 = (undefined *)0x0;
                          cVar5 = FUN_1804514f0(&local_138,
                                                puVar15 + (longlong)iVar7 + (longlong)iVar6,8);
                          if (cVar5 == '\0') {
                            bVar2 = false;
                          }
                          else {
                            local_e0 = local_138;
                            bVar2 = true;
                          }
                        }
                        puVar11 = local_e0;
                        lVar8 = FUN_18017ea70();
                        if (*(int *)(lVar8 + 4) != 0) {
                          *(int *)(lVar8 + 4) = *(int *)(lVar8 + 4) + -1;
                        }
                        if ((!bVar2) || (puVar11 == (undefined *)0x0)) {
                          uVar17 = local_128;
LAB_18022576c:
                          bVar2 = false;
                        }
                        else {
                          puVar12 = (undefined8 *)FUN_180454280(local_48,puVar11,0x100);
                          uVar17 = local_128 | 1;
                          puVar1 = puVar12 + 2;
                          if (0xf < (ulonglong)puVar12[3]) {
                            puVar12 = (undefined8 *)*puVar12;
                          }
                          local_128 = uVar17;
                          if (*puVar1 < 0x12) goto LAB_18022576c;
                          lVar8 = *puVar1 + (longlong)puVar12;
                          lVar9 = thunk_FUN_1805f9970(puVar12,lVar8,"weapons/keychains/",0x12);
                          if ((lVar9 == lVar8) || (lVar9 - (longlong)puVar12 == -1))
                          goto LAB_18022576c;
                          bVar2 = true;
                        }
                        if ((uVar17 & 1) != 0) {
                          local_128 = uVar17 & 0xfffffffe;
                          FUN_18015c010(local_48);
                        }
                        puVar11 = local_108;
                        if (bVar2) {
                          param_1[1] = puVar20;
                          param_1[2] = local_d8;
                        }
                      }
                    }
                  }
                }
              }
              iVar6 = DAT_180c63e94;
              if ((DAT_180c63e94 == 0) && (UVar10 = GetTickCount64(), DAT_180c63e98 <= UVar10)) {
                local_138 = &DAT_1808ebef0;
                iVar6 = FUN_1805f68d0(&DAT_1808ebef0);
                if (iVar6 != 0) goto LAB_180225932;
                if (DAT_1808ebf3c == 0x7fffffff) {
                  DAT_1808ebf3c = 0x7ffffffe;
                  goto LAB_180225927;
                }
                if ((DAT_180c63e94 == 0) && (DAT_180c63e98 <= UVar10)) {
                  DAT_180c63e94 = FUN_1804174b0("CGameSceneNode",0x40e828fc);
                  DAT_180c63e98 = 0xffffffffffffffff;
                  if (DAT_180c63e94 == 0) {
                    DAT_180c63e98 = UVar10 + 1000;
                  }
                }
                iVar6 = DAT_180c63e94;
                FUN_1805f68fc(&DAT_1808ebef0);
              }
              lVar8 = FUN_18017ea70();
              *(int *)(lVar8 + 4) = *(int *)(lVar8 + 4) + 1;
              if (puVar15 + iVar6 == (undefined *)0x0) {
                bVar2 = false;
              }
              else {
                local_138 = (undefined *)0x0;
                cVar5 = FUN_1804514f0(&local_138,puVar15 + iVar6,8);
                if (cVar5 == '\0') {
                  bVar2 = false;
                }
                else {
                  local_d0 = local_138;
                  bVar2 = true;
                }
              }
              puVar15 = local_d0;
              lVar8 = FUN_18017ea70();
              if (*(int *)(lVar8 + 4) != 0) {
                *(int *)(lVar8 + 4) = *(int *)(lVar8 + 4) + -1;
              }
              ppuVar18 = local_120;
              iVar6 = local_130;
              if ((!bVar2) || (iVar13 = iVar13 + 1, puVar15 == (undefined *)0x0)) break;
            }
          }
        }
      }
    }
  }
  local_120 = ppuVar18 + 1;
  if (local_120 == (undefined **)local_b8) {
    return param_1;
  }
  local_108 = *local_120;
  goto LAB_180225140;
}



