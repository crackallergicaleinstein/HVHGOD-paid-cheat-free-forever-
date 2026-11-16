// FUN_180433590 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180433590 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180433590(longlong *param_1,longlong *param_2,undefined8 param_3,char param_4,float param_5
                  )

{
  longlong lVar1;
  bool bVar2;
  undefined1 auVar3 [16];
  longlong lVar4;
  int iVar5;
  float *pfVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined1 auVar13 [64];
  float fVar14;
  undefined1 auVar15 [64];
  uint uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined1 auVar20 [64];
  char local_res20 [8];
  undefined1 auStack_188 [32];
  float *local_168;
  float local_160;
  float local_158 [2];
  longlong *local_150;
  float local_148 [2];
  longlong local_140;
  char *local_138;
  int *local_130;
  undefined1 *local_128;
  int *local_120;
  int local_118;
  int local_114;
  undefined1 local_110 [16];
  longlong local_100;
  ulonglong local_f8;
  
  local_f8 = DAT_1808d5f00 ^ (ulonglong)auStack_188;
  local_114 = (int)param_2[1] / 2;
  if (((1 < local_114) && ((char)((ulonglong)param_3 >> 0x18) != '\0')) &&
     (auVar20 = ZEXT864(0), 0.0 < param_5)) {
    local_118 = local_114;
    if (param_4 == '\0') {
      local_118 = local_114 + -1;
    }
    local_res20[0] = param_4;
    local_150 = param_2;
    FUN_1804353e0(param_1,0);
    iVar9 = local_118 * 2;
    local_110 = (undefined1  [16])0x0;
    local_100 = 0;
    if (iVar9 != 0) {
      if (0x3fffffffffffffff < (ulonglong)(longlong)iVar9) {
                    /* WARNING: Subroutine does not return */
        FUN_1801136f0();
      }
      lVar1 = (longlong)iVar9 * 4;
      lVar4 = FUN_18015bca0(lVar1);
      local_110._0_8_ = lVar4;
      local_100 = lVar1 + lVar4;
      FUN_18063ab10(lVar4,0,lVar1);
      local_110._8_8_ = lVar1 + lVar4;
      param_2 = local_150;
    }
    iVar7 = 1;
    iVar9 = local_118;
    if (0 < local_118) {
      lVar1 = *param_2;
      lVar4 = 0;
      uVar16 = 0x80000000;
      fVar11 = 0.0001;
      iVar8 = 1;
      do {
        if (local_res20[0] == '\0') {
          iVar5 = iVar8;
        }
        else {
          iVar5 = iVar8 % local_114;
        }
        fVar19 = *(float *)(lVar1 + (longlong)iVar5 * 8) - *(float *)(lVar1 + lVar4);
        auVar13 = ZEXT464((uint)fVar19);
        fVar18 = *(float *)(lVar1 + 4 + (longlong)iVar5 * 8) - *(float *)(lVar1 + 4 + lVar4);
        auVar15 = ZEXT464((uint)fVar18);
        fVar10 = fVar18 * fVar18 + fVar19 * fVar19;
        if (fVar10 < 0.0) {
          fVar10 = (float)FUN_18061e150();
          fVar19 = auVar13._0_4_;
          fVar18 = auVar15._0_4_;
        }
        else {
          fVar10 = SQRT(fVar10);
        }
        if (fVar11 < fVar10) {
          *(float *)(local_110._0_8_ + lVar4) = (float)((uint)fVar18 ^ uVar16) / fVar10;
          *(float *)(local_110._0_8_ + 4 + lVar4) = fVar19 / fVar10;
          iVar9 = local_118;
        }
        lVar4 = lVar4 + 8;
        bVar2 = iVar8 < iVar9;
        iVar8 = iVar8 + 1;
      } while (bVar2);
    }
    iVar8 = 0;
    local_138 = local_res20;
    local_130 = &local_118;
    local_128 = local_110;
    local_120 = &local_114;
    auVar13 = ZEXT464(0x3f800000);
    auVar3 = vmaxss_avx(auVar20._0_16_,ZEXT416((uint)((param_5 - 1.0) * 0.5)));
    auVar15 = ZEXT1664(auVar3);
    fVar11 = auVar3._0_4_ + 1.0;
    local_158[0] = (float)(uint)(uint3)param_3;
    fVar10 = local_158[0];
    local_140 = (param_1[1] - *param_1) / 0x14;
    if (0 < local_114) {
      pfVar6 = (float *)*local_150;
      do {
        fVar19 = *pfVar6;
        fVar18 = pfVar6[1];
        local_168 = local_158;
        FUN_180433a40(&local_138,iVar8,&local_150,local_148);
        fVar14 = auVar15._0_4_ * local_158[0];
        fVar17 = fVar11 * local_158[0] * local_148[0];
        fVar11 = fVar11 * local_158[0] * local_150._0_4_;
        local_160 = fVar10;
        local_168._0_4_ = auVar20._0_4_;
        FUN_1804354e0(param_1,fVar11 + fVar19,fVar17 + fVar18,auVar20._0_8_);
        fVar12 = fVar14 * local_148[0];
        fVar14 = fVar14 * local_150._0_4_;
        local_168._0_4_ = auVar20._0_4_;
        local_160 = (float)(int)param_3;
        FUN_1804354e0(param_1,fVar14 + fVar19,fVar12 + fVar18,auVar20._0_8_);
        local_168._0_4_ = auVar13._0_4_;
        local_160 = (float)(int)param_3;
        FUN_1804354e0(param_1,fVar19 - fVar14,fVar18 - fVar12,auVar13._0_8_);
        local_160 = fVar10;
        local_168 = (float *)CONCAT44(local_168._4_4_,auVar13._0_4_);
        FUN_1804354e0(param_1,fVar19 - fVar11,fVar18 - fVar17,auVar13._0_8_);
        iVar8 = iVar8 + 1;
        pfVar6 = pfVar6 + 2;
        fVar11 = auVar15._0_4_ + auVar13._0_4_;
      } while (iVar8 < local_114);
      iVar9 = local_118;
    }
    if (0 < iVar9) {
      iVar9 = (int)local_140 + 2;
      do {
        local_150 = (longlong *)CONCAT44(local_150._4_4_,iVar7);
        if (local_res20[0] == '\0') {
          iVar8 = iVar7;
        }
        else {
          iVar8 = iVar7 % local_114;
        }
        iVar8 = (int)local_140 + iVar8 * 4;
        local_168._0_4_ = iVar8;
        FUN_180435650(param_1,iVar9 + -2,iVar9 + -1,iVar8 + 1);
        local_168._0_4_ = iVar8 + 1;
        FUN_180435650(param_1,iVar9 + -1,iVar9,iVar8 + 2);
        local_168 = (float *)CONCAT44(local_168._4_4_,iVar8 + 2);
        FUN_180435650(param_1,iVar9,iVar9 + 1,iVar8 + 3);
        iVar7 = iVar7 + 1;
        iVar9 = iVar9 + 4;
      } while ((int)local_150._0_4_ < local_118);
    }
    FUN_180159650(local_110);
  }
}



