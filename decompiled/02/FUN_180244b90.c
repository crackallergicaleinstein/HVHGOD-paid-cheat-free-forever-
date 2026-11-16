// FUN_180244b90 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180244b90 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180244b90(undefined1 (*param_1) [16],undefined8 param_2,undefined8 param_3,
                  undefined8 param_4)

{
  ulonglong *puVar1;
  short sVar2;
  uint *puVar3;
  float fVar4;
  float fVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 extraout_var [56];
  undefined1 extraout_var_00 [56];
  undefined1 auVar8 [64];
  undefined1 auVar9 [64];
  undefined1 auVar10 [64];
  undefined1 auVar11 [64];
  uint uVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [64];
  undefined1 auVar15 [64];
  float fVar16;
  float fVar17;
  undefined1 auStack_138 [32];
  undefined8 local_118;
  undefined1 local_110 [16];
  uint local_f8 [16];
  ulonglong local_b8 [22];
  
  local_b8[0] = DAT_1808d5f00 ^ (ulonglong)auStack_138;
  local_118 = FUN_180244af0(param_2,param_3,0);
  auVar10 = ZEXT464((uint)(float)local_118);
  sVar2 = thunk_FUN_180624430(local_118 & 0xffffffff);
  if (sVar2 < 1) {
    auVar8 = ZEXT464(local_118._4_4_);
    sVar2 = thunk_FUN_180624430(local_118._4_4_);
    if ((sVar2 < 1) && (fVar4 = (float)FUN_180636420(auVar10._0_8_,auVar8._0_8_), 0.02 <= fVar4)) {
      fVar4 = (float)FUN_180636c80(auVar8._0_8_,auVar10._0_8_);
      fVar16 = 180.0;
      fVar17 = 3.1415927;
      auVar8 = ZEXT464(0x43b48000);
      auVar15 = ZEXT1664(_DAT_18086dba0);
      auVar10 = ZEXT464(0x43b40000);
      local_f8[0] = 0x3f800000;
      local_f8[1] = 0;
      local_f8[2] = 0x3f800000;
      local_f8[3] = 0x3f800000;
      local_f8[4] = 0;
      local_f8[5] = 0x3f800000;
      local_f8[6] = 0xbf800000;
      local_f8[7] = 0x3f800000;
      fVar4 = (fVar4 * 180.0) / 3.1415927;
      local_f8[8] = 0xbf800000;
      local_f8[9] = 0;
      local_f8[10] = 0xbf800000;
      local_f8[0xb] = 0xbf800000;
      local_f8[0xc] = 0;
      local_f8[0xd] = 0xbf800000;
      local_f8[0xe] = 0x3f800000;
      local_f8[0xf] = 0xbf800000;
      local_118 = CONCAT44(local_118._4_4_,fVar4);
      *(undefined8 *)*param_1 = 0;
      *(undefined4 *)(*param_1 + 8) = 0;
      (*param_1)[0xc] = 0;
      puVar3 = local_f8 + 1;
      do {
        uVar12 = puVar3[-1];
        auVar10 = ZEXT1664(auVar10._0_16_);
        auVar8 = ZEXT1664(auVar8._0_16_);
        auVar14 = ZEXT464(*puVar3);
        auVar15 = ZEXT1664(auVar15._0_16_);
        fVar5 = (float)FUN_180636c80();
        fVar4 = fVar4 - (fVar5 * fVar16) / fVar17;
        auVar9 = ZEXT464((uint)fVar4);
        sVar2 = thunk_FUN_180624430(fVar4);
        if (sVar2 < 1) {
          auVar9._0_8_ = FUN_180615070(auVar9._0_8_,auVar10._0_8_);
          auVar9._8_56_ = extraout_var;
          auVar6 = auVar9._0_16_;
        }
        else {
          auVar6 = ZEXT816(0);
        }
        auVar9 = ZEXT1664(auVar6);
        fVar4 = auVar6._0_4_ - (float)param_4;
        auVar11 = ZEXT464((uint)fVar4);
        sVar2 = thunk_FUN_180624430(fVar4);
        auVar6 = auVar9._0_16_;
        auVar13 = auVar14._0_16_;
        if (sVar2 < 1) {
          auVar11._0_8_ = FUN_180615070(auVar11._0_8_,auVar10._0_8_);
          auVar6 = auVar9._0_16_;
          auVar13 = auVar14._0_16_;
          auVar11._8_56_ = extraout_var_00;
          auVar7 = auVar11._0_16_;
        }
        else {
          auVar7 = ZEXT416(0);
        }
        fVar4 = (float)(auVar7._0_4_ & auVar15._0_4_);
        if (fVar4 < auVar8._0_4_) {
          auVar8 = ZEXT1664(CONCAT412(auVar7._12_4_ & auVar15._12_4_,
                                      CONCAT48(auVar7._8_4_ & auVar15._8_4_,(ulonglong)(uint)fVar4))
                           );
          local_110[0xc] = 1;
          auVar7._4_12_ = local_110._4_12_;
          auVar7._0_4_ = uVar12;
          auVar13 = vinsertps_avx(auVar7,auVar13,0x10);
          local_110 = vinsertps_avx(auVar13,auVar6,0x20);
          *param_1 = local_110;
        }
        puVar1 = (ulonglong *)(puVar3 + 1);
        puVar3 = puVar3 + 2;
        fVar4 = (float)local_118;
      } while (puVar1 != local_b8);
    }
  }
  *(undefined8 *)*param_1 = 0;
  *(undefined4 *)(*param_1 + 8) = 0;
  (*param_1)[0xc] = 0;
                    /* WARNING: Read-only address (ram,0x00018086dba0) is written */
}



