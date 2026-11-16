// FUN_1802537c0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802537c0 */

void FUN_1802537c0(undefined8 *param_1,float param_2,float param_3,float param_4,float param_5)

{
  float fVar1;
  float fVar2;
  ulonglong uVar3;
  undefined1 auVar4 [64];
  ulonglong uVar5;
  undefined1 auVar6 [64];
  ulonglong uVar7;
  undefined1 auVar8 [64];
  
  fVar1 = *(float *)*param_1;
  param_2 = param_2 - fVar1;
  auVar4 = ZEXT464((uint)param_2);
  uVar3 = (ulonglong)(uint)param_2;
  param_3 = param_3 - fVar1;
  auVar6 = ZEXT464((uint)param_3);
  uVar5 = (ulonglong)(uint)param_3;
  fVar2 = *(float *)param_1[1];
  param_5 = fVar1 + fVar1 + param_5;
  param_4 = param_4 + fVar1 + fVar1;
  auVar8 = ZEXT464((uint)param_4);
  uVar7 = (ulonglong)(uint)param_4;
  if (0.0 < fVar2) {
    FUN_1804307e0(param_1[2],param_2 - fVar2,param_3 - fVar2,fVar2 + fVar2 + param_4,
                  fVar2 + fVar2 + param_5,*(undefined4 *)param_1[3]);
    uVar3 = auVar4._0_8_;
    uVar5 = auVar6._0_8_;
    uVar7 = auVar8._0_8_;
  }
  FUN_1804307e0(param_1[2],uVar3,uVar5,uVar7,param_5,*(undefined4 *)param_1[4]);
  return;
}



