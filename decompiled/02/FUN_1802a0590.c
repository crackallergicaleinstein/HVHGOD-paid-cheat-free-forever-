// FUN_1802a0590 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802a0590 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1802a0590(undefined8 param_1,undefined8 param_2,longlong param_3,longlong param_4,
                  byte param_5)

{
  uint *puVar1;
  float fVar2;
  uint uVar3;
  int iVar4;
  ulonglong uVar5;
  float *pfVar6;
  longlong lVar7;
  uint *puVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [64];
  undefined1 auVar13 [16];
  undefined1 auVar14 [64];
  undefined1 auVar15 [64];
  undefined1 auVar16 [64];
  undefined1 auVar17 [64];
  undefined1 auStack_2e8 [32];
  float local_2c8;
  float local_2c4;
  undefined8 local_2c0;
  uint local_2b8;
  undefined4 local_2b4;
  undefined4 local_2b0;
  undefined4 local_2ac;
  undefined4 local_2a8;
  undefined4 local_2a4;
  undefined4 local_2a0;
  undefined4 local_29c;
  undefined4 local_298;
  undefined4 local_294;
  undefined4 local_290;
  undefined4 local_28c;
  undefined8 local_288;
  undefined4 local_280;
  undefined4 local_27c;
  undefined4 local_278;
  undefined4 local_274;
  undefined4 local_270;
  undefined8 local_26c;
  undefined4 local_264;
  undefined4 local_260;
  undefined4 local_25c;
  undefined4 local_258;
  undefined8 local_254;
  undefined4 local_24c;
  undefined4 local_248;
  undefined4 local_244;
  undefined4 local_240;
  undefined4 local_23c;
  undefined8 local_238;
  undefined4 local_230;
  uint local_22c;
  longlong local_228;
  undefined8 local_220;
  longlong local_218;
  float local_208 [4];
  undefined1 local_1f8 [16];
  undefined1 local_1e8 [16];
  undefined1 local_1d8 [16];
  undefined1 local_1c8 [16];
  undefined1 local_1b8 [16];
  undefined1 local_1a8 [16];
  undefined1 local_198 [16];
  undefined1 local_188 [16];
  undefined1 local_178 [16];
  undefined1 local_168 [16];
  undefined1 local_158 [16];
  undefined1 local_148 [16];
  undefined1 local_138 [16];
  undefined1 local_128 [16];
  undefined1 local_118 [16];
  undefined1 local_108 [16];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined1 local_d8 [16];
  undefined4 local_c8;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 local_78 [16];
  undefined4 *local_68;
  ulonglong local_60;
  
  local_60 = DAT_1808d5f00 ^ (ulonglong)auStack_2e8;
  local_218 = param_4 + (((ulonglong)param_5 ^ 1) + 0x37) * 4;
  local_2b8 = 7;
  local_2b4 = 6;
  local_2b0 = 0x17;
  local_2ac = 4;
  local_2a8 = 3;
  local_2a4 = 2;
  local_2a0 = 1;
  local_29c = 0xb;
  local_298 = 10;
  local_294 = 9;
  local_290 = 8;
  local_28c = 0x17;
  local_288 = 0xffffffffffffffff;
  local_280 = 0xf;
  local_27c = 0xe;
  local_278 = 0xd;
  local_274 = 0xc;
  local_270 = 0x17;
  local_26c = 0xffffffffffffffff;
  local_264 = 0x13;
  local_260 = 0x12;
  local_25c = 0x11;
  local_258 = 1;
  local_254 = 0xffffffffffffffff;
  local_24c = 0xffffffff;
  local_248 = 0x16;
  local_244 = 0x15;
  local_240 = 0x14;
  local_23c = 1;
  local_238 = 0xffffffffffffffff;
  local_230 = 0xffffffff;
  local_208[3] = 0.0;
  local_1f8 = ZEXT816(0);
  local_1e8 = ZEXT816(0);
  local_c8 = 0;
  pfVar6 = local_208;
  puVar9 = (undefined8 *)(param_3 + 0x60);
  lVar7 = 0x1b;
  local_1d8 = local_1f8;
  local_1c8 = local_1e8;
  local_1b8 = local_1f8;
  local_1a8 = local_1e8;
  local_198 = local_1f8;
  local_188 = local_1e8;
  local_178 = local_1f8;
  local_168 = local_1e8;
  local_158 = local_1f8;
  local_148 = local_1e8;
  local_138 = local_1f8;
  local_128 = local_1e8;
  local_118 = local_1f8;
  local_108 = local_1e8;
  local_f8 = local_1f8;
  local_e8 = local_1e8;
  local_d8 = local_1f8;
  do {
    *(undefined8 *)pfVar6 = *puVar9;
    pfVar6[2] = *(float *)(puVar9 + 1);
    puVar9 = puVar9 + 4;
    pfVar6 = pfVar6 + 3;
    lVar7 = lVar7 + -1;
  } while (lVar7 != 0);
  auVar17 = ZEXT464(0x3f800000);
  auVar15 = ZEXT464(0x475ead00);
  auVar16 = ZEXT464(0x48742400);
  puVar8 = &local_2b8;
  local_228 = param_4;
  local_220 = param_2;
  do {
    local_78 = (undefined1  [16])0x0;
    local_68 = (undefined4 *)0x0;
    FUN_1802aa1b0(local_78,7);
    puVar1 = puVar8 + 7;
    for (; puVar8 != puVar1; puVar8 = puVar8 + 1) {
      uVar3 = *puVar8;
      uVar5 = (ulonglong)uVar3;
      if (uVar3 == 0xffffffff) break;
      if (uVar3 < 0x1c) {
        fVar2 = local_208[uVar5 * 3];
        if (local_208[uVar5 * 3 + 1] * local_208[uVar5 * 3 + 1] + fVar2 * fVar2 +
            local_208[uVar5 * 3 + 2] * local_208[uVar5 * 3 + 2] < auVar17._0_4_) goto LAB_1802a086b;
        if (DAT_180b8e2b0 == '\0') {
          local_2c8 = auVar15._0_4_;
          local_2c4 = local_2c8;
          goto LAB_1802a086b;
        }
        iVar4 = FUN_1805f68d0(&DAT_180b8e260);
        if (iVar4 != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_1805f6d44(5);
        }
        if (DAT_180b8e2ac == 0x7fffffff) {
          DAT_180b8e2ac = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
          FUN_1805f6d44(6);
        }
        local_b8 = _DAT_180b8e220;
        uStack_b0 = uRam0000000180b8e228;
        uStack_a8 = uRam0000000180b8e230;
        uStack_a0 = uRam0000000180b8e238;
        local_98 = _DAT_180b8e240;
        uStack_90 = uRam0000000180b8e248;
        uStack_88 = uRam0000000180b8e250;
        uStack_80 = uRam0000000180b8e258;
        auVar15 = ZEXT1664(auVar15._0_16_);
        auVar16 = ZEXT1664(auVar16._0_16_);
        auVar17 = ZEXT1664(auVar17._0_16_);
        uVar10 = FUN_1805f68fc(&DAT_180b8e260);
        FUN_180419d90(uVar10,&local_2c8,local_208 + uVar5 * 3,&local_b8);
        auVar12 = ZEXT464((uint)local_2c8);
        auVar11 = ZEXT416((uint)local_2c8);
        if (local_2c8 == auVar15._0_4_) goto LAB_1802a086b;
        auVar14 = ZEXT464((uint)local_2c4);
        auVar13 = ZEXT416((uint)local_2c4);
        if (local_2c4 == auVar15._0_4_) goto LAB_1802a086b;
        local_2c0 = CONCAT44(local_2c4,local_2c8);
        if ((local_78._0_8_ != local_78._8_8_) &&
           (auVar16._0_4_ <
            (local_2c4 - *(float *)(local_78._8_8_ + -4)) *
            (local_2c4 - *(float *)(local_78._8_8_ + -4)) +
            (local_2c8 - *(float *)(local_78._8_8_ + -8)) *
            (local_2c8 - *(float *)(local_78._8_8_ + -8)))) {
          FUN_1802a0a40(&local_228,local_78);
          auVar13 = auVar14._0_16_;
          auVar11 = auVar12._0_16_;
        }
        if ((undefined4 *)local_78._8_8_ == local_68) {
          FUN_1802ad990(local_78,local_78._8_8_,&local_2c0);
        }
        else {
          auVar13 = vunpcklps_avx(auVar11,auVar13);
          local_2c0 = auVar13._0_8_;
          *(int *)local_78._8_8_ = auVar11._0_4_;
          auVar11 = vshufps_avx(auVar13,auVar13,0x55);
          *(int *)(local_78._8_8_ + 4) = auVar11._0_4_;
          local_78._8_8_ = local_78._8_8_ + 8;
        }
      }
      else {
LAB_1802a086b:
        FUN_1802a0a40(&local_228,local_78);
      }
    }
    FUN_1802a0a40(&local_228,local_78);
    FUN_1800f0160(local_78);
    puVar8 = puVar1;
    if (puVar1 == &local_22c) {
    }
  } while( true );
}



