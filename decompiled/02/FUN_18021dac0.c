// FUN_18021dac0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18021dac0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18021dac0(undefined8 param_1,char param_2)

{
  int *piVar1;
  ushort uVar2;
  ushort uVar3;
  undefined *puVar4;
  double dVar5;
  undefined1 auVar6 [16];
  bool bVar7;
  undefined *puVar8;
  char cVar9;
  int iVar10;
  int iVar11;
  short *psVar12;
  longlong lVar13;
  ULONGLONG UVar14;
  undefined8 uVar15;
  undefined8 *puVar16;
  ulonglong *puVar17;
  longlong lVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  longlong *plVar21;
  int *piVar22;
  ulonglong uVar23;
  longlong *plVar24;
  longlong lVar25;
  int iVar26;
  undefined1 auVar27 [64];
  undefined4 uVar28;
  undefined1 auVar29 [64];
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  undefined1 auVar36 [64];
  undefined1 auStack_9e8 [32];
  ulonglong local_9c8;
  double local_9c0;
  double local_9b8;
  double local_9b0;
  double local_9a8;
  double local_9a0;
  ulonglong local_998;
  ulonglong local_990;
  ulonglong local_988;
  int local_978;
  undefined *local_970;
  int local_968;
  char local_964;
  ULONGLONG local_960;
  undefined *local_958;
  ulonglong *local_950;
  undefined1 local_948 [16];
  longlong local_938;
  char local_930;
  undefined1 local_928 [16];
  longlong local_918;
  undefined *local_908;
  undefined8 local_900;
  ushort local_8f8;
  int local_8f0;
  undefined4 local_8ec;
  undefined4 local_8e8;
  undefined1 local_8e4;
  undefined4 local_8e0;
  undefined1 local_8d8 [16];
  undefined8 local_8c8;
  undefined8 uStack_8c0;
  undefined1 local_8b8;
  undefined8 local_8b4;
  undefined4 local_8ac;
  longlong local_8a8;
  undefined4 uStack_8a0;
  uint uStack_89c;
  uint uStack_898;
  uint uStack_894;
  undefined8 uStack_890;
  undefined8 local_888;
  undefined8 uStack_880;
  uint uStack_878;
  undefined4 uStack_874;
  longlong lStack_870;
  undefined8 local_868;
  undefined8 uStack_860;
  undefined8 uStack_858;
  uint uStack_850;
  undefined4 uStack_84c;
  uint local_848;
  uint uStack_844;
  uint uStack_840;
  undefined4 uStack_83c;
  longlong lStack_838;
  undefined4 uStack_830;
  uint uStack_82c;
  uint local_828;
  uint uStack_824;
  undefined4 local_820;
  undefined8 local_81c;
  uint local_814;
  uint local_810;
  uint local_80c;
  undefined1 local_808;
  undefined4 local_804;
  int local_800;
  int local_7fc;
  undefined2 local_7f8;
  undefined8 local_7f0;
  undefined1 local_7e8;
  ulonglong local_7d8;
  short local_7d0 [928];
  ulonglong local_90;
  
  local_90 = DAT_1808d5f00 ^ (ulonglong)auStack_9e8;
  local_948 = ZEXT816(0x1807cd7a0);
  FUN_18017bf40(local_948 + 8);
  FUN_18063ab10(&local_7d8,0,0x740);
  lVar13 = DAT_180cca0d8;
  psVar12 = local_7d0;
  lVar18 = 0x1d;
  do {
    psVar12[-4] = 0;
    psVar12[-3] = 0;
    psVar12[-2] = 0;
    psVar12[-1] = 0;
    *psVar12 = 0;
    psVar12[1] = 0;
    psVar12[2] = 0;
    psVar12[3] = 0;
    psVar12[4] = 0;
    psVar12[5] = 0;
    psVar12[6] = 0;
    psVar12[7] = 0;
    psVar12[8] = 0;
    psVar12[9] = 0;
    psVar12[10] = 0;
    psVar12[0xb] = 0;
    psVar12[0xc] = 0;
    psVar12[0xd] = 0;
    psVar12[0xe] = 0;
    psVar12[0xf] = 0;
    psVar12[0x10] = 0;
    psVar12[0x11] = 0;
    psVar12[0x12] = 0;
    psVar12[0x13] = 0;
    psVar12[0x14] = 0;
    psVar12[0x15] = 0;
    psVar12[0x16] = 0;
    psVar12[0x17] = 0;
    psVar12[0x18] = 0;
    psVar12[0x19] = 0;
    psVar12[0x1a] = 0;
    psVar12[0x1b] = 0;
    psVar12 = psVar12 + 0x20;
    lVar18 = lVar18 + -1;
  } while (lVar18 != 0);
  lVar18 = FUN_18017ea70();
  *(int *)(lVar18 + 4) = *(int *)(lVar18 + 4) + 1;
  cVar9 = FUN_1804514f0(&local_7d8,lVar13 + 2000,0x740);
  lVar13 = FUN_18017ea70();
  if (*(int *)(lVar13 + 4) != 0) {
    *(int *)(lVar13 + 4) = *(int *)(lVar13 + 4) + -1;
  }
  if (cVar9 == '\0') {
    iVar10 = FUN_1805f68d0(&DAT_180cc9e50);
    plVar24 = DAT_180cc9ff0;
    if (iVar10 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1805f6d44(5);
    }
    if (DAT_180cc9e9c == 0x7fffffff) {
      DAT_180cc9e9c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
      FUN_1805f6d44(6);
    }
    DAT_180cca114 = '\0';
    plVar21 = DAT_180cc9fe8;
    if (DAT_180cc9fe8 != DAT_180cc9ff0) {
      do {
        FUN_18015c010(plVar21 + 6);
        plVar21 = plVar21 + 0x25;
      } while (plVar21 != plVar24);
      DAT_180cc9ff0 = DAT_180cc9fe8;
    }
    FUN_1805f68fc(&DAT_180cc9e50);
    goto LAB_18021e3f1;
  }
  UVar14 = GetTickCount64();
  local_960 = UVar14;
  if (param_2 == '\0') {
    cVar9 = FUN_180221ad0();
    if (((cVar9 != '\0') && (DAT_180cca870 != '\0')) && (UVar14 < DAT_180cca868)) {
      uVar19 = 0;
      do {
        if ((*(longlong *)((longlong)local_7d0 + (uVar19 - 8)) !=
             *(longlong *)((longlong)&DAT_180cca128 + uVar19)) ||
           (*(short *)((longlong)local_7d0 + uVar19) !=
            *(short *)((longlong)&DAT_180cca130 + uVar19))) goto LAB_18021dcd9;
        uVar19 = uVar19 + 0x10;
      } while (uVar19 < 0x740);
      goto LAB_18021e3f1;
    }
  }
LAB_18021dcd9:
  local_928 = (undefined1  [16])0x0;
  local_918 = 0;
  local_978 = 2;
  local_950 = &local_7d8;
  uVar30 = 0x3f800000;
  uVar31 = 0;
  uVar32 = 0x3f80000000000000;
  uVar33 = 0;
  uVar34 = 0;
  uVar35 = 0xf;
  auVar36 = ZEXT464(0x3c23d70a);
  auVar27 = ZEXT864(0);
  auVar29 = ZEXT464(0x3f800000);
  do {
    iVar26 = 0;
    puVar17 = local_950;
    iVar10 = local_978;
    do {
      lVar13 = DAT_180cca0d8;
      puVar4 = (undefined *)*puVar17;
      uVar2 = (ushort)puVar17[1];
      if ((puVar4 != (undefined *)0x0) && (uVar2 != 0)) {
        uVar19 = (((ulonglong)(byte)puVar17[1] ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                 (ulonglong)(uVar2 >> 8)) * 0x100000001b3 & DAT_180cc9cb8;
        lVar18 = *(longlong *)(DAT_180cc9ca0 + 8 + uVar19 * 0x10);
        if (lVar18 == DAT_180cc9c90) {
LAB_18021ddc1:
          lVar18 = 0;
        }
        else {
          uVar3 = *(ushort *)(lVar18 + 0x10);
          while (uVar2 != uVar3) {
            if (lVar18 == *(longlong *)(DAT_180cc9ca0 + uVar19 * 0x10)) goto LAB_18021ddc1;
            lVar18 = *(longlong *)(lVar18 + 8);
            uVar3 = *(ushort *)(lVar18 + 0x10);
          }
        }
        lVar25 = DAT_180cc9c90;
        if (lVar18 != 0) {
          lVar25 = lVar18;
        }
        if (lVar25 != DAT_180cc9c90) {
          lVar18 = *(longlong *)(lVar25 + 0x18) * 0xb8 + DAT_180cc9bf8;
          if ((lVar18 != 0) && (*(char *)(lVar18 + 0xb0) != '\x04')) {
            local_900 = 0;
            local_8f0 = 0;
            local_8ec = auVar36._0_4_;
            local_8e8 = 0;
            local_8e4 = 0;
            local_8e0 = 0;
            local_8d8._1_15_ = SUB1615((undefined1  [16])0x0,1);
            auVar6[0xf] = 0;
            auVar6._0_15_ = local_8d8._1_15_;
            local_8d8 = auVar6 << 8;
            local_8b8 = 0;
            local_8b4 = 0xffffffffffffffff;
            local_8ac = 0xffffffff;
            local_814 = auVar27._0_4_;
            local_8a8 = (ulonglong)local_814 << 0x20;
            uVar28 = auVar29._0_4_;
            _uStack_8a0 = CONCAT44(local_814,uVar28);
            _uStack_898 = CONCAT44(local_814,local_814);
            uStack_890 = 0xffffffff;
            _uStack_878 = CONCAT44(0xffffffff,local_814);
            lStack_870 = (ulonglong)local_814 << 0x20;
            uStack_858 = 0xffffffff;
            _uStack_850 = CONCAT44(uVar28,local_814);
            _local_848 = CONCAT44(local_814,local_814);
            _uStack_840 = CONCAT44(0xffffffff,local_814);
            lStack_838 = (ulonglong)local_814 << 0x20;
            _uStack_830 = CONCAT44(local_814,uVar28);
            _local_828 = CONCAT44(local_814,local_814);
            local_820 = 0xffffffff;
            local_81c = 0;
            local_808 = 0;
            local_804 = 0;
            local_7f8 = 1;
            local_7f0 = 0;
            local_7e8 = 0;
            auVar27 = ZEXT1664(auVar27._0_16_);
            auVar29 = ZEXT1664(auVar29._0_16_);
            auVar36 = ZEXT1664(auVar36._0_16_);
            local_908 = puVar4;
            local_8f8 = uVar2;
            local_8c8 = uVar34;
            uStack_8c0 = uVar35;
            local_888 = uVar32;
            uStack_880 = uVar33;
            local_868 = uVar30;
            uStack_860 = uVar31;
            local_810 = local_814;
            local_80c = local_814;
            local_800 = iVar10;
            local_7fc = iVar26;
            uVar15 = FUN_1802196a0(DAT_180cca0d8,8);
            cVar9 = FUN_1804513c0(uVar15,1,2);
            if (cVar9 == '\0') {
              local_930 = '\0';
            }
            else {
              lVar18 = FUN_18017ea70();
              *(int *)(lVar18 + 4) = *(int *)(lVar18 + 4) + 1;
              local_9c8 = CONCAT44(local_9c8._4_4_,iVar26);
              FUN_1801ae520(&local_938,uVar15,lVar13,iVar10);
              lVar13 = FUN_18017ea70();
              if (*(int *)(lVar13 + 4) != 0) {
                *(int *)(lVar13 + 4) = *(int *)(lVar13 + 4) + -1;
              }
            }
            lVar13 = local_938;
            if (local_930 == '\0') {
              lVar13 = 0;
            }
            if (lVar13 == 0) {
LAB_18021e224:
              FUN_18015c010(local_8d8);
            }
            else {
              if ((undefined *)0xefffffffffffffff < puVar4) {
LAB_18021e127:
                uVar15 = FUN_1802196a0(lVar13,3);
                cVar9 = FUN_1804513c0(uVar15,1,2);
                if (cVar9 == '\0') {
                  local_964 = '\0';
                }
                else {
                  lVar18 = FUN_18017ea70();
                  *(int *)(lVar18 + 4) = *(int *)(lVar18 + 4) + 1;
                  FUN_1801aec50(&local_968,uVar15,lVar13);
                  lVar13 = FUN_18017ea70();
                  iVar10 = local_968;
                  if (*(int *)(lVar13 + 4) != 0) {
                    *(int *)(lVar13 + 4) = *(int *)(lVar13 + 4) + -1;
                  }
                  if (local_964 != '\0') {
                    local_8f0 = local_968;
                    local_970 = &DAT_180cc9e50;
                    iVar11 = FUN_1805f68d0(&DAT_180cc9e50);
                    if (iVar11 != 0) {
LAB_18021e659:
                    /* WARNING: Subroutine does not return */
                      FUN_1805f6d44(5);
                    }
                    if (DAT_180cc9e9c == 0x7fffffff) {
                      DAT_180cc9e9c = 0x7ffffffe;
LAB_18021e64e:
                    /* WARNING: Subroutine does not return */
                      FUN_1805f6d44(6);
                    }
                    puVar16 = DAT_180cca000;
                    if (DAT_180cca000 != DAT_180cca008) {
                      do {
                        if ((undefined *)*puVar16 == puVar4) break;
                        puVar16 = puVar16 + 0x25;
                      } while (puVar16 != DAT_180cca008);
                      if ((puVar16 != DAT_180cca008) && (*(int *)(puVar16 + 3) == iVar10)) {
                        FUN_18017edf0(&local_8f0);
                      }
                    }
                    FUN_1805f68fc(&DAT_180cc9e50);
                    if (local_928._8_8_ == local_918) {
                      FUN_180231710(local_928,local_928._8_8_,&local_908);
                    }
                    else {
                      FUN_180232880(local_928._8_8_,&local_908);
                      local_928._8_8_ = local_928._8_8_ + 0x128;
                    }
                  }
                }
                goto LAB_18021e224;
              }
              iVar10 = DAT_180c64008;
              if (DAT_180c64008 == 0) {
                UVar14 = GetTickCount64();
                if (UVar14 < DAT_180c64000) {
                  iVar10 = 0;
                }
                else {
                  local_970 = &DAT_1808ec7a0;
                  iVar10 = FUN_1805f68d0(&DAT_1808ec7a0);
                  if (iVar10 != 0) goto LAB_18021e659;
                  if (DAT_1808ec7ec == 0x7fffffff) {
                    DAT_1808ec7ec = 0x7ffffffe;
                    goto LAB_18021e64e;
                  }
                  if ((DAT_180c64008 == 0) && (DAT_180c64000 <= UVar14)) {
                    DAT_180c64008 = FUN_1804174b0("C_EconItemView",0x34b55816);
                    DAT_180c64000 = 0xffffffffffffffff;
                    if (DAT_180c64008 == 0) {
                      DAT_180c64000 = UVar14 + 1000;
                    }
                  }
                  iVar10 = DAT_180c64008;
                  FUN_1805f68fc(&DAT_1808ec7a0);
                }
              }
              lVar18 = FUN_18017ea70();
              *(int *)(lVar18 + 4) = *(int *)(lVar18 + 4) + 1;
              if (iVar10 + lVar13 == 0) {
                bVar7 = false;
              }
              else {
                local_970 = (undefined *)0x0;
                cVar9 = FUN_1804514f0(&local_970,iVar10 + lVar13,8);
                if (cVar9 == '\0') {
                  bVar7 = false;
                }
                else {
                  local_958 = local_970;
                  bVar7 = true;
                }
              }
              puVar8 = local_958;
              lVar18 = FUN_18017ea70();
              if (*(int *)(lVar18 + 4) != 0) {
                *(int *)(lVar18 + 4) = *(int *)(lVar18 + 4) + -1;
              }
              if ((bVar7) && (puVar8 == puVar4)) goto LAB_18021e127;
              FUN_18015c010(local_8d8);
            }
            iVar10 = local_978;
          }
        }
      }
      iVar26 = iVar26 + 1;
      puVar17 = puVar17 + 2;
    } while (iVar26 < 0x3a);
    local_978 = iVar10 + 1;
    local_950 = local_950 + 0x74;
  } while (local_978 < 4);
  iVar10 = FUN_1805f68d0(&DAT_180cc9e50);
  if (iVar10 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(5);
  }
  if (DAT_180cc9e9c == 0x7fffffff) {
    DAT_180cc9e9c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(6);
  }
  if (DAT_180cca114 == '\0') {
LAB_18021e362:
    _DAT_180cca018 = _DAT_180cca018 + 1;
  }
  else {
    uVar30 = local_928._8_8_;
    if ((longlong)(local_928._8_8_ - local_928._0_8_) / 0x128 !=
        ((longlong)DAT_180cc9ff0 - (longlong)DAT_180cc9fe8) / 0x128) goto LAB_18021e362;
    if (local_928._0_8_ != local_928._8_8_) {
      piVar22 = (int *)(local_928._0_8_ + 0x108);
      plVar24 = DAT_180cc9fe8;
      do {
        if ((((*(longlong *)(piVar22 + -0x42) != *plVar24) ||
             ((short)piVar22[-0x3e] != (short)plVar24[2])) || (*piVar22 != (int)plVar24[0x21])) ||
           ((piVar22[1] != *(int *)((longlong)plVar24 + 0x10c) ||
            (cVar9 = FUN_1801d8910(piVar22 + -0x3c,plVar24 + 3), cVar9 == '\0'))))
        goto LAB_18021e362;
        plVar24 = plVar24 + 0x25;
        piVar1 = piVar22 + 8;
        piVar22 = piVar22 + 0x4a;
      } while (piVar1 != (int *)uVar30);
    }
  }
  FUN_1801b31c0(&DAT_180cc9fe8);
  DAT_180cc9fe8 = (longlong *)local_928._0_8_;
  DAT_180cc9ff0 = (longlong *)local_928._8_8_;
  _DAT_180cc9ff8 = local_918;
  local_928 = (undefined1  [16])0x0;
  local_918 = 0;
  DAT_180cca114 = '\x01';
  FUN_18063aed0(&DAT_180cca128,&local_7d8,0x740);
  DAT_180cca868 = local_960 + 500;
  DAT_180cca870 = '\x01';
  FUN_1805f68fc(&DAT_180cc9e50);
  FUN_1801b31c0(local_928);
LAB_18021e3f1:
  FUN_18017bf40(&local_960);
  UVar14 = local_960;
  uVar23 = local_960 - local_948._8_8_;
  puVar17 = (ulonglong *)FUN_1802306c0();
  local_9c8 = *puVar17 + 1;
  *puVar17 = local_9c8;
  uVar19 = puVar17[1];
  puVar17[1] = uVar19 + uVar23;
  local_998 = puVar17[3] + (ulonglong)(999999 < uVar23);
  puVar17[3] = local_998;
  local_990 = puVar17[4] + (ulonglong)(4999999 < uVar23);
  puVar17[4] = local_990;
  local_988 = puVar17[5] + (ulonglong)(15999999 < uVar23);
  puVar17[5] = local_988;
  uVar20 = puVar17[2];
  if (puVar17[2] < uVar23) {
    puVar17[2] = uVar23;
    uVar20 = uVar23;
  }
  if ((UVar14 == puVar17[7]) || ((longlong)puVar17[7] <= (longlong)UVar14)) {
    local_9a8 = (double)(longlong)(UVar14 - puVar17[6]) / 1000000.0;
    dVar5 = (double)(uVar19 + uVar23);
    local_9a0 = 0.0;
    if (0.0 < local_9a8) {
      local_9a0 = (dVar5 / 1000.0) / local_9a8;
    }
    local_9b0 = dVar5 / 1000000.0;
    local_9b8 = (double)uVar20 / 1000.0;
    local_9c0 = (dVar5 / (double)local_9c8) / 1000.0;
    FUN_1801af8a0(dVar5 / (double)local_9c8,local_9c0,local_948._0_8_);
    puVar17[2] = 0;
    puVar17[1] = 0;
    *puVar17 = 0;
    puVar17[5] = 0;
    puVar17[4] = 0;
    puVar17[3] = 0;
    puVar17[6] = UVar14;
    puVar17[7] = UVar14 + 5000000000;
  }
}



