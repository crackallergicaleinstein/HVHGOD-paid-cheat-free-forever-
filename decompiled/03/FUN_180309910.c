// FUN_180309910 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180309910 */

void FUN_180309910(undefined8 *param_1,byte param_2,undefined8 param_3,float *param_4)

{
  float *pfVar1;
  undefined1 auVar2 [16];
  short sVar3;
  float fVar4;
  float fVar5;
  undefined1 auVar6 [64];
  undefined1 auVar7 [64];
  float fVar8;
  float fVar9;
  
  if (*(char *)(param_4 + 3) == '\0') {
    fVar4 = *param_4;
    fVar9 = ((float *)param_1[1])[1];
    fVar5 = *(float *)param_1[1];
    fVar8 = param_4[1];
    fVar9 = fVar9 * fVar9 + fVar5 * fVar5;
    if (fVar9 < 0.0) {
      fVar9 = (float)FUN_18061e150();
    }
    else {
      fVar9 = SQRT(fVar9);
    }
    fVar4 = fVar8 * fVar8 + fVar4 * fVar4;
    if (fVar4 < 0.0) {
      fVar4 = (float)FUN_18061e150();
    }
    else {
      fVar4 = SQRT(fVar4);
    }
    auVar2._12_4_ = 0;
    auVar2._0_12_ = ZEXT812(0);
    auVar6 = ZEXT1264(ZEXT812(0)) << 0x20;
    fVar5 = 0.0;
    auVar2 = vmaxss_avx(ZEXT416((uint)(fVar9 - fVar4)),auVar2 << 0x20);
    fVar4 = auVar2._0_4_ * 0.0005 + ABS(param_4[5] - *(float *)*param_1);
    if (fVar4 < *(float *)param_1[2]) {
      *(float *)param_1[2] = fVar4;
      *(byte *)param_1[3] = (param_2 ^ 1) + 2;
      *(byte *)(param_1[3] + 1) = param_2;
      if (param_2 != 0) {
        sVar3 = thunk_FUN_180624430(param_3);
        fVar5 = auVar6._0_4_;
        if (sVar3 < 1) {
          fVar4 = 180.0;
          auVar7 = ZEXT464(0x43b40000);
          fVar5 = (float)FUN_180637760((float)param_3 + 180.0,auVar7._0_8_);
          if (fVar5 < auVar6._0_4_) {
            fVar5 = fVar5 + auVar7._0_4_;
          }
          fVar5 = fVar5 - fVar4;
        }
      }
      *(float *)(param_1[3] + 4) = fVar5;
      *(float *)(param_1[3] + 0x14) = param_4[4];
      *(float *)(param_1[3] + 0x18) = param_4[5];
      pfVar1 = (float *)param_1[4];
      *(float *)(param_1[3] + 8) =
           param_4[2] - (pfVar1[10] - (1.0 - pfVar1[7]) * pfVar1[1] * *pfVar1);
    }
  }
  return;
}



