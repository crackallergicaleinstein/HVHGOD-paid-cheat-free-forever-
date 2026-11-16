// FUN_1804b07c0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804b07c0 */

undefined1 FUN_1804b07c0(float *param_1,float *param_2,float *param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  bool bVar9;
  undefined1 uVar10;
  
  fVar1 = param_3[1];
  fVar2 = *param_3;
  fVar3 = *param_4;
  fVar4 = param_1[1];
  fVar5 = *param_1;
  fVar6 = *param_2;
  fVar7 = param_4[1];
  fVar8 = param_2[1];
  bVar9 = (fVar3 - fVar2) * (fVar8 - fVar1) - (fVar6 - fVar2) * (fVar7 - fVar1) < 0.0;
  if (((fVar3 - fVar6) * (fVar4 - fVar8) - (fVar5 - fVar6) * (fVar7 - fVar8) < 0.0 == bVar9) &&
     (bVar9 == (fVar1 - fVar4) * (fVar3 - fVar5) - (fVar2 - fVar5) * (fVar7 - fVar4) < 0.0)) {
    uVar10 = 1;
  }
  else {
    uVar10 = 0;
  }
  return uVar10;
}



