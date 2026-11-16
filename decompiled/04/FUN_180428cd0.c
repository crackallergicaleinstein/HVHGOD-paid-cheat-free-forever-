// FUN_180428cd0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180428cd0 */

void FUN_180428cd0(undefined8 param_1,undefined4 *param_2,uint *param_3,longlong param_4,
                  float *param_5,float param_6)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined1 auVar4 [64];
  undefined1 auVar5 [64];
  undefined1 auVar6 [64];
  ulonglong uVar7;
  undefined1 auVar8 [64];
  float fVar9;
  ulonglong uVar10;
  undefined1 auVar11 [64];
  float fVar12;
  float fVar13;
  
  fVar3 = *(float *)(param_4 + 0xc);
  param_6 = param_6 * 0.5;
  fVar9 = -*(float *)(param_4 + 8);
  fVar12 = param_5[3];
  fVar13 = -param_5[2];
  if (((uint)param_5[7] & 4) == 0) {
    fVar3 = *param_5 - fVar3 * param_6;
    auVar4 = ZEXT464((uint)fVar3);
    fVar9 = param_5[1] - fVar9 * param_6;
    auVar5 = ZEXT464((uint)(*param_5 - fVar12 * param_6));
    auVar6 = ZEXT464((uint)(param_5[1] - fVar13 * param_6));
    FUN_1804283c0(fVar12 * param_6,fVar3,fVar9,*param_2,param_2[1]);
    FUN_1804283c0(param_1,auVar5._0_8_,auVar6._0_8_,auVar4._0_8_,fVar9);
    auVar4 = ZEXT464((uint)(param_6 * param_5[5] + *param_5));
    fVar3 = param_6 * param_5[6] + param_5[1];
    uVar7 = (ulonglong)*param_3;
    uVar10 = (ulonglong)param_3[1];
  }
  else {
    fVar1 = *param_5 - param_6 * param_5[5];
    auVar5 = ZEXT464((uint)fVar1);
    fVar2 = param_5[1] - param_6 * param_5[6];
    auVar6 = ZEXT464((uint)fVar2);
    FUN_1804283c0(param_5[1],fVar1,fVar2,*param_2,param_2[1]);
    fVar1 = fVar3 * param_6 + *param_5;
    auVar8 = ZEXT464((uint)fVar1);
    fVar9 = fVar9 * param_6 + param_5[1];
    auVar11 = ZEXT464((uint)fVar9);
    fVar3 = fVar13 * param_6 + param_5[1];
    auVar4 = ZEXT464((uint)(fVar12 * param_6 + *param_5));
    FUN_1804283c0(param_1,*param_3,param_3[1],fVar1,fVar9);
    uVar7 = auVar8._0_8_;
    uVar10 = auVar11._0_8_;
  }
  FUN_1804283c0(param_1,uVar7,uVar10,auVar4._0_8_,fVar3);
  *param_3 = auVar4._0_4_;
  param_3[1] = (uint)fVar3;
  *param_2 = auVar5._0_4_;
  param_2[1] = auVar6._0_4_;
  return;
}



