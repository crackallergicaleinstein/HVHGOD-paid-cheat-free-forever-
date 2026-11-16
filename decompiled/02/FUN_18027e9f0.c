// FUN_18027e9f0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18027e9f0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18027e9f0(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  float *pfVar8;
  longlong lVar9;
  int **ppiVar10;
  int iVar11;
  int **ppiVar12;
  int iVar13;
  int iVar14;
  ulonglong uVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  float fVar20;
  float fVar21;
  undefined1 auVar22 [16];
  float fVar23;
  undefined1 auVar24 [16];
  float fVar25;
  uint uVar26;
  float fVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  undefined1 auStack_1b8 [32];
  undefined1 local_198 [8];
  int *local_190 [2];
  int *local_180;
  int local_178;
  int local_174;
  int local_170;
  int local_16c;
  undefined1 local_168 [16];
  undefined8 local_158;
  float local_148 [20];
  longlong local_f8;
  longlong lStack_f0;
  longlong local_e8;
  ulonglong local_e0;
  
  local_e0 = DAT_1808d5f00 ^ (ulonglong)auStack_1b8;
  iVar19 = *param_2;
  if (0 < iVar19) {
    iVar16 = param_2[1];
    if ((0 < iVar16) &&
       (*(longlong *)(param_2 + 6) - *(longlong *)(param_2 + 4) ==
        (longlong)iVar19 * (longlong)iVar16)) {
      iVar19 = iVar19 + 0x10;
      local_170 = param_2[2] + -8;
      local_16c = param_2[3] + -8;
      local_168 = (undefined1  [16])0x0;
      local_158 = 0;
      local_148[1] = 0.0;
      local_148[2] = 0.0;
      local_148[3] = 0.0;
      local_148[4] = 0.0;
      local_148[5] = 0.0;
      local_148[6] = 0.0;
      local_148[7] = 0.0;
      local_148[8] = 0.0;
      local_148[9] = 0.0;
      local_148[10] = 0.0;
      local_148[0xb] = 0.0;
      local_148[0xc] = 0.0;
      local_148[0xd] = 0.0;
      local_148[0xe] = 0.0;
      local_148[0xf] = 0.0;
      local_148[0x10] = 0.0;
      fVar31 = 0.0;
      fVar25 = 0.0;
      iVar14 = -8;
      pfVar8 = local_148;
      uVar26 = 0x80000000;
      uVar28 = 0;
      uVar29 = 0;
      uVar30 = 0;
      fVar27 = 12.5;
      local_190[0] = param_1;
      local_180 = param_1;
      local_178 = iVar19;
      local_174 = iVar16 + 0x10;
      do {
        auVar24._0_4_ = (float)((uint)(float)(iVar14 * iVar14) ^ uVar26);
        auVar24._4_4_ = uVar28;
        auVar24._8_4_ = uVar29;
        auVar24._12_4_ = uVar30;
        auVar22._0_4_ = auVar24._0_4_ / fVar27;
        auVar22._4_12_ = auVar24._4_12_;
        fVar20 = (float)FUN_180627ae0(auVar22._0_8_);
        *pfVar8 = fVar20;
        fVar25 = fVar25 + fVar20;
        iVar14 = iVar14 + 1;
        pfVar8 = pfVar8 + 1;
      } while (iVar14 < 9);
      pfVar8 = local_148;
      do {
        *pfVar8 = *pfVar8 / fVar25;
        pfVar8 = pfVar8 + 1;
      } while (pfVar8 != local_148 + 0x11);
      uVar15 = (longlong)(iVar16 + 0x10) * (longlong)iVar19;
      local_f8 = 0;
      lStack_f0 = 0;
      local_e8 = 0;
      if (uVar15 != 0) {
        if (0x3fffffffffffffff < uVar15) {
                    /* WARNING: Subroutine does not return */
          FUN_1801136f0();
        }
        lVar4 = uVar15 * 4;
        lVar9 = FUN_18015bca0(lVar4);
        local_f8 = lVar9;
        local_e8 = lVar9 + lVar4;
        FUN_18063ab10(lVar9,0,lVar4);
        iVar19 = local_178;
        lStack_f0 = lVar9 + lVar4;
      }
      iVar16 = 0;
      if (0 < param_2[1]) {
        do {
          if (0 < iVar19) {
            iVar17 = 0;
            iVar14 = -0xf;
            do {
              fVar25 = fVar31;
              if ((-1 < iVar14 + -1) && (iVar14 + -1 < *param_2)) {
                fVar25 = (float)*(byte *)((longlong)(*param_2 * iVar16 + -0x10 + iVar17) +
                                         *(longlong *)(param_2 + 4)) * local_148[0] + fVar31;
              }
              if ((-1 < iVar14) && (iVar14 < *param_2)) {
                fVar25 = fVar25 + (float)*(byte *)((longlong)(*param_2 * iVar16 + iVar14) +
                                                  *(longlong *)(param_2 + 4)) * local_148[1];
              }
              iVar1 = iVar14 + 1;
              if ((-1 < iVar1) && (iVar1 < *param_2)) {
                fVar25 = fVar25 + (float)*(byte *)((longlong)(*param_2 * iVar16 + 1 + iVar14) +
                                                  *(longlong *)(param_2 + 4)) * local_148[2];
              }
              if ((-1 < iVar14 + 2) && (iVar14 + 2 < *param_2)) {
                fVar25 = fVar25 + (float)*(byte *)((longlong)(*param_2 * iVar16 + 2 + iVar14) +
                                                  *(longlong *)(param_2 + 4)) * local_148[3];
              }
              if ((-1 < iVar14 + 3) && (iVar14 + 3 < *param_2)) {
                fVar25 = fVar25 + (float)*(byte *)((longlong)(*param_2 * iVar16 + 3 + iVar14) +
                                                  *(longlong *)(param_2 + 4)) * local_148[4];
              }
              if ((-1 < iVar14 + 4) && (iVar14 + 4 < *param_2)) {
                fVar25 = fVar25 + (float)*(byte *)((longlong)(*param_2 * iVar16 + 4 + iVar14) +
                                                  *(longlong *)(param_2 + 4)) * local_148[5];
              }
              if ((-1 < iVar14 + 5) && (iVar14 + 5 < *param_2)) {
                fVar25 = fVar25 + (float)*(byte *)((longlong)(*param_2 * iVar16 + 5 + iVar14) +
                                                  *(longlong *)(param_2 + 4)) * local_148[6];
              }
              if ((-1 < iVar14 + 6) && (iVar14 + 6 < *param_2)) {
                fVar25 = fVar25 + (float)*(byte *)((longlong)(*param_2 * iVar16 + 6 + iVar14) +
                                                  *(longlong *)(param_2 + 4)) * local_148[7];
              }
              if ((-1 < iVar14 + 7) && (iVar14 + 7 < *param_2)) {
                fVar25 = fVar25 + (float)*(byte *)((longlong)(*param_2 * iVar16 + 7 + iVar14) +
                                                  *(longlong *)(param_2 + 4)) * local_148[8];
              }
              if ((-1 < iVar14 + 8) && (iVar14 + 8 < *param_2)) {
                fVar25 = fVar25 + (float)*(byte *)((longlong)(*param_2 * iVar16 + 8 + iVar14) +
                                                  *(longlong *)(param_2 + 4)) * local_148[9];
              }
              if ((-1 < iVar14 + 9) && (iVar14 + 9 < *param_2)) {
                fVar25 = fVar25 + (float)*(byte *)((longlong)(*param_2 * iVar16 + 9 + iVar14) +
                                                  *(longlong *)(param_2 + 4)) * local_148[10];
              }
              if ((-1 < iVar14 + 10) && (iVar14 + 10 < *param_2)) {
                fVar25 = fVar25 + (float)*(byte *)((longlong)(*param_2 * iVar16 + 10 + iVar14) +
                                                  *(longlong *)(param_2 + 4)) * local_148[0xb];
              }
              if ((-1 < iVar14 + 0xb) && (iVar14 + 0xb < *param_2)) {
                fVar25 = fVar25 + (float)*(byte *)((longlong)(*param_2 * iVar16 + 0xb + iVar14) +
                                                  *(longlong *)(param_2 + 4)) * local_148[0xc];
              }
              if ((-1 < iVar14 + 0xc) && (iVar14 + 0xc < *param_2)) {
                fVar25 = fVar25 + (float)*(byte *)((longlong)(*param_2 * iVar16 + 0xc + iVar14) +
                                                  *(longlong *)(param_2 + 4)) * local_148[0xd];
              }
              if ((-1 < iVar14 + 0xd) && (iVar14 + 0xd < *param_2)) {
                fVar25 = fVar25 + (float)*(byte *)((longlong)(*param_2 * iVar16 + 0xd + iVar14) +
                                                  *(longlong *)(param_2 + 4)) * local_148[0xe];
              }
              if ((-1 < iVar14 + 0xe) && (iVar14 + 0xe < *param_2)) {
                fVar25 = fVar25 + (float)*(byte *)((longlong)(*param_2 * iVar16 + 0xe + iVar14) +
                                                  *(longlong *)(param_2 + 4)) * local_148[0xf];
              }
              iVar13 = iVar14 + 0xf;
              if ((-1 < iVar13) && (iVar13 < *param_2)) {
                fVar25 = fVar25 + (float)*(byte *)((longlong)(*param_2 * iVar16 + iVar13) +
                                                  *(longlong *)(param_2 + 4)) * local_148[0x10];
              }
              *(float *)(local_f8 + (longlong)((iVar16 + 8) * iVar19 + iVar13) * 4) = fVar25;
              iVar17 = iVar17 + 1;
              iVar13 = iVar14 + 0x10;
              iVar19 = local_178;
              iVar14 = iVar1;
            } while (iVar13 < local_178);
          }
          iVar16 = iVar16 + 1;
        } while (iVar16 < param_2[1]);
      }
      fVar25 = local_148[0x10];
      fVar27 = local_148[1];
      fVar20 = local_148[0xf];
      fVar32 = local_148[0xe];
      fVar33 = local_148[0xd];
      fVar34 = local_148[0xc];
      fVar35 = local_148[0xb];
      fVar36 = local_148[10];
      fVar37 = local_148[9];
      FUN_1801acf20(local_168,lStack_f0 - local_f8 >> 2);
      uVar7 = local_158;
      uVar5 = local_168._0_8_;
      if (0 < local_174) {
        iVar19 = -6;
        do {
          iVar16 = 0;
          if (0 < local_178) {
            local_190[0] = (int *)CONCAT44(local_190[0]._4_4_,0x437f0000);
            local_198._0_4_ = fVar31;
            iVar18 = iVar19 + -2;
            iVar14 = iVar19 + -1;
            iVar17 = iVar19 + 1;
            iVar1 = iVar19 + 2;
            iVar13 = iVar19 + 3;
            iVar2 = iVar19 + 6;
            iVar3 = iVar19 + 0xe;
            do {
              fVar23 = fVar31;
              if ((-1 < iVar18) && (iVar18 < local_174)) {
                fVar23 = local_148[0] *
                         *(float *)(local_f8 + (longlong)(iVar18 * local_178 + iVar16) * 4) + fVar31
                ;
              }
              if (iVar14 < 0) {
                if (-1 < iVar19) goto LAB_18027f095;
              }
              else {
                if (iVar14 < local_174) {
                  fVar23 = fVar23 + fVar27 * *(float *)(local_f8 +
                                                       (longlong)(iVar14 * local_178 + iVar16) * 4);
                }
LAB_18027f095:
                if (iVar19 < local_174) {
                  fVar23 = fVar23 + local_148[2] *
                                    *(float *)(local_f8 +
                                              (longlong)(iVar19 * local_178 + iVar16) * 4);
                }
              }
              if ((-1 < iVar17) && (iVar17 < local_174)) {
                fVar23 = fVar23 + local_148[3] *
                                  *(float *)(local_f8 + (longlong)(iVar17 * local_178 + iVar16) * 4)
                ;
              }
              if ((-1 < iVar1) && (iVar1 < local_174)) {
                fVar23 = fVar23 + local_148[4] *
                                  *(float *)(local_f8 + (longlong)(iVar1 * local_178 + iVar16) * 4);
              }
              if ((-1 < iVar13) && (iVar13 < local_174)) {
                fVar23 = fVar23 + local_148[5] *
                                  *(float *)(local_f8 + (longlong)(iVar13 * local_178 + iVar16) * 4)
                ;
              }
              iVar11 = iVar19 + 4;
              if ((-1 < iVar11) && (iVar11 < local_174)) {
                fVar23 = fVar23 + local_148[6] *
                                  *(float *)(local_f8 + (longlong)(iVar11 * local_178 + iVar16) * 4)
                ;
              }
              iVar11 = iVar19 + 5;
              if ((-1 < iVar11) && (iVar11 < local_174)) {
                fVar23 = fVar23 + local_148[7] *
                                  *(float *)(local_f8 + (longlong)(iVar11 * local_178 + iVar16) * 4)
                ;
              }
              if ((-1 < iVar2) && (iVar2 < local_174)) {
                fVar23 = fVar23 + local_148[8] *
                                  *(float *)(local_f8 + (longlong)(iVar2 * local_178 + iVar16) * 4);
              }
              iVar11 = iVar19 + 7;
              if ((-1 < iVar11) && (iVar11 < local_174)) {
                fVar23 = fVar23 + fVar37 * *(float *)(local_f8 +
                                                     (longlong)(iVar11 * local_178 + iVar16) * 4);
              }
              iVar11 = iVar19 + 8;
              if ((-1 < iVar11) && (iVar11 < local_174)) {
                fVar23 = fVar23 + fVar36 * *(float *)(local_f8 +
                                                     (longlong)(iVar11 * local_178 + iVar16) * 4);
              }
              iVar11 = iVar19 + 9;
              if ((-1 < iVar11) && (iVar11 < local_174)) {
                fVar23 = fVar23 + fVar35 * *(float *)(local_f8 +
                                                     (longlong)(iVar11 * local_178 + iVar16) * 4);
              }
              iVar11 = iVar19 + 10;
              if ((-1 < iVar11) && (iVar11 < local_174)) {
                fVar23 = fVar23 + fVar34 * *(float *)(local_f8 +
                                                     (longlong)(iVar11 * local_178 + iVar16) * 4);
              }
              iVar11 = iVar19 + 0xb;
              if ((-1 < iVar11) && (iVar11 < local_174)) {
                fVar23 = fVar23 + fVar33 * *(float *)(local_f8 +
                                                     (longlong)(iVar11 * local_178 + iVar16) * 4);
              }
              iVar11 = iVar19 + 0xc;
              if ((-1 < iVar11) && (iVar11 < local_174)) {
                fVar23 = fVar23 + fVar32 * *(float *)(local_f8 +
                                                     (longlong)(iVar11 * local_178 + iVar16) * 4);
              }
              iVar11 = iVar19 + 0xd;
              if ((-1 < iVar11) && (iVar11 < local_174)) {
                fVar23 = fVar23 + fVar20 * *(float *)(local_f8 +
                                                     (longlong)(iVar11 * local_178 + iVar16) * 4);
              }
              if ((-1 < iVar3) && (iVar3 < local_174)) {
                fVar23 = fVar23 + fVar25 * *(float *)(local_f8 +
                                                     (longlong)(iVar3 * local_178 + iVar16) * 4);
              }
              iVar11 = iVar16 + -8;
              fVar21 = fVar31;
              if ((((-1 < iVar11) && (iVar11 < *param_2)) && (-1 < iVar18)) && (iVar18 < param_2[1])
                 ) {
                fVar21 = (float)*(byte *)((longlong)(*param_2 * iVar18 + iVar11) +
                                         *(longlong *)(param_2 + 4));
              }
              local_198._4_4_ = (fVar23 - fVar21) + (fVar23 - fVar21);
              ppiVar12 = (int **)local_198;
              if (fVar31 <= (float)local_198._4_4_) {
                ppiVar12 = (int **)(local_198 + 4);
              }
              ppiVar10 = local_190;
              if ((float)local_198._4_4_ <= 255.0) {
                ppiVar10 = ppiVar12;
              }
              *(char *)((longlong)(iVar2 * local_178 + iVar16) + local_168._0_8_) =
                   (char)(int)*(float *)ppiVar10;
              iVar16 = iVar16 + 1;
            } while (iVar16 < local_178);
          }
          iVar16 = iVar19 + 7;
          iVar19 = iVar19 + 1;
        } while (iVar16 < local_174);
        param_1 = local_180;
      }
      *param_1 = local_178;
      param_1[1] = local_174;
      param_1[2] = local_170;
      param_1[3] = local_16c;
      local_158 = 0;
      uVar6 = local_168._8_8_;
      local_168 = ZEXT816(0);
      *(undefined8 *)(param_1 + 4) = uVar5;
      *(undefined8 *)(param_1 + 6) = uVar6;
      *(undefined8 *)(param_1 + 8) = uVar7;
      FUN_180159650(&local_f8);
      FUN_180113710(local_168);
    }
  }
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
}



