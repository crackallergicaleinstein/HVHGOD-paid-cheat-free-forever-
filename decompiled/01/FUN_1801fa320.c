// FUN_1801fa320 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801fa320 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1801fa320(undefined *param_1)

{
  byte bVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  ULONGLONG UVar9;
  longlong lVar10;
  void *_Buf1;
  ulonglong uVar11;
  char *pcVar12;
  undefined8 ****ppppuVar13;
  char cVar14;
  char *pcVar15;
  uint uVar16;
  undefined **ppuVar17;
  undefined *puVar18;
  bool bVar19;
  undefined1 auStack_6d8 [32];
  undefined8 ****local_6b8;
  char *local_6b0;
  char local_6a8 [8];
  undefined *local_6a0;
  undefined4 uStack_698;
  undefined4 uStack_694;
  longlong local_690;
  undefined8 ****local_688 [2];
  ulonglong local_678;
  ulonglong local_670;
  longlong local_668;
  undefined8 ****local_660 [2];
  ulonglong local_650;
  ulonglong local_648;
  char local_638 [1536];
  ulonglong local_38;
  
  local_38 = DAT_1808d5f00 ^ (ulonglong)auStack_6d8;
  if (param_1 == (undefined *)0x0) {
    param_1 = DAT_1808daef0;
    if (DAT_1808daef0 == (undefined *)0x0) {
    }
  }
  else if (param_1 != DAT_1808daef0) {
  }
  if (DAT_1808daf64 == '\0') {
  }
  if (DAT_1808daf98 == 0) {
  }
  iVar6 = FUN_1801f8210(param_1);
  if (iVar6 != DAT_1808daf14) {
  }
  uVar16 = 0;
  iVar6 = DAT_180c632e4;
  if (DAT_180c632e4 == 0) {
    UVar9 = GetTickCount64();
    if (UVar9 < DAT_180c632e8) {
      iVar6 = 0;
    }
    else {
      local_6a0 = &DAT_1808e75a0;
      iVar6 = FUN_1805f68d0(&DAT_1808e75a0);
      if (iVar6 != 0) goto LAB_1801fabb1;
      if (DAT_1808e75ec == 0x7fffffff) {
        DAT_1808e75ec = 0x7ffffffe;
        goto LAB_1801fabc6;
      }
      if ((DAT_180c632e4 == 0) && (DAT_180c632e8 <= UVar9)) {
        DAT_180c632e4 = FUN_1804174b0("C_BaseEntity",0x84cdad2);
        if (DAT_180c632e4 == 0) {
          DAT_180c632e8 = UVar9 + 1000;
        }
        else {
          DAT_180c632e8 = 0xffffffffffffffff;
        }
      }
      iVar6 = DAT_180c632e4;
      FUN_1805f68fc(&DAT_1808e75a0);
    }
  }
  iVar7 = DAT_180c632e0;
  if (DAT_180c632e0 == 0) {
    UVar9 = GetTickCount64();
    if (UVar9 < DAT_180c632d8) {
      iVar7 = 0;
    }
    else {
      local_6a0 = &DAT_1808e7550;
      iVar7 = FUN_1805f68d0(&DAT_1808e7550);
      if (iVar7 != 0) {
LAB_1801fabb1:
                    /* WARNING: Subroutine does not return */
        FUN_1805f6d44(5);
      }
      if (DAT_1808e759c == 0x7fffffff) {
        DAT_1808e759c = 0x7ffffffe;
LAB_1801fabc6:
                    /* WARNING: Subroutine does not return */
        FUN_1805f6d44(6);
      }
      if ((DAT_180c632e0 == 0) && (DAT_180c632d8 <= UVar9)) {
        DAT_180c632e0 = FUN_1804174b0("C_BaseEntity",0x1c93bcf0);
        if (DAT_180c632e0 == 0) {
          DAT_180c632d8 = UVar9 + 1000;
        }
        else {
          DAT_180c632d8 = 0xffffffffffffffff;
        }
      }
      iVar7 = DAT_180c632e0;
      FUN_1805f68fc(&DAT_1808e7550);
    }
  }
  if (iVar6 == 0) {
  }
  if (iVar7 == 0) {
  }
  lVar10 = FUN_18017ea70();
  *(int *)(lVar10 + 4) = *(int *)(lVar10 + 4) + 1;
  if (param_1 + iVar6 == (undefined *)0x0) {
    bVar19 = false;
  }
  else {
    local_6a0 = (undefined *)((ulonglong)local_6a0 & 0xffffffff00000000);
    cVar5 = FUN_1804514f0(&local_6a0,param_1 + iVar6,4);
    if (cVar5 == '\0') {
      bVar19 = false;
    }
    else {
      bVar19 = true;
    }
  }
  iVar6 = (int)local_6a0;
  lVar10 = FUN_18017ea70();
  if (*(int *)(lVar10 + 4) != 0) {
    *(int *)(lVar10 + 4) = *(int *)(lVar10 + 4) + -1;
  }
  lVar10 = FUN_18017ea70();
  *(int *)(lVar10 + 4) = *(int *)(lVar10 + 4) + 1;
  if (param_1 + iVar7 == (undefined *)0x0) {
    bVar3 = false;
  }
  else {
    local_6a8[0] = '\0';
    cVar5 = FUN_1804514f0(local_6a8,param_1 + iVar7,1);
    if (cVar5 == '\0') {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
  }
  cVar5 = local_6a8[0];
  lVar10 = FUN_18017ea70();
  if (*(int *)(lVar10 + 4) != 0) {
    *(int *)(lVar10 + 4) = *(int *)(lVar10 + 4) + -1;
  }
  if (!bVar19) {
  }
  if (!bVar3) {
  }
  if ((0 < iVar6) && (cVar5 == '\0')) {
  }
  DAT_1808dafd1 = 1;
  FUN_1801f8320(&local_690,param_1);
  if (local_690 != 0) {
    pcVar12 = &DAT_1808daf88;
    if (0xf < DAT_1808dafa0) {
      pcVar12 = _DAT_1808daf88;
    }
    ppppuVar13 = local_688;
    if (0xf < local_670) {
      ppppuVar13 = local_688[0];
    }
    if (1 < local_678) {
      bVar1 = *(byte *)((longlong)ppppuVar13 + (local_678 - 2));
      bVar19 = bVar1 < 0x5f;
      if ((bVar1 == 0x5f) &&
         (bVar1 = *(byte *)((longlong)ppppuVar13 + (local_678 - 1)), bVar19 = bVar1 < 99,
         bVar1 == 99)) {
        uVar8 = 0;
      }
      else {
        uVar8 = -(uint)bVar19 | 1;
      }
      if (uVar8 == 0) {
        local_678 = local_678 - 2;
      }
    }
    uVar11 = DAT_1808daf98;
    if (1 < DAT_1808daf98) {
      bVar19 = (byte)pcVar12[DAT_1808daf98 - 2] < 0x5f;
      if ((pcVar12[DAT_1808daf98 - 2] == 0x5f) &&
         (bVar19 = (byte)pcVar12[DAT_1808daf98 - 1] < 99, pcVar12[DAT_1808daf98 - 1] == 99)) {
        uVar8 = 0;
      }
      else {
        uVar8 = -(uint)bVar19 | 1;
      }
      if (uVar8 == 0) {
        uVar11 = DAT_1808daf98 - 2;
      }
    }
    if ((local_678 != 0) && (local_678 == uVar11)) {
      if (local_678 != 0) {
        pcVar15 = pcVar12;
        do {
          cVar5 = pcVar15[(longlong)ppppuVar13 - (longlong)pcVar12];
          cVar2 = *pcVar15;
          cVar14 = cVar5 + ' ';
          if (0x19 < (byte)(cVar5 + 0xbfU)) {
            cVar14 = cVar5;
          }
          cVar5 = cVar2 + ' ';
          if (0x19 < (byte)(cVar2 + 0xbfU)) {
            cVar5 = cVar2;
          }
          if (cVar14 != cVar5) goto LAB_1801fab8d;
          pcVar15 = pcVar15 + 1;
        } while ((ulonglong)((longlong)pcVar15 - (longlong)pcVar12) < local_678);
      }
      if (local_690 != DAT_1808daf00) {
        FUN_1801f2890(&local_6a0,local_690);
        if ((char)uStack_694 == '\0') goto LAB_1801fab8d;
        DAT_1808daf00 = local_690;
        _DAT_1808daf60 = CONCAT44(uStack_694,uStack_698);
        DAT_1808daf58 = local_6a0;
        DAT_1808dafbc = -1;
      }
      iVar6 = DAT_1808dafbc;
      FUN_1801f8800(param_1,&DAT_1808daf58,(ulonglong)DAT_1808daf58 >> 0x20,&DAT_1808dafbc);
      ppuVar17 = &PTR_180700558;
      if (iVar6 != DAT_1808dafbc) {
        ppppuVar13 = local_688;
        if (0xf < local_670) {
          ppppuVar13 = local_688[0];
        }
        FUN_18063ab10(local_638,0,0x600);
        local_6b8 = ppppuVar13;
        FUN_18015ad60(local_638,0x600,0xffffffffffffffff,
                      "model=%s target=pawn variant=third_person physics_rebuilt=0");
        local_6b8 = (undefined8 ****)&PTR_180700558;
        if (local_638[0] != '\0') {
          local_6b8 = (undefined8 ****)&DAT_1806bcfc0;
        }
        local_6b0 = local_638;
        FUN_1800f6900(1);
      }
      iVar6 = DAT_180c632c8;
      if (DAT_180c632c8 == 0) {
        UVar9 = GetTickCount64();
        if (UVar9 < DAT_180c632d0) goto LAB_1801fab8d;
        local_6a0 = &DAT_1808e7500;
        iVar6 = FUN_1805f68d0(&DAT_1808e7500);
        if (iVar6 != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_1805f6d44(5);
        }
        if (DAT_1808e754c == 0x7fffffff) {
          DAT_1808e754c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
          FUN_1805f6d44(6);
        }
        if ((DAT_180c632c8 == 0) && (DAT_180c632d0 <= UVar9)) {
          DAT_180c632c8 = FUN_1804174b0("CBaseAnimGraph",0x7811a1e6);
          if (DAT_180c632c8 == 0) {
            DAT_180c632d0 = UVar9 + 1000;
          }
          else {
            DAT_180c632d0 = 0xffffffffffffffff;
          }
        }
        iVar6 = DAT_180c632c8;
        FUN_1805f68fc(&DAT_1808e7500);
        if (iVar6 == 0) goto LAB_1801fab8d;
      }
      lVar10 = FUN_18017ea70();
      *(int *)(lVar10 + 4) = *(int *)(lVar10 + 4) + 1;
      bVar19 = false;
      if (param_1 + iVar6 != (undefined *)0x0) {
        local_6a0 = (undefined *)0x0;
        cVar5 = FUN_1804514f0(&local_6a0,param_1 + iVar6,8);
        if (cVar5 == '\0') {
          bVar19 = false;
        }
        else {
          bVar19 = true;
        }
      }
      puVar4 = local_6a0;
      lVar10 = FUN_18017ea70();
      iVar6 = *(int *)(lVar10 + 4);
      if (iVar6 != 0) {
        iVar6 = iVar6 + -1;
        *(int *)(lVar10 + 4) = iVar6;
      }
      puVar18 = (undefined *)0x0;
      if (bVar19) {
        puVar18 = puVar4;
      }
      if (((puVar18 != (undefined *)0x0) && (puVar18 != param_1)) &&
         (_Buf1 = (void *)FUN_1803d3fa0(iVar6,puVar18), _Buf1 != (void *)0x0)) {
        lVar10 = -1;
        do {
          lVar10 = lVar10 + 1;
        } while (*(char *)((longlong)_Buf1 + lVar10) != '\0');
        if ((((lVar10 == 0xf) && (iVar6 = memcmp(_Buf1,"C_ClientRagdoll",0xf), iVar6 == 0)) ||
            ((lVar10 == 0xd && (iVar6 = memcmp(_Buf1,"C_RagdollProp",0xd), iVar6 == 0)))) ||
           ((lVar10 == 0xe && (iVar6 = memcmp(_Buf1,"CBaseAnimGraph",0xe), iVar6 == 0)))) {
          FUN_1801f8320(&local_668,puVar18);
          if (local_668 != 0) {
            pcVar12 = &DAT_1808daf88;
            if (0xf < DAT_1808dafa0) {
              pcVar12 = _DAT_1808daf88;
            }
            ppppuVar13 = local_660;
            if (0xf < local_648) {
              ppppuVar13 = local_660[0];
            }
            if (1 < local_650) {
              bVar1 = *(byte *)((longlong)ppppuVar13 + (local_650 - 2));
              bVar19 = bVar1 < 0x5f;
              if ((bVar1 == 0x5f) &&
                 (bVar1 = *(byte *)((longlong)ppppuVar13 + (local_650 - 1)), bVar19 = bVar1 < 99,
                 bVar1 == 99)) {
                uVar8 = 0;
              }
              else {
                uVar8 = -(uint)bVar19 | 1;
              }
              if (uVar8 == 0) {
                local_650 = local_650 - 2;
              }
            }
            uVar11 = DAT_1808daf98;
            if (1 < DAT_1808daf98) {
              bVar19 = (byte)pcVar12[DAT_1808daf98 - 2] < 0x5f;
              if ((pcVar12[DAT_1808daf98 - 2] != 0x5f) ||
                 (bVar19 = (byte)pcVar12[DAT_1808daf98 - 1] < 99, pcVar12[DAT_1808daf98 - 1] != 99))
              {
                uVar16 = -(uint)bVar19 | 1;
              }
              if (uVar16 == 0) {
                uVar11 = DAT_1808daf98 - 2;
              }
            }
            if ((local_650 != 0) && (local_650 == uVar11)) {
              if (local_650 != 0) {
                pcVar15 = pcVar12;
                do {
                  cVar5 = pcVar15[(longlong)ppppuVar13 - (longlong)pcVar12];
                  cVar2 = *pcVar15;
                  cVar14 = cVar5 + ' ';
                  if (0x19 < (byte)(cVar5 + 0xbfU)) {
                    cVar14 = cVar5;
                  }
                  cVar5 = cVar2 + ' ';
                  if (0x19 < (byte)(cVar2 + 0xbfU)) {
                    cVar5 = cVar2;
                  }
                  if (cVar14 != cVar5) goto LAB_1801fab82;
                  pcVar15 = pcVar15 + 1;
                } while ((ulonglong)((longlong)pcVar15 - (longlong)pcVar12) < local_650);
              }
              if ((DAT_1808dafa8 != puVar18) || (DAT_1808dafb0 != local_668)) {
                DAT_1808dafb0 = local_668;
                DAT_1808dafb8 = -1;
                DAT_1808dafa8 = puVar18;
                FUN_1801f2890(&local_6a0,local_668);
                DAT_1808daf80 = CONCAT44(uStack_694,uStack_698);
                DAT_1808daf78 = local_6a0;
              }
              iVar6 = DAT_1808dafb8;
              if (((char)((ulonglong)DAT_1808daf80 >> 0x20) != '\0') &&
                 (FUN_1801f8800(puVar18,&DAT_1808daf78,(ulonglong)DAT_1808daf78 >> 0x20,
                                &DAT_1808dafb8), iVar6 != DAT_1808dafb8)) {
                ppppuVar13 = local_660;
                if (0xf < local_648) {
                  ppppuVar13 = local_660[0];
                }
                FUN_18063ab10(local_638,0,0x600);
                local_6b8 = ppppuVar13;
                FUN_18015ad60(local_638,0x600,0xffffffffffffffff,
                              "model=%s target=client_ragdoll variant=third_person physics_rebuilt=0"
                             );
                if (local_638[0] != '\0') {
                  ppuVar17 = (undefined **)&DAT_1806bcfc0;
                }
                local_6b0 = local_638;
                local_6b8 = (undefined8 ****)ppuVar17;
                FUN_1800f6900(1);
              }
            }
          }
LAB_1801fab82:
          FUN_18015c010(local_660);
        }
      }
    }
  }
LAB_1801fab8d:
  FUN_18015c010(local_688);
}



