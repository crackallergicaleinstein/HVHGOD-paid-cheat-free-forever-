// FUN_1803ea090 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1803ea090 */

float * FUN_1803ea090(float *param_1,ulonglong *param_2,ulonglong *param_3,undefined8 param_4,
                     float param_5,float param_6)

{
  ulonglong uVar1;
  char cVar2;
  undefined1 uVar3;
  short sVar4;
  float fVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined4 uStack_b4;
  float local_a8;
  float local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  float local_90;
  float local_8c;
  float local_88;
  
  cVar2 = FUN_180218e30(param_3);
  if (cVar2 != '\0') {
    uVar1 = *param_2;
    sVar4 = thunk_FUN_180624430(uVar1);
    if (sVar4 < 1) {
      uStack_b4 = (undefined4)(uVar1 >> 0x20);
      sVar4 = thunk_FUN_180624430(uStack_b4);
      if ((sVar4 < 1) && (sVar4 = thunk_FUN_180624430((int)param_2[1]), sVar4 < 1)) {
        sVar4 = thunk_FUN_180624430(param_4);
        fVar5 = (float)param_4;
        if ((sVar4 < 1) &&
           ((((5.0 <= fVar5 && (fVar5 <= 160.0)) && (16.0 <= param_5)) && (16.0 <= param_6)))) {
          auVar6._8_8_ = 0;
          auVar6._0_8_ = *param_2;
          auVar7._8_8_ = 0;
          auVar7._0_8_ = *param_3;
          auVar6 = vshufps_avx(auVar6,auVar6,0x55);
          fVar9 = (float)*param_2 - (float)*param_3;
          auVar7 = vshufps_avx(auVar7,auVar7,0x55);
          fVar8 = auVar6._0_4_ - auVar7._0_4_;
          fVar10 = *(float *)(param_2 + 1) - *(float *)(param_3 + 1);
          FUN_180386560(param_3,&local_a8);
          fVar11 = fVar8 * local_a4 + fVar9 * local_a8 + fVar10 * local_a0;
          fVar12 = fVar8 * local_98 + fVar9 * local_9c + fVar10 * local_94;
          fVar9 = fVar8 * local_8c + fVar9 * local_90 + fVar10 * local_88;
          if (0.1 <= fVar11) {
            fVar5 = (float)FUN_180639470(fVar5 * 0.008726646);
            fVar5 = fVar5 * (fVar11 + fVar11);
            fVar11 = 0.5 - ((fVar12 * param_6) / param_5) / fVar5;
            fVar5 = ((0.5 - fVar9 / fVar5) * param_6 - 4.0) / (param_6 - 4.0);
            *param_1 = fVar11;
            param_1[1] = fVar5;
            sVar4 = thunk_FUN_180624430(fVar5 + fVar11);
            if (((0 < sVar4) || (fVar11 <= -0.5)) ||
               ((1.5 <= fVar11 || ((fVar5 <= -0.5 || (1.5 <= fVar5)))))) {
              uVar3 = 0;
            }
            else {
              uVar3 = 1;
            }
          }
          else {
            uVar3 = 0;
            param_1[0] = 0.0;
            param_1[1] = 0.0;
          }
          goto LAB_1803ea24d;
        }
      }
    }
  }
  uVar3 = 0;
  param_1[0] = 0.0;
  param_1[1] = 0.0;
LAB_1803ea24d:
  *(undefined1 *)(param_1 + 2) = uVar3;
  return param_1;
}



