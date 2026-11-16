// FUN_1802522f0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802522f0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1802522f0(undefined8 param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  bool bVar5;
  char cVar6;
  short sVar7;
  int iVar8;
  float *pfVar9;
  uint *puVar10;
  float *pfVar11;
  ULONGLONG UVar12;
  undefined8 uVar13;
  uint *puVar14;
  int iVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  longlong lVar19;
  int iVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined1 auVar26 [64];
  undefined1 auVar27 [64];
  undefined1 auVar28 [64];
  undefined1 auVar29 [64];
  float fVar30;
  float fVar31;
  undefined1 auVar32 [64];
  undefined1 auStack_7a8 [32];
  undefined **local_788;
  char *local_780;
  uint local_778;
  uint local_770;
  uint local_768;
  float local_758 [5];
  int local_744;
  uint local_740;
  uint local_73c;
  int local_738;
  float local_734;
  uint local_730;
  float local_72c;
  float local_720;
  uint local_71c;
  uint local_718;
  undefined8 local_710;
  undefined8 local_700;
  longlong lStack_6f8;
  undefined8 uStack_6f0;
  undefined8 uStack_6e8;
  char local_6d8 [1536];
  ulonglong local_d8;
  
  local_d8 = DAT_1808d5f00 ^ (ulonglong)auStack_7a8;
  AcquireSRWLockShared((PSRWLOCK)&DAT_180bb88c0);
  local_700 = _DAT_180bb8890;
  lStack_6f8 = lRam0000000180bb8898;
  uStack_6f0 = uRam0000000180bb88a0;
  uStack_6e8 = uRam0000000180bb88a8;
  cVar6 = cRam0000000180bb88b8;
  ReleaseSRWLockShared((PSRWLOCK)&DAT_180bb88c0);
  lVar19 = lStack_6f8;
  iVar8 = 0;
  if ((((param_2 != 0) && (lStack_6f8 != 0)) && (cVar6 != '\0')) &&
     (((DAT_180cad2e0 == 1 && (DAT_180cad6b8 != '\0')) &&
      ((DAT_180cad9c0 != '\0' && (DAT_180b8e4ed != '\0')))))) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) | 1;
    lVar17 = 0;
    if (*(longlong *)(param_2 + 0x40) != 0) {
      lVar17 = *(longlong *)(param_2 + 0x40) + 0x10;
    }
    if (lVar17 != 0) {
      lVar16 = 0;
      if (*(longlong *)(lVar17 + 0x30) != 0) {
        lVar16 = *(longlong *)(lVar17 + 0x30) + 0x10;
      }
      if (lVar16 != 0) {
        fVar31 = *(float *)(lVar16 + 8);
        local_71c = *(uint *)(lVar16 + 0xc);
        local_718 = *(uint *)(lVar16 + 0x10);
        auVar29 = ZEXT464(local_71c);
        auVar32 = ZEXT464(local_718);
        local_720 = fVar31;
        sVar7 = thunk_FUN_180624430();
        if (((sVar7 < 1) && (sVar7 = thunk_FUN_180624430(auVar29._0_8_), sVar7 < 1)) &&
           (sVar7 = thunk_FUN_180624430(auVar32._0_8_), sVar7 < 1)) {
          if ((DAT_180b8e5a0 == *(longlong *)(param_2 + 8)) && (DAT_180b8e598 == lVar19)) {
          }
          if (((DAT_180b8e5a8 == '\0') || (DAT_180b8e598 != lVar19)) ||
             (*(longlong *)(param_2 + 8) != DAT_180b8e5a0 + 1)) {
            bVar5 = false;
          }
          else {
            bVar5 = true;
          }
          pfVar9 = &local_720;
          if (bVar5) {
            pfVar9 = (float *)&DAT_180b8e588;
          }
          local_710 = *(undefined8 *)pfVar9;
          DAT_180b8e588._4_4_ = auVar29._0_4_;
          _DAT_180b8e590 = auVar32._0_4_;
          DAT_180b8e5a0 = *(undefined8 *)(param_2 + 8);
          DAT_180b8e598 = lVar19;
          DAT_180b8e5a8 = 1;
          DAT_180b8e588._0_4_ = fVar31;
          cVar6 = FUN_18024a3b0(&DAT_180b8e588,param_2);
          if (cVar6 != '\0') {
          }
          if (!bVar5) {
          }
          fVar22 = auVar29._0_4_ - local_710._4_4_;
          auVar32 = ZEXT464((uint)fVar22);
          fVar24 = local_710._4_4_;
          sVar7 = thunk_FUN_180624430(fVar22);
          auVar29 = ZEXT464(0x43b40000);
          local_738 = (int)sVar7;
          fVar22 = 0.0;
          if (local_738 < 1) {
            fVar21 = (float)FUN_180615070(auVar32._0_8_,auVar29._0_8_);
          }
          else {
            fVar21 = 0.0;
          }
          if ((ABS(fVar21) < 0.01) && (ABS(fVar31 - (float)local_710) < 0.01)) {
          }
          if (param_2 == -0x28) {
          }
          if (*(int **)(param_2 + 0x38) == (int *)0x0) {
          }
          iVar1 = *(int *)(param_2 + 0x30);
          lVar19 = (longlong)iVar1;
          if (iVar1 < 1) {
          }
          iVar20 = *(int *)(param_2 + 0x34);
          iVar15 = **(int **)(param_2 + 0x38);
          if (iVar20 < 0) {
          }
          if (iVar20 < iVar1) {
          }
          if (iVar15 < 0) {
          }
          if (iVar20 < iVar15) {
          }
          if (iVar15 < iVar1) {
          }
          if (0xf < iVar1) {
          }
          iVar20 = 0x10 - iVar1;
          if (4 < iVar20) {
            iVar20 = 4;
          }
          if (iVar20 < 1) {
          }
          lVar17 = *(longlong *)(*(longlong *)(param_2 + 0x38) + lVar19 * 8);
          puVar10 = (uint *)0x0;
          if (lVar17 != 0) {
            puVar10 = (uint *)(lVar17 + 0x10);
          }
          if (puVar10 == (uint *)0x0) {
          }
          if ((*puVar10 >> 9 & 1) == 0) {
          }
          if ((*puVar10 >> 0xb & 1) == 0) {
          }
          local_73c = puVar10[0x14];
          local_730 = puVar10[0x17];
          auVar27 = ZEXT464(local_730);
          auVar3 = vmaxss_avx(ZEXT416(puVar10[0x15]),ZEXT416(0x3cc13fd1));
          auVar28 = ZEXT1664(auVar3);
          auVar4 = vmaxss_avx(ZEXT416((uint)(auVar3._0_4_ + 0.00390625)),ZEXT416(0x3f6e9a5f));
          auVar26 = ZEXT1664(auVar4);
          local_740 = puVar10[0x16];
          local_734 = auVar4._0_4_;
          fVar21 = (float)local_710;
          sVar7 = thunk_FUN_180624430(auVar3._0_8_);
          if (0 < sVar7) {
          }
          sVar7 = thunk_FUN_180624430(auVar27._0_8_);
          if (0 < sVar7) {
          }
          fVar30 = 1.0;
          if (1.0 <= auVar26._0_4_) {
          }
          local_72c = (float)iVar20;
          local_744 = 0;
          do {
            iVar15 = local_744;
            iVar8 = iVar8 + 1;
            auVar26 = ZEXT1664(CONCAT124(SUB1612(ZEXT816(0),4),(float)iVar8 / local_72c));
            puVar10 = (uint *)FUN_180251c10(param_2 + 0x20,lVar16);
            if (puVar10 == (uint *)0x0) break;
            *puVar10 = *puVar10 | 1;
            puVar14 = (uint *)0x0;
            if (*(longlong *)(puVar10 + 2) != 0) {
              puVar14 = (uint *)(*(longlong *)(puVar10 + 2) + 0x10);
            }
            local_758[4] = 89.0;
            local_758[0] = -89.0;
            *puVar14 = *puVar14 | 1;
            local_758[2] = (fVar31 - fVar21) * auVar26._0_4_ + fVar21;
            pfVar9 = local_758;
            if (-89.0 <= local_758[2]) {
              pfVar9 = local_758 + 2;
            }
            pfVar11 = local_758 + 4;
            if (local_758[2] <= 89.0) {
              pfVar11 = pfVar9;
            }
            local_758[2] = auVar26._0_4_;
            local_758[0] = fVar30;
            local_758[4] = fVar22;
            puVar14[2] = (uint)*pfVar11;
            fVar23 = fVar22;
            if (local_738 < 1) {
              fVar22 = (float)FUN_180615070(auVar32._0_8_,auVar29._0_8_);
            }
            pfVar9 = local_758 + 4;
            if (fVar23 <= auVar26._0_4_) {
              pfVar9 = local_758 + 2;
            }
            pfVar11 = local_758;
            if (auVar26._0_4_ <= fVar30) {
              pfVar11 = pfVar9;
            }
            fVar22 = fVar22 * *pfVar11 + fVar24;
            auVar27 = ZEXT464((uint)fVar22);
            sVar7 = thunk_FUN_180624430(fVar22);
            fVar25 = auVar26._0_4_;
            fVar22 = fVar23;
            if (sVar7 < 1) {
              fVar23 = (float)FUN_180615070(auVar27._0_8_,auVar29._0_8_);
              fVar25 = auVar26._0_4_;
            }
            *puVar14 = *puVar14 | 6;
            puVar14[3] = (uint)fVar23;
            puVar14[4] = 0;
            *puVar10 = *puVar10 | 0x1e00;
            iVar15 = local_744 + 1;
            puVar10[0x14] = local_73c;
            puVar10[0x16] = local_740;
            puVar10[0x15] = (uint)((local_734 - auVar28._0_4_) * fVar25 + auVar28._0_4_);
            puVar10[0x17] = local_730;
            local_744 = iVar15;
          } while (iVar8 < iVar20);
          if (iVar15 == iVar20) {
            lVar17 = 0;
            if (3 < lVar19) {
              lVar16 = 0x18;
              lVar18 = (lVar19 - 4U >> 2) + 1;
              lVar17 = lVar18 * 4;
              do {
                lVar2 = *(longlong *)(*(longlong *)(param_2 + 0x38) + -0x10 + lVar16);
                puVar10 = (uint *)0x0;
                if (lVar2 != 0) {
                  puVar10 = (uint *)(lVar2 + 0x10);
                }
                if (puVar10 != (uint *)0x0) {
                  *puVar10 = *puVar10 | 1;
                  puVar14 = (uint *)0x0;
                  if (*(longlong *)(puVar10 + 2) != 0) {
                    puVar14 = (uint *)(*(longlong *)(puVar10 + 2) + 0x10);
                  }
                  if (puVar14 != (uint *)0x0) {
                    puVar14[2] = (uint)fVar21;
                    puVar14[3] = (uint)fVar24;
                    *puVar14 = *puVar14 | 7;
                    puVar14[4] = 0;
                  }
                }
                lVar2 = *(longlong *)(lVar16 + -8 + *(longlong *)(param_2 + 0x38));
                puVar10 = (uint *)0x0;
                if (lVar2 != 0) {
                  puVar10 = (uint *)(lVar2 + 0x10);
                }
                if (puVar10 != (uint *)0x0) {
                  *puVar10 = *puVar10 | 1;
                  puVar14 = (uint *)0x0;
                  if (*(longlong *)(puVar10 + 2) != 0) {
                    puVar14 = (uint *)(*(longlong *)(puVar10 + 2) + 0x10);
                  }
                  if (puVar14 != (uint *)0x0) {
                    puVar14[2] = (uint)fVar21;
                    puVar14[3] = (uint)fVar24;
                    *puVar14 = *puVar14 | 7;
                    puVar14[4] = 0;
                  }
                }
                lVar2 = *(longlong *)(lVar16 + *(longlong *)(param_2 + 0x38));
                puVar10 = (uint *)0x0;
                if (lVar2 != 0) {
                  puVar10 = (uint *)(lVar2 + 0x10);
                }
                if (puVar10 != (uint *)0x0) {
                  *puVar10 = *puVar10 | 1;
                  puVar14 = (uint *)0x0;
                  if (*(longlong *)(puVar10 + 2) != 0) {
                    puVar14 = (uint *)(*(longlong *)(puVar10 + 2) + 0x10);
                  }
                  if (puVar14 != (uint *)0x0) {
                    puVar14[2] = (uint)fVar21;
                    puVar14[3] = (uint)fVar24;
                    *puVar14 = *puVar14 | 7;
                    puVar14[4] = 0;
                  }
                }
                lVar2 = *(longlong *)(lVar16 + 8 + *(longlong *)(param_2 + 0x38));
                puVar10 = (uint *)0x0;
                if (lVar2 != 0) {
                  puVar10 = (uint *)(lVar2 + 0x10);
                }
                if (puVar10 != (uint *)0x0) {
                  *puVar10 = *puVar10 | 1;
                  puVar14 = (uint *)0x0;
                  if (*(longlong *)(puVar10 + 2) != 0) {
                    puVar14 = (uint *)(*(longlong *)(puVar10 + 2) + 0x10);
                  }
                  if (puVar14 != (uint *)0x0) {
                    puVar14[2] = (uint)fVar21;
                    puVar14[3] = (uint)fVar24;
                    *puVar14 = *puVar14 | 7;
                    puVar14[4] = 0;
                  }
                }
                lVar16 = lVar16 + 0x20;
                lVar18 = lVar18 + -1;
              } while (lVar18 != 0);
            }
            for (; lVar17 < lVar19; lVar17 = lVar17 + 1) {
              lVar16 = *(longlong *)(*(longlong *)(param_2 + 0x38) + 8 + lVar17 * 8);
              puVar10 = (uint *)0x0;
              if (lVar16 != 0) {
                puVar10 = (uint *)(lVar16 + 0x10);
              }
              if (puVar10 != (uint *)0x0) {
                *puVar10 = *puVar10 | 1;
                puVar14 = (uint *)0x0;
                if (*(longlong *)(puVar10 + 2) != 0) {
                  puVar14 = (uint *)(*(longlong *)(puVar10 + 2) + 0x10);
                }
                if (puVar14 != (uint *)0x0) {
                  *puVar14 = *puVar14 | 7;
                  puVar14[2] = (uint)fVar21;
                  puVar14[3] = (uint)fVar24;
                  puVar14[4] = 0;
                }
              }
            }
          }
          else {
            *(int *)(param_2 + 0x30) = iVar1;
          }
          UVar12 = GetTickCount64();
          if (UVar12 < DAT_180b8e5b0) {
          }
          DAT_180b8e5b0 = UVar12 + 2000;
          FUN_18063ab10(local_6d8,0,0x600);
          local_768 = local_740;
          local_770 = local_73c;
          local_778 = (uint)(iVar15 == iVar20);
          local_788 = *(undefined ***)(param_2 + 8);
          local_780 = (char *)CONCAT44(local_780._4_4_,iVar15);
          FUN_18015ad60(local_6d8,0x600,0xffffffffffffffff,
                        "command=%lld entries=%d committed=%d render_tick=%d player_tick=%d seed_preserved=true"
                       );
          local_780 = local_6d8;
          local_788 = &PTR_180700558;
          if (local_6d8[0] != '\0') {
            local_788 = (undefined **)&DAT_1806bcfc0;
          }
          uVar13 = 2;
          if (iVar15 == iVar20) {
            uVar13 = 0;
          }
          FUN_1800f6900(uVar13,local_780,"AntiAim","HIDE_SHOT_V2_HISTORY");
        }
      }
    }
  }
  DAT_180b8e5b0 = 0;
  DAT_180b8e5a8 = 0;
  _DAT_180b8e598 = ZEXT816(0);
  _DAT_180b8e590 = 0;
  DAT_180b8e588._4_4_ = 0;
  DAT_180b8e588._0_4_ = 0.0;
}



