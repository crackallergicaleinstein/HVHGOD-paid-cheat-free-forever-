// FUN_1803c36b0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1803c36b0 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1803c36b0(longlong param_1,undefined *param_2,int param_3,undefined8 *param_4,char param_5)

{
  longlong *plVar1;
  int *piVar2;
  bool bVar3;
  undefined1 auVar4 [16];
  ushort uVar5;
  char cVar6;
  char cVar7;
  ushort uVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  ULONGLONG UVar12;
  undefined *puVar13;
  undefined8 uVar14;
  longlong lVar15;
  longlong *plVar16;
  char *******pppppppcVar17;
  uint uVar18;
  longlong lVar19;
  undefined *puVar20;
  undefined *puVar21;
  int iVar22;
  uint uVar23;
  undefined8 *puVar24;
  bool bVar25;
  undefined *puVar26;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qa_01;
  undefined8 uVar27;
  undefined8 extraout_XMM0_Qa_02;
  undefined8 extraout_XMM0_Qa_03;
  undefined8 extraout_XMM0_Qa_04;
  undefined1 auStack_d8 [32];
  uint local_b8 [2];
  undefined *local_b0;
  char local_a8;
  undefined *local_a0;
  undefined1 local_98 [16];
  undefined8 *local_88;
  int local_80;
  uint local_7c;
  char *******local_78 [2];
  longlong local_68;
  ulonglong local_60;
  int *local_58;
  uint *local_50;
  ulonglong local_48;
  
  local_48 = DAT_1808d5f00 ^ (ulonglong)auStack_d8;
  local_98._0_4_ = param_3;
  iVar22 = 0;
  bVar25 = false;
  local_7c = 0;
  if (param_2 == (undefined *)0x0) {
  }
  if (param_3 < 1) {
  }
  cVar6 = '\x06';
  iVar9 = DAT_180c71d58;
  local_b0 = param_2;
  local_88 = param_4;
  if (DAT_180c71d58 == 0) {
    UVar12 = GetTickCount64();
    if (UVar12 < DAT_180c71d50) {
      iVar9 = 0;
    }
    else {
      local_a0 = &DAT_1809b9e90;
      iVar9 = FUN_1805f68d0(&DAT_1809b9e90);
      if (iVar9 != 0) goto LAB_1803c4377;
      if (DAT_1809b9edc == 0x7fffffff) {
        DAT_1809b9edc = 0x7ffffffe;
        goto LAB_1803c436e;
      }
      if ((DAT_180c71d58 == 0) && (DAT_180c71d50 <= UVar12)) {
        DAT_180c71d58 = FUN_1804174b0("CEntityInstance",0xa8a45978);
        if (DAT_180c71d58 == 0) {
          DAT_180c71d50 = UVar12 + 1000;
        }
        else {
          DAT_180c71d50 = 0xffffffffffffffff;
        }
      }
      iVar9 = DAT_180c71d58;
      FUN_1805f68fc(&DAT_1809b9e90);
    }
  }
  uVar18 = DAT_180c71d60;
  local_80 = iVar9;
  if (DAT_180c71d60 == 0) {
    UVar12 = GetTickCount64();
    if (UVar12 < DAT_180c71d68) {
      uVar18 = 0;
    }
    else {
      local_a0 = &DAT_1809b9ee0;
      iVar9 = FUN_1805f68d0(&DAT_1809b9ee0);
      if (iVar9 != 0) goto LAB_1803c4377;
      if (DAT_1809b9f2c == 0x7fffffff) {
        DAT_1809b9f2c = 0x7ffffffe;
        goto LAB_1803c436e;
      }
      if ((DAT_180c71d60 == 0) && (DAT_180c71d68 <= UVar12)) {
        DAT_180c71d60 = FUN_1804174b0("CEntityIdentity",0xbecfac7);
        if (DAT_180c71d60 == 0) {
          DAT_180c71d68 = UVar12 + 1000;
        }
        else {
          DAT_180c71d68 = 0xffffffffffffffff;
        }
      }
      uVar18 = DAT_180c71d60;
      FUN_1805f68fc(&DAT_1809b9ee0);
    }
  }
  local_58 = &local_80;
  local_50 = &local_7c;
  local_7c = uVar18;
  iVar9 = FUN_1803c4390(&local_58,param_2);
  puVar13 = local_b0;
  local_a0 = (undefined *)CONCAT44(local_a0._4_4_,iVar9);
  if (iVar9 == 0) {
  }
  if (*(char *)(param_1 + 0xdc1) == '\0') {
    uVar14 = FUN_1803d3fa0(extraout_XMM0_Qa,local_b0);
    FUN_180454030(local_78,uVar14,0x60);
    pppppppcVar17 = (char *******)local_78;
    if (0xf < local_60) {
      pppppppcVar17 = local_78[0];
    }
    puVar26 = puVar13;
    if (local_68 == 0x13) {
      iVar22 = memcmp(pppppppcVar17,"C_CS2HudModelWeapon",0x13);
      uVar14 = FUN_18015c010(local_78);
      if (iVar22 == 0) {
        FUN_1803c4550(uVar14,&local_b0,puVar13);
        puVar26 = local_b0;
        if (local_a8 == '\0') {
        }
        if (local_b0 == (undefined *)0x0) {
        }
        if (local_b0 == puVar13) {
        }
        iVar22 = FUN_1803c4390(&local_58,local_b0);
        if (iVar22 != iVar9) {
        }
        iVar22 = DAT_180c71d04;
        if (DAT_180c71d04 == 0) {
          UVar12 = GetTickCount64();
          if (UVar12 < DAT_180c71d08) {
            iVar22 = 0;
          }
          else {
            local_b0 = &DAT_1809b9d00;
            iVar22 = FUN_1805f68d0(&DAT_1809b9d00);
            if (iVar22 != 0) goto LAB_1803c4377;
            if (DAT_1809b9d4c == 0x7fffffff) {
              DAT_1809b9d4c = 0x7ffffffe;
              goto LAB_1803c436e;
            }
            if ((DAT_180c71d04 == 0) && (DAT_180c71d08 <= UVar12)) {
              DAT_180c71d04 = FUN_1804174b0("C_BaseEntity",0x6d279c31);
              if (DAT_180c71d04 == 0) {
                DAT_180c71d08 = UVar12 + 1000;
              }
              else {
                DAT_180c71d08 = 0xffffffffffffffff;
              }
            }
            iVar22 = DAT_180c71d04;
            FUN_1805f68fc(&DAT_1809b9d00);
          }
        }
        lVar15 = FUN_18017ea70();
        *(int *)(lVar15 + 4) = *(int *)(lVar15 + 4) + 1;
        if (puVar13 + iVar22 == (undefined *)0x0) {
          bVar25 = false;
          uVar18 = local_7c;
        }
        else {
          local_b8[0] = 0;
          cVar7 = FUN_1804514f0(local_b8,puVar13 + iVar22,4);
          if (cVar7 == '\0') {
            bVar25 = false;
            uVar18 = local_7c;
          }
          else {
            bVar25 = true;
            uVar18 = local_b8[0];
          }
        }
        lVar15 = FUN_18017ea70();
        iVar22 = *(int *)(lVar15 + 4);
        if (iVar22 != 0) {
          iVar22 = iVar22 + -1;
          *(int *)(lVar15 + 4) = iVar22;
        }
        if (!bVar25) {
        }
        if (0xfffffffd < uVar18 - 1) {
        }
        puVar13 = (undefined *)FUN_1803d4150(iVar22,uVar18);
        if (puVar13 != puVar26) {
        }
        uVar14 = extraout_XMM0_Qa_02;
      }
    }
    else {
      uVar14 = FUN_18015c010(local_78);
    }
    uVar14 = FUN_1803d3fa0(uVar14,puVar26);
    FUN_180454030(local_78,uVar14,0x60);
    pppppppcVar17 = (char *******)local_78;
    if (0xf < local_60) {
      pppppppcVar17 = local_78[0];
    }
    if (pppppppcVar17 == (char *******)0x0) {
      uVar18 = 0;
    }
    else {
      uVar18 = 0x811c9dc5;
      cVar7 = *(char *)pppppppcVar17;
      while (cVar7 != '\0') {
        pppppppcVar17 = (char *******)((longlong)pppppppcVar17 + 1);
        uVar18 = ((int)cVar7 ^ uVar18) * 0x1000193;
        cVar7 = *(char *)pppppppcVar17;
      }
    }
    FUN_18015c010(local_78);
    iVar22 = FUN_18027d2c0(uVar18);
    if (iVar22 == -1) {
    }
    iVar22 = DAT_180c71d10;
    if (DAT_180c71d10 == 0) {
      UVar12 = GetTickCount64();
      if (UVar12 < DAT_180c71d18) {
        iVar22 = 0;
      }
      else {
        local_b0 = &DAT_1809b9c60;
        iVar22 = FUN_1805f68d0(&DAT_1809b9c60);
        if (iVar22 != 0) goto LAB_1803c4377;
        if (DAT_1809b9cac == 0x7fffffff) {
          DAT_1809b9cac = 0x7ffffffe;
          goto LAB_1803c436e;
        }
        if ((DAT_180c71d10 == 0) && (DAT_180c71d18 <= UVar12)) {
          DAT_180c71d10 = FUN_1804174b0("C_AttributeContainer",0xdce71866);
          if (DAT_180c71d10 == 0) {
            DAT_180c71d18 = UVar12 + 1000;
          }
          else {
            DAT_180c71d18 = 0xffffffffffffffff;
          }
        }
        iVar22 = DAT_180c71d10;
        FUN_1805f68fc(&DAT_1809b9c60);
      }
    }
    iVar9 = DAT_180c71d00;
    if (DAT_180c71d00 == 0) {
      UVar12 = GetTickCount64();
      if (UVar12 < DAT_180c71d20) {
        iVar9 = 0;
      }
      else {
        local_b0 = &DAT_1809b9d50;
        iVar9 = FUN_1805f68d0(&DAT_1809b9d50);
        if (iVar9 != 0) goto LAB_1803c4377;
        if (DAT_1809b9d9c == 0x7fffffff) {
          DAT_1809b9d9c = 0x7ffffffe;
          goto LAB_1803c436e;
        }
        if ((DAT_180c71d00 == 0) && (DAT_180c71d20 <= UVar12)) {
          DAT_180c71d00 = FUN_1804174b0("C_EconEntity",0x537b0586);
          DAT_180c71d20 = 0xffffffffffffffff;
          if (DAT_180c71d00 == 0) {
            DAT_180c71d20 = UVar12 + 1000;
          }
        }
        iVar9 = DAT_180c71d00;
        FUN_1805f68fc(&DAT_1809b9d50);
      }
    }
    iVar10 = DAT_180c71ce8;
    if (DAT_180c71ce8 == 0) {
      UVar12 = GetTickCount64();
      if (UVar12 < DAT_180c71ce0) {
        iVar10 = 0;
      }
      else {
        local_b0 = &DAT_1809b9c10;
        iVar10 = FUN_1805f68d0(&DAT_1809b9c10);
        if (iVar10 != 0) goto LAB_1803c4377;
        if (DAT_1809b9c5c == 0x7fffffff) {
          DAT_1809b9c5c = 0x7ffffffe;
          goto LAB_1803c436e;
        }
        if ((DAT_180c71ce8 == 0) && (DAT_180c71ce0 <= UVar12)) {
          DAT_180c71ce8 = FUN_1804174b0("C_EconItemView",0xa2ccb41a);
          DAT_180c71ce0 = 0xffffffffffffffff;
          if (DAT_180c71ce8 == 0) {
            DAT_180c71ce0 = UVar12 + 1000;
          }
        }
        iVar10 = DAT_180c71ce8;
        FUN_1805f68fc(&DAT_1809b9c10);
      }
    }
    lVar15 = FUN_18017ea70();
    *(int *)(lVar15 + 4) = *(int *)(lVar15 + 4) + 1;
    bVar25 = false;
    if (puVar26 + (longlong)iVar10 + (longlong)iVar22 + (longlong)iVar9 != (undefined *)0x0) {
      local_b8[0] = local_b8[0] & 0xffff0000;
      cVar7 = FUN_1804514f0(local_b8,puVar26 + (longlong)iVar10 + (longlong)iVar22 + (longlong)iVar9
                            ,2);
      if (cVar7 == '\0') {
        bVar25 = false;
      }
      else {
        bVar25 = true;
      }
    }
    uVar5 = (ushort)local_b8[0];
    lVar15 = FUN_18017ea70();
    if (*(int *)(lVar15 + 4) != 0) {
      *(int *)(lVar15 + 4) = *(int *)(lVar15 + 4) + -1;
    }
    uVar8 = 0;
    if (bVar25) {
      uVar8 = uVar5;
    }
    if ((uint)uVar8 != local_98._0_4_) {
    }
    iVar22 = DAT_180c71cf0;
    if (DAT_180c71cf0 == 0) {
      UVar12 = GetTickCount64();
      if (UVar12 < DAT_180c71cf8) {
        iVar22 = 0;
      }
      else {
        local_b0 = &DAT_1809b9cb0;
        iVar22 = FUN_1805f68d0(&DAT_1809b9cb0);
        if (iVar22 != 0) {
LAB_1803c4377:
                    /* WARNING: Subroutine does not return */
          FUN_1805f6d44(5);
        }
        if (DAT_1809b9cfc == 0x7fffffff) {
          DAT_1809b9cfc = 0x7ffffffe;
LAB_1803c436e:
                    /* WARNING: Subroutine does not return */
          FUN_1805f6d44(6);
        }
        if ((DAT_180c71cf0 == 0) && (DAT_180c71cf8 <= UVar12)) {
          DAT_180c71cf0 = FUN_1804174b0("C_BaseEntity",0x6d279c31);
          DAT_180c71cf8 = 0xffffffffffffffff;
          if (DAT_180c71cf0 == 0) {
            DAT_180c71cf8 = UVar12 + 1000;
          }
        }
        iVar22 = DAT_180c71cf0;
        FUN_1805f68fc(&DAT_1809b9cb0);
      }
    }
    lVar15 = FUN_18017ea70();
    *(int *)(lVar15 + 4) = *(int *)(lVar15 + 4) + 1;
    if (puVar26 + iVar22 == (undefined *)0x0) {
      bVar25 = false;
      uVar18 = local_98._0_4_;
    }
    else {
      local_b8[0] = 0;
      cVar7 = FUN_1804514f0(local_b8,puVar26 + iVar22,4);
      if (cVar7 == '\0') {
        bVar25 = false;
        uVar18 = local_98._0_4_;
      }
      else {
        bVar25 = true;
        uVar18 = local_b8[0];
      }
    }
    lVar15 = FUN_18017ea70();
    iVar22 = *(int *)(lVar15 + 4);
    if (iVar22 != 0) {
      iVar22 = iVar22 + -1;
      *(int *)(lVar15 + 4) = iVar22;
    }
    uVar14 = FUN_1803c4550(iVar22,&local_b0,puVar26);
    if (!bVar25) {
    }
    if (local_a8 == '\0') {
    }
    if (uVar18 - 1 < 0xfffffffe) {
      lVar15 = FUN_1803d4150(uVar14,uVar18);
      if (lVar15 == 0) {
        iVar22 = (int)local_a0;
LAB_1803c428b:
        bVar25 = false;
        if (-1 < cVar6) {
        }
      }
      else {
        iVar9 = FUN_1803c4390(&local_58,lVar15);
        iVar22 = (int)local_a0;
        if (iVar9 != (int)local_a0) goto LAB_1803c428b;
        uVar14 = FUN_1803d3fa0(extraout_XMM0_Qa_03,lVar15);
        FUN_180454030(local_78,uVar14,0x60);
        cVar6 = -0x7a;
        pppppppcVar17 = (char *******)local_78;
        if (0xf < local_60) {
          pppppppcVar17 = local_78[0];
        }
        if (local_68 != 0x14) goto LAB_1803c428b;
        iVar9 = memcmp(pppppppcVar17,"C_CSGO_PreviewPlayer",0x14);
        if (iVar9 != 0) goto LAB_1803c428b;
        bVar25 = true;
      }
      FUN_18015c010(local_78);
      if (!bVar25) {
      }
    }
    else {
      iVar22 = (int)local_a0;
    }
    puVar13 = local_b0;
    bVar25 = false;
    if (local_b0 == (undefined *)0x0) goto LAB_1803c4351;
    iVar9 = FUN_1803c4390(&local_58,local_b0);
    if (iVar9 == iVar22) {
      uVar14 = FUN_1803d3fa0(extraout_XMM0_Qa_04,puVar13);
      FUN_180454030(local_78,uVar14,0x60);
      bVar25 = true;
      pppppppcVar17 = (char *******)local_78;
      if (0xf < local_60) {
        pppppppcVar17 = local_78[0];
      }
      if ((local_68 != 0x14) ||
         (iVar22 = memcmp(pppppppcVar17,"C_CSGO_PreviewPlayer",0x14), iVar22 != 0))
      goto LAB_1803c4338;
      bVar3 = true;
    }
    else {
LAB_1803c4338:
      bVar3 = false;
    }
    if (bVar25) {
      FUN_18015c010(local_78);
    }
    if (!bVar3) {
    }
LAB_1803c4351:
    if (local_88 == (undefined8 *)0x0) {
    }
    *local_88 = puVar26;
  }
  uVar18 = *(uint *)(param_1 + 0x990);
  puVar13 = (undefined *)FUN_1803d4150(extraout_XMM0_Qa,uVar18);
  if (puVar13 == (undefined *)0x0) {
LAB_1803c392c:
    bVar3 = true;
  }
  else {
    uVar14 = FUN_1803d3fa0(extraout_XMM0_Qa_00,puVar13);
    FUN_180454030(local_78,uVar14,0x60);
    bVar25 = true;
    pppppppcVar17 = (char *******)local_78;
    if (0xf < local_60) {
      pppppppcVar17 = local_78[0];
    }
    if (((local_68 != 0x14) ||
        (iVar10 = memcmp(pppppppcVar17,"C_CSGO_PreviewPlayer",0x14), iVar10 != 0)) ||
       (iVar10 = FUN_1803c4390(&local_58,puVar13), iVar10 != iVar9)) goto LAB_1803c392c;
    bVar3 = false;
  }
  if (bVar25) {
    FUN_18015c010(local_78);
  }
  if (bVar3) {
  }
  lVar19 = (longlong)local_80;
  lVar15 = FUN_18017ea70();
  *(int *)(lVar15 + 4) = *(int *)(lVar15 + 4) + 1;
  if (puVar13 + lVar19 == (undefined *)0x0) {
    bVar25 = false;
    puVar24 = local_88;
  }
  else {
    auVar4._8_8_ = 0;
    auVar4._0_8_ = local_98._8_8_;
    local_98 = auVar4 << 0x40;
    cVar6 = FUN_1804514f0(local_98,puVar13 + lVar19,8);
    if (cVar6 == '\0') {
      bVar25 = false;
      puVar24 = local_88;
    }
    else {
      bVar25 = true;
      puVar24 = (undefined8 *)local_98._0_8_;
    }
  }
  lVar15 = FUN_18017ea70();
  if (*(int *)(lVar15 + 4) != 0) {
    *(int *)(lVar15 + 4) = *(int *)(lVar15 + 4) + -1;
  }
  lVar15 = FUN_18017ea70();
  *(int *)(lVar15 + 4) = *(int *)(lVar15 + 4) + 1;
  if (bVar25) {
    puVar24 = puVar24 + 2;
    if (puVar24 != (undefined8 *)0x0) goto LAB_1803c39b3;
    bVar25 = false;
    uVar23 = local_7c;
  }
  else {
    puVar24 = (undefined8 *)&DAT_00000010;
LAB_1803c39b3:
    local_b8[0] = 0;
    cVar6 = FUN_1804514f0(local_b8,puVar24,4);
    if (cVar6 == '\0') {
      bVar25 = false;
      uVar23 = local_7c;
    }
    else {
      bVar25 = true;
      uVar23 = local_b8[0];
    }
  }
  lVar15 = FUN_18017ea70();
  if (*(int *)(lVar15 + 4) != 0) {
    *(int *)(lVar15 + 4) = *(int *)(lVar15 + 4) + -1;
  }
  uVar11 = 0;
  if (bVar25) {
    uVar11 = uVar23;
  }
  if (uVar11 != uVar18) {
  }
  local_98 = (undefined1  [16])0x0;
  plVar16 = (longlong *)FUN_180113860(param_1 + 0x1028);
  lVar15 = *(longlong *)(param_1 + 0x1020);
  local_98._8_8_ = plVar16;
  local_98._0_8_ = lVar15;
  if (plVar16 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar16 + 1) = (int)plVar16[1] + 1;
    UNLOCK();
  }
  LOCK();
  uVar14 = *(undefined8 *)(param_1 + 0x1028);
  *(undefined8 *)(param_1 + 0x1028) = plVar16;
  UNLOCK();
  uVar27 = extraout_XMM0_Qa_01;
  if (((byte)uVar14 & 3) == 2) {
    uVar27 = FUN_1805fa36c(param_1 + 0x1028);
  }
  puVar26 = local_b0;
  if (lVar15 == 0) goto LAB_1803c3a6e;
  if ((param_5 == '\0') && (*(int *)(lVar15 + 0x134) == 0)) {
    if (local_b0 != puVar13) goto LAB_1803c3a6e;
  }
  else {
    if (local_b0 != puVar13) {
      uVar14 = FUN_1803d3fa0(uVar27,local_b0);
      FUN_180454030(local_78,uVar14,0x60);
      if (param_5 == '\0') {
        if (*(int *)(lVar15 + 0x134) != 2) {
          if (*(int *)(lVar15 + 0x134) == 1) {
            pppppppcVar17 = (char *******)local_78;
            if (0xf < local_60) {
              pppppppcVar17 = local_78[0];
            }
            if ((local_68 != 0x13) ||
               (iVar9 = memcmp(pppppppcVar17,"C_CS2HudModelWeapon",0x13), iVar9 != 0)) {
              pppppppcVar17 = (char *******)local_78;
              if (0xf < local_60) {
                pppppppcVar17 = local_78[0];
              }
              if (pppppppcVar17 == (char *******)0x0) {
                uVar18 = 0;
              }
              else {
                uVar18 = 0x811c9dc5;
                cVar6 = *(char *)pppppppcVar17;
                while (cVar6 != '\0') {
                  pppppppcVar17 = (char *******)((longlong)pppppppcVar17 + 1);
                  uVar18 = ((int)cVar6 ^ uVar18) * 0x1000193;
                  cVar6 = *(char *)pppppppcVar17;
                }
              }
              iVar9 = FUN_18027d2c0(uVar18);
              if (iVar9 == -1) goto LAB_1803c3c02;
            }
          }
          goto LAB_1803c3bb2;
        }
        pppppppcVar17 = (char *******)local_78;
        if (0xf < local_60) {
          pppppppcVar17 = local_78[0];
        }
        if ((local_68 == 0x11) &&
           (iVar9 = memcmp(pppppppcVar17,"C_CS2HudModelArms",0x11), iVar9 == 0)) goto LAB_1803c3bb2;
      }
      else {
LAB_1803c3bb2:
        iVar9 = (int)local_a0;
        puVar20 = puVar26;
        do {
          puVar21 = (undefined *)0x0;
          if (puVar20 == (undefined *)0x0) break;
          if (puVar20 == puVar13) goto LAB_1803c3c10;
          FUN_1803c4550();
          puVar20 = local_b0;
          if (((local_a8 == '\0') || (local_b0 == (undefined *)0x0)) ||
             (iVar10 = FUN_1803c4390(&local_58,local_b0), iVar10 != iVar9)) goto LAB_1803c3c02;
          iVar22 = iVar22 + 1;
          puVar21 = puVar20;
        } while (iVar22 < 4);
        if (puVar21 == puVar13) {
LAB_1803c3c10:
          FUN_18015c010(local_78);
          goto LAB_1803c3c23;
        }
      }
LAB_1803c3c02:
      FUN_18015c010(local_78);
      goto LAB_1803c3a6e;
    }
    if (param_5 == '\0') goto LAB_1803c3a6e;
  }
LAB_1803c3c23:
  if (local_88 != (undefined8 *)0x0) {
    *local_88 = puVar26;
  }
LAB_1803c3a6e:
  if (plVar16 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar16 + 1;
    lVar15 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar15 == 1) {
      (**(code **)*plVar16)(plVar16);
      LOCK();
      piVar2 = (int *)((longlong)plVar16 + 0xc);
      iVar22 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar22 == 1) {
        (**(code **)(*plVar16 + 8))(plVar16);
      }
    }
  }
}



