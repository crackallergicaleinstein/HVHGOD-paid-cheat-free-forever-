// FUN_1801f92b0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801f92b0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1801f92b0(longlong param_1,undefined *param_2)

{
  byte bVar1;
  char cVar2;
  char cVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  int iVar7;
  char cVar8;
  int iVar9;
  ULONGLONG UVar10;
  longlong lVar11;
  undefined *puVar12;
  void *_Buf1;
  char *pcVar13;
  longlong lVar14;
  uint uVar15;
  ulonglong uVar16;
  undefined8 *******pppppppuVar17;
  undefined8 *puVar18;
  undefined4 uVar19;
  longlong lVar20;
  char *pcVar21;
  char *pcVar22;
  ulonglong uVar23;
  undefined *puVar24;
  bool bVar25;
  undefined8 extraout_XMM0_Qa;
  undefined1 auStack_728 [32];
  undefined **local_708;
  undefined8 local_700;
  undefined4 local_6f8;
  undefined4 local_6f0;
  undefined4 local_6e8;
  undefined *local_6d8;
  undefined *local_6d0;
  char *local_6c8;
  ulonglong uStack_6c0;
  char *local_6b8;
  longlong local_6b0;
  char *local_6a8;
  longlong local_6a0;
  longlong local_698;
  undefined8 *******local_690 [2];
  ulonglong local_680;
  ulonglong local_678;
  longlong local_670;
  undefined8 *******local_668 [2];
  ulonglong local_658;
  ulonglong local_650;
  undefined8 local_648;
  undefined8 local_640;
  undefined8 local_638;
  undefined8 local_630;
  undefined4 local_628;
  undefined4 local_624;
  undefined1 local_620 [16];
  undefined8 local_610;
  undefined8 local_608;
  undefined1 local_600 [16];
  undefined8 local_5f0;
  undefined8 local_5e8;
  undefined1 local_5d4;
  undefined1 local_5c4;
  undefined1 local_5b4;
  undefined1 local_5b0 [16];
  undefined8 local_5a0;
  undefined8 local_598;
  undefined8 local_590;
  undefined8 local_588;
  undefined8 local_580;
  undefined4 local_578;
  undefined8 local_570;
  undefined2 local_568;
  ulonglong local_40;
  
  local_40 = DAT_1808d5f00 ^ (ulonglong)auStack_728;
  local_6d0 = param_2;
  iVar9 = FUN_1801f8210();
  if (param_1 == 0) {
  }
  if (iVar9 == -1) {
  }
  if ((DAT_1808daef0 != param_1) || (DAT_1808daf14 != iVar9)) {
    local_648 = 0;
    local_640 = 0;
    local_638 = 0;
    local_630 = 0;
    local_628 = 0;
    local_624 = 0xffffffff;
    local_610 = 0;
    local_608 = 0xf;
    local_620._1_15_ = SUB1615((undefined1  [16])0x0,1);
    auVar4[0xf] = 0;
    auVar4._0_15_ = local_620._1_15_;
    local_620 = auVar4 << 8;
    local_5f0 = 0;
    local_5e8 = 0xf;
    local_600._1_15_ = SUB1615((undefined1  [16])0x0,1);
    auVar5[0xf] = 0;
    auVar5._0_15_ = local_600._1_15_;
    local_600 = auVar5 << 8;
    local_5d4 = 0;
    local_5c4 = 0;
    local_5b4 = 0;
    local_5a0 = 0;
    local_598 = 0xf;
    local_5b0._1_15_ = SUB1615((undefined1  [16])0x0,1);
    auVar6[0xf] = 0;
    auVar6._0_15_ = local_5b0._1_15_;
    local_5b0 = auVar6 << 8;
    local_590 = 0;
    local_588 = 0;
    local_580 = 0xffffffffffffffff;
    local_578 = 0xffffffff;
    local_570 = 0;
    local_568 = 1;
    FUN_1801fa180(&DAT_1808daef0,&local_648);
    FUN_18015c010(local_5b0);
    FUN_18015c010(local_600);
    FUN_18015c010(local_620);
    DAT_1808daef0 = param_1;
    DAT_1808daf14 = iVar9;
  }
  FUN_1801f8320(&local_670,param_1);
  if (param_2 != (undefined *)0x0) {
    pcVar13 = param_2 + 0x40;
    if (0xf < *(ulonglong *)(param_2 + 0x58)) {
      pcVar13 = *(char **)(param_2 + 0x40);
    }
    uVar16 = *(ulonglong *)(param_2 + 0x50);
    pppppppuVar17 = local_668;
    if (0xf < local_650) {
      pppppppuVar17 = local_668[0];
    }
    uVar23 = local_658;
    if (1 < local_658) {
      bVar1 = *(byte *)((local_658 - 2) + (longlong)pppppppuVar17);
      bVar25 = bVar1 < 0x5f;
      if ((bVar1 == 0x5f) &&
         (bVar1 = *(byte *)((local_658 - 1) + (longlong)pppppppuVar17), bVar25 = bVar1 < 99,
         bVar1 == 99)) {
        uVar15 = 0;
      }
      else {
        uVar15 = -(uint)bVar25 | 1;
      }
      if (uVar15 == 0) {
        uVar23 = local_658 - 2;
      }
    }
    if (1 < uVar16) {
      bVar25 = (byte)pcVar13[uVar16 - 2] < 0x5f;
      if ((pcVar13[uVar16 - 2] == 0x5f) &&
         (bVar25 = (byte)pcVar13[uVar16 - 1] < 99, pcVar13[uVar16 - 1] == 99)) {
        uVar15 = 0;
      }
      else {
        uVar15 = -(uint)bVar25 | 1;
      }
      if (uVar15 == 0) {
        uVar16 = uVar16 - 2;
      }
    }
    if ((uVar23 == 0) || (uVar23 != uVar16)) goto LAB_1801fa10d;
    if (uVar23 != 0) {
      pcVar21 = pcVar13;
      do {
        cVar8 = pcVar21[(longlong)pppppppuVar17 - (longlong)pcVar13];
        cVar2 = *pcVar21;
        cVar3 = cVar8 + ' ';
        if (0x19 < (byte)(cVar8 + 0xbfU)) {
          cVar3 = cVar8;
        }
        cVar8 = cVar2 + ' ';
        if (0x19 < (byte)(cVar2 + 0xbfU)) {
          cVar8 = cVar2;
        }
        if (cVar3 != cVar8) goto LAB_1801fa10d;
        pcVar21 = pcVar21 + 1;
      } while ((ulonglong)((longlong)pcVar21 - (longlong)pcVar13) < uVar23);
    }
    param_2 = local_6d0;
  }
  if (DAT_1808dafd1 != '\0') {
    DAT_1808dafd1 = '\0';
    DAT_1808dafbc = 0xffffffff;
    _DAT_1808dafc0 = 0xffffffff;
    DAT_1808dafb0 = 0;
    DAT_1808dafa8 = 0;
    DAT_1808dafb8 = 0xffffffff;
    DAT_1808daf80._4_1_ = 0;
  }
  FUN_1801f8ab0(param_1,param_2 != (undefined *)0x0,0);
  if (param_2 != (undefined *)0x0) {
    if (local_670 != DAT_1808daf00) {
      DAT_1808daf00 = local_670;
      pppppppuVar17 = local_668;
      if (0xf < local_650) {
        pppppppuVar17 = local_668[0];
      }
      FUN_180113930(&DAT_1808daf88,pppppppuVar17,local_658);
      FUN_1801f2890(&local_6c8,local_670);
      uVar16 = uStack_6c0;
      unique0x10000767 = uStack_6c0;
      DAT_1808daf58 = local_6c8;
      DAT_1808dafb8 = 0xffffffff;
      DAT_1808dafbc = 0xffffffff;
      DAT_1808dafb0 = 0;
      DAT_1808dafa8 = 0;
      cVar8 = (char)(uStack_6c0 >> 0x20);
      if (cVar8 == '\0') {
        uVar19 = 0xffffffff;
        uVar23 = 0xffffffff;
        pcVar13 = (char *)0xffffffff;
      }
      else {
        uVar19 = (undefined4)((ulonglong)local_6c8 >> 0x20);
        uVar23 = uStack_6c0;
        pcVar13 = local_6c8;
      }
      puVar18 = (undefined8 *)(local_6d0 + 0x40);
      if (0xf < *(ulonglong *)(local_6d0 + 0x58)) {
        puVar18 = (undefined8 *)*puVar18;
      }
      FUN_18063ab10(&local_648,0,0x600);
      local_6f0 = (undefined4)uVar23;
      local_6f8 = SUB84(pcVar13,0);
      local_700 = (undefined8 *)
                  (CONCAT44(local_700._4_4_,(int)(uVar16 >> 0x20)) & 0xffffffff000000ff);
      local_708 = (undefined **)puVar18;
      local_6e8 = uVar19;
      FUN_18015ad60(&local_648,0x600,0xffffffffffffffff,
                    "model=%s groups_resolved=%d group=%d first=%d third=%d pose_copies=0");
      local_708 = &PTR_180700558;
      if ((char)local_648 != '\0') {
        local_708 = (undefined **)&DAT_1806bcfc0;
      }
      local_700 = &local_648;
      FUN_1800f6900(2 - (uint)(cVar8 != '\0'),local_700,"SkinChanger","CUSTOM_AGENT_VIEW_BINDING");
    }
    if (DAT_1808daf64 != '\0') {
      uVar19 = DAT_1808daf60;
      if (DAT_180b0cc88 != '\0') {
        uVar19 = DAT_1808daf58._4_4_;
      }
      FUN_1801f8800(param_1,&DAT_1808daf58,uVar19,&DAT_1808dafbc);
    }
  }
  iVar9 = DAT_180c6331c;
  if (DAT_180c6331c == 0) {
    UVar10 = GetTickCount64();
    if (UVar10 < DAT_180c63310) {
      iVar9 = 0;
    }
    else {
      local_6d8 = &DAT_1808e76c0;
      iVar9 = FUN_1805f68d0(&DAT_1808e76c0);
      if (iVar9 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1805f6d44(5);
      }
      if (DAT_1808e770c == 0x7fffffff) {
        DAT_1808e770c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
        FUN_1805f6d44(6);
      }
      if ((DAT_180c6331c == 0) && (DAT_180c63310 <= UVar10)) {
        DAT_180c6331c = FUN_1804174b0("C_CSPlayerPawn",0x2279a8c6);
        if (DAT_180c6331c == 0) {
          DAT_180c63310 = UVar10 + 1000;
        }
        else {
          DAT_180c63310 = 0xffffffffffffffff;
        }
      }
      iVar9 = DAT_180c6331c;
      FUN_1805f68fc(&DAT_1808e76c0);
    }
  }
  lVar11 = FUN_18017ea70();
  *(int *)(lVar11 + 4) = *(int *)(lVar11 + 4) + 1;
  if (iVar9 + param_1 == 0) {
    bVar25 = false;
  }
  else {
    local_6d8 = (undefined *)((ulonglong)local_6d8 & 0xffffffff00000000);
    cVar8 = FUN_1804514f0(&local_6d8,iVar9 + param_1,4);
    if (cVar8 == '\0') {
      bVar25 = false;
    }
    else {
      bVar25 = true;
    }
  }
  iVar7 = (int)local_6d8;
  uVar16 = (ulonglong)local_6d8 & 0xffffffff;
  lVar11 = FUN_18017ea70();
  iVar9 = *(int *)(lVar11 + 4);
  if (iVar9 != 0) {
    iVar9 = iVar9 + -1;
    *(int *)(lVar11 + 4) = iVar9;
  }
  if ((!bVar25) || (0xfffffffd < iVar7 - 1U)) goto LAB_1801fa10d;
  puVar12 = (undefined *)FUN_1803d4150(iVar9,uVar16);
  local_6d8 = puVar12;
  if ((puVar12 == (undefined *)0x0) ||
     (_Buf1 = (void *)FUN_1803d3fa0(extraout_XMM0_Qa,puVar12), _Buf1 == (void *)0x0))
  goto LAB_1801fa10d;
  lVar11 = -1;
  do {
    lVar11 = lVar11 + 1;
  } while (*(char *)((longlong)_Buf1 + lVar11) != '\0');
  if ((lVar11 != 0x11) || (iVar9 = memcmp(_Buf1,"C_CS2HudModelArms",0x11), iVar9 != 0))
  goto LAB_1801fa10d;
  FUN_1801f8320(&local_698,puVar12);
  if ((local_698 == 0) || (local_680 == 0)) goto LAB_1801fa103;
  if ((puVar12 != DAT_1808daef8) || (iVar7 != DAT_1808daf10)) {
    DAT_1808daf10 = iVar7;
    pppppppuVar17 = local_690;
    if (0xf < local_678) {
      pppppppuVar17 = local_690[0];
    }
    DAT_1808daef8 = puVar12;
    FUN_180113930(&DAT_1808daf18,pppppppuVar17,local_680);
    DAT_1808daf48 = 0;
    pcVar13 = (char *)&DAT_1808daf38;
    if (0xf < DAT_1808daf50) {
      pcVar13 = DAT_1808daf38;
    }
    *pcVar13 = '\0';
    DAT_1808daf08 = 0;
    _DAT_1808daf70 = (uint5)DAT_1808daf70;
    _DAT_1808dafc0 = 0xffffffff;
    DAT_1808dafc8 = 0;
  }
  if (DAT_1808daf48 != 0) {
    pcVar13 = (char *)&DAT_1808daf38;
    if (0xf < DAT_1808daf50) {
      pcVar13 = DAT_1808daf38;
    }
    pppppppuVar17 = local_690;
    if (0xf < local_678) {
      pppppppuVar17 = local_690[0];
    }
    uVar16 = local_680;
    if (1 < local_680) {
      bVar1 = *(byte *)((local_680 - 2) + (longlong)pppppppuVar17);
      bVar25 = bVar1 < 0x5f;
      if ((bVar1 == 0x5f) &&
         (bVar1 = *(byte *)((local_680 - 1) + (longlong)pppppppuVar17), bVar25 = bVar1 < 99,
         bVar1 == 99)) {
        uVar15 = 0;
      }
      else {
        uVar15 = -(uint)bVar25 | 1;
      }
      if (uVar15 == 0) {
        uVar16 = local_680 - 2;
      }
    }
    uVar23 = DAT_1808daf48;
    if (1 < DAT_1808daf48) {
      bVar25 = (byte)pcVar13[DAT_1808daf48 - 2] < 0x5f;
      if ((pcVar13[DAT_1808daf48 - 2] == 0x5f) &&
         (bVar25 = (byte)pcVar13[DAT_1808daf48 - 1] < 99, pcVar13[DAT_1808daf48 - 1] == 99)) {
        uVar15 = 0;
      }
      else {
        uVar15 = -(uint)bVar25 | 1;
      }
      if (uVar15 == 0) {
        uVar23 = DAT_1808daf48 - 2;
      }
    }
    if ((uVar16 == 0) || (uVar16 != uVar23)) {
LAB_1801f99a2:
      pppppppuVar17 = local_690;
      if (0xf < local_678) {
        pppppppuVar17 = local_690[0];
      }
      FUN_180113930(&DAT_1808daf18,pppppppuVar17,local_680);
      DAT_1808daf48 = 0;
      pcVar13 = (char *)&DAT_1808daf38;
      if (0xf < DAT_1808daf50) {
        pcVar13 = DAT_1808daf38;
      }
      *pcVar13 = '\0';
      DAT_1808daf08 = 0;
      _DAT_1808dafc0 = 0xffffffff;
    }
    else if (uVar16 != 0) {
      pcVar21 = pcVar13;
      do {
        cVar8 = pcVar21[(longlong)pppppppuVar17 - (longlong)pcVar13];
        cVar2 = *pcVar21;
        cVar3 = cVar8 + ' ';
        if (0x19 < (byte)(cVar8 + 0xbfU)) {
          cVar3 = cVar8;
        }
        cVar8 = cVar2 + ' ';
        if (0x19 < (byte)(cVar2 + 0xbfU)) {
          cVar8 = cVar2;
        }
        if (cVar3 != cVar8) goto LAB_1801f99a2;
        pcVar21 = pcVar21 + 1;
      } while ((ulonglong)((longlong)pcVar21 - (longlong)pcVar13) < uVar16);
    }
    puVar12 = local_6d8;
  }
  puVar24 = local_6d0;
  if ((local_6d0 == (undefined *)0x0) || (DAT_180cc81a4 != 0)) {
    cVar8 = '\0';
  }
  else {
    cVar8 = '\x01';
  }
  if (DAT_1808dafd0 != cVar8) {
    DAT_1808dafc8 = 0;
    DAT_1808dafd0 = cVar8;
  }
  FUN_1801f8ab0(puVar12,cVar8,1);
  if (cVar8 == '\0') {
    if (DAT_1808daf48 != 0) {
      pcVar13 = (char *)&DAT_1808daf38;
      if (0xf < DAT_1808daf50) {
        pcVar13 = DAT_1808daf38;
      }
      pppppppuVar17 = local_690;
      if (0xf < local_678) {
        pppppppuVar17 = local_690[0];
      }
      if (1 < local_680) {
        bVar1 = *(byte *)((local_680 - 2) + (longlong)pppppppuVar17);
        bVar25 = bVar1 < 0x5f;
        if ((bVar1 == 0x5f) &&
           (bVar1 = *(byte *)((local_680 - 1) + (longlong)pppppppuVar17), bVar25 = bVar1 < 99,
           bVar1 == 99)) {
          uVar15 = 0;
        }
        else {
          uVar15 = -(uint)bVar25 | 1;
        }
        if (uVar15 == 0) {
          local_680 = local_680 - 2;
        }
      }
      uVar16 = DAT_1808daf48;
      if (1 < DAT_1808daf48) {
        bVar25 = (byte)pcVar13[DAT_1808daf48 - 2] < 0x5f;
        if ((pcVar13[DAT_1808daf48 - 2] == 0x5f) &&
           (bVar25 = (byte)pcVar13[DAT_1808daf48 - 1] < 99, pcVar13[DAT_1808daf48 - 1] == 99)) {
          uVar15 = 0;
        }
        else {
          uVar15 = -(uint)bVar25 | 1;
        }
        if (uVar15 == 0) {
          uVar16 = DAT_1808daf48 - 2;
        }
      }
      if ((local_680 != 0) && (local_680 == uVar16)) {
        if (local_680 != 0) {
          pcVar21 = pcVar13;
          do {
            cVar8 = pcVar21[(longlong)pppppppuVar17 - (longlong)pcVar13];
            cVar2 = *pcVar21;
            cVar3 = cVar8 + ' ';
            if (0x19 < (byte)(cVar8 + 0xbfU)) {
              cVar3 = cVar8;
            }
            cVar8 = cVar2 + ' ';
            if (0x19 < (byte)(cVar2 + 0xbfU)) {
              cVar8 = cVar2;
            }
            if (cVar3 != cVar8) goto LAB_1801fa103;
            pcVar21 = pcVar21 + 1;
          } while ((ulonglong)((longlong)pcVar21 - (longlong)pcVar13) < local_680);
        }
        if ((DAT_1808daf28 != 0) && (UVar10 = GetTickCount64(), DAT_1808dafc8 <= UVar10)) {
          UVar10 = GetTickCount64();
          DAT_1808dafc8 = UVar10 + 0x5dc;
          puVar18 = &DAT_1808daf18;
          if (0xf < DAT_1808daf30) {
            puVar18 = DAT_1808daf18;
          }
          if ((DAT_180cce330 & 1) == 0) {
            DAT_180cce330 = DAT_180cce330 | 1;
            atexit(FUN_180662340);
          }
          lVar14 = DAT_1808e76b0;
          lVar11 = DAT_1808da460;
          if ((DAT_1808e76b0 != DAT_1808da460) || (lVar20 = DAT_180c63308, DAT_180c63308 == 0)) {
            UVar10 = GetTickCount64();
            if ((lVar14 == lVar11) && (UVar10 < DAT_180c63300)) {
              lVar20 = 0;
            }
            else {
              local_6d0 = &DAT_1808e7660;
              iVar9 = FUN_1805f68d0(&DAT_1808e7660);
              if (iVar9 != 0) goto LAB_1801fa175;
              if (DAT_1808e76ac == 0x7fffffff) {
                DAT_1808e76ac = 0x7ffffffe;
                goto LAB_1801fa14a;
              }
              uVar16 = 1000;
              if (DAT_1808e76b0 == lVar11) {
                if ((DAT_180c63308 == 0) && (DAT_180c63300 <= UVar10)) goto LAB_1801f9c2b;
              }
              else {
                DAT_1808e7650 = 1000;
LAB_1801f9c2b:
                lVar14 = -1;
                do {
                  local_6a0 = lVar14 + 1;
                  lVar20 = lVar14 + 1;
                  lVar14 = local_6a0;
                } while ("client.dll:488D15????????488BCB>E8????????488BD7488BCB"[lVar20] != '\0');
                local_6a8 = "client.dll:488D15????????488BCB>E8????????488BD7488BCB";
                local_6b8 = "patterns::set_player_model";
                local_6b0 = 0x1a;
                DAT_180c63308 = FUN_1800e5d20(&local_6b8,&local_6a8);
                DAT_1808e76b0 = lVar11;
                DAT_180c63300 = 0xffffffffffffffff;
                if (DAT_180c63308 == 0) {
                  DAT_180c63300 = DAT_1808e7650 + UVar10;
                  uVar16 = 60000;
                  if (DAT_1808e7650 < 60000) {
                    uVar16 = DAT_1808e7650 * 2;
                  }
                }
                DAT_1808e7650 = uVar16;
              }
              lVar20 = DAT_180c63308;
              FUN_1805f68fc(&DAT_1808e7660);
            }
          }
          cVar8 = FUN_1804513c0(lVar20,1,2);
          if (cVar8 != '\0') {
            lVar11 = FUN_18017ea70();
            *(int *)(lVar11 + 4) = *(int *)(lVar11 + 4) + 1;
            cVar8 = FUN_1801ad780(lVar20,local_6d8,puVar18);
            lVar11 = FUN_18017ea70();
            if (*(int *)(lVar11 + 4) != 0) {
              *(int *)(lVar11 + 4) = *(int *)(lVar11 + 4) + -1;
            }
            if (cVar8 != '\0') {
              DAT_1808daf48 = 0;
              pcVar13 = (char *)&DAT_1808daf38;
              if (0xf < DAT_1808daf50) {
                pcVar13 = DAT_1808daf38;
              }
              *pcVar13 = '\0';
            }
          }
        }
      }
    }
  }
  else if (DAT_1808daf64 != '\0') {
    pcVar13 = puVar24 + 0x40;
    pcVar21 = pcVar13;
    if (0xf < *(ulonglong *)(puVar24 + 0x58)) {
      pcVar21 = *(char **)pcVar13;
    }
    uVar16 = *(ulonglong *)(puVar24 + 0x50);
    pppppppuVar17 = local_690;
    if (0xf < local_678) {
      pppppppuVar17 = local_690[0];
    }
    if (1 < local_680) {
      bVar1 = *(byte *)((local_680 - 2) + (longlong)pppppppuVar17);
      bVar25 = bVar1 < 0x5f;
      if ((bVar1 == 0x5f) &&
         (bVar1 = *(byte *)((local_680 - 1) + (longlong)pppppppuVar17), bVar25 = bVar1 < 99,
         bVar1 == 99)) {
        uVar15 = 0;
      }
      else {
        uVar15 = -(uint)bVar25 | 1;
      }
      if (uVar15 == 0) {
        local_680 = local_680 - 2;
      }
    }
    if (1 < uVar16) {
      bVar25 = (byte)pcVar21[uVar16 - 2] < 0x5f;
      if ((pcVar21[uVar16 - 2] == 0x5f) &&
         (bVar25 = (byte)pcVar21[uVar16 - 1] < 99, pcVar21[uVar16 - 1] == 99)) {
        uVar15 = 0;
      }
      else {
        uVar15 = -(uint)bVar25 | 1;
      }
      if (uVar15 == 0) {
        uVar16 = uVar16 - 2;
      }
    }
    if ((local_680 == 0) || (local_680 != uVar16)) {
LAB_1801f9e79:
      UVar10 = GetTickCount64();
      if (DAT_1808dafc8 <= UVar10) {
        UVar10 = GetTickCount64();
        DAT_1808dafc8 = UVar10 + 0x5dc;
        if (0xf < *(ulonglong *)(puVar24 + 0x58)) {
          pcVar13 = *(char **)pcVar13;
        }
        if ((DAT_180cce330 & 1) == 0) {
          DAT_180cce330 = DAT_180cce330 | 1;
          atexit(FUN_180662340);
        }
        lVar14 = DAT_1808e7648;
        lVar11 = DAT_1808da460;
        if (DAT_1808e7648 == DAT_1808da460) {
          lVar20 = DAT_180c632f8;
          if (DAT_180c632f8 == 0) goto LAB_1801f9eeb;
        }
        else {
LAB_1801f9eeb:
          UVar10 = GetTickCount64();
          if ((lVar14 == lVar11) && (UVar10 < DAT_180c632f0)) {
            lVar20 = 0;
          }
          else {
            local_6a8 = &DAT_1808e75f0;
            iVar9 = FUN_1805f68d0(&DAT_1808e75f0);
            if (iVar9 != 0) {
LAB_1801fa175:
                    /* WARNING: Subroutine does not return */
              FUN_1805f6d44(5);
            }
            if (DAT_1808e763c == 0x7fffffff) {
              DAT_1808e763c = 0x7ffffffe;
LAB_1801fa14a:
                    /* WARNING: Subroutine does not return */
              FUN_1805f6d44(6);
            }
            uVar16 = 1000;
            if (DAT_1808e7648 == lVar11) {
              if ((DAT_180c632f8 == 0) && (DAT_180c632f0 <= UVar10)) goto LAB_1801f9f71;
            }
            else {
              DAT_1808e7640 = 1000;
LAB_1801f9f71:
              lVar14 = -1;
              do {
                local_6b0 = lVar14 + 1;
                lVar20 = lVar14 + 1;
                lVar14 = local_6b0;
              } while ("client.dll:488D15????????488BCB>E8????????488BD7488BCB"[lVar20] != '\0');
              local_6b8 = "client.dll:488D15????????488BCB>E8????????488BD7488BCB";
              local_6c8 = "patterns::set_player_model";
              uStack_6c0 = 0x1a;
              DAT_180c632f8 = FUN_1800e5d20(&local_6c8,&local_6b8);
              DAT_1808e7648 = lVar11;
              DAT_180c632f0 = 0xffffffffffffffff;
              if (DAT_180c632f8 == 0) {
                DAT_180c632f0 = DAT_1808e7640 + UVar10;
                uVar16 = 60000;
                if (DAT_1808e7640 < 60000) {
                  uVar16 = DAT_1808e7640 * 2;
                }
              }
              DAT_1808e7640 = uVar16;
            }
            lVar20 = DAT_180c632f8;
            FUN_1805f68fc(&DAT_1808e75f0);
          }
          puVar24 = local_6d0;
        }
        cVar8 = FUN_1804513c0(lVar20,1,2);
        if (cVar8 != '\0') {
          lVar11 = FUN_18017ea70();
          *(int *)(lVar11 + 4) = *(int *)(lVar11 + 4) + 1;
          cVar8 = FUN_1801ad780(lVar20,local_6d8,pcVar13);
          lVar11 = FUN_18017ea70();
          if (*(int *)(lVar11 + 4) != 0) {
            *(int *)(lVar11 + 4) = *(int *)(lVar11 + 4) + -1;
          }
          if (cVar8 != '\0') {
            puVar18 = (undefined8 *)(puVar24 + 0x40);
            if ((char **)puVar18 != &DAT_1808daf38) {
              if (0xf < *(ulonglong *)(puVar24 + 0x58)) {
                puVar18 = (undefined8 *)*puVar18;
              }
              FUN_180113930(&DAT_1808daf38,puVar18,*(undefined8 *)(puVar24 + 0x50));
            }
            DAT_1808daf08 = 0;
            _DAT_1808dafc0 = 0xffffffff;
            puVar18 = (undefined8 *)(puVar24 + 0x40);
            if (0xf < *(ulonglong *)(puVar24 + 0x58)) {
              puVar18 = (undefined8 *)*puVar18;
            }
            FUN_18063ab10(&local_648,0,0x600);
            local_708 = (undefined **)puVar18;
            FUN_18015ad60(&local_648,0x600,0xffffffffffffffff,
                          "model=%s native_entity=HUD_arms readback=pending");
            local_708 = &PTR_180700558;
            if ((char)local_648 != '\0') {
              local_708 = (undefined **)&DAT_1806bcfc0;
            }
            local_700 = &local_648;
            FUN_1800f6900(1);
          }
        }
      }
    }
    else {
      if (local_680 != 0) {
        pcVar22 = pcVar21;
        do {
          cVar8 = pcVar22[(longlong)pppppppuVar17 - (longlong)pcVar21];
          cVar2 = *pcVar22;
          cVar3 = cVar8 + ' ';
          if (0x19 < (byte)(cVar8 + 0xbfU)) {
            cVar3 = cVar8;
          }
          cVar8 = cVar2 + ' ';
          if (0x19 < (byte)(cVar2 + 0xbfU)) {
            cVar8 = cVar2;
          }
          if (cVar3 != cVar8) goto LAB_1801f9e79;
          pcVar22 = pcVar22 + 1;
        } while ((ulonglong)((longlong)pcVar22 - (longlong)pcVar21) < local_680);
      }
      if (local_698 != DAT_1808daf08) {
        DAT_1808daf08 = local_698;
        FUN_1801f2890(&local_6c8);
        _DAT_1808daf68 = local_6c8;
        _DAT_1808daf70 = uStack_6c0;
        _DAT_1808dafc0 = 0xffffffff;
      }
      if ((char)(_DAT_1808daf70 >> 0x20) != '\0') {
        FUN_1801f8800(local_6d8,&DAT_1808daf68,_DAT_1808daf70 & 0xffffffff,&DAT_1808dafc0);
      }
    }
  }
LAB_1801fa103:
  FUN_18015c010(local_690);
LAB_1801fa10d:
  FUN_18015c010(local_668);
}



