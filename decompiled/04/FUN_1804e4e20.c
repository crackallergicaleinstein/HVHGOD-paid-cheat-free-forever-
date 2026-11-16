// FUN_1804e4e20 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804e4e20 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1804e4e20(byte *param_1)

{
  ushort uVar1;
  undefined1 uVar2;
  byte bVar3;
  ushort uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  ushort *puVar9;
  undefined8 *puVar10;
  int iVar11;
  longlong lVar12;
  int iVar13;
  longlong lVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  longlong lVar19;
  int iVar20;
  undefined1 auVar21 [16];
  float fVar22;
  undefined1 in_ZMM7 [64];
  undefined1 auVar23 [64];
  undefined1 auVar24 [64];
  float fVar25;
  float fVar26;
  undefined1 auVar27 [64];
  undefined1 auStack_1e8 [32];
  undefined8 *local_1c8;
  undefined1 *local_1c0;
  char local_1b8;
  int local_1b4;
  uint local_1b0;
  int local_1ac;
  uint local_1a8;
  int local_1a4;
  int local_1a0;
  int local_19c;
  int local_198;
  uint local_194;
  longlong local_190;
  undefined1 (*local_188) [16];
  longlong local_180;
  undefined1 local_178 [16];
  byte *local_160;
  undefined1 local_158 [64];
  undefined8 local_118 [16];
  ulonglong local_98;
  undefined1 local_48 [16];
  
  local_98 = DAT_1808d5f00 ^ (ulonglong)auStack_1e8;
  if ((*param_1 & 8) == 0) {
    lVar19 = *(longlong *)(param_1 + 0x38);
    lVar14 = *(longlong *)(param_1 + 0xa0);
    local_48 = in_ZMM7._0_16_;
    local_178 = (undefined1  [16])0x0;
    local_190 = lVar19;
    local_160 = param_1;
    puVar9 = (ushort *)FUN_1804e8220(0,*(undefined4 *)(lVar14 + 0xf8));
    if (puVar9 == (ushort *)0x0) {
      local_1b8 = '\x01';
      iVar13 = 0;
      iVar16 = 0;
      iVar17 = 0;
      do {
        iVar18 = 0;
        iVar11 = 1;
        lVar19 = 0x10;
        iVar20 = 0;
        do {
          if (iVar17 == 0) {
            iVar5 = iVar11 + 1;
          }
          else {
            iVar5 = iVar17;
            if (iVar17 <= iVar11) {
              iVar5 = iVar11;
            }
          }
          iVar11 = iVar11 + 1;
          iVar18 = iVar18 + 2 + iVar5;
          iVar6 = iVar5 + 2;
          if (iVar5 + 2 <= iVar20) {
            iVar6 = iVar20;
          }
          lVar19 = lVar19 + -1;
          iVar20 = iVar6;
        } while (lVar19 != 0);
        if (iVar18 <= iVar13) {
          iVar18 = iVar13;
        }
        iVar13 = iVar18;
        iVar16 = iVar16 + iVar6;
        iVar17 = iVar17 + 1;
      } while (iVar17 < 4);
      if (*(longlong *)(param_1 + 0xa0) == 0) {
        FUN_1804e7950(param_1);
      }
      uVar7 = FUN_1804e7f30(param_1,iVar13,iVar16,0);
      if ((uVar7 != 0xffffffff) && (FUN_1804e3ed0(param_1,uVar7,local_178), param_1[0x51] != 0)) {
        lVar19 = *(longlong *)(*(longlong *)(param_1 + 0xa0) + 0x68);
        lVar12 = (longlong)
                 (*(int *)(*(longlong *)(*(longlong *)(param_1 + 0xa0) + 0x78) +
                          (ulonglong)(uVar7 & 0x7ffff) * 4) << 0xc) >> 0xc;
        local_1c8 = (undefined8 *)
                    CONCAT44(local_1c8._4_4_,(uint)*(ushort *)(lVar19 + 6 + lVar12 * 8));
        FUN_1804e33e0(*(undefined8 *)(param_1 + 0x38),*(undefined2 *)(lVar19 + lVar12 * 8),
                      *(undefined2 *)(lVar19 + 2 + lVar12 * 8),
                      *(undefined2 *)(lVar19 + 4 + lVar12 * 8));
        param_1[0x52] = 0;
      }
      *(uint *)(lVar14 + 0xf8) = uVar7;
      lVar19 = local_190;
      uVar4 = local_178._2_2_;
      uVar1 = local_178._0_2_;
    }
    else {
      uVar1 = *puVar9;
      uVar4 = puVar9[1];
      local_1b8 = '\0';
    }
    lVar12 = 0xf;
    local_1a8 = (uint)uVar4;
    puVar10 = local_118;
    do {
      *puVar10 = 0;
      puVar10 = puVar10 + 1;
      lVar12 = lVar12 + -1;
    } while (lVar12 != 0);
    fVar26 = 1.0;
    auVar27 = ZEXT464(0x3e99999a);
    fVar22 = 0.5;
    local_188 = (undefined1 (*) [16])(lVar14 + 0x3dc);
    local_194 = (uint)uVar1;
    local_1b4 = 0;
    do {
      local_19c = 0;
      fVar25 = (float)(int)(local_1a8 + 1);
      local_198 = 1;
      local_180 = 0x10;
      iVar13 = local_1b4;
      uVar7 = local_1a8;
      local_1b0 = local_194;
      do {
        uVar15 = local_1b0;
        iVar16 = local_198 + 1;
        if (iVar13 == 0) {
          local_1a0 = iVar16;
        }
        else {
          local_1a0 = iVar13;
          if (iVar13 <= local_198) {
            local_1a0 = local_198;
          }
        }
        iVar17 = local_1a0 + 2;
        auVar21._0_4_ = (float)local_198;
        auVar21._4_12_ = SUB1612(ZEXT816(0),4);
        local_1c0 = local_158;
        local_1c8 = local_118;
        local_1ac = iVar17;
        local_1a4 = iVar16;
        uVar8 = FUN_1804e4720(auVar21._0_4_ + fVar26,auVar21._0_4_ + fVar26,auVar21._0_8_,
                              auVar27._0_8_);
        iVar18 = local_1b4;
        lVar14 = (longlong)iVar17;
        if (local_1b8 != '\0') {
          if (*(int *)(lVar19 + 0x20) == 1) {
            iVar13 = *(int *)(lVar19 + 0x24);
            iVar20 = 0;
            lVar19 = (longlong)(int)((iVar13 * uVar7 + uVar15) * *(int *)(lVar19 + 0x2c)) +
                     *(longlong *)(lVar19 + 0x30);
            if (0 < iVar17) {
              iVar16 = local_1ac;
              do {
                iVar17 = 0;
                lVar12 = 0;
                if (0 < lVar14) {
                  auVar24 = ZEXT464((uint)((float)iVar20 + fVar22));
                  auVar23 = ZEXT1664(CONCAT124(SUB1612(ZEXT816(0),4),(float)iVar18));
                  do {
                    local_1c8 = (undefined8 *)local_158;
                    local_1c0 = (undefined1 *)CONCAT44(local_1c0._4_4_,uVar8);
                    uVar2 = FUN_1804e4ca0((float)iVar17 + fVar22,auVar24._0_8_,auVar23._0_8_,
                                          local_118);
                    *(undefined1 *)(lVar12 + lVar19) = uVar2;
                    iVar17 = iVar17 + 1;
                    lVar12 = lVar12 + 1;
                  } while (lVar12 < lVar14);
                  iVar16 = local_1ac;
                }
                lVar19 = lVar19 + iVar13;
                iVar20 = iVar20 + 1;
              } while (iVar20 < iVar16);
              uVar7 = local_1a8;
              iVar16 = local_1a4;
              iVar17 = local_1ac;
            }
          }
          else {
            if (*(int *)(lVar19 + 0x20) != 0) goto LAB_1804e5273;
            iVar13 = *(int *)(lVar19 + 0x24);
            iVar18 = 0;
            lVar19 = (longlong)(int)((iVar13 * uVar7 + uVar15) * *(int *)(lVar19 + 0x2c)) +
                     *(longlong *)(lVar19 + 0x30);
            if (0 < iVar17) {
              do {
                iVar16 = 0;
                lVar12 = 0;
                if (0 < iVar17) {
                  auVar23 = ZEXT1664(CONCAT124(SUB1612(ZEXT816(0),4),(float)local_1b4));
                  auVar24 = ZEXT464((uint)((float)iVar18 + fVar22));
                  do {
                    local_1c8 = (undefined8 *)local_158;
                    local_1c0 = (undefined1 *)CONCAT44(local_1c0._4_4_,uVar8);
                    bVar3 = FUN_1804e4ca0((float)iVar16 + fVar22,auVar24._0_8_,auVar23._0_8_,
                                          local_118);
                    iVar16 = iVar16 + 1;
                    *(uint *)(lVar19 + lVar12 * 4) = (uint)bVar3 << 0x18 | 0xffffff;
                    lVar12 = lVar12 + 1;
                  } while (lVar12 < lVar14);
                }
                lVar19 = lVar19 + (longlong)iVar13 * 4;
                iVar18 = iVar18 + 1;
              } while (iVar18 < iVar17);
              iVar16 = local_198 + 1;
              uVar7 = local_1a8;
            }
          }
          iVar13 = local_1b4;
          uVar15 = local_1b0;
        }
LAB_1804e5273:
        local_198 = iVar16;
        local_1b0 = uVar15 + iVar17;
        auVar21 = vinsertps_avx(ZEXT416((uint)((float)(int)(uVar15 + 1) *
                                              *(float *)(local_160 + 0x54))),
                                ZEXT416((uint)(fVar25 * *(float *)(local_160 + 0x58))),0x10);
        if (iVar17 <= local_19c) {
          iVar17 = local_19c;
        }
        auVar21 = vinsertps_avx(auVar21,ZEXT416((uint)((float)(int)(local_1a0 + 1 + uVar15) *
                                                      *(float *)(local_160 + 0x54))),0x20);
        auVar21 = vinsertps_avx(auVar21,ZEXT416((uint)((float)(int)(local_1a0 + 1 + uVar7) *
                                                      *(float *)(local_160 + 0x58))),0x30);
        *local_188 = auVar21;
        local_188 = local_188 + 1;
        local_180 = local_180 + -1;
        lVar19 = local_190;
        local_19c = iVar17;
      } while (local_180 != 0);
      local_1a8 = uVar7 + iVar17;
      local_1b4 = iVar13 + 1;
    } while (local_1b4 < 4);
  }
}



