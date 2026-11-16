// FUN_18057af40 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18057af40 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18057af40(longlong *param_1,uint *param_2,uint param_3,uint *param_4,char param_5)

{
  int *piVar1;
  longlong lVar2;
  bool bVar3;
  short sVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  longlong *plVar8;
  longlong *plVar9;
  ulonglong *puVar10;
  undefined8 *puVar11;
  longlong lVar12;
  longlong lVar13;
  ulonglong uVar14;
  uint *puVar15;
  int iVar16;
  ulonglong uVar17;
  char cVar18;
  undefined1 auStack_158 [32];
  uint *local_138;
  uint *local_130;
  longlong *local_128;
  char local_118 [8];
  longlong *local_110;
  uint *local_108;
  longlong local_100;
  undefined8 *local_f8;
  longlong local_f0;
  longlong *local_e8;
  longlong *local_e0;
  char local_d8;
  byte local_d7;
  char acStack_d6 [61];
  char local_99;
  char local_8e;
  char local_86;
  byte local_85;
  undefined1 local_84;
  undefined1 local_83;
  undefined1 local_82;
  ulonglong local_58;
  
  local_58 = DAT_1808d5f00 ^ (ulonglong)auStack_158;
  local_e8 = (longlong *)0x0;
  local_f0 = 0;
  local_f8 = (undefined8 *)0x0;
  local_100 = 0;
  if ((int)param_3 < 1) {
    param_3 = -(-param_3 & 0x7fffffff);
  }
  else {
    param_3 = param_3 & 0x7fffffff;
  }
  if (param_2 == (uint *)0x0) {
  }
  if (((*param_2 & 2) == 0) || (*(longlong *)(param_2 + 8) == 0)) {
    cVar18 = '\0';
  }
  else {
    cVar18 = '\x01';
  }
  local_118[0] = cVar18;
  local_110 = param_1;
  local_108 = param_4;
  uVar5 = FUN_180577f50(param_1,param_2,&local_f8);
  puVar11 = local_f8;
  if (uVar5 == 0) {
    if ((param_4 == (uint *)0x0) && (-1 < (int)param_3)) {
      goto LAB_18057b95c;
    }
    lVar12 = *param_1;
    local_f0 = lVar12;
    if (((*param_2 & 8) == 0) || (plVar8 = *(longlong **)(param_2 + 10), plVar8 == (longlong *)0x0))
    {
      plVar8 = param_1 + 3;
      uVar5 = 0xb;
      local_e0 = plVar8 + *(uint *)((longlong)param_1 + 0x14);
      if (local_e0 <= plVar8) goto LAB_18057b77c;
      do {
        plVar9 = (longlong *)*plVar8;
        if ((*(byte *)*plVar9 & 1) != 0) {
          uVar7 = 0;
          puVar15 = (uint *)0x0;
          if ((*param_2 & 0x10) != 0) {
            uVar7 = param_2[0xc];
            puVar15 = *(uint **)(param_2 + 0xe);
          }
          local_128 = &local_100;
          local_138 = (uint *)CONCAT44(local_138._4_4_,uVar7);
          local_130 = puVar15;
          local_e8 = plVar9;
          uVar5 = FUN_18057c410(plVar9,&local_f8,local_118,param_3);
          puVar11 = local_f8;
          if (uVar5 == 0) {
            lVar12 = local_f0;
            goto LAB_18057b210;
          }
          if (param_5 == '\0') {
            param_1 = local_110;
          }
          else {
            iVar6 = strcmp(*(char **)(*(longlong *)*plVar8 + 8),"truetype");
            if ((iVar6 == 0) && ((char)uVar5 == -0x72)) {
              if ((code *)puVar11[4] != (code *)0x0) {
                iVar6 = (*(code *)puVar11[4])(puVar11,0,0,0);
                uVar5 = -(uint)(iVar6 != 0) & 0x55;
                if (iVar6 != 0) {
                  param_1 = local_110;
                  cVar18 = local_118[0];
                  goto LAB_18057b781;
                }
              }
              param_1 = local_110;
              local_130 = local_108;
              *(undefined4 *)((longlong)puVar11 + 0xc) = 0;
              local_138 = puVar15;
              uVar5 = FUN_18057c640(local_110,puVar11,param_3,uVar7);
              cVar18 = local_118[0];
              if (uVar5 == 0) {
                lVar12 = puVar11[6];
                if ((code *)puVar11[5] != (code *)0x0) {
                  (*(code *)puVar11[5])(puVar11);
                }
                goto LAB_18057b940;
              }
            }
            else {
              param_1 = local_110;
            }
          }
          if ((char)uVar5 != '\x02') break;
        }
        plVar8 = plVar8 + 1;
      } while (plVar8 < local_e0);
      cVar18 = local_118[0];
      goto LAB_18057b781;
    }
    local_e8 = plVar8;
    if ((*(byte *)*plVar8 & 1) == 0) goto LAB_18057b95c;
    uVar5 = 0;
    local_130 = (uint *)0x0;
    if ((*param_2 & 0x10) != 0) {
      uVar5 = param_2[0xc];
      local_130 = *(uint **)(param_2 + 0xe);
    }
    local_128 = &local_100;
    local_138 = (uint *)CONCAT44(local_138._4_4_,uVar5);
    iVar6 = FUN_18057c410(plVar8,&local_f8,local_118,param_3);
    if (iVar6 != 0) {
      puVar11 = local_f8;
      cVar18 = local_118[0];
      goto LAB_18057b95c;
    }
LAB_18057b210:
    plVar9 = (longlong *)0x0;
    plVar8 = (longlong *)(**(code **)(lVar12 + 8))(lVar12,0x18);
    lVar13 = local_100;
    if (plVar8 != (longlong *)0x0) {
      plVar8[2] = local_100;
      lVar12 = *(longlong *)(local_100 + 0x90);
      if ((undefined8 *)(lVar12 + 0x20) != (undefined8 *)0x0) {
        lVar2 = *(longlong *)(lVar12 + 0x28);
        plVar8[1] = 0;
        *plVar8 = lVar2;
        if (lVar2 == 0) {
          *(undefined8 *)(lVar12 + 0x20) = plVar8;
        }
        else {
          *(longlong **)(lVar2 + 8) = plVar8;
        }
        *(longlong **)(lVar12 + 0x28) = plVar8;
      }
      if ((int)param_3 < 0) {
LAB_18057b519:
        uVar14 = 0;
        if ((*(byte *)(lVar13 + 8) & 1) != 0) {
          sVar4 = *(short *)(lVar13 + 0x6e);
          if (sVar4 < 0) {
            sVar4 = -sVar4;
            *(short *)(lVar13 + 0x6e) = sVar4;
          }
          if ((*(byte *)(lVar13 + 8) & 0x20) == 0) {
            *(short *)(lVar13 + 0x72) = sVar4;
          }
        }
        if (((*(byte *)(lVar13 + 8) & 2) != 0) && (0 < *(int *)(lVar13 + 0x28))) {
          uVar17 = uVar14;
          do {
            lVar12 = *(longlong *)(lVar13 + 0x30);
            sVar4 = *(short *)(uVar17 + lVar12);
            if (sVar4 < 0) {
              sVar4 = -sVar4;
              *(short *)(uVar17 + lVar12) = sVar4;
            }
            iVar6 = *(int *)(uVar17 + 8 + lVar12);
            if (iVar6 < 0) {
              iVar6 = -iVar6;
              *(int *)(uVar17 + 8 + lVar12) = iVar6;
            }
            iVar16 = *(int *)(uVar17 + 0xc + lVar12);
            if (iVar16 < 0) {
              iVar16 = -iVar16;
              *(int *)(uVar17 + 0xc + lVar12) = iVar16;
            }
            if (((sVar4 < 0) || (iVar6 < 0)) || (iVar16 < 0)) {
              *(undefined8 *)(uVar17 + lVar12) = 0;
              *(undefined8 *)(uVar17 + 8 + lVar12) = 0;
            }
            uVar5 = (int)uVar14 + 1;
            uVar14 = (ulonglong)uVar5;
            uVar17 = uVar17 + 0x10;
          } while ((int)uVar5 < *(int *)(lVar13 + 0x28));
        }
        puVar11 = *(undefined8 **)(lVar13 + 0xd0);
        *puVar11 = 0x10000;
        *(undefined4 *)(puVar11 + 1) = 0;
        *(undefined8 *)((longlong)puVar11 + 0xc) = 0x10000;
        *(undefined4 *)((longlong)puVar11 + 0x14) = 0;
        *(undefined4 *)(puVar11 + 0xc) = 1;
        *(undefined1 *)(puVar11 + 0xb) = 0xff;
        if (local_108 != (uint *)0x0) {
          *(longlong *)local_108 = lVar13;
        }
        if (*(longlong *)(lVar13 + 0x90) == 0) {
        }
        piVar1 = (int *)(*(longlong *)(lVar13 + 0xd0) + 0x60);
        *piVar1 = *piVar1 + -1;
        if (0 < *(int *)(*(longlong *)(lVar13 + 0xd0) + 0x60)) {
        }
        plVar8 = *(longlong **)(lVar13 + 0x90);
        lVar12 = plVar8[2];
        if (plVar8 + 4 == (longlong *)0x0) {
        }
        plVar9 = (longlong *)plVar8[4];
        while( true ) {
          if (plVar9 == (longlong *)0x0) {
          }
          if (plVar9[2] == lVar13) break;
          plVar9 = (longlong *)plVar9[1];
        }
      }
      else {
        lVar12 = *(longlong *)(local_100 + 0x90);
        if (lVar12 != 0) {
          local_100 = *(longlong *)(lVar12 + 0x10);
          iVar6 = *(int *)(*(longlong *)(lVar12 + 0x18) + 0x40);
          bVar3 = false;
          if (iVar6 < 1) {
            if (-1 < iVar6) goto LAB_18057b2d7;
          }
          else {
            plVar9 = (longlong *)(**(code **)(local_100 + 8))(local_100,iVar6);
            bVar3 = true;
            if (plVar9 == (longlong *)0x0) {
LAB_18057b2d7:
              if (bVar3) goto LAB_18057b672;
            }
            else {
              FUN_18063ab10(plVar9,0,(longlong)iVar6);
            }
            plVar9[1] = lVar13;
            local_e0 = *(longlong **)(lVar13 + 0x90);
            local_e8 = (longlong *)local_e0[3];
            lVar12 = local_e0[2];
            *plVar9 = local_e0[1];
            puVar10 = (ulonglong *)(**(code **)(lVar12 + 8))(lVar12,0x38);
            if (puVar10 != (ulonglong *)0x0) {
              *puVar10 = 0;
              puVar10[1] = 0;
              puVar10[2] = 0;
              puVar10[3] = 0;
              iVar6 = 0;
              puVar10[4] = 0;
              puVar10[5] = 0;
              puVar10[6] = 0;
              plVar9[0x1e] = (longlong)puVar10;
              if ((*(uint *)*local_e0 & 0x200) == 0) {
                local_e0 = (longlong *)(**(code **)(lVar12 + 8))(lVar12,0xb0);
                if (local_e0 == (longlong *)0x0) {
                  iVar6 = 0x40;
                }
                else {
                  FUN_18063ab10(local_e0 + 1,0,0xa8);
                  *local_e0 = lVar12;
                  *puVar10 = (ulonglong)local_e0;
                }
                if (iVar6 == 0) goto LAB_18057b397;
              }
              else {
LAB_18057b397:
                if ((code *)local_e8[0xd] != (code *)0x0) {
                  iVar6 = (*(code *)local_e8[0xd])(plVar9);
                }
              }
              if ((*(uint *)(plVar9[1] + 8) & 0x10000) == 0) {
                if (iVar6 == 0) goto LAB_18057b3f1;
              }
              else {
                puVar11 = (undefined8 *)(**(code **)(lVar12 + 8))(lVar12,0x48);
                if (puVar11 != (undefined8 *)0x0) {
                  *puVar11 = 0;
                  puVar11[1] = 0;
                  puVar11[2] = 0;
                  puVar11[3] = 0;
                  puVar11[4] = 0;
                  puVar11[5] = 0;
                  puVar11[6] = 0;
                  puVar11[7] = 0;
                  puVar11[8] = 0;
                  plVar9[0x1d] = (longlong)puVar11;
LAB_18057b3f1:
                  plVar9[2] = *(longlong *)(lVar13 + 0x78);
                  *(longlong **)(lVar13 + 0x78) = plVar9;
                  if (*(longlong *)(lVar13 + 0x90) != 0) {
                    local_e0 = *(longlong **)(*(longlong *)(lVar13 + 0x90) + 0x18);
                    lVar12 = *(longlong *)(lVar13 + 0x98);
                    iVar16 = 0;
                    plVar8 = (longlong *)0x0;
                    iVar6 = *(int *)((longlong)local_e0 + 0x3c);
                    if (0 < iVar6) {
                      plVar8 = (longlong *)(**(code **)(lVar12 + 8))(lVar12,iVar6);
                      iVar16 = 0x40;
                      if (plVar8 == (longlong *)0x0) {
LAB_18057b48d:
                        if (iVar16 == 0) goto LAB_18057b491;
LAB_18057b503:
                        plVar8 = (longlong *)0x0;
LAB_18057b506:
                        if (iVar16 != 0) goto LAB_18057b672;
                      }
                      else {
                        FUN_18063ab10(plVar8,0,(longlong)iVar6);
LAB_18057b491:
                        plVar9 = (longlong *)(**(code **)(lVar12 + 8))(lVar12,0x18);
                        if (plVar9 == (longlong *)0x0) {
                          iVar16 = 0x40;
LAB_18057b4da:
                          if (plVar8 != (longlong *)0x0) {
                            if (plVar8[7] != 0) {
                              (**(code **)(lVar12 + 0x10))(lVar12);
                            }
                            plVar8[7] = 0;
                            (**(code **)(lVar12 + 0x10))(lVar12,plVar8);
                          }
                          goto LAB_18057b503;
                        }
                        *plVar8 = lVar13;
                        local_e8 = plVar9;
                        puVar11 = (undefined8 *)(**(code **)(lVar12 + 8))(lVar12,0x28);
                        if (puVar11 == (undefined8 *)0x0) {
                          iVar16 = 0x40;
LAB_18057b4cc:
                          (**(code **)(lVar12 + 0x10))(lVar12,local_e8);
                          goto LAB_18057b4da;
                        }
                        *puVar11 = 0;
                        puVar11[1] = 0;
                        iVar16 = 0;
                        puVar11[2] = 0;
                        puVar11[3] = 0;
                        puVar11[4] = 0;
                        plVar8[7] = (longlong)puVar11;
                        if ((code *)local_e0[0xb] != (code *)0x0) {
                          iVar16 = (*(code *)local_e0[0xb])(plVar8);
                        }
                        local_e8 = plVar9;
                        if (iVar16 != 0) goto LAB_18057b4cc;
                        plVar9[2] = (longlong)plVar8;
                        if ((undefined8 *)(lVar13 + 0xa8) == (undefined8 *)0x0) goto LAB_18057b506;
                        lVar12 = *(longlong *)(lVar13 + 0xb0);
                        plVar9[1] = 0;
                        *plVar9 = lVar12;
                        if (lVar12 == 0) {
                          *(undefined8 *)(lVar13 + 0xa8) = plVar9;
                          *(longlong **)(lVar13 + 0xb0) = plVar9;
                        }
                        else {
                          *(longlong **)(lVar12 + 8) = plVar9;
                          *(longlong **)(lVar13 + 0xb0) = plVar9;
                        }
                      }
                      *(longlong **)(lVar13 + 0x80) = plVar8;
                      goto LAB_18057b519;
                    }
                    if (-1 < iVar6) goto LAB_18057b48d;
                  }
                  goto LAB_18057b672;
                }
              }
            }
            FUN_180579d30(plVar9);
            (**(code **)(local_100 + 0x10))(local_100,plVar9);
          }
        }
LAB_18057b672:
        if (lVar13 == 0) {
        }
        if (*(longlong *)(lVar13 + 0x90) == 0) {
        }
        piVar1 = (int *)(*(longlong *)(lVar13 + 0xd0) + 0x60);
        *piVar1 = *piVar1 + -1;
        if (0 < *(int *)(*(longlong *)(lVar13 + 0xd0) + 0x60)) {
        }
        plVar8 = *(longlong **)(lVar13 + 0x90);
        lVar12 = plVar8[2];
        if (plVar8 + 4 == (longlong *)0x0) {
        }
        plVar9 = (longlong *)plVar8[4];
        while( true ) {
          if (plVar9 == (longlong *)0x0) {
          }
          if (plVar9[2] == lVar13) break;
          plVar9 = (longlong *)plVar9[1];
        }
      }
      lVar2 = *plVar9;
      plVar9 = (longlong *)plVar9[1];
      if (lVar2 == 0) {
        plVar8[4] = (longlong)plVar9;
      }
      else {
        *(longlong **)(lVar2 + 8) = plVar9;
      }
      if (plVar9 == (longlong *)0x0) {
        plVar8[5] = lVar2;
      }
      else {
        *plVar9 = lVar2;
      }
      (**(code **)(lVar12 + 0x10))(lVar12);
      goto LAB_18057b99b;
    }
  }
  else {
LAB_18057b77c:
LAB_18057b781:
    uVar5 = uVar5 & 0xff;
    if ((((uVar5 != 0x51) && (uVar5 != 2)) && (uVar5 != 0x55)) || (param_5 == '\0'))
    goto LAB_18057b95c;
    if (puVar11 == (undefined8 *)0x0) {
      uVar5 = 0x55;
      puVar15 = local_108;
LAB_18057b904:
      if ((*param_2 & 4) != 0) {
        local_138 = param_2;
        uVar5 = FUN_18057c0d0(param_1,puVar11,param_3,puVar15);
      }
    }
    else {
      if ((code *)puVar11[4] == (code *)0x0) {
LAB_18057b7d6:
        uVar7 = *(uint *)(puVar11 + 1);
        *(undefined4 *)((longlong)puVar11 + 0xc) = 0;
        if (uVar7 == 0) {
          uVar5 = 0x55;
          goto LAB_18057b7e9;
        }
        if ((code *)puVar11[4] == (code *)0x0) {
          if (0x80 < uVar7) {
            uVar7 = 0x80;
          }
          FUN_18063aed0(&local_d8,*puVar11,uVar7);
        }
        else {
          uVar7 = (*(code *)puVar11[4])(puVar11,0,&local_d8,0x80);
        }
        puVar15 = local_108;
        param_1 = local_110;
        *(uint *)((longlong)puVar11 + 0xc) = uVar7;
        uVar5 = -(uint)(uVar7 < 0x80) & 0x55;
        if (uVar7 < 0x80) goto LAB_18057b7e9;
        if (((local_d8 == '\0') && (local_8e == '\0')) &&
           ((local_86 == '\0' &&
            (((((byte)(local_d7 - 1) < 0x21 && (local_99 == '\0')) && (acStack_d6[local_d7] == '\0')
              ) && (local_85 < 0x80)))))) {
          local_138 = local_108;
          uVar5 = FUN_180578e10(local_110,puVar11,
                                (CONCAT31(CONCAT21(CONCAT11(local_85,local_84),local_83),local_82) +
                                 0x7fU & 0xffffff80) + 0x80,param_3);
          goto LAB_18057b7f3;
        }
LAB_18057b8df:
        local_138 = puVar15;
        uVar5 = FUN_180578e10(param_1,puVar11,0,param_3);
      }
      else {
        iVar6 = (*(code *)puVar11[4])(puVar11,0,0,0);
        uVar5 = -(uint)(iVar6 != 0) & 0x55;
        if (iVar6 == 0) goto LAB_18057b7d6;
LAB_18057b7e9:
        puVar15 = local_108;
        param_1 = local_110;
LAB_18057b7f3:
        if ((char)uVar5 == '\x02') goto LAB_18057b8df;
      }
      if (((uVar5 & 0xff) == 2) || ((uVar5 & 0xff) == 0x55)) goto LAB_18057b904;
    }
    if (uVar5 == 0) {
      if (puVar11 == (undefined8 *)0x0) {
      }
      lVar12 = puVar11[6];
      if ((code *)puVar11[5] != (code *)0x0) {
        (*(code *)puVar11[5])(puVar11);
      }
LAB_18057b940:
      if (cVar18 == '\0') {
        (**(code **)(lVar12 + 0x10))(lVar12,puVar11);
      }
    }
LAB_18057b95c:
    if (puVar11 != (undefined8 *)0x0) {
      lVar12 = puVar11[6];
      if ((code *)puVar11[5] != (code *)0x0) {
        (*(code *)puVar11[5])(puVar11);
      }
      if (cVar18 == '\0') {
        (**(code **)(lVar12 + 0x10))(lVar12,puVar11);
      }
    }
    lVar12 = local_f0;
  }
  if (local_100 == 0) {
  }
  lVar13 = local_100;
  plVar8 = local_e8;
LAB_18057b99b:
  FUN_180579780(lVar12,lVar13,plVar8);
}



