// FUN_1802d72a0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802d72a0 */

undefined8 FUN_1802d72a0(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  char cVar9;
  float *pfVar10;
  float *pfVar11;
  float *pfVar12;
  float *pfVar13;
  longlong lVar14;
  undefined8 *puVar15;
  float fVar16;
  undefined1 auVar17 [16];
  undefined1 extraout_var [56];
  undefined8 uVar18;
  undefined1 auVar19 [64];
  float fVar20;
  float fVar21;
  uint uVar22;
  float fVar23;
  undefined1 in_ZMM10 [64];
  float fVar24;
  undefined1 in_ZMM11 [64];
  float fVar25;
  uint local_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  float local_e8;
  float local_e4;
  float local_e0;
  float local_dc;
  float local_d8;
  float local_d4 [4];
  float local_c4;
  float local_c0 [18];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  
  fVar25 = 1.0;
  if (1.0 <= *(float *)(param_2 + 0x58) * *(float *)(param_2 + 0x58) +
             *(float *)(param_2 + 0x54) * *(float *)(param_2 + 0x54) +
             *(float *)(param_2 + 0x5c) * *(float *)(param_2 + 0x5c)) {
    puVar15 = (undefined8 *)(param_2 + 0x1074);
    if (0 < *(int *)(param_2 + 0x1394)) {
      auVar19 = ZEXT464(0x7f7fffff);
      uVar18 = auVar19._0_8_;
      puVar1 = puVar15 + (longlong)*(int *)(param_2 + 0x1394) * 5;
      local_128 = 0x7f7fffff;
      if (puVar15 != puVar1) {
        uVar22 = 0x80000000;
        local_68 = in_ZMM10._0_16_;
        local_78 = in_ZMM11._0_16_;
        do {
          iVar4 = *(int *)((longlong)puVar15 + 4);
          if ((-1 < iVar4) && (iVar4 < *(int *)(param_2 + 0x1070))) {
            local_120 = *puVar15;
            uStack_118 = puVar15[1];
            uStack_110 = puVar15[2];
            uStack_108 = puVar15[3];
            local_100 = puVar15[4];
            lVar14 = (longlong)iVar4 * 0x20 + param_2;
            local_f8 = *(undefined8 *)(lVar14 + 0x80);
            uStack_f0 = *(undefined8 *)(lVar14 + 0x88);
            cVar9 = FUN_1802405f0(puVar15,lVar14 + 0x70,&local_120,&local_f8);
            if (cVar9 != '\0') {
              fVar16 = *(float *)(lVar14 + 0x70);
              fVar2 = *(float *)(lVar14 + 0x74);
              fVar3 = *(float *)(lVar14 + 0x78);
              if (fVar25 <= fVar2 * fVar2 + fVar16 * fVar16 + fVar3 * fVar3) {
                if ((float)local_100 <= 0.001) {
                  fVar24 = (float)((uint)(float)local_f8 ^ uVar22);
                  fVar21 = (float)((uint)(float)uStack_f0 ^ uVar22);
                  fVar23 = (float)((uint)local_f8._4_4_ ^ uVar22);
                  fVar16 = *(float *)(param_2 + 0x54) - fVar16;
                  fVar2 = *(float *)(param_2 + 0x58) - fVar2;
                  fVar3 = *(float *)(param_2 + 0x5c) - fVar3;
                  fVar5 = fVar3 * fVar23 - fVar2 * fVar21;
                  fVar6 = fVar2 * fVar24 - fVar16 * fVar23;
                  fVar7 = fVar16 * fVar21 - fVar3 * fVar24;
                  fVar8 = fVar5 * fVar21 - fVar6 * fVar24;
                  fVar20 = uStack_f0._4_4_ + uStack_f0._4_4_;
                  fVar21 = fVar6 * fVar23 - fVar7 * fVar21;
                  fVar23 = fVar7 * fVar24 - fVar5 * fVar23;
                  local_d4[3] = fVar20 * fVar5 + fVar16 + fVar21 + fVar21;
                  local_c4 = fVar20 * fVar7 + fVar2 + fVar8 + fVar8;
                  local_c0[0] = fVar20 * fVar6 + fVar3 + fVar23 + fVar23;
                  pfVar13 = (float *)&uStack_118;
                  if ((float)uStack_118 <= local_d4[3]) {
                    pfVar13 = local_d4 + 3;
                  }
                  pfVar10 = (float *)((longlong)&uStack_110 + 4);
                  if (local_d4[3] <= uStack_110._4_4_) {
                    pfVar10 = pfVar13;
                  }
                  pfVar13 = (float *)((longlong)&uStack_118 + 4);
                  if (uStack_118._4_4_ <= local_c4) {
                    pfVar13 = &local_c4;
                  }
                  pfVar11 = (float *)&uStack_108;
                  if (local_c4 <= (float)uStack_108) {
                    pfVar11 = pfVar13;
                  }
                  pfVar13 = (float *)&uStack_110;
                  if ((float)uStack_110 <= local_c0[0]) {
                    pfVar13 = local_c0;
                  }
                  pfVar12 = (float *)((longlong)&uStack_108 + 4);
                  if (local_c0[0] <= uStack_108._4_4_) {
                    pfVar12 = pfVar13;
                  }
                  fVar16 = (local_c4 - *pfVar11) * (local_c4 - *pfVar11) +
                           (local_d4[3] - *pfVar10) * (local_d4[3] - *pfVar10) +
                           (local_c0[0] - *pfVar12) * (local_c0[0] - *pfVar12);
                  if (fVar16 == 0.0) {
                    auVar17 = SUB6416(ZEXT864(0),0);
                  }
                  else if (fVar16 < 0.0) {
                    auVar19._0_8_ = FUN_18061e150(fVar16);
                    auVar19._8_56_ = extraout_var;
                    auVar17 = auVar19._0_16_;
                  }
                  else {
                    auVar17 = ZEXT416((uint)SQRT(fVar16));
                  }
                }
                else {
                  fVar25 = local_f8._4_4_ * (float)uStack_110 - (float)uStack_f0 * uStack_118._4_4_;
                  local_e4 = (float)uStack_f0 * (float)uStack_118 -
                             (float)local_f8 * (float)uStack_110;
                  local_e8 = uStack_f0._4_4_ * 2.0;
                  local_e0 = (float)local_f8 * uStack_118._4_4_ - local_f8._4_4_ * (float)uStack_118
                  ;
                  fVar2 = (float)uStack_f0 * fVar25 - (float)local_f8 * local_e0;
                  fVar16 = local_f8._4_4_ * local_e0 - (float)uStack_f0 * local_e4;
                  local_dc = (float)local_f8 * local_e4 - local_f8._4_4_ * fVar25;
                  fVar3 = local_f8._4_4_ * uStack_108._4_4_ - (float)uStack_f0 * (float)uStack_108;
                  fVar20 = (float)uStack_f0 * uStack_110._4_4_ - (float)local_f8 * uStack_108._4_4_;
                  local_d8 = (float)local_f8 * (float)uStack_108 - local_f8._4_4_ * uStack_110._4_4_
                  ;
                  fVar5 = local_d8 * local_f8._4_4_ - fVar20 * (float)uStack_f0;
                  fVar6 = (float)uStack_f0 * fVar3 - local_d8 * (float)local_f8;
                  fVar7 = (float)local_f8 * fVar20 - local_f8._4_4_ * fVar3;
                  fVar16 = fVar25 * local_e8 + (float)uStack_118 + fVar16 + fVar16 +
                           *(float *)(lVar14 + 0x70);
                  fVar5 = (fVar3 * local_e8 + uStack_110._4_4_ + fVar5 + fVar5 +
                          *(float *)(lVar14 + 0x70)) - fVar16;
                  fVar2 = local_e8 * local_e4 + uStack_118._4_4_ + fVar2 + fVar2 +
                          *(float *)(lVar14 + 0x74);
                  fVar6 = (fVar20 * local_e8 + (float)uStack_108 + fVar6 + fVar6 +
                          *(float *)(lVar14 + 0x74)) - fVar2;
                  fVar3 = local_e8 * local_e0 + (float)uStack_110 + local_dc + local_dc +
                          *(float *)(lVar14 + 0x78);
                  fVar25 = 1.0;
                  fVar7 = (local_e8 * local_d8 + uStack_108._4_4_ + fVar7 + fVar7 +
                          *(float *)(lVar14 + 0x78)) - fVar3;
                  fVar20 = fVar6 * fVar6 + fVar5 * fVar5 + fVar7 * fVar7;
                  if (fVar20 <= 0.001) {
                    fVar20 = 0.0;
                  }
                  else {
                    local_d4[1] = ((*(float *)(param_2 + 0x58) - fVar2) * fVar6 +
                                   (*(float *)(param_2 + 0x54) - fVar16) * fVar5 +
                                  (*(float *)(param_2 + 0x5c) - fVar3) * fVar7) / fVar20;
                    pfVar13 = local_d4;
                    if (0.0 <= local_d4[1]) {
                      pfVar13 = local_d4 + 1;
                    }
                    local_d4[2] = 1.0;
                    pfVar10 = local_d4 + 2;
                    if (local_d4[1] <= 1.0) {
                      pfVar10 = pfVar13;
                    }
                    local_d4[0] = 0.0;
                    fVar20 = *pfVar10;
                  }
                  fVar16 = *(float *)(param_2 + 0x54) - (fVar5 * fVar20 + fVar16);
                  fVar2 = *(float *)(param_2 + 0x58) - (fVar6 * fVar20 + fVar2);
                  fVar3 = *(float *)(param_2 + 0x5c) - (fVar7 * fVar20 + fVar3);
                  fVar16 = fVar2 * fVar2 + fVar16 * fVar16 + fVar3 * fVar3;
                  if (fVar16 == 0.0) {
                    auVar17 = ZEXT416((uint)(0.0 - (float)local_100));
                  }
                  else if (fVar16 < 0.0) {
                    fVar16 = (float)FUN_18061e150(fVar16);
                    auVar17 = ZEXT416((uint)(fVar16 - (float)local_100));
                  }
                  else {
                    auVar17 = ZEXT416((uint)(SQRT(fVar16) - (float)local_100));
                  }
                }
                auVar17 = vminss_avx(auVar17,ZEXT416(local_128));
                auVar19 = ZEXT1664(auVar17);
                uVar22 = 0x80000000;
                local_128 = auVar17._0_4_;
                goto LAB_1802d78a7;
              }
            }
            auVar19 = ZEXT464(local_128);
          }
LAB_1802d78a7:
          uVar18 = auVar19._0_8_;
          puVar15 = puVar15 + 5;
        } while (puVar15 != puVar1);
      }
      return uVar18;
    }
  }
  return SUB648(ZEXT464(0xbf800000),0);
}



