// FUN_1804b11e0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804b11e0 */

void FUN_1804b11e0(undefined8 param_1,float param_2,float param_3,float *param_4,float *param_5,
                  float *param_6)

{
  float fVar1;
  float fVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  undefined1 auVar6 [64];
  
  if (param_2 == 0.0) {
    *param_6 = param_3;
    *param_5 = param_3;
    *param_4 = param_3;
    return;
  }
  auVar6 = ZEXT464(0x3f800000);
  fVar4 = (float)FUN_180637760(param_1,auVar6._0_8_);
  iVar3 = (int)(fVar4 / 0.16666667);
  fVar2 = fVar4 / 0.16666667 - (float)iVar3;
  fVar5 = auVar6._0_4_;
  fVar4 = (fVar5 - param_2) * param_3;
  fVar1 = (fVar5 - fVar2 * param_2) * param_3;
  fVar2 = (fVar5 - (fVar5 - fVar2) * param_2) * param_3;
  switch(iVar3) {
  case 0:
    *param_4 = param_3;
    *param_5 = fVar2;
    *param_6 = fVar4;
    return;
  case 1:
    *param_4 = fVar1;
    *param_5 = param_3;
    *param_6 = fVar4;
    return;
  case 2:
    *param_4 = fVar4;
    *param_5 = param_3;
    *param_6 = fVar2;
    return;
  case 3:
    *param_4 = fVar4;
    *param_5 = fVar1;
    *param_6 = param_3;
    return;
  case 4:
    *param_4 = fVar2;
    *param_5 = fVar4;
    *param_6 = param_3;
    return;
  default:
    *param_4 = param_3;
    *param_5 = fVar4;
    *param_6 = fVar1;
    return;
  }
}



