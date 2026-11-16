// FUN_18019c410 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18019c410 */

undefined8 FUN_18019c410(undefined4 *param_1,undefined8 *param_2)

{
  char *pcVar1;
  longlong *plVar2;
  undefined8 uVar3;
  bool bVar4;
  short sVar5;
  char cVar6;
  byte bVar7;
  char cVar8;
  int iVar9;
  longlong lVar10;
  ULONGLONG UVar11;
  longlong lVar12;
  undefined8 *puVar13;
  longlong lVar14;
  ulonglong *puVar15;
  longlong lVar16;
  int *piVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  longlong *plVar20;
  ulonglong uVar21;
  undefined8 *puVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  uint *puVar26;
  byte bVar27;
  ulonglong uVar28;
  undefined8 uVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  undefined1 in_ZMM6 [64];
  undefined1 auVar34 [64];
  undefined8 local_108;
  undefined8 *local_100;
  undefined8 *local_f8;
  undefined4 *local_f0;
  undefined *local_e8;
  char *local_d8;
  longlong local_d0;
  char *local_c8;
  longlong local_c0;
  undefined1 local_b8 [16];
  char *local_a8 [4];
  undefined8 local_88;
  char *local_78;
  longlong local_70;
  char *local_68;
  undefined8 local_60;
  undefined1 local_48 [16];
  
  local_48 = in_ZMM6._0_16_;
  local_b8 = ZEXT816(0x1807c5460);
  local_f8 = param_2;
  local_f0 = param_1;
  uVar29 = FUN_18017bf40(local_b8 + 8);
  lVar10 = FUN_1803d4150(uVar29,*param_1);
  if ((lVar10 == *(longlong *)(param_1 + 2)) && (*(longlong *)(param_1 + 6) != 0)) {
    iVar9 = DAT_180bb85b8;
    if (DAT_180bb85b8 == 0) {
      UVar11 = GetTickCount64();
      if (UVar11 < DAT_180bb85b0) {
        iVar9 = 0;
      }
      else {
        local_100 = (undefined8 *)&DAT_1808d89a0;
        iVar9 = FUN_1805f68d0(&DAT_1808d89a0);
        if (iVar9 != 0) goto LAB_18019d23c;
        if (DAT_1808d89ec == 0x7fffffff) {
          DAT_1808d89ec = 0x7ffffffe;
          goto LAB_18019d251;
        }
        if ((DAT_180bb85b8 == 0) && (DAT_180bb85b0 <= UVar11)) {
          DAT_180bb85b8 = FUN_1804174b0("C_EconItemView",0x34b55816);
          if (DAT_180bb85b8 == 0) {
            DAT_180bb85b0 = UVar11 + 1000;
          }
          else {
            DAT_180bb85b0 = 0xffffffffffffffff;
          }
        }
        iVar9 = DAT_180bb85b8;
        FUN_1805f68fc(&DAT_1808d89a0);
      }
    }
    lVar10 = *(longlong *)(param_1 + 4);
    lVar12 = FUN_18017ea70();
    *(int *)(lVar12 + 4) = *(int *)(lVar12 + 4) + 1;
    if (iVar9 + lVar10 == 0) {
      bVar4 = false;
      puVar13 = local_100;
    }
    else {
      local_108 = (undefined8 *)0x0;
      cVar6 = FUN_1804514f0(&local_108,iVar9 + lVar10,8);
      if (cVar6 == '\0') {
        bVar4 = false;
        puVar13 = local_100;
      }
      else {
        bVar4 = true;
        puVar13 = local_108;
      }
    }
    lVar10 = FUN_18017ea70();
    if (*(int *)(lVar10 + 4) != 0) {
      *(int *)(lVar10 + 4) = *(int *)(lVar10 + 4) + -1;
    }
    if (!bVar4) {
      uVar29 = 0;
      goto LAB_18019caa8;
    }
    if ((*(char *)((longlong)param_1 + 0x22) == '\0') && (puVar13 != *(undefined8 **)(param_1 + 6)))
    goto LAB_18019caa5;
    if (*(char *)(param_1 + 8) == '\0') {
      puVar13 = (undefined8 *)FUN_180184240(local_a8,*(undefined8 *)(param_1 + 2));
      uVar29 = puVar13[4];
      local_88._1_1_ = (char)((ulonglong)uVar29 >> 8);
      local_88 = uVar29;
      if ((local_88._1_1_ == '\0') || ((int)*puVar13 != 0)) {
        *(undefined1 *)((longlong)param_2 + 0x11) = 1;
        DAT_180bbea20 = DAT_180bbea20 + 1;
        uVar29 = 0;
        goto LAB_18019caa8;
      }
    }
    if ((*(char *)((longlong)param_2 + 0x12) != '\0') && (*(char *)(param_2 + 2) == '\0')) {
      if (*(ulonglong *)*param_2 <= (ulonglong)param_2[1]) {
        *(ulonglong *)*param_2 = param_2[1] + 0x10;
        *(undefined1 *)(param_2 + 2) = 1;
        cVar6 = FUN_1802239e0(*(undefined8 *)(param_1 + 4));
        if (cVar6 == '\0') {
          uVar29 = 0;
          goto LAB_18019caa8;
        }
        *(undefined1 *)((longlong)param_1 + 0x22) = 1;
        bVar27 = 1;
        plVar2 = *(longlong **)(param_1 + 0xce);
        plVar20 = *(longlong **)(param_1 + 0xcc);
        if (plVar20 != plVar2) {
          do {
            lVar10 = plVar20[1];
            lVar12 = plVar20[2];
            lVar16 = *plVar20;
            if (((lVar16 == 0) || (lVar10 == 0)) || (lVar12 - lVar10 == 0)) {
              bVar7 = 0;
            }
            else {
              lVar14 = FUN_18017ea70();
              *(int *)(lVar14 + 4) = *(int *)(lVar14 + 4) + 1;
              bVar7 = FUN_1804514c0(lVar16,lVar10,lVar12 - lVar10);
              lVar10 = FUN_18017ea70();
              if (*(int *)(lVar10 + 4) != 0) {
                *(int *)(lVar10 + 4) = *(int *)(lVar10 + 4) + -1;
              }
            }
            bVar27 = bVar27 & bVar7;
            plVar20 = plVar20 + 4;
          } while (plVar20 != plVar2);
          if (bVar27 == 0) {
            uVar29 = 0;
            goto LAB_18019caa8;
          }
          param_1 = local_f0;
        }
        if (*(char *)(param_1 + 8) != '\0') {
          local_a8[0] = "set item texture prefab";
          local_a8[1] = "set item texture seed";
          local_a8[2] = "set item texture wear";
          local_100 = (undefined8 *)0x0;
          local_108 = (undefined8 *)CONCAT44(local_108._4_4_,6);
          puVar26 = param_1 + 0xd2;
          local_f8 = (undefined8 *)((longlong)local_a8 - (longlong)param_1);
          do {
            uVar29 = *(undefined8 *)(param_1 + 4);
            if ((char)puVar26[1] == '\0') {
              if ((DAT_180cce330 & 1) == 0) {
                DAT_180cce330 = DAT_180cce330 | 1;
                atexit(FUN_180662340);
              }
              lVar12 = DAT_1808da460;
              lVar10 = DAT_1808d8930;
              if (DAT_1808d8930 == DAT_1808da460) {
                lVar16 = DAT_180bb8598;
                if (DAT_180bb8598 == 0) goto LAB_18019c91c;
              }
              else {
LAB_18019c91c:
                UVar11 = GetTickCount64();
                if ((lVar10 == lVar12) && (UVar11 < DAT_180bb8590)) {
                  lVar16 = 0;
                }
                else {
                  local_e8 = &DAT_1808d88e0;
                  iVar9 = FUN_1805f68d0(&DAT_1808d88e0);
                  if (iVar9 != 0) goto LAB_18019d23c;
                  if (DAT_1808d892c == 0x7fffffff) {
                    DAT_1808d892c = 0x7ffffffe;
                    goto LAB_18019d251;
                  }
                  if (DAT_1808d8930 == lVar12) {
                    if ((DAT_180bb8598 == 0) && (DAT_180bb8590 <= UVar11)) goto LAB_18019c99d;
                  }
                  else {
                    DAT_1808d88d0 = 1000;
LAB_18019c99d:
                    lVar10 = -1;
                    do {
                      local_d0 = lVar10 + 1;
                      lVar16 = lVar10 + 1;
                      lVar10 = local_d0;
                    } while ("client.dll:40534883EC20486381????????440FB7CA"[lVar16] != '\0');
                    local_d8 = "client.dll:40534883EC20486381????????440FB7CA";
                    local_c8 = "patterns::econ_item_view_remove_attribute";
                    local_c0 = 0x29;
                    DAT_180bb8598 = FUN_1800e5d20(&local_c8,&local_d8);
                    DAT_1808d8930 = lVar12;
                    DAT_180bb8590 = 0xffffffffffffffff;
                    if (DAT_180bb8598 == 0) {
                      DAT_180bb8590 = DAT_1808d88d0 + UVar11;
                      if (DAT_1808d88d0 < 60000) {
                        DAT_1808d88d0 = DAT_1808d88d0 * 2;
                      }
                      else {
                        DAT_1808d88d0 = 60000;
                      }
                    }
                    else {
                      DAT_1808d88d0 = 1000;
                    }
                  }
                  lVar16 = DAT_180bb8598;
                  FUN_1805f68fc(&DAT_1808d88e0);
                }
                param_1 = local_f0;
              }
              cVar6 = FUN_1804513c0(lVar16,1,2);
              if (cVar6 != '\0') {
                lVar10 = FUN_18017ea70();
                *(int *)(lVar10 + 4) = *(int *)(lVar10 + 4) + 1;
                FUN_1801aec20(lVar16,uVar29,(ulonglong)local_108 & 0xffffffff);
                goto LAB_18019ca6c;
              }
            }
            else {
              auVar34 = ZEXT464(*puVar26);
              if ((DAT_180cce330 & 1) == 0) {
                DAT_180cce330 = DAT_180cce330 | 1;
                atexit(FUN_180662340);
              }
              lVar12 = DAT_1808da460;
              lVar10 = DAT_1808d8990;
              if (DAT_1808d8990 == DAT_1808da460) {
                lVar16 = DAT_180bb85a8;
                if (DAT_180bb85a8 == 0) goto LAB_18019c777;
              }
              else {
LAB_18019c777:
                UVar11 = GetTickCount64();
                if ((lVar10 == lVar12) && (UVar11 < DAT_180bb85a0)) {
                  lVar16 = 0;
                }
                else {
                  local_e8 = &DAT_1808d8940;
                  iVar9 = FUN_1805f68d0(&DAT_1808d8940);
                  if (iVar9 != 0) goto LAB_18019d23c;
                  if (DAT_1808d898c == 0x7fffffff) {
                    DAT_1808d898c = 0x7ffffffe;
                    goto LAB_18019d251;
                  }
                  if (DAT_1808d8990 == lVar12) {
                    if ((DAT_180bb85a8 == 0) && (DAT_180bb85a0 <= UVar11)) goto LAB_18019c7f8;
                  }
                  else {
                    DAT_1808d8938 = 1000;
LAB_18019c7f8:
                    lVar10 = -1;
                    do {
                      local_70 = lVar10 + 1;
                      lVar16 = lVar10 + 1;
                      lVar10 = local_70;
                    } while ("client.dll:40534883EC20488BD94881C108020000"[lVar16] != '\0');
                    local_78 = "client.dll:40534883EC20488BD94881C108020000";
                    local_68 = "patterns::econ_item_view_set_attribute";
                    local_60 = 0x26;
                    DAT_180bb85a8 = FUN_1800e5d20(&local_68,&local_78);
                    DAT_1808d8990 = lVar12;
                    DAT_180bb85a0 = 0xffffffffffffffff;
                    if (DAT_180bb85a8 == 0) {
                      DAT_180bb85a0 = DAT_1808d8938 + UVar11;
                      if (DAT_1808d8938 < 60000) {
                        DAT_1808d8938 = DAT_1808d8938 * 2;
                      }
                      else {
                        DAT_1808d8938 = 60000;
                      }
                    }
                    else {
                      DAT_1808d8938 = 1000;
                    }
                  }
                  lVar16 = DAT_180bb85a8;
                  FUN_1805f68fc(&DAT_1808d8940);
                }
                param_1 = local_f0;
              }
              cVar6 = FUN_1804513c0(lVar16,1,2);
              if (cVar6 != '\0') {
                lVar10 = FUN_18017ea70();
                *(int *)(lVar10 + 4) = *(int *)(lVar10 + 4) + 1;
                FUN_1801aebf0(lVar16,uVar29,
                              *(undefined8 *)((longlong)(local_f8 + -0x69) + (longlong)puVar26),
                              auVar34._0_8_);
LAB_18019ca6c:
                lVar10 = FUN_18017ea70();
                if (*(int *)(lVar10 + 4) != 0) {
                  *(int *)(lVar10 + 4) = *(int *)(lVar10 + 4) + -1;
                }
              }
            }
            local_108 = (undefined8 *)CONCAT44(local_108._4_4_,(int)local_108 + 1);
            local_100 = (undefined8 *)((longlong)local_100 + 1);
            puVar26 = puVar26 + 2;
          } while ((longlong)local_100 < 3);
          FUN_18019c2a0(*(undefined8 *)(param_1 + 2));
          goto LAB_18019caa5;
        }
        iVar9 = DAT_180bb8588;
        if (DAT_180bb8588 == 0) {
          UVar11 = GetTickCount64();
          if (UVar11 < DAT_180bb8580) {
            iVar9 = 0;
          }
          else {
            local_e8 = &DAT_1808d8880;
            iVar9 = FUN_1805f68d0(&DAT_1808d8880);
            if (iVar9 != 0) goto LAB_18019d23c;
            if (DAT_1808d88cc == 0x7fffffff) {
              DAT_1808d88cc = 0x7ffffffe;
              goto LAB_18019d251;
            }
            if ((DAT_180bb8588 == 0) && (DAT_180bb8580 <= UVar11)) {
              DAT_180bb8588 = FUN_1804174b0("C_EconItemView",0xa2ccb41a);
              if (DAT_180bb8588 == 0) {
                DAT_180bb8580 = UVar11 + 1000;
              }
              else {
                DAT_180bb8580 = 0xffffffffffffffff;
              }
            }
            iVar9 = DAT_180bb8588;
            FUN_1805f68fc(&DAT_1808d8880);
          }
        }
        lVar10 = *(longlong *)(param_1 + 4);
        lVar12 = FUN_18017ea70();
        *(int *)(lVar12 + 4) = *(int *)(lVar12 + 4) + 1;
        uVar29 = 2;
        if (lVar10 + iVar9 == 0) {
          bVar4 = false;
        }
        else {
          local_108 = (undefined8 *)((ulonglong)local_108 & 0xffffffffffff0000);
          cVar6 = FUN_1804514f0(&local_108,lVar10 + iVar9,2);
          if (cVar6 == '\0') {
            bVar4 = false;
          }
          else {
            bVar4 = true;
          }
        }
        puVar13 = local_108;
        sVar5 = (short)local_108;
        lVar10 = FUN_18017ea70();
        if (*(int *)(lVar10 + 4) != 0) {
          *(int *)(lVar10 + 4) = *(int *)(lVar10 + 4) + -1;
        }
        if ((bVar4) && (sVar5 != 0)) {
          FUN_1801846a0(*(undefined8 *)(param_1 + 2),*(undefined8 *)(param_1 + 4),
                        (ulonglong)puVar13 & 0xffff);
        }
        lVar10 = *(longlong *)(param_1 + 4);
        lVar12 = FUN_18017ea70();
        *(int *)(lVar12 + 4) = *(int *)(lVar12 + 4) + 1;
        if (lVar10 == 0) {
          bVar4 = false;
          puVar13 = local_f8;
        }
        else {
          local_100 = (undefined8 *)0x0;
          cVar6 = FUN_1804514f0(&local_100,lVar10,8);
          if (cVar6 == '\0') {
            bVar4 = false;
            puVar13 = local_f8;
          }
          else {
            bVar4 = true;
            puVar13 = local_100;
          }
        }
        lVar10 = FUN_18017ea70();
        if (*(int *)(lVar10 + 4) != 0) {
          *(int *)(lVar10 + 4) = *(int *)(lVar10 + 4) + -1;
        }
        if ((!bVar4) || (puVar13 == (undefined8 *)0x0)) {
          puVar13 = (undefined8 *)0x0;
        }
        else {
          lVar10 = FUN_18017ea70();
          *(int *)(lVar10 + 4) = *(int *)(lVar10 + 4) + 1;
          if (puVar13 + 3 == (undefined8 *)0x0) {
            bVar4 = false;
            puVar22 = local_f8;
          }
          else {
            local_100 = (undefined8 *)0x0;
            cVar6 = FUN_1804514f0(&local_100,puVar13 + 3,8);
            if (cVar6 == '\0') {
              bVar4 = false;
              puVar22 = local_f8;
            }
            else {
              bVar4 = true;
              puVar22 = local_100;
            }
          }
          lVar10 = FUN_18017ea70();
          if (*(int *)(lVar10 + 4) != 0) {
            *(int *)(lVar10 + 4) = *(int *)(lVar10 + 4) + -1;
          }
          puVar13 = (undefined8 *)0x0;
          if (bVar4) {
            puVar13 = puVar22;
          }
        }
        uVar3 = *(undefined8 *)(param_1 + 4);
        cVar8 = FUN_1804513c0(puVar13,1,2);
        cVar6 = '\0';
        if (cVar8 != '\0') {
          lVar10 = FUN_18017ea70();
          *(int *)(lVar10 + 4) = *(int *)(lVar10 + 4) + 1;
          FUN_1801aec50(&local_108,puVar13,uVar3);
          lVar10 = FUN_18017ea70();
          if (*(int *)(lVar10 + 4) != 0) {
            *(int *)(lVar10 + 4) = *(int *)(lVar10 + 4) + -1;
          }
          cVar6 = local_108._4_1_;
        }
        uVar19 = (ulonglong)local_108 & 0xffffffff;
        if (cVar6 == '\0') {
          uVar19 = 0;
        }
        lVar10 = FUN_180208890(&DAT_180cc9bb0,uVar19);
        iVar9 = DAT_180bb8578;
        if (DAT_180bb8578 == 0) {
          UVar11 = GetTickCount64();
          if (UVar11 < DAT_180bb8570) {
            iVar9 = 0;
          }
          else {
            local_e8 = &DAT_1808d8830;
            iVar9 = FUN_1805f68d0(&DAT_1808d8830);
            if (iVar9 != 0) goto LAB_18019d23c;
            if (DAT_1808d887c == 0x7fffffff) {
              DAT_1808d887c = 0x7ffffffe;
              goto LAB_18019d251;
            }
            if ((DAT_180bb8578 == 0) && (DAT_180bb8570 <= UVar11)) {
              DAT_180bb8578 = FUN_1804174b0("C_BaseEntity",0x9d930423);
              if (DAT_180bb8578 == 0) {
                DAT_180bb8570 = UVar11 + 1000;
              }
              else {
                DAT_180bb8570 = 0xffffffffffffffff;
              }
            }
            iVar9 = DAT_180bb8578;
            FUN_1805f68fc(&DAT_1808d8830);
          }
        }
        lVar12 = *(longlong *)(param_1 + 2);
        lVar16 = FUN_18017ea70();
        *(int *)(lVar16 + 4) = *(int *)(lVar16 + 4) + 1;
        if (lVar12 + iVar9 == 0) {
          bVar4 = false;
          puVar13 = local_f8;
        }
        else {
          local_100 = (undefined8 *)0x0;
          cVar6 = FUN_1804514f0(&local_100,lVar12 + iVar9,8);
          if (cVar6 == '\0') {
            bVar4 = false;
            puVar13 = local_f8;
          }
          else {
            bVar4 = true;
            puVar13 = local_100;
          }
        }
        lVar12 = FUN_18017ea70();
        if (*(int *)(lVar12 + 4) != 0) {
          *(int *)(lVar12 + 4) = *(int *)(lVar12 + 4) + -1;
        }
        if ((bVar4) && (puVar13 != (undefined8 *)0x0)) {
          if ((DAT_180cce330 & 1) == 0) {
            DAT_180cce330 = DAT_180cce330 | 1;
            atexit(FUN_180662340);
          }
          lVar16 = DAT_1808da460;
          lVar12 = DAT_1808d8820;
          if (DAT_1808d8820 == DAT_1808da460) {
            lVar14 = DAT_180bb8568;
            if (DAT_180bb8568 == 0) goto LAB_18019cf59;
          }
          else {
LAB_18019cf59:
            UVar11 = GetTickCount64();
            if ((lVar12 == lVar16) && (UVar11 < DAT_180bb8560)) {
              lVar14 = 0;
            }
            else {
              local_e8 = &DAT_1808d87d0;
              iVar9 = FUN_1805f68d0(&DAT_1808d87d0);
              if (iVar9 != 0) {
LAB_18019d23c:
                    /* WARNING: Subroutine does not return */
                FUN_1805f6d44(5);
              }
              if (DAT_1808d881c == 0x7fffffff) {
                DAT_1808d881c = 0x7ffffffe;
LAB_18019d251:
                    /* WARNING: Subroutine does not return */
                FUN_1805f6d44(6);
              }
              uVar19 = 1000;
              if (DAT_1808d8820 == lVar16) {
                if ((DAT_180bb8568 == 0) && (DAT_180bb8560 <= UVar11)) goto LAB_18019cfe2;
              }
              else {
                DAT_1808d87c0 = 1000;
LAB_18019cfe2:
                lVar12 = -1;
                do {
                  local_c0 = lVar12 + 1;
                  pcVar1 = "lient.dll:48895C24??48897424??574883EC??488D99????????488B71" + lVar12;
                  lVar12 = local_c0;
                } while (*pcVar1 != '\0');
                local_c8 = "client.dll:48895C24??48897424??574883EC??488D99????????488B71";
                local_d8 = "patterns::weapon_set_mesh_group_mask";
                local_d0 = 0x24;
                DAT_180bb8568 = FUN_1800e5d20(&local_d8,&local_c8);
                DAT_1808d8820 = lVar16;
                DAT_180bb8560 = 0xffffffffffffffff;
                if (DAT_180bb8568 == 0) {
                  DAT_180bb8560 = DAT_1808d87c0 + UVar11;
                  uVar19 = DAT_1808d87c0 * 2;
                  if (59999 < DAT_1808d87c0) {
                    uVar19 = 60000;
                  }
                }
                DAT_1808d87c0 = uVar19;
              }
              lVar14 = DAT_180bb8568;
              FUN_1805f68fc(&DAT_1808d87d0);
            }
            param_1 = local_f0;
          }
          if ((lVar10 == 0) || (*(char *)(lVar10 + 0x90) == '\0')) {
            uVar29 = 1;
          }
          FUN_180183be0(puVar13,uVar29,lVar14);
        }
        piVar17 = (int *)FUN_180184240(local_a8,*(undefined8 *)(param_1 + 2));
        uVar29 = *(undefined8 *)(piVar17 + 8);
        local_88._1_1_ = (char)((ulonglong)uVar29 >> 8);
        local_88 = uVar29;
        if ((local_88._1_1_ == '\0') || (*piVar17 != 0)) {
          *(undefined1 *)((longlong)local_f8 + 0x11) = 1;
          DAT_180bbea20 = DAT_180bbea20 + 1;
          uVar29 = 0;
          goto LAB_18019caa8;
        }
        cVar6 = FUN_18022de40(*(undefined8 *)(param_1 + 2));
        if (cVar6 == '\0') {
          uVar29 = 0;
          goto LAB_18019caa8;
        }
        goto LAB_18019caa5;
      }
    }
    *(undefined1 *)((longlong)param_2 + 0x11) = 1;
    uVar29 = 0;
  }
  else {
LAB_18019caa5:
    uVar29 = 1;
  }
LAB_18019caa8:
  FUN_18017bf40(&local_f8);
  puVar13 = local_f8;
  uVar21 = (longlong)local_f8 - local_b8._8_8_;
  puVar15 = (ulonglong *)FUN_1801b1940();
  uVar23 = *puVar15 + 1;
  *puVar15 = uVar23;
  uVar18 = puVar15[1] + uVar21;
  puVar15[1] = uVar18;
  uVar24 = puVar15[3] + (ulonglong)(999999 < uVar21);
  puVar15[3] = uVar24;
  uVar25 = puVar15[4] + (ulonglong)(4999999 < uVar21);
  puVar15[4] = uVar25;
  uVar28 = puVar15[5] + (ulonglong)(15999999 < uVar21);
  puVar15[5] = uVar28;
  uVar19 = puVar15[2];
  if (puVar15[2] < uVar21) {
    puVar15[2] = uVar21;
    uVar19 = uVar21;
  }
  if ((puVar13 == (undefined8 *)puVar15[7]) || ((longlong)puVar15[7] <= (longlong)puVar13)) {
    dVar33 = (double)(longlong)((longlong)puVar13 - puVar15[6]) / 1000000.0;
    dVar32 = 0.0;
    if (0.0 < dVar33) {
      dVar32 = ((double)uVar18 / 1000.0) / dVar33;
    }
    dVar30 = (double)uVar18 / (double)uVar23;
    dVar31 = dVar30 / 1000.0;
    FUN_1801af8a0(dVar30,dVar31,local_b8._0_8_,uVar23,uVar23,dVar31,(double)uVar19 / 1000.0,
                  (double)uVar18 / 1000000.0,dVar33,dVar32,uVar24,uVar25,uVar28);
    puVar15[2] = 0;
    puVar15[1] = 0;
    *puVar15 = 0;
    puVar15[5] = 0;
    puVar15[4] = 0;
    puVar15[3] = 0;
    puVar15[6] = (ulonglong)puVar13;
    puVar15[7] = (ulonglong)(puVar13 + 625000000);
  }
  return uVar29;
}



