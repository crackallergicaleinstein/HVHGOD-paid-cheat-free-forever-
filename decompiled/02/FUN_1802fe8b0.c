// FUN_1802fe8b0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802fe8b0 */

void FUN_1802fe8b0(undefined8 *param_1,float param_2)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  undefined1 auVar7 [64];
  float fVar8;
  float fVar9;
  
  pfVar1 = (float *)&DAT_0000000c;
  if (*(longlong *)(*(longlong *)*param_1 + 0x30) != 0) {
    pfVar1 = (float *)(*(longlong *)(*(longlong *)*param_1 + 0x30) + 0x1c);
  }
  auVar7 = ZEXT464((uint)(*pfVar1 * 0.017453292));
  fVar2 = (float)FUN_180638e00(*pfVar1 * 0.017453292);
  fVar3 = (float)FUN_180637540(auVar7._0_8_);
  fVar8 = *(float *)param_1[2];
  auVar7 = ZEXT464((uint)fVar8);
  uVar6 = (ulonglong)(uint)fVar8;
  pfVar1 = (float *)param_1[1];
  fVar9 = (fVar3 * pfVar1[1] + fVar2 * *pfVar1) * fVar8;
  fVar8 = (fVar3 * *pfVar1 - fVar2 * pfVar1[1]) * fVar8;
  fVar2 = fVar9 * fVar9 + fVar8 * fVar8;
  if (fVar2 < 0.0) {
    uVar4 = FUN_18061e150();
    uVar6 = auVar7._0_8_;
  }
  else {
    uVar4 = (ulonglong)(uint)SQRT(fVar2);
  }
  fVar2 = (float)uVar4;
  if (0.0001 < fVar2) {
    fVar8 = fVar8 / fVar2;
    fVar9 = fVar9 / fVar2;
    uVar5 = FUN_1806156a0(uVar4,uVar6);
    fVar2 = fVar9 * ((float *)param_1[4])[1] + fVar8 * *(float *)param_1[4];
    fVar3 = (float)FUN_1806156a0(uVar5,*(undefined4 *)param_1[3]);
    if (0.0 < fVar3 - fVar2) {
      fVar2 = (float)FUN_1806156a0((float)uVar5 * *(float *)param_1[5] * param_2 *
                                   *(float *)param_1[6]);
      *(float *)param_1[4] = fVar2 * fVar8 + *(float *)param_1[4];
      *(float *)(param_1[4] + 4) = fVar2 * fVar9 + *(float *)(param_1[4] + 4);
    }
  }
  return;
}



