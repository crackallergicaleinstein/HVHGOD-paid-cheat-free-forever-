// FUN_1802de020 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802de020 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1802de020(undefined8 *param_1,uint param_2,uint *param_3)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  longlong *plVar4;
  ulonglong uVar5;
  short sVar6;
  int iVar7;
  float *pfVar8;
  ULONGLONG UVar9;
  ulonglong uVar10;
  uint **ppuVar11;
  uint *puVar12;
  float *pfVar13;
  longlong lVar14;
  ulonglong uVar15;
  uint **ppuVar16;
  uint *puVar17;
  longlong lVar18;
  int iVar19;
  float fVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [64];
  float fVar23;
  float fVar24;
  undefined1 auStack_248 [32];
  int local_228;
  int local_218 [2];
  uint *local_210;
  uint local_208 [4];
  undefined4 local_1f8;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined8 uStack_1e8;
  undefined4 uStack_1e0;
  float fStack_1dc;
  float local_1d8;
  float fStack_1d4;
  float fStack_1d0;
  DWORD DStack_1cc;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  longlong lStack_1c0;
  undefined8 local_1b8;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  longlong lStack_170;
  undefined8 local_168;
  float local_158 [8];
  undefined8 local_138;
  undefined4 local_130;
  undefined1 local_128 [16];
  undefined8 local_118;
  undefined4 local_110;
  longlong local_10c;
  undefined8 local_104;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  ulonglong local_e4;
  undefined8 uStack_dc;
  undefined8 uStack_d4;
  undefined1 local_cc;
  ULONGLONG local_c8;
  uint local_c0;
  undefined1 local_84;
  ulonglong local_78;
  
  local_78 = DAT_1808d5f00 ^ (ulonglong)auStack_248;
  local_210 = param_3;
  if (param_2 == 4) {
    if ((*(int *)*param_1 != 0) && (*(char *)param_1[1] == '\0')) {
      uVar2 = *param_3;
      local_1f8 = CONCAT31(local_1f8._1_3_,2);
      uStack_1e8 = *(undefined8 *)param_1[2];
      uStack_1f4 = (undefined4)uStack_1e8;
      uStack_1f0 = (undefined4)((ulonglong)uStack_1e8 >> 0x20);
      uStack_1ec = *(undefined4 *)((undefined8 *)param_1[2] + 1);
      fStack_1dc = (float)(uVar2 & 0xff);
      local_1d8 = (float)(uVar2 >> 8 & 0xff);
      fStack_1d4 = (float)(uVar2 >> 0x10 & 0xff);
      fVar23 = 10.0;
      local_158[4] = 10.0;
      fVar24 = 0.2;
      local_158[0] = 0.2;
      fVar20 = (float)param_3[2];
      uStack_1e0 = uStack_1ec;
      local_158[2] = fVar20;
      sVar6 = thunk_FUN_180624430(fVar20);
      if (sVar6 < 1) {
        pfVar13 = local_158;
        if (fVar24 <= fVar20) {
          pfVar13 = local_158 + 2;
        }
        pfVar8 = local_158 + 4;
        if (fVar20 <= fVar23) {
          pfVar8 = pfVar13;
        }
        fVar20 = *pfVar8;
      }
      else {
        fVar20 = 1.8;
      }
      fStack_1d0 = fVar20;
      DStack_1cc = GetCurrentThreadId();
      uStack_1c8 = *(undefined4 *)*param_1;
      local_1b8 = 0;
      UVar9 = GetTickCount64();
      fVar20 = fVar20 * 1000.0;
      lVar14 = 0;
      if ((9.223372e+18 <= fVar20) && (fVar20 = fVar20 - 9.223372e+18, fVar20 < 9.223372e+18)) {
        lVar14 = -0x8000000000000000;
      }
      lStack_1c0 = UVar9 + (longlong)fVar20 + lVar14;
      local_1a8 = CONCAT44(uStack_1f4,local_1f8);
      uStack_1a0 = CONCAT44(uStack_1ec,uStack_1f0);
      uStack_190 = CONCAT44(fStack_1dc,uStack_1e0);
      uStack_198 = uStack_1e8;
      local_188 = CONCAT44(fStack_1d4,local_1d8);
      uStack_180 = CONCAT44(DStack_1cc,fStack_1d0);
      uStack_178 = CONCAT44(uStack_1c4,uStack_1c8);
      local_168 = local_1b8;
      lStack_170 = lStack_1c0;
      FUN_1802e0940(param_1[3],&local_1a8);
      *(undefined1 *)param_1[1] = 1;
    }
  }
  else {
    auVar22 = ZEXT864(0);
    auVar21 = auVar22._0_16_;
    local_128 = (undefined1  [16])0x0;
    local_118 = 0;
    local_104 = 0x808080ffeeeeee;
    uStack_fc = 0x3fe66666;
    uStack_f8 = 0x40000000;
    uStack_f4 = 0x3f800000;
    uStack_f0 = 0x42c80000;
    uStack_ec = 0x43480000;
    uStack_e8 = 0x28;
    local_e4 = CONCAT62(local_e4._2_6_,0x101);
    local_e4 = local_e4 & 0xffffffff;
    uStack_dc = 0x42f000003e4ccccd;
    uStack_d4 = 0x42c8000042b40000;
    local_cc = 0;
    local_c8 = 0;
    local_c0 = 0;
    local_84 = 0;
    local_138 = *(undefined8 *)param_1[2];
    local_130 = *(undefined4 *)((undefined8 *)param_1[2] + 1);
    local_110 = *(undefined4 *)param_1[4];
    local_10c = (ulonglong)param_2 << 0x20;
    plVar4 = (longlong *)param_1[5];
    if ((longlong *)local_128 != plVar4) {
      FUN_1802b5f40(local_128,*plVar4,(plVar4[1] - *plVar4) / 0xc);
      auVar21 = auVar22._0_16_;
    }
    local_104 = *(undefined8 *)param_3;
    uStack_fc = (undefined4)*(undefined8 *)(param_3 + 2);
    uStack_f8 = (undefined4)((ulonglong)*(undefined8 *)(param_3 + 2) >> 0x20);
    uStack_f4 = (undefined4)*(undefined8 *)(param_3 + 4);
    uStack_f0 = (undefined4)((ulonglong)*(undefined8 *)(param_3 + 4) >> 0x20);
    uStack_ec = (undefined4)*(undefined8 *)(param_3 + 6);
    uStack_e8 = (undefined4)((ulonglong)*(undefined8 *)(param_3 + 6) >> 0x20);
    local_e4 = *(ulonglong *)(param_3 + 8);
    uStack_dc = *(undefined8 *)(param_3 + 10);
    uStack_d4 = *(undefined8 *)(param_3 + 0xc);
    local_cc = 0;
    lVar14 = param_1[3];
    piVar1 = (int *)(lVar14 + 0x1d0);
    *piVar1 = *piVar1 + 1;
    local_10c = CONCAT44(local_10c._4_4_,*(undefined4 *)(lVar14 + 0x1d0));
    auVar22 = ZEXT1664(auVar21);
    uVar10 = GetTickCount64();
    local_c8 = uVar10;
    iVar7 = 0;
    local_218[0] = 0;
    iVar19 = 0;
    lVar14 = param_1[3];
    lVar18 = *(longlong *)(lVar14 + 0xa8);
    if (lVar18 != *(longlong *)(lVar14 + 0xb0)) {
      fVar20 = 0.001;
      do {
        iVar3 = *(int *)(lVar18 + 0x30);
        if (((iVar3 == 3) == (param_2 == 3)) && (iVar3 != 6)) {
          iVar19 = iVar19 + 1;
          uVar5 = *(ulonglong *)(lVar18 + 0x70);
          if (uVar5 == 0) {
            auVar21 = vmaxss_avx(ZEXT416((uint)(*(float *)param_1[4] - *(float *)(lVar18 + 0x28))),
                                 auVar22._0_16_);
            uVar10 = auVar21._0_8_;
          }
          else {
            uVar15 = 0;
            if (uVar5 <= uVar10) {
              uVar15 = uVar10 - uVar5;
            }
            if ((longlong)uVar15 < 0) {
              uVar10 = (ulonglong)(uint)((float)uVar15 * fVar20);
            }
            else {
              uVar10 = (ulonglong)(uint)((float)(longlong)uVar15 * fVar20);
            }
          }
          local_228 = iVar3;
          iVar7 = FUN_1802c95e0(*(undefined4 *)(lVar18 + 0x2c),*(undefined4 *)(lVar18 + 0x78),uVar10
                                ,*(undefined4 *)(lVar18 + 0x3c));
          iVar7 = local_218[0] + iVar7;
          local_218[0] = iVar7;
          uVar10 = local_c8;
        }
        lVar18 = lVar18 + 0xb8;
      } while (lVar18 != *(longlong *)(lVar14 + 0xb0));
      param_3 = local_210;
    }
    if (param_2 == 3) {
      local_210 = (uint *)CONCAT44(local_210._4_4_,4);
      local_218[0] = 1;
      iVar7 = *(int *)(param_1[6] + 0x720);
      ppuVar16 = (uint **)local_218;
      if (0 < iVar7) {
        ppuVar16 = (uint **)(param_1[6] + 0x720);
      }
      ppuVar11 = &local_210;
      if (iVar7 < 5) {
        ppuVar11 = ppuVar16;
      }
      local_c0 = *(int *)ppuVar11 << 5;
    }
    else {
      local_208[1] = 0x60;
      local_208[0] = 8;
      uVar2 = param_3[7];
      puVar17 = local_208;
      if (7 < (int)uVar2) {
        puVar17 = param_3 + 7;
      }
      puVar12 = local_208 + 1;
      if ((int)uVar2 < 0x61) {
        puVar12 = puVar17;
      }
      local_c0 = *puVar12;
      if ((int)(0x200U - iVar7) < (int)*puVar12) {
        local_c0 = 0x200U - iVar7;
      }
    }
    if (7 < (int)local_c0) {
      iVar7 = 0x10;
      if (param_2 == 3) {
        iVar7 = 8;
      }
      if (iVar19 < iVar7) {
        lVar18 = *(longlong *)(lVar14 + 0xb0);
        if (lVar18 == *(longlong *)(lVar14 + 0xb8)) {
          FUN_1802ea280((longlong *)(lVar14 + 0xa8),lVar18,&local_138);
        }
        else {
          FUN_1802ec3a0(lVar18,&local_138);
          *(longlong *)(lVar14 + 0xb0) = *(longlong *)(lVar14 + 0xb0) + 0xb8;
        }
      }
    }
    FUN_1801b36e0(local_128);
  }
}



