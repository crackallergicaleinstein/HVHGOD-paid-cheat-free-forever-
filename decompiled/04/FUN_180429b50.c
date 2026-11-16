// FUN_180429b50 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180429b50 */

void FUN_180429b50(longlong param_1,longlong param_2)

{
  byte *pbVar1;
  byte bVar2;
  undefined8 *puVar3;
  float fVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  bool bVar7;
  undefined8 uVar8;
  float *pfVar9;
  undefined8 uVar10;
  longlong lVar11;
  undefined8 uVar12;
  longlong lVar13;
  int iVar14;
  longlong lVar15;
  int iVar16;
  int iVar17;
  uint uVar18;
  ulonglong uVar19;
  int iVar20;
  ulonglong uVar21;
  int iVar22;
  ulonglong uVar23;
  float fVar24;
  undefined1 in_ZMM2 [64];
  float fVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [64];
  float fVar28;
  float fVar29;
  undefined1 auVar30 [64];
  float fVar31;
  undefined1 auVar32 [64];
  undefined1 auVar33 [64];
  float fVar34;
  undefined1 auVar35 [64];
  undefined1 auVar36 [16];
  undefined1 auVar37 [64];
  undefined1 auVar38 [16];
  undefined1 auVar39 [64];
  undefined1 auVar40 [16];
  undefined1 auVar41 [64];
  undefined1 auVar42 [64];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  longlong *local_res20;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  
  local_res20 = *(longlong **)(param_2 + 0x140);
  iVar16 = (int)*(char *)(param_2 + 0x8d);
  iVar22 = (int)*(char *)(param_2 + 0x8e);
  auVar39 = ZEXT464(*(uint *)(param_2 + 0x90));
  auVar41 = ZEXT464((uint)(in_ZMM2._0_4_ * *(float *)(param_2 + 100)));
  auVar37 = ZEXT1664(in_ZMM2._0_16_);
  if (local_res20 != (longlong *)0x0) {
    auVar42 = ZEXT864(0);
    do {
      uVar23 = 0;
      *(undefined4 *)(param_1 + 0x28) = 0;
      auVar37 = ZEXT1664(auVar37._0_16_);
      auVar39 = ZEXT1664(auVar39._0_16_);
      auVar41 = ZEXT1664(auVar41._0_16_);
      auVar42 = ZEXT1664(auVar42._0_16_);
      FUN_1804282c0(param_1);
      if (0 < (int)local_res20[1] + -1) {
        uVar19 = uVar23;
        uVar21 = uVar23;
        do {
          lVar11 = *local_res20;
          fVar24 = auVar37._0_4_;
          FUN_1804284d0(param_1,fVar24 * *(float *)(uVar21 + lVar11),
                        fVar24 * *(float *)(uVar21 + 4 + lVar11),
                        fVar24 * *(float *)(uVar21 + 8 + lVar11),
                        fVar24 * *(float *)(uVar21 + 0xc + lVar11),
                        fVar24 * *(float *)(uVar21 + 0x10 + lVar11),
                        fVar24 * *(float *)(uVar21 + 0x14 + lVar11),
                        fVar24 * *(float *)(uVar21 + 0x18 + lVar11),
                        fVar24 * *(float *)(uVar21 + 0x1c + lVar11),0,1);
          uVar21 = uVar21 + 0x18;
          uVar18 = (int)uVar19 + 3;
          uVar19 = (ulonglong)uVar18;
        } while ((int)uVar18 < (int)local_res20[1] + -1);
      }
      auVar44 = auVar42._0_16_;
      auVar40 = auVar41._0_16_;
      auVar38 = auVar39._0_16_;
      auVar36 = auVar37._0_16_;
      iVar17 = *(int *)(param_1 + 0x28);
      if (1 < iVar17) {
        pfVar9 = *(float **)(param_1 + 0x20);
        iVar20 = (int)*(char *)((longlong)local_res20 + 0xc);
        if ((pfVar9[1] - pfVar9[(longlong)iVar17 * 8 + -7]) *
            (pfVar9[1] - pfVar9[(longlong)iVar17 * 8 + -7]) +
            (*pfVar9 - pfVar9[(longlong)iVar17 * 8 + -8]) *
            (*pfVar9 - pfVar9[(longlong)iVar17 * 8 + -8]) <
            *(float *)(param_1 + 0xc) * *(float *)(param_1 + 0xc)) {
          *(int *)(param_1 + 0x28) = iVar17 + -1;
          iVar20 = 1;
          iVar17 = iVar17 + -1;
        }
        if (*(char *)(param_2 + 0x8c) < '\x01') {
          FUN_1804298f0(param_1,auVar39._0_8_,iVar16);
          FUN_180428ed0(param_1,*(undefined8 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x28),
                        iVar20,iVar16,iVar22,auVar41._0_4_);
        }
        else {
          bVar7 = true;
          auVar43 = auVar44;
          if (iVar20 != 0) {
            uVar10 = *(undefined8 *)pfVar9;
            uVar12 = *(undefined8 *)(pfVar9 + 2);
            uVar5 = *(undefined8 *)(pfVar9 + 4);
            uVar6 = *(undefined8 *)(pfVar9 + 6);
            iVar20 = *(int *)(param_1 + 0x2c);
            if (iVar20 < iVar17 + 1) {
              if (iVar20 < 1) {
                iVar20 = 0x40;
              }
              else {
                iVar20 = iVar20 * 2;
              }
              *(int *)(param_1 + 0x2c) = iVar20;
              auVar43._8_8_ = 0;
              auVar43._0_8_ = (longlong)iVar20;
              uVar8 = SUB168(ZEXT816(0x20) * auVar43,0);
              if (SUB168(ZEXT816(0x20) * auVar43,8) != 0) {
                uVar8 = 0xffffffffffffffff;
              }
              auVar37 = ZEXT1664(auVar44);
              auVar39 = ZEXT1664(auVar36);
              auVar41 = ZEXT1664(auVar38);
              auVar42 = ZEXT1664(auVar40);
              auVar33 = ZEXT1664(auVar44);
              pfVar9 = (float *)_realloc_base(pfVar9,uVar8);
              auVar43 = auVar33._0_16_;
              auVar40 = auVar42._0_16_;
              auVar38 = auVar41._0_16_;
              auVar36 = auVar39._0_16_;
              auVar44 = auVar37._0_16_;
              *(float **)(param_1 + 0x20) = pfVar9;
              if (pfVar9 == (float *)0x0) goto LAB_180429dbd;
              iVar17 = *(int *)(param_1 + 0x28);
            }
            pfVar9 = pfVar9 + (longlong)iVar17 * 8;
            *(undefined8 *)pfVar9 = uVar10;
            *(undefined8 *)(pfVar9 + 2) = uVar12;
            *(undefined8 *)(pfVar9 + 4) = uVar5;
            *(undefined8 *)(pfVar9 + 6) = uVar6;
            *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
          }
LAB_180429dbd:
          iVar17 = *(int *)(param_1 + 0x28);
          lVar11 = *(longlong *)(param_1 + 0x30);
          if (*(int *)(param_1 + 0x3c) < iVar17) {
            *(int *)(param_1 + 0x3c) = iVar17;
            auVar26._8_8_ = 0;
            auVar26._0_8_ = (longlong)iVar17;
            uVar10 = SUB168(ZEXT816(0x20) * auVar26,0);
            if (SUB168(ZEXT816(0x20) * auVar26,8) != 0) {
              uVar10 = 0xffffffffffffffff;
            }
            auVar37 = ZEXT1664(auVar44);
            auVar39 = ZEXT1664(auVar36);
            auVar41 = ZEXT1664(auVar38);
            auVar42 = ZEXT1664(auVar40);
            auVar33 = ZEXT1664(auVar43);
            lVar11 = _realloc_base(lVar11,uVar10);
            auVar43 = auVar33._0_16_;
            auVar40 = auVar42._0_16_;
            auVar38 = auVar41._0_16_;
            auVar36 = auVar39._0_16_;
            auVar44 = auVar37._0_16_;
            *(longlong *)(param_1 + 0x30) = lVar11;
            if (lVar11 != 0) goto LAB_180429e00;
          }
          else {
LAB_180429e00:
            auVar37 = ZEXT1664(auVar44);
            auVar39 = ZEXT1664(auVar36);
            auVar41 = ZEXT1664(auVar38);
            auVar42 = ZEXT1664(auVar40);
            auVar33 = ZEXT1664(auVar43);
            FUN_18063aed0(lVar11,*(undefined8 *)(param_1 + 0x20));
            auVar40 = auVar42._0_16_;
            auVar38 = auVar41._0_16_;
            auVar36 = auVar39._0_16_;
            auVar44 = auVar37._0_16_;
            auVar43 = auVar33._0_16_;
            *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_1 + 0x28);
          }
          puVar3 = *(undefined8 **)(param_1 + 0x30);
          *(undefined4 *)(param_1 + 0x28) = 0;
          uVar10 = *puVar3;
          uStack_110 = puVar3[1];
          uStack_108 = puVar3[2];
          uStack_100 = puVar3[3];
          iVar17 = 0;
          if (*(int *)(param_1 + 0x2c) < 1) {
            uVar12 = SUB168(ZEXT816(0x20) * ZEXT816(0x40),0);
            *(undefined4 *)(param_1 + 0x2c) = 0x40;
            if (SUB168(ZEXT816(0x20) * ZEXT816(0x40),8) != 0) {
              uVar12 = 0xffffffffffffffff;
            }
            auVar37 = ZEXT1664(auVar44);
            auVar39 = ZEXT1664(auVar36);
            auVar41 = ZEXT1664(auVar38);
            auVar42 = ZEXT1664(auVar40);
            auVar33 = ZEXT1664(auVar43);
            lVar11 = _realloc_base(*(undefined8 *)(param_1 + 0x20),uVar12);
            auVar40 = auVar42._0_16_;
            auVar38 = auVar41._0_16_;
            auVar36 = auVar39._0_16_;
            auVar44 = auVar37._0_16_;
            auVar43 = auVar33._0_16_;
            *(longlong *)(param_1 + 0x20) = lVar11;
            if (lVar11 != 0) {
              iVar17 = *(int *)(param_1 + 0x28);
              goto LAB_180429e7a;
            }
          }
          else {
LAB_180429e7a:
            puVar3 = (undefined8 *)((longlong)iVar17 * 0x20 + *(longlong *)(param_1 + 0x20));
            *puVar3 = uVar10;
            puVar3[1] = uStack_110;
            puVar3[2] = uStack_108;
            puVar3[3] = uStack_100;
            *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
          }
          lVar13 = (longlong)*(char *)(param_2 + 0x8c);
          lVar11 = 0;
          auVar37 = ZEXT1664(auVar43);
          if (3 < lVar13) {
            pfVar9 = (float *)(param_2 + 0x70);
            lVar15 = (lVar13 - 4U >> 2) + 1;
            lVar11 = lVar15 * 4;
            do {
              auVar37 = ZEXT464((uint)(auVar37._0_4_ + pfVar9[-1] + *pfVar9 + pfVar9[1] + pfVar9[2])
                               );
              pfVar9 = pfVar9 + 4;
              lVar15 = lVar15 + -1;
            } while (lVar15 != 0);
          }
          auVar26 = auVar37._0_16_;
          if (lVar11 < lVar13) {
            lVar13 = lVar13 - lVar11;
            pfVar9 = (float *)(param_2 + 0x6c + lVar11 * 4);
            do {
              fVar24 = auVar37._0_4_ + *pfVar9;
              auVar37 = ZEXT464((uint)fVar24);
              auVar26 = ZEXT416((uint)fVar24);
              pfVar9 = pfVar9 + 1;
              lVar13 = lVar13 + -1;
            } while (lVar13 != 0);
          }
          bVar2 = *(byte *)(param_2 + 0x8c);
          if ((bVar2 & 1) != 0) {
            auVar26 = ZEXT416((uint)(auVar26._0_4_ + auVar26._0_4_));
          }
          auVar33 = ZEXT1664(auVar26);
          auVar35 = ZEXT1664(auVar44);
          auVar37 = ZEXT1664(auVar36);
          auVar39 = ZEXT1664(auVar38);
          auVar41 = ZEXT1664(auVar40);
          auVar42 = ZEXT1664(auVar43);
          fVar24 = (float)FUN_180637760();
          if (fVar24 < auVar42._0_4_) {
            fVar24 = fVar24 + auVar33._0_4_;
          }
          fVar31 = *(float *)(param_2 + 0x6c);
          if (fVar31 < fVar24) {
            do {
              fVar24 = fVar24 - fVar31;
              uVar23 = (ulonglong)(((int)uVar23 + 1) % (int)(char)bVar2);
              fVar31 = *(float *)(param_2 + 0x6c + uVar23 * 4);
            } while (fVar31 < fVar24);
          }
          iVar17 = 1;
          auVar33 = ZEXT464((uint)((*(float *)(param_2 + 0x6c + (longlong)(int)uVar23 * 4) - fVar24)
                                  * auVar37._0_4_));
          if (1 < *(int *)(param_1 + 0x38)) {
            local_118._4_4_ = (uint)((ulonglong)uVar10 >> 0x20);
            auVar30 = ZEXT464(local_118._4_4_);
            local_118._0_4_ = (uint)uVar10;
            auVar32 = ZEXT464((uint)local_118);
            lVar11 = 0x20;
            do {
              fVar34 = auVar35._0_4_;
              lVar13 = *(longlong *)(param_1 + 0x30);
              fVar31 = auVar32._0_4_;
              fVar25 = *(float *)(lVar11 + lVar13) - fVar31;
              fVar29 = auVar30._0_4_;
              fVar28 = *(float *)(lVar11 + 4 + lVar13) - fVar29;
              fVar24 = fVar28 * fVar28 + fVar25 * fVar25;
              if (fVar24 < 0.0) {
                auVar27 = ZEXT464((uint)fVar25);
                auVar30 = ZEXT1664(auVar30._0_16_);
                auVar32 = ZEXT1664(auVar32._0_16_);
                auVar33 = ZEXT1664(auVar33._0_16_);
                auVar35 = ZEXT1664(auVar35._0_16_);
                auVar37 = ZEXT1664(auVar37._0_16_);
                auVar39 = ZEXT1664(auVar39._0_16_);
                auVar41 = ZEXT1664(auVar41._0_16_);
                auVar42 = ZEXT1664(auVar42._0_16_);
                fVar24 = (float)FUN_18061e150();
                fVar29 = auVar30._0_4_;
                fVar31 = auVar32._0_4_;
                fVar25 = auVar27._0_4_;
                fVar34 = auVar35._0_4_;
              }
              else {
                fVar24 = SQRT(fVar24);
              }
              fVar4 = fVar24 + fVar34;
              if (fVar4 <= auVar33._0_4_) {
                puVar3 = (undefined8 *)(lVar11 + lVar13);
                uVar10 = *puVar3;
                uStack_110 = puVar3[1];
                uStack_108 = puVar3[2];
                uStack_100 = puVar3[3];
                iVar20 = *(int *)(param_1 + 0x2c);
                auVar35 = ZEXT1664(ZEXT416((uint)fVar4));
                if (iVar20 < *(int *)(param_1 + 0x28) + 1) {
                  if (iVar20 < 1) {
                    iVar20 = 0x40;
                  }
                  else {
                    iVar20 = iVar20 * 2;
                  }
                  *(int *)(param_1 + 0x2c) = iVar20;
                  auVar44._8_8_ = 0;
                  auVar44._0_8_ = (longlong)iVar20;
                  uVar12 = SUB168(ZEXT816(0x20) * auVar44,0);
                  if (SUB168(ZEXT816(0x20) * auVar44,8) != 0) {
                    uVar12 = 0xffffffffffffffff;
                  }
                  auVar33 = ZEXT1664(auVar33._0_16_);
                  auVar35 = ZEXT1664(ZEXT416((uint)fVar4));
                  auVar37 = ZEXT1664(auVar37._0_16_);
                  auVar39 = ZEXT1664(auVar39._0_16_);
                  auVar41 = ZEXT1664(auVar41._0_16_);
                  auVar42 = ZEXT1664(auVar42._0_16_);
                  lVar13 = _realloc_base(*(undefined8 *)(param_1 + 0x20),uVar12);
                  *(longlong *)(param_1 + 0x20) = lVar13;
                  if (lVar13 != 0) goto LAB_18042a20b;
                }
                else {
LAB_18042a20b:
                  puVar3 = (undefined8 *)
                           ((longlong)*(int *)(param_1 + 0x28) * 0x20 +
                           *(longlong *)(param_1 + 0x20));
                  *puVar3 = uVar10;
                  puVar3[1] = uStack_110;
                  puVar3[2] = uStack_108;
                  puVar3[3] = uStack_100;
                  *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
                }
                local_118._4_4_ = (uint)((ulonglong)uVar10 >> 0x20);
                auVar30 = ZEXT464(local_118._4_4_);
                local_118._0_4_ = (uint)uVar10;
                auVar32 = ZEXT464((uint)local_118);
                iVar17 = iVar17 + 1;
                lVar11 = lVar11 + 0x20;
              }
              else {
                iVar20 = *(int *)(param_1 + 0x28);
                fVar24 = (auVar33._0_4_ - fVar34) / fVar24;
                fVar31 = fVar24 * fVar25 + fVar31;
                auVar32 = ZEXT464((uint)fVar31);
                fVar29 = fVar24 * fVar28 + fVar29;
                auVar30 = ZEXT464((uint)fVar29);
                if (iVar20 < 1) {
LAB_18042a053:
                  iVar14 = *(int *)(param_1 + 0x2c);
                  if (iVar14 < iVar20 + 1) {
                    if (iVar14 < 1) {
                      iVar14 = 0x40;
                    }
                    else {
                      iVar14 = iVar14 * 2;
                    }
                    *(int *)(param_1 + 0x2c) = iVar14;
                    auVar36._8_8_ = 0;
                    auVar36._0_8_ = (longlong)iVar14;
                    uVar10 = SUB168(ZEXT816(0x20) * auVar36,0);
                    if (SUB168(ZEXT816(0x20) * auVar36,8) != 0) {
                      uVar10 = 0xffffffffffffffff;
                    }
                    auVar30 = ZEXT464((uint)fVar29);
                    auVar32 = ZEXT464((uint)fVar31);
                    auVar37 = ZEXT1664(auVar37._0_16_);
                    auVar39 = ZEXT1664(auVar39._0_16_);
                    auVar41 = ZEXT1664(auVar41._0_16_);
                    auVar42 = ZEXT1664(auVar42._0_16_);
                    lVar13 = _realloc_base(*(undefined8 *)(param_1 + 0x20),uVar10);
                    *(longlong *)(param_1 + 0x20) = lVar13;
                    if (lVar13 == 0) goto LAB_18042a0bc;
                    iVar20 = *(int *)(param_1 + 0x28);
                  }
                  lVar13 = *(longlong *)(param_1 + 0x20);
                  lVar15 = (longlong)iVar20 * 0x20;
                  *(int *)(lVar15 + lVar13) = auVar32._0_4_;
                  *(int *)(lVar15 + 4 + lVar13) = auVar30._0_4_;
                  *(undefined1 *)(lVar15 + 0x1c + lVar13) = 1;
                  *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
                }
                else {
                  lVar13 = *(longlong *)(param_1 + 0x20);
                  lVar15 = (longlong)iVar20 * 0x20;
                  fVar24 = fVar29 - *(float *)(lVar15 + -0x1c + lVar13);
                  fVar25 = fVar31 - *(float *)(lVar15 + -0x20 + lVar13);
                  if (*(float *)(param_1 + 0xc) * *(float *)(param_1 + 0xc) <=
                      fVar24 * fVar24 + fVar25 * fVar25) goto LAB_18042a053;
                  pbVar1 = (byte *)(lVar15 + -4 + lVar13);
                  *pbVar1 = *pbVar1 | 1;
                }
LAB_18042a0bc:
                if ((1 < *(int *)(param_1 + 0x28)) && (bVar7)) {
                  auVar30 = ZEXT1664(auVar30._0_16_);
                  auVar32 = ZEXT1664(auVar32._0_16_);
                  auVar37 = ZEXT1664(auVar37._0_16_);
                  auVar39 = ZEXT1664(auVar39._0_16_);
                  auVar41 = ZEXT1664(auVar41._0_16_);
                  auVar42 = ZEXT1664(auVar42._0_16_);
                  FUN_1804298f0(param_1);
                  FUN_180428ed0(param_1,*(undefined8 *)(param_1 + 0x20),
                                *(undefined4 *)(param_1 + 0x28),0,iVar16,iVar22,auVar41._0_4_);
                }
                bVar7 = !bVar7;
                uStack_100._0_5_ = CONCAT14(1,(undefined4)uStack_100);
                uVar23 = (ulonglong)(((int)uVar23 + 1) % (int)*(char *)(param_2 + 0x8c));
                local_118 = CONCAT44(auVar30._0_4_,auVar32._0_4_);
                auVar44 = auVar42._0_16_;
                auVar35 = ZEXT1664(auVar44);
                fVar24 = auVar37._0_4_ * *(float *)(param_2 + 0x6c + uVar23 * 4);
                auVar33 = ZEXT464((uint)fVar24);
                *(undefined4 *)(param_1 + 0x28) = 0;
                if (*(int *)(param_1 + 0x2c) < 1) {
                  uVar10 = SUB168(ZEXT816(0x20) * ZEXT816(0x40),0);
                  *(undefined4 *)(param_1 + 0x2c) = 0x40;
                  if (SUB168(ZEXT816(0x20) * ZEXT816(0x40),8) != 0) {
                    uVar10 = 0xffffffffffffffff;
                  }
                  auVar30 = ZEXT1664(auVar30._0_16_);
                  auVar32 = ZEXT1664(auVar32._0_16_);
                  auVar33 = ZEXT464((uint)fVar24);
                  auVar35 = ZEXT1664(auVar44);
                  auVar37 = ZEXT1664(auVar37._0_16_);
                  auVar39 = ZEXT1664(auVar39._0_16_);
                  auVar41 = ZEXT1664(auVar41._0_16_);
                  auVar42 = ZEXT1664(auVar44);
                  lVar13 = _realloc_base(*(undefined8 *)(param_1 + 0x20),uVar10);
                  *(longlong *)(param_1 + 0x20) = lVar13;
                  if (lVar13 == 0) goto LAB_18042a231;
                }
                puVar3 = (undefined8 *)
                         ((longlong)*(int *)(param_1 + 0x28) * 0x20 + *(longlong *)(param_1 + 0x20))
                ;
                *puVar3 = local_118;
                puVar3[1] = uStack_110;
                puVar3[2] = uStack_108;
                puVar3[3] = uStack_100;
                *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
              }
LAB_18042a231:
            } while (iVar17 < *(int *)(param_1 + 0x38));
          }
          if ((1 < *(int *)(param_1 + 0x28)) && (bVar7)) {
            auVar37 = ZEXT1664(auVar37._0_16_);
            auVar39 = ZEXT1664(auVar39._0_16_);
            auVar41 = ZEXT1664(auVar41._0_16_);
            auVar42 = ZEXT1664(auVar42._0_16_);
            FUN_1804298f0(param_1);
            FUN_180428ed0(param_1,*(undefined8 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x28),0,
                          iVar16,iVar22,auVar41._0_4_);
          }
        }
      }
      local_res20 = (longlong *)local_res20[4];
    } while (local_res20 != (longlong *)0x0);
  }
  return;
}



