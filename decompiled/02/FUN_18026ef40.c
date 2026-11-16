// FUN_18026ef40 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18026ef40 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18026ef40(float *param_1,float *param_2,float *param_3,longlong *param_4,undefined8 param_5
                  ,undefined4 param_6,undefined1 (*param_7) [16],undefined1 param_8)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  char cVar4;
  short sVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  int *piVar8;
  int iVar9;
  undefined8 uVar10;
  undefined1 extraout_var [56];
  undefined1 auVar11 [64];
  undefined1 auVar12 [16];
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined1 auVar17 [16];
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined1 auStack_288 [32];
  float *local_268;
  float *local_260;
  undefined4 local_258;
  longlong local_250;
  undefined1 (*local_248) [16];
  float local_238;
  float local_234;
  float local_230;
  float local_22c;
  undefined1 local_228 [8];
  float fStack_220;
  float fStack_21c;
  undefined4 local_218;
  undefined4 local_214;
  float local_210;
  float local_20c;
  float local_208;
  undefined1 local_1f8 [12];
  undefined1 local_1ec [12];
  float local_1e0;
  float local_1dc;
  float local_1d8;
  undefined1 local_1c8 [12];
  undefined1 local_1bc [12];
  undefined1 local_1b0 [16];
  float local_1a0;
  char local_19c;
  undefined1 local_198 [16];
  undefined4 local_188 [2];
  undefined1 local_180;
  undefined4 local_17c;
  char local_178;
  float local_168;
  float local_164;
  float local_160;
  float local_15c;
  float local_158;
  float local_154;
  float local_150;
  float local_14c;
  float local_148;
  float local_144;
  longlong local_140;
  undefined4 local_138;
  float local_134;
  undefined1 local_130;
  undefined8 local_128;
  longlong local_120;
  longlong lStack_118;
  longlong lStack_110;
  longlong lStack_108;
  longlong local_100;
  longlong lStack_f8;
  char local_f0;
  ulonglong local_e8;
  
  auVar17 = _local_228;
  local_e8 = DAT_1808d5f00 ^ (ulonglong)auStack_288;
  _local_228 = ZEXT812(0xffffffffffffffff) << 0x20;
  fStack_21c._1_3_ = auVar17._13_3_;
  fStack_21c._0_1_ = 0;
  auVar11 = ZEXT864(0);
  auVar17._12_4_ = 0;
  auVar17._0_12_ = local_228._4_12_;
  _local_228 = auVar17 << 0x20;
  *param_7 = _local_228;
  *(undefined4 *)param_7[1] = 0;
  plVar3 = (longlong *)param_4[0x6a];
  iVar9 = -1;
  if ((((plVar3 != (longlong *)0x0) && ((char)plVar3[0x477] != '\0')) && (*plVar3 == *param_4)) &&
     (*(int *)((longlong)plVar3 + 0x36c) - 1U < 0x80)) {
    fVar22 = *param_2;
    sVar5 = thunk_FUN_180624430(fVar22);
    if (sVar5 < 1) {
      fVar23 = param_2[1];
      sVar5 = thunk_FUN_180624430(fVar23);
      if (sVar5 < 1) {
        fVar24 = param_2[2];
        sVar5 = thunk_FUN_180624430(fVar24);
        if (sVar5 < 1) {
          fVar15 = *param_3;
          sVar5 = thunk_FUN_180624430(fVar15);
          if (sVar5 < 1) {
            fVar13 = param_3[1];
            sVar5 = thunk_FUN_180624430(fVar13);
            if (sVar5 < 1) {
              fVar18 = param_3[2];
              sVar5 = thunk_FUN_180624430(fVar18);
              if (sVar5 < 1) {
                local_234 = fVar15 - fVar22;
                local_230 = fVar13 - fVar23;
                local_22c = fVar18 - fVar24;
                if (1e-06 < local_230 * local_230 + local_234 * local_234 + local_22c * local_22c) {
                  FUN_180450e30(&local_234);
                  fVar22 = param_1[3];
                  fVar23 = fVar22 * local_234;
                  fVar24 = fVar22 * local_230;
                  fVar22 = fVar22 * local_22c;
                  fVar15 = 1.0;
                  piVar8 = (int *)((longlong)param_4 + 0x2c);
                  piVar1 = piVar8 + (longlong)*(int *)((longlong)param_4 + 0x34c) * 10;
                  if (piVar8 != piVar1) {
                    fVar13 = 0.001;
                    local_210 = fVar23;
                    local_20c = fVar24;
                    local_208 = fVar22;
                    do {
                      iVar2 = piVar8[1];
                      if ((-1 < iVar2) && (iVar2 < *(int *)(param_4[0x6a] + 0x36c))) {
                        FUN_180237670(local_1f8,piVar8,
                                      (longlong)iVar2 * 0x20 + param_4[0x6a] + 0x370);
                        local_238 = auVar11._0_4_;
                        if (local_19c != '\0') {
                          if (local_1a0 <= fVar13) {
                            uVar10 = FUN_180451010(local_1b0,local_198,&local_210);
                            local_234 = *param_2 - local_1e0;
                            local_230 = param_2[1] - local_1dc;
                            local_22c = param_2[2] - local_1d8;
                            uVar7 = FUN_180451010(local_1b0,local_228,&local_234);
                            local_268 = &local_238;
                            cVar4 = FUN_180241ba0(uVar7,uVar10,local_1f8,local_1ec);
                          }
                          else {
                            local_260 = &local_238;
                            local_268 = (float *)CONCAT44(local_268._4_4_,local_1a0);
                            cVar4 = FUN_180241590(param_2,&local_210,local_1c8,local_1bc);
                          }
                          if (((cVar4 != '\0') &&
                              (fVar18 = local_238, sVar5 = thunk_FUN_180624430(local_238), sVar5 < 1
                              )) && ((auVar11._0_4_ <= fVar18 && (fVar18 < fVar15)))) {
                            iVar9 = *piVar8;
                            fVar15 = fVar18;
                          }
                        }
                      }
                      piVar8 = piVar8 + 10;
                    } while (piVar8 != piVar1);
                    if (-1 < iVar9) {
                      fVar13 = *param_2;
                      fVar18 = param_2[1];
                      fVar19 = param_2[2];
                      fVar20 = fVar23 * fVar15 + fVar13;
                      fVar21 = fVar24 * fVar15 + fVar18;
                      fVar22 = fVar22 * fVar15 + fVar19;
                      fVar16 = (fVar21 - fVar18) * (fVar21 - fVar18) +
                               (fVar20 - fVar13) * (fVar20 - fVar13) +
                               (fVar22 - fVar19) * (fVar22 - fVar19);
                      if (fVar16 == auVar11._0_4_) {
                        auVar17 = auVar11._0_16_;
                      }
                      else if (fVar16 < 0.0) {
                        auVar11._0_8_ = FUN_18061e150(fVar16);
                        auVar11._8_56_ = extraout_var;
                        auVar17 = auVar11._0_16_;
                      }
                      else {
                        auVar17 = ZEXT416((uint)SQRT(fVar16));
                      }
                      local_154 = local_208;
                      fVar16 = param_1[2];
                      local_138 = 0x3f800000;
                      auVar12._0_4_ = auVar17._0_4_ / 500.0;
                      auVar12._4_12_ = auVar17._4_12_;
                      local_140 = (longlong)iVar9;
                      fVar14 = *param_1;
                      local_168 = fVar13;
                      local_164 = fVar18;
                      local_160 = fVar19;
                      local_15c = fVar23;
                      local_158 = fVar24;
                      local_150 = fVar20;
                      local_14c = fVar21;
                      local_148 = fVar22;
                      local_144 = fVar15;
                      local_134 = (float)FUN_180637bd0(fVar16,auVar12._0_8_);
                      local_134 = local_134 * fVar14;
                      local_120 = param_4[0x6b];
                      lStack_118 = param_4[0x6c];
                      lStack_110 = param_4[0x6d];
                      lStack_108 = param_4[0x6e];
                      local_100 = param_4[0x6f];
                      lStack_f8 = param_4[0x70];
                      local_130 = param_8;
                      local_128 = param_5;
                      fStack_220 = param_1[3];
                      local_228._4_4_ = param_1[1];
                      local_228._0_4_ = fVar14;
                      fStack_21c = fVar16;
                      local_f0 = '\0';
                      local_218 = 4;
                      local_214 = param_6;
                      uVar10 = FUN_180279f10(local_188,local_228,&local_168,&local_128);
                      if ((local_178 != '\0') && (local_f0 == '\0')) {
                        *(int *)(*param_7 + 4) = iVar9;
                        uVar6 = FUN_1803db3f0(uVar10,iVar9);
                        (*param_7)[0xc] = local_180;
                        *(undefined4 *)param_7[1] = local_17c;
                        local_250 = (longlong)param_4 + 0x14;
                        *(undefined4 *)*param_7 = local_188[0];
                        *(undefined4 *)(*param_7 + 8) = uVar6;
                        local_258 = (undefined4)param_4[5];
                        local_248 = param_7;
                        local_260 = (float *)CONCAT44(local_260._4_4_,
                                                      *(undefined4 *)((longlong)param_4 + 0x24));
                        local_268 = (float *)CONCAT44(local_268._4_4_,
                                                      *(undefined4 *)((longlong)param_4 + 0xc));
                        FUN_18026fca0(local_250,uVar6,(int)param_4[1],(char)param_4[2]);
                        thunk_FUN_180624430(*(undefined4 *)*param_7);
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
}



