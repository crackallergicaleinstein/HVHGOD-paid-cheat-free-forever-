// FUN_18035f700 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18035f700 */

float * FUN_18035f700(float *param_1,float *param_2,undefined8 param_3,undefined8 *param_4)

{
  float fVar1;
  uint uVar2;
  short sVar3;
  undefined1 auVar4 [16];
  float fVar5;
  float fVar6;
  float fVar7;
  undefined1 auVar8 [16];
  float fVar9;
  undefined1 auVar10 [64];
  undefined1 auVar11 [64];
  undefined1 auVar12 [64];
  float fVar13;
  undefined1 auVar14 [64];
  float fVar15;
  float fVar16;
  undefined8 local_138;
  float local_130;
  float local_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  undefined8 local_118;
  float local_108;
  undefined4 local_104;
  undefined4 local_100;
  undefined2 local_f8;
  undefined1 uStack_f6;
  byte bStack_f5;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined2 uStack_e4;
  ushort uStack_e2;
  undefined1 auStack_e0 [16];
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 uStack_c8;
  undefined4 uStack_c0;
  uint uStack_bc;
  
  uVar2 = uStack_bc;
  if (param_4 != (undefined8 *)0x0) {
    uStack_f4 = 0x3f800000;
    uStack_f0 = 0;
    uStack_ec = 0;
    uStack_e8 = 0;
    auStack_e0 = ZEXT816(0);
    local_f8 = 0;
    uStack_f6 = 0;
    uStack_e4 = 0;
    uStack_d0 = 0;
    uStack_cc = 0;
    uStack_bc = uStack_bc & 0xffffff00;
    *param_4 = CONCAT44(0x3f800000,(uint)bStack_f5 << 0x18);
    param_4[1] = 0;
    param_4[2] = (ulonglong)uStack_e2 << 0x30;
    param_4[3] = 0;
    param_4[4] = 0;
    param_4[5] = 0;
    param_4[6] = uStack_c8;
    param_4[7] = CONCAT44(uVar2,uStack_c0) & 0xffffff00ffffffff;
  }
  local_118 = *(ulonglong *)(param_2 + 10);
  local_138 = *(ulonglong *)param_2;
  auVar11 = ZEXT1664(*(undefined1 (*) [16])(param_2 + 6));
  fVar9 = 0.0;
  sVar3 = thunk_FUN_180624430();
  if (sVar3 < 1) {
    sVar3 = thunk_FUN_180624430(local_138._4_4_);
    if ((sVar3 < 1) && (sVar3 = thunk_FUN_180624430(param_2[2]), sVar3 < 1)) {
      local_138 = *(ulonglong *)(param_2 + 3);
      sVar3 = thunk_FUN_180624430(local_138);
      if (sVar3 < 1) {
        sVar3 = thunk_FUN_180624430(local_138._4_4_);
        if (((sVar3 < 1) && (sVar3 = thunk_FUN_180624430(param_2[5]), sVar3 < 1)) &&
           (sVar3 = thunk_FUN_180624430(auVar11._0_8_), sVar3 < 1)) {
          auVar8 = auVar11._0_16_;
          auVar4 = vshufps_avx(auVar8,auVar8,0x55);
          auVar12 = ZEXT1664(auVar4);
          if ((auVar4._0_4_ & 0x7f800000) != 0x7f800000) {
            auVar4 = vshufps_avx(auVar8,auVar8,0xaa);
            auVar14 = ZEXT1664(auVar4);
            if ((auVar4._0_4_ & 0x7f800000) != 0x7f800000) {
              auVar4 = vshufps_avx(auVar8,auVar8,0xff);
              auVar10 = ZEXT1664(auVar4);
              sVar3 = thunk_FUN_180624430(auVar4._0_8_);
              if (sVar3 < 1) {
                fVar7 = (float)local_118;
                sVar3 = thunk_FUN_180624430(local_118 & 0xffffffff);
                if (sVar3 < 1) {
                  fVar5 = local_118._4_4_;
                  sVar3 = thunk_FUN_180624430(local_118._4_4_);
                  if (((sVar3 < 1) && (auVar11._0_4_ < auVar10._0_4_)) &&
                     ((auVar12._0_4_ < fVar7 && (auVar14._0_4_ < fVar5)))) {
                    fVar7 = param_2[0xc];
                    sVar3 = thunk_FUN_180624430(fVar7);
                    if (sVar3 < 1) {
                      fVar5 = param_2[0xd];
                      sVar3 = thunk_FUN_180624430(fVar5);
                      if (((sVar3 < 1) && (fVar9 <= fVar7)) && (fVar9 <= fVar5)) {
                        fVar6 = param_2[0xe];
                        sVar3 = thunk_FUN_180624430(fVar6);
                        if (((sVar3 < 1) && (fVar9 < fVar6)) && (fVar13 = 1.0, fVar6 <= 1.0)) {
                          local_138 = *(ulonglong *)(param_2 + 3);
                          auVar4._8_8_ = 0;
                          auVar4._0_8_ = local_138;
                          auVar4 = vshufps_avx(auVar4,auVar4,0x55);
                          fVar6 = auVar4._0_4_ * 0.015625;
                          fVar16 = (float)local_138 * 0.015625;
                          fVar15 = (param_2[5] - fVar7 * fVar5 * 0.015625) * 0.015625;
                          fVar7 = fVar16 + *param_2 + fVar9;
                          fVar1 = (fVar15 + param_2[2]) - 2.0;
                          auVar12 = ZEXT464((uint)fVar1);
                          fVar5 = fVar6 + param_2[1] + fVar9;
                          auVar11 = ZEXT464((uint)fVar5);
                          if (param_4 != (undefined8 *)0x0) {
                            *(float *)(param_4 + 3) = fVar16;
                            *(float *)((longlong)param_4 + 0x1c) = fVar6;
                            *(float *)(param_4 + 4) = fVar15;
                            *(float *)((longlong)param_4 + 0x24) = fVar7;
                            *(float *)(param_4 + 5) = fVar5;
                            *(float *)((longlong)param_4 + 0x2c) = fVar1;
                          }
                          sVar3 = thunk_FUN_180624430(fVar7);
                          if (((sVar3 < 1) &&
                              (sVar3 = thunk_FUN_180624430(auVar11._0_8_), sVar3 < 1)) &&
                             (sVar3 = thunk_FUN_180624430(auVar12._0_8_), sVar3 < 1)) {
                            local_138 = *(ulonglong *)param_2;
                            local_130 = param_2[2];
                            local_104 = auVar11._0_4_;
                            local_100 = auVar12._0_4_;
                            local_108 = fVar7;
                            FUN_180358500(param_3,&local_128,&local_138,&local_108);
                            if (param_4 == (undefined8 *)0x0) {
LAB_18035fa9b:
                              if (local_118._4_1_ != '\0') {
                                if ((char)local_118 == '\0') {
                                  if (local_118._1_1_ == '\0') {
                                    fVar7 = fStack_124;
                                    sVar3 = thunk_FUN_180624430(fStack_124);
                                    if (((sVar3 < 1) &&
                                        (fVar5 = fStack_120, sVar3 = thunk_FUN_180624430(fStack_120)
                                        , sVar3 < 1)) &&
                                       ((sVar3 = thunk_FUN_180624430(fStack_11c), sVar3 < 1 &&
                                        (sVar3 = thunk_FUN_180624430(local_128), sVar3 < 1)))) {
                                      if (local_128 == fVar13) {
                                        if (param_4 != (undefined8 *)0x0) {
                                          *(undefined1 *)param_4 = 0xd;
                                        }
                                        goto LAB_18035fc3e;
                                      }
                                      if ((fVar9 < local_128) && (local_128 < fVar13)) {
                                        if (param_2[0xe] <= fStack_11c) {
                                          fVar7 = fVar16 * fVar7 + fVar5 * fVar6 +
                                                  fStack_11c * fVar15;
                                          if (fVar7 < fVar9) {
                                            fVar5 = (local_128 * (fVar7 - (fStack_11c + fStack_11c))
                                                    ) / fVar7;
                                            if ((fVar9 < fVar5) && (fVar5 < 4.0)) {
                                              if (param_4 != (undefined8 *)0x0) {
                                                *(undefined1 *)param_4 = 1;
                                                *(float *)(param_4 + 6) = fVar5;
                                                *(float *)((longlong)param_4 + 0x34) =
                                                     -fVar7 / fStack_11c;
                                                *(float *)(param_4 + 7) = -fVar15;
                                                if (*(char *)((longlong)param_4 + 0x3c) == '\0') {
                                                  *(undefined1 *)((longlong)param_4 + 0x3c) = 1;
                                                }
                                              }
                                              *param_1 = fVar5;
                                              param_1[1] = -fVar7 / fStack_11c;
                                              param_1[2] = -fVar15;
                                              *(undefined1 *)(param_1 + 3) = 1;
                                              return param_1;
                                            }
                                            if (param_4 != (undefined8 *)0x0) {
                                              *(undefined1 *)param_4 = 0x11;
                                            }
                                          }
                                          else if (param_4 != (undefined8 *)0x0) {
                                            *(undefined1 *)param_4 = 0x10;
                                          }
                                        }
                                        else if (param_4 != (undefined8 *)0x0) {
                                          *(undefined1 *)param_4 = 0xf;
                                        }
                                        goto LAB_18035fc3e;
                                      }
                                    }
                                    if (param_4 != (undefined8 *)0x0) {
                                      *(undefined1 *)param_4 = 0xe;
                                    }
                                  }
                                  else if (param_4 != (undefined8 *)0x0) {
                                    *(undefined1 *)param_4 = 0xc;
                                  }
                                }
                                else if (param_4 != (undefined8 *)0x0) {
                                  *(undefined1 *)param_4 = 0xb;
                                }
                                goto LAB_18035fc3e;
                              }
                              if (param_4 == (undefined8 *)0x0) goto LAB_18035fc3e;
                            }
                            else {
                              *(undefined1 *)((longlong)param_4 + 1) = 1;
                              *(char *)((longlong)param_4 + 2) = local_118._4_1_;
                              if (local_118._4_1_ != '\0') {
                                *(ulonglong *)((longlong)param_4 + 4) =
                                     CONCAT44(fStack_124,local_128);
                                *(ulonglong *)((longlong)param_4 + 0xc) =
                                     CONCAT44(fStack_11c,fStack_120);
                                *(float *)((longlong)param_4 + 0x14) = (float)local_118;
                                goto LAB_18035fa9b;
                              }
                            }
                            *(undefined1 *)param_4 = 10;
                            goto LAB_18035fc3e;
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
  if (param_4 != (undefined8 *)0x0) {
    *(undefined1 *)param_4 = 9;
  }
LAB_18035fc3e:
  *(undefined1 *)(param_1 + 3) = 0;
  return param_1;
}



