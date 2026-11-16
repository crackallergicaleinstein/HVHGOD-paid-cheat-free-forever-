// FUN_1801aeca0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801aeca0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1801aeca0(undefined8 param_1,longlong param_2,ulonglong param_3,ulonglong param_4,
                  ulonglong param_5,int param_6)

{
  bool bVar1;
  longlong *******ppppppplVar2;
  char cVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong *******ppppppplVar6;
  int iVar7;
  ulonglong uVar8;
  longlong lVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  uint uVar12;
  longlong lVar13;
  uint uVar14;
  undefined8 uVar15;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qa_01;
  undefined8 extraout_XMM0_Qa_02;
  undefined8 extraout_XMM0_Qa_03;
  undefined1 auStack_2b8 [48];
  uint local_288 [4];
  uint local_278;
  ulonglong local_268 [2];
  ulonglong local_258 [2];
  ulonglong local_248;
  ulonglong local_238;
  uint local_230;
  ulonglong local_228;
  ulonglong local_220;
  ulonglong local_218;
  ulonglong local_210;
  ulonglong local_208;
  ulonglong local_200;
  uint uStack_1f8;
  uint uStack_1f4;
  longlong local_1e8;
  byte local_1e0;
  short local_1d1;
  ushort local_1c2;
  byte local_1c0;
  int local_1b5;
  int local_16e;
  ushort local_16a;
  char local_165;
  undefined1 local_158 [256];
  longlong *******local_58 [2];
  longlong local_48;
  ulonglong local_40;
  ulonglong local_38;
  
  local_38 = DAT_1808d5f00 ^ (ulonglong)auStack_2b8;
  local_228 = param_3;
  local_218 = param_4;
  lVar4 = FUN_18017ea70();
  *(int *)(lVar4 + 4) = *(int *)(lVar4 + 4) + 1;
  uVar11 = 0;
  if (param_2 == 0) {
    bVar1 = false;
    uVar8 = local_238;
  }
  else {
    local_268[0] = 0;
    cVar3 = FUN_1804514f0(local_268,param_2,8);
    if (cVar3 == '\0') {
      bVar1 = false;
      uVar8 = local_238;
    }
    else {
      bVar1 = true;
      uVar8 = local_268[0];
    }
  }
  lVar4 = FUN_18017ea70();
  if (*(int *)(lVar4 + 4) != 0) {
    *(int *)(lVar4 + 4) = *(int *)(lVar4 + 4) + -1;
  }
  uVar10 = 0;
  if (bVar1) {
    uVar10 = uVar8;
  }
  if (param_2 == 0) {
  }
  if (uVar10 == 0) {
  }
  if (param_3 == 0) {
  }
  if (param_4 < 0x83) {
  }
  if ((param_2 != DAT_1808d7e10) || (uVar10 != DAT_1808d7e18)) {
    DAT_1808d7e3c = 0;
    DAT_1808d7e40 = 0;
    _DAT_1808d7e48 = 0xffffffff;
    DAT_1808d7e50 = 0;
    _DAT_1808d7e58 = 0xffffffff;
    DAT_1808d7e60 = 0;
    _DAT_1808d7e68 = 0xffffffff;
    DAT_1808d7e10 = param_2;
    DAT_1808d7e18 = uVar10;
    FUN_18063ab10(local_158,0,0x100);
    FUN_1801a53f0(local_158);
    FUN_1801b4110(&DAT_1808d7e88,local_158);
    _eh_vector_destructor_iterator_(local_158,0x40,4,thunk_FUN_18015c010);
    _DAT_1808d7f88 = 0;
    DAT_1808d7e30 = 0;
    DAT_1808d7e38 = 0;
    DAT_1808d7e80 = 0;
    DAT_1808d7e78 = 0;
    _DAT_1808d7e70 = 0;
    DAT_1808d7e84 = 0;
    lVar4 = FUN_18017ea70();
    *(int *)(lVar4 + 4) = *(int *)(lVar4 + 4) + 1;
    if (uVar10 + 0x110 == 0) {
      bVar1 = false;
      uVar8 = local_238;
    }
    else {
      local_268[0] = 0;
      cVar3 = FUN_1804514f0(local_268,uVar10 + 0x110,8);
      if (cVar3 == '\0') {
        bVar1 = false;
        uVar8 = local_238;
      }
      else {
        bVar1 = true;
        uVar8 = local_268[0];
      }
    }
    lVar4 = FUN_18017ea70();
    if (*(int *)(lVar4 + 4) != 0) {
      *(int *)(lVar4 + 4) = *(int *)(lVar4 + 4) + -1;
    }
    uVar10 = 0;
    if (bVar1) {
      uVar10 = uVar8;
    }
    if (uVar10 < param_3) {
    }
    if (param_4 - 0x83 < uVar10 - param_3) {
    }
    FUN_1801b5120(&local_1e8,uVar10);
    if (local_165 == '\0') {
    }
    local_248 = 0x3b44da8b4c0a634c;
    local_1e8 = 0x3b44da8b4c0a634c - local_1e8;
    if (local_1e8 == 0) {
      local_1e8 = 0x89 - (ulonglong)local_1e0;
    }
    if (local_1e8 != 0) {
    }
    if (local_1d1 != -0x7e09) {
    }
    iVar7 = 0x8b4c - (uint)local_1c2;
    if (iVar7 == 0) {
      iVar7 = 0x91 - (uint)local_1c0;
    }
    if (iVar7 != 0) {
    }
    local_288[0] = 0x5e0c148;
    if (local_1b5 != 0x5e0c148) {
    }
    local_268[0] = CONCAT26(local_268[0]._6_2_,0xc31010448b49);
    local_16e = 0x10448b49 - local_16e;
    if (local_16e == 0) {
      local_16e = 0xc310 - (uint)local_16a;
    }
    if (local_16e != 0) {
    }
    lVar4 = FUN_18017ea70();
    *(int *)(lVar4 + 4) = *(int *)(lVar4 + 4) + 1;
    if (uVar10 + 9 == 0) {
      bVar1 = false;
      uVar14 = local_278;
    }
    else {
      local_288[0] = 0;
      cVar3 = FUN_1804514f0(local_288,uVar10 + 9,4);
      if (cVar3 == '\0') {
        bVar1 = false;
        uVar14 = local_278;
      }
      else {
        bVar1 = true;
        uVar14 = local_288[0];
      }
    }
    lVar4 = FUN_18017ea70();
    if (*(int *)(lVar4 + 4) != 0) {
      *(int *)(lVar4 + 4) = *(int *)(lVar4 + 4) + -1;
    }
    DAT_1808d7e20 = 0;
    if (bVar1) {
      DAT_1808d7e20 = uVar14;
    }
    lVar4 = FUN_18017ea70();
    *(int *)(lVar4 + 4) = *(int *)(lVar4 + 4) + 1;
    if (uVar10 + 0x19 == 0) {
      bVar1 = false;
      uVar14 = local_278;
    }
    else {
      local_288[0] = 0;
      cVar3 = FUN_1804514f0(local_288,uVar10 + 0x19,4);
      if (cVar3 == '\0') {
        bVar1 = false;
        uVar14 = local_278;
      }
      else {
        bVar1 = true;
        uVar14 = local_288[0];
      }
    }
    lVar4 = FUN_18017ea70();
    if (*(int *)(lVar4 + 4) != 0) {
      *(int *)(lVar4 + 4) = *(int *)(lVar4 + 4) + -1;
    }
    DAT_1808d7e24 = 0;
    if (bVar1) {
      DAT_1808d7e24 = uVar14;
    }
    lVar4 = FUN_18017ea70();
    *(int *)(lVar4 + 4) = *(int *)(lVar4 + 4) + 1;
    if (uVar10 + 0x29 == 0) {
      bVar1 = false;
      uVar14 = local_278;
    }
    else {
      local_288[0] = 0;
      cVar3 = FUN_1804514f0(local_288,uVar10 + 0x29,4);
      if (cVar3 == '\0') {
        bVar1 = false;
        uVar14 = local_278;
      }
      else {
        bVar1 = true;
        uVar14 = local_288[0];
      }
    }
    lVar4 = FUN_18017ea70();
    if (*(int *)(lVar4 + 4) != 0) {
      *(int *)(lVar4 + 4) = *(int *)(lVar4 + 4) + -1;
    }
    DAT_1808d7e28 = 0;
    if (bVar1) {
      DAT_1808d7e28 = uVar14;
    }
    if (((DAT_1808d7e20 - 0x100 < 0xff01) && (DAT_1808d7e24 == DAT_1808d7e20 + 4)) &&
       (DAT_1808d7e28 == DAT_1808d7e24 + 4)) {
      DAT_1808d7e3c = '\x01';
    }
    else {
      DAT_1808d7e3c = '\0';
    }
  }
  uVar8 = (ulonglong)DAT_1808d7e20;
  if (DAT_1808d7e3c == '\0') {
  }
  lVar4 = FUN_18017ea70();
  *(int *)(lVar4 + 4) = *(int *)(lVar4 + 4) + 1;
  if (uVar8 + param_2 == 0) {
    bVar1 = false;
    uVar14 = local_278;
  }
  else {
    local_288[0] = 0;
    cVar3 = FUN_1804514f0(local_288,uVar8 + param_2,4);
    if (cVar3 == '\0') {
      bVar1 = false;
      uVar14 = local_278;
    }
    else {
      bVar1 = true;
      uVar14 = local_288[0];
    }
  }
  lVar4 = FUN_18017ea70();
  if (*(int *)(lVar4 + 4) != 0) {
    *(int *)(lVar4 + 4) = *(int *)(lVar4 + 4) + -1;
  }
  uVar12 = 0;
  if (bVar1) {
    uVar12 = uVar14;
  }
  local_268[0] = CONCAT44(local_268[0]._4_4_,uVar12);
  uVar8 = (ulonglong)DAT_1808d7e24;
  lVar4 = FUN_18017ea70();
  *(int *)(lVar4 + 4) = *(int *)(lVar4 + 4) + 1;
  if (uVar8 + param_2 == 0) {
    bVar1 = false;
    uVar14 = local_278;
  }
  else {
    local_288[0] = 0;
    cVar3 = FUN_1804514f0(local_288,uVar8 + param_2,4);
    if (cVar3 == '\0') {
      bVar1 = false;
      uVar14 = local_278;
    }
    else {
      bVar1 = true;
      uVar14 = local_288[0];
    }
  }
  lVar4 = FUN_18017ea70();
  iVar7 = *(int *)(lVar4 + 4);
  if (iVar7 != 0) {
    iVar7 = iVar7 + -1;
    *(int *)(lVar4 + 4) = iVar7;
  }
  if ((!bVar1) || ((uVar14 & 0x7fffffff) == 0)) {
    uVar8 = (ulonglong)DAT_1808d7e28 + param_2;
  }
  else {
    uVar8 = (ulonglong)DAT_1808d7e28;
    lVar4 = FUN_18017ea70();
    *(int *)(lVar4 + 4) = *(int *)(lVar4 + 4) + 1;
    if (uVar8 + param_2 == 0) {
      bVar1 = false;
      uVar10 = local_238;
    }
    else {
      local_220 = 0;
      cVar3 = FUN_1804514f0(&local_220,uVar8 + param_2,8);
      if (cVar3 == '\0') {
        bVar1 = false;
        uVar10 = local_238;
      }
      else {
        bVar1 = true;
        uVar10 = local_220;
      }
    }
    lVar4 = FUN_18017ea70();
    iVar7 = *(int *)(lVar4 + 4);
    if (iVar7 != 0) {
      iVar7 = iVar7 + -1;
      *(int *)(lVar4 + 4) = iVar7;
    }
    uVar8 = 0;
    if (bVar1) {
      uVar8 = uVar10;
    }
  }
  if ((uVar8 == 0) || (0x7fff < uVar12 - 1)) {
    DAT_1808d7e40 = 0;
    _DAT_1808d7e48 = 0xffffffff;
    DAT_1808d7e50 = 0;
    _DAT_1808d7e58 = 0xffffffff;
    DAT_1808d7e60 = 0;
    _DAT_1808d7e68 = 0xffffffff;
  }
  local_238 = uVar8;
  uVar15 = FUN_1801b5220(iVar7,&DAT_1808d7e40,uVar8,uVar12);
  uVar15 = FUN_1801b5220(uVar15,&DAT_1808d7e50,uVar8,uVar12);
  uVar15 = FUN_1801b5220(uVar15,&DAT_1808d7e60,uVar8,uVar12);
  uVar10 = local_228;
  if (param_6 == 0) {
    cVar3 = FUN_1801b53f0(uVar15,&DAT_1808d7e40,local_228,local_218);
    uVar15 = extraout_XMM0_Qa;
    if (cVar3 == '\0') goto LAB_1801af33b;
    bVar1 = true;
LAB_1801af2b0:
    if ((DAT_1808d7e40 == 0) || ((!bVar1 && (DAT_1808d7e50 == 0)))) goto LAB_1801af2d0;
LAB_1801af795:
    cVar3 = FUN_1801b53f0(uVar15,&DAT_1808d7e40,uVar10,local_218);
    uVar15 = extraout_XMM0_Qa_03;
    if (cVar3 != '\0') {
      uVar11 = DAT_1808d7e40;
      goto LAB_1801af7d2;
    }
  }
  else {
LAB_1801af33b:
    if (param_6 == 2) {
      uVar5 = DAT_1808d7e60;
    }
    else {
      bVar1 = false;
      if (param_6 != 1) goto LAB_1801af2b0;
      uVar5 = DAT_1808d7e50;
    }
    if (uVar5 == 0) {
LAB_1801af2d0:
      uVar14 = DAT_1808d7e38;
      if (DAT_1808d7e30 <= param_5) {
        if ((int)uVar12 <= (int)DAT_1808d7e38) {
          DAT_1808d7e38 = 0;
        }
        local_288[0] = 0;
        if ((int)uVar14 < (int)uVar12) {
          local_288[0] = uVar14;
        }
        uVar14 = uVar12;
        if ((int)(local_288[0] + 0x100) < (int)uVar12) {
          uVar14 = local_288[0] + 0x100;
        }
        local_220 = CONCAT44(local_220._4_4_,uVar14);
        if ((int)local_288[0] < (int)uVar14) {
          do {
            uVar14 = local_288[0];
            lVar13 = (longlong)(int)local_288[0];
            lVar4 = FUN_18017ea70();
            *(int *)(lVar4 + 4) = *(int *)(lVar4 + 4) + 1;
            lVar4 = lVar13 * 0x20 + uVar8;
            if (lVar4 == 0) {
              bVar1 = false;
            }
            else {
              local_258[0] = local_258[0] & 0xffffffff00000000;
              cVar3 = FUN_1804514f0(local_258,lVar4,4);
              if (cVar3 == '\0') {
                bVar1 = false;
              }
              else {
                local_230 = (uint)local_258[0];
                bVar1 = true;
              }
            }
            uVar12 = local_230;
            lVar13 = FUN_18017ea70();
            if (*(int *)(lVar13 + 4) != 0) {
              *(int *)(lVar13 + 4) = *(int *)(lVar13 + 4) + -1;
            }
            uVar15 = extraout_XMM0_Qa_00;
            if (bVar1) {
              if (uVar12 != uVar14) {
                lVar13 = FUN_18017ea70();
                *(int *)(lVar13 + 4) = *(int *)(lVar13 + 4) + 1;
                if (lVar4 + 0x10 == 0) {
                  bVar1 = false;
                }
                else {
                  local_258[0] = 0;
                  cVar3 = FUN_1804514f0(local_258,lVar4 + 0x10,8);
                  if (cVar3 == '\0') {
                    bVar1 = false;
                  }
                  else {
                    local_210 = local_258[0];
                    bVar1 = true;
                  }
                }
                uVar10 = local_210;
                lVar13 = FUN_18017ea70();
                if (*(int *)(lVar13 + 4) != 0) {
                  *(int *)(lVar13 + 4) = *(int *)(lVar13 + 4) + -1;
                }
                if (bVar1) {
                  lVar13 = FUN_18017ea70();
                  *(int *)(lVar13 + 4) = *(int *)(lVar13 + 4) + 1;
                  if (uVar10 == 0) goto LAB_1801af45c;
                  local_258[0] = 0;
                  cVar3 = FUN_1804514f0(local_258,uVar10,8);
                  if (cVar3 == '\0') goto LAB_1801af45c;
                  local_248 = local_258[0];
                  bVar1 = true;
                }
                else {
                  uVar10 = 0;
                  lVar13 = FUN_18017ea70();
                  *(int *)(lVar13 + 4) = *(int *)(lVar13 + 4) + 1;
LAB_1801af45c:
                  bVar1 = false;
                }
                lVar13 = FUN_18017ea70();
                if (*(int *)(lVar13 + 4) != 0) {
                  *(int *)(lVar13 + 4) = *(int *)(lVar13 + 4) + -1;
                }
                uVar5 = 0;
                if (bVar1) {
                  uVar5 = local_248;
                }
                uVar15 = extraout_XMM0_Qa_01;
                if (uVar10 != 0) {
                  if (local_228 <= uVar5) {
                    if (uVar5 - local_228 < local_218) {
                      lVar13 = FUN_18017ea70();
                      *(int *)(lVar13 + 4) = *(int *)(lVar13 + 4) + 1;
                      if (uVar10 + 0x18 == 0) {
                        bVar1 = false;
                      }
                      else {
                        local_258[0] = 0;
                        cVar3 = FUN_1804514f0(local_258,uVar10 + 0x18,8);
                        if (cVar3 == '\0') {
                          bVar1 = false;
                        }
                        else {
                          local_208 = local_258[0];
                          bVar1 = true;
                        }
                      }
                      uVar5 = local_208;
                      lVar13 = FUN_18017ea70();
                      if (*(int *)(lVar13 + 4) != 0) {
                        *(int *)(lVar13 + 4) = *(int *)(lVar13 + 4) + -1;
                      }
                      uVar15 = extraout_XMM0_Qa_02;
                      if (bVar1) {
                        if (uVar5 == 0) {
                          FUN_1801b55b0(local_58,uVar10);
                          uVar8 = local_40;
                          lVar13 = local_48;
                          ppppppplVar2 = local_58[0];
                          ppppppplVar6 = (longlong *******)local_58;
                          if (0xf < local_40) {
                            ppppppplVar6 = local_58[0];
                          }
                          if (local_48 == 7) {
                            iVar7 = *(int *)ppppppplVar6 + -0x4f475343;
                            if ((iVar7 == 0) &&
                               (iVar7 = *(ushort *)((longlong)ppppppplVar6 + 4) - 0x7548, iVar7 == 0
                               )) {
                              iVar7 = *(byte *)((longlong)ppppppplVar6 + 6) - 100;
                            }
                            if (iVar7 != 0) goto LAB_1801af560;
LAB_1801af5da:
                            uStack_1f8 = local_288[0];
                            local_200 = uVar10;
                            lVar9 = FUN_18017ea70();
                            *(int *)(lVar9 + 4) = *(int *)(lVar9 + 4) + 1;
                            if (lVar4 + 0x18 == 0) {
                              bVar1 = false;
                            }
                            else {
                              local_258[0] = local_258[0] & 0xffffffff00000000;
                              cVar3 = FUN_1804514f0(local_258,lVar4 + 0x18,4);
                              if (cVar3 == '\0') {
                                bVar1 = false;
                              }
                              else {
                                local_278 = (uint)local_258[0];
                                bVar1 = true;
                              }
                            }
                            uVar14 = local_278;
                            lVar4 = FUN_18017ea70();
                            if (*(int *)(lVar4 + 4) != 0) {
                              *(int *)(lVar4 + 4) = *(int *)(lVar4 + 4) + -1;
                            }
                            uStack_1f4 = 0;
                            if (bVar1) {
                              uStack_1f4 = uVar14;
                            }
                            ppppppplVar6 = (longlong *******)local_58;
                            if (0xf < uVar8) {
                              ppppppplVar6 = ppppppplVar2;
                            }
                            if (lVar13 == 7) {
                              iVar7 = *(int *)ppppppplVar6 + -0x4f475343;
                              if ((iVar7 == 0) &&
                                 (iVar7 = *(ushort *)((longlong)ppppppplVar6 + 4) - 0x7548,
                                 iVar7 == 0)) {
                                iVar7 = *(byte *)((longlong)ppppppplVar6 + 6) - 100;
                              }
                              if (iVar7 == 0) {
                                _DAT_1808d7e48 = CONCAT44(uStack_1f4,uStack_1f8);
                                DAT_1808d7e40 = local_200;
                                goto LAB_1801af6dd;
                              }
                            }
                            ppppppplVar6 = (longlong *******)local_58;
                            if (0xf < uVar8) {
                              ppppppplVar6 = ppppppplVar2;
                            }
                            if (lVar13 == 0xc) {
                              lVar4 = (longlong)*ppppppplVar6 + -0x6e69614d4f475343;
                              if (lVar4 == 0) {
                                lVar4 = (ulonglong)*(uint *)(ppppppplVar6 + 1) - 0x756e654d;
                              }
                              if (lVar4 == 0) {
                                _DAT_1808d7e58 = CONCAT44(uStack_1f4,uStack_1f8);
                                DAT_1808d7e50 = local_200;
                                goto LAB_1801af6dd;
                              }
                            }
                            _DAT_1808d7e68 = CONCAT44(uStack_1f4,uStack_1f8);
                            DAT_1808d7e60 = local_200;
                          }
                          else {
LAB_1801af560:
                            ppppppplVar6 = (longlong *******)local_58;
                            if (0xf < local_40) {
                              ppppppplVar6 = local_58[0];
                            }
                            if (local_48 == 0xc) {
                              lVar9 = (longlong)*ppppppplVar6 + -0x6e69614d4f475343;
                              if (lVar9 == 0) {
                                lVar9 = (ulonglong)*(uint *)(ppppppplVar6 + 1) - 0x756e654d;
                              }
                              if (lVar9 == 0) goto LAB_1801af5da;
                            }
                            ppppppplVar6 = (longlong *******)local_58;
                            if (0xf < local_40) {
                              ppppppplVar6 = local_58[0];
                            }
                            if (local_48 == 10) {
                              lVar9 = (longlong)*ppppppplVar6 + -0x75706f504f475343;
                              if (lVar9 == 0) {
                                lVar9 = (ulonglong)*(ushort *)(ppppppplVar6 + 1) - 0x7370;
                              }
                              if (lVar9 == 0) goto LAB_1801af5da;
                            }
                          }
LAB_1801af6dd:
                          if (param_6 == 2) {
                            uVar8 = DAT_1808d7e60;
LAB_1801af708:
                            if (uVar8 != 0) {
                              uVar15 = FUN_18015c010(local_58);
                              uVar10 = local_228;
                              goto LAB_1801af741;
                            }
                          }
                          else if (DAT_1808d7e40 != 0) {
                            uVar8 = DAT_1808d7e50;
                            goto LAB_1801af708;
                          }
                          uVar15 = FUN_18015c010(local_58);
                          uVar8 = local_238;
                          uVar14 = local_288[0];
                        }
                      }
                    }
                  }
                }
              }
            }
            local_288[0] = uVar14 + 1;
          } while ((int)local_288[0] < (int)(uint)local_220);
          uVar10 = local_228;
          uVar12 = (uint)local_268[0];
          uVar14 = (uint)local_220;
        }
        if (uVar14 == uVar12) {
LAB_1801af741:
          uVar14 = 0;
        }
        DAT_1808d7e30 = param_5;
        if (uVar14 == 0) {
          DAT_1808d7e30 = param_5 + 1000;
        }
        DAT_1808d7e38 = uVar14;
      }
    }
    if (param_6 == 2) {
    }
    if (param_6 != 1) goto LAB_1801af795;
  }
  cVar3 = FUN_1801b53f0(uVar15,&DAT_1808d7e50,uVar10,local_218);
  if (cVar3 != '\0') {
    uVar11 = DAT_1808d7e50;
  }
LAB_1801af7d2:
  if (param_6 == 0) {
    _DAT_1808d7e70 = uVar11;
  }
}



