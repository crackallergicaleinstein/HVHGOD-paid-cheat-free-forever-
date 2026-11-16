// FUN_180364770 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180364770 */

float * FUN_180364770(float *param_1,float *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  char cVar3;
  short sVar4;
  float fVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [64];
  float fVar9;
  undefined1 auVar10 [64];
  float fVar11;
  float fVar12;
  undefined1 auVar13 [64];
  undefined1 auVar14 [64];
  float fVar15;
  float fVar16;
  float fVar17;
  undefined4 local_208;
  undefined4 uStack_204;
  float local_1e8;
  undefined4 local_1e4;
  undefined4 local_1e0;
  undefined4 local_1dc;
  undefined4 local_1d8;
  float local_1d4;
  undefined8 local_1d0;
  undefined4 local_1c8;
  undefined4 uStack_1c4;
  float local_1c0;
  float fStack_1bc;
  undefined1 local_1b8 [144];
  uint local_128;
  uint local_124;
  float local_120;
  float local_10c;
  char local_fd;
  
  uVar1 = *(undefined8 *)param_2;
  auVar8 = ZEXT1664(*(undefined1 (*) [16])(param_2 + 6));
  local_1c0 = (float)*(undefined8 *)(param_2 + 10);
  fStack_1bc = (float)((ulonglong)*(undefined8 *)(param_2 + 10) >> 0x20);
  sVar4 = thunk_FUN_180624430(uVar1);
  if (sVar4 < 1) {
    uStack_204 = (undefined4)((ulonglong)uVar1 >> 0x20);
    sVar4 = thunk_FUN_180624430(uStack_204);
    if ((sVar4 < 1) && (sVar4 = thunk_FUN_180624430(param_2[2]), sVar4 < 1)) {
      uVar1 = *(undefined8 *)(param_2 + 3);
      sVar4 = thunk_FUN_180624430(uVar1);
      if (sVar4 < 1) {
        uStack_204 = (undefined4)((ulonglong)uVar1 >> 0x20);
        sVar4 = thunk_FUN_180624430(uStack_204);
        if (((sVar4 < 1) && (sVar4 = thunk_FUN_180624430(param_2[5]), sVar4 < 1)) &&
           (sVar4 = thunk_FUN_180624430(auVar8._0_8_), sVar4 < 1)) {
          auVar7 = auVar8._0_16_;
          auVar6 = vshufps_avx(auVar7,auVar7,0x55);
          auVar13 = ZEXT1664(auVar6);
          if ((auVar6._0_4_ & 0x7f800000) != 0x7f800000) {
            auVar6 = vshufps_avx(auVar7,auVar7,0xaa);
            auVar14 = ZEXT1664(auVar6);
            if ((auVar6._0_4_ & 0x7f800000) != 0x7f800000) {
              auVar6 = vshufps_avx(auVar7,auVar7,0xff);
              auVar10 = ZEXT1664(auVar6);
              sVar4 = thunk_FUN_180624430(auVar6._0_8_);
              if ((((sVar4 < 1) &&
                   (fVar11 = local_1c0, sVar4 = thunk_FUN_180624430(local_1c0), sVar4 < 1)) &&
                  ((fVar5 = fStack_1bc, sVar4 = thunk_FUN_180624430(fStack_1bc), sVar4 < 1 &&
                   ((auVar8._0_4_ < auVar10._0_4_ && (auVar13._0_4_ < fVar11)))))) &&
                 (auVar14._0_4_ < fVar5)) {
                fVar11 = param_2[0xc];
                sVar4 = thunk_FUN_180624430(fVar11);
                if (sVar4 < 1) {
                  fVar5 = param_2[0xd];
                  sVar4 = thunk_FUN_180624430(fVar5);
                  if (((sVar4 < 1) && (fVar9 = 0.0, 0.0 <= fVar11)) && (0.0 <= fVar5)) {
                    fVar12 = param_2[0xe];
                    sVar4 = thunk_FUN_180624430(fVar12);
                    if (((sVar4 < 1) && (fVar9 < fVar12)) && (fVar15 = 1.0, fVar12 <= 1.0)) {
                      auVar6._8_8_ = 0;
                      auVar6._0_8_ = *(ulonglong *)(param_2 + 3);
                      auVar6 = vshufps_avx(auVar6,auVar6,0x55);
                      fVar17 = auVar6._0_4_ * 0.015625;
                      fVar16 = (float)*(ulonglong *)(param_2 + 3) * 0.015625;
                      fVar12 = fVar16 + *param_2 + fVar9;
                      auVar13 = ZEXT464((uint)(fVar17 + param_2[1] + fVar9));
                      fVar11 = (param_2[5] - fVar11 * fVar5 * 0.015625) * 0.015625;
                      auVar8 = ZEXT464((uint)((fVar11 + param_2[2]) - 2.0));
                      sVar4 = thunk_FUN_180624430(fVar12);
                      if (((sVar4 < 1) && (sVar4 = thunk_FUN_180624430(auVar13._0_8_), sVar4 < 1))
                         && (sVar4 = thunk_FUN_180624430(auVar8._0_8_), sVar4 < 1)) {
                        uVar1 = *(undefined8 *)param_2;
                        fVar5 = param_2[2];
                        cVar3 = FUN_180303860(1);
                        if (cVar3 == '\0') {
                          *(undefined1 *)*param_3 = 1;
                        }
                        else {
                          lVar2 = param_3[1];
                          uStack_204 = (undefined4)((ulonglong)uVar1 >> 0x20);
                          local_1c8 = *(undefined4 *)(lVar2 + 0x20);
                          local_1d0 = *(undefined8 *)(lVar2 + 0x18);
                          fStack_1bc = *(float *)(lVar2 + 0x2c);
                          uStack_1c4 = (undefined4)*(undefined8 *)(lVar2 + 0x24);
                          local_1c0 = (float)((ulonglong)*(undefined8 *)(lVar2 + 0x24) >> 0x20);
                          local_208 = (undefined4)uVar1;
                          local_1e4 = auVar13._0_4_;
                          local_1e0 = auVar8._0_4_;
                          local_1dc = local_208;
                          local_1d8 = uStack_204;
                          local_1e8 = fVar12;
                          local_1d4 = fVar5;
                          FUN_180419610(lVar2,local_1b8,&local_1dc,&local_1e8,&local_1d0,
                                        lVar2 + 0x30);
                          fVar5 = *(float *)(param_3[3] + 0x38);
                          sVar4 = thunk_FUN_180624430(fVar5);
                          if ((sVar4 < 1) && (fVar5 <= local_120)) {
                            auVar6 = vinsertps_avx(ZEXT416((uint)local_10c),ZEXT416(local_128),0x10)
                            ;
                            auVar6 = vinsertps_avx(auVar6,ZEXT416(local_124),0x20);
                            auVar6 = vinsertps_avx(auVar6,ZEXT416((uint)local_120),0x30);
                            auVar8 = ZEXT1664(auVar6);
                            if ((fVar9 < local_10c) && (local_fd == '\0')) {
                              auVar6 = vshufps_avx(auVar6,auVar6,0x55);
                              auVar13 = ZEXT1664(auVar6);
                              sVar4 = thunk_FUN_180624430(auVar6._0_8_);
                              if (sVar4 < 1) {
                                auVar6 = vshufps_avx(auVar8._0_16_,auVar8._0_16_,0xaa);
                                auVar14 = ZEXT1664(auVar6);
                                sVar4 = thunk_FUN_180624430(auVar6._0_8_);
                                if (sVar4 < 1) {
                                  auVar6 = vshufps_avx(auVar8._0_16_,auVar8._0_16_,0xff);
                                  auVar10 = ZEXT1664(auVar6);
                                  sVar4 = thunk_FUN_180624430(auVar6._0_8_);
                                  if (((((sVar4 < 1) &&
                                        (sVar4 = thunk_FUN_180624430(auVar8._0_8_), sVar4 < 1)) &&
                                       (fVar5 = auVar8._0_4_, fVar5 != fVar15)) &&
                                      ((fVar9 < fVar5 && (fVar5 < fVar15)))) &&
                                     (fVar12 = auVar10._0_4_, param_2[0xe] <= fVar12)) {
                                    fVar15 = auVar14._0_4_ * fVar17 + fVar16 * auVar13._0_4_ +
                                             fVar12 * fVar11;
                                    if (((fVar15 < fVar9) &&
                                        (fVar5 = (fVar5 * (fVar15 - (fVar12 + fVar12))) / fVar15,
                                        fVar9 < fVar5)) && (fVar5 < 4.0)) {
                                      *param_1 = fVar5;
                                      param_1[1] = -fVar15 / fVar12;
                                      param_1[2] = -fVar11;
                                      *(undefined1 *)(param_1 + 3) = 1;
                                      return param_1;
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
            }
          }
        }
      }
    }
  }
  *(undefined1 *)(param_1 + 3) = 0;
  return param_1;
}



