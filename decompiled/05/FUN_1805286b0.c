// FUN_1805286b0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805286b0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1805286b0(void)

{
  ushort uVar1;
  ushort uVar2;
  longlong *plVar3;
  byte *pbVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [32];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  longlong lVar17;
  undefined1 auVar18 [15];
  undefined1 auVar19 [15];
  ulonglong uVar20;
  char cVar21;
  short sVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  longlong lVar26;
  undefined **ppuVar27;
  undefined1 (*pauVar28) [32];
  longlong *plVar29;
  longlong lVar30;
  ulonglong *_Buf1;
  ulonglong uVar31;
  longlong lVar32;
  longlong lVar33;
  undefined8 *puVar34;
  undefined1 *_Buf2;
  ulonglong *puVar35;
  undefined4 *puVar36;
  longlong *plVar37;
  ulonglong *puVar38;
  size_t sVar39;
  int iVar40;
  int iVar41;
  undefined8 *puVar42;
  ulonglong uVar43;
  uint uVar44;
  int *piVar45;
  undefined1 auStack_878 [32];
  int local_858;
  int local_854;
  uint local_850;
  size_t local_848;
  int local_840;
  longlong local_838;
  int *local_830;
  undefined8 *local_828 [2];
  int local_818;
  undefined4 local_814;
  undefined1 local_810 [16];
  undefined8 uStack_800;
  undefined8 uStack_7f8;
  undefined1 local_7f0 [16];
  undefined8 uStack_7e0;
  undefined8 uStack_7d8;
  undefined1 local_7d0;
  undefined7 uStack_7cf;
  undefined8 uStack_7c8;
  undefined8 uStack_7c0;
  undefined8 uStack_7b8;
  longlong local_7a8;
  longlong local_7a0;
  int local_798;
  undefined4 local_794;
  undefined8 local_790;
  undefined8 uStack_788;
  undefined8 uStack_780;
  undefined8 uStack_778;
  undefined8 local_770;
  undefined8 uStack_768;
  undefined8 uStack_760;
  undefined8 uStack_758;
  undefined1 local_750 [32];
  undefined8 local_728 [168];
  undefined8 local_1e8;
  undefined1 local_1e0 [32];
  undefined1 local_1c0 [16];
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined1 local_1a0 [16];
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 local_178;
  longlong lStack_170;
  undefined8 uStack_168;
  longlong lStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  ulonglong uStack_148;
  undefined8 uStack_140;
  undefined4 local_138 [6];
  undefined1 local_120 [216];
  char local_48;
  ulonglong local_38;
  
  local_38 = DAT_1808d5f00 ^ (ulonglong)auStack_878;
  FUN_180526590();
  if (DAT_180b909b0 != 0) {
    uVar43 = DAT_180cc8148 << 0x20 ^ DAT_180cc8070;
    if (DAT_180b0a5e8 == uVar43) {
      if (DAT_1808e6648 == '\0') {
      }
    }
    else {
      FUN_1805260a0(0);
      if (DAT_180c63060 != 0) {
        if (DAT_180c63060 < DAT_180c63088 >> 3) {
          FUN_18056d680(&DAT_180c63050,*DAT_180c63058,DAT_180c63058);
        }
        else {
          FUN_18056f840();
          *DAT_180c63058 = DAT_180c63058;
          DAT_180c63058[1] = DAT_180c63058;
          DAT_180c63060 = 0;
          local_828[0] = DAT_180c63058;
          FUN_1801aff60(DAT_180c63068,DAT_180c63070,local_828);
        }
      }
      FUN_18063ab10(local_728,0,0x540);
      FUN_180550840(local_728);
      uVar31 = 0;
      do {
        puVar34 = (undefined8 *)((longlong)local_728 + uVar31);
        lVar26 = 0x15;
        do {
          puVar42 = (undefined8 *)
                    (((longlong)&DAT_1808e4ff0 - (longlong)local_728) + (longlong)puVar34);
          if (puVar42 != puVar34) {
            FUN_18015c010(puVar42);
            uVar5 = puVar34[1];
            uVar6 = puVar34[2];
            uVar7 = puVar34[3];
            *puVar42 = *puVar34;
            puVar42[1] = uVar5;
            puVar42[2] = uVar6;
            puVar42[3] = uVar7;
            puVar34[2] = 0;
            puVar34[3] = 0xf;
            *(undefined1 *)puVar34 = 0;
          }
          puVar34 = puVar34 + 4;
          lVar26 = lVar26 + -1;
        } while (lVar26 != 0);
        uVar31 = uVar31 + 0x2a0;
      } while (uVar31 < 0x540);
      _eh_vector_destructor_iterator_(local_728,0x2a0,2,FUN_180525a20);
      puVar36 = (undefined4 *)&DAT_180bbb190;
      do {
        FUN_180204c30(puVar36);
        puVar36 = puVar36 + 0x10;
      } while (puVar36 != &DAT_180bbb210);
      DAT_180b0a5e8 = uVar43;
    }
    puVar34 = *(undefined8 **)(*DAT_180c62f50 + (longlong)(int)DAT_180c62f50[3] * 8);
    uVar44 = 0;
    local_828[0] = puVar34;
    do {
      lVar26 = FUN_180218c10(&DAT_180cc8068,&local_178,3 - (uint)(uVar44 != 0));
      plVar3 = *(longlong **)(lVar26 + 8);
      plVar37 = (longlong *)*plVar3;
      if (plVar37 != plVar3) {
        lVar26 = DAT_180cc9c90;
        do {
          uVar1 = *(ushort *)(plVar37 + 2);
          plVar29 = (longlong *)
                    (((((ulonglong)uVar1 & 0xff ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                      (ulonglong)(uVar1 >> 8)) * 0x100000001b3 & DAT_180cc9cb8) * 0x10 +
                    DAT_180cc9ca0);
          lVar33 = plVar29[1];
          if (lVar33 == lVar26) {
LAB_180528951:
            lVar33 = 0;
          }
          else {
            uVar2 = *(ushort *)(lVar33 + 0x10);
            while (uVar1 != uVar2) {
              if (lVar33 == *plVar29) goto LAB_180528951;
              lVar33 = *(longlong *)(lVar33 + 8);
              uVar2 = *(ushort *)(lVar33 + 0x10);
            }
          }
          lVar30 = lVar26;
          if (lVar33 != 0) {
            lVar30 = lVar33;
          }
          if (lVar30 != lVar26) {
            lVar33 = *(longlong *)(lVar30 + 0x18) * 0xb8 + DAT_180cc9bf8;
            if ((lVar33 != 0) && (*(char *)(lVar33 + 0xb0) == '\0')) {
              local_818 = (int)(short)plVar37[2];
              local_814 = (undefined4)plVar37[3];
              local_810._1_15_ = SUB1615((undefined1  [16])0x0,1);
              auVar18 = (undefined1  [15])local_810._1_15_;
              local_7f0._1_15_ = SUB1615((undefined1  [16])0x0,1);
              auVar19 = (undefined1  [15])local_7f0._1_15_;
              uStack_7cf = 0;
              uStack_7c8 = 0;
              local_810._8_8_ = SUB168((undefined1  [16])0x0,8);
              local_790 = 0;
              uStack_788 = local_810._8_8_;
              uStack_780 = 0;
              uStack_778 = 0xf;
              uStack_800 = 0;
              uStack_7f8 = 0xf;
              auVar8[0xf] = 0;
              auVar8._0_15_ = auVar18;
              local_810 = auVar8 << 8;
              local_7f0._8_8_ = SUB168((undefined1  [16])0x0,8);
              local_770 = 0;
              uStack_768 = local_7f0._8_8_;
              uStack_760 = 0;
              uStack_758 = 0xf;
              uStack_7e0 = 0;
              uStack_7d8 = 0xf;
              auVar9[0xf] = 0;
              auVar9._0_15_ = auVar19;
              local_7f0 = auVar9 << 8;
              local_750._24_8_ = 0xf;
              local_750._0_24_ = ZEXT824(0);
              uStack_7c0 = 0;
              uStack_7b8 = 0xf;
              local_7d0 = 0;
              local_798 = local_818;
              local_794 = local_814;
              iVar23 = FUN_180525c00(&local_798);
              FUN_18015c010(&local_7d0);
              FUN_18015c010(local_7f0);
              FUN_18015c010(local_810);
              if (-1 < iVar23) {
                iVar40 = 0;
                while( true ) {
                  if (DAT_180b909b0 == 0) {
                    iVar24 = 0x47;
                  }
                  else {
                    iVar24 = (int)(*(longlong *)(DAT_180b909b0 + 0x30) -
                                   *(longlong *)(DAT_180b909b0 + 0x28) >> 4);
                  }
                  if (iVar24 <= iVar40) goto LAB_180528b1c;
                  uVar43 = (ulonglong)iVar40;
                  if (DAT_180b909b0 == 0) {
                    ppuVar27 = &PTR_s_Glock_18_180797be0 + uVar43 * 2;
                  }
                  else {
                    if ((ulonglong)
                        (*(longlong *)(DAT_180b909b0 + 0x30) - *(longlong *)(DAT_180b909b0 + 0x28)
                        >> 4) <= uVar43) {
                    /* WARNING: Subroutine does not return */
                      FUN_18047c010();
                    }
                    ppuVar27 = (undefined **)(uVar43 * 0x10 + *(longlong *)(DAT_180b909b0 + 0x28));
                  }
                  if ((*(short *)((longlong)ppuVar27 + 10) <= iVar23) &&
                     (iVar23 < (int)*(short *)((longlong)ppuVar27 + 0xc) +
                               (int)*(short *)((longlong)ppuVar27 + 10))) break;
                  iVar40 = iVar40 + 1;
                }
                if ((uVar44 < 2) && (-1 < iVar40)) {
                  if (DAT_180b909b0 == 0) {
                    iVar24 = 0x47;
                  }
                  else {
                    iVar24 = (int)(*(longlong *)(DAT_180b909b0 + 0x30) -
                                   *(longlong *)(DAT_180b909b0 + 0x28) >> 4);
                  }
                  if (iVar40 < iVar24) {
                    local_854 = CONCAT22((short)iVar23,(short)iVar40);
                    FUN_180474590(uVar44,&local_854);
                  }
                }
              }
LAB_180528b1c:
              lVar26 = DAT_180cc9c90;
            }
          }
          plVar37 = (longlong *)*plVar37;
        } while (plVar37 != plVar3);
      }
      FUN_1800cf8e0(&local_178);
      uVar44 = uVar44 + 1;
    } while ((int)uVar44 < 2);
    local_850 = 0;
    local_7a0 = 0;
    do {
      local_858 = 0;
      local_838 = 0;
      local_854 = 3 - (uint)(local_850 != 0);
      local_7a8 = local_7a0 * 0x15;
      uVar44 = local_850;
      iVar23 = local_854;
      do {
        lVar26 = local_838;
        iVar40 = local_858;
        lVar33 = local_7a8 + local_838;
        piVar45 = (int *)((longlong)puVar34 + lVar33 * 4 + 0x496e);
        local_1e8 = 0;
        local_848 = 0;
        local_1e0._0_24_ = ZEXT1624((undefined1  [16])0x0);
        local_1e0._24_8_ = 0xf;
        auVar10[0x1f] = 0;
        auVar10._0_31_ = local_1e0._1_31_;
        local_1e0 = auVar10 << 8;
        uStack_1b0 = 0;
        uStack_1a8 = 0xf;
        local_1c0._1_15_ = SUB1615((undefined1  [16])0x0,1);
        auVar11[0xf] = 0;
        auVar11._0_15_ = local_1c0._1_15_;
        local_1c0 = auVar11 << 8;
        uStack_190 = 0;
        uStack_188 = 0xf;
        local_1a0._1_15_ = SUB1615((undefined1  [16])0x0,1);
        auVar12[0xf] = 0;
        auVar12._0_15_ = local_1a0._1_15_;
        local_1a0 = auVar12 << 8;
        local_830 = piVar45;
        if (DAT_1808e6648 != '\0') {
          local_1e8 = *(ulonglong *)(&DAT_1808e5538 + lVar33 * 0x1a);
          puVar34 = &DAT_1808e5540 + lVar33 * 0xd;
          if ((undefined8 *)local_1e0 != puVar34) {
            if (0xf < (ulonglong)(&DAT_1808e5558)[lVar33 * 0xd]) {
              puVar34 = (undefined8 *)*puVar34;
            }
            FUN_180113930(local_1e0,puVar34,(&DAT_1808e5550)[lVar33 * 0xd]);
            local_848 = local_1e0._16_8_;
          }
          puVar34 = &DAT_1808e5560 + lVar33 * 0xd;
          if ((undefined8 *)local_1c0 != puVar34) {
            if (0xf < (ulonglong)(&DAT_1808e5578)[lVar33 * 0xd]) {
              puVar34 = (undefined8 *)*puVar34;
            }
            FUN_180113930(local_1c0,puVar34,(&DAT_1808e5570)[lVar33 * 0xd]);
            local_848 = local_1e0._16_8_;
          }
          puVar34 = &DAT_1808e5580 + lVar33 * 0xd;
          if ((undefined8 *)local_1a0 != puVar34) {
            if (0xf < (ulonglong)(&DAT_1808e5598)[lVar33 * 0xd]) {
              puVar34 = (undefined8 *)*puVar34;
            }
            FUN_180113930(local_1a0,puVar34,(&DAT_1808e5590)[lVar33 * 0xd]);
            local_848 = local_1e0._16_8_;
          }
        }
        sVar39 = local_848;
        if (((int)local_1e8 == 0) && (iVar40 - 0x12U < 2)) {
          local_178 = 0;
          lStack_170 = 0;
          uStack_168 = 0;
          lStack_160 = 0;
          local_158 = 0;
          uStack_150 = 0;
          uStack_148 = 0;
          uStack_140 = 0;
          FUN_180218c10(&DAT_180cc8068,&local_178,iVar23);
          if (iVar40 == 0x12) {
            puVar42 = DAT_180cc9c18;
            puVar34 = DAT_180cc9c10;
          }
          else {
            puVar42 = DAT_180cc9c30;
            puVar34 = DAT_180cc9c28;
          }
          if (puVar34 != puVar42) {
            do {
              pbVar4 = (byte *)*puVar34;
              uVar43 = (((ulonglong)*pbVar4 ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                       (ulonglong)pbVar4[1]) * 0x100000001b3 & uStack_148;
              lVar33 = *(longlong *)(lStack_160 + 8 + uVar43 * 0x10);
              if (lVar33 == lStack_170) {
LAB_180528e01:
                lVar33 = 0;
              }
              else {
                sVar22 = *(short *)(lVar33 + 0x10);
                while (*(short *)pbVar4 != sVar22) {
                  if (lVar33 == *(longlong *)(lStack_160 + uVar43 * 0x10)) goto LAB_180528e01;
                  lVar33 = *(longlong *)(lVar33 + 8);
                  sVar22 = *(short *)(lVar33 + 0x10);
                }
              }
              lVar30 = lStack_170;
              if (lVar33 != 0) {
                lVar30 = lVar33;
              }
              if (lVar30 != lStack_170) {
                local_818 = (int)*(short *)pbVar4;
                local_814 = *(undefined4 *)(lVar30 + 0x18);
                uStack_800 = 0;
                uStack_7f8 = 0xf;
                local_810._1_15_ = SUB1615((undefined1  [16])0x0,1);
                auVar13[0xf] = 0;
                auVar13._0_15_ = local_810._1_15_;
                local_810 = auVar13 << 8;
                uStack_7e0 = 0;
                uStack_7d8 = 0xf;
                local_7f0._1_15_ = SUB1615((undefined1  [16])0x0,1);
                auVar14[0xf] = 0;
                auVar14._0_15_ = local_7f0._1_15_;
                local_7f0 = auVar14 << 8;
                uStack_7cf = 0;
                uStack_7c8 = 0;
                uStack_7c0 = 0;
                uStack_7b8 = 0xf;
                local_7d0 = 0;
                local_1e8 = CONCAT44(local_814,local_818);
                FUN_18015c010(local_1e0);
                local_1e0._16_8_ = uStack_800;
                local_1e0._0_16_ = local_810;
                local_1e0._24_8_ = uStack_7f8;
                uStack_800 = 0;
                uStack_7f8 = 0xf;
                auVar15[0xf] = 0;
                auVar15._0_15_ = local_810._1_15_;
                local_810 = auVar15 << 8;
                FUN_18015c010(local_1c0);
                local_1c0 = local_7f0;
                uStack_1b0 = uStack_7e0;
                uStack_1a8 = uStack_7d8;
                uStack_7e0 = 0;
                uStack_7d8 = 0xf;
                auVar16[0xf] = 0;
                auVar16._0_15_ = local_7f0._1_15_;
                local_7f0 = auVar16 << 8;
                FUN_18015c010(local_1a0);
                local_1a0._1_7_ = uStack_7cf;
                local_1a0[0] = local_7d0;
                local_1a0._8_8_ = uStack_7c8;
                uStack_190 = uStack_7c0;
                uStack_188 = uStack_7b8;
                FUN_18015c010(&local_7d0);
                FUN_18015c010(local_7f0);
                FUN_18015c010(local_810);
                local_848 = local_1e0._16_8_;
                sVar39 = local_1e0._16_8_;
                break;
              }
              puVar34 = puVar34 + 1;
            } while (puVar34 != puVar42);
            iVar40 = local_858;
          }
          FUN_1800cf8e0(&local_178);
        }
        if (iVar40 == 0xf) {
          sVar22 = DAT_180cc8152;
          if (uVar44 == 0) {
            sVar22 = DAT_180cc8150;
          }
          local_1e8 = CONCAT44(local_1e8._4_4_,(int)sVar22);
          pauVar28 = (undefined1 (*) [32])FUN_1800ce230(&DAT_180cc8140,&local_178,iVar23);
          if (&local_1e0 != pauVar28) {
            FUN_18015c010(local_1e0);
            local_1e0 = *pauVar28;
            *(undefined8 *)(*pauVar28 + 0x10) = 0;
            *(undefined8 *)(*pauVar28 + 0x18) = 0xf;
            (*pauVar28)[0] = 0;
            sVar39 = local_1e0._16_8_;
            local_848 = sVar39;
          }
          FUN_18015c010(&local_178);
          uVar31 = local_1e8;
          uVar43 = DAT_180cc9cb8;
          lVar17 = DAT_180cc9ca0;
          lVar30 = DAT_180cc9c90;
          lVar33 = DAT_180cc9bf8;
          local_1e8 = local_1e8 & 0xffffffff;
          uVar20 = local_1e8;
          local_1e8._0_4_ = (int)uVar31;
          local_1e8 = uVar20;
          if ((int)local_1e8 != 0) {
            if (sVar39 != 0) goto LAB_180529038;
            goto LAB_180529206;
          }
          if (sVar39 != 0) {
LAB_180529038:
            puVar38 = *(ulonglong **)(DAT_180b909b0 + 0x58);
            puVar35 = *(ulonglong **)(DAT_180b909b0 + 0x60);
            if (puVar38 != puVar35) {
              uVar5 = local_1e0._0_8_;
              do {
                _Buf2 = local_1e0;
                if (0xf < (ulonglong)local_1e0._24_8_) {
                  _Buf2 = (undefined1 *)uVar5;
                }
                sVar39 = puVar38[3];
                _Buf1 = puVar38 + 1;
                if (0xf < puVar38[4]) {
                  _Buf1 = (ulonglong *)*_Buf1;
                }
                if ((sVar39 == local_848) &&
                   ((sVar39 == 0 || (iVar23 = memcmp(_Buf1,_Buf2,sVar39), iVar23 == 0)))) {
                  uVar1 = (ushort)*puVar38;
                  uVar31 = ((ulonglong)(uVar1 >> 8) ^
                           ((ulonglong)uVar1 & 0xff ^ 0xcbf29ce484222325) * 0x100000001b3) *
                           0x100000001b3 & uVar43;
                  lVar26 = *(longlong *)(lVar17 + 8 + uVar31 * 0x10);
                  if (lVar26 == lVar30) {
LAB_180529121:
                    lVar26 = 0;
                  }
                  else {
                    uVar2 = *(ushort *)(lVar26 + 0x10);
                    while (uVar1 != uVar2) {
                      if (lVar26 == *(longlong *)(lVar17 + uVar31 * 0x10)) goto LAB_180529121;
                      lVar26 = *(longlong *)(lVar26 + 8);
                      uVar2 = *(ushort *)(lVar26 + 0x10);
                    }
                  }
                  lVar32 = lVar30;
                  if (lVar26 != 0) {
                    lVar32 = lVar26;
                  }
                  if (((lVar32 != lVar30) &&
                      (lVar26 = *(longlong *)(lVar32 + 0x18) * 0xb8 + lVar33, lVar26 != 0)) &&
                     (*(char *)(lVar26 + 0xb0) == '\x03')) {
                    local_1e8 = *puVar38;
                    puVar35 = puVar38 + 1;
                    if ((ulonglong *)local_1e0 != puVar38 + 1) {
                      if (0xf < puVar38[4]) {
                        puVar35 = (ulonglong *)puVar38[1];
                      }
                      FUN_180113930(local_1e0,puVar35,puVar38[3]);
                    }
                    puVar35 = puVar38 + 5;
                    if ((ulonglong *)local_1c0 != puVar35) {
                      if (0xf < puVar38[8]) {
                        puVar35 = (ulonglong *)*puVar35;
                      }
                      FUN_180113930(local_1c0,puVar35,puVar38[7]);
                    }
                    puVar35 = puVar38 + 9;
                    if ((ulonglong *)local_1a0 != puVar35) {
                      if (0xf < puVar38[0xc]) {
                        puVar35 = (ulonglong *)*puVar35;
                      }
                      FUN_180113930(local_1a0,puVar35,puVar38[0xb]);
                    }
                    break;
                  }
                }
                puVar38 = puVar38 + 0xd;
              } while (puVar38 != puVar35);
              lVar26 = local_838;
              piVar45 = local_830;
              uVar44 = local_850;
              iVar40 = local_858;
              iVar23 = local_854;
            }
            goto LAB_180529206;
          }
          if (DAT_180b909b0 == 0) {
            *piVar45 = (&DAT_18077f810)[local_7a8 + lVar26];
          }
          else {
            if (1 < uVar44) {
              FUN_18047bff0();
LAB_1805294e9:
                    /* WARNING: Subroutine does not return */
              FUN_18047c010();
            }
            *piVar45 = *(int *)(DAT_180b909b0 + 0x70 + (local_7a8 + lVar26) * 4);
          }
LAB_180529213:
          sVar22 = *(short *)((longlong)piVar45 + 2);
          if (((DAT_180b909b0 != 0) && (-1 < sVar22)) &&
             (((int)sVar22 <
               (int)((*(longlong *)(DAT_180b909b0 + 0x60) - *(longlong *)(DAT_180b909b0 + 0x58)) /
                    0x68) &&
              (puVar38 = (ulonglong *)
                         ((longlong)sVar22 * 0x68 + *(longlong *)(DAT_180b909b0 + 0x58)),
              puVar38 != (ulonglong *)0x0)))) {
            local_1e8 = *puVar38;
            puVar35 = puVar38 + 1;
            if ((ulonglong *)local_1e0 != puVar35) {
              if (0xf < puVar38[4]) {
                puVar35 = (ulonglong *)*puVar35;
              }
              FUN_180113930(local_1e0,puVar35,puVar38[3]);
            }
            puVar35 = puVar38 + 5;
            if ((ulonglong *)local_1c0 != puVar35) {
              if (0xf < puVar38[8]) {
                puVar35 = (ulonglong *)*puVar35;
              }
              FUN_180113930(local_1c0,puVar35,puVar38[7]);
            }
            puVar35 = puVar38 + 9;
            if ((ulonglong *)local_1a0 != puVar35) {
              if (0xf < puVar38[0xc]) {
                puVar35 = (ulonglong *)*puVar35;
              }
              FUN_180113930(local_1a0,puVar35,puVar38[0xb]);
            }
          }
        }
        else {
LAB_180529206:
          if ((int)local_1e8 == 0) goto LAB_180529213;
        }
        if ((iVar40 != 0xf) &&
           (FUN_1801d6430(&DAT_180cc8068,local_138,local_1e8 & 0xffff,iVar23), local_48 != '\0')) {
          local_1e8 = CONCAT44(local_138[0],(int)local_1e8);
          FUN_18015c010(local_120);
        }
        local_830 = &local_798;
        local_798 = (int)local_1e8;
        local_794 = local_1e8._4_4_;
        FUN_18015b360(&local_790,local_1e0);
        FUN_18015b360(&local_770,local_1c0);
        FUN_18015b360(local_750,local_1a0);
        iVar24 = FUN_180525c00(&local_798);
        if ((-1 < iVar24) && (cVar21 = FUN_180525f60(uVar44,iVar24), cVar21 != '\0')) {
          iVar41 = 0;
          while( true ) {
            if (DAT_180b909b0 == 0) {
              iVar25 = 0x47;
            }
            else {
              iVar25 = (int)(*(longlong *)(DAT_180b909b0 + 0x30) -
                             *(longlong *)(DAT_180b909b0 + 0x28) >> 4);
            }
            if (iVar25 <= iVar41) goto LAB_180529444;
            uVar43 = (ulonglong)iVar41;
            if (DAT_180b909b0 == 0) {
              ppuVar27 = &PTR_s_Glock_18_180797be0 + uVar43 * 2;
            }
            else {
              if ((ulonglong)
                  (*(longlong *)(DAT_180b909b0 + 0x30) - *(longlong *)(DAT_180b909b0 + 0x28) >> 4)
                  <= uVar43) goto LAB_1805294e9;
              ppuVar27 = (undefined **)(uVar43 * 0x10 + *(longlong *)(DAT_180b909b0 + 0x28));
            }
            if ((*(short *)((longlong)ppuVar27 + 10) <= iVar24) &&
               (iVar24 < (int)*(short *)((longlong)ppuVar27 + 0xc) +
                         (int)*(short *)((longlong)ppuVar27 + 10))) break;
            iVar41 = iVar41 + 1;
          }
          local_840 = CONCAT22((short)iVar24,(short)iVar41);
          *piVar45 = local_840;
        }
LAB_180529444:
        FUN_18015c010(local_1a0);
        FUN_18015c010(local_1c0);
        FUN_18015c010();
        local_858 = iVar40 + 1;
        local_838 = lVar26 + 1;
        puVar34 = local_828[0];
      } while (local_858 < 0x15);
      local_850 = uVar44 + 1;
      local_7a0 = local_7a0 + 1;
    } while ((int)local_850 < 2);
    DAT_1808e6648 = '\0';
  }
}



