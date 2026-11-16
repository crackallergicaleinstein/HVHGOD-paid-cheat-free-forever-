// FUN_1804e53b0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804e53b0 */

void FUN_1804e53b0(byte *param_1)

{
  longlong lVar1;
  longlong lVar2;
  bool bVar3;
  bool bVar4;
  ushort uVar5;
  uint uVar6;
  int iVar7;
  ushort *puVar8;
  ushort uVar9;
  longlong lVar10;
  ushort uVar11;
  undefined4 *puVar12;
  longlong lVar13;
  longlong lVar14;
  undefined4 *puVar15;
  longlong lVar16;
  int iVar17;
  undefined1 (*pauVar18) [16];
  longlong lVar19;
  float fVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  float fVar23;
  float fVar24;
  float fVar25;
  undefined1 auVar26 [64];
  undefined1 (*local_res10) [16];
  uint local_f8;
  undefined1 local_e8 [16];
  uint local_d0;
  longlong local_c8;
  
  if ((*param_1 & 4) == 0) {
    lVar2 = *(longlong *)(param_1 + 0x38);
    lVar13 = *(longlong *)(param_1 + 0xa0);
    local_e8 = (undefined1  [16])0x0;
    local_c8 = lVar13;
    puVar8 = (ushort *)FUN_1804e8220(0,*(undefined4 *)(lVar13 + 0xf0));
    if (puVar8 == (ushort *)0x0) {
      bVar4 = true;
      if (*(longlong *)(param_1 + 0xa0) == 0) {
        FUN_1804e7950(param_1);
      }
      uVar6 = FUN_1804e7f30(param_1,0x22,0x2e,0);
      if ((uVar6 != 0xffffffff) && (FUN_1804e3ed0(param_1,uVar6,local_e8), param_1[0x51] != 0)) {
        lVar13 = *(longlong *)(*(longlong *)(param_1 + 0xa0) + 0x68);
        lVar19 = (longlong)
                 (*(int *)(*(longlong *)(*(longlong *)(param_1 + 0xa0) + 0x78) +
                          (ulonglong)(uVar6 & 0x7ffff) * 4) << 0xc) >> 0xc;
        FUN_1804e33e0(*(undefined8 *)(param_1 + 0x38),*(undefined2 *)(lVar13 + lVar19 * 8),
                      *(undefined2 *)(lVar13 + 2 + lVar19 * 8),
                      *(undefined2 *)(lVar13 + 4 + lVar19 * 8),
                      *(undefined2 *)(lVar13 + 6 + lVar19 * 8));
        param_1[0x52] = 0;
        lVar13 = local_c8;
      }
      *(uint *)(lVar13 + 0xf0) = uVar6;
      uVar5 = local_e8._4_2_;
      uVar9 = local_e8._2_2_;
      uVar11 = local_e8._0_2_;
    }
    else {
      uVar11 = *puVar8;
      uVar9 = puVar8[1];
      uVar5 = puVar8[2];
      bVar4 = false;
    }
    fVar25 = 0.5;
    auVar26 = ZEXT464(0x3f800000);
    pauVar18 = (undefined1 (*) [16])(lVar13 + 0xfc);
    iVar17 = 0;
    lVar13 = 0;
    local_d0 = (uint)uVar5;
    local_f8 = (uint)uVar5;
    local_e8._0_8_ = pauVar18;
    do {
      iVar7 = (int)local_f8 / 2;
      lVar16 = (longlong)iVar7;
      lVar19 = (longlong)(int)((local_d0 - iVar7) - iVar17);
      if (bVar4) {
        if (*(int *)(lVar2 + 0x20) == 1) {
          lVar14 = (longlong)
                   (int)((((uint)uVar9 + iVar17) * *(int *)(lVar2 + 0x24) + (uint)uVar11) *
                        *(int *)(lVar2 + 0x2c)) + *(longlong *)(lVar2 + 0x30);
          if (0 < iVar7) {
            FUN_18063ab10(lVar14,0);
          }
          lVar10 = 0;
          if (0 < lVar13) {
            do {
              lVar1 = lVar16 + lVar10;
              lVar10 = lVar10 + 1;
              *(undefined1 *)(lVar1 + lVar14) = 0xff;
            } while (lVar10 < lVar13);
          }
          lVar10 = 0;
          if (0 < lVar19) {
            do {
              lVar1 = lVar13 + lVar16 + lVar10;
              lVar10 = lVar10 + 1;
              *(undefined1 *)(lVar1 + lVar14) = 0;
            } while (lVar10 < lVar19);
          }
        }
        else if (*(int *)(lVar2 + 0x20) == 0) {
          puVar12 = (undefined4 *)
                    ((longlong)
                     (int)((((uint)uVar9 + iVar17) * *(int *)(lVar2 + 0x24) + (uint)uVar11) *
                          *(int *)(lVar2 + 0x2c)) + *(longlong *)(lVar2 + 0x30));
          if (0 < iVar7) {
            puVar15 = puVar12;
            for (lVar14 = lVar16; lVar14 != 0; lVar14 = lVar14 + -1) {
              *puVar15 = 0xffffff;
              puVar15 = puVar15 + 1;
            }
          }
          if (0 < lVar13) {
            FUN_18063ab10(puVar12 + lVar16,0xffffffff,lVar13 << 2);
          }
          if (0 < lVar19) {
            puVar12 = puVar12 + lVar16 + lVar13;
            for (; lVar19 != 0; lVar19 = lVar19 + -1) {
              *puVar12 = 0xffffff;
              puVar12 = puVar12 + 1;
            }
          }
          pauVar18 = (undefined1 (*) [16])local_e8._0_8_;
        }
      }
      if (iVar17 == 0) {
        auVar22 = ZEXT816(0);
      }
      else {
        auVar22._0_4_ = auVar26._0_4_ / (float)iVar17;
        auVar22._4_12_ = auVar26._4_12_;
      }
      local_f8 = local_f8 - 1;
      auVar21 = vinsertps_avx(ZEXT416((uint)(((float)(int)((uint)uVar11 + iVar7) - fVar25) *
                                            *(float *)(param_1 + 0x54))),
                              ZEXT416((uint)(((float)(int)((uint)uVar11 + iVar7 + iVar17) + fVar25)
                                            * *(float *)(param_1 + 0x54))),0x10);
      auVar21 = vinsertps_avx(auVar21,ZEXT416((uint)((*(float *)(param_1 + 0x58) *
                                                      (float)(int)((uint)uVar9 + iVar17 + 1) +
                                                     *(float *)(param_1 + 0x58) *
                                                     (float)(int)((uint)uVar9 + iVar17)) * fVar25)),
                              0x20);
      auVar22 = vinsertps_avx(auVar21,auVar22,0x30);
      *pauVar18 = auVar22;
      pauVar18 = pauVar18 + 1;
      iVar17 = iVar17 + 1;
      lVar13 = lVar13 + 1;
      local_e8._8_8_ = auVar22._8_8_;
      local_e8._0_8_ = pauVar18;
    } while (iVar17 < 0x21);
    local_res10 = (undefined1 (*) [16])(local_c8 + 0x30c);
    iVar17 = uVar9 + 0x20;
    fVar24 = 0.25;
    fVar20 = (float)uVar11;
    fVar23 = fVar20 + fVar25;
    fVar20 = (fVar20 - fVar25) + 8.0;
    uVar6 = 1;
    do {
      if (bVar4) {
        if (*(int *)(lVar2 + 0x20) == 1) {
          iVar7 = 4;
          lVar13 = 4;
          puVar12 = (undefined4 *)
                    ((longlong)
                     (int)(((iVar17 + uVar6) * *(int *)(lVar2 + 0x24) + (uint)uVar11) *
                          *(int *)(lVar2 + 0x2c)) + *(longlong *)(lVar2 + 0x30));
          *puVar12 = 0xbf7f3f00;
          if (0 < (int)uVar6) {
            FUN_18063ab10(puVar12 + 1,0xff,uVar6);
            iVar7 = uVar6 + 4;
            lVar13 = (ulonglong)uVar6 + 4;
          }
          iVar7 = iVar7 + 4;
          *(undefined4 *)(lVar13 + (longlong)puVar12) = 0x3f7fbf;
          if (iVar7 < (int)(uint)uVar5) {
            FUN_18063ab10((longlong)iVar7 + (longlong)puVar12,0,(longlong)(int)((uint)uVar5 - iVar7)
                         );
          }
        }
        else if (*(int *)(lVar2 + 0x20) == 0) {
          iVar7 = 4;
          lVar13 = 4;
          puVar12 = (undefined4 *)
                    ((longlong)
                     (int)(((iVar17 + uVar6) * *(int *)(lVar2 + 0x24) + (uint)uVar11) *
                          *(int *)(lVar2 + 0x2c)) + *(longlong *)(lVar2 + 0x30));
          *puVar12 = 0xffffff;
          puVar12[1] = 0x3fffffff;
          puVar12[2] = 0x7fffffff;
          puVar12[3] = 0xbfffffff;
          if (0 < (int)uVar6) {
            FUN_18063ab10(puVar12 + 4,0xffffffff,(ulonglong)uVar6 << 2);
            iVar7 = uVar6 + 4;
            lVar13 = (ulonglong)uVar6 + 4;
          }
          iVar7 = iVar7 + 4;
          puVar12[lVar13] = 0xbfffffff;
          puVar12[lVar13 + 1] = 0x7fffffff;
          puVar12[lVar13 + 2] = 0x3fffffff;
          puVar12[lVar13 + 3] = 0xffffff;
          if (iVar7 < (int)(uint)uVar5) {
            puVar12 = puVar12 + iVar7;
            for (lVar13 = (longlong)(int)((uint)uVar5 - iVar7); lVar13 != 0; lVar13 = lVar13 + -1) {
              *puVar12 = 0xffffff;
              puVar12 = puVar12 + 1;
            }
          }
        }
      }
      auVar22 = vinsertps_avx(ZEXT416((uint)(*(float *)(param_1 + 0x54) * fVar23)),
                              ZEXT416((uint)(((float)(int)uVar6 + fVar20) *
                                            *(float *)(param_1 + 0x54))),0x10);
      auVar21._0_4_ = auVar26._0_4_ / ((float)(int)(uVar6 - 1) * fVar24 + auVar26._0_4_);
      auVar21._4_12_ = auVar26._4_12_;
      auVar22 = vinsertps_avx(auVar22,ZEXT416((uint)(((float)(int)(iVar17 + uVar6 + 1) *
                                                      *(float *)(param_1 + 0x58) +
                                                     (float)(int)(iVar17 + uVar6) *
                                                     *(float *)(param_1 + 0x58)) * fVar25)),0x20);
      auVar22 = vinsertps_avx(auVar22,auVar21,0x30);
      *local_res10 = auVar22;
      local_res10 = local_res10 + 1;
      bVar3 = (int)uVar6 < 0xd;
      uVar6 = uVar6 + 1;
    } while (bVar3);
  }
  return;
}



