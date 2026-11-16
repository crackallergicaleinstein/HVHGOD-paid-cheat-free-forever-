// FUN_1804d6c60 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804d6c60 */

undefined8
FUN_1804d6c60(longlong param_1,int *param_2,undefined8 param_3,undefined8 param_4,float param_5,
             float param_6,float param_7,float param_8,float param_9,int param_10)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined1 auVar9 [64];
  undefined1 auVar10 [64];
  
  fVar8 = 0.5;
  fVar6 = (float)param_3;
  fVar7 = (float)param_4;
  fVar2 = (param_5 + param_5 + fVar6 + param_7) * 0.25;
  auVar9 = ZEXT464((uint)fVar2);
  fVar3 = (param_6 + param_6 + fVar7 + param_8) * 0.25;
  auVar10 = ZEXT464((uint)fVar3);
  fVar4 = (fVar6 + param_7) * 0.5 - fVar2;
  fVar5 = (fVar7 + param_8) * 0.5 - fVar3;
  if (param_10 < 0x11) {
    if (fVar5 * fVar5 + fVar4 * fVar4 <= param_9) {
      iVar1 = *param_2;
      if (param_1 != 0) {
        *(float *)(param_1 + (longlong)iVar1 * 8) = param_7;
        *(float *)(param_1 + 4 + (longlong)iVar1 * 8) = param_8;
      }
      *param_2 = iVar1 + 1;
    }
    else {
      FUN_1804d6c60(fVar7 + param_6,fVar6 + param_5,param_3,param_4,(fVar6 + param_5) * 0.5,
                    (fVar7 + param_6) * 0.5,fVar2,fVar3,param_9,param_10 + 1);
      FUN_1804d6c60(param_1,param_2,auVar9._0_8_,auVar10._0_8_,(param_5 + param_7) * fVar8,
                    (param_6 + param_8) * fVar8,param_7,param_8,param_9,param_10 + 1);
    }
  }
  return 1;
}



