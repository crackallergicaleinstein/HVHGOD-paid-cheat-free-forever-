// FUN_1804f4090 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804f4090 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1804f4090(undefined **param_1,undefined **param_2)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  longlong lVar7;
  undefined **ppuVar8;
  undefined4 uVar9;
  int iVar10;
  int iVar11;
  float fVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [32];
  float fVar15;
  float fVar16;
  float fVar17;
  undefined1 auVar18 [64];
  undefined8 uVar19;
  undefined1 auVar20 [64];
  float fVar21;
  undefined1 auVar22 [64];
  float fVar23;
  undefined1 auVar24 [64];
  undefined1 auVar25 [16];
  undefined1 auVar26 [64];
  undefined1 auVar27 [64];
  undefined1 auStack_158 [32];
  undefined4 local_138;
  undefined **local_130;
  undefined **local_128;
  undefined **local_120;
  undefined8 local_118;
  undefined4 local_108;
  float local_f8;
  float fStack_f4;
  float local_f0;
  undefined4 local_e8;
  float local_e4;
  undefined1 local_e0 [8];
  undefined1 auStack_d8 [8];
  ulonglong local_d0;
  
  lVar7 = DAT_180bb8ae8;
  local_d0 = DAT_1808d5f00 ^ (ulonglong)auStack_158;
  *(undefined1 *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0xce) = 1;
  lVar1 = *(longlong *)(lVar7 + 0x14d0);
  if (*(char *)(lVar1 + 0xd1) != '\0') {
  }
  ppuVar8 = &PTR_180700558;
  ppuVar5 = &PTR_180700558;
  if (param_1 != param_2) {
    ppuVar8 = param_2;
    ppuVar5 = param_1;
  }
  if (ppuVar8 == (undefined **)0x0) {
    lVar4 = -1;
    do {
      lVar2 = lVar4 + 1;
      lVar4 = lVar4 + 1;
    } while (*(char *)((longlong)ppuVar5 + lVar2) != '\0');
    ppuVar8 = (undefined **)((longlong)ppuVar5 + lVar4);
  }
  fVar15 = *(float *)(lVar1 + 0x1f0);
  fStack_f4 = *(float *)(lVar1 + 0x150) + *(float *)(lVar1 + 0x11c);
  auVar27 = ZEXT464((uint)fStack_f4);
  local_f8 = *(float *)(lVar1 + 0x118);
  auVar24 = ZEXT464((uint)local_f8);
  auVar18 = ZEXT864(0);
  local_f0 = fStack_f4;
  if ((longlong)ppuVar8 - (longlong)ppuVar5 < 0x7d1) {
    if (0.0 <= fVar15) goto LAB_1804f453c;
  }
  else {
    if (0.0 > fVar15) {
      fVar15 = *(float *)(lVar7 + 0x11e0);
      auVar26 = ZEXT864(0);
      local_e8 = 0;
      if ((*(char *)(lVar7 + 0x2840) == '\0') &&
         (iVar10 = (int)((*(float *)(lVar1 + 0x26c) - fStack_f4) / fVar15), 0 < iVar10)) {
        for (iVar11 = 0; (ppuVar5 < ppuVar8 && (iVar11 < iVar10)); iVar11 = iVar11 + 1) {
          ppuVar5 = (undefined **)FUN_18063b630(ppuVar5,10,(longlong)ppuVar8 - (longlong)ppuVar5);
          if (ppuVar5 == (undefined **)0x0) {
            ppuVar5 = ppuVar8;
          }
          ppuVar5 = (undefined **)((longlong)ppuVar5 + 1);
        }
        fStack_f4 = (float)iVar11 * fVar15 + auVar27._0_4_;
      }
      uVar19 = auVar18._0_8_;
      fVar17 = fStack_f4;
      if (ppuVar5 < ppuVar8) {
        uVar9 = 0xbf800000;
        auVar27 = ZEXT464(0x7f7fffff);
        fVar17 = auVar24._0_4_ + 3.4028235e+38;
        fVar23 = fStack_f4 + fVar15;
        fVar21 = fStack_f4;
        while (((((lVar1 = *(longlong *)(lVar7 + 0x14d0), *(float *)(lVar1 + 0x26c) < fVar23 &&
                  (fVar21 < *(float *)(lVar1 + 0x274))) && (*(float *)(lVar1 + 0x268) < fVar17)) &&
                (auVar24._0_4_ < *(float *)(lVar1 + 0x270))) || (*(char *)(lVar7 + 0x154e) != '\0'))
              ) {
          fVar16 = fStack_f4;
          ppuVar6 = (undefined **)FUN_18063b630(ppuVar5,10,(longlong)ppuVar8 - (longlong)ppuVar5);
          auVar25 = auVar26._0_16_;
          if (ppuVar6 == (undefined **)0x0) {
            ppuVar6 = ppuVar8;
          }
          if (ppuVar5 == ppuVar6) {
            auVar13 = auVar18._0_16_;
          }
          else {
            local_108 = 0;
            local_118 = 0;
            local_138 = uVar9;
            local_130 = ppuVar5;
            local_128 = ppuVar6;
            local_120 = ppuVar6;
            FUN_1804ea040(local_e0,*(undefined8 *)(lVar7 + 0x11d0),*(undefined4 *)(lVar7 + 0x11e0),
                          auVar27._0_8_);
            auVar25 = auVar26._0_16_;
            fVar12 = (float)(int)((uint)((float)(int)(float)local_e0._0_4_ < (float)local_e0._0_4_)
                                 + (int)(float)local_e0._0_4_);
            auVar13 = ZEXT416((uint)fVar12);
            local_e0._0_4_ = fVar12;
          }
          auVar25 = vmaxss_avx(auVar25,auVar13);
          auVar26 = ZEXT1664(auVar25);
          FUN_1804b3060(CONCAT44(fStack_f4,local_f8),ppuVar5,ppuVar6,0);
          ppuVar5 = (undefined **)((longlong)ppuVar6 + 1);
          fStack_f4 = fVar16 + fVar15;
          fVar21 = fVar21 + fVar15;
          fVar23 = fVar23 + fVar15;
          if (ppuVar8 <= ppuVar5) break;
          lVar7 = DAT_180bb8ae8;
        }
        uVar19 = auVar18._0_8_;
        iVar10 = 0;
        auVar27 = ZEXT464((uint)local_f0);
        local_e8 = auVar26._0_4_;
        fVar17 = fStack_f4;
        for (; ppuVar5 < ppuVar8; ppuVar5 = (undefined **)((longlong)ppuVar5 + 1)) {
          ppuVar5 = (undefined **)FUN_18063b630(ppuVar5,10,(longlong)ppuVar8 - (longlong)ppuVar5);
          uVar19 = auVar18._0_8_;
          if (ppuVar5 == (undefined **)0x0) {
            ppuVar5 = ppuVar8;
          }
          iVar10 = iVar10 + 1;
        }
        fVar17 = fVar17 + (float)iVar10 * fVar15;
      }
      local_e4 = fVar17 - auVar27._0_4_;
      auVar18 = ZEXT464((uint)(auVar27._0_4_ + local_e4));
      auVar26 = ZEXT464((uint)(auVar24._0_4_ + auVar26._0_4_));
      FUN_1804c6420(&local_e8,uVar19);
      lVar7 = DAT_180bb8ae8;
      auVar25 = vinsertps_avx(auVar24._0_16_,auVar27._0_16_,0x10);
      auVar25 = vinsertps_avx(auVar25,auVar26._0_16_,0x20);
      *(uint *)(DAT_180bb8ae8 + 0x1ec4) =
           *(uint *)(DAT_180bb8ae8 + 0x1e80) | *(uint *)(DAT_180bb8ae8 + 0x1e8c);
      lVar1 = *(longlong *)(lVar7 + 0x14d0);
      _local_e0 = vinsertps_avx(auVar25,auVar18._0_16_,0x30);
      auVar14._16_16_ = _local_e0;
      auVar14._0_16_ = _local_e0;
      *(undefined4 *)(lVar7 + 0x1ec0) = 0;
      *(undefined1 (*) [32])(lVar7 + 0x1ecc) = auVar14;
      *(undefined4 *)(lVar7 + 0x1ec8) = 0;
      *(undefined8 *)(lVar7 + 0x1e88) = 0;
      if (((auVar18._0_4_ <= *(float *)(lVar1 + 0x26c)) ||
          (*(float *)(lVar1 + 0x274) <= auVar27._0_4_)) ||
         ((auVar26._0_4_ <= *(float *)(lVar1 + 0x268) ||
          (*(float *)(lVar1 + 0x270) <= auVar24._0_4_)))) {
        if (*(char *)(lVar7 + 0x154e) == '\0') {
        }
        uVar9 = 1;
      }
      else {
        *(undefined4 *)(lVar7 + 0x1ec8) = 0x100;
        uVar9 = 0x101;
      }
      cVar3 = FUN_1804c3600(local_e0,auStack_d8,1);
      if (cVar3 == '\0') {
      }
      *(undefined4 *)(lVar7 + 0x1ec8) = uVar9;
    }
LAB_1804f453c:
    if (0.0 <= fVar15) {
      if (fVar15 == 0.0) {
        auVar25 = vmaxss_avx(ZEXT416((uint)(*(float *)(lVar1 + 0x250) - local_f8)),
                             ZEXT416(0x3f800000));
        auVar18 = ZEXT1664(auVar25);
      }
      else {
        if (0.0 < fVar15) {
          fVar15 = (*(float *)(lVar1 + 0x28) - *(float *)(lVar1 + 0x98)) + fVar15;
        }
        auVar25 = vmaxss_avx(ZEXT416((uint)(fVar15 - local_f8)),ZEXT416(0x3f800000));
        auVar18 = ZEXT1664(auVar25);
      }
      goto LAB_1804f458c;
    }
  }
  auVar18 = ZEXT864(0);
