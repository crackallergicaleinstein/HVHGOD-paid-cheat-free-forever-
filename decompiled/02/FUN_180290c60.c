// FUN_180290c60 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180290c60 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180290c60(ulonglong *param_1,ulonglong param_2)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  bool bVar4;
  bool bVar5;
  byte bVar6;
  undefined *puVar7;
  undefined8 uVar8;
  ulonglong *puVar9;
  char cVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  ULONGLONG UVar15;
  longlong lVar16;
  longlong lVar17;
  ulonglong uVar18;
  longlong lVar19;
  undefined *puVar20;
  undefined *puVar21;
  uint uVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  uint uVar25;
  undefined4 uVar26;
  uint uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined1 auStack_138 [32];
  undefined8 *local_118;
  uint local_108;
  undefined4 uStack_104;
  longlong local_f8;
  byte local_e8 [8];
  undefined *local_e0;
  undefined8 local_d8;
  int local_d0;
  int local_cc;
  int local_c8;
  undefined *local_c0;
  undefined1 local_b8 [16];
  ulonglong *local_a8;
  char *local_98;
  longlong local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_1808d5f00 ^ (ulonglong)auStack_138;
  param_1[1] = param_2;
  *param_1 = 0;
  iVar13 = DAT_180c655a0;
  local_a8 = param_1;
  if (DAT_180c655a0 == 0) {
    UVar15 = GetTickCount64();
    if (UVar15 < DAT_180c655a8) {
      iVar13 = 0;
    }
    else {
      local_c0 = &DAT_1808f33d0;
      iVar13 = FUN_1805f68d0(&DAT_1808f33d0);
      if (iVar13 != 0) goto LAB_180291a36;
      if (DAT_1808f341c == 0x7fffffff) {
        DAT_1808f341c = 0x7ffffffe;
        goto LAB_180291a2b;
      }
      if ((DAT_180c655a0 == 0) && (DAT_180c655a8 <= UVar15)) {
        DAT_180c655a0 = FUN_1804174b0("C_BaseEntity",0x9d930423);
        if (DAT_180c655a0 == 0) {
          DAT_180c655a8 = UVar15 + 1000;
        }
        else {
          DAT_180c655a8 = 0xffffffffffffffff;
        }
      }
      iVar13 = DAT_180c655a0;
      FUN_1805f68fc(&DAT_1808f33d0);
    }
  }
  local_cc = DAT_180c65598;
  iVar14 = DAT_180c65598;
  if (DAT_180c65598 == 0) {
    UVar15 = GetTickCount64();
    if (UVar15 < DAT_180c65590) {
      iVar14 = 0;
      local_cc = 0;
    }
    else {
      local_c0 = &DAT_1808f3380;
      iVar14 = FUN_1805f68d0(&DAT_1808f3380);
      if (iVar14 != 0) goto LAB_180291a36;
      if (DAT_1808f33cc == 0x7fffffff) {
        DAT_1808f33cc = 0x7ffffffe;
        goto LAB_180291a2b;
      }
      local_cc = DAT_180c65598;
      if ((DAT_180c65598 == 0) && (DAT_180c65590 <= UVar15)) {
        local_cc = FUN_1804174b0("CSkeletonInstance",0x52ac8c4f);
        if (local_cc == 0) {
          DAT_180c65590 = UVar15 + 1000;
        }
        else {
          DAT_180c65590 = 0xffffffffffffffff;
        }
      }
      iVar14 = local_cc;
      DAT_180c65598 = local_cc;
      FUN_1805f68fc(&DAT_1808f3380);
    }
  }
  local_d0 = DAT_180c6559c;
  iVar11 = DAT_180c6559c;
  if (DAT_180c6559c == 0) {
    UVar15 = GetTickCount64();
    if (UVar15 < DAT_180c65578) {
      iVar11 = 0;
      local_d0 = 0;
    }
    else {
      local_c0 = &DAT_1808f3330;
      iVar11 = FUN_1805f68d0(&DAT_1808f3330);
      if (iVar11 != 0) goto LAB_180291a36;
      if (DAT_1808f337c == 0x7fffffff) {
        DAT_1808f337c = 0x7ffffffe;
        goto LAB_180291a2b;
      }
      local_d0 = DAT_180c6559c;
      if ((DAT_180c6559c == 0) && (DAT_180c65578 <= UVar15)) {
        local_d0 = FUN_1804174b0("CModelState",0xe100c814);
        if (local_d0 == 0) {
          DAT_180c65578 = UVar15 + 1000;
        }
        else {
          DAT_180c65578 = 0xffffffffffffffff;
        }
      }
      iVar11 = local_d0;
      DAT_180c6559c = local_d0;
      FUN_1805f68fc(&DAT_1808f3330);
    }
  }
  local_c8 = DAT_180c65588;
  iVar12 = DAT_180c65588;
  if (DAT_180c65588 == 0) {
    UVar15 = GetTickCount64();
    if (UVar15 < DAT_180c65580) {
      iVar12 = 0;
      local_c8 = 0;
    }
    else {
      local_c0 = &DAT_1808f3290;
      iVar12 = FUN_1805f68d0(&DAT_1808f3290);
      if (iVar12 != 0) goto LAB_180291a36;
      if (DAT_1808f32dc == 0x7fffffff) {
        DAT_1808f32dc = 0x7ffffffe;
        goto LAB_180291a2b;
      }
      local_c8 = DAT_180c65588;
      if ((DAT_180c65588 == 0) && (DAT_180c65580 <= UVar15)) {
        local_c8 = FUN_1804174b0("CGameSceneNode",0xe9eb4068);
        if (local_c8 == 0) {
          DAT_180c65580 = UVar15 + 1000;
        }
        else {
          DAT_180c65580 = 0xffffffffffffffff;
        }
      }
      iVar12 = local_c8;
      DAT_180c65588 = local_c8;
      FUN_1805f68fc(&DAT_1808f3290);
    }
  }
  if (param_2 == 0) {
  }
  if (iVar13 == 0) {
  }
  if (iVar14 == 0) {
  }
  if (iVar11 == 0) {
  }
  if (iVar12 == 0) {
  }
  lVar16 = FUN_18017ea70();
  *(int *)(lVar16 + 4) = *(int *)(lVar16 + 4) + 1;
  bVar4 = false;
  if ((longlong)iVar13 + param_2 != 0) {
    local_e0 = (undefined *)0x0;
    cVar10 = FUN_1804514f0(&local_e0,(longlong)iVar13 + param_2,8);
    if (cVar10 == '\0') {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
  }
  puVar21 = local_e0;
  lVar16 = FUN_18017ea70();
  if (*(int *)(lVar16 + 4) != 0) {
    *(int *)(lVar16 + 4) = *(int *)(lVar16 + 4) + -1;
  }
  if (!bVar4) {
  }
  local_c0 = puVar21;
  if (puVar21 == (undefined *)0x0) {
  }
  iVar13 = DAT_180c65568;
  if (DAT_180c65568 == 0) {
    UVar15 = GetTickCount64();
    if (UVar15 < DAT_180c65570) {
      iVar13 = 0;
    }
    else {
      local_d8 = &DAT_1808f32e0;
      iVar13 = FUN_1805f68d0(&DAT_1808f32e0);
      if (iVar13 != 0) goto LAB_180291a36;
      if (DAT_1808f332c == 0x7fffffff) {
        DAT_1808f332c = 0x7ffffffe;
        goto LAB_180291a2b;
      }
      if ((DAT_180c65568 == 0) && (DAT_180c65570 <= UVar15)) {
        DAT_180c65568 = FUN_1804174b0("CEntityInstance",0xa8a45978);
        if (DAT_180c65568 == 0) {
          DAT_180c65570 = UVar15 + 1000;
        }
        else {
          DAT_180c65570 = 0xffffffffffffffff;
        }
      }
      iVar13 = DAT_180c65568;
      FUN_1805f68fc(&DAT_1808f32e0);
    }
  }
  iVar14 = DAT_180c65558;
  if (DAT_180c65558 == 0) {
    UVar15 = GetTickCount64();
    if (UVar15 < DAT_180c65550) {
      iVar14 = 0;
    }
    else {
      local_d8 = &DAT_1808f3240;
      iVar14 = FUN_1805f68d0(&DAT_1808f3240);
      if (iVar14 != 0) goto LAB_180291a36;
      if (DAT_1808f328c == 0x7fffffff) {
        DAT_1808f328c = 0x7ffffffe;
        goto LAB_180291a2b;
      }
      if ((DAT_180c65558 == 0) && (DAT_180c65550 <= UVar15)) {
        DAT_180c65558 = FUN_1804174b0("CEntityIdentity",0xbecfac7);
        if (DAT_180c65558 == 0) {
          DAT_180c65550 = UVar15 + 1000;
        }
        else {
          DAT_180c65550 = 0xffffffffffffffff;
        }
      }
      iVar14 = DAT_180c65558;
      FUN_1805f68fc(&DAT_1808f3240);
    }
  }
  if (iVar13 == 0) {
  }
  if (iVar14 == 0) {
  }
  lVar16 = FUN_18017ea70();
  *(int *)(lVar16 + 4) = *(int *)(lVar16 + 4) + 1;
  if ((longlong)iVar13 + param_2 == 0) {
    bVar4 = false;
    puVar21 = local_e0;
  }
  else {
    local_d8 = (undefined *)0x0;
    cVar10 = FUN_1804514f0(&local_d8,(longlong)iVar13 + param_2,8);
    if (cVar10 == '\0') {
      bVar4 = false;
      puVar21 = local_e0;
    }
    else {
      bVar4 = true;
      puVar21 = local_d8;
    }
  }
  lVar16 = FUN_18017ea70();
  if (*(int *)(lVar16 + 4) != 0) {
    *(int *)(lVar16 + 4) = *(int *)(lVar16 + 4) + -1;
  }
  if (!bVar4) {
  }
  if (puVar21 == (undefined *)0x0) {
  }
  lVar16 = FUN_18017ea70();
  *(int *)(lVar16 + 4) = *(int *)(lVar16 + 4) + 1;
  bVar4 = false;
  if (puVar21 + iVar14 != (undefined *)0x0) {
    local_d8 = (undefined *)((ulonglong)local_d8 & 0xffffffff00000000);
    cVar10 = FUN_1804514f0(&local_d8,puVar21 + iVar14,4);
    if (cVar10 == '\0') {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
  }
  puVar21 = local_d8;
  iVar13 = (uint)local_d8;
  lVar16 = FUN_18017ea70();
  if (*(int *)(lVar16 + 4) != 0) {
    *(int *)(lVar16 + 4) = *(int *)(lVar16 + 4) + -1;
  }
  lVar16 = DAT_180c65530;
  if (!bVar4) {
  }
  lVar17 = FUN_18017ea70();
  *(int *)(lVar17 + 4) = *(int *)(lVar17 + 4) + 1;
  if (lVar16 == 0) {
    bVar4 = false;
    puVar20 = local_e0;
  }
  else {
    local_d8 = (undefined *)0x0;
    cVar10 = FUN_1804514f0(&local_d8,lVar16,8);
    if (cVar10 == '\0') {
      bVar4 = false;
      puVar20 = local_e0;
    }
    else {
      bVar4 = true;
      puVar20 = local_d8;
    }
  }
  lVar16 = FUN_18017ea70();
  if (*(int *)(lVar16 + 4) != 0) {
    *(int *)(lVar16 + 4) = *(int *)(lVar16 + 4) + -1;
  }
  if (!bVar4) {
  }
  if (puVar20 == (undefined *)0x0) {
  }
  if ((DAT_180cce330 & 1) == 0) {
    DAT_180cce330 = DAT_180cce330 | 1;
    atexit(FUN_180662340);
  }
  lVar17 = DAT_1808f31e0;
  lVar16 = DAT_1808da460;
  if ((DAT_1808f31e0 == DAT_1808da460) && (lVar19 = DAT_180c65560, DAT_180c65560 != 0))
  goto LAB_180291429;
  UVar15 = GetTickCount64();
  if ((lVar17 == lVar16) && (UVar15 < DAT_180c65548)) {
    lVar19 = 0;
    goto LAB_180291429;
  }
  local_d8 = &DAT_1808f31f0;
  iVar14 = FUN_1805f68d0(&DAT_1808f31f0);
  if (iVar14 != 0) {
LAB_180291a36:
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(5);
  }
  if (DAT_1808f323c == 0x7fffffff) {
    DAT_1808f323c = 0x7ffffffe;
LAB_180291a2b:
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(6);
  }
  uVar23 = 1000;
  if (DAT_1808f31e0 == lVar16) {
    if ((DAT_180c65560 == 0) && (DAT_180c65548 <= UVar15)) goto LAB_180291395;
  }
  else {
    DAT_1808f31e8 = 1000;
LAB_180291395:
    lVar17 = -1;
    do {
      local_90 = lVar17 + 1;
      lVar19 = lVar17 + 1;
      lVar17 = local_90;
    } while ("client.dll:>E8????????418B5F10"[lVar19] != '\0');
    local_98 = "client.dll:>E8????????418B5F10";
    local_b8._8_8_ = 0x20;
    local_b8._0_8_ = "patterns::get_world_group_handle";
    DAT_180c65560 = FUN_1800e5d20(local_b8,&local_98);
    DAT_1808f31e0 = lVar16;
    DAT_180c65548 = 0xffffffffffffffff;
    if (DAT_180c65560 == 0) {
      DAT_180c65548 = UVar15 + DAT_1808f31e8;
      uVar23 = 60000;
      if (DAT_1808f31e8 < 60000) {
        uVar23 = DAT_1808f31e8 * 2;
      }
    }
    DAT_1808f31e8 = uVar23;
  }
  lVar19 = DAT_180c65560;
  FUN_1805f68fc(&DAT_1808f31f0);
LAB_180291429:
  cVar10 = FUN_1804513c0(lVar19,1,2);
  if (cVar10 != '\0') {
    lVar16 = FUN_18017ea70();
    *(int *)(lVar16 + 4) = *(int *)(lVar16 + 4) + 1;
    FUN_180298160(local_b8,lVar19,puVar20,(ulonglong)puVar21 & 0xffffffff);
    lVar16 = FUN_18017ea70();
    puVar21 = local_e0;
    if (*(int *)(lVar16 + 4) != 0) {
      *(int *)(lVar16 + 4) = *(int *)(lVar16 + 4) + -1;
    }
    if (local_b8[8] != '\0') {
      uVar8 = local_b8._0_8_;
      if (local_b8._0_8_ != 0) {
        uVar25 = 8;
        if (iVar13 != 0) {
          uVar25 = 0;
        }
        puVar20 = local_e0 + (longlong)local_cc + (longlong)local_d0;
        local_d8._0_4_ = uVar25;
        local_d8._4_4_ = 0x20;
        lVar16 = FUN_18017ea70();
        *(int *)(lVar16 + 4) = *(int *)(lVar16 + 4) + 1;
        bVar4 = false;
        if (puVar20 != (undefined *)0x0) {
          local_e0 = (undefined *)0x0;
          cVar10 = FUN_1804514f0(&local_e0,puVar20,8);
          if (cVar10 == '\0') {
            bVar4 = false;
          }
          else {
            bVar4 = true;
          }
        }
        puVar20 = local_e0;
        lVar16 = FUN_18017ea70();
        if (*(int *)(lVar16 + 4) != 0) {
          *(int *)(lVar16 + 4) = *(int *)(lVar16 + 4) + -1;
        }
        if ((bVar4) && (puVar20 != (undefined *)0x0)) {
          lVar17 = (longlong)local_c8;
          local_88 = 0;
          uStack_80 = 0;
          uStack_78 = 0;
          uStack_70 = 0;
          lVar16 = FUN_18017ea70();
          *(int *)(lVar16 + 4) = *(int *)(lVar16 + 4) + 1;
          puVar21 = puVar21 + lVar17;
          if (puVar21 == (undefined *)0x0) {
            bVar4 = false;
            uVar30 = local_88;
            uVar31 = uStack_80;
          }
          else {
            local_b8 = (undefined1  [16])0x0;
            cVar10 = FUN_1804514f0(local_b8,puVar21,0x10);
            if (cVar10 == '\0') {
              bVar4 = false;
              uVar30 = local_88;
              uVar31 = uStack_80;
            }
            else {
              bVar4 = true;
              uVar30 = local_b8._0_8_;
              uVar31 = local_b8._8_8_;
            }
          }
          lVar16 = FUN_18017ea70();
          if (*(int *)(lVar16 + 4) != 0) {
            *(int *)(lVar16 + 4) = *(int *)(lVar16 + 4) + -1;
          }
          lVar16 = FUN_18017ea70();
          *(int *)(lVar16 + 4) = *(int *)(lVar16 + 4) + 1;
          if (puVar21 + 0x10 == (undefined *)0x0) {
            bVar5 = false;
            uVar28 = local_88;
            uVar29 = uStack_80;
          }
          else {
            local_b8 = (undefined1  [16])0x0;
            cVar10 = FUN_1804514f0(local_b8,puVar21 + 0x10,0x10);
            if (cVar10 == '\0') {
              bVar5 = false;
              uVar28 = local_88;
              uVar29 = uStack_80;
            }
            else {
              bVar5 = true;
              uVar28 = local_b8._0_8_;
              uVar29 = local_b8._8_8_;
            }
          }
          lVar16 = FUN_18017ea70();
          if (*(int *)(lVar16 + 4) != 0) {
            *(int *)(lVar16 + 4) = *(int *)(lVar16 + 4) + -1;
          }
          lVar16 = DAT_180c65540;
          if ((bVar4) && (bVar5)) {
            local_88 = uVar30;
            uStack_80 = uVar31;
            uStack_78 = uVar28;
            uStack_70 = uVar29;
            lVar17 = FUN_18017ea70();
            *(int *)(lVar17 + 4) = *(int *)(lVar17 + 4) + 1;
            if (lVar16 == 0) {
              bVar4 = false;
            }
            else {
              local_e0 = (undefined *)0x0;
              cVar10 = FUN_1804514f0(&local_e0,lVar16,8);
              if (cVar10 == '\0') {
                bVar4 = false;
              }
              else {
                bVar4 = true;
              }
            }
            puVar21 = local_e0;
            lVar16 = FUN_18017ea70();
            if (*(int *)(lVar16 + 4) != 0) {
              *(int *)(lVar16 + 4) = *(int *)(lVar16 + 4) + -1;
            }
            if ((!bVar4) || (puVar21 == (undefined *)0x0)) {
              puVar21 = (undefined *)0x0;
              uVar26 = 0x20;
            }
            else {
              lVar16 = FUN_18017ea70();
              *(int *)(lVar16 + 4) = *(int *)(lVar16 + 4) + 1;
              puVar21 = puVar21 + 0x98;
              if (puVar21 == (undefined *)0x0) {
                bVar4 = false;
              }
              else {
                local_e0 = (undefined *)0x0;
                cVar10 = FUN_1804514f0(&local_e0,puVar21,8);
                if (cVar10 == '\0') {
                  bVar4 = false;
                }
                else {
                  bVar4 = true;
                }
              }
              puVar7 = local_e0;
              lVar16 = FUN_18017ea70();
              if (*(int *)(lVar16 + 4) != 0) {
                *(int *)(lVar16 + 4) = *(int *)(lVar16 + 4) + -1;
              }
              puVar21 = (undefined *)0x0;
              uVar25 = (uint)local_d8;
              uVar26 = local_d8._4_4_;
              if (bVar4) {
                puVar21 = puVar7;
              }
            }
            lVar16 = DAT_180c65540;
            cVar10 = FUN_1804513c0(puVar21,1,2);
            if (cVar10 != '\0') {
              lVar17 = FUN_18017ea70();
              *(int *)(lVar17 + 4) = *(int *)(lVar17 + 4) + 1;
              local_f8 = uVar8;
              local_118 = &local_88;
              local_108 = uVar25;
              uStack_104 = uVar26;
              FUN_1802981a0(local_b8,puVar21,lVar16,puVar20);
              lVar16 = FUN_18017ea70();
              puVar9 = local_a8;
              if (*(int *)(lVar16 + 4) != 0) {
                *(int *)(lVar16 + 4) = *(int *)(lVar16 + 4) + -1;
              }
              if ((local_b8[8] != '\0') && (local_b8._0_8_ != 0)) {
                *local_a8 = local_b8._0_8_;
                lVar16 = local_b8._0_8_ + 0x110;
                cVar10 = FUN_1804513c0(lVar16,8,1);
                if (cVar10 != '\0') {
                  lVar17 = FUN_18017ea70();
                  *(int *)(lVar17 + 4) = *(int *)(lVar17 + 4) + 1;
                  cVar10 = FUN_1801fde60(lVar16,&local_c0);
                  lVar16 = FUN_18017ea70();
                  if (*(int *)(lVar16 + 4) != 0) {
                    *(int *)(lVar16 + 4) = *(int *)(lVar16 + 4) + -1;
                  }
                  if (cVar10 != '\0') {
                    local_d8._0_4_ = 0xffffffff;
                    uVar23 = *puVar9;
                    cVar10 = FUN_1804513c0(uVar23 + 0xc0,4,1);
                    if (cVar10 != '\0') {
                      lVar16 = FUN_18017ea70();
                      *(int *)(lVar16 + 4) = *(int *)(lVar16 + 4) + 1;
                      cVar10 = FUN_1801ad800(uVar23 + 0xc0,&local_d8);
                      lVar16 = FUN_18017ea70();
                      if (*(int *)(lVar16 + 4) != 0) {
                        *(int *)(lVar16 + 4) = *(int *)(lVar16 + 4) + -1;
                      }
                      if (cVar10 != '\0') {
                        uVar23 = *puVar9;
                        if (1 < uVar23) {
                          uVar18 = (uVar23 >> 0x15 ^ uVar23 >> 4) * 0xed5ad4bb;
                          uVar24 = 0;
                          uVar18 = (ulonglong)(byte)((byte)(uVar18 >> 0xb) ^ (byte)uVar18);
                          do {
                            puVar1 = (ulonglong *)(&DAT_180c65630 + (uVar18 & 0xff) * 8);
                            uVar3 = *puVar1;
                            if (uVar3 == uVar23) goto LAB_180291848;
                            if (uVar3 < 2) {
                              LOCK();
                              uVar2 = *puVar1;
                              if (uVar3 == uVar2) {
                                *puVar1 = uVar23;
                              }
                              UNLOCK();
                              if (uVar3 == uVar2) goto LAB_180291848;
                              uVar24 = uVar24 - 1;
                              uVar18 = uVar18 - 1;
                            }
                            uVar24 = uVar24 + 1;
                            uVar18 = uVar18 + 1;
                          } while (uVar24 < 0x100);
                          DAT_180c65628 = 1;
                        }
LAB_180291848:
                        lVar16 = FUN_18017ea70();
                        *(int *)(lVar16 + 4) = *(int *)(lVar16 + 4) + 1;
                        local_e0 = (undefined *)0x0;
                        cVar10 = FUN_1804514f0(&local_e0,puVar20,8);
                        puVar21 = local_c0;
                        if (cVar10 != '\0') {
                          puVar21 = local_e0;
                        }
                        lVar16 = FUN_18017ea70();
                        if (*(int *)(lVar16 + 4) != 0) {
                          *(int *)(lVar16 + 4) = *(int *)(lVar16 + 4) + -1;
                        }
                        if (cVar10 == '\0') {
                        }
                        if (puVar21 == (undefined *)0x0) {
                        }
                        lVar16 = FUN_18017ea70();
                        *(int *)(lVar16 + 4) = *(int *)(lVar16 + 4) + 1;
                        bVar4 = false;
                        if (puVar21 + 0x10 != (undefined *)0x0) {
                          local_d8._0_4_ = 0;
                          cVar10 = FUN_1804514f0(&local_d8,puVar21 + 0x10,4);
                          if (cVar10 == '\0') {
                            bVar4 = false;
                          }
                          else {
                            bVar4 = true;
                          }
                        }
                        uVar25 = (uint)local_d8;
                        lVar16 = FUN_18017ea70();
                        if (*(int *)(lVar16 + 4) != 0) {
                          *(int *)(lVar16 + 4) = *(int *)(lVar16 + 4) + -1;
                        }
                        uVar27 = 0;
                        if (bVar4) {
                          uVar27 = uVar25;
                        }
                        lVar16 = FUN_18017ea70();
                        *(int *)(lVar16 + 4) = *(int *)(lVar16 + 4) + 1;
                        if (puVar21 + 0x14 == (undefined *)0x0) {
                          bVar4 = false;
                        }
                        else {
                          local_d8._0_4_ = 0;
                          cVar10 = FUN_1804514f0(&local_d8,puVar21 + 0x14,4);
                          if (cVar10 == '\0') {
                            bVar4 = false;
                          }
                          else {
                            bVar4 = true;
                          }
                        }
                        uVar25 = (uint)local_d8;
                        lVar16 = FUN_18017ea70();
                        if (*(int *)(lVar16 + 4) != 0) {
                          *(int *)(lVar16 + 4) = *(int *)(lVar16 + 4) + -1;
                        }
                        uVar22 = 0;
                        if (bVar4) {
                          uVar22 = uVar25;
                        }
                        uVar23 = *puVar9;
                        lVar16 = FUN_18017ea70();
                        *(int *)(lVar16 + 4) = *(int *)(lVar16 + 4) + 1;
                        if (uVar23 + 0x9a == 0) {
                          bVar4 = false;
                        }
                        else {
                          local_e8[0] = 0;
                          cVar10 = FUN_1804514f0(local_e8,uVar23 + 0x9a,1);
                          if (cVar10 == '\0') {
                            bVar4 = false;
                          }
                          else {
                            bVar4 = true;
                          }
                        }
                        bVar6 = local_e8[0];
                        lVar16 = FUN_18017ea70();
                        if (*(int *)(lVar16 + 4) != 0) {
                          *(int *)(lVar16 + 4) = *(int *)(lVar16 + 4) + -1;
                        }
                        if (bVar4) {
                          if (((uVar22 | uVar27) >> 10 & 1) == 0) {
                            local_e8[0] = bVar6 & 0xef;
                          }
                          else {
                            local_e8[0] = bVar6 | 0x10;
                          }
                          uVar23 = *puVar9;
                          cVar10 = FUN_1804513c0(uVar23 + 0x9a,1,1);
                          if (cVar10 == '\0') {
                          }
                          lVar16 = FUN_18017ea70();
                          *(int *)(lVar16 + 4) = *(int *)(lVar16 + 4) + 1;
                          FUN_1801ad7b0(uVar23 + 0x9a,local_e8);
                          lVar16 = FUN_18017ea70();
                          if (*(int *)(lVar16 + 4) == 0) {
                          }
                          *(int *)(lVar16 + 4) = *(int *)(lVar16 + 4) + -1;
                        }
                      }
                    }
                  }
                }
                FUN_180291a50(puVar9);
              }
            }
          }
        }
      }
    }
  }
}



