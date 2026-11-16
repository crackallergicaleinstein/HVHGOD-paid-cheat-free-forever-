// FUN_1803ab8e0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1803ab8e0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

void FUN_1803ab8e0(undefined *param_1)

{
  bool bVar1;
  bool bVar2;
  uint uVar3;
  char cVar4;
  int iVar5;
  ULONGLONG UVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined *puVar9;
  char *pcVar10;
  int iVar11;
  undefined8 *******_Buf1;
  char *******pppppppcVar12;
  undefined *puVar13;
  undefined *puVar14;
  uint uVar15;
  ulonglong uVar16;
  undefined1 auStack_a8 [32];
  undefined *local_88;
  undefined *local_80;
  undefined8 *******local_78 [2];
  longlong local_68;
  ulonglong local_60;
  char *******local_58 [3];
  ulonglong local_40;
  ulonglong local_38;
  
  local_38 = DAT_1808d5f00 ^ (ulonglong)auStack_a8;
  if (param_1 != (undefined *)0x0) {
    uVar16 = 0xffffffffffffffff;
    iVar11 = DAT_180c71904;
    local_80 = param_1;
    if (DAT_180c71904 == 0) {
      UVar6 = GetTickCount64();
      if (UVar6 < DAT_180c71908) {
        iVar11 = 0;
      }
      else {
        local_88 = &DAT_180903bb0;
        iVar11 = FUN_1805f68d0(&DAT_180903bb0);
        if (iVar11 != 0) goto LAB_1803ac6fb;
        if (DAT_180903bfc == 0x7fffffff) {
          DAT_180903bfc = 0x7ffffffe;
          goto LAB_1803ac710;
        }
        if ((DAT_180c71904 == 0) && (DAT_180c71908 <= UVar6)) {
          DAT_180c71904 = FUN_1804174b0("CEntityInstance",0xa8a45978);
          if (DAT_180c71904 == 0) {
            DAT_180c71908 = UVar6 + 1000;
          }
          else {
            DAT_180c71908 = 0xffffffffffffffff;
          }
        }
        iVar11 = DAT_180c71904;
        FUN_1805f68fc(&DAT_180903bb0);
      }
    }
    lVar7 = FUN_18017ea70();
    *(int *)(lVar7 + 4) = *(int *)(lVar7 + 4) + 1;
    bVar1 = false;
    if (param_1 + iVar11 != (undefined *)0x0) {
      local_88 = (undefined *)0x0;
      cVar4 = FUN_1804514f0(&local_88,param_1 + iVar11,8);
      if (cVar4 == '\0') {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
    }
    puVar9 = local_88;
    lVar7 = FUN_18017ea70();
    if (*(int *)(lVar7 + 4) != 0) {
      *(int *)(lVar7 + 4) = *(int *)(lVar7 + 4) + -1;
    }
    if (!bVar1) {
    }
    if (puVar9 == (undefined *)0x0) {
    }
    lVar7 = FUN_18017ea70();
    *(int *)(lVar7 + 4) = *(int *)(lVar7 + 4) + 1;
    local_88 = (undefined *)0x0;
    cVar4 = FUN_1804514f0(&local_88,puVar9,8);
    puVar13 = local_80;
    if (cVar4 != '\0') {
      puVar13 = local_88;
    }
    lVar7 = FUN_18017ea70();
    if (*(int *)(lVar7 + 4) != 0) {
      *(int *)(lVar7 + 4) = *(int *)(lVar7 + 4) + -1;
    }
    if (cVar4 == '\0') {
    }
    if (puVar13 != param_1) {
    }
    lVar7 = FUN_18017ea70();
    *(int *)(lVar7 + 4) = *(int *)(lVar7 + 4) + 1;
    if (puVar9 + 0x10 == (undefined *)0x0) {
      bVar1 = false;
    }
    else {
      local_88 = (undefined *)((ulonglong)local_88 & 0xffffffff00000000);
      cVar4 = FUN_1804514f0(&local_88,puVar9 + 0x10,4);
      if (cVar4 == '\0') {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
    }
    uVar15 = (uint)local_88;
    lVar7 = FUN_18017ea70();
    if (*(int *)(lVar7 + 4) != 0) {
      *(int *)(lVar7 + 4) = *(int *)(lVar7 + 4) + -1;
    }
    if (!bVar1) {
    }
    if ((uVar15 & 0x7fff) < 0x4000) {
    }
    iVar11 = DAT_180c71900;
    if (DAT_180c71900 == 0) {
      UVar6 = GetTickCount64();
      if (UVar6 < DAT_180c71920) {
        iVar11 = 0;
      }
      else {
        local_88 = &DAT_180903c00;
        iVar11 = FUN_1805f68d0(&DAT_180903c00);
        if (iVar11 != 0) {
LAB_1803ac6fb:
                    /* WARNING: Subroutine does not return */
          FUN_1805f6d44(5);
        }
        if (DAT_180903c4c == 0x7fffffff) {
          DAT_180903c4c = 0x7ffffffe;
LAB_1803ac710:
                    /* WARNING: Subroutine does not return */
          FUN_1805f6d44(6);
        }
        if ((DAT_180c71900 == 0) && (DAT_180c71920 <= UVar6)) {
          DAT_180c71900 = FUN_1804174b0("CEntityIdentity",0xbecfac7);
          if (DAT_180c71900 == 0) {
            DAT_180c71920 = UVar6 + 1000;
          }
          else {
            DAT_180c71920 = 0xffffffffffffffff;
          }
        }
        iVar11 = DAT_180c71900;
        FUN_1805f68fc(&DAT_180903c00);
      }
    }
    lVar7 = FUN_18017ea70();
    *(int *)(lVar7 + 4) = *(int *)(lVar7 + 4) + 1;
    bVar1 = false;
    if (puVar9 + iVar11 != (undefined *)0x0) {
      local_88 = (undefined *)((ulonglong)local_88 & 0xffffffff00000000);
      cVar4 = FUN_1804514f0(&local_88,puVar9 + iVar11,4);
      if (cVar4 == '\0') {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
    }
    iVar5 = (uint)local_88;
    lVar7 = FUN_18017ea70();
    iVar11 = *(int *)(lVar7 + 4);
    if (iVar11 != 0) {
      iVar11 = iVar11 + -1;
      *(int *)(lVar7 + 4) = iVar11;
    }
    if (!bVar1) {
    }
    if (iVar5 != 0) {
    }
    uVar8 = FUN_1803d3fa0(iVar11,param_1);
    FUN_180454030(local_78,uVar8,0x60);
    _Buf1 = local_78;
    if (0xf < local_60) {
      _Buf1 = local_78[0];
    }
    if ((local_68 == 0x13) && (iVar11 = memcmp(_Buf1,"C_CS2HudModelWeapon",0x13), iVar11 == 0)) {
      iVar11 = DAT_180c71910;
      if (DAT_180c71910 == 0) {
        UVar6 = GetTickCount64();
        if (UVar6 < DAT_180c71918) {
          iVar11 = 0;
        }
        else {
          local_88 = &DAT_180903b10;
          iVar11 = FUN_1805f68d0(&DAT_180903b10);
          if (iVar11 != 0) goto LAB_1803ac750;
          if (DAT_180903b5c == 0x7fffffff) {
            DAT_180903b5c = 0x7ffffffe;
            goto LAB_1803ac725;
          }
          if ((DAT_180c71910 == 0) && (DAT_180c71918 <= UVar6)) {
            DAT_180c71910 = FUN_1804174b0("C_BaseEntity",0x6d279c31);
            if (DAT_180c71910 == 0) {
              DAT_180c71918 = UVar6 + 1000;
            }
            else {
              DAT_180c71918 = 0xffffffffffffffff;
            }
          }
          iVar11 = DAT_180c71910;
          FUN_1805f68fc(&DAT_180903b10);
        }
      }
      lVar7 = FUN_18017ea70();
      *(int *)(lVar7 + 4) = *(int *)(lVar7 + 4) + 1;
      bVar1 = false;
      if (param_1 + iVar11 != (undefined *)0x0) {
        local_88 = (undefined *)((ulonglong)local_88 & 0xffffffff00000000);
        cVar4 = FUN_1804514f0(&local_88,param_1 + iVar11,4);
        if (cVar4 == '\0') {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
      }
      puVar9 = local_88;
      uVar15 = (uint)local_88;
      lVar7 = FUN_18017ea70();
      iVar11 = *(int *)(lVar7 + 4);
      if (iVar11 != 0) {
        iVar11 = iVar11 + -1;
        *(int *)(lVar7 + 4) = iVar11;
      }
      if (((((bVar1) && (uVar15 != 0)) && (uVar15 != 0xffffffff)) &&
          (((uVar15 & 0x7fff) < 0x4000 &&
           (puVar9 = (undefined *)FUN_1803d4150(iVar11,(ulonglong)puVar9 & 0xffffffff),
           puVar9 != (undefined *)0x0)))) && (puVar9 != param_1)) {
        iVar11 = DAT_180c718e8;
        if (DAT_180c718e8 == 0) {
          UVar6 = GetTickCount64();
          if (UVar6 < DAT_180c718e0) {
            iVar11 = 0;
          }
          else {
            local_88 = &DAT_180903ac0;
            iVar11 = FUN_1805f68d0(&DAT_180903ac0);
            if (iVar11 != 0) goto LAB_1803ac750;
            if (DAT_180903b0c == 0x7fffffff) {
              DAT_180903b0c = 0x7ffffffe;
              goto LAB_1803ac725;
            }
            if ((DAT_180c718e8 == 0) && (DAT_180c718e0 <= UVar6)) {
              DAT_180c718e8 = FUN_1804174b0("CEntityInstance",0xa8a45978);
              if (DAT_180c718e8 == 0) {
                DAT_180c718e0 = UVar6 + 1000;
              }
              else {
                DAT_180c718e0 = 0xffffffffffffffff;
              }
            }
            iVar11 = DAT_180c718e8;
            FUN_1805f68fc(&DAT_180903ac0);
          }
        }
        lVar7 = FUN_18017ea70();
        *(int *)(lVar7 + 4) = *(int *)(lVar7 + 4) + 1;
        bVar1 = false;
        if (puVar9 + iVar11 != (undefined *)0x0) {
          local_88 = (undefined *)0x0;
          cVar4 = FUN_1804514f0(&local_88,puVar9 + iVar11,8);
          if (cVar4 == '\0') {
            bVar1 = false;
          }
          else {
            bVar1 = true;
          }
        }
        puVar13 = local_88;
        lVar7 = FUN_18017ea70();
        if (*(int *)(lVar7 + 4) != 0) {
          *(int *)(lVar7 + 4) = *(int *)(lVar7 + 4) + -1;
        }
        if ((bVar1) && (puVar13 != (undefined *)0x0)) {
          lVar7 = FUN_18017ea70();
          *(int *)(lVar7 + 4) = *(int *)(lVar7 + 4) + 1;
          local_88 = (undefined *)0x0;
          cVar4 = FUN_1804514f0(&local_88,puVar13,8);
          puVar14 = local_80;
          if (cVar4 != '\0') {
            puVar14 = local_88;
          }
          lVar7 = FUN_18017ea70();
          if (*(int *)(lVar7 + 4) != 0) {
            *(int *)(lVar7 + 4) = *(int *)(lVar7 + 4) + -1;
          }
          if ((cVar4 != '\0') && (puVar14 == puVar9)) {
            lVar7 = FUN_18017ea70();
            *(int *)(lVar7 + 4) = *(int *)(lVar7 + 4) + 1;
            bVar1 = false;
            if (puVar13 + 0x10 != (undefined *)0x0) {
              local_88 = (undefined *)((ulonglong)local_88 & 0xffffffff00000000);
              cVar4 = FUN_1804514f0(&local_88,puVar13 + 0x10,4);
              if (cVar4 == '\0') {
                bVar1 = false;
              }
              else {
                bVar1 = true;
              }
            }
            uVar3 = (uint)local_88;
            lVar7 = FUN_18017ea70();
            if (*(int *)(lVar7 + 4) != 0) {
              *(int *)(lVar7 + 4) = *(int *)(lVar7 + 4) + -1;
            }
            if ((bVar1) && (uVar3 == uVar15)) {
              iVar11 = DAT_180c718f0;
              if (DAT_180c718f0 == 0) {
                UVar6 = GetTickCount64();
                if (UVar6 < DAT_180c718f8) {
                  iVar11 = 0;
                }
                else {
                  local_88 = &DAT_180903b60;
                  iVar11 = FUN_1805f68d0(&DAT_180903b60);
                  if (iVar11 != 0) {
LAB_1803ac750:
                    /* WARNING: Subroutine does not return */
                    FUN_1805f6d44(5);
                  }
                  if (DAT_180903bac == 0x7fffffff) {
                    DAT_180903bac = 0x7ffffffe;
LAB_1803ac725:
                    /* WARNING: Subroutine does not return */
                    FUN_1805f6d44(6);
                  }
                  if ((DAT_180c718f0 == 0) && (DAT_180c718f8 <= UVar6)) {
                    DAT_180c718f0 = FUN_1804174b0("CEntityIdentity",0xbecfac7);
                    if (DAT_180c718f0 == 0) {
                      DAT_180c718f8 = UVar6 + 1000;
                    }
                    else {
                      DAT_180c718f8 = 0xffffffffffffffff;
                    }
                  }
                  iVar11 = DAT_180c718f0;
                  FUN_1805f68fc(&DAT_180903b60);
                }
              }
              lVar7 = FUN_18017ea70();
              *(int *)(lVar7 + 4) = *(int *)(lVar7 + 4) + 1;
              bVar1 = false;
              if (puVar13 + iVar11 != (undefined *)0x0) {
                local_88 = (undefined *)((ulonglong)local_88 & 0xffffffff00000000);
                cVar4 = FUN_1804514f0(&local_88,puVar13 + iVar11,4);
                if (cVar4 == '\0') {
                  bVar1 = false;
                }
                else {
                  bVar1 = true;
                }
              }
              iVar5 = (uint)local_88;
              lVar7 = FUN_18017ea70();
              iVar11 = *(int *)(lVar7 + 4);
              if (iVar11 != 0) {
                iVar11 = iVar11 + -1;
                *(int *)(lVar7 + 4) = iVar11;
              }
              if ((bVar1) && (iVar5 == 0)) {
                uVar8 = FUN_1803d3fa0(iVar11,puVar9);
                FUN_180454030(local_58,uVar8,0x60);
                pppppppcVar12 = (char *******)local_58;
                if (0xf < local_40) {
                  pppppppcVar12 = local_58[0];
                }
                if (pppppppcVar12 == (char *******)0x0) {
                  uVar15 = 0;
                }
                else {
                  uVar15 = 0x811c9dc5;
                  cVar4 = *(char *)pppppppcVar12;
                  while (cVar4 != '\0') {
                    pppppppcVar12 = (char *******)((longlong)pppppppcVar12 + 1);
                    uVar15 = ((int)cVar4 ^ uVar15) * 0x1000193;
                    cVar4 = *(char *)pppppppcVar12;
                  }
                }
                pcVar10 = (char *)thunk_FUN_1805f8070(&DAT_1807d0b40,
                                                                                                            
                                                  "candidates=%u valid=%u enabled_in_range=%u labels=%u camera=matrix"
                                                  ,uVar15);
                if (pcVar10 != "candidates=%u valid=%u enabled_in_range=%u labels=%u camera=matrix")
                {
                  iVar11 = DAT_180c718ec;
                  if (DAT_180c718ec == 0) {
                    UVar6 = GetTickCount64();
                    if (UVar6 < DAT_180c718c8) {
                      iVar11 = 0;
                    }
                    else {
                      local_88 = &DAT_1809039d0;
                      iVar11 = FUN_1805f68d0(&DAT_1809039d0);
                      if (iVar11 != 0) goto LAB_1803ac745;
                      if (DAT_180903a1c == 0x7fffffff) {
                        DAT_180903a1c = 0x7ffffffe;
                        goto LAB_1803ac73a;
                      }
                      if ((DAT_180c718ec == 0) && (DAT_180c718c8 <= UVar6)) {
                        DAT_180c718ec = FUN_1804174b0("C_BaseEntity",0x6d279c31);
                        if (DAT_180c718ec == 0) {
                          DAT_180c718c8 = UVar6 + 1000;
                        }
                        else {
                          DAT_180c718c8 = 0xffffffffffffffff;
                        }
                      }
                      iVar11 = DAT_180c718ec;
                      FUN_1805f68fc(&DAT_1809039d0);
                    }
                  }
                  lVar7 = FUN_18017ea70();
                  *(int *)(lVar7 + 4) = *(int *)(lVar7 + 4) + 1;
                  if (puVar9 + iVar11 == (undefined *)0x0) {
                    bVar1 = false;
                  }
                  else {
                    local_88 = (undefined *)((ulonglong)local_88 & 0xffffffff00000000);
                    cVar4 = FUN_1804514f0(&local_88,puVar9 + iVar11,4);
                    if (cVar4 == '\0') {
                      bVar1 = false;
                    }
                    else {
                      bVar1 = true;
                    }
                  }
                  iVar11 = (uint)local_88;
                  lVar7 = FUN_18017ea70();
                  if (*(int *)(lVar7 + 4) != 0) {
                    *(int *)(lVar7 + 4) = *(int *)(lVar7 + 4) + -1;
                  }
                  iVar5 = DAT_180c718b8;
                  if ((DAT_180c718b8 == 0) && (UVar6 = GetTickCount64(), DAT_180c718c0 <= UVar6)) {
                    local_88 = &DAT_180903a70;
                    iVar5 = FUN_1805f68d0(&DAT_180903a70);
                    if (iVar5 != 0) goto LAB_1803ac745;
                    if (DAT_180903abc == 0x7fffffff) {
                      DAT_180903abc = 0x7ffffffe;
                      goto LAB_1803ac73a;
                    }
                    if ((DAT_180c718b8 == 0) && (DAT_180c718c0 <= UVar6)) {
                      DAT_180c718b8 = FUN_1804174b0("C_BaseEntity",0x9d930423);
                      if (DAT_180c718b8 == 0) {
                        DAT_180c718c0 = UVar6 + 1000;
                      }
                      else {
                        DAT_180c718c0 = 0xffffffffffffffff;
                      }
                    }
                    iVar5 = DAT_180c718b8;
                    FUN_1805f68fc(&DAT_180903a70);
                  }
                  lVar7 = FUN_18017ea70();
                  *(int *)(lVar7 + 4) = *(int *)(lVar7 + 4) + 1;
                  bVar2 = false;
                  if (puVar9 + iVar5 != (undefined *)0x0) {
                    local_88 = (undefined *)0x0;
                    cVar4 = FUN_1804514f0(&local_88,puVar9 + iVar5,8);
                    if (cVar4 == '\0') {
                      bVar2 = false;
                    }
                    else {
                      bVar2 = true;
                    }
                  }
                  puVar9 = local_88;
                  lVar7 = FUN_18017ea70();
                  if (*(int *)(lVar7 + 4) != 0) {
                    *(int *)(lVar7 + 4) = *(int *)(lVar7 + 4) + -1;
                  }
                  puVar13 = (undefined *)0x0;
                  if (bVar2) {
                    puVar13 = puVar9;
                  }
                  if (((bVar1) && ((iVar11 + 1U & 0xfffffffe) == 0)) &&
                     (puVar13 != (undefined *)0x0)) {
                    iVar11 = DAT_180c718d8;
                    if (DAT_180c718d8 == 0) {
                      UVar6 = GetTickCount64();
                      if (UVar6 < DAT_180c718d0) {
                        iVar11 = 0;
                      }
                      else {
                        local_88 = &DAT_180903a20;
                        iVar11 = FUN_1805f68d0(&DAT_180903a20);
                        if (iVar11 != 0) goto LAB_1803ac745;
                        if (DAT_180903a6c == 0x7fffffff) {
                          DAT_180903a6c = 0x7ffffffe;
                          goto LAB_1803ac73a;
                        }
                        if ((DAT_180c718d8 == 0) && (DAT_180c718d0 <= UVar6)) {
                          DAT_180c718d8 = FUN_1804174b0("CGameSceneNode",0xb89c7c3f);
                          if (DAT_180c718d8 == 0) {
                            DAT_180c718d0 = UVar6 + 1000;
                          }
                          else {
                            DAT_180c718d0 = 0xffffffffffffffff;
                          }
                        }
                        iVar11 = DAT_180c718d8;
                        FUN_1805f68fc(&DAT_180903a20);
                      }
                    }
                    lVar7 = FUN_18017ea70();
                    *(int *)(lVar7 + 4) = *(int *)(lVar7 + 4) + 1;
                    bVar1 = false;
                    if (puVar13 + iVar11 != (undefined *)0x0) {
                      local_88 = (undefined *)0x0;
                      cVar4 = FUN_1804514f0(&local_88,puVar13 + iVar11,8);
                      if (cVar4 == '\0') {
                        bVar1 = false;
                      }
                      else {
                        bVar1 = true;
                      }
                    }
                    puVar9 = local_88;
                    lVar7 = FUN_18017ea70();
                    if (*(int *)(lVar7 + 4) != 0) {
                      *(int *)(lVar7 + 4) = *(int *)(lVar7 + 4) + -1;
                    }
                    if ((bVar1) && (puVar9 == (undefined *)0x0)) {
                      iVar11 = DAT_180c71890;
                      if (DAT_180c71890 == 0) {
                        UVar6 = GetTickCount64();
                        if (UVar6 < DAT_180c71898) {
                          iVar11 = 0;
                        }
                        else {
                          local_88 = &DAT_180903930;
                          iVar11 = FUN_1805f68d0(&DAT_180903930);
                          if (iVar11 != 0) goto LAB_1803ac745;
                          if (DAT_18090397c == 0x7fffffff) {
                            DAT_18090397c = 0x7ffffffe;
                            goto LAB_1803ac73a;
                          }
                          if ((DAT_180c71890 == 0) && (DAT_180c71898 <= UVar6)) {
                            DAT_180c71890 = FUN_1804174b0("C_BaseEntity",0x9d930423);
                            if (DAT_180c71890 == 0) {
                              DAT_180c71898 = UVar6 + 1000;
                            }
                            else {
                              DAT_180c71898 = 0xffffffffffffffff;
                            }
                          }
                          iVar11 = DAT_180c71890;
                          FUN_1805f68fc(&DAT_180903930);
                        }
                      }
                      lVar7 = FUN_18017ea70();
                      *(int *)(lVar7 + 4) = *(int *)(lVar7 + 4) + 1;
                      if (local_80 + iVar11 == (undefined *)0x0) {
                        bVar1 = false;
                        puVar9 = local_80;
                      }
                      else {
                        local_88 = (undefined *)0x0;
                        cVar4 = FUN_1804514f0(&local_88,local_80 + iVar11,8);
                        if (cVar4 == '\0') {
                          bVar1 = false;
                          puVar9 = local_80;
                        }
                        else {
                          bVar1 = true;
                          puVar9 = local_88;
                        }
                      }
                      lVar7 = FUN_18017ea70();
                      if (*(int *)(lVar7 + 4) != 0) {
                        *(int *)(lVar7 + 4) = *(int *)(lVar7 + 4) + -1;
                      }
                      puVar13 = (undefined *)0x0;
                      if (bVar1) {
                        puVar13 = puVar9;
                      }
                      iVar11 = DAT_180c7188c;
                      if (DAT_180c7188c == 0) {
                        UVar6 = GetTickCount64();
                        if (UVar6 < DAT_180c718b0) {
                          iVar11 = 0;
                        }
                        else {
                          local_80 = &DAT_180903980;
                          iVar11 = FUN_1805f68d0(&DAT_180903980);
                          if (iVar11 != 0) goto LAB_1803ac745;
                          if (DAT_1809039cc == 0x7fffffff) {
                            DAT_1809039cc = 0x7ffffffe;
                            goto LAB_1803ac73a;
                          }
                          if ((DAT_180c7188c == 0) && (DAT_180c718b0 <= UVar6)) {
                            DAT_180c7188c = FUN_1804174b0("CGameSceneNode",0xb89c7c3f);
                            if (DAT_180c7188c == 0) {
                              DAT_180c718b0 = UVar6 + 1000;
                            }
                            else {
                              DAT_180c718b0 = 0xffffffffffffffff;
                            }
                          }
                          iVar11 = DAT_180c7188c;
                          FUN_1805f68fc(&DAT_180903980);
                        }
                      }
                      lVar7 = FUN_18017ea70();
                      *(int *)(lVar7 + 4) = *(int *)(lVar7 + 4) + 1;
                      if (puVar13 + iVar11 == (undefined *)0x0) {
                        bVar1 = false;
                        puVar9 = local_80;
                      }
                      else {
                        local_88 = (undefined *)0x0;
                        cVar4 = FUN_1804514f0(&local_88,puVar13 + iVar11,8);
                        if (cVar4 == '\0') {
                          bVar1 = false;
                          puVar9 = local_80;
                        }
                        else {
                          bVar1 = true;
                          puVar9 = local_88;
                        }
                      }
                      lVar7 = FUN_18017ea70();
                      if (*(int *)(lVar7 + 4) != 0) {
                        *(int *)(lVar7 + 4) = *(int *)(lVar7 + 4) + -1;
                      }
                      if ((bVar1) && (puVar9 != (undefined *)0x0)) {
                        iVar11 = DAT_180c718a0;
                        if (DAT_180c718a0 == 0) {
                          UVar6 = GetTickCount64();
                          if (UVar6 < DAT_180c718a8) {
                            iVar11 = 0;
                          }
                          else {
                            local_80 = &DAT_1809038e0;
                            iVar11 = FUN_1805f68d0(&DAT_1809038e0);
                            if (iVar11 != 0) {
LAB_1803ac745:
                    /* WARNING: Subroutine does not return */
                              FUN_1805f6d44(5);
                            }
                            if (DAT_18090392c == 0x7fffffff) {
                              DAT_18090392c = 0x7ffffffe;
LAB_1803ac73a:
                    /* WARNING: Subroutine does not return */
                              FUN_1805f6d44(6);
                            }
                            if ((DAT_180c718a0 == 0) && (DAT_180c718a8 <= UVar6)) {
                              DAT_180c718a0 = FUN_1804174b0("CGameSceneNode",0x6b325da);
                              if (DAT_180c718a0 == 0) {
                                uVar16 = UVar6 + 1000;
                              }
                              DAT_180c718a8 = uVar16;
                            }
                            iVar11 = DAT_180c718a0;
                            FUN_1805f68fc(&DAT_1809038e0);
                          }
                        }
                        lVar7 = FUN_18017ea70();
                        *(int *)(lVar7 + 4) = *(int *)(lVar7 + 4) + 1;
                        if (puVar9 + iVar11 != (undefined *)0x0) {
                          local_88 = (undefined *)0x0;
                          FUN_1804514f0(&local_88,puVar9 + iVar11,8);
                        }
                        lVar7 = FUN_18017ea70();
                        if (*(int *)(lVar7 + 4) != 0) {
                          *(int *)(lVar7 + 4) = *(int *)(lVar7 + 4) + -1;
                        }
                      }
                    }
                  }
                }
                FUN_18015c010(local_58);
              }
            }
          }
        }
      }
    }
    FUN_18015c010(local_78);
  }
}



