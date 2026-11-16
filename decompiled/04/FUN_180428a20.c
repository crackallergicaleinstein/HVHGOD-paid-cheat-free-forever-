// FUN_180428a20 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180428a20 */

void FUN_180428a20(undefined8 param_1,undefined4 *param_2,undefined4 *param_3,float *param_4,
                  float param_5,float param_6,float param_7,int param_8,int param_9)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  undefined1 auVar7 [64];
  undefined1 auVar8 [64];
  undefined1 auVar9 [64];
  undefined1 auVar10 [64];
  undefined1 auVar11 [64];
  undefined4 uVar12;
  undefined1 auVar13 [64];
  undefined1 auVar14 [64];
  undefined1 auVar15 [64];
  
  iVar4 = 0;
  fVar1 = *param_4;
  fVar2 = param_4[1];
  auVar9 = ZEXT864(0);
  auVar13 = ZEXT864(0);
  auVar14 = ZEXT864(0);
  auVar15 = ZEXT864(0);
  auVar10 = ZEXT864(0);
  auVar11 = ZEXT864(0);
  if (0 < param_8) {
    do {
      fVar5 = ((float)iVar4 / (float)(param_8 + -1)) * 3.1415927;
      auVar7 = ZEXT464((uint)fVar5);
      fVar6 = param_7 * 0.5;
      fVar5 = (float)FUN_180637540(fVar5);
      fVar5 = fVar5 * fVar6;
      fVar6 = (float)FUN_180638e00(auVar7._0_8_);
      fVar6 = fVar6 * param_7 * 0.5;
      fVar3 = (fVar1 - fVar5 * param_6) - fVar6 * param_5;
      auVar7 = ZEXT464((uint)fVar3);
      fVar5 = (fVar2 - fVar5 * -param_5) - fVar6 * param_6;
      auVar8 = ZEXT464((uint)fVar5);
      if (iVar4 == 0) {
        auVar10 = ZEXT1664(ZEXT416((uint)fVar3));
        auVar11 = ZEXT1664(ZEXT416((uint)fVar5));
        auVar9 = ZEXT1664(ZEXT416((uint)fVar3));
        auVar13 = ZEXT1664(ZEXT416((uint)fVar5));
      }
      else {
        FUN_1804283c0(param_1,auVar10._0_8_,auVar11._0_8_,fVar3,fVar5);
        auVar10 = ZEXT1664(auVar7._0_16_);
        auVar11 = ZEXT1664(auVar8._0_16_);
        if (iVar4 == param_8 + -1) {
          auVar14 = ZEXT1664(auVar7._0_16_);
          auVar15 = ZEXT1664(auVar8._0_16_);
        }
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < param_8);
  }
  uVar12 = auVar13._0_4_;
  if (param_9 != 0) {
    FUN_1804283c0(param_1,*param_2,param_2[1],auVar9._0_8_,uVar12);
    FUN_1804283c0(param_1,auVar14._0_8_,auVar15._0_8_,*param_3,param_3[1]);
    uVar12 = auVar13._0_4_;
  }
  *param_2 = auVar9._0_4_;
  param_2[1] = uVar12;
  *param_3 = auVar14._0_4_;
  param_3[1] = auVar15._0_4_;
  return;
}



