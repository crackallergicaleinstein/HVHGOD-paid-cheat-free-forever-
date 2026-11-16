// FUN_1804c8330 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804c8330 */

float * FUN_1804c8330(float *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  longlong lVar4;
  float fVar5;
  float fVar6;
  longlong lVar7;
  float fVar8;
  float fVar9;
  
  lVar7 = DAT_180bb8ae8;
  fVar8 = 0.0;
  lVar4 = **(longlong **)(DAT_180bb8ae8 + 0x2030);
  fVar1 = *(float *)(lVar4 + 0xc);
  fVar5 = fVar1 + *(float *)(lVar4 + 0x14);
  fVar2 = *(float *)(lVar4 + 8);
  fVar6 = fVar2 + *(float *)(lVar4 + 0x10);
  param_1[3] = fVar5;
  param_1[2] = fVar6;
  *param_1 = fVar2;
  param_1[1] = fVar1;
  fVar9 = *(float *)(lVar7 + 0xda8);
  fVar3 = *(float *)(lVar7 + 0xda4);
  if (fVar5 - fVar1 <= fVar9 + fVar9) {
    fVar9 = 0.0;
  }
  else {
    fVar9 = -fVar9;
  }
  if (fVar3 + fVar3 < fVar6 - fVar2) {
    fVar8 = -fVar3;
  }
  *param_1 = fVar2 - fVar8;
  param_1[2] = fVar8 + fVar6;
  param_1[1] = fVar1 - fVar9;
  param_1[3] = fVar9 + param_1[3];
  return param_1;
}



