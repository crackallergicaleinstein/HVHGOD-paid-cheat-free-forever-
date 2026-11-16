// FUN_1802836d0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802836d0 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_1802836d0(void)

{
  float fVar1;
  float fVar2;
  ulonglong uVar3;
  bool bVar4;
  bool bVar5;
  undefined1 (*pauVar6) [16];
  char cVar7;
  undefined1 uVar8;
  short sVar9;
  short sVar10;
  ULONGLONG UVar11;
  longlong *plVar12;
  longlong lVar13;
  longlong lVar14;
  char *pcVar15;
  char *pcVar16;
  undefined *puVar17;
  undefined *puVar18;
  int iVar19;
  longlong *plVar20;
  ulonglong uVar21;
  undefined1 (*pauVar22) [16];
  float fVar23;
  undefined8 extraout_XMM0_Qa;
  undefined1 extraout_var [56];
  undefined1 extraout_var_00 [56];
  undefined1 auVar24 [64];
  undefined1 auVar25 [64];
  undefined1 auVar26 [64];
  undefined1 auVar27 [64];
  undefined1 auVar28 [16];
  undefined1 auVar29 [64];
  longlong lVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  undefined1 auVar34 [64];
  undefined1 auStack_1c8 [32];
  undefined8 local_1a8;
  undefined *local_198 [2];
  undefined1 local_188 [16];
  float local_178;
  float local_174;
  float local_170;
  int local_168;
  float local_160;
  float fStack_15c;
  float local_158;
  char cStack_154;
  ULONGLONG local_150;
  longlong *local_148;
  undefined *local_140;
  undefined *local_138;
  undefined1 (*local_130) [16];
  longlong local_128;
  int iStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  float fStack_114;
  longlong lStack_110;
  float local_108;
  undefined4 uStack_104;
  longlong lStack_100;
  undefined1 local_f8;
  undefined1 uStack_f7;
  short sStack_f6;
  undefined4 uStack_f4;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  ulonglong local_d0;
  
  local_d0 = DAT_1808d5f00 ^ (ulonglong)auStack_1c8;
  uVar21 = 0;
  FUN_18027fc00(&local_160);
  UVar11 = GetTickCount64();
  local_150 = UVar11;
  cVar7 = FUN_180282640(&DAT_180cb6200);
  if ((cVar7 == '\0') && (cVar7 = FUN_18027e230(&DAT_180cbda50), cVar7 == '\0')) {
    cVar7 = FUN_18027d6e0(&DAT_180cbf2c0);
    bVar5 = false;
    if (cVar7 == '\0') goto LAB_180283792;
  }
  bVar5 = true;
LAB_180283792:
  if ((cStack_154 == '\0') || (!bVar5)) {
    local_188 = (undefined1  [16])0x0;
    FUN_1802847e0(0,local_188);
    if (DAT_180bbef60 != DAT_180bbef68) {
      DAT_180bbef68 = DAT_180bbef60;
    }
  }
  else {
    if (DAT_180c7df28 == (undefined8 *)0x0) {
      local_188._8_8_ = 0x15;
      local_188._0_8_ = "tier0.dll:g_pMemAlloc";
      DAT_180c7df28 = (undefined8 *)FUN_180451750(local_188);
    }
    local_130 = (undefined1 (*) [16])
                (**(code **)(*(longlong *)*DAT_180c7df28 + 8))((longlong *)*DAT_180c7df28,0x40);
    fVar31 = local_158;
    if (local_130 == (undefined1 (*) [16])0x0) {
      local_130 = (undefined1 (*) [16])0x0;
    }
    else {
      *local_130 = (undefined1  [16])0x0;
      *(undefined4 *)(*local_130 + 8) = 1;
      *(undefined4 *)(*local_130 + 0xc) = 1;
      *(undefined ***)*local_130 =
           std::_Ref_count_obj2<features::esp::item::_anon_492A55C6::frame>::vftable;
      *(undefined8 *)local_130[3] = 0;
      *(undefined8 *)local_130[1] = 0;
      *(undefined8 *)(local_130[1] + 8) = 0;
      *(undefined8 *)local_130[2] = 0;
      *(undefined8 *)(local_130[2] + 8) = 0;
      *(undefined8 *)(local_130[3] + 8) = 0;
    }
    pauVar6 = local_130;
    auVar24._0_8_ = 0;
    pauVar22 = local_130 + 1;
    local_188._8_8_ = local_130;
    local_188._0_8_ = pauVar22;
    lVar30 = CONCAT44(fStack_15c,local_160);
    *(longlong *)(local_130[2] + 8) = lVar30;
    *(float *)local_130[3] = local_158;
    *(ULONGLONG *)(local_130[3] + 8) = UVar11;
    lVar14 = *(longlong *)*pauVar22;
    if ((ulonglong)((*(longlong *)local_130[2] - lVar14) / 0x38) < 0x80) {
      lVar13 = *(longlong *)(local_130[1] + 8);
      auVar24._0_8_ = FUN_18015bca0(0x1c00);
      FUN_18063aed0(auVar24._0_8_,*(longlong *)*pauVar22,
                    *(longlong *)(pauVar6[1] + 8) - *(longlong *)*pauVar22);
      auVar24._0_8_ = FUN_180284cc0(pauVar22,auVar24._0_8_,(lVar13 - lVar14) / 0x38,0x80);
    }
    plVar12 = (longlong *)FUN_1803d44c0(auVar24._0_8_,&local_f0,2);
    plVar20 = (longlong *)*plVar12;
    local_148 = (longlong *)plVar12[1];
    auVar24 = ZEXT864(0);
    auVar28 = auVar24._0_16_;
    fVar32 = fStack_15c;
    fVar33 = local_160;
    if (plVar20 != local_148) {
      auVar34 = ZEXT464(0x3f800000);
      auVar25 = ZEXT464((uint)local_188._8_4_);
      auVar26 = ZEXT464((uint)local_188._4_4_);
      auVar27 = ZEXT464((uint)local_188._0_4_);
      auVar28 = vunpcklps_avx(ZEXT416((uint)local_188._0_4_),ZEXT416((uint)local_188._4_4_));
      auVar29 = ZEXT1664(auVar28);
      do {
        auVar28 = auVar24._0_16_;
        if (0xff < (ulonglong)((*(longlong *)(pauVar6[1] + 8) - *(longlong *)*pauVar22) / 0x38))
        break;
        auVar25 = ZEXT1664(auVar25._0_16_);
        auVar26 = ZEXT1664(auVar26._0_16_);
        auVar27 = ZEXT1664(auVar27._0_16_);
        auVar24 = ZEXT1664(auVar28);
        auVar29 = ZEXT1664(auVar29._0_16_);
        auVar34 = ZEXT1664(auVar34._0_16_);
        cVar7 = FUN_180283240(*plVar20);
        if (cVar7 != '\0') {
          sVar9 = FUN_18027c670(*plVar20,(int)plVar20[1]);
          if (sVar9 != 0) {
            iVar19 = DAT_180c652c8;
            if (DAT_180c652c8 == 0) {
              UVar11 = GetTickCount64();
              if (UVar11 < DAT_180c652c0) {
                iVar19 = 0;
              }
              else {
                local_198[0] = &DAT_1808f25a0;
                iVar19 = FUN_1805f68d0(&DAT_1808f25a0);
                if (iVar19 != 0) goto LAB_1802841f1;
                if (DAT_1808f25ec == 0x7fffffff) {
                  DAT_1808f25ec = 0x7ffffffe;
                  goto LAB_180284231;
                }
                if ((DAT_180c652c8 == 0) && (DAT_180c652c0 <= UVar11)) {
                  DAT_180c652c8 = FUN_1804174b0("C_BaseEntity",0x9d930423);
                  DAT_180c652c0 = 0xffffffffffffffff;
                  if (DAT_180c652c8 == 0) {
                    DAT_180c652c0 = UVar11 + 1000;
                  }
                }
                iVar19 = DAT_180c652c8;
                FUN_1805f68fc(&DAT_1808f25a0);
              }
            }
            lVar14 = *plVar20;
            lVar13 = FUN_18017ea70();
            *(int *)(lVar13 + 4) = *(int *)(lVar13 + 4) + 1;
            if (iVar19 + lVar14 == 0) {
              bVar5 = false;
            }
            else {
              local_198[0] = (undefined *)0x0;
              cVar7 = FUN_1804514f0(local_198,iVar19 + lVar14,8);
              if (cVar7 == '\0') {
                bVar5 = false;
              }
              else {
                local_140 = local_198[0];
                bVar5 = true;
              }
            }
            puVar17 = local_140;
            lVar14 = FUN_18017ea70();
            if (*(int *)(lVar14 + 4) != 0) {
              *(int *)(lVar14 + 4) = *(int *)(lVar14 + 4) + -1;
            }
            puVar18 = (undefined *)0x0;
            if (bVar5) {
              puVar18 = puVar17;
            }
            iVar19 = DAT_180c652cc;
            if (DAT_180c652cc == 0) {
              UVar11 = GetTickCount64();
              if (UVar11 < DAT_180c652a8) {
                iVar19 = 0;
              }
              else {
                local_198[0] = &DAT_1808f2550;
                iVar19 = FUN_1805f68d0(&DAT_1808f2550);
                if (iVar19 != 0) goto LAB_1802841f1;
                if (DAT_1808f259c == 0x7fffffff) {
                  DAT_1808f259c = 0x7ffffffe;
LAB_180284231:
                    /* WARNING: Subroutine does not return */
                  FUN_1805f6d44(6);
                }
                if ((DAT_180c652cc == 0) && (DAT_180c652a8 <= UVar11)) {
                  DAT_180c652cc = FUN_1804174b0("CGameSceneNode",0xe8b4eae5);
                  DAT_180c652a8 = 0xffffffffffffffff;
                  if (DAT_180c652cc == 0) {
                    DAT_180c652a8 = UVar11 + 1000;
                  }
                }
                iVar19 = DAT_180c652cc;
                FUN_1805f68fc(&DAT_1808f2550);
              }
            }
            lVar14 = FUN_18017ea70();
            *(int *)(lVar14 + 4) = *(int *)(lVar14 + 4) + 1;
            if (puVar18 + iVar19 == (undefined *)0x0) {
              bVar5 = false;
            }
            else {
              local_178 = auVar24._0_4_;
              local_174 = local_178;
              local_170 = local_178;
              cVar7 = FUN_1804514f0(&local_178,puVar18 + iVar19,0xc);
              if (cVar7 == '\0') {
                bVar5 = false;
              }
              else {
                auVar27 = ZEXT464((uint)local_178);
                auVar26 = ZEXT464((uint)local_174);
                auVar25 = ZEXT464((uint)local_170);
                bVar5 = true;
                auVar28 = vunpcklps_avx(ZEXT416((uint)local_178),ZEXT416((uint)local_174));
                auVar29 = ZEXT1664(auVar28);
              }
            }
            lVar14 = FUN_18017ea70();
            if (*(int *)(lVar14 + 4) != 0) {
              *(int *)(lVar14 + 4) = *(int *)(lVar14 + 4) + -1;
            }
            iVar19 = DAT_180c652b8;
            if (DAT_180c652b8 == 0) {
              UVar11 = GetTickCount64();
              if (UVar11 < DAT_180c652b0) {
                iVar19 = 0;
              }
              else {
                local_198[0] = &DAT_1808f24b0;
                iVar19 = FUN_1805f68d0(&DAT_1808f24b0);
                if (iVar19 != 0) {
LAB_1802841f1:
                    /* WARNING: Subroutine does not return */
                  FUN_1805f6d44(5);
                }
                if (DAT_1808f24fc == 0x7fffffff) {
                  DAT_1808f24fc = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
                  FUN_1805f6d44(6);
                }
                if ((DAT_180c652b8 == 0) && (DAT_180c652b0 <= UVar11)) {
                  DAT_180c652b8 = FUN_1804174b0("CEntityInstance",0xa8a45978);
                  DAT_180c652b0 = 0xffffffffffffffff;
                  if (DAT_180c652b8 == 0) {
                    DAT_180c652b0 = UVar11 + 1000;
                  }
                }
                iVar19 = DAT_180c652b8;
                FUN_1805f68fc(&DAT_1808f24b0);
              }
            }
            lVar14 = *plVar20;
            lVar13 = FUN_18017ea70();
            *(int *)(lVar13 + 4) = *(int *)(lVar13 + 4) + 1;
            if (iVar19 + lVar14 == 0) {
              bVar4 = false;
            }
            else {
              local_198[0] = (undefined *)0x0;
              cVar7 = FUN_1804514f0(local_198,iVar19 + lVar14,8);
              if (cVar7 == '\0') {
                bVar4 = false;
              }
              else {
                local_138 = local_198[0];
                bVar4 = true;
              }
            }
            puVar17 = local_138;
            lVar14 = FUN_18017ea70();
            if (*(int *)(lVar14 + 4) != 0) {
              *(int *)(lVar14 + 4) = *(int *)(lVar14 + 4) + -1;
            }
            if (bVar4) {
              puVar17 = puVar17 + 0x10;
              lVar14 = FUN_18017ea70();
              *(int *)(lVar14 + 4) = *(int *)(lVar14 + 4) + 1;
              if (puVar17 != (undefined *)0x0) goto LAB_180283ceb;
              bVar4 = false;
            }
            else {
              lVar14 = FUN_18017ea70();
              *(int *)(lVar14 + 4) = *(int *)(lVar14 + 4) + 1;
              puVar17 = (undefined *)0x10;
LAB_180283ceb:
              local_198[0] = (undefined *)((ulonglong)local_198[0] & 0xffffffff00000000);
              cVar7 = FUN_1804514f0(local_198,puVar17,4);
              if (cVar7 == '\0') {
                bVar4 = false;
              }
              else {
                local_168 = (int)local_198[0];
                bVar4 = true;
              }
            }
            lVar14 = FUN_18017ea70();
            if (*(int *)(lVar14 + 4) != 0) {
              *(int *)(lVar14 + 4) = *(int *)(lVar14 + 4) + -1;
            }
            iVar19 = -1;
            if (bVar4) {
              iVar19 = local_168;
            }
            if (bVar5) {
              sVar10 = thunk_FUN_180624430(auVar26._0_4_ + auVar27._0_4_ + auVar25._0_4_);
              if (sVar10 < 1) {
                if (iVar19 != -1) {
                  local_128 = *plVar20;
                  uStack_11c = auVar29._0_4_;
                  uStack_118 = auVar29._4_4_;
                  fStack_114 = auVar25._0_4_;
                  local_108 = local_158;
                  lStack_100 = 0;
                  local_f8 = 0;
                  plVar12 = DAT_180bbef60;
                  lStack_110 = lVar30;
                  if (DAT_180bbef60 != DAT_180bbef68) {
                    do {
                      if ((*plVar12 == local_128) && ((int)plVar12[1] == iVar19)) break;
                      plVar12 = plVar12 + 7;
                    } while (plVar12 != DAT_180bbef68);
                    if (((plVar12 != DAT_180bbef68) &&
                        (fVar1 = *(float *)((longlong)plVar12 + 0x14) - fStack_114,
                        fVar23 = *(float *)(plVar12 + 2) - auVar26._0_4_,
                        fVar2 = *(float *)((longlong)plVar12 + 0xc) - auVar27._0_4_,
                        fVar2 * fVar2 + fVar23 * fVar23 + fVar1 * fVar1 < auVar34._0_4_)) &&
                       (fVar1 = *(float *)((longlong)plVar12 + 0x1c) - fVar32,
                       (*(float *)(plVar12 + 3) - fVar33) * (*(float *)(plVar12 + 3) - fVar33) +
                       fVar1 * fVar1 +
                       (*(float *)(plVar12 + 4) - fVar31) * (*(float *)(plVar12 + 4) - fVar31) <
                       4096.0)) {
                      if (local_150 - plVar12[5] < 0xfa) {
                        local_f8 = (undefined1)plVar12[6];
                        lStack_110 = plVar12[3];
                        local_108 = *(float *)(plVar12 + 4);
                        lStack_100 = plVar12[5];
                      }
                    }
                  }
                  plVar12 = *(longlong **)(pauVar6[1] + 8);
                  iStack_120 = iVar19;
                  sStack_f6 = sVar9;
                  if (plVar12 == *(longlong **)pauVar6[2]) {
                    FUN_180284b50(pauVar22,plVar12,&local_128);
                  }
                  else {
                    *plVar12 = local_128;
                    plVar12[1] = CONCAT44(uStack_11c,iVar19);
                    plVar12[2] = CONCAT44(fStack_114,uStack_118);
                    plVar12[3] = lStack_110;
                    auVar28._4_4_ = uStack_104;
                    auVar28._0_4_ = local_108;
                    auVar28._8_8_ = lStack_100;
                    *(undefined1 (*) [16])(plVar12 + 4) = auVar28;
                    plVar12[6] = CONCAT44(uStack_f4,CONCAT22(sVar9,CONCAT11(uStack_f7,local_f8)));
                    *(longlong *)(pauVar6[1] + 8) = *(longlong *)(pauVar6[1] + 8) + 0x38;
                  }
                }
              }
            }
          }
        }
        auVar28 = auVar24._0_16_;
        plVar20 = plVar20 + 3;
      } while (plVar20 != local_148);
    }
    auVar25 = ZEXT1664(auVar28);
    auVar24._0_8_ = FUN_1801abba0(&local_f0);
    auVar24._8_56_ = extraout_var;
    iVar19 = 2;
    uVar3 = (*(longlong *)(pauVar6[1] + 8) - *(longlong *)*pauVar22) / 0x38;
    if (uVar3 != 0) {
      auVar26 = ZEXT464(0x3cd013a9);
      auVar27 = ZEXT464(0x40000000);
      do {
        if (iVar19 < 1) goto LAB_1802840f6;
        lVar13 = ((DAT_180bbef78 + uVar21) % uVar3) * 0x38;
        lVar14 = *(longlong *)*pauVar22;
        lVar30 = *(longlong *)(lVar13 + 0x28 + lVar14);
        if ((lVar30 == 0) || (99 < local_150 - lVar30)) {
          fVar1 = fVar33 - *(float *)(lVar13 + 0xc + lVar14);
          fVar23 = fVar32 - *(float *)(lVar13 + 0x10 + lVar14);
          fVar2 = fVar31 - *(float *)(lVar13 + 0x14 + lVar14);
          fVar1 = fVar23 * fVar23 + fVar1 * fVar1 + fVar2 * fVar2;
          fVar23 = auVar25._0_4_;
          if (fVar1 != fVar23) {
            if (fVar1 < 0.0) {
              fVar23 = (float)FUN_18061e150(fVar1);
            }
            else {
              fVar23 = SQRT(fVar1);
            }
          }
          fVar23 = fVar23 * auVar26._0_4_;
          pcVar15 = (char *)FUN_1802826b0(&DAT_180cb6200,*(undefined2 *)(lVar13 + 0x32 + lVar14));
          pcVar16 = (char *)FUN_18027e290(&DAT_180cbda50);
          auVar24._8_56_ = extraout_var_00;
          auVar24._0_8_ = extraout_XMM0_Qa;
          if (((pcVar15 == (char *)0x0) || (*pcVar15 == '\0')) ||
             ((*(int *)(pcVar15 + 0x1d0) != 0 ||
              (auVar24 = ZEXT464((uint)*(float *)(pcVar15 + 0x1cc)),
              *(float *)(pcVar15 + 0x1cc) < fVar23)))) {
            if (pcVar16 != (char *)0x0) {
              if (*pcVar16 != '\0') {
                if (*(int *)(pcVar16 + 0x6c) == 0) {
                  auVar24 = ZEXT464((uint)*(float *)(pcVar16 + 0x70));
                  if (fVar23 <= *(float *)(pcVar16 + 0x70)) goto LAB_180284003;
                }
              }
            }
          }
          else {
LAB_180284003:
            iVar19 = iVar19 + -1;
            AcquireSRWLockShared((PSRWLOCK)&DAT_180bb88c0);
            local_f0 = _DAT_180bb8890;
            uStack_e8 = uRam0000000180bb8898;
            uStack_e0 = uRam0000000180bb88a0;
            uStack_d8 = uRam0000000180bb88a8;
            auVar24 = ZEXT1664(auVar26._0_16_);
            auVar27 = ZEXT1664(auVar27._0_16_);
            auVar25 = ZEXT1664(auVar25._0_16_);
            cVar7 = cRam0000000180bb88b8;
            ReleaseSRWLockShared((PSRWLOCK)&DAT_180bb88c0);
            local_1a8 = uStack_e0;
            if (cVar7 != '\0') {
              local_1a8 = uStack_e8;
            }
            local_178 = auVar25._0_4_ + *(float *)(lVar13 + 0xc + lVar14);
            local_174 = auVar25._0_4_ + *(float *)(lVar13 + 0x10 + lVar14);
            local_170 = auVar27._0_4_ + *(float *)(lVar13 + 0x14 + lVar14);
            auVar26 = ZEXT1664(auVar24._0_16_);
            auVar27 = ZEXT1664(auVar27._0_16_);
            auVar25 = ZEXT1664(auVar25._0_16_);
            uVar8 = FUN_1804178c0(uStack_e8,&local_160,&local_178,*(undefined8 *)(lVar13 + lVar14));
            *(undefined1 *)(lVar13 + 0x30 + lVar14) = uVar8;
            *(ULONGLONG *)(lVar13 + 0x28 + lVar14) = local_150;
            auVar24 = ZEXT864(CONCAT44(fStack_15c,local_160));
            *(ulonglong *)(lVar13 + 0x18 + lVar14) = CONCAT44(fStack_15c,local_160);
            *(float *)(lVar13 + 0x20 + lVar14) = local_158;
            fVar31 = local_158;
            fVar32 = fStack_15c;
            fVar33 = local_160;
          }
          pauVar22 = (undefined1 (*) [16])local_188._0_8_;
        }
        uVar21 = uVar21 + 1;
      } while (uVar21 < uVar3);
    }
    if (uVar3 != 0) {
LAB_1802840f6:
      DAT_180bbef78 = (DAT_180bbef78 + 2) % uVar3;
    }
    if (pauVar22 != (undefined1 (*) [16])&DAT_180bbef60) {
      lVar14 = *(longlong *)(*pauVar22 + 8) - *(longlong *)*pauVar22;
      auVar24._0_8_ = FUN_180284910(lVar14,*(undefined8 *)*pauVar22,lVar14 / 0x38);
    }
    local_188._8_8_ = local_130;
    local_188._0_8_ = pauVar22;
    FUN_1802847e0(auVar24._0_8_,local_188);
  }
}



