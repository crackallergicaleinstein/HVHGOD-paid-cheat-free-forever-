// FUN_180365b80 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180365b80 */

bool FUN_180365b80(int param_1,char *param_2,int param_3,char *param_4,char param_5)

{
  undefined8 uVar1;
  short sVar2;
  float fVar3;
  float fVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  float local_38;
  float local_28;
  undefined4 uStack_24;
  
  if (((param_1 != 0) && (*param_2 != '\0')) && (*param_4 != '\0')) {
    uVar1 = *(undefined8 *)(param_2 + 4);
    sVar2 = thunk_FUN_180624430(uVar1);
    if (sVar2 < 1) {
      uStack_24 = (undefined4)((ulonglong)uVar1 >> 0x20);
      sVar2 = thunk_FUN_180624430(uStack_24);
      if ((sVar2 < 1) && (sVar2 = thunk_FUN_180624430(*(undefined4 *)(param_2 + 0xc)), sVar2 < 1)) {
        uVar1 = *(undefined8 *)(param_4 + 4);
        sVar2 = thunk_FUN_180624430(uVar1);
        if (sVar2 < 1) {
          uStack_24 = (undefined4)((ulonglong)uVar1 >> 0x20);
          sVar2 = thunk_FUN_180624430(uStack_24);
          if ((sVar2 < 1) &&
             (sVar2 = thunk_FUN_180624430(*(undefined4 *)(param_4 + 0xc)), sVar2 < 1)) {
            if (param_1 == 2) {
              if (param_3 == 2) {
                auVar5._8_8_ = 0;
                auVar5._0_8_ = *(ulonglong *)(param_2 + 4);
                auVar7._8_8_ = 0;
                auVar7._0_8_ = *(ulonglong *)(param_4 + 4);
                auVar6 = vshufps_avx(auVar5,auVar5,0x55);
                local_38 = (float)*(ulonglong *)(param_2 + 4);
                auVar8 = vshufps_avx(auVar7,auVar7,0x55);
                local_28 = (float)*(ulonglong *)(param_4 + 4);
                return auVar8._0_4_ * auVar8._0_4_ + local_28 * local_28 +
                       *(float *)(param_4 + 0xc) * *(float *)(param_4 + 0xc) <
                       auVar6._0_4_ * auVar6._0_4_ + local_38 * local_38 +
                       *(float *)(param_2 + 0xc) * *(float *)(param_2 + 0xc);
              }
              if ((0.0 < *(float *)(param_2 + 0xc)) &&
                 (*(float *)(param_4 + 0xc) < *(float *)(param_2 + 0xc))) {
                return true;
              }
            }
            else {
              if (((param_5 != '\0') && (param_2[1] != '\0')) && (param_4[1] != '\0')) {
                fVar3 = (float)FUN_180636420(*(undefined4 *)(param_2 + 4),
                                             *(undefined4 *)(param_2 + 8));
                fVar4 = (float)FUN_180636420(*(undefined4 *)(param_4 + 4),
                                             *(undefined4 *)(param_4 + 8));
                return fVar4 + 1.0 <= fVar3;
              }
              auVar6._8_8_ = 0;
              auVar6._0_8_ = *(ulonglong *)(param_2 + 4);
              auVar8._8_8_ = 0;
              auVar8._0_8_ = *(ulonglong *)(param_4 + 4);
              auVar6 = vshufps_avx(auVar6,auVar6,0x55);
              local_28 = (float)*(ulonglong *)(param_2 + 4);
              local_38 = (float)*(ulonglong *)(param_4 + 4);
              auVar8 = vshufps_avx(auVar8,auVar8,0x55);
              if (auVar8._0_4_ * auVar8._0_4_ + local_38 * local_38 <=
                  auVar6._0_4_ * auVar6._0_4_ + local_28 * local_28) {
                if (param_1 == param_3) {
                  fVar3 = (float)FUN_180636420(*(undefined4 *)(param_2 + 4),
                                               *(undefined4 *)(param_2 + 8));
                  fVar4 = (float)FUN_180636420(*(undefined4 *)(param_4 + 4),
                                               *(undefined4 *)(param_4 + 8));
                  return fVar4 + 0.01 < fVar3;
                }
                return param_3 <= param_1;
              }
            }
          }
        }
      }
    }
  }
  return false;
}



