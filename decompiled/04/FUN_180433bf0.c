// FUN_180433bf0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180433bf0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180433bf0(longlong *param_1,longlong *param_2,longlong *param_3,undefined8 param_4,
                  float param_5)

{
  undefined4 uVar1;
  bool bVar2;
  undefined1 auVar3 [16];
  undefined4 uVar4;
  longlong lVar5;
  longlong lVar6;
  float *pfVar7;
  ulonglong uVar8;
  int iVar9;
  longlong lVar10;
  int iVar11;
  int iVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined1 auVar16 [64];
  float fVar17;
  undefined1 auVar18 [64];
  uint uVar19;
  float fVar20;
  float fVar21;
  undefined1 auVar22 [64];
  undefined1 auStack_188 [32];
  float *local_168;
  undefined4 local_160;
  undefined4 local_158;
  longlong *local_150;
  longlong local_148;
  float local_140 [2];
  longlong *local_138;
  char *local_130;
  int *local_128;
  undefined1 *local_120;
  int *local_118;
  char local_110 [8];
  int local_108;
  int local_104;
  undefined1 local_100 [16];
  longlong local_f0;
  ulonglong local_e8;
  
  local_e8 = DAT_1808d5f00 ^ (ulonglong)auStack_188;
  local_110[0] = '\0';
  local_104 = (int)param_2[1] / 2;
  if (1 < local_104) {
    auVar22 = ZEXT864(0);
    if (0.0 < param_5) {
      lVar10 = param_3[1];
      if (lVar10 != 0) {
        local_108 = local_104 + -1;
        local_150 = param_2;
        local_148 = lVar10;
        local_138 = param_3;
        FUN_1804353e0(param_1,0);
        iVar12 = local_108 * 2;
        local_100 = (undefined1  [16])0x0;
        local_f0 = 0;
        if (iVar12 != 0) {
          if (0x3fffffffffffffff < (ulonglong)(longlong)iVar12) {
                    /* WARNING: Subroutine does not return */
            FUN_1801136f0();
          }
          lVar6 = (longlong)iVar12 * 4;
          lVar5 = FUN_18015bca0(lVar6);
          local_100._0_8_ = lVar5;
          local_f0 = lVar6 + lVar5;
          FUN_18063ab10(lVar5,0,lVar6);
          local_100._8_8_ = lVar6 + lVar5;
          param_2 = local_150;
        }
        iVar12 = local_108;
        if (0 < local_108) {
          lVar10 = *param_2;
          lVar6 = 0;
          uVar19 = 0x80000000;
          fVar14 = 0.0001;
          iVar11 = 1;
          do {
            if (local_110[0] == '\0') {
              iVar9 = iVar11;
            }
            else {
              iVar9 = iVar11 % local_104;
            }
            fVar21 = *(float *)(lVar10 + (longlong)iVar9 * 8) - *(float *)(lVar10 + lVar6);
            auVar16 = ZEXT464((uint)fVar21);
            fVar20 = *(float *)(lVar10 + 4 + (longlong)iVar9 * 8) - *(float *)(lVar10 + 4 + lVar6);
            auVar18 = ZEXT464((uint)fVar20);
            fVar13 = fVar20 * fVar20 + fVar21 * fVar21;
            if (fVar13 < 0.0) {
              fVar13 = (float)FUN_18061e150();
              fVar21 = auVar16._0_4_;
              fVar20 = auVar18._0_4_;
            }
            else {
              fVar13 = SQRT(fVar13);
            }
            if (fVar14 < fVar13) {
              *(float *)(local_100._0_8_ + lVar6) = (float)((uint)fVar20 ^ uVar19) / fVar13;
              *(float *)(local_100._0_8_ + 4 + lVar6) = fVar21 / fVar13;
              iVar12 = local_108;
            }
            lVar6 = lVar6 + 8;
            bVar2 = iVar11 < iVar12;
            iVar11 = iVar11 + 1;
          } while (bVar2);
          lVar10 = local_148;
        }
        iVar11 = 0;
        local_130 = local_110;
        local_128 = &local_108;
        local_120 = local_100;
        local_118 = &local_104;
        auVar16 = ZEXT464(0x3f800000);
        auVar3 = vmaxss_avx(auVar22._0_16_,ZEXT416((uint)((param_5 - 1.0) * 0.5)));
        auVar18 = ZEXT1664(auVar3);
        fVar14 = auVar3._0_4_ + 1.0;
        local_148 = (param_1[1] - *param_1) / 0x14;
        if (0 < local_104) {
          lVar6 = *local_138;
          local_158 = 0;
          pfVar7 = (float *)*local_150;
          do {
            fVar13 = *pfVar7;
            fVar21 = pfVar7[1];
            uVar8 = (longlong)iVar11;
            if (lVar10 - 1U < (ulonglong)(longlong)iVar11) {
              uVar8 = lVar10 - 1U;
            }
            uVar1 = *(undefined4 *)(lVar6 + uVar8 * 4);
            local_158._0_3_ = (undefined3)uVar1;
            local_168 = local_140;
            FUN_180433a40(&local_130,iVar11,&local_150,&local_138);
            uVar4 = local_158;
            fVar17 = auVar18._0_4_ * local_140[0];
            fVar20 = fVar14 * local_140[0] * local_138._0_4_;
            fVar14 = fVar14 * local_140[0] * local_150._0_4_;
            local_160 = local_158;
            local_168._0_4_ = auVar22._0_4_;
            FUN_1804354e0(param_1,fVar14 + fVar13,fVar20 + fVar21,auVar22._0_8_);
            fVar15 = fVar17 * local_138._0_4_;
            fVar17 = fVar17 * local_150._0_4_;
            local_168._0_4_ = auVar22._0_4_;
            local_160 = uVar1;
            FUN_1804354e0(param_1,fVar17 + fVar13,fVar15 + fVar21,auVar22._0_8_);
            local_168._0_4_ = auVar16._0_4_;
            local_160 = uVar1;
            FUN_1804354e0(param_1,fVar13 - fVar17,fVar21 - fVar15,auVar16._0_8_);
            local_160 = uVar4;
            local_168 = (float *)CONCAT44(local_168._4_4_,auVar16._0_4_);
            FUN_1804354e0(param_1,fVar13 - fVar14,fVar21 - fVar20,auVar16._0_8_);
            iVar11 = iVar11 + 1;
            pfVar7 = pfVar7 + 2;
            fVar14 = auVar18._0_4_ + auVar16._0_4_;
          } while (iVar11 < local_104);
          iVar12 = local_108;
        }
        iVar11 = 1;
        if (0 < iVar12) {
          iVar12 = (int)local_148 + 2;
          do {
            local_150 = (longlong *)CONCAT44(local_150._4_4_,iVar11);
            if (local_110[0] == '\0') {
              iVar9 = iVar11;
            }
            else {
              iVar9 = iVar11 % local_104;
            }
            iVar9 = (int)local_148 + iVar9 * 4;
            local_168._0_4_ = iVar9;
            FUN_180435650(param_1,iVar12 + -2,iVar12 + -1,iVar9 + 1);
            local_168._0_4_ = iVar9 + 1;
            FUN_180435650(param_1,iVar12 + -1,iVar12,iVar9 + 2);
            local_168 = (float *)CONCAT44(local_168._4_4_,iVar9 + 2);
            FUN_180435650(param_1,iVar12,iVar12 + 1,iVar9 + 3);
            iVar11 = iVar11 + 1;
            iVar12 = iVar12 + 4;
          } while ((int)local_150._0_4_ < local_108);
        }
        FUN_180159650(local_100);
      }
    }
  }
}



