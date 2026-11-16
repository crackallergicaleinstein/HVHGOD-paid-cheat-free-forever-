// FUN_1802fea20 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802fea20 */

void FUN_1802fea20(undefined8 *param_1,float param_2,int param_3)

{
  undefined8 *puVar1;
  float *pfVar2;
  float *pfVar3;
  int *piVar4;
  bool bVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined1 auVar11 [64];
  float fVar12;
  uint uVar13;
  
  auVar11 = ZEXT464((uint)(param_2 * 0.017453292));
  puVar1 = (undefined8 *)*param_1;
  fVar6 = (float)FUN_180637540(param_2 * 0.017453292);
  fVar7 = (float)FUN_180638e00(auVar11._0_8_);
  fVar9 = 0.0;
  if (0.0 < *(float *)puVar1[1] - (fVar7 * ((float *)*puVar1)[1] + fVar6 * *(float *)*puVar1)) {
    fVar9 = 0.0;
    fVar8 = (float)FUN_1806156a0(*(undefined4 *)puVar1[3]);
    fVar10 = fVar7 * fVar8 + ((float *)*puVar1)[1];
    fVar8 = fVar6 * fVar8 + *(float *)*puVar1;
    fVar10 = fVar10 * fVar10 + fVar8 * fVar8;
    if (fVar10 < 0.0) {
      fVar10 = (float)FUN_18061e150(fVar10);
    }
    else {
      fVar10 = SQRT(fVar10);
    }
  }
  else {
    fVar10 = *(float *)puVar1[2];
  }
  uVar13 = 0x7fffffff;
  if (*(char *)param_1[1] == '\0') {
    fVar9 = 0.0;
  }
  else {
    puVar1 = (undefined8 *)param_1[2];
    fVar8 = *(float *)*puVar1;
    fVar12 = ((float *)*puVar1)[1];
    if (fVar9 < *(float *)puVar1[1] - (fVar12 * fVar7 + fVar8 * fVar6)) {
      fVar9 = (float)FUN_1806156a0(*(undefined4 *)puVar1[2]);
      fVar8 = fVar6 * fVar9 + fVar8;
      fVar12 = fVar7 * fVar9 + fVar12;
    }
    fVar9 = (float)FUN_180636c80(fVar12,fVar8);
    for (fVar9 = fVar9 * 57.295776 - *(float *)puVar1[3]; 180.0 < fVar9; fVar9 = fVar9 + -360.0) {
    }
    for (; fVar9 < -180.0; fVar9 = fVar9 + 360.0) {
    }
    fVar9 = (float)((uint)fVar9 & uVar13);
  }
  pfVar2 = (float *)param_1[4];
  fVar6 = *(float *)param_1[3];
  fVar7 = *pfVar2;
  if ((((0.05 < (float)((uint)(fVar9 - fVar7) & uVar13)) || (param_3 == 0)) ||
      (param_3 != *(int *)param_1[5])) || (*(int *)param_1[6] == *(int *)param_1[5])) {
    bVar5 = false;
  }
  else {
    bVar5 = true;
  }
  if ((fVar6 + 0.001 < fVar10) ||
     (((float)((uint)(fVar10 - fVar6) & uVar13) <= 0.001 &&
      (((*(char *)param_1[1] != '\0' && (fVar9 < fVar7 - 0.05)) || (bVar5)))))) {
    pfVar3 = (float *)param_1[7];
    *(float *)param_1[3] = fVar10;
    *pfVar3 = param_2;
    piVar4 = (int *)param_1[6];
    *pfVar2 = fVar9;
    *piVar4 = param_3;
  }
  return;
}



