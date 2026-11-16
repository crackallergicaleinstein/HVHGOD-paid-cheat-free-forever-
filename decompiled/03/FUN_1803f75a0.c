// FUN_1803f75a0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1803f75a0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1803f75a0(longlong *param_1,longlong param_2,ulonglong param_3,ulonglong param_4,
                  ulonglong param_5,int param_6)

{
  bool bVar1;
  undefined4 uVar2;
  longlong *******ppppppplVar3;
  undefined1 uVar4;
  char cVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong *******ppppppplVar10;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  uint uVar16;
  undefined8 uVar17;
  undefined1 auStack_2b8 [48];
  uint local_288 [4];
  uint local_278;
  ulonglong local_270;
  uint local_268;
  undefined2 local_264;
  ulonglong local_258 [2];
  longlong local_248;
  ulonglong local_238;
  ulonglong local_230;
  uint local_228;
  undefined4 local_224;
  ulonglong local_220;
  ulonglong local_218;
  ulonglong local_210;
  uint uStack_208;
  undefined4 uStack_204;
  ulonglong local_200;
  longlong local_1f8;
  byte local_1f0;
  short local_1e1;
  ushort local_1d2;
  byte local_1d0;
  int local_1c5;
  int local_17e;
  ushort local_17a;
  char local_175;
  undefined1 local_168 [256];
  longlong *******local_68 [2];
  longlong local_58;
  ulonglong local_50;
  ulonglong local_48;
  
  local_48 = DAT_1808d5f00 ^ (ulonglong)auStack_2b8;
  local_230 = param_4;
  local_220 = param_3;
  lVar7 = FUN_18017ea70();
  *(int *)(lVar7 + 4) = *(int *)(lVar7 + 4) + 1;
  lVar7 = 0;
  if (param_2 == 0) {
    bVar1 = false;
    uVar15 = local_238;
  }
  else {
    local_258[0] = 0;
    cVar5 = FUN_1804514f0(local_258,param_2,8);
    if (cVar5 == '\0') {
      bVar1 = false;
      uVar15 = local_238;
    }
    else {
      bVar1 = true;
      uVar15 = local_258[0];
    }
  }
  lVar8 = FUN_18017ea70();
  if (*(int *)(lVar8 + 4) != 0) {
    *(int *)(lVar8 + 4) = *(int *)(lVar8 + 4) + -1;
  }
  uVar14 = 0;
  if (bVar1) {
    uVar14 = uVar15;
  }
  if (param_2 == 0) {
  }
  if (uVar14 == 0) {
  }
  if (param_3 == 0) {
  }
  if (local_230 < 0x83) {
  }
  if ((param_2 != *param_1) || (uVar14 != param_1[1])) {
    *param_1 = param_2;
    param_1[1] = uVar14;
    *(undefined1 *)((longlong)param_1 + 0x2c) = 0;
    param_1[6] = 0;
    *(undefined4 *)(param_1 + 7) = 0xffffffff;
    *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
    param_1[8] = 0;
    *(undefined4 *)(param_1 + 9) = 0xffffffff;
    *(undefined4 *)((longlong)param_1 + 0x4c) = 0;
    param_1[10] = 0;
    *(undefined4 *)(param_1 + 0xb) = 0xffffffff;
    *(undefined4 *)((longlong)param_1 + 0x5c) = 0;
    FUN_18063ab10(local_168,0,0x100);
    FUN_1801a53f0(local_168);
    FUN_1801b4110(param_1 + 0xf,local_168);
    _eh_vector_destructor_iterator_(local_168,0x40,4,thunk_FUN_18015c010);
    param_1[0x2f] = 0;
    param_1[4] = 0;
    *(undefined4 *)(param_1 + 5) = 0;
    *(undefined4 *)(param_1 + 0xe) = 0;
    param_1[0xd] = 0;
    param_1[0xc] = 0;
    *(undefined1 *)((longlong)param_1 + 0x74) = 0;
    lVar8 = FUN_18017ea70();
    *(int *)(lVar8 + 4) = *(int *)(lVar8 + 4) + 1;
    if (uVar14 + 0x110 == 0) {
      bVar1 = false;
      uVar15 = local_238;
    }
    else {
      local_258[0] = 0;
      cVar5 = FUN_1804514f0(local_258,uVar14 + 0x110,8);
      if (cVar5 == '\0') {
        bVar1 = false;
        uVar15 = local_238;
      }
      else {
        bVar1 = true;
        uVar15 = local_258[0];
      }
    }
    lVar8 = FUN_18017ea70();
    if (*(int *)(lVar8 + 4) != 0) {
      *(int *)(lVar8 + 4) = *(int *)(lVar8 + 4) + -1;
    }
    uVar14 = 0;
    if (bVar1) {
      uVar14 = uVar15;
    }
    if (uVar14 < param_3) {
    }
    if (local_230 - 0x83 < uVar14 - param_3) {
    }
    FUN_1801b5120(&local_1f8,uVar14);
    if (local_175 == '\0') {
    }
    local_248 = 0x3b44da8b4c0a634c;
    local_1f8 = 0x3b44da8b4c0a634c - local_1f8;
    if (local_1f8 == 0) {
      local_1f8 = 0x89 - (ulonglong)local_1f0;
    }
    if (local_1f8 != 0) {
    }
    if (local_1e1 != -0x7e09) {
    }
    iVar11 = 0x8b4c - (uint)local_1d2;
    if (iVar11 == 0) {
      iVar11 = 0x91 - (uint)local_1d0;
    }
    if (iVar11 != 0) {
    }
    local_288[0] = 0x5e0c148;
    if (local_1c5 != 0x5e0c148) {
    }
    local_268 = 0x10448b49;
    local_264 = 0xc310;
    local_17e = 0x10448b49 - local_17e;
    if (local_17e == 0) {
      local_17e = 0xc310 - (uint)local_17a;
    }
    if (local_17e != 0) {
    }
    lVar8 = FUN_18017ea70();
    *(int *)(lVar8 + 4) = *(int *)(lVar8 + 4) + 1;
    if (uVar14 + 9 == 0) {
      bVar1 = false;
      uVar16 = local_278;
    }
    else {
      local_288[0] = 0;
      cVar5 = FUN_1804514f0(local_288,uVar14 + 9,4);
      if (cVar5 == '\0') {
        bVar1 = false;
        uVar16 = local_278;
      }
      else {
        bVar1 = true;
        uVar16 = local_288[0];
      }
    }
    lVar8 = FUN_18017ea70();
    if (*(int *)(lVar8 + 4) != 0) {
      *(int *)(lVar8 + 4) = *(int *)(lVar8 + 4) + -1;
    }
    uVar6 = 0;
    if (bVar1) {
      uVar6 = uVar16;
    }
    *(uint *)(param_1 + 2) = uVar6;
    lVar8 = FUN_18017ea70();
    *(int *)(lVar8 + 4) = *(int *)(lVar8 + 4) + 1;
    if (uVar14 + 0x19 == 0) {
      bVar1 = false;
      uVar16 = local_278;
    }
    else {
      local_288[0] = 0;
      cVar5 = FUN_1804514f0(local_288,uVar14 + 0x19,4);
      if (cVar5 == '\0') {
        bVar1 = false;
        uVar16 = local_278;
      }
      else {
        bVar1 = true;
        uVar16 = local_288[0];
      }
    }
    lVar8 = FUN_18017ea70();
    if (*(int *)(lVar8 + 4) != 0) {
      *(int *)(lVar8 + 4) = *(int *)(lVar8 + 4) + -1;
    }
    uVar6 = 0;
    if (bVar1) {
      uVar6 = uVar16;
    }
    *(uint *)((longlong)param_1 + 0x14) = uVar6;
    lVar8 = FUN_18017ea70();
    *(int *)(lVar8 + 4) = *(int *)(lVar8 + 4) + 1;
    if (uVar14 + 0x29 == 0) {
      bVar1 = false;
      uVar16 = local_278;
    }
    else {
      local_288[0] = 0;
      cVar5 = FUN_1804514f0(local_288,uVar14 + 0x29,4);
      if (cVar5 == '\0') {
        bVar1 = false;
        uVar16 = local_278;
      }
      else {
        bVar1 = true;
        uVar16 = local_288[0];
      }
    }
    lVar8 = FUN_18017ea70();
    if (*(int *)(lVar8 + 4) != 0) {
      *(int *)(lVar8 + 4) = *(int *)(lVar8 + 4) + -1;
    }
    uVar6 = 0;
    if (bVar1) {
      uVar6 = uVar16;
    }
    *(uint *)(param_1 + 3) = uVar6;
    if ((((int)param_1[2] - 0x100U < 0xff01) &&
        (*(int *)((longlong)param_1 + 0x14) == (int)param_1[2] + 4)) &&
       (uVar6 == *(int *)((longlong)param_1 + 0x14) + 4U)) {
      uVar4 = 1;
    }
    else {
      uVar4 = 0;
    }
    *(undefined1 *)((longlong)param_1 + 0x2c) = uVar4;
  }
  if (*(char *)((longlong)param_1 + 0x2c) == '\0') {
  }
  uVar16 = *(uint *)(param_1 + 2);
  lVar8 = FUN_18017ea70();
  *(int *)(lVar8 + 4) = *(int *)(lVar8 + 4) + 1;
  if ((ulonglong)uVar16 + param_2 == 0) {
    bVar1 = false;
    uVar16 = local_278;
  }
  else {
    local_288[0] = 0;
    cVar5 = FUN_1804514f0(local_288,(ulonglong)uVar16 + param_2,4);
    if (cVar5 == '\0') {
      bVar1 = false;
      uVar16 = local_278;
    }
    else {
      bVar1 = true;
      uVar16 = local_288[0];
    }
  }
  lVar8 = FUN_18017ea70();
  if (*(int *)(lVar8 + 4) != 0) {
    *(int *)(lVar8 + 4) = *(int *)(lVar8 + 4) + -1;
  }
  local_278 = 0;
  if (bVar1) {
    local_278 = uVar16;
  }
  uVar16 = *(uint *)((longlong)param_1 + 0x14);
  lVar8 = FUN_18017ea70();
  *(int *)(lVar8 + 4) = *(int *)(lVar8 + 4) + 1;
  lVar8 = (ulonglong)uVar16 + param_2;
  if (lVar8 == 0) {
    bVar1 = false;
    uVar16 = local_278;
  }
  else {
    local_288[0] = 0;
    cVar5 = FUN_1804514f0(local_288,lVar8,4);
    if (cVar5 == '\0') {
      bVar1 = false;
      uVar16 = local_278;
    }
    else {
      bVar1 = true;
      uVar16 = local_288[0];
    }
  }
  lVar8 = FUN_18017ea70();
  iVar11 = *(int *)(lVar8 + 4);
  if (iVar11 != 0) {
    iVar11 = iVar11 + -1;
    *(int *)(lVar8 + 4) = iVar11;
  }
  uVar15 = (ulonglong)*(uint *)(param_1 + 3) + param_2;
  local_258[0] = uVar15;
  if ((bVar1) && ((uVar16 & 0x7fffffff) != 0)) {
    lVar8 = FUN_18017ea70();
    *(int *)(lVar8 + 4) = *(int *)(lVar8 + 4) + 1;
    if (uVar15 == 0) {
      bVar1 = false;
      uVar15 = local_238;
    }
    else {
      local_258[0] = 0;
      cVar5 = FUN_1804514f0(local_258,uVar15,8);
      if (cVar5 == '\0') {
        bVar1 = false;
        uVar15 = local_238;
      }
      else {
        bVar1 = true;
        uVar15 = local_258[0];
      }
    }
    lVar8 = FUN_18017ea70();
    iVar11 = *(int *)(lVar8 + 4);
    if (iVar11 != 0) {
      iVar11 = iVar11 + -1;
      *(int *)(lVar8 + 4) = iVar11;
    }
    local_258[0] = 0;
    if (bVar1) {
      local_258[0] = uVar15;
    }
  }
  uVar15 = local_258[0];
  uVar16 = local_278;
  if ((local_258[0] == 0) || (0x7fff < local_278 - 1)) {
    param_1[6] = 0;
    *(undefined4 *)(param_1 + 7) = 0xffffffff;
    *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
    param_1[8] = 0;
    *(undefined4 *)(param_1 + 9) = 0xffffffff;
    *(undefined4 *)((longlong)param_1 + 0x4c) = 0;
    param_1[10] = 0;
    *(undefined4 *)(param_1 + 0xb) = 0xffffffff;
    *(undefined4 *)((longlong)param_1 + 0x5c) = 0;
  }
  uVar17 = FUN_1801b5220(iVar11,param_1 + 6,local_258[0],local_278);
  uVar17 = FUN_1801b5220(uVar17,param_1 + 8,uVar15,uVar16);
  FUN_1801b5220(uVar17,param_1 + 10,uVar15,uVar16);
  if ((param_6 == 0) &&
     (cVar5 = FUN_1803f8d60(param_1,param_1 + 6,local_220,local_230), cVar5 != '\0')) {
    bVar1 = true;
LAB_1803f7b5d:
    if ((param_1[6] == 0) || ((!bVar1 && (param_1[8] == 0)))) goto LAB_1803f7b77;
LAB_1803f805c:
    cVar5 = FUN_1803f8d60(param_1,param_1 + 6,local_220,local_230);
    if (cVar5 != '\0') {
      lVar7 = param_1[6];
      goto LAB_1803f8049;
    }
  }
  else {
    if (param_6 == 2) {
      lVar8 = param_1[10];
    }
    else {
      bVar1 = false;
      if (param_6 != 1) goto LAB_1803f7b5d;
      lVar8 = param_1[8];
    }
    if (lVar8 == 0) {
LAB_1803f7b77:
      if ((ulonglong)param_1[4] <= param_5) {
        local_288[0] = *(uint *)(param_1 + 5);
        if ((int)uVar16 <= (int)local_288[0]) {
          *(undefined4 *)(param_1 + 5) = 0;
          local_288[0] = 0;
        }
        local_268 = uVar16;
        if ((int)(local_288[0] + 0x100) < (int)uVar16) {
          local_268 = local_288[0] + 0x100;
        }
        if ((int)local_288[0] < (int)local_268) {
          do {
            uVar16 = local_288[0];
            lVar13 = (longlong)(int)local_288[0] * 0x20 + uVar15;
            local_248 = lVar13;
            lVar8 = FUN_18017ea70();
            *(int *)(lVar8 + 4) = *(int *)(lVar8 + 4) + 1;
            if (lVar13 == 0) {
              bVar1 = false;
            }
            else {
              local_270 = local_270 & 0xffffffff00000000;
              cVar5 = FUN_1804514f0(&local_270,lVar13,4);
              if (cVar5 == '\0') {
                bVar1 = false;
              }
              else {
                local_228 = (uint)local_270;
                bVar1 = true;
              }
            }
            uVar6 = local_228;
            lVar8 = FUN_18017ea70();
            if (*(int *)(lVar8 + 4) != 0) {
              *(int *)(lVar8 + 4) = *(int *)(lVar8 + 4) + -1;
            }
            if (bVar1) {
              if (uVar6 != uVar16) {
                lVar8 = FUN_18017ea70();
                *(int *)(lVar8 + 4) = *(int *)(lVar8 + 4) + 1;
                if (lVar13 + 0x10 == 0) {
                  bVar1 = false;
                }
                else {
                  local_270 = 0;
                  cVar5 = FUN_1804514f0(&local_270,lVar13 + 0x10,8);
                  if (cVar5 == '\0') {
                    bVar1 = false;
                  }
                  else {
                    local_218 = local_270;
                    bVar1 = true;
                  }
                }
                uVar14 = local_218;
                lVar8 = FUN_18017ea70();
                if (*(int *)(lVar8 + 4) != 0) {
                  *(int *)(lVar8 + 4) = *(int *)(lVar8 + 4) + -1;
                }
                if (bVar1) {
                  lVar8 = FUN_18017ea70();
                  *(int *)(lVar8 + 4) = *(int *)(lVar8 + 4) + 1;
                  if (uVar14 == 0) goto LAB_1803f7d12;
                  local_270 = 0;
                  cVar5 = FUN_1804514f0(&local_270,uVar14,8);
                  if (cVar5 == '\0') goto LAB_1803f7d12;
                  local_200 = local_270;
                  bVar1 = true;
                }
                else {
                  uVar14 = 0;
                  lVar8 = FUN_18017ea70();
                  *(int *)(lVar8 + 4) = *(int *)(lVar8 + 4) + 1;
LAB_1803f7d12:
                  bVar1 = false;
                }
                lVar8 = FUN_18017ea70();
                if (*(int *)(lVar8 + 4) != 0) {
                  *(int *)(lVar8 + 4) = *(int *)(lVar8 + 4) + -1;
                }
                uVar9 = 0;
                if (bVar1) {
                  uVar9 = local_200;
                }
                if (uVar14 != 0) {
                  if (local_220 <= uVar9) {
                    if (uVar9 - local_220 < local_230) {
                      lVar8 = FUN_18017ea70();
                      *(int *)(lVar8 + 4) = *(int *)(lVar8 + 4) + 1;
                      if (uVar14 + 0x18 == 0) {
                        bVar1 = false;
                      }
                      else {
                        local_270 = 0;
                        cVar5 = FUN_1804514f0(&local_270,uVar14 + 0x18,8);
                        if (cVar5 == '\0') {
                          bVar1 = false;
                        }
                        else {
                          local_238 = local_270;
                          bVar1 = true;
                        }
                      }
                      uVar9 = local_238;
                      lVar8 = FUN_18017ea70();
                      if (*(int *)(lVar8 + 4) != 0) {
                        *(int *)(lVar8 + 4) = *(int *)(lVar8 + 4) + -1;
                      }
                      if (bVar1) {
                        if (uVar9 == 0) {
                          FUN_1801b55b0(local_68,uVar14);
                          uVar15 = local_50;
                          lVar13 = local_58;
                          ppppppplVar3 = local_68[0];
                          lVar8 = local_248;
                          ppppppplVar10 = (longlong *******)local_68;
                          if (0xf < local_50) {
                            ppppppplVar10 = local_68[0];
                          }
                          if (local_58 == 7) {
                            iVar11 = *(int *)ppppppplVar10 + -0x4f475343;
                            if ((iVar11 == 0) &&
                               (iVar11 = *(ushort *)((longlong)ppppppplVar10 + 4) - 0x7548,
                               iVar11 == 0)) {
                              iVar11 = *(byte *)((longlong)ppppppplVar10 + 6) - 100;
                            }
                            if (iVar11 != 0) goto LAB_1803f7e1a;
LAB_1803f7e94:
                            uStack_208 = local_288[0];
                            local_210 = uVar14;
                            lVar12 = FUN_18017ea70();
                            *(int *)(lVar12 + 4) = *(int *)(lVar12 + 4) + 1;
                            if (lVar8 + 0x18 == 0) {
                              bVar1 = false;
                            }
                            else {
                              local_270 = local_270 & 0xffffffff00000000;
                              cVar5 = FUN_1804514f0(&local_270,lVar8 + 0x18,4);
                              if (cVar5 == '\0') {
                                bVar1 = false;
                              }
                              else {
                                local_224 = (uint)local_270;
                                bVar1 = true;
                              }
                            }
                            uVar2 = local_224;
                            lVar8 = FUN_18017ea70();
                            if (*(int *)(lVar8 + 4) != 0) {
                              *(int *)(lVar8 + 4) = *(int *)(lVar8 + 4) + -1;
                            }
                            uStack_204 = 0;
                            if (bVar1) {
                              uStack_204 = uVar2;
                            }
                            ppppppplVar10 = (longlong *******)local_68;
                            if (0xf < uVar15) {
                              ppppppplVar10 = ppppppplVar3;
                            }
                            if (lVar13 == 7) {
                              iVar11 = *(int *)ppppppplVar10 + -0x4f475343;
                              if ((iVar11 == 0) &&
                                 (iVar11 = *(ushort *)((longlong)ppppppplVar10 + 4) - 0x7548,
                                 iVar11 == 0)) {
                                iVar11 = *(byte *)((longlong)ppppppplVar10 + 6) - 100;
                              }
                              if (iVar11 == 0) {
                                param_1[6] = local_210;
                                param_1[7] = CONCAT44(uStack_204,uStack_208);
                                goto LAB_1803f7f92;
                              }
                            }
                            ppppppplVar10 = (longlong *******)local_68;
                            if (0xf < uVar15) {
                              ppppppplVar10 = ppppppplVar3;
                            }
                            if (lVar13 == 0xc) {
                              lVar8 = (longlong)*ppppppplVar10 + -0x6e69614d4f475343;
                              if (lVar8 == 0) {
                                lVar8 = (ulonglong)*(uint *)(ppppppplVar10 + 1) - 0x756e654d;
                              }
                              if (lVar8 == 0) {
                                param_1[8] = local_210;
                                param_1[9] = CONCAT44(uStack_204,uStack_208);
                                goto LAB_1803f7f92;
                              }
                            }
                            param_1[10] = local_210;
                            param_1[0xb] = CONCAT44(uStack_204,uStack_208);
                          }
                          else {
LAB_1803f7e1a:
                            ppppppplVar10 = (longlong *******)local_68;
                            if (0xf < local_50) {
                              ppppppplVar10 = local_68[0];
                            }
                            if (local_58 == 0xc) {
                              lVar12 = (longlong)*ppppppplVar10 + -0x6e69614d4f475343;
                              if (lVar12 == 0) {
                                lVar12 = (ulonglong)*(uint *)(ppppppplVar10 + 1) - 0x756e654d;
                              }
                              if (lVar12 == 0) goto LAB_1803f7e94;
                            }
                            ppppppplVar10 = (longlong *******)local_68;
                            if (0xf < local_50) {
                              ppppppplVar10 = local_68[0];
                            }
                            if (local_58 == 10) {
                              lVar12 = (longlong)*ppppppplVar10 + -0x75706f504f475343;
                              if (lVar12 == 0) {
                                lVar12 = (ulonglong)*(ushort *)(ppppppplVar10 + 1) - 0x7370;
                              }
                              if (lVar12 == 0) goto LAB_1803f7e94;
                            }
                          }
LAB_1803f7f92:
                          if (param_6 == 2) {
                            lVar8 = param_1[10];
LAB_1803f7fae:
                            if (lVar8 != 0) {
                              FUN_18015c010(local_68);
                              goto LAB_1803f7fe5;
                            }
                          }
                          else if (param_1[6] != 0) {
                            lVar8 = param_1[8];
                            goto LAB_1803f7fae;
                          }
                          FUN_18015c010(local_68);
                          uVar15 = local_258[0];
                          uVar16 = local_288[0];
                        }
                      }
                    }
                  }
                }
              }
            }
            local_288[0] = uVar16 + 1;
          } while ((int)local_288[0] < (int)local_268);
          uVar16 = local_278;
        }
        uVar6 = local_268;
        if (local_268 == uVar16) {
LAB_1803f7fe5:
          uVar6 = 0;
        }
        *(uint *)(param_1 + 5) = uVar6;
        if (uVar6 == 0) {
          param_5 = param_5 + 1000;
        }
        param_1[4] = param_5;
      }
    }
    if (param_6 == 2) {
    }
    if (param_6 != 1) goto LAB_1803f805c;
  }
  cVar5 = FUN_1803f8d60(param_1,param_1 + 8,local_220,local_230);
  if (cVar5 != '\0') {
    lVar7 = param_1[8];
  }
LAB_1803f8049:
  if (param_6 == 0) {
    param_1[0xc] = lVar7;
  }
}



