// FUN_1802c59a0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802c59a0 */

undefined8 * FUN_1802c59a0(undefined8 *param_1,undefined8 *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined8 *puVar5;
  longlong lVar6;
  float *pfVar7;
  undefined1 auVar8 [16];
  short sVar9;
  undefined1 auVar10 [64];
  undefined1 auVar11 [64];
  float local_res8;
  float local_resc;
  float local_38;
  float local_34;
  float local_30;
  
  fVar1 = param_3[1];
  puVar5 = (undefined8 *)*param_1;
  fVar2 = param_3[2];
  lVar6 = puVar5[1];
  fVar3 = *param_3;
  pfVar7 = (float *)*puVar5;
  fVar4 = *(float *)puVar5[2];
  local_38 = (fVar1 * *(float *)(lVar6 + 0x34) + fVar3 * *(float *)(lVar6 + 0x28) +
             fVar2 * *(float *)(lVar6 + 0x1c)) * fVar4 + *pfVar7;
  local_34 = (fVar1 * *(float *)(lVar6 + 0x38) + fVar3 * *(float *)(lVar6 + 0x2c) +
             fVar2 * *(float *)(lVar6 + 0x20)) * fVar4 + pfVar7[1];
  fVar1 = fVar1 * *(float *)(lVar6 + 0x3c) + fVar3 * *(float *)(lVar6 + 0x30) +
          fVar2 * *(float *)(lVar6 + 0x24);
  local_30 = fVar1 * fVar4 + pfVar7[2];
  FUN_180419d90(fVar1,&local_res8,&local_38,param_1[1] + 0x50);
  auVar11 = ZEXT464((uint)local_res8);
  if ((((local_res8 == 57005.0) || (auVar10 = ZEXT464((uint)local_resc), local_resc == 57005.0)) ||
      (sVar9 = thunk_FUN_180624430(local_res8), 0 < sVar9)) ||
     (sVar9 = thunk_FUN_180624430(auVar10._0_8_), 0 < sVar9)) {
    *(undefined1 *)(param_2 + 1) = 0;
  }
  else {
    auVar8 = vunpcklps_avx(auVar11._0_16_,auVar10._0_16_);
    *param_2 = auVar8._0_8_;
    *(undefined1 *)(param_2 + 1) = 1;
  }
  return param_2;
}



