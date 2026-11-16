// FUN_180237670 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180237670 */

undefined8 * FUN_180237670(undefined8 *param_1,undefined8 *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined8 uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  char cVar36;
  short sVar37;
  undefined1 auVar38 [64];
  undefined1 auVar39 [64];
  float fVar40;
  undefined1 auVar41 [64];
  undefined1 auVar42 [64];
  float fVar43;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  ulonglong local_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined4 uStack_104;
  undefined4 uStack_100;
  
  local_148 = *param_2;
  uStack_140 = param_2[1];
  uStack_138 = param_2[2];
  uStack_130 = param_2[3];
  local_128 = param_2[4];
  local_120 = *(undefined8 *)(param_3 + 4);
  uStack_118 = *(undefined8 *)(param_3 + 6);
  cVar36 = FUN_1802405f0(param_2,param_3,&local_148,&local_120);
  if ((((cVar36 != '\0') && (sVar37 = thunk_FUN_180624430(*param_3), sVar37 < 1)) &&
      (sVar37 = thunk_FUN_180624430(param_3[1]), sVar37 < 1)) &&
     (sVar37 = thunk_FUN_180624430(param_3[2]), sVar37 < 1)) {
    auVar38 = ZEXT464((uint)(float)uStack_140);
    sVar37 = thunk_FUN_180624430(uStack_140 & 0xffffffff);
    if (sVar37 < 1) {
      auVar39 = ZEXT464((uint)uStack_140._4_4_);
      sVar37 = thunk_FUN_180624430(uStack_140._4_4_);
      if (sVar37 < 1) {
        fVar40 = (float)uStack_138;
        sVar37 = thunk_FUN_180624430(uStack_138 & 0xffffffff);
        if (sVar37 < 1) {
          auVar41 = ZEXT464((uint)uStack_138._4_4_);
          sVar37 = thunk_FUN_180624430(uStack_138._4_4_);
          if (sVar37 < 1) {
            auVar42 = ZEXT464((uint)(float)uStack_130);
            sVar37 = thunk_FUN_180624430(uStack_130 & 0xffffffff);
            if (sVar37 < 1) {
              fVar43 = uStack_130._4_4_;
              sVar37 = thunk_FUN_180624430(uStack_130._4_4_);
              if ((sVar37 < 1) && (sVar37 = thunk_FUN_180624430(local_128 & 0xffffffff), sVar37 < 1)
                 ) {
                fVar11 = param_3[2];
                auVar34 = vunpcklps_avx(auVar38._0_16_,auVar39._0_16_);
                auVar35 = vunpcklps_avx(auVar41._0_16_,auVar42._0_16_);
                uStack_104 = auVar35._0_4_;
                uStack_100 = auVar35._4_4_;
                uVar10 = *(undefined8 *)param_3;
                fVar12 = (auVar41._0_4_ + auVar38._0_4_) * 0.5;
                fVar13 = (auVar42._0_4_ + auVar39._0_4_) * 0.5;
                fVar14 = (fVar43 + fVar40) * 0.5;
                fVar16 = fVar14 * local_120._4_4_ - fVar13 * (float)uStack_118;
                fVar17 = fVar12 * (float)uStack_118 - fVar14 * (float)local_120;
                fVar18 = fVar13 * (float)local_120 - fVar12 * local_120._4_4_;
                fVar19 = fVar18 * local_120._4_4_ - fVar17 * (float)uStack_118;
                fVar20 = fVar17 * (float)local_120 - fVar16 * local_120._4_4_;
                fVar15 = uStack_118._4_4_ * 2.0;
                fVar21 = fVar16 * (float)uStack_118 - fVar18 * (float)local_120;
                fVar1 = *param_3;
                fVar2 = param_3[1];
                fVar3 = param_3[2];
                fVar22 = local_120._4_4_ * (float)uStack_138 - (float)uStack_118 * uStack_140._4_4_;
                fVar23 = (float)uStack_118 * (float)uStack_140 -
                         (float)local_120 * (float)uStack_138;
                fVar24 = (float)local_120 * uStack_140._4_4_ - local_120._4_4_ * (float)uStack_140;
                fVar25 = local_120._4_4_ * fVar24 - (float)uStack_118 * fVar23;
                fVar26 = (float)uStack_118 * fVar22 - (float)local_120 * fVar24;
                fVar27 = (float)local_120 * fVar23 - local_120._4_4_ * fVar22;
                fVar4 = *param_3;
                fVar5 = param_3[1];
                fVar6 = param_3[2];
                fVar28 = local_120._4_4_ * uStack_130._4_4_ - (float)uStack_118 * (float)uStack_130;
                fVar29 = (float)uStack_118 * uStack_138._4_4_ - (float)local_120 * uStack_130._4_4_;
                fVar30 = (float)local_120 * (float)uStack_130 - local_120._4_4_ * uStack_138._4_4_;
                fVar31 = (float)uStack_118 * fVar28 - (float)local_120 * fVar30;
                fVar32 = local_120._4_4_ * fVar30 - (float)uStack_118 * fVar29;
                fVar33 = (float)local_120 * fVar29 - local_120._4_4_ * fVar28;
                fVar7 = *param_3;
                fVar8 = param_3[1];
                fVar9 = param_3[2];
                *param_1 = auVar34._0_8_;
                param_1[1] = CONCAT44(uStack_104,fVar40);
                param_1[2] = CONCAT44(fVar43,uStack_100);
                param_1[3] = uVar10;
                param_1[4] = CONCAT44(fVar16 * fVar15 + fVar12 + fVar19 + fVar19 + fVar1,fVar11);
                param_1[5] = CONCAT44(fVar18 * fVar15 + fVar14 + fVar20 + fVar20 + fVar3,
                                      fVar17 * fVar15 + fVar13 + fVar21 + fVar21 + fVar2);
                param_1[6] = CONCAT44(fVar23 * fVar15 + uStack_140._4_4_ + fVar26 + fVar26 + fVar5,
                                      fVar22 * fVar15 + (float)uStack_140 + fVar25 + fVar25 + fVar4)
                ;
                param_1[7] = CONCAT44(fVar28 * fVar15 + uStack_138._4_4_ + fVar32 + fVar32 + fVar7,
                                      fVar24 * fVar15 + (float)uStack_138 + fVar27 + fVar27 + fVar6)
                ;
                auVar34 = vinsertps_avx(ZEXT416((uint)(fVar29 * fVar15 + (float)uStack_130 +
                                                       fVar31 + fVar31 + fVar8)),
                                        ZEXT416((uint)(fVar30 * fVar15 + uStack_130._4_4_ +
                                                       fVar33 + fVar33 + fVar9)),0x10);
                auVar35 = vunpcklps_avx(ZEXT416((uint)-(float)uStack_118),
                                        ZEXT416((uint)uStack_118._4_4_));
                auVar34 = vinsertps_avx(auVar34,ZEXT416((uint)-(float)local_120),0x20);
                auVar34 = vinsertps_avx(auVar34,ZEXT416((uint)-local_120._4_4_),0x30);
                *(undefined1 (*) [16])(param_1 + 8) = auVar34;
                param_1[10] = auVar35._0_8_;
                *(undefined4 *)(param_1 + 0xb) = (undefined4)local_128;
                *(undefined1 *)((longlong)param_1 + 0x5c) = 1;
                return param_1;
              }
            }
          }
        }
      }
    }
  }
  *(undefined1 *)((longlong)param_1 + 0x5c) = 0;
  return param_1;
}