LAB_1804f458c:
  if (ppuVar5 == ppuVar8) {
    local_f8 = 0.0;
    local_e0._4_4_ = *(float *)(lVar7 + 0x11e0);
  }
  else {
    local_108 = 0;
    local_118 = 0;
    local_138 = auVar18._0_4_;
    local_130 = ppuVar5;
    local_128 = ppuVar8;
    local_120 = ppuVar8;
    FUN_1804ea040(local_e0,*(undefined8 *)(lVar7 + 0x11d0),*(float *)(lVar7 + 0x11e0),0x7f7fffff);
    local_f8 = (float)(int)((uint)((float)(int)(float)local_e0._0_4_ < (float)local_e0._0_4_) +
                           (int)(float)local_e0._0_4_);
  }
  auVar22 = ZEXT464((uint)(auVar24._0_4_ + local_f8));
  auVar26 = ZEXT464((uint)(auVar27._0_4_ + (float)local_e0._4_4_));
  fStack_f4 = (float)local_e0._4_4_;
  FUN_1804c6420(&local_f8,0);
  lVar7 = DAT_180bb8ae8;
  auVar25 = vinsertps_avx(auVar24._0_16_,auVar27._0_16_,0x10);
  auVar25 = vinsertps_avx(auVar25,auVar22._0_16_,0x20);
  _local_e0 = vinsertps_avx(auVar25,auVar26._0_16_,0x30);
  auVar20 = ZEXT1664(_local_e0);
  *(uint *)(DAT_180bb8ae8 + 0x1ec4) =
       *(uint *)(DAT_180bb8ae8 + 0x1e80) | *(uint *)(DAT_180bb8ae8 + 0x1e8c);
  lVar1 = *(longlong *)(lVar7 + 0x14d0);
  *(undefined4 *)(lVar7 + 0x1ec0) = 0;
  *(undefined1 (*) [16])(lVar7 + 0x1ecc) = _local_e0;
  *(undefined1 (*) [16])(lVar7 + 0x1edc) = _local_e0;
  *(undefined4 *)(lVar7 + 0x1ec8) = 0;
  *(undefined8 *)(lVar7 + 0x1e88) = 0;
  if (((auVar26._0_4_ <= *(float *)(lVar1 + 0x26c)) || (*(float *)(lVar1 + 0x274) <= auVar27._0_4_))
     || ((auVar22._0_4_ <= *(float *)(lVar1 + 0x268) || (*(float *)(lVar1 + 0x270) <= auVar24._0_4_)
         ))) {
    if (*(char *)(lVar7 + 0x154e) == '\0') {
    }
    uVar9 = 1;
  }
  else {
    *(undefined4 *)(lVar7 + 0x1ec8) = 0x100;
    uVar9 = 0x101;
  }
  cVar3 = FUN_1804c3600(local_e0,auStack_d8,1);
  if (cVar3 != '\0') {
    *(undefined4 *)(lVar7 + 0x1ec8) = uVar9;
  }
  FUN_1804b3370(auVar20._0_8_,ppuVar5,ppuVar8,auVar18._0_8_);
}



