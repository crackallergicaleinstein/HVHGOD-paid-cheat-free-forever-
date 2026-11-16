// FUN_180375c90 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180375c90 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180375c90(void)

{
  longlong *plVar1;
  char cVar2;
  char cVar3;
  short sVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  ULONGLONG UVar9;
  undefined **ppuVar10;
  float *pfVar11;
  ULONGLONG UVar12;
  undefined8 *puVar13;
  char cVar14;
  char *pcVar15;
  undefined **ppuVar16;
  longlong lVar17;
  longlong lVar18;
  uint uVar19;
  ulonglong uVar20;
  bool bVar21;
  float fVar22;
  float fVar23;
  undefined4 uVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 extraout_var [56];
  undefined1 auVar27 [64];
  undefined1 extraout_var_00 [56];
  undefined1 auVar28 [64];
  float fVar29;
  undefined1 auVar30 [64];
  float fVar31;
  undefined1 auVar32 [16];
  undefined1 auVar33 [64];
  undefined1 auVar34 [16];
  undefined1 auStack_288 [32];
  int local_268;
  undefined **local_260;
  undefined8 local_248;
  uint local_240;
  char *local_238;
  float local_230 [2];
  int iStack_228;
  undefined4 uStack_224;
  float local_220 [3];
  int iStack_214;
  float local_210;
  uint uStack_20c;
  float fStack_208;
  float fStack_204;
  float local_200;
  undefined1 local_1fc [4];
  undefined1 *local_1f8;
  longlong local_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined1 local_1a8 [32];
  undefined8 local_188;
  undefined4 local_180;
  undefined1 local_178 [112];
  undefined8 local_108;
  ulonglong local_100;
  undefined *local_f8;
  undefined4 local_f0;
  float local_e8;
  uint local_e4;
  float local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  ulonglong local_b0;
  
  local_b0 = DAT_1808d5f00 ^ (ulonglong)auStack_288;
  local_240 = (uint)DAT_180cc8c48;
  if ((DAT_180902c30 != -1) && (DAT_180902c40 != local_240)) {
    FUN_180376cc0();
  }
  lVar8 = DAT_180c64430;
  lVar17 = 0;
  if (DAT_180c64430 == 0) {
    local_238 = (char *)0x0;
  }
  else {
    local_238 = (char *)0x0;
    lVar7 = FUN_18017ea70();
    *(int *)(lVar7 + 4) = *(int *)(lVar7 + 4) + 1;
    cVar3 = FUN_1804514c0(&local_238,lVar8,8);
    if (cVar3 == '\0') {
      bVar21 = false;
      lVar8 = FUN_18017ea70();
      if (*(int *)(lVar8 + 4) != 0) {
        *(int *)(lVar8 + 4) = *(int *)(lVar8 + 4) + -1;
      }
      local_238 = local_d8;
    }
    else {
      bVar21 = true;
      lVar8 = FUN_18017ea70();
      if (*(int *)(lVar8 + 4) != 0) {
        *(int *)(lVar8 + 4) = *(int *)(lVar8 + 4) + -1;
      }
    }
    if (!bVar21) {
      local_238 = (char *)0x0;
    }
    if (((local_238 != (char *)0x0) && (DAT_180902c38 != (char *)0x0)) &&
       (local_238 != DAT_180902c38)) goto LAB_180376070;
  }
  pcVar15 = local_238;
  AcquireSRWLockShared((PSRWLOCK)&DAT_180bb88c0);
  local_d8 = _DAT_180bb8890;
  uStack_d0 = lRam0000000180bb8898;
  uStack_c8 = lRam0000000180bb88a0;
  uStack_c0 = uRam0000000180bb88a8;
  cVar3 = cRam0000000180bb88b8;
  ReleaseSRWLockShared((PSRWLOCK)&DAT_180bb88c0);
  plVar1 = &uStack_c8;
  if (cVar3 != '\0') {
    plVar1 = &uStack_d0;
  }
  lVar8 = *plVar1;
  if ((lVar8 == 0) || (pcVar15 == (char *)0x0)) goto LAB_180376070;
  iVar6 = DAT_180c6fa68;
  if (DAT_180c6fa68 == 0) {
    UVar9 = GetTickCount64();
    if (UVar9 < DAT_180c6fa60) {
      iVar6 = 0;
    }
    else {
      local_108 = &DAT_180901890;
      iVar6 = FUN_1805f68d0(&DAT_180901890);
      if (iVar6 != 0) goto LAB_180376caa;
      if (DAT_1809018dc == 0x7fffffff) {
        DAT_1809018dc = 0x7ffffffe;
        goto LAB_180376c9f;
      }
      if ((DAT_180c6fa68 == 0) && (DAT_180c6fa60 <= UVar9)) {
        DAT_180c6fa68 = FUN_1804174b0("C_BaseEntity",0x9d930423);
        if (DAT_180c6fa68 == 0) {
          DAT_180c6fa60 = UVar9 + 1000;
        }
        else {
          DAT_180c6fa60 = 0xffffffffffffffff;
        }
      }
      iVar6 = DAT_180c6fa68;
      FUN_1805f68fc(&DAT_180901890);
    }
  }
  iVar5 = DAT_180c6fa80;
  if (DAT_180c6fa80 == 0) {
    UVar9 = GetTickCount64();
    if (UVar9 < DAT_180c6fa78) {
      iVar5 = 0;
    }
    else {
      local_108 = &DAT_1809018e0;
      iVar5 = FUN_1805f68d0(&DAT_1809018e0);
      if (iVar5 != 0) goto LAB_180376caa;
      if (DAT_18090192c == 0x7fffffff) {
        DAT_18090192c = 0x7ffffffe;
        goto LAB_180376c9f;
      }
      if ((DAT_180c6fa80 == 0) && (DAT_180c6fa78 <= UVar9)) {
        DAT_180c6fa80 = FUN_1804174b0("CGameSceneNode",0xe8b4eae5);
        if (DAT_180c6fa80 == 0) {
          DAT_180c6fa78 = UVar9 + 1000;
        }
        else {
          DAT_180c6fa78 = 0xffffffffffffffff;
        }
      }
      iVar5 = DAT_180c6fa80;
      FUN_1805f68fc(&DAT_1809018e0);
    }
  }
  if ((iVar6 == 0) || (iVar5 == 0)) {
    FUN_180374e20("scene_schema");
    goto LAB_180376070;
  }
  lVar8 = iVar6 + lVar8;
  if (lVar8 == 0) {
    bVar21 = false;
    pcVar15 = local_d8;
  }
  else {
    local_108 = (char *)0x0;
    lVar7 = FUN_18017ea70();
    *(int *)(lVar7 + 4) = *(int *)(lVar7 + 4) + 1;
    cVar3 = FUN_1804514c0(&local_108,lVar8,8);
    if (cVar3 == '\0') {
      bVar21 = false;
      lVar8 = FUN_18017ea70();
      if (*(int *)(lVar8 + 4) != 0) {
        *(int *)(lVar8 + 4) = *(int *)(lVar8 + 4) + -1;
      }
      pcVar15 = local_d8;
    }
    else {
      bVar21 = true;
      lVar8 = FUN_18017ea70();
      if (*(int *)(lVar8 + 4) != 0) {
        *(int *)(lVar8 + 4) = *(int *)(lVar8 + 4) + -1;
      }
      pcVar15 = local_108;
    }
  }
  if (!bVar21) {
    pcVar15 = (char *)0x0;
  }
  if ((pcVar15 == (char *)0x0) || (pcVar15 + iVar5 == (char *)0x0)) goto LAB_180376070;
  local_108 = (char *)0x0;
  local_100 = local_100 & 0xffffffff00000000;
  auVar27 = ZEXT864(0);
  lVar8 = FUN_18017ea70();
  *(int *)(lVar8 + 4) = *(int *)(lVar8 + 4) + 1;
  cVar3 = FUN_1804514c0(&local_108,pcVar15 + iVar5,0xc);
  if (cVar3 == '\0') {
    lVar8 = FUN_18017ea70();
    if (*(int *)(lVar8 + 4) != 0) {
      *(int *)(lVar8 + 4) = *(int *)(lVar8 + 4) + -1;
    }
    goto LAB_180376070;
  }
  lVar8 = FUN_18017ea70();
  if (*(int *)(lVar8 + 4) != 0) {
    *(int *)(lVar8 + 4) = *(int *)(lVar8 + 4) + -1;
  }
  local_e8 = (float)local_108;
  local_e4 = local_108._4_4_;
  uVar19 = local_108._4_4_;
  sVar4 = thunk_FUN_180624430();
  if ((0 < sVar4) || ((uVar19 & 0x7f800000) == 0x7f800000)) goto LAB_180376070;
  auVar30 = ZEXT464((uint)local_100);
  if (((uint)local_100 & 0x7f800000) == 0x7f800000) goto LAB_180376070;
  fVar22 = 512.0;
  local_108 = (char *)CONCAT44(local_108._4_4_,0x44000000);
  auVar33 = ZEXT464(0xc3800000);
  local_248._0_4_ = 0xc3800000;
  auVar28 = ZEXT464(DAT_180cc8c60);
  local_f8 = (undefined *)CONCAT44(local_f8._4_4_,DAT_180cc8c60);
  sVar4 = thunk_FUN_180624430(DAT_180cc8c60);
  if (sVar4 < 1) {
    ppuVar16 = (undefined **)&local_248;
    if (auVar33._0_4_ <= auVar28._0_4_) {
      ppuVar16 = &local_f8;
    }
    ppuVar10 = (undefined **)&local_108;
    if (auVar28._0_4_ <= fVar22) {
      ppuVar10 = ppuVar16;
    }
    local_e0 = *(float *)ppuVar10;
  }
  else {
    local_e0 = 0.0;
  }
  local_e0 = local_e0 + auVar30._0_4_;
  if ((DAT_180cce330 & 1) == 0) {
    DAT_180cce330 = DAT_180cce330 | 1;
    atexit(FUN_180662340);
  }
  lVar7 = DAT_180901820;
  lVar8 = DAT_1808da460;
  local_108 = DAT_180c6fa70;
  if ((DAT_180901820 != DAT_1808da460) || (pcVar15 = DAT_180c6fa70, DAT_180c6fa70 == (char *)0x0)) {
    UVar9 = GetTickCount64();
    if ((lVar7 == lVar8) && (UVar9 < DAT_180c6fa48)) goto LAB_18037634f;
    local_f8 = &DAT_1809017d0;
    iVar6 = FUN_1805f68d0(&DAT_1809017d0);
    if (iVar6 != 0) goto LAB_180376caa;
    if (DAT_18090181c == 0x7fffffff) {
      DAT_18090181c = 0x7ffffffe;
      goto LAB_180376c9f;
    }
    local_108 = DAT_180c6fa70;
    if (DAT_180901820 == lVar8) {
      if ((DAT_180c6fa70 == (char *)0x0) && (DAT_180c6fa48 <= UVar9)) goto LAB_1803762a9;
    }
    else {
      DAT_1809017c0 = 1000;
LAB_1803762a9:
      lVar7 = -1;
      do {
        local_1f0 = lVar7 + 1;
        pcVar15 = "lient.dll:4883EC58F3410F105104F3410F1009F3410F105908" + lVar7;
        lVar7 = local_1f0;
      } while (*pcVar15 != '\0');
      local_1f8 = &DAT_180825930;
      local_108 = "patterns::particle_set_control_point";
      local_100 = 0x24;
      local_108 = (char *)FUN_1800e5d20(&local_108,&local_1f8);
      DAT_180901820 = lVar8;
      DAT_180c6fa48 = 0xffffffffffffffff;
      if (local_108 == (char *)0x0) {
        DAT_180c6fa48 = UVar9 + DAT_1809017c0;
        if (DAT_1809017c0 < 60000) {
          DAT_1809017c0 = DAT_1809017c0 * 2;
        }
        else {
          DAT_1809017c0 = 60000;
        }
      }
      else {
        DAT_1809017c0 = 1000;
      }
    }
    pcVar15 = local_108;
    DAT_180c6fa70 = local_108;
    FUN_1805f68fc(&DAT_1809017d0);
    if (pcVar15 == (char *)0x0) {
LAB_18037634f:
      FUN_180374e20("controls");
    }
  }
  UVar9 = GetTickCount64();
  if (DAT_180902cd8 != local_240) {
    DAT_180902cd8 = local_240;
    DAT_180902cd0 = 0;
  }
  if (DAT_180902c30 == -1) {
    if (UVar9 < DAT_180902cd0) {
    }
    DAT_180902cd0 = UVar9 + 1000;
    FUN_180375130(&DAT_180902c30);
    if (DAT_180902c30 == -1) {
    }
    DAT_180902cd0 = 0;
  }
  auVar26 = auVar27._0_16_;
  local_230[0] = DAT_180cc8c50;
  local_230[1] = (float)DAT_180cc8c54;
  iStack_228 = DAT_180cc8c58;
  uStack_224 = DAT_180cc8c5c;
  if (DAT_180902c49 == '\0') {
LAB_180376452:
    local_260 = (undefined **)CONCAT44(local_260._4_4_,DAT_180cc8c5c);
    local_268 = DAT_180cc8c58;
    puVar13 = (undefined8 *)FUN_1803746f0(local_178,local_240);
    local_1e8 = *puVar13;
    uStack_1e0 = puVar13[1];
    uStack_1d8 = puVar13[2];
    uStack_1d0 = puVar13[3];
    local_1c8 = puVar13[4];
    uStack_1c0 = puVar13[5];
    uStack_1b8 = puVar13[6];
    uStack_1b0 = puVar13[7];
    local_1a8 = *(undefined1 (*) [32])(puVar13 + 8);
    local_188 = puVar13[0xc];
    local_180 = *(undefined4 *)(puVar13 + 0xd);
    uVar20 = 2;
    puVar13 = &uStack_1d0;
    do {
      iVar6 = DAT_180902c30;
      if (DAT_180902c49 == '\0') {
LAB_18037650c:
        local_f8 = (undefined *)CONCAT44(local_f8._4_4_,*(undefined4 *)puVar13);
        local_f8 = (undefined *)*puVar13;
        local_f0 = *(undefined4 *)(puVar13 + 1);
        auVar27 = ZEXT1664(auVar27._0_16_);
        lVar8 = FUN_18017ea70();
        *(int *)(lVar8 + 4) = *(int *)(lVar8 + 4) + 1;
        local_260 = &local_f8;
        local_268 = (int)uVar20;
        FUN_180376f90(&local_248,pcVar15,local_238,iVar6);
        lVar8 = FUN_18017ea70();
        if (*(int *)(lVar8 + 4) != 0) {
          *(int *)(lVar8 + 4) = *(int *)(lVar8 + 4) + -1;
        }
        if (local_248._1_1_ == '\0') {
          FUN_180374e20("custom_controls");
          goto LAB_180376070;
        }
        *(undefined8 *)((longlong)&DAT_180902c64 + -(longlong)&uStack_1d0 + (longlong)puVar13) =
             *puVar13;
        *(undefined4 *)(-(longlong)&uStack_1d0 + 0x180902c6c + (longlong)puVar13) =
             *(undefined4 *)(puVar13 + 1);
      }
      else {
        pfVar11 = (float *)(uVar20 * 0xc + 0x180902c4c);
        if (pfVar11 != &DAT_180902c58 + uVar20 * 3) {
          lVar8 = uVar20 * 0xc - (longlong)pfVar11;
          do {
            if (*pfVar11 != *(float *)(local_1a8 + lVar8 + -0x40 + (longlong)pfVar11))
            goto LAB_18037650c;
            pfVar11 = pfVar11 + 1;
          } while (pfVar11 != &DAT_180902c58 + uVar20 * 3);
        }
      }
      auVar26 = auVar27._0_16_;
      uVar19 = (int)uVar20 + 1;
      uVar20 = (ulonglong)uVar19;
      puVar13 = (undefined8 *)((longlong)puVar13 + 0xc);
    } while ((int)uVar19 < 9);
    _DAT_180902cdc = CONCAT44(local_230[1],local_230[0]);
    uRam0000000180902ce4 = CONCAT44(uStack_224,iStack_228);
  }
  else {
    lVar8 = 0;
    do {
      if (*(float *)((longlong)local_230 + lVar8) != *(float *)((longlong)&DAT_180902cdc + lVar8))
      goto LAB_180376452;
      lVar7 = lVar8 + 4;
      lVar8 = lVar8 + 4;
    } while ((float *)((longlong)local_230 + lVar7) != local_220);
  }
  if ((DAT_180cce330 & 1) == 0) {
    DAT_180cce330 = DAT_180cce330 | 1;
    auVar27 = ZEXT1664(auVar26);
    atexit(FUN_180662340);
    auVar26 = auVar27._0_16_;
  }
  lVar7 = DAT_180901880;
  lVar8 = DAT_1808da460;
  if ((DAT_180901880 != DAT_1808da460) || (lVar18 = DAT_180c6fa58, DAT_180c6fa58 == 0)) {
    auVar27 = ZEXT1664(auVar26);
    UVar12 = GetTickCount64();
    auVar26 = auVar27._0_16_;
    if ((lVar7 == lVar8) && (UVar12 < DAT_180c6fa50)) {
      lVar18 = 0;
    }
    else {
      local_f8 = &DAT_180901830;
      iVar6 = FUN_1805f68d0(&DAT_180901830);
      if (iVar6 != 0) {
LAB_180376caa:
                    /* WARNING: Subroutine does not return */
        FUN_1805f6d44(5);
      }
      if (DAT_18090187c == 0x7fffffff) {
        DAT_18090187c = 0x7ffffffe;
LAB_180376c9f:
                    /* WARNING: Subroutine does not return */
        FUN_1805f6d44(6);
      }
      if (DAT_180901880 == lVar8) {
        if ((DAT_180c6fa58 == 0) && (DAT_180c6fa50 <= UVar12)) goto LAB_180376697;
      }
      else {
        DAT_180901758 = 1000;
LAB_180376697:
        uVar20 = 1000;
        lVar7 = -1;
        do {
          local_1f0 = lVar7 + 1;
          pcVar15 = "lient.dll:48895C24??48896C24??48897424??574883EC40488BF9498BE9" + lVar7;
          lVar7 = local_1f0;
        } while (*pcVar15 != '\0');
        local_1f8 = &DAT_1808259c0;
        local_d8 = "patterns::particle_set_transform";
        uStack_d0 = 0x20;
        DAT_180c6fa58 = FUN_1800e5d20(&local_d8,&local_1f8);
        DAT_180901880 = lVar8;
        DAT_180c6fa50 = 0xffffffffffffffff;
        if (DAT_180c6fa58 == 0) {
          DAT_180c6fa50 = DAT_180901758 + UVar12;
          uVar20 = DAT_180901758 * 2;
          if (59999 < DAT_180901758) {
            uVar20 = 60000;
          }
        }
        DAT_180901758 = uVar20;
      }
      lVar18 = DAT_180c6fa58;
      FUN_1805f68fc(&DAT_180901830);
      auVar26 = auVar27._0_16_;
    }
  }
  cVar2 = DAT_180902ccc;
  cVar3 = DAT_180902c49;
  if (DAT_180cc8d58 == '\0') {
LAB_180376769:
    cVar14 = '\0';
  }
  else {
    if (local_240 != 1) {
      cVar14 = DAT_180cc8dd1;
      if (local_240 == 0) {
        cVar14 = DAT_180cc8dd0;
      }
      if (cVar14 == '\0') goto LAB_180376769;
    }
    cVar14 = '\x01';
  }
  local_220[0] = DAT_180cc8dc4;
  local_220[1] = (float)DAT_180cc8dc0;
  local_220[2] = DAT_180cc8dc8;
  iStack_214 = DAT_180cc8dcc;
  if (((DAT_180902c49 == '\0') || ((lVar18 != 0) != (bool)DAT_180902ccc)) ||
     (cVar14 != DAT_180902d08)) {
LAB_18037681d:
    if ((lVar18 == 0) || (cVar14 == '\0')) {
      _DAT_180902d04 = 0;
      local_f8 = (undefined *)0x0;
    }
    else {
      local_260 = (undefined **)((double)UVar9 * 0.001);
      local_268 = DAT_180cc8dcc;
      auVar27 = ZEXT1664(auVar26);
      puVar13 = (undefined8 *)FUN_1803743e0(&local_1f8);
      auVar26 = auVar27._0_16_;
      local_f8 = (undefined *)*puVar13;
      _DAT_180902d04 = *(undefined4 *)(puVar13 + 1);
    }
    local_f0 = _DAT_180902d04;
    _DAT_180902cfc = local_f8;
    _DAT_180902cec = CONCAT44(local_220[1],local_220[0]);
    uRam0000000180902cf4 = CONCAT44(iStack_214,local_220[2]);
    DAT_180902d08 = cVar14;
  }
  else {
    lVar8 = 0;
    do {
      if (*(float *)((longlong)local_220 + lVar8) != *(float *)((longlong)&DAT_180902cec + lVar8))
      goto LAB_18037681d;
      lVar7 = lVar8 + 4;
      lVar8 = lVar8 + 4;
    } while ((float *)((longlong)local_220 + lVar7) != &local_210);
    if ((cVar14 != '\0') && (auVar26._0_4_ < DAT_180cc8dc8)) goto LAB_18037681d;
  }
  iVar6 = DAT_180902c30;
  auVar32 = ZEXT416((uint)DAT_180902d00);
  local_210 = local_e8;
  uStack_20c = local_e4;
  fStack_208 = local_e0;
  fStack_204 = DAT_180902cfc;
  local_200 = DAT_180902d00;
  if (cVar3 == '\0') {
LAB_180376952:
    if (lVar18 == 0) {
      auVar27 = ZEXT1664(auVar32);
      lVar8 = FUN_18017ea70();
      pcVar15 = local_108;
      *(int *)(lVar8 + 4) = *(int *)(lVar8 + 4) + 1;
      local_260 = (undefined **)&local_e8;
      FUN_180377030(&local_248,local_108,local_238,iVar6);
      lVar8 = FUN_18017ea70();
      uVar24 = auVar27._0_4_;
      if (*(int *)(lVar8 + 4) != 0) {
        *(int *)(lVar8 + 4) = *(int *)(lVar8 + 4) + -1;
      }
    }
    else {
      fVar22 = DAT_180902d00 * DAT_180902d00 + DAT_180902cfc * DAT_180902cfc;
      fVar23 = local_e8;
      uVar19 = local_e4;
      fVar31 = local_e0;
      if (fVar22 < 0.0) {
        auVar30 = ZEXT464((uint)DAT_180902cfc);
        auVar28 = ZEXT1664(auVar32);
        auVar33 = ZEXT1664(auVar26);
        auVar27._0_8_ = FUN_18061e150();
        auVar26 = auVar33._0_16_;
        auVar32 = auVar28._0_16_;
        fVar22 = auVar30._0_4_;
        auVar27._8_56_ = extraout_var;
        auVar25 = auVar27._0_16_;
      }
      else {
        auVar25 = ZEXT416((uint)SQRT(fVar22));
        fVar22 = DAT_180902cfc;
      }
      auVar25 = vminss_avx(SUB6416(ZEXT464(0x3f800000),0),auVar25);
      fVar29 = auVar25._0_4_;
      if ((fVar22 != auVar26._0_4_) || (auVar34 = auVar26, auVar32._0_4_ != auVar26._0_4_)) {
        auVar27 = ZEXT1664(auVar25);
        auVar28 = ZEXT1664(auVar32);
        auVar33 = ZEXT1664(auVar26);
        auVar30._0_8_ = FUN_180636c80();
        fVar29 = auVar27._0_4_;
        auVar32 = auVar28._0_16_;
        auVar30._8_56_ = extraout_var_00;
        auVar26 = auVar30._0_16_;
        auVar34 = auVar33._0_16_;
      }
      auVar27 = ZEXT464((uint)(fVar29 * 80.0 * 0.017453292 * 0.5));
      auVar30 = ZEXT1664(auVar32);
      auVar28 = ZEXT1664(auVar26);
      auVar33 = ZEXT1664(auVar34);
      fVar22 = (float)FUN_180638e00();
      local_d8 = (char *)CONCAT44(uVar19,fVar23);
      uStack_d0 = CONCAT44(auVar33._0_4_,fVar31);
      fVar23 = (float)FUN_180638e00(auVar28._0_8_);
      uStack_c8 = CONCAT44(uStack_c8._4_4_,fVar23 * fVar22);
      fVar23 = (float)FUN_180637540(auVar28._0_8_);
      uStack_c8 = CONCAT44(-fVar23 * fVar22,(undefined4)uStack_c8);
      uStack_c0 = CONCAT44(uStack_c0._4_4_,auVar33._0_4_);
      uVar24 = FUN_180637540(auVar27._0_8_);
      iVar6 = DAT_180902c30;
      uStack_c0 = CONCAT44(uVar24,(undefined4)uStack_c0);
      lVar8 = FUN_18017ea70();
      *(int *)(lVar8 + 4) = *(int *)(lVar8 + 4) + 1;
      local_260 = (undefined **)&local_d8;
      FUN_180376fe0(&local_248,lVar18,local_238,iVar6);
      lVar8 = FUN_18017ea70();
      uVar24 = auVar30._0_4_;
      if (*(int *)(lVar8 + 4) != 0) {
        *(int *)(lVar8 + 4) = *(int *)(lVar8 + 4) + -1;
      }
      pcVar15 = local_108;
    }
    if ((char)((uint)(undefined4)local_248 >> 8) == '\0') {
      pcVar15 = "origin_call";
      if (lVar18 != 0) {
        pcVar15 = "transform_call";
      }
      FUN_180374e20(pcVar15);
      goto LAB_180376070;
    }
    _DAT_180902cb8 = CONCAT44(uStack_20c,local_210);
    uRam0000000180902cc0 = CONCAT44(fStack_204,fStack_208);
    cVar3 = DAT_180902c49;
    _DAT_180902cc8 = uVar24;
    DAT_180902ccc = lVar18 != 0;
  }
  else {
    lVar8 = 0;
    do {
      if (*(float *)((longlong)local_220 + lVar8 + 0x10) !=
          *(float *)((longlong)&DAT_180902cb8 + lVar8)) goto LAB_180376952;
      lVar7 = lVar8 + -0x10;
      lVar8 = lVar8 + 4;
    } while (local_1fc + lVar7 != local_1fc);
    if ((lVar18 != 0) != (bool)cVar2) goto LAB_180376952;
    pcVar15 = local_108;
  }
  iVar6 = DAT_180902c30;
  fVar22 = (float)DAT_180cc8c4c;
  fVar23 = (float)DAT_180cc8c4d;
  local_108 = (char *)CONCAT44(fVar23,fVar22);
  fVar31 = (float)DAT_180cc8c4e;
  local_100 = CONCAT44(local_100._4_4_,fVar31);
  if (cVar3 != '\0') {
    while (*(float *)((longlong)&DAT_180902c58 + lVar17) == *(float *)(local_178 + lVar17 + 0x70)) {
      bVar21 = lVar17 == 8;
      lVar17 = lVar17 + 4;
      if (bVar21) {
        DAT_180902c49 = 1;
      }
    }
  }
  local_108 = (char *)CONCAT44(fVar23,fVar22);
  local_100 = CONCAT44(local_100._4_4_,fVar31);
  lVar8 = FUN_18017ea70();
  *(int *)(lVar8 + 4) = *(int *)(lVar8 + 4) + 1;
  local_260 = (undefined **)&local_108;
  local_268 = 1;
  FUN_180376f90(&local_248,pcVar15,local_238,iVar6);
  lVar8 = FUN_18017ea70();
  if (*(int *)(lVar8 + 4) != 0) {
    *(int *)(lVar8 + 4) = *(int *)(lVar8 + 4) + -1;
  }
  if (local_248._1_1_ != '\0') {
    DAT_180902c49 = 1;
    DAT_180902c58 = fVar22;
    DAT_180902c5c = fVar23;
    _DAT_180902c60 = fVar31;
  }
  FUN_180374e20("color_call");
LAB_180376070:
  FUN_180376cc0();
}



