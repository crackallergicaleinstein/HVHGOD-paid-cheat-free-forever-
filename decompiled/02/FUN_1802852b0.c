// FUN_1802852b0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802852b0 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1802852b0(void)

{
  int *piVar1;
  char *pcVar2;
  undefined1 auVar3 [16];
  bool bVar4;
  bool bVar5;
  undefined8 uVar6;
  char cVar7;
  char cVar8;
  short sVar9;
  int iVar10;
  undefined1 (*pauVar11) [16];
  longlong lVar12;
  longlong *plVar13;
  undefined1 (*pauVar14) [16];
  longlong lVar15;
  ULONGLONG UVar16;
  byte bVar17;
  ushort uVar18;
  undefined8 *puVar19;
  undefined1 (*pauVar20) [16];
  ULONGLONG UVar21;
  longlong lVar22;
  ulonglong uVar23;
  longlong *plVar24;
  uint uVar25;
  uint uVar26;
  bool bVar27;
  undefined8 extraout_XMM0_Qa;
  undefined1 extraout_var [56];
  undefined1 auVar28 [64];
  float fVar29;
  undefined1 auVar30 [64];
  undefined1 auVar31 [64];
  undefined1 auVar32 [64];
  undefined1 auVar33 [64];
  undefined1 auVar34 [64];
  float fVar35;
  undefined1 auVar36 [64];
  float fVar37;
  undefined4 uVar38;
  undefined1 auVar39 [16];
  undefined1 auVar40 [64];
  float fVar41;
  undefined1 auStack_1e8 [32];
  undefined2 *local_1c8;
  undefined8 *local_1c0;
  undefined2 local_1b8;
  undefined2 local_1b6;
  undefined8 local_1b0;
  uint local_1a8 [2];
  longlong local_1a0;
  undefined1 (*local_198) [16];
  longlong local_190;
  undefined1 local_188 [8];
  longlong lStack_180;
  undefined1 (*local_178) [16];
  undefined8 local_170;
  longlong *local_168;
  undefined2 local_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined1 (*local_148) [16];
  undefined1 local_138 [16];
  longlong local_128;
  longlong lStack_120;
  undefined1 (*pauStack_118) [16];
  undefined1 auStack_110 [8];
  undefined8 uStack_108;
  undefined4 uStack_100;
  uint uStack_fc;
  uint uStack_f8;
  undefined1 local_f4;
  undefined1 uStack_f3;
  undefined1 uStack_f2;
  undefined1 uStack_f1;
  undefined1 local_f0 [16];
  undefined8 local_e0;
  longlong lStack_d8;
  longlong lStack_d0;
  undefined8 uStack_c8;
  ulonglong local_b8;
  
  local_b8 = DAT_1808d5f00 ^ (ulonglong)auStack_1e8;
  local_158 = (undefined1  [8])((ulonglong)local_158 & 0xffffffff00000000);
  pauVar11 = (undefined1 (*) [16])GetTickCount64();
  local_178 = pauVar11;
  AcquireSRWLockShared((PSRWLOCK)&DAT_180bb88c0);
  local_e0 = _DAT_180bb8890;
  lStack_d8 = lRam0000000180bb8898;
  lStack_d0 = lRam0000000180bb88a0;
  uStack_c8 = uRam0000000180bb88a8;
  cVar7 = cRam0000000180bb88b8;
  ReleaseSRWLockShared((PSRWLOCK)&DAT_180bb88c0);
  lVar12 = FUN_180287010();
  lVar15 = lStack_d0;
  if (cVar7 != '\0') {
    lVar15 = lStack_d8;
  }
  local_1a0 = lVar12;
  local_190 = lVar15;
  if ((DAT_180cc7f78 == '\0') || ((lStack_d8 == 0 && (lStack_d0 == 0)))) {
    local_138 = (undefined1  [16])0x0;
    FUN_180287540(cVar7,local_138);
    DAT_180b8f930 = (undefined1 (*) [16])0x0;
  }
  iVar10 = FUN_1805f68d0(&DAT_180b8f8c0);
  if (iVar10 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(5);
  }
  if (DAT_180b8f90c == 0x7fffffff) {
    DAT_180b8f90c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(6);
  }
  auVar30 = ZEXT1664(_DAT_180b8f910);
  _local_188 = _DAT_180b8f910;
  local_138 = _DAT_180b8f920;
  FUN_1805f68fc(&DAT_180b8f8c0);
  local_f0 = (undefined1  [16])0x0;
  plVar13 = (longlong *)FUN_180113860(&DAT_180b8f8b8);
  plVar24 = DAT_180b8f8b0;
  pauVar20 = auVar30._0_8_;
  local_f0._8_8_ = plVar13;
  local_f0._0_8_ = DAT_180b8f8b0;
  if (plVar13 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
    UNLOCK();
  }
  LOCK();
  UNLOCK();
  bVar17 = (byte)DAT_180b8f8b8;
  DAT_180b8f8b8 = (longlong)plVar13;
  local_168 = plVar13;
  if ((bVar17 & 3) == 2) {
    FUN_1805fa36c(&DAT_180b8f8b8);
    pauVar20 = auVar30._0_8_;
    plVar24 = (longlong *)local_f0._0_8_;
  }
  lVar22 = DAT_180bb8958;
  pauVar14 = (undefined1 (*) [16])(DAT_180b8f930[-4] + 0xe);
  if (DAT_180b8f930 < (undefined1 (*) [16])0x32) {
    pauVar14 = (undefined1 (*) [16])0x0;
  }
  if ((pauVar14 < pauVar20) || (pauVar14 < (ulonglong)local_138._0_8_)) {
    bVar4 = true;
  }
  else {
    bVar4 = false;
  }
  if ((plVar24 == (longlong *)0x0) || (*(char *)((longlong)plVar24 + 0x36) != '\0')) {
    bVar27 = lVar12 == 0;
  }
  else if ((plVar24[1] == lVar12) && (*plVar24 == lVar15)) {
    bVar27 = true;
  }
  else {
    bVar27 = false;
  }
  local_198 = pauVar20;
  if (((!bVar4) && (bVar27)) && (pauVar11 < DAT_180b8f930)) goto LAB_180286f0b;
  DAT_180b8f930 = (undefined1 (*) [16])(pauVar11[3] + 2);
  lVar15 = FUN_18017ea70();
  *(int *)(lVar15 + 4) = *(int *)(lVar15 + 4) + 1;
  if (lVar22 == 0) {
    bVar4 = false;
    pauVar14 = local_178;
  }
  else {
    local_1b0 = (undefined1 (*) [16])0x0;
    cVar7 = FUN_1804514f0(&local_1b0,lVar22,8);
    if (cVar7 == '\0') {
      bVar4 = false;
      pauVar14 = local_178;
    }
    else {
      bVar4 = true;
      pauVar14 = local_1b0;
    }
  }
  lVar15 = FUN_18017ea70();
  if (*(int *)(lVar15 + 4) != 0) {
    *(int *)(lVar15 + 4) = *(int *)(lVar15 + 4) + -1;
  }
  auVar30 = ZEXT864(0);
  if ((!bVar4) || (pauVar14 == (undefined1 (*) [16])0x0)) {
    local_1b0._0_5_ = (uint5)(uint)local_1b0;
    local_158 = (undefined1  [8])local_1b0;
  }
  else {
    lVar15 = FUN_18017ea70();
    *(int *)(lVar15 + 4) = *(int *)(lVar15 + 4) + 1;
    if (pauVar14 + 3 == (undefined1 (*) [16])0x0) {
LAB_18028556d:
      local_158._0_5_ = (uint5)(uint)(float)local_158;
    }
    else {
      local_1a8[0] = auVar30._0_4_;
      cVar7 = FUN_1804514f0(local_1a8,pauVar14 + 3,4);
      if (cVar7 == '\0') goto LAB_18028556d;
      local_158._0_5_ = CONCAT14(1,local_1a8[0]);
    }
    lVar15 = FUN_18017ea70();
    if (*(int *)(lVar15 + 4) != 0) {
      *(int *)(lVar15 + 4) = *(int *)(lVar15 + 4) + -1;
    }
  }
  UVar21 = (ULONGLONG)DAT_180c653c0;
  local_1b0 = (undefined1 (*) [16])local_158;
  if (DAT_180c653c0 == 0) {
    UVar16 = GetTickCount64();
    if (UVar16 < DAT_180c653c8) {
      UVar21 = 0;
    }
    else {
      local_150 = (undefined1 (*) [16])&DAT_1808f2ba0;
      iVar10 = FUN_1805f68d0(&DAT_1808f2ba0);
      if (iVar10 != 0) goto LAB_180286fc3;
      if (DAT_1808f2bec == 0x7fffffff) {
        DAT_1808f2bec = 0x7ffffffe;
        goto LAB_180286ff8;
      }
      UVar21 = (ULONGLONG)DAT_180c653c0;
      if ((DAT_180c653c0 == 0) && (DAT_180c653c8 <= UVar16)) {
        DAT_180c653c0 = FUN_1804174b0("C_PlantedC4",0xca7488e0);
        UVar21 = (ULONGLONG)DAT_180c653c0;
        if (DAT_180c653c0 == 0) {
          DAT_180c653c8 = UVar16 + 1000;
        }
        else {
          DAT_180c653c8 = 0xffffffffffffffff;
        }
      }
      FUN_1805f68fc(&DAT_1808f2ba0);
    }
  }
  if ((lVar12 == 0) || ((int)UVar21 == 0)) {
    local_1b6 = local_1b6 & 0xff;
    uVar18 = local_1b6;
  }
  else {
    lVar15 = FUN_18017ea70();
    *(int *)(lVar15 + 4) = *(int *)(lVar15 + 4) + 1;
    UVar21 = UVar21 + lVar12;
    if (UVar21 == 0) {
LAB_180285689:
      local_160 = local_160 & 0xff;
    }
    else {
      local_160 = local_160 & 0xff00;
      cVar7 = FUN_1804514f0(&local_160,UVar21,1);
      if (cVar7 == '\0') goto LAB_180285689;
      local_160 = CONCAT11(1,(char)local_160);
    }
    lVar15 = FUN_18017ea70();
    if (*(int *)(lVar15 + 4) != 0) {
      *(int *)(lVar15 + 4) = *(int *)(lVar15 + 4) + -1;
    }
    uVar18 = local_160;
  }
  cVar7 = (char)uVar18;
  if ((char)(uVar18 >> 8) == '\0') {
    cVar7 = '\0';
  }
  _auStack_110 = ZEXT816(0);
  uStack_fc = 0;
  uStack_f8 = 0;
  local_f4 = 0;
  uStack_f3 = 0;
  uStack_f2 = 0;
  uStack_f1 = 0;
  local_128 = local_190;
  uStack_100 = 0xffffffff;
  auVar40 = ZEXT464((uint)local_138._8_4_);
  fVar41 = (float)lStack_180;
  lStack_120 = lVar12;
  pauStack_118 = pauVar11;
  if (cVar7 == '\0') {
    if ((((pauVar20 != (undefined1 (*) [16])0x0) && ((float)lStack_180 == auVar30._0_4_)) &&
        (pauVar20 <= pauVar11)) && ((ulonglong)((longlong)pauVar11 - (longlong)pauVar20) < 0xfa))
    goto LAB_180286c0c;
    uVar26 = DAT_180c653b8;
    if (DAT_180c653b8 == 0) {
      UVar21 = GetTickCount64();
      if (UVar21 < DAT_180c653b0) {
        uVar26 = 0;
      }
      else {
        local_150 = (undefined1 (*) [16])&DAT_1808f2b00;
        iVar10 = FUN_1805f68d0(&DAT_1808f2b00);
        if (iVar10 != 0) goto LAB_180286fc3;
        if (DAT_1808f2b4c == 0x7fffffff) {
          DAT_1808f2b4c = 0x7ffffffe;
          goto LAB_180286ff8;
        }
        if ((DAT_180c653b8 == 0) && (DAT_180c653b0 <= UVar21)) {
          DAT_180c653b8 = FUN_1804174b0(&DAT_1807c5cd8,0xbe331ca8);
          if (DAT_180c653b8 == 0) {
            UVar21 = UVar21 + 1000;
          }
          else {
            UVar21 = 0xffffffffffffffff;
          }
          DAT_180c653b0 = UVar21;
        }
        uVar26 = DAT_180c653b8;
        FUN_1805f68fc(&DAT_1808f2b00);
      }
    }
    uVar25 = DAT_180c653bc;
    if (DAT_180c653bc == 0) {
      UVar21 = GetTickCount64();
      if (UVar21 < DAT_180c65398) {
        uVar25 = 0;
      }
      else {
        local_150 = (undefined1 (*) [16])&DAT_1808f2ab0;
        iVar10 = FUN_1805f68d0(&DAT_1808f2ab0);
        if (iVar10 != 0) goto LAB_180286fc3;
        if (DAT_1808f2afc == 0x7fffffff) {
          DAT_1808f2afc = 0x7ffffffe;
          goto LAB_180286ff8;
        }
        if ((DAT_180c653bc == 0) && (DAT_180c65398 <= UVar21)) {
          DAT_180c653bc = FUN_1804174b0(&DAT_1807c5cd8,0x4c4c86c9);
          if (DAT_180c653bc == 0) {
            UVar21 = UVar21 + 1000;
          }
          else {
            UVar21 = 0xffffffffffffffff;
          }
          DAT_180c65398 = UVar21;
        }
        uVar25 = DAT_180c653bc;
        FUN_1805f68fc(&DAT_1808f2ab0);
      }
    }
    uVar23 = UVar21 & 0xffffffffffffff00;
    local_1a8[0] = (uint)uVar23;
    auVar36 = ZEXT464(0x40400000);
    if (local_1b0._4_1_ == '\0') {
LAB_180285b3e:
      uVar38 = auVar36._0_4_;
      auVar31 = ZEXT464((uint)auStack_110._0_4_);
LAB_180285b43:
      cVar7 = '\0';
    }
    else {
      fVar29 = (float)local_158;
      sVar9 = thunk_FUN_180624430((ulonglong)local_158 & 0xffffffff);
      if (((0 < sVar9) || (uVar26 == 0)) || (uVar25 == 0)) goto LAB_180285b3e;
      plVar13 = (longlong *)FUN_1803d44c0(extraout_XMM0_Qa,&local_e0,2);
      plVar24 = (longlong *)*plVar13;
      local_150 = (undefined1 (*) [16])plVar13[1];
      if ((undefined1 (*) [16])plVar24 != local_150) {
        fVar37 = 3.25;
        do {
          if ((int)plVar24[1] == 0x75ddc158) {
            if (*plVar24 == 0) {
              local_1b6 = local_1b6 & 0xff;
              local_160 = local_1b6;
            }
            else {
              lVar12 = (ulonglong)uVar26 + *plVar24;
              lVar15 = FUN_18017ea70();
              *(int *)(lVar15 + 4) = *(int *)(lVar15 + 4) + 1;
              if (lVar12 == 0) {
LAB_18028599f:
                local_1b8 = local_1b8 & 0xff;
              }
              else {
                local_160 = local_160 & 0xff00;
                cVar7 = FUN_1804514f0(&local_160,lVar12,1);
                if (cVar7 == '\0') goto LAB_18028599f;
                local_1b8 = CONCAT11(1,(char)local_160);
              }
              lVar15 = FUN_18017ea70();
              if (*(int *)(lVar15 + 4) != 0) {
                *(int *)(lVar15 + 4) = *(int *)(lVar15 + 4) + -1;
              }
              local_160 = local_1b8;
            }
            cVar7 = (char)local_160;
            if ((char)(local_160 >> 8) == '\0') {
              cVar7 = '\0';
            }
            if (cVar7 != '\0') {
              if (*plVar24 == 0) {
                local_188[4] = 0;
                local_158 = local_188;
              }
              else {
                lVar12 = (ulonglong)uVar25 + *plVar24;
                lVar15 = FUN_18017ea70();
                *(int *)(lVar15 + 4) = *(int *)(lVar15 + 4) + 1;
                if (lVar12 == 0) {
LAB_180285a4c:
                  local_1b0._0_5_ = (uint5)(uint)local_1b0;
                }
                else {
                  local_158 = (undefined1  [8])CONCAT44(local_158._4_4_,auVar30._0_4_);
                  cVar7 = FUN_1804514f0(&local_158,lVar12,4);
                  if (cVar7 == '\0') goto LAB_180285a4c;
                  local_1b0._0_5_ = CONCAT14(1,(float)local_158);
                }
                lVar15 = FUN_18017ea70();
                if (*(int *)(lVar15 + 4) != 0) {
                  *(int *)(lVar15 + 4) = *(int *)(lVar15 + 4) + -1;
                }
                local_158 = (undefined1  [8])local_1b0;
              }
              if ((char)((ulonglong)local_158 >> 0x20) != '\0') {
                auVar31 = ZEXT464((uint)(float)local_158);
                sVar9 = thunk_FUN_180624430((ulonglong)local_158 & 0xffffffff);
                if (sVar9 < 1) {
                  fVar35 = auVar31._0_4_ - fVar29;
                  if ((auVar30._0_4_ < fVar35) && (fVar35 <= fVar37)) {
                    auVar39 = vminss_avx(auVar36._0_16_,ZEXT416((uint)fVar35));
                    auVar31 = ZEXT1664(auVar39);
                    if (auVar30._0_4_ < auVar39._0_4_) {
                      auStack_110._0_4_ = auVar39._0_4_;
                      lStack_120 = *plVar24;
                      cVar7 = (char)local_1a8[0];
                      goto LAB_180285b11;
                    }
                  }
                }
              }
            }
            if (((local_160._1_1_ != '\0') && (local_f0._0_8_ != 0)) &&
               ((*(char *)(local_f0._0_8_ + 0x36) != '\0' &&
                (local_1a8[0] = local_1a8[0] & 0xff, *(longlong *)(local_f0._0_8_ + 8) == *plVar24))
               )) {
              local_1a8[0] = 1;
            }
          }
          plVar24 = plVar24 + 3;
        } while ((undefined1 (*) [16])plVar24 != local_150);
        uVar23 = (ulonglong)local_1a8[0];
      }
      cVar7 = (char)uVar23;
      auVar31 = ZEXT464((uint)auStack_110._0_4_);
LAB_180285b11:
      FUN_1801abba0(&local_e0);
      uVar38 = auVar36._0_4_;
      if ((auVar31._0_4_ != auVar30._0_4_) || (cVar7 == '\0')) goto LAB_180285b43;
      cVar7 = '\x01';
    }
    if ((auVar31._0_4_ == auVar30._0_4_) && (cVar7 == '\0')) {
      auVar39 = auVar30._0_16_;
      if ((local_198 != (undefined1 (*) [16])0x0) && (local_198 <= local_178)) {
        auVar39 = vmaxss_avx(ZEXT416((uint)(fVar41 - (float)(ulonglong)
                                                            ((longlong)local_178 -
                                                            (longlong)local_198) * 0.001)),auVar39);
      }
      auVar31 = ZEXT1664(auVar39);
      auStack_110._0_4_ = auVar39._0_4_;
    }
    auStack_110._4_4_ = uVar38;
    uStack_f2 = auVar30._0_4_ < auVar31._0_4_;
    bVar4 = false;
LAB_180286c4d:
    lVar15 = local_1a0;
LAB_180286c5a:
  }
  else {
    if (local_1b0._4_1_ != '\0') {
      auVar36 = ZEXT464((uint)(float)local_158);
      sVar9 = thunk_FUN_180624430((ulonglong)local_158 & 0xffffffff);
      if (sVar9 < 1) {
        uVar23 = (ulonglong)DAT_180c653a8;
        if (DAT_180c653a8 == 0) {
          UVar21 = GetTickCount64();
          if (UVar21 < DAT_180c653a0) {
            uVar23 = 0;
          }
          else {
            local_150 = (undefined1 (*) [16])&DAT_1808f2a10;
            iVar10 = FUN_1805f68d0(&DAT_1808f2a10);
            if (iVar10 != 0) goto LAB_180286fc3;
            if (DAT_1808f2a5c == 0x7fffffff) {
              DAT_1808f2a5c = 0x7ffffffe;
              goto LAB_180286ff8;
            }
            uVar23 = (ulonglong)DAT_180c653a8;
            if ((DAT_180c653a8 == 0) && (DAT_180c653a0 <= UVar21)) {
              DAT_180c653a8 = FUN_1804174b0("C_PlantedC4",0xca9f868d);
              uVar23 = (ulonglong)DAT_180c653a8;
              if (DAT_180c653a8 == 0) {
                DAT_180c653a0 = UVar21 + 1000;
              }
              else {
                DAT_180c653a0 = 0xffffffffffffffff;
              }
            }
            FUN_1805f68fc(&DAT_1808f2a10);
          }
        }
        if ((lVar12 == 0) || ((int)uVar23 == 0)) {
          local_1b6 = local_1b6 & 0xff;
          uVar18 = local_1b6;
        }
        else {
          lVar15 = FUN_18017ea70();
          *(int *)(lVar15 + 4) = *(int *)(lVar15 + 4) + 1;
          if (uVar23 + lVar12 == 0) {
LAB_180285cd7:
            local_1b8 = (ushort)(byte)local_1b8;
          }
          else {
            local_160 = local_160 & 0xff00;
            cVar8 = FUN_1804514f0(&local_160,uVar23 + lVar12,1);
            if (cVar8 == '\0') goto LAB_180285cd7;
            local_1b8 = CONCAT11(1,(char)local_160);
          }
          lVar15 = FUN_18017ea70();
          if (*(int *)(lVar15 + 4) != 0) {
            *(int *)(lVar15 + 4) = *(int *)(lVar15 + 4) + -1;
          }
          uVar18 = local_1b8;
        }
        if (((char)(uVar18 >> 8) != '\0') && ((char)uVar18 == '\0')) {
          uVar23 = (ulonglong)DAT_180c65388;
          if (DAT_180c65388 == 0) {
            UVar21 = GetTickCount64();
            if (UVar21 < DAT_180c65390) {
              uVar23 = 0;
            }
            else {
              local_150 = (undefined1 (*) [16])&DAT_1808f2a60;
              iVar10 = FUN_1805f68d0(&DAT_1808f2a60);
              if (iVar10 != 0) goto LAB_180286fc3;
              if (DAT_1808f2aac == 0x7fffffff) {
                DAT_1808f2aac = 0x7ffffffe;
                goto LAB_180286ff8;
              }
              uVar23 = (ulonglong)DAT_180c65388;
              if ((DAT_180c65388 == 0) && (DAT_180c65390 <= UVar21)) {
                DAT_180c65388 = FUN_1804174b0("C_PlantedC4",0x2c4cfdac);
                uVar23 = (ulonglong)DAT_180c65388;
                if (DAT_180c65388 == 0) {
                  DAT_180c65390 = UVar21 + 1000;
                }
                else {
                  DAT_180c65390 = 0xffffffffffffffff;
                }
              }
              FUN_1805f68fc(&DAT_1808f2a60);
            }
          }
          if ((lVar12 == 0) || ((int)uVar23 == 0)) {
            local_150._0_5_ = (uint5)(uint)(float)local_150;
          }
          else {
            lVar15 = FUN_18017ea70();
            *(int *)(lVar15 + 4) = *(int *)(lVar15 + 4) + 1;
            if (uVar23 + lVar12 == 0) {
LAB_180285e07:
              local_1b0._0_5_ = (uint5)(uint)local_1b0;
            }
            else {
              local_158 = (undefined1  [8])CONCAT44(local_158._4_4_,auVar30._0_4_);
              cVar8 = FUN_1804514f0(&local_158,uVar23 + lVar12,4);
              if (cVar8 == '\0') goto LAB_180285e07;
              local_1b0._0_5_ = CONCAT14(1,(float)local_158);
            }
            lVar15 = FUN_18017ea70();
            if (*(int *)(lVar15 + 4) != 0) {
              *(int *)(lVar15 + 4) = *(int *)(lVar15 + 4) + -1;
            }
            local_150 = local_1b0;
          }
          if ((char)((ulonglong)local_150 >> 0x20) == '\0') goto LAB_180286c0c;
          fVar29 = (float)local_150;
          sVar9 = thunk_FUN_180624430((ulonglong)local_150 & 0xffffffff);
          if (0 < sVar9) goto LAB_180286c0c;
          fVar29 = fVar29 - auVar36._0_4_;
          auVar31 = ZEXT464((uint)fVar29);
          auStack_110._0_4_ = fVar29;
          if (auVar30._0_4_ < fVar29) {
            uVar23 = (ulonglong)DAT_180c65380;
            if (DAT_180c65380 == 0) {
              UVar21 = GetTickCount64();
              if (UVar21 < DAT_180c65378) {
                uVar23 = 0;
              }
              else {
                local_150 = (undefined1 (*) [16])&DAT_1808f29c0;
                iVar10 = FUN_1805f68d0(&DAT_1808f29c0);
                if (iVar10 != 0) goto LAB_180286fc3;
                if (DAT_1808f2a0c == 0x7fffffff) {
                  DAT_1808f2a0c = 0x7ffffffe;
                  goto LAB_180286ff8;
                }
                uVar23 = (ulonglong)DAT_180c65380;
                if ((DAT_180c65380 == 0) && (DAT_180c65378 <= UVar21)) {
                  DAT_180c65380 = FUN_1804174b0("C_PlantedC4",0x5758dbe8);
                  uVar23 = (ulonglong)DAT_180c65380;
                  if (DAT_180c65380 == 0) {
                    DAT_180c65378 = UVar21 + 1000;
                  }
                  else {
                    DAT_180c65378 = 0xffffffffffffffff;
                  }
                }
                FUN_1805f68fc(&DAT_1808f29c0);
              }
            }
            if ((lVar12 == 0) || ((int)uVar23 == 0)) {
              local_150._0_5_ = (uint5)(uint)(float)local_150;
            }
            else {
              lVar15 = FUN_18017ea70();
              *(int *)(lVar15 + 4) = *(int *)(lVar15 + 4) + 1;
              if (uVar23 + lVar12 == 0) {
LAB_180285f60:
                local_1b0._0_5_ = (uint5)(uint)local_1b0;
              }
              else {
                local_158 = (undefined1  [8])CONCAT44(local_158._4_4_,auVar30._0_4_);
                cVar8 = FUN_1804514f0(&local_158,uVar23 + lVar12,4);
                if (cVar8 == '\0') goto LAB_180285f60;
                local_1b0._0_5_ = CONCAT14(1,(float)local_158);
              }
              lVar15 = FUN_18017ea70();
              if (*(int *)(lVar15 + 4) != 0) {
                *(int *)(lVar15 + 4) = *(int *)(lVar15 + 4) + -1;
              }
              local_150 = local_1b0;
            }
            auVar39 = vpcmpeqd_avx(ZEXT116((byte)((ulonglong)local_150 >> 0x20)),
                                   SUB6416(ZEXT464(0),0));
            auVar34 = ZEXT464(0x42200000);
            auVar39 = vblendvps_avx(ZEXT416((uint)(float)local_150),auVar34._0_16_,auVar39);
            auVar32 = ZEXT1664(auVar39);
            auStack_110._4_4_ = auVar39._0_4_;
            sVar9 = thunk_FUN_180624430(auVar39._0_8_);
            if ((0 < sVar9) || (auVar32._0_4_ <= auVar30._0_4_)) {
              auStack_110._4_4_ = auVar34._0_4_;
            }
            uVar23 = (ulonglong)DAT_180c65384;
            if (DAT_180c65384 == 0) {
              UVar21 = GetTickCount64();
              if (UVar21 < DAT_180c65360) {
                uVar23 = 0;
              }
              else {
                local_150 = (undefined1 (*) [16])&DAT_1808f2970;
                iVar10 = FUN_1805f68d0(&DAT_1808f2970);
                if (iVar10 != 0) goto LAB_180286fc3;
                if (DAT_1808f29bc == 0x7fffffff) {
                  DAT_1808f29bc = 0x7ffffffe;
                  goto LAB_180286ff8;
                }
                uVar23 = (ulonglong)DAT_180c65384;
                if ((DAT_180c65384 == 0) && (DAT_180c65360 <= UVar21)) {
                  DAT_180c65384 = FUN_1804174b0("C_PlantedC4",0xe027ac16);
                  uVar23 = (ulonglong)DAT_180c65384;
                  if (DAT_180c65384 == 0) {
                    DAT_180c65360 = UVar21 + 1000;
                  }
                  else {
                    DAT_180c65360 = 0xffffffffffffffff;
                  }
                }
                FUN_1805f68fc(&DAT_1808f2970);
              }
            }
            if ((lVar12 == 0) || ((int)uVar23 == 0)) {
              local_150._0_5_ = (uint5)(uint)(float)local_150;
              pauVar20 = local_150;
            }
            else {
              lVar15 = FUN_18017ea70();
              *(int *)(lVar15 + 4) = *(int *)(lVar15 + 4) + 1;
              if (uVar23 + lVar12 == 0) {
LAB_1802860be:
                local_1b0._0_5_ = (uint5)(uint)local_1b0;
              }
              else {
                local_158 = (undefined1  [8])((ulonglong)local_158 & 0xffffffff00000000);
                cVar8 = FUN_1804514f0(&local_158,uVar23 + lVar12,4);
                if (cVar8 == '\0') goto LAB_1802860be;
                local_1b0._0_5_ = CONCAT14(1,(float)local_158);
              }
              lVar15 = FUN_18017ea70();
              if (*(int *)(lVar15 + 4) != 0) {
                *(int *)(lVar15 + 4) = *(int *)(lVar15 + 4) + -1;
              }
              pauVar20 = local_1b0;
            }
            uStack_100 = 0xffffffff;
            if ((char)((ulonglong)pauVar20 >> 0x20) != '\0') {
              uStack_100 = (int)pauVar20;
            }
            uVar23 = (ulonglong)DAT_180c65370;
            if (DAT_180c65370 == 0) {
              UVar21 = GetTickCount64();
              if (UVar21 < DAT_180c65368) {
                uVar23 = 0;
              }
              else {
                local_150 = (undefined1 (*) [16])&DAT_1808f28d0;
                iVar10 = FUN_1805f68d0(&DAT_1808f28d0);
                if (iVar10 != 0) goto LAB_180286fc3;
                if (DAT_1808f291c == 0x7fffffff) {
                  DAT_1808f291c = 0x7ffffffe;
                  goto LAB_180286ff8;
                }
                uVar23 = (ulonglong)DAT_180c65370;
                if ((DAT_180c65370 == 0) && (DAT_180c65368 <= UVar21)) {
                  DAT_180c65370 = FUN_1804174b0("C_BaseEntity",0x84cdad2);
                  uVar23 = (ulonglong)DAT_180c65370;
                  if (DAT_180c65370 == 0) {
                    DAT_180c65368 = UVar21 + 1000;
                  }
                  else {
                    DAT_180c65368 = 0xffffffffffffffff;
                  }
                }
                FUN_1805f68fc(&DAT_1808f28d0);
              }
            }
            if ((local_190 == 0) || ((int)uVar23 == 0)) {
              local_150._0_5_ = (uint5)(uint)(float)local_150;
              pauVar20 = local_150;
            }
            else {
              lVar22 = uVar23 + local_190;
              lVar15 = FUN_18017ea70();
              *(int *)(lVar15 + 4) = *(int *)(lVar15 + 4) + 1;
              if (lVar22 == 0) {
LAB_1802861eb:
                local_1b0._0_5_ = (uint5)(uint)local_1b0;
              }
              else {
                local_158 = (undefined1  [8])((ulonglong)local_158 & 0xffffffff00000000);
                cVar8 = FUN_1804514f0(&local_158,lVar22,4);
                if (cVar8 == '\0') goto LAB_1802861eb;
                local_1b0._0_5_ = CONCAT14(1,(float)local_158);
              }
              lVar15 = FUN_18017ea70();
              if (*(int *)(lVar15 + 4) != 0) {
                *(int *)(lVar15 + 4) = *(int *)(lVar15 + 4) + -1;
              }
              pauVar20 = local_1b0;
            }
            bVar4 = false;
            uVar26 = (uint)pauVar20;
            if ((char)((ulonglong)pauVar20 >> 0x20) == '\0') {
              uVar26 = 0;
            }
            uStack_fc = uVar26;
            if (((((undefined1 (*) [16])local_138._0_8_ == (undefined1 (*) [16])0x0) ||
                 (auVar40._0_4_ != auVar30._0_4_)) || (pauVar11 < (ulonglong)local_138._0_8_)) ||
               (0xf9 < (ulonglong)((longlong)pauVar11 - local_138._0_8_))) {
              uVar23 = (ulonglong)DAT_180c65350;
              if (DAT_180c65350 == 0) {
                UVar21 = GetTickCount64();
                if (UVar21 < DAT_180c65358) {
                  uVar23 = 0;
                }
                else {
                  local_150 = (undefined1 (*) [16])&DAT_1808f2920;
                  iVar10 = FUN_1805f68d0(&DAT_1808f2920);
                  if (iVar10 != 0) goto LAB_180286fc3;
                  if (DAT_1808f296c == 0x7fffffff) {
                    DAT_1808f296c = 0x7ffffffe;
                    goto LAB_180286ff8;
                  }
                  uVar23 = (ulonglong)DAT_180c65350;
                  if ((DAT_180c65350 == 0) && (DAT_180c65358 <= UVar21)) {
                    DAT_180c65350 = FUN_1804174b0("C_PlantedC4",0xe52e1146);
                    uVar23 = (ulonglong)DAT_180c65350;
                    if (DAT_180c65350 == 0) {
                      DAT_180c65358 = UVar21 + 1000;
                    }
                    else {
                      DAT_180c65358 = 0xffffffffffffffff;
                    }
                  }
                  FUN_1805f68fc(&DAT_1808f2920);
                }
              }
              if ((lVar12 == 0) || ((int)uVar23 == 0)) {
                local_1b6 = local_1b6 & 0xff;
                uVar18 = local_1b6;
              }
              else {
                lVar15 = FUN_18017ea70();
                *(int *)(lVar15 + 4) = *(int *)(lVar15 + 4) + 1;
                if (uVar23 + lVar12 == 0) {
LAB_180286342:
                  local_1b8 = local_1b8 & 0xff;
                }
                else {
                  local_160 = local_160 & 0xff00;
                  cVar8 = FUN_1804514f0(&local_160,uVar23 + lVar12,1);
                  if (cVar8 == '\0') goto LAB_180286342;
                  local_1b8 = CONCAT11(1,(char)local_160);
                }
                lVar15 = FUN_18017ea70();
                if (*(int *)(lVar15 + 4) != 0) {
                  *(int *)(lVar15 + 4) = *(int *)(lVar15 + 4) + -1;
                }
                uVar18 = local_1b8;
              }
              uVar23 = (ulonglong)DAT_180c65348;
              local_1b6 = uVar18;
              if (DAT_180c65348 == 0) {
                UVar21 = GetTickCount64();
                if (UVar21 < DAT_180c65340) {
                  uVar23 = 0;
                }
                else {
                  local_150 = (undefined1 (*) [16])&DAT_1808f2880;
                  iVar10 = FUN_1805f68d0(&DAT_1808f2880);
                  if (iVar10 != 0) goto LAB_180286fc3;
                  if (DAT_1808f28cc == 0x7fffffff) {
                    DAT_1808f28cc = 0x7ffffffe;
                    goto LAB_180286ff8;
                  }
                  uVar23 = (ulonglong)DAT_180c65348;
                  if ((DAT_180c65348 == 0) && (DAT_180c65340 <= UVar21)) {
                    DAT_180c65348 = FUN_1804174b0("C_PlantedC4",0x74e01381);
                    uVar23 = (ulonglong)DAT_180c65348;
                    if (DAT_180c65348 == 0) {
                      DAT_180c65340 = UVar21 + 1000;
                    }
                    else {
                      DAT_180c65340 = 0xffffffffffffffff;
                    }
                  }
                  FUN_1805f68fc(&DAT_1808f2880);
                }
              }
              if ((lVar12 == 0) || ((int)uVar23 == 0)) {
                local_150._0_5_ = (uint5)(uint)(float)local_150;
                local_1b0 = local_150;
              }
              else {
                lVar15 = FUN_18017ea70();
                *(int *)(lVar15 + 4) = *(int *)(lVar15 + 4) + 1;
                if (uVar23 + lVar12 == 0) {
LAB_180286464:
                  local_1b0._0_5_ = (uint5)(uint)local_1b0;
                }
                else {
                  local_158 = (undefined1  [8])((ulonglong)local_158 & 0xffffffff00000000);
                  cVar8 = FUN_1804514f0(&local_158,uVar23 + lVar12,4);
                  if (cVar8 == '\0') goto LAB_180286464;
                  local_1b0._0_5_ = CONCAT14(1,(float)local_158);
                }
                lVar15 = FUN_18017ea70();
                if (*(int *)(lVar15 + 4) != 0) {
                  *(int *)(lVar15 + 4) = *(int *)(lVar15 + 4) + -1;
                }
              }
              if (((char)((ulonglong)local_1b0 >> 0x20) == '\0') ||
                 (0xfffffffd < (int)local_1b0 - 1U)) {
                bVar4 = false;
                lVar15 = 0;
              }
              else {
                bVar4 = true;
                lVar15 = FUN_1803d4150();
              }
              uVar23 = (ulonglong)DAT_180c6534c;
              if (DAT_180c6534c == 0) {
                UVar21 = GetTickCount64();
                if (UVar21 < DAT_180c65328) {
                  uVar23 = 0;
                }
                else {
                  local_150 = (undefined1 (*) [16])&DAT_1808f2830;
                  iVar10 = FUN_1805f68d0(&DAT_1808f2830);
                  if (iVar10 != 0) goto LAB_180286fc3;
                  if (DAT_1808f287c == 0x7fffffff) {
                    DAT_1808f287c = 0x7ffffffe;
                    goto LAB_180286ff8;
                  }
                  uVar23 = (ulonglong)DAT_180c6534c;
                  if ((DAT_180c6534c == 0) && (DAT_180c65328 <= UVar21)) {
                    DAT_180c6534c = FUN_1804174b0("C_CSPlayerPawn",0x5bdaecc0);
                    uVar23 = (ulonglong)DAT_180c6534c;
                    DAT_180c65328 = 0xffffffffffffffff;
                    if (DAT_180c6534c == 0) {
                      DAT_180c65328 = UVar21 + 1000;
                    }
                  }
                  FUN_1805f68fc(&DAT_1808f2830);
                }
              }
              if ((lVar15 == 0) || ((int)uVar23 == 0)) {
                local_1b8 = local_1b8 & 0xff;
              }
              else {
                lVar12 = FUN_18017ea70();
                *(int *)(lVar12 + 4) = *(int *)(lVar12 + 4) + 1;
                if (uVar23 + lVar15 == 0) {
LAB_1802865a9:
                  local_1b8 = local_1b8 & 0xff;
                }
                else {
                  local_160 = local_160 & 0xff00;
                  cVar8 = FUN_1804514f0(&local_160,uVar23 + lVar15,1);
                  if (cVar8 == '\0') goto LAB_1802865a9;
                  local_1b8 = CONCAT11(1,(char)local_160);
                }
                lVar15 = FUN_18017ea70();
                if (*(int *)(lVar15 + 4) != 0) {
                  *(int *)(lVar15 + 4) = *(int *)(lVar15 + 4) + -1;
                }
              }
              if (((local_1b6._1_1_ != '\0') && ((char)uVar18 != '\0')) ||
                 ((cVar8 = (char)(local_1b8 >> 8), bVar4 &&
                  ((cVar8 == '\0' || ((char)local_1b8 != '\0')))))) {
                bVar4 = true;
LAB_1802865f9:
                bVar27 = false;
              }
              else {
                bVar4 = false;
                if (((cVar8 == '\0') || ((char)local_1b8 != '\0')) &&
                   ((local_1b6._1_1_ == '\0' || (local_1b0._4_1_ == '\0')))) goto LAB_1802865f9;
                bVar27 = true;
              }
              uVar23 = (ulonglong)DAT_180c65338;
              if (DAT_180c65338 == 0) {
                UVar21 = GetTickCount64();
                if (UVar21 < DAT_180c65330) {
                  uVar23 = 0;
                }
                else {
                  local_150 = (undefined1 (*) [16])&DAT_1808f2790;
                  iVar10 = FUN_1805f68d0(&DAT_1808f2790);
                  if (iVar10 != 0) goto LAB_180286fc3;
                  if (DAT_1808f27dc == 0x7fffffff) {
                    DAT_1808f27dc = 0x7ffffffe;
                    goto LAB_180286ff8;
                  }
                  uVar23 = (ulonglong)DAT_180c65338;
                  if ((DAT_180c65338 == 0) && (DAT_180c65330 <= UVar21)) {
                    DAT_180c65338 = FUN_1804174b0("C_PlantedC4",0xbcf3db7c);
                    uVar23 = (ulonglong)DAT_180c65338;
                    DAT_180c65330 = 0xffffffffffffffff;
                    if (DAT_180c65338 == 0) {
                      DAT_180c65330 = UVar21 + 1000;
                    }
                  }
                  FUN_1805f68fc();
                }
              }
              lVar15 = local_1a0;
              if ((local_1a0 == 0) || ((int)uVar23 == 0)) {
                local_150._0_5_ = (uint5)(uint)(float)local_150;
                pauVar11 = local_150;
              }
              else {
                lVar12 = FUN_18017ea70();
                *(int *)(lVar12 + 4) = *(int *)(lVar12 + 4) + 1;
                lVar12 = uVar23 + lVar15;
                if (lVar12 == 0) {
LAB_180286717:
                  local_1b0._0_5_ = (uint5)(uint)local_1b0;
                }
                else {
                  local_158 = (undefined1  [8])CONCAT44(local_158._4_4_,auVar30._0_4_);
                  cVar8 = FUN_1804514f0(&local_158,lVar12,4);
                  if (cVar8 == '\0') goto LAB_180286717;
                  local_1b0._0_5_ = CONCAT14(1,(float)local_158);
                }
                lVar12 = FUN_18017ea70();
                if (*(int *)(lVar12 + 4) != 0) {
                  *(int *)(lVar12 + 4) = *(int *)(lVar12 + 4) + -1;
                }
                pauVar11 = local_1b0;
              }
              local_188 = (undefined1  [8])pauVar11;
              uVar23 = (ulonglong)DAT_180c65318;
              if (DAT_180c65318 == 0) {
                UVar21 = GetTickCount64();
                if (UVar21 < DAT_180c65320) {
                  uVar23 = 0;
                }
                else {
                  local_150 = (undefined1 (*) [16])&DAT_1808f27e0;
                  iVar10 = FUN_1805f68d0(&DAT_1808f27e0);
                  if (iVar10 != 0) goto LAB_180286fc3;
                  if (DAT_1808f282c == 0x7fffffff) {
                    DAT_1808f282c = 0x7ffffffe;
                    goto LAB_180286ff8;
                  }
                  uVar23 = (ulonglong)DAT_180c65318;
                  if ((DAT_180c65318 == 0) && (DAT_180c65320 <= UVar21)) {
                    DAT_180c65318 = FUN_1804174b0("C_PlantedC4",0x64cc4751);
                    uVar23 = (ulonglong)DAT_180c65318;
                    DAT_180c65320 = 0xffffffffffffffff;
                    if (DAT_180c65318 == 0) {
                      DAT_180c65320 = UVar21 + 1000;
                    }
                  }
                  FUN_1805f68fc();
                }
                lVar15 = local_1a0;
              }
              if ((lVar15 == 0) || ((int)uVar23 == 0)) {
                local_150._0_5_ = (uint5)(uint)(float)local_150;
              }
              else {
                lVar12 = FUN_18017ea70();
                *(int *)(lVar12 + 4) = *(int *)(lVar12 + 4) + 1;
                if (uVar23 + lVar15 == 0) {
LAB_18028683f:
                  local_1b0._0_5_ = (uint5)(uint)local_1b0;
                }
                else {
                  local_158 = (undefined1  [8])CONCAT44(local_158._4_4_,auVar30._0_4_);
                  cVar8 = FUN_1804514f0(&local_158,uVar23 + lVar15,4);
                  if (cVar8 == '\0') goto LAB_18028683f;
                  local_1b0._0_5_ = CONCAT14(1,(float)local_158);
                }
                lVar12 = FUN_18017ea70();
                if (*(int *)(lVar12 + 4) != 0) {
                  *(int *)(lVar12 + 4) = *(int *)(lVar12 + 4) + -1;
                }
                local_150 = local_1b0;
              }
              auVar39 = vpcmpeqd_avx(ZEXT116((byte)((ulonglong)local_150 >> 0x20)),
                                     SUB6416(ZEXT464(0),0));
              auVar39 = vblendvps_avx(ZEXT416((uint)(float)local_150),auVar30._0_16_,auVar39);
              auVar32 = ZEXT1664(auVar39);
              uVar6 = local_138._0_8_;
              if (((undefined1 (*) [16])local_138._0_8_ == (undefined1 (*) [16])0x0) ||
                 (local_178 < (ulonglong)local_138._0_8_)) {
                auVar3 = ZEXT816(0);
              }
              else {
                auVar3 = vmaxss_avx(ZEXT416((uint)(auVar40._0_4_ -
                                                  (float)(ulonglong)
                                                         ((longlong)local_178 - local_138._0_8_) *
                                                  0.001)),auVar30._0_16_);
              }
              auVar34 = ZEXT1664(auVar3);
              sVar9 = thunk_FUN_180624430(auVar39._0_8_);
              if (((0 < sVar9) || (auVar32._0_4_ <= auVar30._0_4_)) || (30.0 < auVar32._0_4_)) {
                auVar33 = ZEXT464(0x41200000);
              }
              else {
                auVar33 = ZEXT1664(auVar32._0_16_);
              }
              auVar28._0_8_ = FUN_180284da0(pauVar11,auVar36._0_8_,auVar33._0_8_);
              auVar28._8_56_ = extraout_var;
              fVar29 = (float)auVar28._0_8_;
              fVar37 = auVar30._0_4_;
              if ((((char)((ulonglong)pauVar11 >> 0x20) == '\0') ||
                  ((float)local_188._0_4_ <= fVar37)) || (auVar36._0_4_ < (float)local_188._0_4_)) {
                bVar5 = false;
              }
              else {
                bVar5 = true;
              }
              if (((local_f0._0_8_ == 0) || (*(longlong *)(local_f0._0_8_ + 8) != lVar15)) ||
                 (((*(char *)(local_f0._0_8_ + 0x37) == '\0' ||
                   (*(undefined1 (**) [16])(local_f0._0_8_ + 0x10) <= (ulonglong)uVar6)) ||
                  ((!bVar27 && (!bVar5)))))) {
                bVar27 = false;
              }
              else {
                bVar27 = true;
              }
              fVar35 = auVar34._0_4_;
              if ((!bVar4) || (fVar29 <= fVar37)) {
                if ((fVar35 <= fVar37) || (bVar27)) {
                  fVar35 = (float)uStack_108;
                }
                else {
                  uStack_108._0_4_ = fVar35;
                  uStack_108._4_4_ = auVar40._0_4_;
                }
              }
              else {
                uStack_f1 = 1;
                uStack_108._0_4_ = fVar29;
                if ((auVar32._0_4_ == auVar33._0_4_) || (fVar35 <= fVar37)) {
                  uStack_108._4_4_ = auVar33._0_4_;
                  fVar35 = fVar29;
                }
                else {
                  auVar39 = vmaxss_avx(auVar28._0_16_,auVar40._0_16_);
                  uStack_108._4_4_ = auVar39._0_4_;
                  fVar35 = fVar29;
                }
              }
              local_f4 = fVar37 < fVar35;
              if (((bool)local_f4) || (!bVar27)) {
                bVar4 = false;
              }
              else {
                bVar4 = true;
              }
            }
            if (DAT_180b0d6c7 == '\0') goto LAB_180286c34;
            if ((int)uVar26 < 1) goto LAB_180286c4d;
            if ((DAT_180cce330 & 1) == 0) {
              DAT_180cce330 = DAT_180cce330 | 1;
              atexit(FUN_180662340);
            }
            lVar12 = DAT_1808f2738;
            lVar15 = DAT_1808da460;
            if ((DAT_1808f2738 != DAT_1808da460) || (lVar22 = DAT_180c65308, DAT_180c65308 == 0)) {
              UVar21 = GetTickCount64();
              if ((lVar12 == lVar15) && (UVar21 < DAT_180c65310)) goto LAB_180286c4d;
              local_150 = (undefined1 (*) [16])&DAT_1808f2740;
              iVar10 = FUN_1805f68d0(&DAT_1808f2740);
              if (iVar10 != 0) goto LAB_180286fc3;
              if (DAT_1808f278c == 0x7fffffff) {
                DAT_1808f278c = 0x7ffffffe;
                goto LAB_180286ff8;
              }
              uVar23 = 1000;
              if (DAT_1808f2738 == lVar15) {
                if ((DAT_180c65308 == 0) && (DAT_180c65310 <= UVar21)) goto LAB_180286ac3;
              }
              else {
                DAT_1808f2730 = 1000;
LAB_180286ac3:
                lVar12 = -1;
                do {
                  lStack_180 = lVar12 + 1;
                  pcVar2 = "lient.dll:48895C240848897424185557415441564157488D6C24C04881EC400100004D8BF1498BF0488BDA4C8BF9"
                           + lVar12;
                  lVar12 = lStack_180;
                } while (*pcVar2 != '\0');
                local_188 = (undefined1  [8])&DAT_180826ee0;
                local_178 = (undefined1 (*) [16])0x1807d0cd8;
                local_170 = 0x1d;
                DAT_180c65308 = FUN_1800e5d20(&local_178,local_188);
                DAT_1808f2738 = lVar15;
                DAT_180c65310 = 0xffffffffffffffff;
                if (DAT_180c65308 == 0) {
                  DAT_180c65310 = DAT_1808f2730 + UVar21;
                  uVar23 = 60000;
                  if (DAT_1808f2730 < 60000) {
                    uVar23 = DAT_1808f2730 * 2;
                  }
                }
                DAT_1808f2730 = uVar23;
              }
              lVar22 = DAT_180c65308;
              FUN_1805f68fc(&DAT_1808f2740);
              if (lVar22 == 0) goto LAB_180286c4d;
            }
            local_160 = local_160 & 0xff00;
            uVar38 = auVar30._0_4_;
            local_150 = (undefined1 (*) [16])CONCAT44(uVar38,uVar38);
            local_148 = (undefined1 (*) [16])CONCAT44(local_148._4_4_,uVar38);
            cVar8 = FUN_1804513c0(lVar22,1,2);
            if (cVar8 == '\0') {
              lVar15 = local_1a0;
              cVar8 = '\0';
            }
            else {
              lVar12 = FUN_18017ea70();
              lVar15 = local_1a0;
              *(int *)(lVar12 + 4) = *(int *)(lVar12 + 4) + 1;
              local_1c0 = &local_150;
              local_1c8 = &local_160;
              FUN_180287600(&local_1b8,lVar22,local_1a0,local_190);
              lVar12 = FUN_18017ea70();
              if (*(int *)(lVar12 + 4) != 0) {
                *(int *)(lVar12 + 4) = *(int *)(lVar12 + 4) + -1;
              }
              cVar8 = local_1b8._1_1_;
            }
            uStack_f3 = (byte)local_1b8;
            if (cVar8 == '\0') {
              uStack_f3 = 0;
            }
            uStack_f8 = (uint)(byte)local_160;
            if ((int)uVar26 < (int)(uint)(byte)local_160) {
              uStack_f8 = uVar26;
            }
            goto LAB_180286c5a;
          }
          bVar4 = false;
LAB_180286c34:
          lVar15 = local_1a0;
          goto LAB_180286c61;
        }
      }
    }
LAB_180286c0c:
    auVar31 = ZEXT464((uint)auStack_110._0_4_);
    bVar4 = false;
    lVar15 = local_1a0;
  }
LAB_180286c61:
  pauVar11 = local_198;
  local_150 = (undefined1 (*) [16])&DAT_180b8f8c0;
  iVar10 = FUN_1805f68d0(&DAT_180b8f8c0);
  if (iVar10 == 0) {
    if (DAT_180b8f90c != 0x7fffffff) {
      if ((DAT_180b8f910 == pauVar11) && (DAT_180b8f918 == fVar41)) {
        if ((DAT_180b8f920 == local_138._0_8_) &&
           ((DAT_180b8f928 == auVar40._0_4_ && (lVar12 = FUN_180287010(), lVar12 == lVar15)))) {
          AcquireSRWLockShared((PSRWLOCK)&DAT_180bb88c0);
          local_e0 = _DAT_180bb8890;
          lStack_d8 = lRam0000000180bb8898;
          lStack_d0 = lRam0000000180bb88a0;
          uStack_c8 = uRam0000000180bb88a8;
          auVar40 = ZEXT1664(auVar31._0_16_);
          auVar30 = ZEXT1664(auVar30._0_16_);
          cVar8 = cRam0000000180bb88b8;
          ReleaseSRWLockShared((PSRWLOCK)&DAT_180bb88c0);
          plVar24 = &lStack_d0;
          if (cVar8 != '\0') {
            plVar24 = &lStack_d8;
          }
          if (*plVar24 == local_190) {
            if (cVar7 != '\0') {
              auVar39._8_8_ = 0;
              auVar39._0_8_ = local_138._8_8_;
              local_138 = auVar39 << 0x40;
              _DAT_180b8f910 = vinsertps_avx(local_138,auVar30._0_16_,0x20);
              local_138 = _DAT_180b8f910;
            }
            if (bVar4) {
              auVar3._8_8_ = 0;
              auVar3._0_8_ = local_138._8_8_;
              local_138 = auVar3 << 0x40;
              _DAT_180b8f920 = vinsertps_avx(local_138,auVar30._0_16_,0x20);
              local_138 = _DAT_180b8f920;
            }
            if (auVar40._0_4_ <= auVar30._0_4_) {
              local_f0._8_8_ = 0;
              puVar19 = (undefined8 *)local_f0;
              bVar27 = false;
              bVar4 = true;
              pauVar11 = (undefined1 (*) [16])0x0;
            }
            else {
              if (DAT_180c7df28 == (undefined8 *)0x0) {
                local_138._8_8_ = 0x15;
                local_138._0_8_ = "tier0.dll:g_pMemAlloc";
                DAT_180c7df28 = (undefined8 *)FUN_180451750(local_138);
              }
              local_150 = (undefined1 (*) [16])
                          (**(code **)(*(longlong *)*DAT_180c7df28 + 8))
                                    ((longlong *)*DAT_180c7df28,0x48);
              if (local_150 == (undefined1 (*) [16])0x0) {
                local_148 = (undefined1 (*) [16])0x0;
              }
              else {
                *local_150 = (undefined1  [16])0x0;
                *(undefined4 *)(*local_150 + 8) = 1;
                *(undefined4 *)(*local_150 + 0xc) = 1;
                *(undefined ***)*local_150 =
                     std::_Ref_count_obj2<features::esp::other::overlay::bomb_snapshot_const_>::
                     vftable;
                *(longlong *)local_150[1] = local_128;
                *(longlong *)(local_150[1] + 8) = lStack_120;
                *(undefined1 (**) [16])local_150[2] = pauStack_118;
                *(undefined1 (*) [8])(local_150[2] + 8) = auStack_110;
                *(undefined8 *)local_150[3] = uStack_108;
                *(ulonglong *)(local_150[3] + 8) = CONCAT44(uStack_fc,uStack_100);
                *(ulonglong *)local_150[4] =
                     CONCAT17(uStack_f1,
                              CONCAT16(uStack_f2,CONCAT15(uStack_f3,CONCAT14(local_f4,uStack_f8))));
                local_148 = local_150;
              }
              puVar19 = &local_150;
              bVar27 = true;
              bVar4 = false;
              pauVar11 = local_148 + 1;
            }
            local_138._0_8_ = pauVar11;
            local_138._8_8_ = puVar19[1];
            *puVar19 = 0;
            puVar19[1] = 0;
            FUN_180287540(puVar19,local_138);
            if (bVar4) {
              uVar6 = local_f0._8_8_;
              if ((longlong *)local_f0._8_8_ != (longlong *)0x0) {
                LOCK();
                plVar24 = (longlong *)(local_f0._8_8_ + 8);
                lVar15 = *plVar24;
                *(int *)plVar24 = (int)*plVar24 + -1;
                UNLOCK();
                if ((int)lVar15 == 1) {
                  (*(code *)**(undefined8 **)local_f0._8_8_)(local_f0._8_8_);
                  LOCK();
                  piVar1 = (int *)(uVar6 + 0xc);
                  iVar10 = *piVar1;
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  if (iVar10 == 1) {
                    (**(code **)(*(longlong *)uVar6 + 8))(uVar6);
                  }
                }
              }
            }
            pauVar11 = local_148;
            if ((bVar27) && (local_148 != (undefined1 (*) [16])0x0)) {
              LOCK();
              piVar1 = (int *)(*local_148 + 8);
              iVar10 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar10 == 1) {
                (*(code *)**(undefined8 **)*local_148)(local_148);
                LOCK();
                piVar1 = (int *)(*pauVar11 + 0xc);
                iVar10 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (iVar10 == 1) {
                  (**(code **)(*(longlong *)*pauVar11 + 8))(pauVar11);
                }
              }
            }
          }
        }
      }
      FUN_1805f68fc(&DAT_180b8f8c0);
      plVar13 = local_168;
LAB_180286f0b:
      if (plVar13 != (longlong *)0x0) {
        LOCK();
        plVar24 = plVar13 + 1;
        lVar15 = *plVar24;
        *(int *)plVar24 = (int)*plVar24 + -1;
        UNLOCK();
        if ((int)lVar15 == 1) {
          (**(code **)*plVar13)(plVar13);
          LOCK();
          piVar1 = (int *)((longlong)plVar13 + 0xc);
          iVar10 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar10 == 1) {
            (**(code **)(*plVar13 + 8))(plVar13);
          }
        }
      }
    }
    DAT_180b8f90c = 0x7ffffffe;
LAB_180286ff8:
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(6);
  }
LAB_180286fc3:
                    /* WARNING: Subroutine does not return */
  FUN_1805f6d44(5);
}



